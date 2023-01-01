#pragma once

#include "framework.h"

#include "rebooting.h"
#include "inventory.h"
#include <random>
#include <functional>

static inline std::vector<std::pair<UFunction*, std::function<bool(UObject*, UFunction*, void*)>>> FunctionsToHook;

void AddHook(UFunction* Function, std::function<bool(UObject*, UFunction*, void*)> callback)
{
	if (Function)
		FunctionsToHook.push_back({ Function, callback });
}

static void ActivateAbility(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle Ability, FPredictionKey PredictionKey, FGameplayEventData* EventData = nullptr)
{
	FGameplayAbilitySpec* Spec = nullptr;

	for (int i = 0; i < AbilitySystemComponent->ActivatableAbilities.Items.Num(); i++)
	{
		if (AbilitySystemComponent->ActivatableAbilities.Items[i].Handle.Handle == Ability.Handle)
		{
			Spec = &AbilitySystemComponent->ActivatableAbilities.Items[i];
			break;
		}
	}

	if (!Spec)
	{
		AbilitySystemComponent->ClientActivateAbilityFailed(Ability, PredictionKey.Current);
		return;
	}

	UGameplayAbility* InstancedAbility;
	Spec->InputPressed = true;

	static bool (*InternalTryActivateAbility)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle Handle, FPredictionKey InPredictionKey, UGameplayAbility** OutInstancedAbility, void* OnGameplayAbilityEndedDelegate, const FGameplayEventData * TriggerEventData) =
		decltype(InternalTryActivateAbility)((uintptr_t)GetModuleHandleW(0) + 0x9367F0);

	if (!InternalTryActivateAbility(AbilitySystemComponent, Ability, PredictionKey, &InstancedAbility, nullptr, EventData))
	{
		AbilitySystemComponent->ClientActivateAbilityFailed(Ability, PredictionKey.Current);
		Spec->InputPressed = false;

		AbilitySystemComponent->ActivatableAbilities.MarkArrayDirty();
	}
}

static void ServerTryActivateAbilityHook(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle Handle, bool InputPressed, FPredictionKey PredictionKey)
{
	ActivateAbility(AbilitySystemComponent, Handle, PredictionKey);
}

static void ServerTryActivateAbilityWithEventDataHook(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle Handle, bool InputPressed, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData)
{
	std::cout << "brudda!\n";
	ActivateAbility(AbilitySystemComponent, Handle, PredictionKey, &TriggerEventData);
}

static void (*ServerAbilityRPCBatch)(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilities_FServerAbilityRPCBatch BatchInfo);

static void ServerAbilityRPCBatchHook(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilities_FServerAbilityRPCBatch BatchInfo)
{
	ActivateAbility(AbilitySystemComponent, BatchInfo.AbilitySpecHandle, BatchInfo.PredictionKey, nullptr);

	return ServerAbilityRPCBatch(AbilitySystemComponent, BatchInfo);
}

char SpawnLootHook(ABuildingContainer* BuildingContainer, AFortPlayerPawnAthena* Pawn, int idk, int idk2)
{
	BuildingContainer->bAlreadySearched = true;
	BuildingContainer->OnRep_bAlreadySearched();

	std::cout << "idk: " << idk << '\n';
	std::cout << "idk2: " << idk2 << '\n';

	auto SearchLootTierGroup = BuildingContainer->SearchLootTierGroup;
	EFortPickupSpawnSource SpawnSource = EFortPickupSpawnSource::Unset;

	static auto LootTreasureFName = UKismetStringLibrary::Conv_StringToName(L"Loot_Treasure");
	static auto Loot_AmmoFName = UKismetStringLibrary::Conv_StringToName(L"Loot_Ammo");

	if (SearchLootTierGroup == LootTreasureFName) // Very bad, we should probably do a loop of all chests and ammo boxes and fix their SearchLootTierGroup.
	{
		SearchLootTierGroup = UKismetStringLibrary::Conv_StringToName(L"Loot_AthenaTreasure");
		SpawnSource = EFortPickupSpawnSource::Chest;
	}

	if (SearchLootTierGroup == Loot_AmmoFName)
	{
		SearchLootTierGroup = UKismetStringLibrary::Conv_StringToName(L"Loot_AthenaAmmoLarge");
		SpawnSource = EFortPickupSpawnSource::AmmoBox;
	}

	std::cout << std::format("[{}] {}\n", BuildingContainer->GetName(), SearchLootTierGroup.ToString());

	auto LootDrops = PickLootDrops(SearchLootTierGroup);

	auto CorrectLocation = BuildingContainer->K2_GetActorLocation() + BuildingContainer->GetActorRightVector() * 70.0f + FVector{ 0, 0, 50 }; // + LootSpawnOffset?

	for (auto& LootDrop : LootDrops)
	{
		SpawnPickup(LootDrop.ItemDefinition, CorrectLocation, LootDrop.Count, EFortPickupSourceTypeFlag::Container, SpawnSource);
	}

	return true;
}

bool (*ReadyToStartMatch)(AFortGameModeAthena* GameMode);

bool ReadyToStartMatchHook(AFortGameModeAthena* GameMode)
{
	if (GetWorld()->OwningGameInstance->LocalPlayers.Num())
		GetWorld()->OwningGameInstance->LocalPlayers.Remove(0);

	TArray<AActor*> Actors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), Globals::bCreative ? AFortPlayerStartCreative::StaticClass() : AFortPlayerStartWarmup::StaticClass(), &Actors);

	int ActorsNum = Actors.Num();

	Actors.Free();

	if (ActorsNum == 0)
		return false;

	*(bool*)(__int64(GetModuleHandleW(0)) + 0x637925B) = false; // GIsClient // for restarting

	auto GameState = Cast<AFortGameStateAthena>(GetWorld()->GameState);

	static bool aa = false;

	if (!aa)
	{
		aa = true;
		
		UFortPlaylistAthena* Playlist = // Globals::bCreative ? UObject::FindObject<UFortPlaylistAthena>("/Game/Athena/Playlists/Creative/Playlist_PlaygroundV2.Playlist_PlaygroundV2") : 
			UObject::FindObject<UFortPlaylistAthena>("/Game/Athena/Playlists/Playlist_DefaultSolo.Playlist_DefaultSolo");
			// UObject::FindObject<UFortPlaylistAthena>("/Game/Athena/Playlists/Playground/Playlist_Playground.Playlist_Playground");
		
		GameState->CurrentPlaylistInfo.BasePlaylist = Playlist;
		GameState->CurrentPlaylistInfo.OverridePlaylist = Playlist;

		GameState->CurrentPlaylistInfo.PlaylistReplicationKey++;
		GameState->CurrentPlaylistInfo.MarkArrayDirty();
		GameState->OnRep_CurrentPlaylistInfo();
	}

	if (!Globals::bCreative)
	{
		if (!GameState->MapInfo)
			return false;
	}
	else
	{
		static bool bSkidda = false;

		if (!bSkidda)
		{
			bSkidda = true;
			GetWorld()->SpawnActor<AFortPlayerStartCreative>(FVector(0, 0, 1000000), FRotator());
		}
	}

	static bool bDoOnce = false;

	if (!bDoOnce)
	{
		bDoOnce = true;

		static UNetDriver* (*CreateNetDriver)(UEngine*, UWorld*, FName) = decltype(CreateNetDriver)((uintptr_t)GetModuleHandleW(0) + 0x347FAF0);
		static char (*InitListen)(UNetDriver*, void*, FURL&, bool, FString&) = decltype(InitListen)((uintptr_t)GetModuleHandleW(0) + 0x6F5F90);
		static void (*SetWorld)(UNetDriver*, UWorld*) = decltype(SetWorld)((uintptr_t)GetModuleHandleW(0) + 0x31EDF40);

		GetWorld()->NetDriver = CreateNetDriver(GEngine, GetWorld(), UKismetStringLibrary::Conv_StringToName(L"GameNetDriver"));

		FString Error;
		auto URL = FURL();
		URL.Port = 7777;

		GameMode->GameSession->MaxPlayers = 100;

		GetWorld()->NetDriver->World = GetWorld();
		GetWorld()->NetDriver->NetDriverName = UKismetStringLibrary::Conv_StringToName(L"GameNetDriver");

		InitListen(GetWorld()->NetDriver, GetWorld(), URL, true, Error);
		SetWorld(GetWorld()->NetDriver, GetWorld());

		GetWorld()->NetDriver = GetWorld()->NetDriver;
		GetWorld()->LevelCollections[0].NetDriver = GetWorld()->NetDriver;
		GetWorld()->LevelCollections[1].NetDriver = GetWorld()->NetDriver;

		GameState->PlayersLeft--;
		GameState->OnRep_PlayersLeft();
		GameMode->bWorldIsReady = true; // needed?

		TArray<AActor*> OutActors;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABuildingItemCollectorActor::StaticClass(), &OutActors);

		for (int i = 0; i < OutActors.Num(); i++)
		{
			auto ItemCollector = (ABuildingItemCollectorActor*)OutActors[i];

			auto OverrideLootTierGroup = UKismetStringLibrary::Conv_StringToName(L"Loot_AthenaVending"); // ItemCollector->GetLootTierGroupOverride();
			auto LootDrops = PickLootDrops(OverrideLootTierGroup);

			for (int z = 0; z < 2/* ItemCollector->ItemCollections.Num() */; z++)
			{
				if (z >= LootDrops.size())
					break;

				auto& LootEntry = LootDrops.at(z);

				ItemCollector->ItemCollections[z].OutputItem = (UFortWorldItemDefinition*)LootEntry.ItemDefinition;
				ItemCollector->ItemCollections[z].OutputItemEntry.Add(LootEntry);
				ItemCollector->ItemCollections[z].OverrideOutputItemLootTierGroupName = OverrideLootTierGroup;
			}
		}

		auto SpawnIsland_FloorLoot = UObject::FindObject<UBlueprintGeneratedClass>("/Game/Athena/Environments/Blueprints/Tiered_Athena_FloorLoot_Warmup.Tiered_Athena_FloorLoot_Warmup_C");
		auto BRIsland_FloorLoot = UObject::FindObject<UBlueprintGeneratedClass>("/Game/Athena/Environments/Blueprints/Tiered_Athena_FloorLoot_01.Tiered_Athena_FloorLoot_01_C");

		TArray<AActor*> SpawnIsland_FloorLoot_Actors;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), SpawnIsland_FloorLoot, &SpawnIsland_FloorLoot_Actors);

		TArray<AActor*> BRIsland_FloorLoot_Actors;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), BRIsland_FloorLoot, &BRIsland_FloorLoot_Actors);

		auto SpawnIslandTierGroup = UKismetStringLibrary::Conv_StringToName(L"Loot_AthenaFloorLoot_Warmup");
		auto BRIslandTierGroup = UKismetStringLibrary::Conv_StringToName(L"Loot_AthenaFloorLoot");

		for (int i = 0; i < SpawnIsland_FloorLoot_Actors.Num(); i++)
		{
			ABuildingContainer* CurrentActor = (ABuildingContainer*)SpawnIsland_FloorLoot_Actors[i];

			auto Location = CurrentActor->K2_GetActorLocation();
			Location.Z += 50;

			std::vector<FFortItemEntry> LootDrops = PickLootDrops(SpawnIslandTierGroup);

			if (LootDrops.size())
			{
				for (auto& LootDrop : LootDrops)
					SpawnPickup(LootDrop, Location, EFortPickupSourceTypeFlag::FloorLoot);
			}
		}

		for (int i = 0; i < BRIsland_FloorLoot_Actors.Num(); i++)
		{
			ABuildingContainer* CurrentActor = (ABuildingContainer*)BRIsland_FloorLoot_Actors[i];

			auto Location = CurrentActor->K2_GetActorLocation();
			Location.Z += 50;

			std::vector<FFortItemEntry> LootDrops = PickLootDrops(BRIslandTierGroup);

			if (LootDrops.size())
			{
				for (auto& LootDrop : LootDrops)
					SpawnPickup(LootDrop, Location, EFortPickupSourceTypeFlag::FloorLoot);
			}
		}

		TArray<AActor*> AllVehicleSpawners;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AFortAthenaVehicleSpawner::StaticClass(), &AllVehicleSpawners);

		for (int i = 0; i < AllVehicleSpawners.Num(); i++)
		{
			auto VehicleSpawner = Cast<AFortAthenaVehicleSpawner>(AllVehicleSpawners[i]);

			if (VehicleSpawner)
			{
				auto Vehicle = GetWorld()->SpawnActor<AFortAthenaVehicle>(VehicleSpawner->K2_GetActorLocation(), VehicleSpawner->K2_GetActorRotation(), VehicleSpawner->GetVehicleClass());
			}
		}

		// we should probably do this on OnBuildingActorInitialized like floor loot

		// they have like 65-70% of spawning but im dumb so idk how to add and openai wont work

		/*
		{
			auto TreasureChestMinSpawnPercentCurve = GameState->MapInfo->TreasureChestMinSpawnPercent.Curve;
			auto TreasureChestMaxSpawnPercentCurve = GameState->MapInfo->TreasureChestMaxSpawnPercent.Curve;

			auto TreasureChestMinSpawnPercent = 65;
			auto TreasureChestMaxSpawnPercent = 70;

			static auto ChestClass = GameState->MapInfo->TreasureChestClass; // UObject::FindObject<UClass>("/Game/Building/ActorBlueprints/Containers/Tiered_Chest_Athena.Tiered_Chest_Athena_C");
			TArray<AActor*> AllChests;
			UGameplayStatics::GetAllActorsOfClass(GetWorld(), ChestClass, &AllChests);

			std::random_device rd;
			std::mt19937 gen(rd());
			std::uniform_int_distribution<> dis(1, 100);

			for (int i = 0; i < AllChests.Num(); i++)
			{
				auto Chest = (ABuildingContainer*)AllChests[i];
				int randomPercent = dis(gen);

				if (randomPercent <= TreasureChestMinSpawnPercent && randomPercent >= TreasureChestMaxSpawnPercent) {}
				else { Chest->K2_DestroyActor(); }
			}
		}

		{
			auto AmmoBoxMinSpawnPercentCurve = GameState->MapInfo->AmmoBoxMinSpawnPercent.Curve;
			auto AmmoBoxMaxSpawnPercentCurve = GameState->MapInfo->AmmoBoxMaxSpawnPercent.Curve;

			auto AmmoBoxMinSpawnPercent = 65;
			auto AmmoBoxMaxSpawnPercent = 80;

			static auto AmmoBoxClass = GameState->MapInfo->AmmoBoxClass;
			TArray<AActor*> AllAmmoBoxes;
			UGameplayStatics::GetAllActorsOfClass(GetWorld(), AmmoBoxClass, &AllAmmoBoxes);

			std::random_device rd;
			std::mt19937 gen(rd());
			std::uniform_int_distribution<> dis(1, 100);

			for (int i = 0; i < AllAmmoBoxes.Num(); i++)
			{
				auto AmmoBox = (ABuildingContainer*)AllAmmoBoxes[i];
				int randomPercent = dis(gen);

				if (randomPercent <= AmmoBoxMinSpawnPercent && randomPercent >= AmmoBoxMaxSpawnPercent) {}
				else { AmmoBox->K2_DestroyActor(); }
			}
		} */

		GameMode->WarmupRequiredPlayerCount = Globals::bMinimumPlayersToDropLS;

		static char (*SpawnLoot)(ABuildingContainer * BuildingContainer, AFortPlayerPawnAthena* Pawn, int idk, int idk2) = decltype(SpawnLoot)(__int64(GetModuleHandleW(0)) + 0x13A91C0);
		CREATE_HOOK(SpawnLootHook, SpawnLoot);
	}

	bool ret = ReadyToStartMatch(GameMode); // !Globals::bCreative;
	return ret;
}

void ServerAcknowledgePossessionHook(APlayerController* PlayerController, APawn* P)
{
	PlayerController->AcknowledgedPawn = P;
}

using FArrayProperty = void;

static void (*GenericArray_Get)(void* TargetArray, const FArrayProperty* ArrayProp, int32 Index, void* Item) = decltype(GenericArray_Get)(__int64(GetModuleHandleW(0)) + 0x312BBE0);

static void GenericArray_GetHook(void* TargetArray, const FArrayProperty* ArrayProp, int32 Index, void* Item)
{
	int v9 = 0;
	if (Index < 0 || (v9 = *(int*)(__int64(TargetArray) + 8), Index >= v9))
	{
		// not valid
		return;
	}

	return GenericArray_Get(TargetArray, ArrayProp, Index, Item);
}

void ApplyCID(AFortPlayerStateAthena* PlayerState, UAthenaCharacterItemDefinition* CID)
{
	auto& Specializations = CID->HeroDefinition->Specializations;

	for (int i = 0; i < Specializations.Num(); i++)
	{
		auto& SpecializationSoft = Specializations[i];

		auto Specialization = SpecializationSoft.Get();
		
		if (Specialization)
		{
			auto& CharacterParts = Specialization->CharacterParts;

			for (int z = 0; z < CharacterParts.Num(); z++)
			{
				auto& CharacterPartSoft = CharacterParts[z];
				auto CharacterPart = CharacterPartSoft.Get();

				PlayerState->CharacterData.Parts[z] = CharacterPart;
			}
		}
	}

	PlayerState->HeroType = CID->HeroDefinition;
	PlayerState->OnRep_HeroType();
	PlayerState->OnRep_CharacterData();
}

static void (*HandleStartingNewPlayer)(AFortGameModeAthena* GameMode, AFortPlayerControllerAthena* NewPlayer);

void HandleStartingNewPlayerHook(AFortGameModeAthena* GameMode, AFortPlayerControllerAthena* NewPlayer)
{
	auto GameState = Cast<AFortGameStateAthena>(GameMode->GameState);

	static bool bFirst = true;

	if (bFirst)
	{
		bFirst = false;

		float Duration = 30.f;
		float EarlyDuration = 30.f;

		auto TimeSeconds = UGameplayStatics::GetTimeSeconds(GetWorld());

		GameState->WarmupCountdownEndTime = TimeSeconds + Duration;
		GameMode->WarmupCountdownDuration = Duration;

		GameState->WarmupCountdownStartTime = TimeSeconds;
		GameMode->WarmupEarlyCountdownDuration = EarlyDuration;
	}

	auto PlayerState = Cast<AFortPlayerStateAthena>(NewPlayer->PlayerState);

	if (!PlayerState)
		return;

	std::cout << "handlestartingnewpla;yer!\n";

	NewPlayer->bHasServerFinishedLoading = true;
	NewPlayer->OnRep_bHasServerFinishedLoading();

	PlayerState->bHasStartedPlaying = true;
	PlayerState->OnRep_bHasStartedPlaying();

	static auto PickaxeDefinition = UObject::FindObject<UAthenaPickaxeItemDefinition>("/Game/Athena/Items/Cosmetics/Pickaxes/DefaultPickaxe.DefaultPickaxe");
	static auto WallPiece = UObject::FindObject<UFortItemDefinition>("/Game/Items/Weapons/BuildingTools/BuildingItemData_Wall.BuildingItemData_Wall");
	static auto FloorPiece = UObject::FindObject<UFortItemDefinition>("/Game/Items/Weapons/BuildingTools/BuildingItemData_Floor.BuildingItemData_Floor");
	static auto StairPiece = UObject::FindObject<UFortItemDefinition>("/Game/Items/Weapons/BuildingTools/BuildingItemData_Stair_W.BuildingItemData_Stair_W");
	static auto RoofPiece = UObject::FindObject<UFortItemDefinition>("/Game/Items/Weapons/BuildingTools/BuildingItemData_RoofS.BuildingItemData_RoofS");

	GiveItem(NewPlayer, PickaxeDefinition->WeaponDefinition, 1);
	GiveItem(NewPlayer, WallPiece, 1);
	GiveItem(NewPlayer, FloorPiece, 1);
	GiveItem(NewPlayer, StairPiece, 1);
	GiveItem(NewPlayer, RoofPiece, 1);
	Update(NewPlayer);

	GiveItem(NewPlayer, UObject::FindObject<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Shotgun_Standard_Athena_SR_Ore_T03.WID_Shotgun_Standard_Athena_SR_Ore_T03"), 1);
	GiveItem(NewPlayer, UObject::FindObject<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_AutoHigh_Athena_SR_Ore_T03.WID_Assault_AutoHigh_Athena_SR_Ore_T03"), 1);
	GiveItem(NewPlayer, UObject::FindObject<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Pistol_AutoHeavyPDW_Athena_R_Ore_T03.WID_Pistol_AutoHeavyPDW_Athena_R_Ore_T03"), 1);
	GiveItem(NewPlayer, UObject::FindObject<UFortItemDefinition>("/Game/Athena/Items/Consumables/ShieldSmall/Athena_ShieldSmall.Athena_ShieldSmall"), 6);
	GiveItem(NewPlayer, UObject::FindObject<UFortItemDefinition>("/Game/Athena/Items/Ammo/AthenaAmmoDataShells.AthenaAmmoDataShells"), 999);
	GiveItem(NewPlayer, UObject::FindObject<UFortItemDefinition>("/Game/Athena/Items/Ammo/AthenaAmmoDataBulletsMedium.AthenaAmmoDataBulletsMedium"), 999);
	GiveItem(NewPlayer, UObject::FindObject<UFortItemDefinition>("/Game/Athena/Items/Ammo/AthenaAmmoDataBulletsLight.AthenaAmmoDataBulletsLight"), 999);
	Update(NewPlayer);

	static auto CID = UObject::FindObject<UAthenaCharacterItemDefinition>("/Game/Athena/Items/Cosmetics/Characters/CID_001_Athena_Commando_F_Default.CID_001_Athena_Commando_F_Default");
	static auto HeadPart = UObject::FindObject<UCustomCharacterPart>("/Game/Characters/CharacterParts/Female/Medium/Heads/F_Med_Head1.F_Med_Head1");
	static auto BodyPart = UObject::FindObject<UCustomCharacterPart>("/Game/Characters/CharacterParts/Female/Medium/Bodies/F_Med_Soldier_01.F_Med_Soldier_01");
	static auto BackpackPart = UObject::FindObject<UCustomCharacterPart>("/Game/Characters/CharacterParts/Backpacks/NoBackpack.NoBackpack");

	NewPlayer->CosmeticLoadoutPC.Character = CID;
	NewPlayer->CosmeticLoadoutPC.Pickaxe = PickaxeDefinition;
	// ApplyCID(PlayerState, CID);

	PlayerState->CharacterData.Parts[0] = HeadPart;
	PlayerState->CharacterData.Parts[1] = BodyPart;
	PlayerState->CharacterData.Parts[3] = BackpackPart;
	PlayerState->OnRep_CharacterData();

	static auto GameplayAbilitySet = UObject::FindObject<UFortAbilitySet>("/Game/Abilities/Player/Generic/Traits/DefaultPlayer/GAS_AthenaPlayer.GAS_AthenaPlayer");

	for (int i = 0; i < GameplayAbilitySet->GameplayAbilities.Num(); i++)
	{
		UClass* AbilityClass = GameplayAbilitySet->GameplayAbilities[i];
		UGameplayAbility* AbilityDefaultObject = (UGameplayAbility*)AbilityClass->CreateDefaultObject();

		FGameplayAbilitySpecHandle Handle{};
		Handle.GenerateNewHandle();

		FGameplayAbilitySpec Spec{ -1, -1, -1 };
		Spec.Ability = AbilityDefaultObject;
		Spec.Level = 0;
		Spec.InputID = -1;
		Spec.Handle = Handle;

		GiveAbility(PlayerState->AbilitySystemComponent, &Handle, Spec);
	}

	static constexpr int StartingTeamIndex = 4;
	static int CurrentTeamIndex = StartingTeamIndex;

	PlayerState->TeamIndex = CurrentTeamIndex;

	PlayerState->PlayerTeam = GameState->Teams[CurrentTeamIndex - StartingTeamIndex];
	PlayerState->PlayerTeamPrivate = PlayerState->PlayerTeam->PrivateInfo;
	PlayerState->PlayerTeam->bAlwaysRelevant = true;
	PlayerState->PlayerTeam->TeamMembers.Add(NewPlayer);
	PlayerState->PlayerTeam->Team = PlayerState->TeamIndex;

	PlayerState->SquadId = PlayerState->TeamIndex - 1;
	PlayerState->OnRep_PlayerTeam();
	PlayerState->OnRep_PlayerTeamPrivate();
	PlayerState->OnRep_SquadId();

	FGameMemberInfo MemberInfo{ -1, -1, -1 };
	MemberInfo.TeamIndex = PlayerState->TeamIndex;
	MemberInfo.SquadId = PlayerState->SquadId;
	MemberInfo.MemberUniqueId = PlayerState->UniqueId;

	GameState->GameMemberInfoArray.Members.Add(MemberInfo);
	GameState->GameMemberInfoArray.MarkArrayDirty();

	CurrentTeamIndex++;

	GameState->PlayersLeft++;
	GameState->OnRep_PlayersLeft();

	return HandleStartingNewPlayer(GameMode, NewPlayer);
}

void (*ServerLoadingScreenDropped)(AFortPlayerControllerAthena* PlayerController);

void ServerLoadingScreenDroppedHook(AFortPlayerControllerAthena* PlayerController)
{
	// SpawnRebootCard(PlayerController);
	
	auto MyFortPawn = PlayerController->MyFortPawn;

	// if (MyFortPawn)
		// MyFortPawn->bIsScriptedBot = true;

	// static auto LlamaClass = UObject::FindObject<UClass>("/Game/Athena/SupplyDrops/Llama/AthenaSupplyDrop_Llama.AthenaSupplyDrop_Llama_C");
	// GetWorld()->SpawnActor<AFortAthenaSupplyDrop>(MyFortPawn->K2_GetActorLocation(), FRotator(), LlamaClass);

	auto PlayerState = Cast<AFortPlayerStateAthena>(PlayerController->PlayerState);

	if (PlayerState)
	{
		// ApplyCID(PlayerState, PlayerController->GetRandomDefaultAthenaCharacterDefinition(PlayerController->AthenaProfile)); // tddo: move this
	}

	if (Globals::bCreative)
	{
		static auto OtherRiftClass = UObject::FindObject<UBlueprintGeneratedClass>("/Game/Playgrounds/Items/BGA_IslandPortal.BGA_IslandPortal_C");

		std::cout << "OtherRiftClass: " << OtherRiftClass << '\n';

		if (OtherRiftClass && MyFortPawn)
		{
			auto Rift = GetWorld()->SpawnActor<AFortAthenaCreativePortal>(MyFortPawn->K2_GetActorLocation(), FRotator(), OtherRiftClass);
		}
	}

	return ServerLoadingScreenDropped(PlayerController);
}

void (*ServerSetInAircraft)(AFortPlayerStateAthena* PlayerState, bool bNewInAircraft);

void ServerSetInAircraftHook(AFortPlayerStateAthena* PlayerState, bool bNewInAircraft)
{
	auto PlayerController = Cast<AFortPlayerControllerAthena>(PlayerState->GetOwner());

	if (!PlayerController)
		return;

	if (bNewInAircraft)
	{
		auto& InventoryList = PlayerController->WorldInventory->Inventory;

		for (int i = 5; i < InventoryList.ItemInstances.Num(); i++)
		{
			InventoryList.ItemInstances.Remove(i);
		}

		for (int i = 5; i < InventoryList.ReplicatedEntries.Num(); i++)
		{
			InventoryList.ReplicatedEntries.Remove(i);
		}

		Update(PlayerController);

		PlayerState->CurrentShield = 0; // real
	}

	return ServerSetInAircraft(PlayerState, bNewInAircraft);
}

void ServerMoveHook(AFortPhysicsPawn* PhysicsPawn, FReplicatedPhysicsPawnState InState)
{
	auto Mesh = Cast<UPrimitiveComponent>(PhysicsPawn->RootComponent);

	if (!Mesh)
		return;

// #define ROT_TO_QUAT

#ifdef ROT_TO_QUAT
	FRotator Rot = Mesh->K2_GetComponentRotation();
	FQuat Quat = Quaternion(Rot);
#else
	FQuat Quat = InState.Rotation; // Quaternion(Rot);
	FRotator Rot = Rotator(Quat); // Mesh->RelativeRotation
#endif

	// PhysicsPawn->GravityMultiplier

	FTransform Transform{};
	Transform.Translation = InState.Translation;
	Transform.Rotation = Quat; // InState.Rotation;
	Transform.Scale3D = FVector{ 1, 1, 1 };

	PhysicsPawn->SafeTeleportInfo.Location = Transform.Translation;
	PhysicsPawn->SafeTeleportInfo.Rotation = Rot;
	PhysicsPawn->OnRep_SafeTeleportInfo();

	bool bTeleport = false;
	bool bSweep = false;

	// Mesh->K2_SetRelativeLocation(Transform.Translation, bSweep, bTeleport, nullptr);
	Mesh->K2_SetWorldTransform(Transform, bSweep, bTeleport, nullptr);
	Mesh->bComponentToWorldUpdated = true;
	// Mesh->K2_SetRelativeLocationAndRotation(Transform.Translation, Rot, bSweep, bTeleport, nullptr);
	Mesh->SetPhysicsLinearVelocity(InState.LinearVelocity, 0, FName());
	Mesh->SetPhysicsAngularVelocity(InState.AngularVelocity, 0, FName());
}

void ServerUpdateStateSyncHook(AFortPhysicsPawn* PhysicsPawn, TArray<unsigned char> StateSyncData)
{
	MessageBoxA(0, "Hello", "Forge", MB_OK);

	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

	for (int i = 0; i < StateSyncData.Num(); i++)
	{
		std::cout << std::format("[{}] {}\n", i, (int)StateSyncData[i]);
	}

	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}

static void TickFlushHook(UNetDriver* NetDriver)
{
	static void (*ServerReplicateActors)(UReplicationDriver*) = decltype(ServerReplicateActors)((uintptr_t)GetModuleHandleW(0) + 0xA33E90);

	if (NetDriver->ReplicationDriver)
		ServerReplicateActors(NetDriver->ReplicationDriver);

	TickFlush(NetDriver);
}


static void ServerExecuteInventoryItemHook(AFortPlayerControllerAthena* PlayerController, FGuid ItemGuid)
{
	auto Pawn = Cast<AFortPlayerPawnAthena>(PlayerController->Pawn);
	auto PlayerState = Cast<AFortPlayerStateAthena>(PlayerController->PlayerState);

	if (!Pawn || !PlayerState)
		return;

	auto ItemEntry = FindReplicatedEntry(PlayerController, ItemGuid);

	if (!ItemEntry)
		return;

	auto ItemDef = ItemEntry->ItemDefinition;

	if (Pawn->CurrentWeapon)
	{
		if (auto GadgetDef = Cast<UFortDecoItemDefinition>(Pawn->CurrentWeapon->WeaponData)) // is this right?
		{
			// reset character parts here
			ApplyCID(PlayerState, Pawn->CosmeticLoadout.Character);

			// clear the ability set

			/*
			auto AbilitySystemComponent = PlayerState->AbilitySystemComponent;

			UFortAbilitySet* GadgetAbilitySet = GadgetDef->AbilitySet.Get();

			if (GadgetAbilitySet)
			{
				for (int i = 0; i < GadgetAbilitySet->GameplayAbilities.Num(); i++)
				{
					auto currentAbilityDefault = GadgetAbilitySet->GameplayAbilities[i]->CreateDefaultObject<UGameplayAbility>();

					for (int z = 0; z < AbilitySystemComponent->ActivatableAbilities.Items.Num(); z++)
					{
						auto& activatableAbility = AbilitySystemComponent->ActivatableAbilities.Items[z];

						if (activatableAbility.Ability == currentAbilityDefault)
							ClearAbility(AbilitySystemComponent, activatableAbility.Handle);
					}
				}

				for (int i = 0; i < GadgetAbilitySet->GrantedGameplayEffects.Num(); i++)
				{
					auto& currentGameplayEffect = GadgetAbilitySet->GrantedGameplayEffects[i];
					AbilitySystemComponent->RemoveActiveGameplayEffectBySourceEffect(currentGameplayEffect.GameplayEffect, AbilitySystemComponent, 100); 
				}
			}

			static auto AGID_SpookyMist = UObject::FindObject<UAthenaGadgetItemDefinition>("/Game/Athena/Items/Gameplay/SpookyMist/AGID_SpookyMist.AGID_SpookyMist")->GetWeaponItemDefinition();

			if (ItemDef == AGID_SpookyMist)
			{
				auto Pickaxe = FindItemInstance(PlayerController, Pawn->CosmeticLoadout.Pickaxe->WeaponDefinition);

				if (Pickaxe)
					GiveItem(PlayerController, Pickaxe->ItemEntry.ItemDefinition, 1);
			} */
		}
	}

	if (UAthenaGadgetItemDefinition* GadgetDef = Cast<UAthenaGadgetItemDefinition>(ItemDef))
	{
		/* for (int i = 0; i < GadgetDef->CharacterParts.Num(); i++)
		{
			auto CharacterPart = GadgetDef->CharacterParts[i];

			PlayerState->CharacterData.Parts[i] = CharacterPart;
		}

		UFortAbilitySet* GadgetAbilitySet = GadgetDef->AbilitySet.Get();

		if (GadgetAbilitySet)
		{
			for (int i = 0; i < GadgetAbilitySet->GameplayAbilities.Num(); i++)
			{
				auto AbilityToGrant = GadgetAbilitySet->GameplayAbilities[i];

				UGameplayAbility* AbilityDefaultObject = (UGameplayAbility*)AbilityToGrant->CreateDefaultObject();

				FGameplayAbilitySpecHandle Handle{};
				Handle.GenerateNewHandle();

				FGameplayAbilitySpec Spec{ -1, -1, -1 };
				Spec.Ability = AbilityDefaultObject;
				Spec.Level = 0;
				Spec.InputID = -1;
				Spec.Handle = Handle;

				GiveAbility(PlayerState->AbilitySystemComponent, &Handle, Spec);
			}

			for (int i = 0; i < GadgetAbilitySet->GrantedGameplayEffects.Num(); i++)
			{
				auto& GEToGrant = GadgetAbilitySet->GrantedGameplayEffects[i];
				PlayerState->AbilitySystemComponent->BP_ApplyGameplayEffectToTarget(GEToGrant.GameplayEffect, PlayerState->AbilitySystemComponent, GEToGrant.Level, FGameplayEffectContextHandle());
			}
		}

		static auto AGID_SpookyMist = UObject::FindObject<UAthenaGadgetItemDefinition>("/Game/Athena/Items/Gameplay/SpookyMist/AGID_SpookyMist.AGID_SpookyMist");

		if (ItemDef == AGID_SpookyMist)
		{
			auto Pickaxe = FindItemInstance(PlayerController, Pawn->CosmeticLoadout.Pickaxe->WeaponDefinition);

			if (Pickaxe)
				RemoveItem(PlayerController, Pickaxe->ItemEntry.ItemGuid, 1);
		} */

		ItemDef = GadgetDef->GetWeaponItemDefinition();
	}

	else if (auto TrapDef = Cast<UFortTrapItemDefinition>(ItemDef))
	{
		auto WeaponClass = TrapDef->GetWeaponActorClass();

		// if (!WeaponClass)
			// return;

		WeaponClass = UObject::FindObject<UClass>("/Script/FortniteGame.BuildingTrap");

		auto Tool = GetWorld()->SpawnActor<ABuildingTrap>(Pawn->K2_GetActorLocation(), FRotator(), WeaponClass);
		Pawn->PickUpActor(Tool, TrapDef); // Bad

		if (auto ContextTool = Cast<AFortDecoTool_ContextTrap>(Pawn->CurrentWeapon))
		{
			ContextTool->SetContextTrapItemDefinition(Cast<UFortContextTrapItemDefinition>(TrapDef));
		}
	}

	if (!ItemDef)
		return;

	if (auto Weapon = Pawn->EquipWeaponDefinition(Cast<UFortWeaponItemDefinition>(ItemDef), ItemGuid))
	{
	}
}

void ServerSendZiplineStateHook(AFortPlayerPawn* Pawn, FZiplinePawnState InZiplineState)
{
	if (InZiplineState.AuthoritativeValue > Pawn->ZiplineState.AuthoritativeValue)
	{
		Pawn->ZiplineState = InZiplineState;
	}

	static void (*OnRep_ZiplineState)(AFortPlayerPawn* Pawn) = decltype(OnRep_ZiplineState)(__int64(GetModuleHandleW(0)) + 0x1967d30);
	OnRep_ZiplineState(Pawn);
}

void ServerPlayEmoteItemHook(AFortPlayerController* PlayerController, UFortMontageItemDefinitionBase* EmoteAsset)
{
	auto PlayerState = Cast<AFortPlayerStateAthena>(PlayerController->PlayerState);

	if (!EmoteAsset || !PlayerState)
		return;

	UGameplayAbility* AbilityToUse = nullptr;

	if (auto SprayEmoteAsset = Cast<UAthenaSprayItemDefinition>(EmoteAsset))
	{
		static auto SprayGameplayAbilityDefault = UObject::FindObject<UGameplayAbility>("/Game/Abilities/Sprays/GAB_Spray_Generic.Default__GAB_Spray_Generic_C");
		AbilityToUse = SprayGameplayAbilityDefault;
	}
	/* else if (auto ToyEmoteAsset = Cast<UAthenaToyItemDefinition>(EmoteAsset))
	{
		AbilityToUse = ToyEmoteAsset->ToySpawnAbility.Get();
	} */
	
	if (!AbilityToUse)
	{
		static auto EmoteGameplayAbilityDefault = UObject::FindObject<UGameplayAbility>("/Game/Abilities/Emotes/GAB_Emote_Generic.Default__GAB_Emote_Generic_C");
		AbilityToUse = EmoteGameplayAbilityDefault;
	}

	static unsigned int* (*GiveAbilityAndActivateOnce)(UAbilitySystemComponent * ASC, int* outHandle, FGameplayAbilitySpec Spec)
		= decltype(GiveAbilityAndActivateOnce)(__int64(GetModuleHandleW(0)) + 0x935130);

	int outHandle = 0;

	FGameplayAbilitySpecHandle Handle{};
	Handle.GenerateNewHandle();

	FGameplayAbilitySpec Spec{ -1, -1, -1 };
	Spec.Ability = AbilityToUse;
	Spec.Level = 0;
	Spec.InputID = -1;
	Spec.Handle = Handle;
	Spec.SourceObject = EmoteAsset;

	GiveAbilityAndActivateOnce(PlayerState->AbilitySystemComponent, &outHandle, Spec);
}

void (*ServerAttemptInteract)(UFortControllerComponent_Interaction* InteractionComponent, AActor* ReceivingActor, UPrimitiveComponent* InteractComponent,
	TEnumAsByte<ETInteractionType> InteractType, UObject* OptionalObjectData);

void ServerAttemptInteractHook(UFortControllerComponent_Interaction* InteractionComponent, AActor* ReceivingActor, UPrimitiveComponent* InteractComponent,
	TEnumAsByte<ETInteractionType> InteractType, UObject* OptionalObjectData)
{
	static auto LlamaClass = UObject::FindObject<UClass>("/Game/Athena/SupplyDrops/Llama/AthenaSupplyDrop_Llama.AthenaSupplyDrop_Llama_C");

	auto Controller = Cast<AFortPlayerControllerAthena>(InteractionComponent->GetOwner());
	auto Pawn = Controller->MyFortPawn;

	auto CorrectLocation = ReceivingActor->K2_GetActorLocation() + ReceivingActor->GetActorRightVector() * 70.0f + FVector{ 0, 0, 50 }; // + LootSpawnOffset?

	if (auto RebootVan = Cast<ABuildingGameplayActorSpawnMachine>(ReceivingActor))
	{
		HandleReboot(Controller, RebootVan);
	}

	else if (auto Vehicle = Cast<AFortAthenaVehicle>(ReceivingActor))
	{
		ServerAttemptInteract(InteractionComponent, ReceivingActor, InteractComponent, InteractType, OptionalObjectData);

		/* auto CharacterMovement = Cast<UFortMovementComp_Character>(Pawn->CharacterMovement);

		if (!CharacterMovement)
			return;

		void (*SetMovementMode)(UFortMovementComp_Character* MovementComp, EMovementMode MovementMode, EFortCustomMovement CustomMovementMode) = decltype(SetMovementMode)(CharacterMovement->VFT[0xAE]);

		if (Pawn->IsDrivingVehicle())
		{
			SetMovementMode(CharacterMovement, EMovementMode::MOVE_Custom, EFortCustomMovement::Driving);
		}
		else
		{
			SetMovementMode(CharacterMovement, EMovementMode::MOVE_Custom, EFortCustomMovement::Passenger);
		} */

		int SeatIndex = Vehicle->FindSeatIndex(Pawn);
		auto WeaponComponent = Vehicle->GetSeatWeaponComponent(SeatIndex);

		if (WeaponComponent)
		{
			for (int i = 0; i < WeaponComponent->WeaponSeatDefinitions.Num(); i++)
			{
				auto& CurrentDefinition = WeaponComponent->WeaponSeatDefinitions[i];

				if (CurrentDefinition.SeatIndex == SeatIndex)
				{
					auto VehicleWeaponDef = CurrentDefinition.VehicleWeapon;

					if (VehicleWeaponDef)
					{
						/*
						std::cout << "VehicleWeaponDef: " << VehicleWeaponDef->GetFullName() << '\n';
						int Ammo = INT32_MAX;
						auto DIE = Pawn->EquipWeaponDefinition(VehicleWeaponDef, FGuid());
						DIE->AmmoCount = Ammo;
						DIE->OnRep_AmmoCount(0);
						
						auto VehicleWeaponInstance = GiveItem(Controller, VehicleWeaponDef, 1); // Pawn->EquipWeaponDefinition(VehicleWeaponDef, FGuid());
						Update(Controller);
						VehicleWeaponInstance->ItemEntry.LoadedAmmo = Ammo;
						Controller->WorldInventory->Inventory.MarkItemDirty(VehicleWeaponInstance->ItemEntry);
						auto ReplicatedEntry = FindReplicatedEntry(Controller, VehicleWeaponInstance->ItemEntry.ItemDefinition);
						ReplicatedEntry->LoadedAmmo = Ammo;
						Controller->WorldInventory->Inventory.MarkItemDirty(*ReplicatedEntry);
						ServerExecuteInventoryItemHook(Controller, VehicleWeaponInstance->ItemEntry.ItemGuid);
						VehicleWeaponInstance->ItemEntry.LoadedAmmo = Ammo;
						Controller->WorldInventory->Inventory.MarkItemDirty(VehicleWeaponInstance->ItemEntry);
						auto ReplicatedEntry3 = FindReplicatedEntry(Controller, VehicleWeaponInstance->ItemEntry.ItemDefinition);
						ReplicatedEntry3->LoadedAmmo = Ammo;
						Controller->WorldInventory->Inventory.MarkItemDirty(*ReplicatedEntry3);
						auto Weapon = Pawn->EquipWeaponDefinition((UFortWeaponItemDefinition*)VehicleWeaponInstance->ItemEntry.ItemDefinition, VehicleWeaponInstance->ItemEntry.ItemGuid);
						VehicleWeaponInstance->ItemEntry.LoadedAmmo = Ammo;
						Controller->WorldInventory->Inventory.MarkItemDirty(VehicleWeaponInstance->ItemEntry);
						auto ReplicatedEntry2 = FindReplicatedEntry(Controller, VehicleWeaponInstance->ItemEntry.ItemDefinition);
						ReplicatedEntry2->LoadedAmmo = Ammo;
						Controller->WorldInventory->Inventory.MarkItemDirty(*ReplicatedEntry2);
						Weapon->AmmoCount = Ammo;
						Weapon->OnRep_AmmoCount(0); */
					}
				}
			}
		}

		// return;
	}

	/* else if (auto Container = Cast<ABuildingContainer>(ReceivingActor))
	{
		if (Container->bAlreadySearched)
			return;

		Container->bAlreadySearched = true;
		Container->OnRep_bAlreadySearched();

		EFortPickupSpawnSource SpawnSource = EFortPickupSpawnSource::Unset;
		auto SearchLootTierGroup = Container->SearchLootTierGroup;

		if (SearchLootTierGroup.ToString() == "Loot_Treasure") // Very bad, we should probably do a loop of all chests and ammo boxes and fix their SearchLootTierGroup.
		{
			SearchLootTierGroup = UKismetStringLibrary::Conv_StringToName(L"Loot_AthenaTreasure");
			SpawnSource = EFortPickupSpawnSource::Chest;
		}

		if (SearchLootTierGroup.ToString() == "Loot_Ammo")
		{
			SearchLootTierGroup = UKismetStringLibrary::Conv_StringToName(L"Loot_AthenaAmmoLarge");
			SpawnSource = EFortPickupSpawnSource::AmmoBox;
		}

		std::cout << std::format("[{}] {}\n", Container->GetName(), SearchLootTierGroup.ToString());

		auto LootDrops = PickLootDrops(SearchLootTierGroup);

		for (auto& LootDrop : LootDrops)
		{
			SpawnPickup(LootDrop.ItemDefinition, CorrectLocation, LootDrop.Count, EFortPickupSourceTypeFlag::Container, SpawnSource);
		}
	} */

	else if (auto SupplyDrop = Cast<AFortAthenaSupplyDrop>(ReceivingActor))
	{
		auto LootTierGroup = SupplyDrop->IsA(LlamaClass) ? UKismetStringLibrary::Conv_StringToName(L"Loot_AthenaLlama") : UKismetStringLibrary::Conv_StringToName(L"Loot_AthenaSupplyDrop"); // SupplyDrop->GetLootTierGroupOverride();

		std::cout << std::format("[{}] {}\n", SupplyDrop->GetName(), LootTierGroup.ToString());

		auto LootDrops = PickLootDrops(LootTierGroup);

		for (auto& LootDrop : LootDrops)
		{
			SpawnPickup(LootDrop.ItemDefinition, CorrectLocation, LootDrop.Count, EFortPickupSourceTypeFlag::Other, EFortPickupSpawnSource::SupplyDrop);
		}
	}

	return ServerAttemptInteract(InteractionComponent, ReceivingActor, InteractComponent, InteractType, OptionalObjectData);
}

FRotator* GetControlRotationHook(AFortPlayerController* Controller, FRotator* a2)
{
	*a2 = Controller->ControlRotation;
	return a2;
}

void (*OnBuildingActorInitialized)(ABuildingActor* BuildingActor, TEnumAsByte<EFortBuildingInitializationReason> InitializationReason, TEnumAsByte<EFortBuildingPersistentState> BuildingPersistentState);

void OnBuildingActorInitializedHook(ABuildingActor* BuildingActor, TEnumAsByte<EFortBuildingInitializationReason> InitializationReason, TEnumAsByte<EFortBuildingPersistentState> BuildingPersistentState)
{
	static auto SpawnIsland_FloorLoot = UObject::FindObject<UBlueprintGeneratedClass>("/Game/Athena/Environments/Blueprints/Tiered_Athena_FloorLoot_Warmup.Tiered_Athena_FloorLoot_Warmup_C");
	static auto BRIsland_FloorLoot = UObject::FindObject<UBlueprintGeneratedClass>("/Game/Athena/Environments/Blueprints/Tiered_Athena_FloorLoot_01.Tiered_Athena_FloorLoot_01_C");

	std::cout << "SpawnIsland_FloorLoot: " << SpawnIsland_FloorLoot << '\n';

	if (// BuildingPersistentState == EFortBuildingPersistentState::Constructed && 
		(BuildingActor->IsA(SpawnIsland_FloorLoot) || BuildingActor->IsA(BRIsland_FloorLoot)))
	{
		auto BuildingContainer = (ABuildingContainer*)BuildingActor;
		std::vector<FFortItemEntry> LootDrops = PickLootDrops(BuildingContainer->SearchLootTierGroup);

		auto Location = BuildingContainer->K2_GetActorLocation();
		Location.Z += 50;

		if (LootDrops.size())
		{
			for (auto& LootDrop : LootDrops)
				SpawnPickup(LootDrop, Location, EFortPickupSourceTypeFlag::FloorLoot);
		}
	}

	return OnBuildingActorInitialized(BuildingActor, InitializationReason, BuildingPersistentState);
}

void ClientOnPawnDiedHook(AFortPlayerControllerAthena* PlayerController, FFortPlayerDeathReport DeathReport)
{
	auto PlayerState = Cast<AFortPlayerStateAthena>(PlayerController->PlayerState);
	auto KillerPawn = Cast<AFortPlayerPawnAthena>(DeathReport.KillerPawn);
	auto DeadPawn = Cast<AFortPlayerPawnAthena>(PlayerController->Pawn);
	auto KillerPlayerState = Cast<AFortPlayerStateAthena>(DeathReport.KillerPlayerState);
	auto GameMode = Cast<AFortGameModeAthena>(GetWorld()->AuthorityGameMode);
	auto GameState = Cast<AFortGameStateAthena>(GetWorld()->GameState);

	// if (GameState->GamePhase <= EAthenaGamePhase::Aircraft)
		// return ClientOnPawnDied(PlayerController, DeathReport);

	if (PlayerController && PlayerState)
	{
		FDeathInfo DeathInfo;
		DeathInfo.bDBNO = false;
		DeathInfo.DeathLocation = PlayerController->Pawn ? PlayerController->Pawn->K2_GetActorLocation() : FVector();
		// DeathInfo.Distance = Pawn->LastFallDistance;

		DeathInfo.DeathCause = AFortPlayerStateAthena::ToDeathCause(DeathReport.Tags, false);
		DeathInfo.FinisherOrDowner = KillerPlayerState ? KillerPlayerState : PlayerState;

		PlayerState->DeathInfo = DeathInfo;
		PlayerState->OnRep_DeathInfo();

		if (KillerPlayerState && KillerPlayerState != PlayerState)
		{
			KillerPlayerState->KillScore++;
			KillerPlayerState->TeamKillScore++;

			KillerPlayerState->ClientReportKill(PlayerState);
			KillerPlayerState->OnRep_Kills();
		}

		if (Globals::bSiphonEnabled && KillerPawn && KillerPawn != DeadPawn)
		{
			auto Health = KillerPawn->GetHealth();
			auto Shield = KillerPawn->GetShield();

			int MaxHealth = 100;
			int MaxShield = 100;
			int AmountGiven = 0;

			if ((MaxHealth - Health) > 0)
			{
				int AmountToGive = MaxHealth - Health >= 50 ? 50 : MaxHealth - Health;
				KillerPawn->SetHealth(Health + AmountToGive);
				AmountGiven += AmountToGive;
			}

			if ((MaxShield - Shield) > 0 && AmountGiven < 50)
			{
				int AmountToGive = MaxShield - Shield >= 50 ? 50 : MaxShield - Shield;
				AmountToGive -= AmountGiven;

				if (AmountToGive > 0)
				{
					KillerPawn->SetShield(Shield + AmountToGive);
					AmountGiven += AmountToGive;
				}
			}
		}

		if (!GameState->IsRespawningAllowed(PlayerState))
		{
			auto DroppableItems = GetDroppableItems(PlayerController);

			for (int i = 0; i < DroppableItems.size(); i++)
			{
				auto Item = DroppableItems[i];

				if (!Item)
					continue;

				SpawnPickup(Item->ItemEntry, DeathInfo.DeathLocation, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::PlayerElimination);
				RemoveItem(PlayerController, Item->ItemEntry.ItemGuid, Item->ItemEntry.Count);
			}

			Update(PlayerController);

			PlayerController->bMarkedAlive = false;

			auto Winners = GetAlivePlayers();

			for (int i = 0; i < GameMode->AlivePlayers.Num(); i++)
			{
				auto AlivePlayer = GameMode->AlivePlayers[i];

				if (AlivePlayer == PlayerController)
				{
					GameMode->AlivePlayers.Remove(i);
					break;
				}
			}

			GameState->PlayersLeft = Winners.size();
			GameState->TotalPlayers = Winners.size();
			GameState->OnRep_PlayersLeft();

			// SpawnRebootCard(PlayerController);
		}

		/*
		
		if (OnSameTeam(Winners) && Winners.size() != 0)
		{
			for (auto Winner : Winners)
			{
				if (Winner)
					GameState->WinningPlayerList.Add(FFortWinnerPlayerData{ Winner->PlayerID });
			}

			GameState->OnRep_WinningPlayerList();

			GameState->WinningPlayerState = Winners[0];
			GameState->OnRep_WinningPlayerState();

			for (auto Winner : Winners)
			{
				if (auto PlayerController = Cast<AFortPlayerControllerAthena>(Winner->Owner))
				{
					AActor* DamageCauser = DeathReport.DamageCauser;
					UFortWeaponItemDefinition* KillerWeaponDef = nullptr;

					if (auto ProjectileBase = Cast<AFortProjectileBase>(DamageCauser))
						KillerWeaponDef = ((AFortWeapon*)ProjectileBase->GetOwner())->WeaponData;
					if (auto Weapon = Cast<AFortWeapon>(DamageCauser))
						KillerWeaponDef = Weapon->WeaponData;

					// PlayerController->PlayWinEffects(DeathReport.KillerPawn, KillerWeaponDef, DeathInfo.DeathCause, false);
					PlayerController->ClientNotifyWon(DeathReport.KillerPawn, KillerWeaponDef, DeathInfo.DeathCause);
					PlayerController->ClientGameEnded(Winner, true);
					GameMode->ReadyToEndMatch();
					GameMode->EndMatch();
					GameMode->EndGamePhaseStarted();
				}
			}
		}

		*/
	}

	return ClientOnPawnDied(PlayerController, DeathReport);
}

static void (*ReceiveActorEndOverlap)(AActor* Actor, AActor* OtherActor);

static bool ReceiveActorEndOverlapHook(UObject* Object, UFunction*, void* Parameters/* AActor* Actor, AActor* OtherActor */)
{
	auto Params = (AActor_ReceiveActorEndOverlap_Params*)Parameters;
	auto Actor = (AActor*)Object;
	auto OtherActor = Params->OtherActor;

	if (auto Pickup = Cast<AFortPickup>(Actor))
	{
		if (auto Pawn = Cast<AFortPlayerPawnAthena>(OtherActor))
		{
			if (Pawn == Pickup->PawnWhoDroppedPickup)
				Pickup->PawnWhoDroppedPickup = nullptr;
		}
	}

	return false;
	// return ReceiveActorEndOverlap(Actor, OtherActor);
}

static void OnDamageServerHook(ABuildingActor* BuildingActor, float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, AController* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext)
{
	auto BuildingSMActor = Cast<ABuildingSMActor>(BuildingActor);
	auto PlayerController = Cast<AFortPlayerControllerAthena>(InstigatedBy);
	auto Pawn = Cast<AFortPlayerPawnAthena>(PlayerController ? PlayerController->Pawn : nullptr);
	auto Weapon = Cast<AFortWeapon>(DamageCauser);

	if (!BuildingSMActor || !PlayerController || !Pawn || !Weapon || BuildingSMActor->bPlayerPlaced)
		return OnDamageServer(BuildingActor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);;

	if (Weapon->WeaponData && Cast<UFortWeaponMeleeItemDefinition>(Weapon->WeaponData))
	{
		if (PlayerController)
		{
			auto ResourceCount = 0;
			UFortResourceItemDefinition* ItemDef = UFortKismetLibrary::K2_GetResourceItemDefinition(BuildingSMActor->ResourceType);

			auto BuildingResourceAmountOverride = BuildingSMActor->BuildingResourceAmountOverride;

			if (BuildingResourceAmountOverride.RowName.IsValid())
			{
				auto AssetManager = Cast<UFortAssetManager>(GEngine->AssetManager);
				auto GameState = Cast<AFortGameStateAthena>(GetWorld()->GameState);
				auto CurveTable = GameState->CurrentPlaylistInfo.BasePlaylist ? GameState->CurrentPlaylistInfo.BasePlaylist->ResourceRates.Get() : nullptr;

				if (!CurveTable)
					CurveTable = UObject::FindObject<UCurveTable>("/Game/Athena/Balance/DataTables/AthenaResourceRates.AthenaResourceRates");

				{ // DO NOT LEAK THIS SCOPE OF CODE
					auto curveTable = CurveTable;
					auto curveMap = ((UDataTable*)curveTable)->RowMap;
					auto curve = curveMap[BuildingResourceAmountOverride.RowName];

					float Out = ((FSimpleCurve*)curve)->Keys[0].Value;

					//UDataTableFunctionLibrary::EvaluateCurveTableRow(BuildingResourceAmountOverride.CurveTable, BuildingResourceAmountOverride.RowName, X, L"", &Result, &Out);

					ResourceCount = round(Out / round(BuildingSMActor->GetMaxHealth() / Damage)); // almost right
				}
			}

			if (!ItemDef || ResourceCount <= 0)
			{
				OnDamageServer(BuildingActor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);
				return;
			}

			bool bIsWeakspot = Damage == 100.0f;
			PlayerController->ClientReportDamagedResourceBuilding(BuildingSMActor, BuildingSMActor->ResourceType, ResourceCount, false, bIsWeakspot);

			/* auto ReplicatedResourceEntry = FindReplicatedEntry(PlayerController, ItemDef);

			if (ReplicatedResourceEntry->Count >= 999)
			{
				SpawnPickup(ItemDef, Pawn->K2_GetActorLocation(), ResourceCount);
			}
			else */
			{
				GiveItem(PlayerController, ItemDef, ResourceCount);
				Update(PlayerController);
			}
		}
	}

	OnDamageServer(BuildingActor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);
}

void ServerCreateBuildingActorHook(AFortPlayerControllerAthena* PlayerController, FCreateBuildingActorData CreateBuildingData)
{
	static __int64 (*CantBuild)(UObject*, UObject*, FVector, FRotator, char, TArray<ABuildingSMActor*>*, char*) = decltype(CantBuild)(__int64(GetModuleHandleW(0)) + 0x1601820);

	auto Pawn = Cast<AFortPlayerPawnAthena>(PlayerController->Pawn);
	auto PlayerState = Cast<AFortPlayerStateAthena>(PlayerController->PlayerState);
	auto BuildingClass = PlayerController->BroadcastRemoteClientInfo->RemoteBuildableClass;

	if (!Pawn || !PlayerState || !BuildingClass)
		return;

	auto GameState = Cast<AFortGameStateAthena>(GetWorld()->GameState);

	bool bFound = false;

	for (int i = 0; i < GameState->BuildingActorClasses.Num(); i++)
	{
		if (GameState->BuildingActorClasses[i] == BuildingClass)
		{
			bFound = true;
			break;
		}
	}

	if (!bFound)
		return;

	TArray<ABuildingSMActor*> ExistingBuildings;
	char idk;
	bool bCanBuild = !CantBuild(GetWorld(), BuildingClass, CreateBuildingData.BuildLoc, CreateBuildingData.BuildRot, CreateBuildingData.bMirrored, &ExistingBuildings, &idk);

	if (bCanBuild)
	{
		for (int i = 0; i < ExistingBuildings.Num(); i++)
		{
			auto ExistingBuilding = ExistingBuildings[i];

			ExistingBuilding->K2_DestroyActor();
		}

		auto BuildingActor = GetWorld()->SpawnActor<ABuildingSMActor>(CreateBuildingData.BuildLoc, CreateBuildingData.BuildRot, BuildingClass);

		if (BuildingActor)
		{
			bool bShouldDestroy = true;

			auto MatDefinition = UFortKismetLibrary::K2_GetResourceItemDefinition(BuildingActor->ResourceType);
			auto ReplicatedMatEntry = FindReplicatedEntry(PlayerController, MatDefinition);

			// if (ReplicatedMatEntry && ReplicatedMatEntry->ItemDefinition)
			{
				BuildingActor->TeamIndex = PlayerState->TeamIndex;
				BuildingActor->InitializeKismetSpawnedBuildingActor(BuildingActor, PlayerController, true);

				bShouldDestroy = false;
			}

			if (bShouldDestroy)
			{
				BuildingActor->K2_DestroyActor();
			}
			else if (ReplicatedMatEntry && ReplicatedMatEntry->ItemDefinition && !PlayerController->bBuildFree)
			{
				/* auto AssetManager = Cast<UFortAssetManager>(GEngine->AssetManager);
				auto GameState = Cast<AFortGameStateAthena>(GetWorld()->GameState);

				auto BuildingCostHandle = AssetManager->GameDataCommon->BuildingCostHandles[(int)BuildingActor->ResourceType.GetValue()];

				auto curveTable = BuildingCostHandle.CurveTable;

				auto curveMap = ((UDataTable*)curveTable)->RowMap;
				auto curve = curveMap[BuildingCostHandle.RowName]; */

				float AmountToTake = 10; // ((FRichCurve*)curve)->Keys[0].Value;
				RemoveItem(PlayerController, ReplicatedMatEntry->ItemGuid, AmountToTake);
				Update(PlayerController);
			}
		}
	}

	ExistingBuildings.Free();
}

void ServerAddMapMarkerHook(UAthenaMarkerComponent* MarkerComponent, FFortClientMarkerRequest MarkerRequest)
{
	return;

	auto Owner = MarkerComponent->GetOwner();

	// MessageBoxA(0, Owner ? Owner->GetFullName().c_str() : "NULL", "Forge", MB_OK);

	// return;

	AFortPlayerControllerAthena* PlayerController = Cast<AFortPlayerControllerAthena>(Owner);

	if (!PlayerController)
		return;

	AFortPlayerStateAthena* PlayerState = Cast<AFortPlayerStateAthena>(PlayerController->PlayerState);

	auto MarkerStream = MarkerComponent->MarkerStream;

	// MessageBoxA(0, std::to_string(MarkerStream.Num()).c_str(), "Forge", MB_OK);

	FMarkerID MarkerID{};
	MarkerID.PlayerID = PlayerState->PlayerID;
	MarkerID.InstanceID = MarkerRequest.InstanceID;

	FFortWorldMarkerData MarkerData;
	MarkerData.MarkerType = MarkerRequest.MarkerType;
	MarkerData.Owner = PlayerState;
	MarkerData.WorldPosition = MarkerRequest.WorldPosition;
	MarkerData.WorldNormal = MarkerRequest.WorldNormal;
	MarkerData.WorldPositionOffset = MarkerRequest.WorldPositionOffset;
	MarkerData.MarkerID = MarkerID;

	if (auto Pickup = Cast<AFortPickup>(MarkerRequest.MarkedActor))
	{
		MarkerData.ItemDefinition = Pickup->PrimaryPickupItemEntry.ItemDefinition;
		MarkerData.ItemCount = Pickup->PrimaryPickupItemEntry.Count;
	}

	for (int i = 0; i < PlayerState->PlayerTeam->TeamMembers.Num(); i++)
	{
		if (PlayerState->PlayerTeam->TeamMembers[i] == PlayerController)
			continue;

		auto CurrentTeamMemberPC = Cast<AFortPlayerControllerAthena>(PlayerState->PlayerTeam->TeamMembers[i]);

		if (!CurrentTeamMemberPC)
			continue;

		/// auto CurrentTeamMemberPS = Cast<AFortPlayerStateAthena>(CurrentTeamMemberPC->PlayerState);

		// CurrentTeamMemberPC->BroadcastRemoteClientInfo->ClientRemotePlayerAddMapMarker(MarkerData);
		// CurrentTeamMemberPC->BroadcastRemoteClientInfo->OnServerAddMapMarker(MarkerData); // cals ClientRemotePlayerAddMapMarker?
		// CurrentTeamMemberPC->MarkerComponent->ClientAddMarker(MarkerData);
	}
}

void ServerHandlePickupHook(AFortPlayerPawn* Pawn, AFortPickup* Pickup, float InFlyTime, FVector InStartDirection, bool bPlayPickupSound)
{
	auto PlayerController = (AFortPlayerControllerAthena*)Pawn->Controller;

	if (Pickup && !Pickup->bPickedUp)
	{
		auto ItemDef = Cast<UFortWorldItemDefinition>(Pickup->PrimaryPickupItemEntry.ItemDefinition);
		auto& ItemInstances = PlayerController->WorldInventory->Inventory.ItemInstances;
		auto& ReplicatedEntries = PlayerController->WorldInventory->Inventory.ReplicatedEntries;

		if (!ItemDef)
			return;

		if (IsPrimaryQuickbar(ItemDef) && IsInventoryFull(PlayerController, 1) && Pawn->CurrentWeapon)
		{
			auto CurrentItemGuid = Pawn->CurrentWeapon->ItemEntryGuid;

			if (auto ItemInstance = FindItemInstance(PlayerController, CurrentItemGuid))
			{
				auto ItemEntry = &ItemInstance->ItemEntry;

				if (ItemEntry->ItemDefinition && ItemInstance->CanBeDropped())
				{
					if (ItemEntry)
					{
						SpawnPickup(*ItemEntry, Pawn->K2_GetActorLocation());
						RemoveItem(PlayerController, CurrentItemGuid, ItemEntry->Count);
					}
				}
			}
		}

		auto Item = GiveItem(PlayerController, ItemDef, Pickup->PrimaryPickupItemEntry.Count, Pickup->PrimaryPickupItemEntry.LoadedAmmo, true);

		Update(PlayerController);

		Pickup->PickupLocationData.PickupTarget = Pawn;
		Pickup->PickupLocationData.FlyTime = 0.40;
		Pickup->PickupLocationData.ItemOwner = Pawn;
		Pickup->OnRep_PickupLocationData();

		Pickup->bPickedUp = true;
		Pickup->OnRep_bPickedUp();
	}
}

static void ServerBeginEditingBuildingActorHook(AFortPlayerControllerAthena* PlayerController, ABuildingSMActor* BuildingActorToEdit)
{
	auto Pawn = Cast<AFortPlayerPawnAthena>(PlayerController->Pawn);

	if (!Pawn)
		return;

	/* if (Pawn->CurrentWeapon)
	{
		if (Pawn->CurrentWeapon->IsA(AFortWeap_BuildingToolBase::StaticClass()))
			return;
	} */

	if (PlayerController && BuildingActorToEdit)
	{
		static auto EditToolDef = UObject::FindObject<UFortWeaponItemDefinition>("/Game/Items/Weapons/BuildingTools/EditTool.EditTool");

		if (auto EditTool = Cast<AFortWeap_EditingTool>(Pawn->EquipWeaponDefinition(EditToolDef, FGuid{})))
		{
			EditTool->EditActor = BuildingActorToEdit;
			EditTool->OnRep_EditActor();

			BuildingActorToEdit->EditingPlayer = Cast<AFortPlayerStateZone>(Pawn->PlayerState);
			BuildingActorToEdit->OnRep_EditingPlayer();
		}
	}
}

static void ServerAttemptInventoryDropHook(AFortPlayerControllerAthena* PlayerController, FGuid ItemGuid, int Count)
{
	auto Pawn = Cast<AFortPlayerPawnAthena>(PlayerController->Pawn);

	if (!Pawn || Count <= 0)
		return;

	if (auto ItemEntry = FindReplicatedEntry(PlayerController, ItemGuid))
	{
		auto ItemDefinition = Cast<UFortWorldItemDefinition>(ItemEntry->ItemDefinition);

		if (ItemEntry->Count < Count || !ItemDefinition || !ItemDefinition->bCanBeDropped)
			return;

		ItemEntry->StateValues.Free();

		if (auto Pickup = SpawnPickup(*ItemEntry, Pawn->K2_GetActorLocation()))
		{
			Pickup->PawnWhoDroppedPickup = Pawn;
			Pickup->PrimaryPickupItemEntry.Count = Count;
			Pickup->OnRep_PrimaryPickupItemEntry();
		}

		RemoveItem(PlayerController, ItemGuid, Count);
		Update(PlayerController);
	}
}

static void ServerEditBuildingActorHook(AFortPlayerControllerAthena* PlayerController, ABuildingSMActor* BuildingActorToEdit, UClass* NewBuildingClass, int RotationIterations, char bMirrored)
{
	if (!BuildingActorToEdit || !NewBuildingClass)
		return;

	static ABuildingSMActor* (*BuildingSMActorReplaceBuildingActor)(ABuildingSMActor*, __int64, UClass*, int, int, uint8_t, AFortPlayerController*) =
		decltype(BuildingSMActorReplaceBuildingActor)((uintptr_t)GetModuleHandleW(0) + 0x13D0DE0);

	if (auto BuildingActor = BuildingSMActorReplaceBuildingActor(BuildingActorToEdit, 1, NewBuildingClass, 0, RotationIterations, bMirrored, PlayerController))
	{
		BuildingActor->bPlayerPlaced = true;

		if (auto PlayerState = Cast<AFortPlayerStateAthena>(PlayerController->PlayerState))
			BuildingActor->SetTeam(PlayerState->TeamIndex);

		BuildingActor->OnRep_Team();
	}
}

static void ServerEndEditingBuildingActorHook(AFortPlayerControllerAthena* PlayerController, ABuildingSMActor* BuildingActorToStopEditing)
{
	if (!PlayerController->IsInAircraft() && BuildingActorToStopEditing && PlayerController->MyFortPawn)
	{
		auto EditTool = Cast<AFortWeap_EditingTool>(PlayerController->MyFortPawn->CurrentWeapon);

		BuildingActorToStopEditing->EditingPlayer = nullptr;
		BuildingActorToStopEditing->OnRep_EditingPlayer();

		if (EditTool)
		{
			EditTool->bEditConfirmed = true;
			EditTool->EditActor = nullptr;
			EditTool->OnRep_EditActor();
		}
	}
}

static void HandleReloadCostHook(AFortWeapon* Weapon, int AmountToRemove)
{
	auto Pawn = Cast<AFortPlayerPawnAthena>(Weapon->GetOwner());

	if (!Pawn)
		return;

	auto PlayerController = Cast<AFortPlayerControllerAthena>(Pawn->Controller);

	if (!PlayerController || PlayerController->bInfiniteAmmo)
		return;

	auto ReplicatedEntry = FindReplicatedEntry(PlayerController, Weapon->ItemEntryGuid);
	auto InstanceEntry = &FindItemInstance(PlayerController, Weapon->ItemEntryGuid)->ItemEntry;

	ReplicatedEntry->LoadedAmmo = Weapon->AmmoCount;
	InstanceEntry->LoadedAmmo = Weapon->AmmoCount;

	PlayerController->WorldInventory->Inventory.MarkItemDirty(*ReplicatedEntry);
	PlayerController->WorldInventory->Inventory.MarkItemDirty(*InstanceEntry);

	auto AmmoDef = Weapon->WeaponData->GetAmmoWorldItemDefinition_BP();

	if (AmmoDef)
	{
		auto AmmoInstance = FindItemInstance(PlayerController, AmmoDef);

		if (AmmoInstance)
			RemoveItem(PlayerController, AmmoInstance->ItemEntry.ItemGuid, AmountToRemove);
	}
}

void GetPlayerViewPointHook(AFortPlayerControllerAthena* PlayerController, FVector& Location, FRotator& Rotation)
{
	auto MyFortPawn = PlayerController->MyFortPawn;

	if (MyFortPawn)
	{
		auto RootComponent = MyFortPawn->RootComponent;

		if (RootComponent)
			Location = RootComponent->K2_GetComponentLocation(); // just getactorlocation
		else
			Location = FVector();

		Rotation = PlayerController->GetControlRotation();
	}
	/* else if (IsInState(NAME_Spectating) && HasAuthority() && !IsLocalController())
	{
		Location = PlayerController->LastSpectatorSyncLocation;
		Rotation = PlayerController->LastSpectatorSyncRotation;
	} */
	else if (PlayerController->PlayerCameraManager && PlayerController->PlayerCameraManager->CameraCachePrivate.Timestamp > 0.f) // Needed for the server?
	{
		// Fortnite does some things here that aren't in default UE4

		auto POV = PlayerController->PlayerCameraManager->CameraCachePrivate.POV;

		Location = POV.Location;
		Rotation = POV.Rotation;
	}
	else
	{
		auto ViewTarget = PlayerController->GetViewTarget();

		if (ViewTarget)
		{
			Location = ViewTarget->K2_GetActorLocation();
			Rotation = ViewTarget->K2_GetActorRotation();
		}
	}
}

void (*ProcessEvent)(UObject* Object, UFunction* Function, void* Parameters) = decltype(ProcessEvent)((uintptr_t)GetModuleHandleW(0) + 0x22f2990);

void ProcessEventHook(UObject* Object, UFunction* Function, void* Parameters)
{
	if (!Object || !Function)
		return;

	if (Globals::bLogProcessEvent)
	{
		auto FunctionName = Function->GetName(); // UKismetSystemLibrary::GetPathName(Function).ToString();

		if (!strstr(FunctionName.c_str(), ("EvaluateGraphExposedInputs")) &&
			!strstr(FunctionName.c_str(), ("Tick")) &&
			!strstr(FunctionName.c_str(), ("OnSubmixEnvelope")) &&
			!strstr(FunctionName.c_str(), ("OnSubmixSpectralAnalysis")) &&
			!strstr(FunctionName.c_str(), ("OnMouse")) &&
			!strstr(FunctionName.c_str(), ("Pulse")) &&
			!strstr(FunctionName.c_str(), ("BlueprintUpdateAnimation")) &&
			!strstr(FunctionName.c_str(), ("BlueprintPostEvaluateAnimation")) &&
			!strstr(FunctionName.c_str(), ("BlueprintModifyCamera")) &&
			!strstr(FunctionName.c_str(), ("BlueprintModifyPostProcess")) &&
			!strstr(FunctionName.c_str(), ("Loop Animation Curve")) &&
			!strstr(FunctionName.c_str(), ("UpdateTime")) &&
			!strstr(FunctionName.c_str(), ("GetMutatorByClass")) &&
			!strstr(FunctionName.c_str(), ("UpdatePreviousPositionAndVelocity")) &&
			!strstr(FunctionName.c_str(), ("IsCachedIsProjectileWeapon")) &&
			!strstr(FunctionName.c_str(), ("LockOn")) &&
			!strstr(FunctionName.c_str(), ("GetAbilityTargetingLevel")) &&
			!strstr(FunctionName.c_str(), ("ReadyToEndMatch")) &&
			!strstr(FunctionName.c_str(), ("ReceiveDrawHUD")) &&
			!strstr(FunctionName.c_str(), ("OnUpdateDirectionalLightForTimeOfDay")) &&
			!strstr(FunctionName.c_str(), ("GetSubtitleVisibility")) &&
			!strstr(FunctionName.c_str(), ("GetValue")) &&
			!strstr(FunctionName.c_str(), ("InputAxisKeyEvent")) &&
			!strstr(FunctionName.c_str(), ("ServerTouchActiveTime")) &&
			!strstr(FunctionName.c_str(), ("SM_IceCube_Blueprint_C")) &&
			!strstr(FunctionName.c_str(), ("OnHovered")) &&
			!strstr(FunctionName.c_str(), ("OnCurrentTextStyleChanged")) &&
			!strstr(FunctionName.c_str(), ("OnButtonHovered")) &&
			!strstr(FunctionName.c_str(), ("ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint")) &&
			!strstr(FunctionName.c_str(), "CheckForDancingAtFish") &&
			!strstr(FunctionName.c_str(), ("UpdateCamera")) &&
			!strstr(FunctionName.c_str(), ("GetMutatorContext")) &&
			!strstr(FunctionName.c_str(), ("CanJumpInternal")) &&
			!strstr(FunctionName.c_str(), ("OnDayPhaseChanged")) &&
			!strstr(FunctionName.c_str(), ("Chime")) &&
			!strstr(FunctionName.c_str(), ("ServerMove")) &&
			!strstr(FunctionName.c_str(), ("OnVisibilitySetEvent")) &&
			!strstr(FunctionName.c_str(), "ReceiveHit") &&
			!strstr(FunctionName.c_str(), "ReadyToStartMatch") &&
			!strstr(FunctionName.c_str(), "ClientAckGoodMove") &&
			!strstr(FunctionName.c_str(), "Prop_WildWest_WoodenWindmill_01") &&
			!strstr(FunctionName.c_str(), "ContrailCheck") &&
			!strstr(FunctionName.c_str(), "B_StockBattleBus_C") &&
			!strstr(FunctionName.c_str(), "Subtitles.Subtitles_C.") &&
			!strstr(FunctionName.c_str(), "/PinkOatmeal/PinkOatmeal_") &&
			!strstr(FunctionName.c_str(), "BP_SpectatorPawn_C") &&
			!strstr(FunctionName.c_str(), "FastSharedReplication") &&
			!strstr(FunctionName.c_str(), "OnCollisionHitEffects") &&
			!strstr(FunctionName.c_str(), "BndEvt__SkeletalMesh") &&
			!strstr(FunctionName.c_str(), ".FortAnimInstance.AnimNotify_") &&
			!strstr(FunctionName.c_str(), "OnBounceAnimationUpdate") &&
			!strstr(FunctionName.c_str(), "ShouldShowSoundIndicator") &&
			!strstr(FunctionName.c_str(), "Primitive_Structure_AmbAudioComponent_C") &&
			!strstr(FunctionName.c_str(), "PlayStoppedIdleRotationAudio") &&
			!strstr(FunctionName.c_str(), "UpdateOverheatCosmetics") &&
			!strstr(FunctionName.c_str(), "StormFadeTimeline__UpdateFunc") &&
			!strstr(FunctionName.c_str(), "BindVolumeEvents") &&
			!strstr(FunctionName.c_str(), "UpdateStateEvent") &&
			!strstr(FunctionName.c_str(), "VISUALS__UpdateFunc") &&
			!strstr(FunctionName.c_str(), "Flash__UpdateFunc") &&
			!strstr(FunctionName.c_str(), "SetCollisionEnabled") &&
			!strstr(FunctionName.c_str(), "SetIntensity") &&
			!strstr(FunctionName.c_str(), "Storm__UpdateFunc") &&
			!strstr(FunctionName.c_str(), "CloudsTimeline__UpdateFunc") &&
			!strstr(FunctionName.c_str(), "SetRenderCustomDepth") &&
			!strstr(FunctionName.c_str(), "K2_UpdateCustomMovement") &&
			!strstr(FunctionName.c_str(), "AthenaHitPointBar_C.Update") &&
			!strstr(FunctionName.c_str(), "ExecuteUbergraph_Farm_WeatherVane_01") &&
			!strstr(FunctionName.c_str(), "HandleOnHUDElementVisibilityChanged") &&
			!strstr(FunctionName.c_str(), "ExecuteUbergraph_Fog_Machine") &&
			!strstr(FunctionName.c_str(), "ReceiveBeginPlay") &&
			!strstr(FunctionName.c_str(), "OnMatchStarted") &&
			!strstr(FunctionName.c_str(), "CustomStateChanged") &&
			!strstr(FunctionName.c_str(), "OnBuildingActorInitialized") &&
			!strstr(FunctionName.c_str(), "OnWorldReady") &&
			!strstr(FunctionName.c_str(), "OnAttachToBuilding") &&
			!strstr(FunctionName.c_str(), "Clown Spinner") &&
			!strstr(FunctionName.c_str(), "K2_GetActorLocation") &&
			!strstr(FunctionName.c_str(), "GetViewTarget") &&
			!strstr(FunctionName.c_str(), "GetAllActorsOfClass") &&
			!strstr(FunctionName.c_str(), "OnUpdateMusic") &&
			!strstr(FunctionName.c_str(), "Check Closest Point") &&
			!strstr(FunctionName.c_str(), "OnSubtitleChanged__DelegateSignature") &&
			!strstr(FunctionName.c_str(), "OnServerBounceCallback") &&
			!strstr(FunctionName.c_str(), "BlueprintGetInteractionTime") &&
			!strstr(FunctionName.c_str(), "OnServerStopCallback") &&
			!strstr(FunctionName.c_str(), "Light Flash Timeline__UpdateFunc") &&
			!strstr(FunctionName.c_str(), "MainFlightPath__UpdateFunc") &&
			!strstr(FunctionName.c_str(), "PlayStartedIdleRotationAudio") &&
			!strstr(FunctionName.c_str(), "BGA_Athena_FlopperSpawn_") &&
			!strstr(FunctionName.c_str(), "CheckShouldDisplayUI") &&
			!strstr(FunctionName.c_str(), "Timeline_0__UpdateFunc") &&
			!strstr(FunctionName.c_str(), "ClientMoveResponsePacked") &&
			!strstr(FunctionName.c_str(), "ExecuteUbergraph_B_Athena_FlopperSpawnWorld_Placement") &&
			!strstr(FunctionName.c_str(), "Countdown__UpdateFunc") &&
			!strstr(FunctionName.c_str(), "OnParachuteTrailUpdated") &&
			!strstr(FunctionName.c_str(), "Moto FadeOut__UpdateFunc") &&
			!strstr(FunctionName.c_str(), "ExecuteUbergraph_Apollo_GasPump_Valet") &&
			!strstr(FunctionName.c_str(), "GetOverrideMeshMaterial") &&
			!strstr(FunctionName.c_str(), "VendWobble__UpdateFunc") &&
			!strstr(FunctionName.c_str(), "WaitForPawn") &&
			!strstr(FunctionName.c_str(), "FragmentMovement__UpdateFunc") &&
			!strstr(FunctionName.c_str(), "TrySetup") &&
			!strstr(FunctionName.c_str(), "Fade Doused Smoke__UpdateFunc") &&
			!strstr(FunctionName.c_str(), "SetPlayerToSkydive") &&
			!strstr(FunctionName.c_str(), "BounceCar__UpdateFunc") &&
			!strstr(FunctionName.c_str(), "BP_CalendarDynamicPOISelect") &&
			!strstr(FunctionName.c_str(), "OnComponentHit_Event_0") &&
			!strstr(FunctionName.c_str(), "HandleSimulatingComponentHit") &&
			!strstr(FunctionName.c_str(), "CBGA_GreenGlop_WithGrav_C") &&
			!strstr(FunctionName.c_str(), "WarmupCountdownEndTimeUpdated") &&
			!strstr(FunctionName.c_str(), "BP_CanInteract") &&
			!strstr(FunctionName.c_str(), "AthenaHitPointBar_C") &&
			!strstr(FunctionName.c_str(), "ServerFireAIDirectorEvent") &&
			!strstr(FunctionName.c_str(), "BlueprintThreadSafeUpdateAnimation") &&
			!strstr(FunctionName.c_str(), "On Amb Zap Spawn") &&
			!strstr(FunctionName.c_str(), "ServerSetPlayerCanDBNORevive") &&
			!strstr(FunctionName.c_str(), "BGA_Petrol_Pickup_C") &&
			!strstr(FunctionName.c_str(), "GetMutatorsForContextActor") &&
			!strstr(FunctionName.c_str(), "GetControlRotation") &&
			!strstr(FunctionName.c_str(), "K2_GetComponentLocation") &&
			!strstr(FunctionName.c_str(), "MoveFromOffset__UpdateFunc"))
		{
			std::cout << ("Function called: ") << FunctionName << '\n';
		}
	}

	for (auto& aa : FunctionsToHook)
	{
		if (aa.first == Function)
		{
			if (aa.second(Object, Function, Parameters))
				return;
		}
	}

	return ProcessEvent(Object, Function, Parameters);
}

void ServerHandlePickupWithSwap(class AFortPickup* Pickup, struct FGuid Swap, float InFlyTime, struct FVector InStartDirection, bool bPlayPickupSound)
{

}

static void (*ReceiveActorBeginOverlap)(AActor* OtherActor);

static bool ReceiveActorBeginOverlapHook(UObject* Object, UFunction*, void* Parameters)
{
	auto Params = (AActor_ReceiveActorBeginOverlap_Params*)Parameters;
	auto Actor = (AActor*)Object;
	auto OtherActor = Params->OtherActor;

	if (auto Pickup = Cast<AFortPickup>(Actor))
	{
		if (auto Pawn = Cast<AFortPlayerPawnAthena>(OtherActor))
		{
			if (Pickup->PawnWhoDroppedPickup != Pawn)
			{
				ServerHandlePickupHook(Pawn, Pickup, 0.4, FVector(), true);
			}
		}
	}

	return false;
	// return ReceiveActorBeginOverlap(OtherActor);
}

