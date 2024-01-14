#pragma once

#include "SDK.hpp"

#include <detours.h>
#include <iostream>
#include <unordered_map>
#include <random>
#include <filesystem>

#include "discord.h"

// #define DEVELOPER_BUILD

namespace fs = std::filesystem;

enum ENetMode
{
	NM_Standalone,
	NM_DedicatedServer,
	NM_ListenServer,
	NM_Client,
	NM_MAX,
};

struct FFrame
{
	char pad[0x10];
	class UFunction* Node;
	UObject* Object;
	uint8* Code;
	uint8* Locals;
};

namespace Globals
{
	static inline bool bSiphonEnabled = true;
	static inline bool bLogProcessEvent = false;
	static inline bool bCreative = false; // Playlist->bEnableCreativeMode
	static inline bool bLateGame = false;
	// static inline bool bMinimumPlayersToDropLS = 1;
	static inline bool bPlayground = false;
	static inline bool bRestarting = false;
	static inline bool bNoMCP = true;
	static int AmountOfRestarts = 0;
}

static ENetMode (*GetNetMode)() = decltype(GetNetMode)(__int64(GetModuleHandleW(0)) + 0x34d2140);
static bool (*IsNoMCP)() = decltype(IsNoMCP)(__int64(GetModuleHandleW(0)) + 0x161d600);

static UFortEngine* GEngine = decltype(GEngine)(*(uintptr_t*)((uintptr_t)GetModuleHandleW(0) + 0x65A40A0));

#define ANY_PACKAGE (UObject*)-1
#define CREATE_HOOK(Detour, Original) DetourTransactionBegin(); DetourUpdateThread(GetCurrentThread()); DetourAttach(&(void*&)Original, Detour); DetourTransactionCommit();
#define REMOVE_HOOK(Detour, Original) DetourTransactionBegin(); DetourUpdateThread(GetCurrentThread()); DetourDetach(&(void*&)Original, Detour); DetourTransactionCommit();

static __forceinline UWorld* GetWorld()
{
	return GEngine->GameViewport->World;
}

static UInterface* (*GetInterfaceInObjectFromStaticClassOriginal)(UObject* Object, UClass* a2) =
	decltype(GetInterfaceInObjectFromStaticClassOriginal)(__int64(GetModuleHandleW(0)) + 0x22EC6A0);
// ^ https://github.com/EpicGames/UnrealEngine/blob/cdaec5b33ea5d332e51eee4e4866495c90442122/Engine/Source/Runtime/CoreUObject/Private/UObject/UObjectBaseUtility.cpp#L530 MAYBE??

template <typename InterfaceClass>
static InterfaceClass* GetInterfaceInObjectFromStaticClass(UObject* Object)
{
	return (InterfaceClass*)GetInterfaceInObjectFromStaticClassOriginal(Object, InterfaceClass::StaticClass());
}

static UPackage* GetTransientPackage()
{
	return UObject::FindObject<UPackage>("/Engine/Transient");
}

inline void SendMessageToConsole(AFortPlayerController* PlayerController, FString Msg)
{
	float MsgLifetime = 1; // unused by ue
	FName TypeName = FName(); // auto set to "Event"

	PlayerController->ClientMessage(Msg, TypeName, MsgLifetime);
}


template <typename T>
static __forceinline T* Cast(UObject* Object, bool bCheckType = true)
{
	if (bCheckType)
	{
		if (Object && Object->IsA(T::StaticClass()))
		{
			return (T*)Object;
		}
	}
	else
	{
		return (T*)Object;
	}

	return nullptr;
}

static void (*KickPlayerO)(AGameSession* GameSession, AController*) = decltype(KickPlayerO)((uintptr_t)GetModuleHandleW(0) + 0x17F07B0);

static void KickPlayer(APlayerController* Controller, FString Reason = L"You have been kicked")
{
	Controller->ClientReturnToMainMenu(Reason);
	KickPlayerO(GetWorld()->AuthorityGameMode->GameSession, Controller);
}

static void KillPlayer(AFortPlayerController* PlayerController)
{
	std::cout << "suicide!\n";

	auto Pawn = PlayerController->MyFortPawn;

	if (Pawn)
	{
		Pawn->ForceKill(FGameplayTag(), nullptr, nullptr);
	}

	// set deathreport
}

static void (*CollectGarbage)() = decltype(CollectGarbage)((uintptr_t)GetModuleHandleW(0) + 0x227D720);

static void (*TickFlush)(UNetDriver*) =
	decltype(TickFlush)((uintptr_t)GetModuleHandle(0) + 0x31EECB0);

static FGameplayAbilitySpecHandle* (*GiveAbility)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle*, FGameplayAbilitySpec) =
	decltype(GiveAbility)((uintptr_t)GetModuleHandle(0) + 0x935010);

static void (*OnDamageServer)(ABuildingActor* BuildingActor, float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, AController* InstigatedBy,
	AActor* DamageCauser, FGameplayEffectContextHandle EffectContext) = decltype(OnDamageServer)((uintptr_t)GetModuleHandle(0) + 0x1CC36A0);

static void (*ClientOnPawnDied)(AFortPlayerControllerAthena*, FFortPlayerDeathReport) = decltype(ClientOnPawnDied)((uintptr_t)GetModuleHandle(0) + 0x1F34E50);

static void (*ClearAbility)(UAbilitySystemComponent* AbilitySystemComponent, const FGameplayAbilitySpecHandle& Handle) = decltype(ClearAbility)(__int64(GetModuleHandleW(0)) + 0x9233D0);

static FName StringToName(const FString& String)
{
	return UKismetStringLibrary::StaticClass()->CreateDefaultObject<UKismetStringLibrary>()->Conv_StringToName(String);
}

// i dont think it can ever actually be max
static double GetRandomDouble(float Min, float Max)
{
	std::random_device rd;
	std::mt19937 gen(rd());

	std::uniform_real_distribution<> distr(Min, Max);

	return distr(gen);
}

static float GetRandomFloat(float Min, float Max) // bruh
{
	return GetRandomDouble(Min, Max);
}

static int GetRandomInt(int Min, int Max)
{
	std::random_device rd;
	std::mt19937 gen(rd());

	std::uniform_int<> distr(Min, Max);

	return distr(gen);
}

template <typename T>
static T* GetRandomObjectOfClass(bool bUseCache, bool bSaveToCache, UClass* Class = T::StaticClass())
{
	std::vector<UObject*> AllObjects;
	static std::unordered_map<UClass*, std::vector<UObject*>> objectLists;

	if (bUseCache)
	{
		auto pos = objectLists.find(Class);

		if (pos != objectLists.end())
			AllObjects = objectLists.at(Class);
	}

	if (AllObjects.empty())
	{
		for (int i = 0; i < UObject::GObjects->Num(); i++)
		{
			auto Object = UObject::GObjects->GetObjectById(i);

			if (!Object)
				continue;

			if (Object->IsA(Class))
				AllObjects.push_back(Object);
		}

		if (bSaveToCache)
			objectLists.emplace(Class, AllObjects);
	}

	T* RandObject = nullptr;

	while (!RandObject || RandObject->GetFullName().contains("Default")) // skunked
	{
		auto random = (int)GetRandomFloat(1, AllObjects.size() - 1); // idk if the -1 is needed
		random = random <= 0 ? 1 : random; // we love default objects
		RandObject = (T*)AllObjects.at(random);
	}

	return RandObject;
}

static int GetClipSize(UFortWeaponItemDefinition* WeaponDef)
{
	if (!WeaponDef)
		return 0;

	auto Table = WeaponDef->WeaponStatHandle.DataTable;

	if (!Table)
		return 0;

	auto Row = (FFortRangedWeaponStats*)Table->RowMap[WeaponDef->WeaponStatHandle.RowName];

	if (!Row)
		return 0;

	return Row->ClipSize;
}

static FFortItemEntry* FindReplicatedEntry(AFortPlayerController* PlayerController, UFortItemDefinition* ItemDef)
{
	if (!PlayerController->WorldInventory)
		return nullptr;

	for (int i = 0; i < PlayerController->WorldInventory->Inventory.ReplicatedEntries.Num(); i++)
	{
		if (PlayerController->WorldInventory->Inventory.ReplicatedEntries[i].ItemDefinition == ItemDef)
			return &PlayerController->WorldInventory->Inventory.ReplicatedEntries[i];
	}

	return nullptr;
}

static void ApplyCID(AFortPlayerState* PlayerState, UAthenaCharacterItemDefinition* CID, AFortPlayerPawn* Pawn = nullptr)
{
	if (!CID || !CID->HeroDefinition)
		return;

	PlayerState->CharacterData.Parts[0] = nullptr;
	PlayerState->CharacterData.Parts[1] = nullptr;
	PlayerState->CharacterData.Parts[2] = nullptr;
	PlayerState->CharacterData.Parts[3] = nullptr;
	PlayerState->CharacterData.Parts[4] = nullptr;
	PlayerState->CharacterData.Parts[5] = nullptr;

	auto& Specializations = CID->HeroDefinition->Specializations;

	for (int i = 0; i < Specializations.Num(); i++)
	{
		auto& SpecializationSoft = Specializations[i];

		auto Specialization = SpecializationSoft.Get();

		if (Specialization)
		{
			auto& CharacterParts = Specialization->CharacterParts;

			bool aa;

			TArray<UCustomCharacterPart*> CharacterPartsaa;

			for (int z = 0; z < CharacterParts.Num(); z++)
			{
				auto& CharacterPartSoft = CharacterParts[z];
				auto CharacterPart = CharacterPartSoft.Get();

				CharacterPartsaa.Add(CharacterPart);

				continue;

				if (!Pawn)
					PlayerState->CharacterData.Parts[z] = CharacterPart;
				else
					Pawn->ServerChoosePart((EFortCustomPartType)z, CharacterPart);
			}

			UFortKismetLibrary::ApplyCharacterCosmetics(GetWorld(), CharacterPartsaa, PlayerState, &aa);
			CharacterPartsaa.Free();
		}
	}

	PlayerState->HeroType = CID->HeroDefinition;
	PlayerState->OnRep_HeroType();
	PlayerState->OnRep_CharacterData();
}

static AFortWorldSettings* GetFortWorldSettings(UWorld* World, bool bCheckStreamingPersistent = false, bool bChecked = true)
{
	return Cast<AFortWorldSettings>(GetWorld()->K2_GetWorldSettings());

	// https://github.com/EpicGames/UnrealEngine/blob/cdaec5b33ea5d332e51eee4e4866495c90442122/Engine/Source/Runtime/Engine/Private/World.cpp#L5475

	auto PersistentLevel = World->PersistentLevel;

	if (!PersistentLevel)
		return nullptr;

	auto Ret = PersistentLevel->WorldSettings;

	if (bCheckStreamingPersistent && World->StreamingLevels.Num() > 0)
	{
		if (World->StreamingLevels.Num() > 0 &&
			World->StreamingLevels[0] &&
			World->StreamingLevels[0]->IsA(ULevelStreamingPersistent::StaticClass()))
		{
			auto Level = World->StreamingLevels[0]->LoadedLevel;

			if (Level)
			{
				Ret = World->StreamingLevels[0]->LoadedLevel->WorldSettings;
			}
		}
	}

	return Cast<AFortWorldSettings>(Ret);
}

static FVector GetActorLocation(AActor* Actor)
{
	return Actor->RootComponent ?  /* Actor->RootComponent->ComponentToWorld.Translation */ Actor->RootComponent->K2_GetComponentToWorld().Translation : FVector();
}

static __int64 (*ApplyCustomizationToCharacter)(AFortPlayerState* a1) = decltype(ApplyCustomizationToCharacter)(__int64(GetModuleHandleW(0)) + 0x1A1FE80);

static AOnlineBeaconHost* BeaconHost = nullptr;

static ENetMode GetNetModeHook() { /* std::cout << "AA!\n"; */ return ENetMode::NM_DedicatedServer; }
static bool IsNoMCPHook() { return true; }

static inline UFortPlaylistAthena* GetCurrentPlaylist()
{
	auto GameState = Cast<AFortGameStateAthena>(GetWorld()->GameState);
	return GameState->CurrentPlaylistInfo.BasePlaylist;
}

inline void RestartServer()
{
	auto GameMode = Cast<AFortGameModeAthena>(GetWorld()->AuthorityGameMode);

	if (!GameMode)
		return;

	Globals::bRestarting = true;
	
	// REMOVE_HOOK(GetNetModeHook, GetNetMode);
	// REMOVE_HOOK(IsNoMCPHook, IsNoMCP);

	// *(bool*)(__int64(GetModuleHandleW(0)) + 0x637925B) = true; // GIsClient // fixes Failed to listen
	// *(bool*)(__int64(GetModuleHandleW(0)) + 0x637925C) = false; // GIsServer

	std::cout << "BeaconHost: " << BeaconHost << '\n';

	if (BeaconHost)
	{
		static char (*DestroyBeacon)(AOnlineBeacon* a1) = decltype(DestroyBeacon)(__int64(GetModuleHandleW(0)) + 0x6E8740);
		DestroyBeacon(BeaconHost);
		BeaconHost->K2_DestroyActor();
		BeaconHost = nullptr;
	}

	auto NetDriver = GetWorld()->NetDriver;

	if (NetDriver)
	{
		void (*ShutdownWorldNetDriver)(UEngine* Engine, UWorld* World) = decltype(ShutdownWorldNetDriver)(__int64(GetModuleHandleW(0)) + 0x348FB90);
		ShutdownWorldNetDriver(GEngine, GetWorld());
		GetWorld()->NetDriver = nullptr;
	}

	// GetWorld()->LevelCollections[0].NetDriver = nullptr;
	// GetWorld()->LevelCollections[1].NetDriver = nullptr;

	// GameMode->RestartGame(); // idk why tf this doesnt switchlevel
	// UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), L"open frontend", nullptr);
	UGameplayStatics::OpenLevel(GetWorld(), StringToName(L"Athena_Terrain"), true, FString());
	UptimeWebHook.send_message("Servers restarting!");
}

static UFortPlaylistAthena* GetPlaylistToUse()
{
	UFortPlaylistAthena* Playlist = Globals::bCreative ? UObject::FindObject<UFortPlaylistAthena>("/Game/Athena/Playlists/Creative/Playlist_PlaygroundV2.Playlist_PlaygroundV2") :
		(Globals::bPlayground ? UObject::FindObject<UFortPlaylistAthena>("/Game/Athena/Playlists/Playground/Playlist_Playground.Playlist_Playground") :
			UObject::FindObject<UFortPlaylistAthena>("/Game/Athena/Playlists/Playlist_DefaultSolo.Playlist_DefaultSolo")
			// UObject::FindObject<UFortPlaylistAthena>("/Game/Athena/Playlists/gg/Playlist_Gg_Reverse.Playlist_Gg_Reverse")
			// UObject::FindObject<UFortPlaylistAthena>("/Game/Athena/Playlists/Playlist_DefaultDuo.Playlist_DefaultDuo")
			// UObject::FindObject<UFortPlaylistAthena>("/Game/Athena/Playlists/Trios/Playlist_Trios.Playlist_Trios")
			// UObject::FindObject<UFortPlaylistAthena>("/Game/Athena/Playlists/Low/Playlist_Low_Solo.Playlist_Low_Solo")
			// UObject::FindObject<UFortPlaylistAthena>("/Game/Athena/Playlists/Music/Playlist_Music_High.Playlist_Music_High")
			// UObject::FindObject<UFortPlaylistAthena>("/Game/Athena/Playlists/Ashton/Playlist_Ashton_Lg.Playlist_Ashton_Lg")
			);

	return Playlist;
}

#define ENUM_CLASS_FLAGS(Enum) \
	inline           Enum& operator|=(Enum& Lhs, Enum Rhs) { return Lhs = (Enum)((__underlying_type(Enum))Lhs | (__underlying_type(Enum))Rhs); } \
	inline           Enum& operator&=(Enum& Lhs, Enum Rhs) { return Lhs = (Enum)((__underlying_type(Enum))Lhs & (__underlying_type(Enum))Rhs); } \
	inline           Enum& operator^=(Enum& Lhs, Enum Rhs) { return Lhs = (Enum)((__underlying_type(Enum))Lhs ^ (__underlying_type(Enum))Rhs); } \
	inline constexpr Enum  operator| (Enum  Lhs, Enum Rhs) { return (Enum)((__underlying_type(Enum))Lhs | (__underlying_type(Enum))Rhs); } \
	inline constexpr Enum  operator& (Enum  Lhs, Enum Rhs) { return (Enum)((__underlying_type(Enum))Lhs & (__underlying_type(Enum))Rhs); } \
	inline constexpr Enum  operator^ (Enum  Lhs, Enum Rhs) { return (Enum)((__underlying_type(Enum))Lhs ^ (__underlying_type(Enum))Rhs); } \
	inline constexpr bool  operator! (Enum  E)             { return !(__underlying_type(Enum))E; } \
	inline constexpr Enum  operator~ (Enum  E)             { return (Enum)~(__underlying_type(Enum))E; }

ENUM_CLASS_FLAGS(EFortPickupSourceTypeFlag)

inline UFortGlobals* GetFortGlobals()
{
	auto FortGlobals = Cast<UFortGlobals>(GEngine->GameSingleton);
	return FortGlobals;
}

static void GiveFortAbilitySet(UAbilitySystemComponent* ASC, UFortAbilitySet* FortAbilitySet)
{
	for (int i = 0; i < FortAbilitySet->GameplayAbilities.Num(); i++)
	{
		UClass* AbilityClass = FortAbilitySet->GameplayAbilities[i];
		UGameplayAbility* AbilityDefaultObject = (UGameplayAbility*)AbilityClass->CreateDefaultObject();

		FGameplayAbilitySpecHandle Handle{};
		Handle.GenerateNewHandle();

		FGameplayAbilitySpec Spec{ -1, -1, -1 };
		Spec.Ability = AbilityDefaultObject;
		Spec.Level = 0;
		Spec.InputID = -1;
		Spec.Handle = Handle;

		GiveAbility(ASC, &Handle, Spec);
	}
}

static void GiveFortAbilitySet(AFortPlayerState* PlayerState, UFortAbilitySet* FortAbilitySet)
{
	auto ASIA = nullptr; // GetInterfaceInObjectFromStaticClass<UAbilitySystemInterface>(PlayerState);

	std::cout << "ASIA: " << ASIA << '\n';

	if (!ASIA)
	{
		GiveFortAbilitySet(PlayerState->AbilitySystemComponent, FortAbilitySet);
	}
	else
	{
		TScriptInterface<UAbilitySystemInterface> ASIAScriptInterface{};
		ASIAScriptInterface.ObjectPointer = PlayerState;
		ASIAScriptInterface.InterfacePointer = ASIA;
		UFortKismetLibrary::EquipFortAbilitySet(ASIAScriptInterface, FortAbilitySet, nullptr);
	}
}

static void ApplyModifierItemDefinition(UFortGameplayModifierItemDefinition* Modifier, UAbilitySystemComponent* ASC)
{
	for (int j = 0; j < Modifier->PersistentAbilitySets.Num(); j++)
	{
		auto& AbilitySet = Modifier->PersistentAbilitySets[j];

		if (AbilitySet.DeliveryRequirements.bConsiderTeam)
			continue; // UNSUPPORTED

		if (!AbilitySet.DeliveryRequirements.bApplyToPlayerPawns)
			continue;

		auto AbilitySets = AbilitySet.AbilitySets;

		if (!AbilitySets.Data)
			continue;

		for (int k = 0; k < AbilitySets.Num(); k++)
		{
			auto& AbilitySetClassSoft = AbilitySets[k];
			auto AbilitySetClass = AbilitySetClassSoft.Get();

			if (!AbilitySetClass)
				continue;

			GiveFortAbilitySet(ASC, AbilitySetClass);
		}
	}

	return;

	for (int j = 0; j < Modifier->PersistentGameplayEffects.Num(); j++)
	{
		auto& GameplayEffect = Modifier->PersistentGameplayEffects[j];

		if (GameplayEffect.DeliveryRequirements.bConsiderTeam)
			continue; // UNSUPPORTED

		if (!GameplayEffect.DeliveryRequirements.bApplyToPlayerPawns)
			continue;

		auto GameplayEffects = GameplayEffect.GameplayEffects;

		if (!GameplayEffects.Data)
			continue;

		for (int k = 0; k < GameplayEffects.Num(); k++)
		{
			auto& GameplayEffectInfo = GameplayEffects[k];
			auto GameplayEffectClassSoft = GameplayEffectInfo.GameplayEffect;
			auto GameplayEffectClass = GameplayEffectClassSoft.ObjectID.AssetPathName.ComparisonIndex ? GameplayEffectClassSoft.Get() : nullptr;

			if (!GameplayEffectClass)
				continue;

			FGameplayEffectContextHandle contextHandle{};

			ASC->BP_ApplyGameplayEffectToSelf(GameplayEffectClass, GameplayEffectInfo.Level, contextHandle);
		}
	}
}

static void StartAircraft()
{
	auto GameMode = Cast<AFortGameModeAthena>(GetWorld()->AuthorityGameMode);
	auto GameState = Cast<AFortGameStateAthena>(GameMode->GameState);

	float skid = 11.f;

	float Duration = skid;
	float EarlyDuration = skid;

	auto TimeSeconds = UGameplayStatics::GetTimeSeconds(GetWorld());

	GameState->WarmupCountdownEndTime = TimeSeconds + Duration;
	GameMode->WarmupCountdownDuration = Duration;

	GameState->WarmupCountdownStartTime = TimeSeconds;
	GameMode->WarmupEarlyCountdownDuration = EarlyDuration;

	// UptimeWebHook.send_embed("Aircraft is starting!", "", 65535);
}