#pragma once

#include "framework.h"

#include <random>

#include "rebooting.h"
#include "inventory.h"
#include <random>
#include <functional>
#include "discord.h"

#include "moderation.h"
#include "util.h"
#include "ai.h"

void (*ProcessEvent)(UObject* Object, UFunction* Function, void* Parameters) = decltype(ProcessEvent)((uintptr_t)GetModuleHandleW(0) + 0x22f2990);

static inline std::vector<std::pair<UFunction*, std::function<bool(UObject*, UFunction*, void*)>>> FunctionsToHook;

void AddHook(UFunction* Function, std::function<bool(UObject*, UFunction*, void*)> callback)
{
	if (Function)
		FunctionsToHook.push_back({ Function, callback });
}

static void StreamLevel(std::string LevelName, FVector Location = {})
{
	auto BuildingFoundation = GetWorld()->SpawnActor<ABuildingFoundation3x3>(Location);

	BuildingFoundation->InitializeKismetSpawnedBuildingActor(BuildingFoundation, nullptr, false);

	BuildingFoundation->StreamingData.FoundationName = UKismetStringLibrary::Conv_StringToName(std::wstring(LevelName.begin(), LevelName.end()).c_str());
	BuildingFoundation->StreamingData.FoundationLocation = Location;

	BuildingFoundation->LevelToStream = UKismetStringLibrary::Conv_StringToName(std::wstring(LevelName.begin(), LevelName.end()).c_str());
	BuildingFoundation->bServerStreamedInLevel = true;

	BuildingFoundation->OnRep_LevelToStream();
	BuildingFoundation->OnRep_ServerStreamedInLevel();

	BuildingFoundation->DynamicFoundationRepData.Translation = BuildingFoundation->K2_GetActorLocation();
	BuildingFoundation->DynamicFoundationRepData.Rotation = Quaternion(BuildingFoundation->K2_GetActorRotation());
	BuildingFoundation->DynamicFoundationRepData.EnabledState = EDynamicFoundationEnabledState::Enabled;
	BuildingFoundation->FoundationEnabledState = EDynamicFoundationEnabledState::Enabled;
	BuildingFoundation->DynamicFoundationTransform.Translation = BuildingFoundation->K2_GetActorLocation();
	BuildingFoundation->DynamicFoundationTransform.Rotation = Quaternion(BuildingFoundation->K2_GetActorRotation());
	BuildingFoundation->DynamicFoundationTransform.Scale3D = BuildingFoundation->GetActorScale3D();
	BuildingFoundation->OnRep_DynamicFoundationRepData();

	auto WorldSettings = GetFortWorldSettings(GetWorld());

	FBuildingFoundationStreamingData StreamingData;
	WorldSettings->BuildingFoundationStreamingData.Add(StreamingData);
	
	BuildingFoundation->SetDynamicFoundationEnabled(true);
}

void ShowFoundation(ABuildingFoundation* Foundation)
{
	Foundation->DynamicFoundationType = EDynamicFoundationType::StartEnabled_Stationary;
	Foundation->bServerStreamedInLevel = true;
	Foundation->OnRep_ServerStreamedInLevel();

	// Foundation->DynamicFoundationRepData.Translation = Foundation->K2_GetActorLocation();
	// Foundation->DynamicFoundationRepData.Rotation = Quaternion(Foundation->K2_GetActorRotation());
	Foundation->DynamicFoundationRepData.EnabledState = EDynamicFoundationEnabledState::Enabled;
	// Foundation->FoundationEnabledState = EDynamicFoundationEnabledState::Enabled;
	Foundation->OnRep_DynamicFoundationRepData();

	Foundation->SetDynamicFoundationEnabled(true);
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

	if (!Spec || !Spec->Ability)
	{
		// std::cout << "no spec!\n";
		AbilitySystemComponent->ClientActivateAbilityFailed(Ability, PredictionKey.Current);
		return;
	}

	UGameplayAbility* InstancedAbility;
	Spec->InputPressed = true;

	static bool (*InternalTryActivateAbility)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle Handle, FPredictionKey InPredictionKey, UGameplayAbility** OutInstancedAbility, void* OnGameplayAbilityEndedDelegate, const FGameplayEventData * TriggerEventData) =
		decltype(InternalTryActivateAbility)((uintptr_t)GetModuleHandleW(0) + 0x9367F0);

	if (!InternalTryActivateAbility(AbilitySystemComponent, Ability, PredictionKey, &InstancedAbility, nullptr, EventData))
	{
		// std::cout << "activateability failed!\n";
		AbilitySystemComponent->ClientActivateAbilityFailed(Ability, PredictionKey.Current);
		Spec->InputPressed = false;

		// AbilitySystemComponent->ActivatableAbilities.MarkArrayDirty();
		AbilitySystemComponent->ActivatableAbilities.MarkItemDirty(*Spec);
	}
}

static void ServerTryActivateAbilityHook(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle Handle, bool InputPressed, FPredictionKey PredictionKey)
{
	// std::cout << "tryacxtivate!\n";
	ActivateAbility(AbilitySystemComponent, Handle, PredictionKey);
}

static void ServerTryActivateAbilityWithEventDataHook(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle Handle, bool InputPressed, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData)
{
	// std::cout << "tryacxtivateeventdata!\n";
	ActivateAbility(AbilitySystemComponent, Handle, PredictionKey, &TriggerEventData);
}

static void (*ServerAbilityRPCBatch)(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilities_FServerAbilityRPCBatch BatchInfo);

static void ServerAbilityRPCBatchHook(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilities_FServerAbilityRPCBatch BatchInfo)
{
	// std::cout << "tryacxtivaterpc!\n";
	ActivateAbility(AbilitySystemComponent, BatchInfo.AbilitySpecHandle, BatchInfo.PredictionKey, nullptr);

	AbilitySystemComponent->ServerSetReplicatedTargetData(BatchInfo.AbilitySpecHandle, BatchInfo.PredictionKey, BatchInfo.TargetData, FGameplayTag(), BatchInfo.PredictionKey);

	if (BatchInfo.Ended)
	{
		FGameplayAbilityActivationInfo FakeInfo;
		FakeInfo.PredictionKeyWhenActivated = BatchInfo.PredictionKey;
		AbilitySystemComponent->ServerEndAbility(BatchInfo.AbilitySpecHandle, FakeInfo, BatchInfo.PredictionKey);
	}
}

char SpawnLootHook(ABuildingContainer* BuildingContainer, AFortPlayerPawnAthena* Pawn, int idk, int idk2)
{
	if (Globals::bRestarting)
		return 0;

	// std::cout << std::format("SPAWNLOOT: 0x{:x}\n", __int64(_ReturnAddress()) - __int64(GetModuleHandleW(0)));

	BuildingContainer->bAlreadySearched = true;
	BuildingContainer->SearchBounceData.SearchAnimationCount++;
	BuildingContainer->OnRep_bAlreadySearched();

	// std::cout << "idk: " << idk << '\n';
	// std::cout << "idk2: " << idk2 << '\n';

	auto SearchLootTierGroup = BuildingContainer->SearchLootTierGroup;
	EFortPickupSpawnSource SpawnSource = EFortPickupSpawnSource::Unset;

	EFortPickupSourceTypeFlag PickupSourceTypeFlags = EFortPickupSourceTypeFlag::Container;

	static auto Loot_TreasureFName = UKismetStringLibrary::Conv_StringToName(L"Loot_Treasure");
	static auto Loot_AmmoFName = UKismetStringLibrary::Conv_StringToName(L"Loot_Ammo");
	static auto Loot_AthenaFloorLootFName = UKismetStringLibrary::Conv_StringToName(L"Loot_AthenaFloorLoot");
	static auto Loot_AthenaFloorLoot_WarmupFName = UKismetStringLibrary::Conv_StringToName(L"Loot_AthenaFloorLoot_Warmup");

	if (SearchLootTierGroup == Loot_AthenaFloorLootFName || SearchLootTierGroup == Loot_AthenaFloorLoot_WarmupFName)
	{
		PickupSourceTypeFlags |= EFortPickupSourceTypeFlag::FloorLoot;
	}

	// GameMode->RedirectAthenaLootTierGroups

	if (SearchLootTierGroup == Loot_TreasureFName)
	{
		SearchLootTierGroup = UKismetStringLibrary::Conv_StringToName(L"Loot_AthenaTreasure");
		SpawnSource = EFortPickupSpawnSource::Chest;
	}

	if (SearchLootTierGroup == Loot_AmmoFName)
	{
		SearchLootTierGroup = UKismetStringLibrary::Conv_StringToName(L"Loot_AthenaAmmoLarge");
		SpawnSource = EFortPickupSpawnSource::AmmoBox;
	}

	// std::cout << std::format("[{}] {}\n", BuildingContainer->GetName(), SearchLootTierGroup.ToString());

	auto LootDrops = PickLootDrops(SearchLootTierGroup);

	auto CorrectLocation = BuildingContainer->K2_GetActorLocation() + BuildingContainer->GetActorRightVector() * 70.0f + FVector{ 0, 0, 50 }; // + LootSpawnOffset?

	for (auto& LootDrop : LootDrops)
	{
		SpawnPickup(LootDrop.ItemDefinition, CorrectLocation, LootDrop.Count, PickupSourceTypeFlags, SpawnSource);
	}

	return true;
}

void SpawnFloorLoot()
{
	auto SpawnIsland_FloorLoot = UObject::FindObject<UBlueprintGeneratedClass>("/Game/Athena/Environments/Blueprints/Tiered_Athena_FloorLoot_Warmup.Tiered_Athena_FloorLoot_Warmup_C");
	auto BRIsland_FloorLoot = UObject::FindObject<UBlueprintGeneratedClass>("/Game/Athena/Environments/Blueprints/Tiered_Athena_FloorLoot_01.Tiered_Athena_FloorLoot_01_C");

	TArray<AActor*> SpawnIsland_FloorLoot_Actors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), SpawnIsland_FloorLoot, &SpawnIsland_FloorLoot_Actors);

	TArray<AActor*> BRIsland_FloorLoot_Actors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), BRIsland_FloorLoot, &BRIsland_FloorLoot_Actors);

	auto SpawnIslandTierGroup = UKismetStringLibrary::Conv_StringToName(L"Loot_AthenaFloorLoot_Warmup");
	auto BRIslandTierGroup = UKismetStringLibrary::Conv_StringToName(L"Loot_AthenaFloorLoot");

	float UpZ = 50;

	EFortPickupSourceTypeFlag SpawnFlag = EFortPickupSourceTypeFlag::Container;

	bool bPrintWarmup = false;

	for (int i = 0; i < SpawnIsland_FloorLoot_Actors.Num(); i++)
	{
		ABuildingContainer* CurrentActor = (ABuildingContainer*)SpawnIsland_FloorLoot_Actors[i];

		// CurrentActor->K2_DestroyActor();
		// continue;

		auto Location = CurrentActor->K2_GetActorLocation();
		Location.Z += UpZ;

		std::vector<FFortItemEntry> LootDrops = PickLootDrops(SpawnIslandTierGroup, bPrintWarmup);

		if (bPrintWarmup)
		{
			std::cout << "\n\n";
		}

		if (LootDrops.size())
		{
			for (auto& LootDrop : LootDrops)
				SpawnPickup(LootDrop, Location, SpawnFlag);
		}
	}

	bool bPrint = false;

	int spawned = 0;

	for (int i = 0; i < BRIsland_FloorLoot_Actors.Num(); i++)
	{
		ABuildingContainer* CurrentActor = (ABuildingContainer*)BRIsland_FloorLoot_Actors[i];

		// CurrentActor->K2_DestroyActor();
		spawned++;
		// continue;

		auto Location = CurrentActor->K2_GetActorLocation();
		Location.Z += UpZ;

		std::vector<FFortItemEntry> LootDrops = PickLootDrops(BRIslandTierGroup, bPrint);

		if (bPrint)
			std::cout << "\n";

		if (LootDrops.size())
		{
			for (auto& LootDrop : LootDrops)
				SpawnPickup(LootDrop, Location, SpawnFlag);
		}
	}

	// std::cout << "spawned: " << spawned << " out of " << BRIsland_FloorLoot_Actors.Num() << '\n';
}

void FillVendingMachine2(ABuildingItemCollectorActor* ItemCollector, FName& LootTierGroup, int recursive = 0)
{
	if (recursive >= 10)
		return;

	EFortRarity RarityToUse = EFortRarity::EFortRarity_MAX;

	int itemCollectionNum = 3;/* ItemCollector->ItemCollections.Num() */

	for (int ItemCollectorIt = 0; ItemCollectorIt < itemCollectionNum; ItemCollectorIt++)
	{
		auto& ItemCollection = ItemCollector->ItemCollections[ItemCollectorIt];

		if (ItemCollection.OutputItemEntry.Num() > 0)
		{
			ItemCollection.OutputItemEntry.FreeBAD();
			ItemCollection.OutputItem = nullptr;
		}

		constexpr bool bPrint = false;

		std::vector<FFortItemEntry> LootDrops = PickLootDrops(LootTierGroup, bPrint);

		int tries = 0;

		while (LootDrops.size() == 0)
		{
			tries++;
			LootDrops = PickLootDrops(LootTierGroup, bPrint);

			if (tries >= 10)
				break;
		}

		if (LootDrops.size() == 0)
			continue;

		for (int LootDropIt = 0; LootDropIt < LootDrops.size(); LootDropIt++)
		{
			auto WorldItemDefinition = Cast<UFortWorldItemDefinition>(LootDrops[LootDropIt].ItemDefinition);

			if (WorldItemDefinition && IsPrimaryQuickbar(WorldItemDefinition)) // nice
			{
				if (RarityToUse == EFortRarity::EFortRarity_MAX)
					RarityToUse = WorldItemDefinition->Rarity;

				if (WorldItemDefinition->Rarity == RarityToUse)
				{
					bool bItemAlreadyInCollector = false;

					for (int ItemCollectorIt2 = 0; ItemCollectorIt2 < itemCollectionNum; ItemCollectorIt2++)
					{
						auto& ItemCollection2 = ItemCollector->ItemCollections[ItemCollectorIt2];

						if (ItemCollection2.OutputItem == WorldItemDefinition)
						{
							bItemAlreadyInCollector = true;
							break;
						}
					}

					if (bItemAlreadyInCollector)
						break;

					ItemCollection.OutputItem = WorldItemDefinition;
				}

				break;
			}
		}

		if (!ItemCollection.OutputItem)
		{
			ItemCollectorIt--; // retry
			continue;
		}

		for (int LootDropIt = 0; LootDropIt < LootDrops.size(); LootDropIt++)
		{
			ItemCollection.OutputItemEntry.Add(LootDrops[LootDropIt]);
		}

		ItemCollection.OverrideOutputItemLootTierGroupName = LootTierGroup;
	}

	*(EFortRarity*)(__int64(ItemCollector) + 0xA00) = RarityToUse;
	ItemCollector->bUseInstanceLootValueOverrides = true;
}

void FillVendingMachine(ABuildingItemCollectorActor* ItemCollector, FName& LootTierGroup, int recursive = 0)
{
	return FillVendingMachine2(ItemCollector, LootTierGroup, recursive);

	if (recursive >= 10)
		return;

	EFortRarity RarityToUse = EFortRarity::EFortRarity_MAX;

	for (int z = 0; z < 3/* ItemCollector->ItemCollections.Num() */; z++)
	{
		if (ItemCollector->ItemCollections[z].OutputItemEntry.Num() > 0)
		{
			ItemCollector->ItemCollections[z].OutputItemEntry.FreeBAD();
			ItemCollector->ItemCollections[z].OutputItem = nullptr;
		}

		// std::cout << "z: " << z << '\n';

		// if (z >= (LootDrops.size() + 1))
			// break;

		bool bPrint = false;

		std::vector<FFortItemEntry> LootDrops = PickLootDrops(LootTierGroup, bPrint);

		int tries = 0;

		while (LootDrops.size() == 0)
		{
			tries++;
			LootDrops = PickLootDrops(LootTierGroup, bPrint);

			if (tries >= 10)
				break;
		}

		if (LootDrops.size() == 0)
			continue;

		// ItemCollector->ItemCollections[z].OutputItem = (UFortWorldItemDefinition*)LootDrops.at(0).ItemDefinition;

		for (int j = 0; j < LootDrops.size(); j++)
		{
			if (IsPrimaryQuickbar(LootDrops[j].ItemDefinition)) // nice
			{
				bool bKeepGoing = true;

				for (int p = 0; p < ItemCollector->ItemCollections.Num(); p++)
				{
					if (ItemCollector->ItemCollections[p].OutputItem == LootDrops[j].ItemDefinition)
					{
						bKeepGoing = false;
						break;
					}
				}

				if (bKeepGoing)
				{
					if (LootDrops[j].ItemDefinition->Rarity == RarityToUse || RarityToUse == EFortRarity::EFortRarity_MAX)
					{
						ItemCollector->ItemCollections[z].OutputItem = Cast<UFortWorldItemDefinition>(LootDrops[j].ItemDefinition);

						if (RarityToUse == EFortRarity::EFortRarity_MAX)
							RarityToUse = LootDrops[j].ItemDefinition->Rarity;
					}
				}

				break;
			}
		}

		if (!ItemCollector->ItemCollections[z].OutputItem || ItemCollector->ItemCollections[z].OutputItem->Rarity != RarityToUse)
		{
			return FillVendingMachine(ItemCollector, LootTierGroup, recursive);

			// TODO Test below
			z--;
			continue;
		}

		for (int j = 0; j < LootDrops.size(); j++)
		{
			ItemCollector->ItemCollections[z].OutputItemEntry.Add(LootDrops[j]);
		}

		/* auto func = UObject::FindObject<UFunction>("/Game/Athena/Items/Gameplay/VendingMachine/B_Athena_VendingMachine.B_Athena_VendingMachine_C.UpdateCollectorsActiveItem");
		ABuildingItemCollectorActor_UpdateCollectorsActiveItem_Params params{};
		params.CurrentCaptureCount = 0;
		params.InputItem = ItemCollector->ActiveInputItem;
	
		ItemCollector->ProcessEvent(func, &params); */

		*(EFortRarity*)(__int64(ItemCollector) + 0xA00) = ItemCollector->ItemCollections[z].OutputItem->Rarity;
		// std::cout << "BEFORE: " << ItemCollector->bUseInstanceLootValueOverrides << '\n';
		ItemCollector->bUseInstanceLootValueOverrides = true; // !ItemCollector->bUseInstanceLootValueOverrides;

		ItemCollector->ItemCollections[z].OverrideOutputItemLootTierGroupName = LootTierGroup;
	}
}

bool (*IsResurrectionEnabled)(AFortGameStateAthena* GameState, AFortPlayerPawn* PlayerPawn) = decltype(IsResurrectionEnabled)(__int64(GetModuleHandleW(0)) + 0x12147A0);

bool IsResurrectionEnabledHook(AFortGameStateAthena* GameState, AFortPlayerPawn* PlayerPawn)
{
	// std::cout << "OG: " << IsResurrectionEnabled(GameState, PlayerPawn) << '\n';
	// std::cout << std::format("adfafqfq: 0x{:x}\n", __int64(_ReturnAddress()) - __int64(GetModuleHandleW(0)));
	// std::cout << "ISRESU!\n";
	return true;
}

void FillVendingMachines()
{
	TArray<AActor*> OutActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABuildingItemCollectorActor::StaticClass(), &OutActors);

	auto OverrideLootTierGroup = UKismetStringLibrary::Conv_StringToName(L"Loot_AthenaVending"); // ItemCollector->GetLootTierGroupOverride();

	for (int i = 0; i < OutActors.Num(); i++)
	{
		auto ItemCollector = (ABuildingItemCollectorActor*)OutActors[i];

		FillVendingMachine(ItemCollector, OverrideLootTierGroup);
	}
}

UClass** sub_7FF68F8816C0HOOK(__int64 a1, UClass** a2)
{
	// std::cout << std::format("sub_7FF68F8816C0HOOKRET: 0x{:x}\n", __int64(_ReturnAddress()) - __int64(GetModuleHandleW(0)));
	*a2 = /* Globals::bCreative */ true ? AFortGameSessionDedicatedAthena::StaticClass() : AFortGameSession::StaticClass();
	return a2;
}

/* static UClass** GetGameSessionClassHook(AGameModeBase* GameMode, UClass** a2)
{
	std::cout << std::format("GetGameSessionClassHookRET: 0x{:x}\n", __int64(_ReturnAddress()) - __int64(GetModuleHandleW(0)));
	std::cout << "i am just!\n";
	UClass* Class = Globals::bCreative ? AFortGameSessionDedicatedAthena::StaticClass() : AFortGameSession::StaticClass();
	std::cout << "Class: " << Class << '\n';
	*a2 = Class;
	return a2;
} */

static __int64 (*SetCurrentPlaylistName)(AFortGameMode* GameMode, FName PlaylistName) = decltype(SetCurrentPlaylistName)(__int64(GetModuleHandleW(0)) + 0x159DF10);

static __int64 SetCurrentPlaylistNameHOOK(AFortGameMode* GameMode, FName PlaylistName)
{
	// std::cout << std::format("FUA: 0x{:x}\n", __int64(_ReturnAddress()) - __int64(GetModuleHandleW(0)));
	return 0;
}

bool (*ReadyToStartMatch)(AFortGameModeAthena* GameMode);

void StreamPlaylistLevels(UFortPlaylist* Playlist)
{
	if (!Playlist)
		return;

	for (int i = 0; i < Playlist->AdditionalLevels.Num(); i++)
	{
		// auto World = Cast<UWorld>(Playlist->AdditionalLevels[i].Get());
		// StreamLevel(UKismetSystemLibrary::GetPathName(World->PersistentLevel).ToString());
		StreamLevel(Playlist->AdditionalLevels[i].ObjectID.AssetPathName.ToString());
	}
}

void SetPlaylist(UFortPlaylistAthena* Playlist, bool bLoadPlaylistLevels = false)
{
	auto GameState = Cast<AFortGameStateAthena>(GetWorld()->GameState);
	auto GameMode = Cast<AFortGameModeAthena>(GetWorld()->AuthorityGameMode);

	GameState->CurrentPlaylistInfo.BasePlaylist = Playlist;
	GameState->CurrentPlaylistInfo.OverridePlaylist = Playlist;

	GameState->CurrentPlaylistInfo.PlaylistReplicationKey++;
	GameState->CurrentPlaylistInfo.MarkArrayDirty();
	GameMode->CurrentPlaylistId = GameState->CurrentPlaylistInfo.BasePlaylist->PlaylistId;
	GameMode->CurrentPlaylistName = GameState->CurrentPlaylistInfo.BasePlaylist->PlaylistName;
	GameState->OnRep_CurrentPlaylistInfo();

	if (bLoadPlaylistLevels)
		StreamPlaylistLevels(Playlist);

	if (auto GameSessionDedicatedAthena = Cast<AFortGameSessionDedicatedAthena>(GetWorld()->AuthorityGameMode->GameSession))
	{
		FGameplayTagContainer Skjidda = FGameplayTagContainer(); // GameState->CurrentPlaylistInfo.BasePlaylist->GameplayTagContainer
		// GameSessionDedicatedAthena->HandlePlaylistLoaded(GameState->CurrentPlaylistInfo.BasePlaylist->PlaylistName, Skjidda);
		// ^^ WE NEED TOP FIGURE OUT WHY THIS IS CRASHING!!!
	}
}

static bool retfalsew() { return false; }

bool ReadyToStartMatchHook(AFortGameModeAthena* GameMode)
{
	// if (Globals::bRestarting)
		// return ReadyToStartMatch(GameMode);

	if (GetWorld()->OwningGameInstance->LocalPlayers.Num())
		GetWorld()->OwningGameInstance->LocalPlayers.Remove(0);

	auto GameState = Cast<AFortGameStateAthena>(GetWorld()->GameState);

	static int Last1 = 23985234;

	*(bool*)(__int64(GetModuleHandleW(0)) + 0x637925B) = false; // GIsClient // for restarting
	*(bool*)(__int64(GetModuleHandleW(0)) + 0x637925C) = true; // GIsServer

	if (Last1 != Globals::AmountOfRestarts)
	{
		Last1 = Globals::AmountOfRestarts;

		static auto BlockFoundation = UObject::FindObject<ABuildingFoundation>("/Game/Athena/Maps/Athena_POI_Foundations.Athena_POI_Foundations.PersistentLevel.SLAB_4");
		// std::cout << "BlockFoundation: " << BlockFoundation << '\n';

		if (BlockFoundation)
			ShowFoundation(BlockFoundation);

		auto Island = UObject::FindObject<ABuildingFoundation>("/Game/Athena/Maps/Athena_POI_Foundations.Athena_POI_Foundations.PersistentLevel.LF_Athena_StreamingTest16");

		if (Island)
			ShowFoundation(Island);

		StreamPlaylistLevels(GetPlaylistToUse());
	}

	TArray<AActor*> Actors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), Globals::bCreative ? AFortPlayerStart/*Creative*/::StaticClass() : AFortPlayerStartWarmup::StaticClass(), &Actors);

	int ActorsNum = Actors.Num();

	Actors.Free();

	if (ActorsNum == 0)
		return false;

	if (!Globals::bCreative)
	{
		static int Last3 = 23985234;

		if (Last3 != Globals::AmountOfRestarts)
		{
			Last3 = Globals::AmountOfRestarts;
			SetPlaylist(GetPlaylistToUse());
		}

		if (!GameState->MapInfo)
			return false;
	}

	static int Last2 = 23985234;

	if (Last2 != Globals::AmountOfRestarts)
	{
		Last2 = Globals::AmountOfRestarts;

		Globals::bRestarting = false;

		static UNetDriver* (*CreateNetDriver)(UEngine*, UWorld*, FName) = decltype(CreateNetDriver)((uintptr_t)GetModuleHandleW(0) + 0x347FAF0);
		static char (*InitListen)(UNetDriver*, void*, FURL&, bool, FString&) = decltype(InitListen)((uintptr_t)GetModuleHandleW(0) + 0x6F5F90);
		static void (*SetWorld)(UNetDriver*, UWorld*) = decltype(SetWorld)((uintptr_t)GetModuleHandleW(0) + 0x31EDF40);
		static void (*PauseBeaconRequests)(AOnlineBeacon* a1, char a2) = decltype(PauseBeaconRequests)(__int64(GetModuleHandleW(0)) + 0x17F03D0);
		static bool (*InitHost)(AOnlineBeacon* a1) = decltype(InitHost)(__int64(GetModuleHandleW(0)) + 0x6F5A30);
		
		bool bListen = true;
		bool bUseBeacons = false;

		if (bListen)
		{
			if (bUseBeacons)
			{
				BeaconHost = GetWorld()->SpawnActor<AOnlineBeaconHost>(FVector{});

				BeaconHost->ListenPort = 7777 - 1;

				if (InitHost(BeaconHost))
				{
					GetWorld()->NetDriver = BeaconHost->NetDriver;
				}
				else
				{
					std::cout << "[Beacon] Failed to InitHost!\n";
				}
			}
			else
			{
				GetWorld()->NetDriver = CreateNetDriver(GEngine, GetWorld(), UKismetStringLibrary::Conv_StringToName(L"GameNetDriver"));
			}
		}

		GameMode->GameSession->MaxPlayers = 100;

		if (GetWorld()->NetDriver)
		{
			GetWorld()->NetDriver->World = GetWorld();
			GetWorld()->NetDriver->NetDriverName = UKismetStringLibrary::Conv_StringToName(L"GameNetDriver");

			FString Error;
			auto URL = FURL();
			URL.Port = 7777;

			InitListen(GetWorld()->NetDriver, GetWorld(), URL, true, Error);
			SetWorld(GetWorld()->NetDriver, GetWorld());

			GetWorld()->LevelCollections[0].NetDriver = GetWorld()->NetDriver;
			GetWorld()->LevelCollections[1].NetDriver = GetWorld()->NetDriver;

			std::cout << "Listening!\n";
		}
		else
		{
			std::cout << "\n\nFAILED TO LISTEN!\n\n";
		}

		// GameMode->bAlwaysDBNO = true;

		if (bUseBeacons && BeaconHost)
		{
			PauseBeaconRequests(BeaconHost, false);
		}

		// std::cout << "GOT: " << *(bool*)(__int64(GetModuleHandleW(0)) + 0x5D596EC) << '\n';

		GameState->PlayersLeft--;
		GameState->OnRep_PlayersLeft();
		GameMode->bWorldIsReady = true; // needed?

		GameState->DefaultRebootMachineHotfix = 1;

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

		std::cout << std::format("Gamemode: 0x{:x}\n", __int64(GameMode));

		AllVehicleSpawners.Free();

		auto Globals = GetFortGlobals();

		/*
		std::cout << "Globlas: " << Globals << '\n';

		if (Globals)
		{
			std::cout << "AAA1: " << Globals->bAthenaSimVehicles << '\n';
			std::cout << "AAA2: " << Globals->bAthenaUsesSimCollision << '\n';
		}

		std::cout << "GameSession: " << GetWorld()->AuthorityGameMode->GameSession->GetFullName() << '\n';
		*/

		// we should probably do this on OnBuildingActorInitialized like floor loot

		// they have like 65-70% of spawning but im dumb so idk how to add and openai wont work

		if (GameState->MapInfo)
		{
			auto TreasureChestMinSpawnPercentCurve = GameState->MapInfo->TreasureChestMinSpawnPercent.Curve;
			auto TreasureChestMaxSpawnPercentCurve = GameState->MapInfo->TreasureChestMaxSpawnPercent.Curve;

			auto TreasureChestMinSpawnPercent = 65;
			auto TreasureChestMaxSpawnPercent = 70;

			std::random_device rd;
			std::mt19937 gen(rd());
			std::uniform_int_distribution<> dis(TreasureChestMinSpawnPercent, TreasureChestMaxSpawnPercent + 1);

			float TreasureChestSpawnPercent = dis(gen);

			static auto ChestClass = GameState->MapInfo->TreasureChestClass; // UObject::FindObject<UClass>("/Game/Building/ActorBlueprints/Containers/Tiered_Chest_Athena.Tiered_Chest_Athena_C");
			TArray<AActor*> AllChests;
			UGameplayStatics::GetAllActorsOfClass(GetWorld(), ChestClass, &AllChests);

			int ChestsToDelete = std::round(AllChests.Num() - ((AllChests.Num()) * (TreasureChestSpawnPercent / 100)));

			while (ChestsToDelete)
			{
				AllChests[rand() % AllChests.Num()]->K2_DestroyActor();
				ChestsToDelete--;
			}
		}
		
		if (GameState->MapInfo)
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
			std::uniform_int_distribution<> dis(AmmoBoxMinSpawnPercent, AmmoBoxMaxSpawnPercent + 1);

			float AmmoBoxSpawnPercent = dis(gen);

			int AmmoBoxesToDelete = std::round(AllAmmoBoxes.Num() - ((AllAmmoBoxes.Num()) * (AmmoBoxSpawnPercent / 100)));

			while (AmmoBoxesToDelete)
			{
				AllAmmoBoxes[rand() % AllAmmoBoxes.Num()]->K2_DestroyActor();
				AmmoBoxesToDelete--;
			}
		}

		SetupNavConfig();
		SetupBotManager();
		SetupAIDirector();

		bool success;

		ULevelStreamingDynamic::LoadLevelInstance(GetWorld(), L"/Game/Athena/Maps/Athena_Nav_Mall", { 0, 0, 3000 }, {}, &success);
		ULevelStreamingDynamic::LoadLevelInstance(GetWorld(), L"/Game/Athena/Maps/Athena_Nav_Mall", { 0, 0, 3000 }, {}, &success);

		GameMode->WarmupRequiredPlayerCount = 1; //  Globals::bMinimumPlayersToDropLS;

		static char (*SpawnLoot)(ABuildingContainer* BuildingContainer, AFortPlayerPawnAthena* Pawn, int idk, int idk2) = decltype(SpawnLoot)(__int64(GetModuleHandleW(0)) + 0x13A91C0);
		CREATE_HOOK(SpawnLootHook, SpawnLoot);

		static auto LlamaClass = UObject::FindObject<UClass>("/Game/Athena/SupplyDrops/Llama/AthenaSupplyDrop_Llama.AthenaSupplyDrop_Llama_C");
		// std::cout << "NetServerMaxTickRate: " << GetWorld()->NetDriver->NetServerMaxTickRate << '\n';

		auto playlistForUptime = GetPlaylistToUse(); // GameState->CurrentPlaylistInfo.BasePlaylist

		if (!UptimeWebHook.send_message(std::format("Server up! 10.40 {}", playlistForUptime ? playlistForUptime->PlaylistName.ToString() : "")))
		{
			// Sleep(-1); // what why did i have this here i honestly forgot
		}

		auto PlaylistToUse = GetPlaylistToUse();

		if (PlaylistToUse && PlaylistToUse->bAllowJoinInProgress)
		{
			static void (*PreLogin)() = decltype(PreLogin)((uintptr_t)GetModuleHandleW(0) + 0x11D5950);
			CREATE_HOOK(retfalsew, PreLogin);
		}

		static auto BusDefinition = // UObject::FindObject<UAthenaBattleBusItemDefinition>("/Game/Athena/Items/Cosmetics/BattleBuses/BBID_WorldCupBus.BBID_WorldCupBus");
			// UObject::FindObject<UAthenaBattleBusItemDefinition>("/Game/Athena/Items/Cosmetics/BattleBuses/BBID_BirthdayBus2nd.BBID_BirthdayBus2nd");
			// UObject::FindObject<UAthenaBattleBusItemDefinition>("/Game/Athena/Items/Cosmetics/BattleBuses/BBID_WinterBus.BBID_WinterBus");
			GetRandomObjectOfClass<UAthenaBattleBusItemDefinition>(false, false);

		if (BusDefinition)
		{
			Cast<UFortAssetManager>(GEngine->AssetManager)->GameDataCosmetics->DefaultBattleBusSkin = BusDefinition;
			GameState->DefaultBattleBus = BusDefinition;
		}

		if (Globals::bLateGame)
		{
			auto MapInfo = GameState->MapInfo;
			
			if (MapInfo)
			{
				// std::cout << "MapInfo->FlightInfos.Num(): " << MapInfo->FlightInfos.Num() << '\n';

				TArray<AActor*> AllBuildingFoundations;
				UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABuildingFoundation::StaticClass(), &AllBuildingFoundations);

				FVector LocationToStartAircraft = AllBuildingFoundations[std::rand() % AllBuildingFoundations.Num()]->K2_GetActorLocation();
				LocationToStartAircraft.Z += 10000;

				for (int i = 0; i < MapInfo->FlightInfos.Num(); i++)
				{
					auto& FlightInfo = MapInfo->FlightInfos[i];

					FlightInfo.FlightSpeed = 0;
					FlightInfo.FlightStartLocation = FVector_NetQuantize100{ LocationToStartAircraft.X, LocationToStartAircraft.Y, LocationToStartAircraft.Z };
					FlightInfo.TimeTillDropStart = 0.0f;
				}

				GameState->bAircraftIsLocked = false;
				GameState->SafeZonesStartTime = 0;

				GameState->OnRep_MapInfo();
			}
		}
	}

	bool ret = ReadyToStartMatch(GameMode); // !Globals::bCreative;
	return ret;
}

// void (*AddNavigationSystemToWorldOriginal)(__int64 WorldOwner, unsigned __int8 RunMode, UNavigationSystemConfig* NavigationSystemConfig, char bInitializeForWorld,
	// char bOverridePreviousNavSys) = decltype(AddNavigationSystemToWorldOriginal)(__int64(GetModuleHandleW(0)) + 0x2E52490);

/* void (*SetNavigationSystemOriginal)(UWorld* a1, UNavigationSystemBase* InNavigationSystem) = decltype(SetNavigationSystemOriginal)(__int64(GetModuleHandleW(0)) + 0x34DCE10);

void SetNavigationSystemHook(UWorld* a1, UNavigationSystemBase* InNavigationSystem)
{
	return SetNavigationSystemOriginal(a1, InNavigationSystem);
} */

/*
void AddNavigationSystemToWorldHook(__int64 WorldOwner, unsigned __int8 RunMode, UNavigationSystemConfig* NavigationSystemConfig, char bInitializeForWorld, char bOverridePreviousNavSys)
{
	std::cout << "Add nav system!\n";

	std::cout << "NavigationSystemConfig: " << NavigationSystemConfig << '\n';

	if (NavigationSystemConfig)
		std::cout << "NavigationSystemConfig Name: " << NavigationSystemConfig->GetFullName() << '\n';

	if (!NavigationSystemConfig)
	{
		// NavigationSystemConfig = UGameplayStatics::SpawnObject(UNavigationSystemConfig::StaticClass(), )
	}

	std::cout << "after: " << NavigationSystemConfig << '\n';

	return AddNavigationSystemToWorldOriginal(WorldOwner, RunMode, NavigationSystemConfig, bInitializeForWorld, bOverridePreviousNavSys);
}
*/

void ServerAcknowledgePossessionHook(APlayerController* PlayerController, APawn* P)
{
	PlayerController->AcknowledgedPawn = P;

	auto PC = Cast<AFortPlayerController>(PlayerController);
	auto PlayerState = Cast<AFortPlayerState>(PlayerController->PlayerState);
	auto PawnAsAthena = Cast<AFortPlayerPawnAthena>(P);

	if (PlayerState)
	{
		PawnAsAthena->CosmeticLoadout = PC->CosmeticLoadoutPC;
		PawnAsAthena->OnRep_CosmeticLoadout();

		ApplyCID(PlayerState, PawnAsAthena->CosmeticLoadout.Character, PawnAsAthena);
		// ApplyCustomizationToCharacter(PlayerState);
	}
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

__int64 (*asdaqdOg)(__int64 a1, float a2) = decltype(asdaqdOg)(__int64(GetModuleHandleW(0)) + 0x11ED3F0);

__int64 asdaqdDetour(__int64 a1, float a2)
{
	std::cout << "zone222 a2: " << a2 << '\n';
	std::cout << std::format("zone222 funny: 0x{:x}\n", __int64(_ReturnAddress()) - __int64(GetModuleHandleW(0)));
	return asdaqdOg(a1, a2);
}

__int64 (*wtfafaeifgjkwOg)(UObject* a1) = decltype(wtfafaeifgjkwOg)(__int64(GetModuleHandleW(0)) + 0x2E4C200);

__int64 wtfafaeifgjkwDetour(UObject* a1)
{
	if (a1->IsA(AFortGameMode::StaticClass()))
	{
		// std::cout << std::format("zone333 funny: 0x{:x}\n", __int64(_ReturnAddress()) - __int64(GetModuleHandleW(0)));
	}

	return wtfafaeifgjkwOg(a1);
}

void (*sub_7FF68F4E72C0Og)(__int64 a1, int a2) = decltype(sub_7FF68F4E72C0Og)(__int64(GetModuleHandleW(0)) + 0x11E72C0);

void sub_7FF68F4E72C0Detour(__int64 a1, int a2)
{
	std::cout << "a2: " << a2 << '\n';
	std::cout << std::format("zone funny: 0x{:x}\n", __int64(_ReturnAddress()) - __int64(GetModuleHandleW(0)));
	return sub_7FF68F4E72C0Og(a1, a2);
}

bool CommitExecuteWeaponHook(UObject* Object, UFunction*, void* Parameters)
{
	auto Ability = (UFortGameplayAbility*)Object;
	AFortPawn* Pawn = Ability->GetActivatingPawn();

	if (Pawn)
	{
		auto currentWeapon = Pawn->CurrentWeapon;

		if (currentWeapon)
		{
			auto Controller = Cast<AFortPlayerControllerAthena>(Pawn->Controller, false);
			auto& InstanceEntry = FindItemInstance(Controller, currentWeapon->ItemEntryGuid)->ItemEntry;
			auto ReplicatedEntry = FindReplicatedEntry(Controller, currentWeapon->ItemEntryGuid);

			InstanceEntry.LoadedAmmo = currentWeapon->AmmoCount;
			ReplicatedEntry->LoadedAmmo = currentWeapon->AmmoCount;
			Controller->WorldInventory->Inventory.MarkItemDirty(InstanceEntry);
			Controller->WorldInventory->Inventory.MarkItemDirty(*ReplicatedEntry);
		}
	}

	return false;
}

static void (*HandleStartingNewPlayer)(AFortGameModeAthena* GameMode, AFortPlayerControllerAthena* NewPlayer);

static void KickPlayerHook(AGameSession* GameSession, AFortPlayerControllerAthena* Controller)
{
	// std::cout << "KickPlayer!\n";
}

static bool OnSafeZoneStateChangeHook(UObject* Object, UFunction*, void* Parameters)
{
	auto SafeZoneIndicator = (AFortSafeZoneIndicator*)Object;

	auto Params = (AFortSafeZoneIndicator_OnSafeZoneStateChange_Params*)Parameters;

	std::cout << "Params->NewState: " << (int)Params->NewState << '\n';
	std::cout << "Params->bInitial: " << (int)Params->bInitial << '\n';

	if (Globals::bLateGame)
	{
		auto GameState = Cast<AFortGameStateAthena>(GetWorld()->GameState);
		auto GameMode = Cast<AFortGameModeAthena>(GetWorld()->AuthorityGameMode);
		auto Aircraft = GameState->Aircrafts[0];

		std::cout << "Aircraft: " << Aircraft << '\n';

		static FVector AircraftLocation = Aircraft->K2_GetActorLocation();
		static FVector_NetQuantize100 AircraftLocationQuantize = FVector_NetQuantize100{ AircraftLocation.X, AircraftLocation.Y, AircraftLocation.Z };

		std::cout << "GameMode->SafeZonePhase: " << GameMode->SafeZonePhase << '\n';

		if (GameMode->SafeZonePhase == 0)
		{
			UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), L"skipshrinksafezone", nullptr);
			SafeZoneIndicator->Radius = 20000;
			SafeZoneIndicator->NextRadius = 20000;
			SafeZoneIndicator->NextCenter = AircraftLocationQuantize;
		}
		if (GameMode->SafeZonePhase == 1)
		{
			UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), L"skipshrinksafezone", nullptr);
			SafeZoneIndicator->NextRadius = 20000;
			SafeZoneIndicator->NextCenter = AircraftLocationQuantize;
		}
		if (GameMode->SafeZonePhase == 2)
		{
			UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), L"skipshrinksafezone", nullptr);
			SafeZoneIndicator->NextRadius = 20000;
			SafeZoneIndicator->NextCenter = AircraftLocationQuantize;
		}
		if (GameMode->SafeZonePhase == 3)
		{
			UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), L"skipshrinksafezone", nullptr);
			SafeZoneIndicator->NextRadius = 20000;
			SafeZoneIndicator->NextCenter = AircraftLocationQuantize;
		}
		if (GameMode->SafeZonePhase == 4) // Start
		{
			// AircraftLocationQuantize += FVector_NetQuantize100{ GetRandomFloat(0, 1000), GetRandomFloat(0, 1000), 0 };

			UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), L"startshrinksafezone", nullptr);
			SafeZoneIndicator->NextRadius = 9500;
			SafeZoneIndicator->NextCenter = AircraftLocationQuantize;
		}
		if (GameMode->SafeZonePhase == 5)
		{
			AircraftLocationQuantize += FVector_NetQuantize100{ GetRandomFloat(5000, 10000), GetRandomFloat(5000, 10000), 0 };

			UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), L"startshrinksafezone", nullptr);
			SafeZoneIndicator->NextRadius = 4000;
			SafeZoneIndicator->NextCenter = AircraftLocationQuantize;
		}
		if (GameMode->SafeZonePhase == 6)
		{
			AircraftLocationQuantize += FVector_NetQuantize100{ GetRandomFloat(5000, 10000), GetRandomFloat(5000, 10000), 0 };

			UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), L"startshrinksafezone", nullptr);
			SafeZoneIndicator->NextRadius = 1000;
			SafeZoneIndicator->NextCenter = AircraftLocationQuantize;
		}
		if (GameMode->SafeZonePhase == 7)
		{
			AircraftLocationQuantize += FVector_NetQuantize100{ GetRandomFloat(5000, 10000), GetRandomFloat(5000, 10000), 0 };

			UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), L"startshrinksafezone", nullptr);
			SafeZoneIndicator->NextRadius = 0;
			SafeZoneIndicator->NextCenter = AircraftLocationQuantize;
		}
		if (GameMode->SafeZonePhase == 8)
		{
			AircraftLocationQuantize += FVector_NetQuantize100{ GetRandomFloat(5000, 10000), GetRandomFloat(5000, 10000), 0 };

			UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), L"startshrinksafezone", nullptr);
			SafeZoneIndicator->NextRadius = 0;
			SafeZoneIndicator->NextCenter = AircraftLocationQuantize;
		}
		if (GameMode->SafeZonePhase == 9)
		{
			AircraftLocationQuantize += FVector_NetQuantize100{ GetRandomFloat(5000, 10000), GetRandomFloat(5000, 10000), 0 };

			UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), L"startshrinksafezone", nullptr);
			SafeZoneIndicator->NextRadius = 0;
			SafeZoneIndicator->NextCenter = AircraftLocationQuantize;
		}

	}

	return false;
}

DWORD WINAPI StartZoneThread(LPVOID)
{
	// Sleep(1000);
	
	auto GameState = Cast<AFortGameStateAthena>(GetWorld()->GameState);

	UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), L"startsafezone", nullptr/* ReceivingController */);
	GameState->SafeZonesStartTime = 0; // for now
	GameState->bAircraftIsLocked = false;

	return 0;
}

void ServerRemoveInventoryItemHook(AFortPlayerController* PlayerController, FGuid ItemGuid, int Count, bool bForceRemoveFromQuickBars, bool bForceRemoval)
{
	bool bShouldUpdate = false;

	RemoveItem(PlayerController, ItemGuid, Count, false, &bShouldUpdate);

	if (bShouldUpdate)
		Update(PlayerController);
}

void ServerAttemptAircraftJumpHook(AFortPlayerController* PlayerController, FRotator ClientRotation)
{
	// std::cout << "ServerAttemptAircraftJump!\n";

	auto GameState = Cast<AFortGameStateAthena>(GetWorld()->GameState);

	auto Aircraft = GameState->Aircrafts[0];

	if (!Aircraft || !PlayerController->IsInAircraft())
		return;

	static bool aa = false;

	if (!aa)
	{
		CreateThread(0, 0, StartZoneThread, 0, 0, 0);

		aa = true;
	}

	if (Globals::bLateGame)
	{
		static auto WoodItemData = UObject::FindObject<UFortItemDefinition>("/Game/Items/ResourcePickups/WoodItemData.WoodItemData");
		static auto StoneItemData = UObject::FindObject<UFortItemDefinition>("/Game/Items/ResourcePickups/StoneItemData.StoneItemData");
		static auto MetalItemData = UObject::FindObject<UFortItemDefinition>("/Game/Items/ResourcePickups/MetalItemData.MetalItemData");

		static auto Rifle = UObject::FindObject<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_AutoHigh_Athena_SR_Ore_T03.WID_Assault_AutoHigh_Athena_SR_Ore_T03");
		static auto Shotgun = UObject::FindObject<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Shotgun_Standard_Athena_SR_Ore_T03.WID_Shotgun_Standard_Athena_SR_Ore_T03");
		static auto SMG = UObject::FindObject<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Pistol_AutoHeavyPDW_Athena_R_Ore_T03.WID_Pistol_AutoHeavyPDW_Athena_R_Ore_T03");

		static auto MiniShields = UObject::FindObject<UFortItemDefinition>("/Game/Athena/Items/Consumables/ShieldSmall/Athena_ShieldSmall.Athena_ShieldSmall");

		static auto Shells = UObject::FindObject<UFortItemDefinition>("/Game/Athena/Items/Ammo/AthenaAmmoDataShells.AthenaAmmoDataShells");
		static auto Medium = UObject::FindObject<UFortItemDefinition>("/Game/Athena/Items/Ammo/AthenaAmmoDataBulletsMedium.AthenaAmmoDataBulletsMedium");
		static auto Light = UObject::FindObject<UFortItemDefinition>("/Game/Athena/Items/Ammo/AthenaAmmoDataBulletsLight.AthenaAmmoDataBulletsLight");
		static auto Heavy = UObject::FindObject<UFortItemDefinition>("/Game/Athena/Items/Ammo/AthenaAmmoDataBulletsHeavy.AthenaAmmoDataBulletsHeavy");

		GiveItem(PlayerController, WoodItemData, 500);
		GiveItem(PlayerController, StoneItemData, 500);
		GiveItem(PlayerController, MetalItemData, 500);
		GiveItem(PlayerController, Rifle, 1);
		GiveItem(PlayerController, Shotgun, 1);
		GiveItem(PlayerController, SMG, 1);
		GiveItem(PlayerController, MiniShields, 6);
		GiveItem(PlayerController, Shells, 999);
		GiveItem(PlayerController, Medium, 999);
		GiveItem(PlayerController, Light, 999);
		GiveItem(PlayerController, Heavy, 999);
	}

	Update(PlayerController);

	static auto PawnClass = UObject::FindObject<UBlueprintGeneratedClass>("/Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C");

	auto Pawn = GetWorld()->SpawnActor<AFortPlayerPawnAthena>(Aircraft->K2_GetActorLocation(), FRotator(0, 0, 0), PawnClass);
	Pawn->CosmeticLoadout = PlayerController->CosmeticLoadoutPC;
	Pawn->OnRep_CosmeticLoadout();
	PlayerController->Possess(Pawn);
	PlayerController->ClientSetRotation(ClientRotation, false);
	Pawn->SetShield(100);
	Pawn->SetHealth(100);

	Pawn->CosmeticLoadout = PlayerController->CosmeticLoadoutPC;
	Pawn->OnRep_CosmeticLoadout();
}

__int64 (*UPlaysetLevelStreamComponent_LoadPlayset)(UPlaysetLevelStreamComponent* a1) = decltype(UPlaysetLevelStreamComponent_LoadPlayset)(__int64(GetModuleHandleW(0)) + 0x1A3A0A0);

void ShowPlayset(UFortPlaysetItemDefinition* PlaysetItemDef, AFortVolume* Volume, AFortPlayerController* PlayerController, bool bSpawnActors = false, FVector SpawnLocation = FVector())
{
	SpawnLocation = SpawnLocation.X == 0 && SpawnLocation.Y == 0 && SpawnLocation.Z == 0 ? Volume->K2_GetActorLocation() : SpawnLocation;

	auto GameState = Cast<AFortGameStateAthena>(GetWorld()->AuthorityGameMode->GameState);

	static auto VolumeClass = UObject::FindObject<UBlueprintGeneratedClass>("/Game/Athena/BuildingActors/FortVolumeActor_PrefabGrenades.FortVolumeActor_PrefabGrenades_C");
	auto NewVolume = bSpawnActors ? GameState->VolumeManager->SpawnVolume(VolumeClass, PlaysetItemDef, SpawnLocation, PlaysetItemDef->DefaultRotation)
		: Volume;

	if (!NewVolume)
	{
		std::cout << "Failed to spawn volume!\n";
		return;
	}

	if (bSpawnActors)
	{

	}

	auto LevelStreamComponent = (UPlaysetLevelStreamComponent*)NewVolume->GetComponentByClass(UPlaysetLevelStreamComponent::StaticClass());

	if (!LevelStreamComponent)
	{
		std::cout << "No LevelStreamComponent!\n";
		// return;
	}

	auto Location = NewVolume->K2_GetActorLocation();

	// NewVolume->UpdateSize(FVector{ 1000, 1000, 1000 });
	NewVolume->OverridePlayset = PlaysetItemDef;
	NewVolume->CurrentPlayset = PlaysetItemDef;
	NewVolume->SetCurrentPlayset(PlaysetItemDef);
	NewVolume->OnRep_CurrentPlayset();

	if (LevelStreamComponent)
	{
		LevelStreamComponent->SetPlayset(PlaysetItemDef);

		/*
		LevelStreamComponent->ClientPlaysetData.bValid = true;
		LevelStreamComponent->ClientPlaysetData.Location = Location;
		LevelStreamComponent->ClientPlaysetData.Rotation = PlaysetItemDef->DefaultRotation;
		*/

		LevelStreamComponent->OnRep_ClientPlaysetData();
		UPlaysetLevelStreamComponent_LoadPlayset(LevelStreamComponent);
	}

	/*
	auto PoiManager = GameState->PoiManager;

	std::cout << "PoiManager->AllPoiVolumes.Num(): " << PoiManager->AllPoiVolumes.Num() << '\n';

	for (int i = 0; i < PoiManager->AllPoiVolumes.Num(); i++)
	{
		auto PoiVolume = PoiManager->AllPoiVolumes[i];

		if (!PoiVolume)
			continue;

		std::cout << "PoiVolume Name: " << PoiVolume->GetFullName() << '\n';
		std::cout << "LocationTags: " << PoiVolume->LocationTags.ToStringSimple(true) << '\n';
	}
	*/

	if (!bSpawnActors)
		return;

	std::cout << "Num: " << PlaysetItemDef->ActorClassCount.Num() << '\n';

	for (auto& ActorClass : PlaysetItemDef->ActorClassCount)
	{
		auto& ClassSoft = ActorClass.Key();

		auto Class = ClassSoft.Get();

		std::cout << "Class: " << Class << '\n';

		if (!Class)
			continue;

		std::cout << "Class Name: " << Class->GetFullName() << '\n';

		// for (int i = 0; i < ActorClass.Value(); i++)
		{
			auto Location = SpawnLocation;

			auto Actor = GetWorld()->SpawnActor<AActor>(Location, FRotator(), Class);
		}
	}
}

void GiveItemToInventoryOwnerHook(UObject* Object, FFrame& Stack)
{
	auto Params = (UFortKismetLibrary_GiveItemToInventoryOwner_Params*)Stack.Locals;

	auto PC = Params->InventoryOwner.GetObjectPtr<AFortPlayerController>();

	std::cout << "PC: " << PC << '\n';

	if (!PC)
		return;

	std::cout << "Pc Name: " << PC->GetFullName() << '\n';

	bool bShouldUpdate = false;
	GiveItem(PC, Params->ItemDefinition, Params->NumberToGive, -1, &bShouldUpdate);

	if (bShouldUpdate)
		Update(PC);
}

void ServerChangeNameHook(APlayerController* Controller, FString S)
{
	std::cout << "Potential cheater: " << Controller->PlayerState->GetPlayerName().ToString() << '\n';
}

int (*K2_RemoveItemFromPlayerOriginal)(UObject* Object, FFrame& Stack, int* Res);

int K2_RemoveItemFromPlayerHook(UObject* Object, FFrame& Stack, int* Res)
{
	K2_RemoveItemFromPlayerOriginal(Object, Stack, Res);
	auto Params = (UFortKismetLibrary_K2_RemoveItemFromPlayer_Params*)Stack.Locals;

	bool bShouldUpdate = false;
	RemoveItem(Params->PlayerController, Params->ItemDefinition, Params->AmountToRemove, &bShouldUpdate);

	if (bShouldUpdate)
		Update(Params->PlayerController);

	*Res = 0;
	return *Res;
}

AFortPickup* (*K2_SpawnPickupInWorldOriginal)(UObject* Object, FFrame& Stack, AFortPickup** Res);

AFortPickup* K2_SpawnPickupInWorldHook(UObject* Object, FFrame& Stack, AFortPickup** Res)
{
	K2_SpawnPickupInWorldOriginal(Object, Stack, Res);
	auto Params = (UFortKismetLibrary_K2_SpawnPickupInWorld_Params*)Stack.Locals;

	FFortItemEntry Entry;
	Entry.ItemDefinition = Params->ItemDefinition;
	Entry.Count = Params->NumberToSpawn;

	auto Pickup = SpawnPickup(Entry, Params->Position, Params->SourceType, Params->Source, Params->OptionalOwnerPC ? Params->OptionalOwnerPC->MyFortPawn : nullptr); // Params->bToss

	if (Pickup)
	{
		Pickup->bOnlyRelevantToOwner = Params->bPickupOnlyRelevantToOwner;
	}

	// Params->ReturnValue = Pickup;
	*Res = Pickup;
	return *Res;
}

bool (*PickLootDropsOriginal)(UObject* Object, FFrame& Stack, bool* Res);

bool PickLootDropsHook(UObject* Object, FFrame& Stack, bool* Res)
{
	PickLootDropsOriginal(Object, Stack, Res);
	auto Params = (UFortKismetLibrary_PickLootDrops_Params*)Stack.Locals;

	if (!Params->TierGroupName.ComparisonIndex)
	{
		std::cout << "No tiergroup!\n";

		*Res = false;
		return Res;
	}

	auto LootDrops = PickLootDrops(Params->TierGroupName);

	for (int i = 0; i < LootDrops.size(); i++)
	{
		Params->OutLootToDrop.Add(LootDrops[i]);
	}

	*Res = LootDrops.size() > 0;
	return Res;
}

AFortPickup* (*SupplyDrop_SpawnPickupOriginal)(AFortAthenaSupplyDrop* SupplyDrop, FFrame& Stack, AFortPickup** Res);

AFortPickup* SupplyDrop_SpawnPickupHook(AFortAthenaSupplyDrop* SupplyDrop, FFrame& Stack, AFortPickup** Res)
{
	SupplyDrop_SpawnPickupOriginal(SupplyDrop, Stack, Res);
	std::cout << "LEGIT!\n";
	auto Params = (AFortAthenaSupplyDrop_SpawnPickup_Params*)Stack.Locals;

	FFortItemEntry Entry;
	Entry.ItemDefinition = Params->ItemDefinition;
	Entry.Count = Params->NumberToSpawn;

	auto Pickup = SpawnPickup(Entry, Params->Position, EFortPickupSourceTypeFlag::Other, EFortPickupSpawnSource::SupplyDrop, Params->TriggeringPawn); // Params->bToss

	// Params->ReturnValue = Pickup;
	*Res = Pickup;
	return *Res;
}

bool MakeNewCreativePlotHook(UObject* Object, UFunction*, void* Parameters)
{
	if (!Parameters)
		return false;

	auto Params = (AFortPlayerControllerAthena_MakeNewCreativePlot_Params*)Parameters;

	auto Controller = (AFortPlayerControllerAthena*)Object;

	if (!Controller->OwnedPortal)
		return false;

	ShowPlayset(Params->PlotType->BasePlayset.Get(), Controller->CreativePlotLinkedVolume, Controller);

	return false;
}

char (*IsPlaysetWithinVolumeBoundsOriginal)(__int64 VolumeManager, float* StartLocation, __int64 PlaysetRotation, __int64 NewPlayset) = decltype(IsPlaysetWithinVolumeBoundsOriginal)
(__int64(GetModuleHandleW(0)) + 0x143C260);

char IsPlaysetWithinVolumeBoundsHook(__int64 VolumeManager, float* StartLocation, __int64 PlaysetRotation, __int64 NewPlayset)
{
	std::cout << "radical!\n";
	return true;
}

__int64 (*SetCustomizationLoadoutDataOriginal)(AFortPlayerPawn* Pawn, FFortAthenaLoadout NewLoadout) = decltype(SetCustomizationLoadoutDataOriginal)(
	__int64(GetModuleHandleW(0)) + 0x1979D00
	);

__int64 SetCustomizationLoadoutDataHook(AFortPlayerPawn* Pawn, FFortAthenaLoadout NewLoadout)
{
	return SetCustomizationLoadoutDataOriginal(Pawn, NewLoadout);

	auto Controller = Cast<AFortPlayerController>(Pawn->Controller);

	if (!Controller)
	{
		std::cout << "No controller!\n";
		return 0;
	}

	std::cout << std::format("setacjwugtwugu: 0x{:x}\n", __int64(_ReturnAddress()) - __int64(GetModuleHandleW(0)));

	// NewLoadout = Controller->CosmeticLoadoutPC;
	return SetCustomizationLoadoutDataOriginal(Pawn, NewLoadout);
}

__int64 (*DispatchRequestOriginal)(__int64 a1, __int64* a2, int a3) = decltype(DispatchRequestOriginal)(__int64(GetModuleHandleW(0)) + 0xBAED60);

__int64 DispatchRequestHook(__int64 a1, __int64* a2, int a3)
{
	std::cout << std::format("DispatchRequest: 0x{:x}\n", __int64(_ReturnAddress()) - __int64(GetModuleHandleW(0)));
	std::cout << "a3: " << a3 << '\n';

	a3 = 3;

	return DispatchRequestOriginal(a1, a2, a3);
}

void HandleStartingNewPlayerHook(AFortGameModeAthena* GameMode, AFortPlayerControllerAthena* NewPlayer)
{
	auto GameState = Cast<AFortGameStateAthena>(GameMode->GameState);

	UptimeWebHook.send_message("Player joined! Player count is now " + std::to_string(GetWorld()->NetDriver->ClientConnections.Num()));

	if (IsBanned(NewPlayer))
	{
		KickPlayer(NewPlayer, L"You can't join! You're banned!");
		return;
	}

	static bool bFirst = true;

	if (bFirst)
	{
		bFirst = false;

		float skid = 100000.f;

		float Duration = skid;
		float EarlyDuration = skid;

		auto TimeSeconds = UGameplayStatics::GetTimeSeconds(GetWorld());

		GameState->WarmupCountdownEndTime = TimeSeconds + Duration;
		GameMode->WarmupCountdownDuration = Duration;

		GameState->WarmupCountdownStartTime = TimeSeconds;
		GameMode->WarmupEarlyCountdownDuration = EarlyDuration;

		static auto CommitExecuteFn = UObject::FindObject<UFunction>("/Game/Abilities/Weapons/Ranged/GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C.K2_CommitExecute");
		AddHook(CommitExecuteFn, CommitExecuteWeaponHook);

		static auto OnSafeZoneStateChangeFn = UObject::FindObject<UFunction>("/Game/Athena/SafeZone/SafeZoneIndicator.SafeZoneIndicator_C.OnSafeZoneStateChange");
		// std::cout << "OnSafeZoneStateChangeFn: " << OnSafeZoneStateChangeFn << '\n';
		AddHook(OnSafeZoneStateChangeFn, OnSafeZoneStateChangeHook);

		SpawnFloorLoot();
		FillVendingMachines();

		TArray<AActor*> AllBGASpawners;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABGAConsumableSpawner::StaticClass(), &AllBGASpawners);

		// std::cout << "AllBGASpawners.Num(): " << AllBGASpawners.Num() << '\n';

		for (int i = 0; i < AllBGASpawners.Num(); i++)
		{
			auto BGASpawner = (ABGAConsumableSpawner*)AllBGASpawners[i];

			// std::cout << "BGASpawner->SpawnLootTierGroup.ComparisonIndex: " << BGASpawner->SpawnLootTierGroup.ComparisonIndex << '\n';

			if (BGASpawner->SpawnLootTierGroup.ComparisonIndex <= 0)
				continue;

			auto LootDrops = PickLootDrops(BGASpawner->SpawnLootTierGroup);

			// std::cout << "BGA LootDrops.size(): " << LootDrops.size() << '\n';

			if (LootDrops.size())
			{
				for (int j = 0; j < LootDrops.size(); j++)
				{
					auto BGAItemDef = Cast<UBGAConsumableWrapperItemDefinition>(LootDrops[j].ItemDefinition);

					// std::cout << "BGAItemDef: " << BGAItemDef << '\n';

					if (BGAItemDef)
					{
						// std::cout << "BGAItemDef Name: " << BGAItemDef->GetFullName() << '\n';

						auto ConsumableClass = BGAItemDef->ConsumableClass.Get();

						// std::cout << "ConsumableClass: " << ConsumableClass << '\n';

						if (ConsumableClass)
						{
							// std::cout << "ConsumableClass Name: " << ConsumableClass->GetFullName() << '\n';

							auto loc = BGASpawner->K2_GetActorLocation();
							loc += FVector{ 0, 0, 200 };
							auto BGA = GetWorld()->SpawnActor<ABuildingGameplayActorConsumable>(loc, BGASpawner->K2_GetActorRotation(), ConsumableClass);
						}
					}
				}
			}
		}

		AllBGASpawners.Free();


		if (auto GameSessionDedicatedAthena = Cast<AFortGameSessionDedicatedAthena>(GetWorld()->AuthorityGameMode->GameSession))
		{
			FGameplayTagContainer Skjidda = FGameplayTagContainer(); // GameState->CurrentPlaylistInfo.BasePlaylist->GameplayTagContainer
			// GameSessionDedicatedAthena->HandlePlaylistLoaded(GameState->CurrentPlaylistInfo.BasePlaylist->PlaylistName, Skjidda);
			// ^^ WE NEED TOP FIGURE OUT WHY THIS IS CRASHING!!!
		}

		if (Globals::bCreative)
		{
			SetPlaylist(GetPlaylistToUse());
		}
	}

	auto PlayerState = Cast<AFortPlayerStateAthena>(NewPlayer->PlayerState);

	if (!PlayerState)
		return;

	// std::cout << "handlestartingnewpla;yer!\n";

	NewPlayer->bHasServerFinishedLoading = true;
	NewPlayer->OnRep_bHasServerFinishedLoading();

	// NewPlayer->bBuildFree = true;
	// NewPlayer->bInfiniteAmmo = true;

	PlayerState->bHasStartedPlaying = true;
	PlayerState->OnRep_bHasStartedPlaying();

	/* GiveItem(NewPlayer, UObject::FindObject<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Shotgun_Standard_Athena_SR_Ore_T03.WID_Shotgun_Standard_Athena_SR_Ore_T03"), 1);
	GiveItem(NewPlayer, UObject::FindObject<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Assault_AutoHigh_Athena_SR_Ore_T03.WID_Assault_AutoHigh_Athena_SR_Ore_T03"), 1);
	GiveItem(NewPlayer, UObject::FindObject<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Pistol_AutoHeavyPDW_Athena_R_Ore_T03.WID_Pistol_AutoHeavyPDW_Athena_R_Ore_T03"), 1);
	GiveItem(NewPlayer, UObject::FindObject<UFortItemDefinition>("/Game/Athena/Items/Consumables/ShieldSmall/Athena_ShieldSmall.Athena_ShieldSmall"), 6);
	GiveItem(NewPlayer, UObject::FindObject<UFortItemDefinition>("/Game/Athena/Items/Ammo/AthenaAmmoDataShells.AthenaAmmoDataShells"), 999);
	GiveItem(NewPlayer, UObject::FindObject<UFortItemDefinition>("/Game/Athena/Items/Ammo/AthenaAmmoDataBulletsMedium.AthenaAmmoDataBulletsMedium"), 999);
	GiveItem(NewPlayer, UObject::FindObject<UFortItemDefinition>("/Game/Athena/Items/Ammo/AthenaAmmoDataBulletsLight.AthenaAmmoDataBulletsLight"), 999);
	Update(NewPlayer); */

	//static auto CID = UObject::FindObject<UAthenaCharacterItemDefinition>("/Game/Athena/Items/Cosmetics/Characters/CID_001_Athena_Commando_F_Default.CID_001_Athena_Commando_F_Default");
	// static auto HeadPart = UObject::FindObject<UCustomCharacterPart>("/Game/Characters/CharacterParts/Female/Medium/Heads/F_Med_Head1.F_Med_Head1");
	// static auto BodyPart = UObject::FindObject<UCustomCharacterPart>("/Game/Characters/CharacterParts/Female/Medium/Bodies/F_Med_Soldier_01.F_Med_Soldier_01");
	static auto BackpackPart = UObject::FindObject<UCustomCharacterPart>("/Game/Characters/CharacterParts/Backpacks/NoBackpack.NoBackpack");

	{
		NewPlayer->CosmeticLoadoutPC.Character = GetRandomObjectOfClass<UAthenaCharacterItemDefinition>(true, true);
		NewPlayer->CosmeticLoadoutPC.Glider = GetRandomObjectOfClass<UAthenaGliderItemDefinition>(true, true);
		NewPlayer->CosmeticLoadoutPC.SkyDiveContrail = GetRandomObjectOfClass<UAthenaSkyDiveContrailItemDefinition>(true, true);
		NewPlayer->CosmeticLoadoutPC.Pickaxe = GetRandomObjectOfClass<UAthenaPickaxeItemDefinition>(true, true);
		NewPlayer->CosmeticLoadoutPC.bIsDefaultCharacter = false;
	}

	static auto GameplayAbilitySet = UObject::FindObject<UFortAbilitySet>("/Game/Abilities/Player/Generic/Traits/DefaultPlayer/GAS_AthenaPlayer.GAS_AthenaPlayer");
	GiveFortAbilitySet(PlayerState, GameplayAbilitySet);

	auto CurrentPlaylist = GetCurrentPlaylist();

	if (CurrentPlaylist)
	{
		for (int i = 0; i < CurrentPlaylist->ModifierList.Num(); i++)
		{
			auto& ModifierSoft = CurrentPlaylist->ModifierList[i];
			auto Modifier = ModifierSoft.Get();

			if (!Modifier)
				continue;

			ApplyModifierItemDefinition(Modifier, PlayerState->AbilitySystemComponent);
		}
	}

	if (PlayerState->PlayerTeam)
	{
		/* std::cout << "SquadId Before: " << (int)PlayerState->SquadId << '\n';
		std::cout << "PlayerState->PlayerTeam->TeamMembers.Num() Before: " << (int)PlayerState->PlayerTeam->TeamMembers.Num() << '\n';
		std::cout << "TeamIndex Before: " << (int)PlayerState->TeamIndex << '\n';
		std::cout << "PlayerTeam->Team Before: " << (int)PlayerState->PlayerTeam->Team << '\n'; */

		/*
		static int NextTeamIndex = 3;

		PlayerState->SquadId = NextTeamIndex;
		PlayerState->TeamIndex = NextTeamIndex;
		PlayerState->PlayerTeam = GameState->Teams[NextTeamIndex - 3];
		PlayerState->PlayerTeam->TeamMembers.Add(NewPlayer);
		PlayerState->PlayerTeamPrivate = PlayerState->PlayerTeam->PrivateInfo;

		std::cout << "SquadId After: " << (int)PlayerState->SquadId << '\n';
		std::cout << "TeamIndex After: " << (int)PlayerState->TeamIndex << '\n';
		std::cout << "PlayerTeam->Team After: " << (int)PlayerState->PlayerTeam->Team << '\n';

		*/

		int ToSubtractBy = 2; // GameState->CurrentPlaylistInfo.BasePlaylist->MaxSquadSize; // PlayerState->TeamIndex - 3; // 1;
		PlayerState->SquadId = PlayerState->TeamIndex /*  + PlayerState->PlayerTeam->TeamMembers.Num() */ - ToSubtractBy;
		
		/* PlayerState->OnRep_PlayerTeam();
		PlayerState->OnRep_PlayerTeamPrivate();
		PlayerState->OnRep_TeamIndex(0);
		PlayerState->OnRep_SquadId(); */

		FGameMemberInfo MemberInfo{ -1, -1, -1 };
		MemberInfo.TeamIndex = PlayerState->TeamIndex;
		MemberInfo.SquadId = PlayerState->SquadId;
		MemberInfo.MemberUniqueId = PlayerState->UniqueId;

		GameState->GameMemberInfoArray.Members.Add(MemberInfo);
		GameState->GameMemberInfoArray.MarkArrayDirty();
	}

	// GameState->PlayersLeft++;
	GameState->OnRep_PlayersLeft();
	
	/*
	std::cout << "AthenaProfile: " << NewPlayer->AthenaProfile << '\n';
	std::cout << "MetadataProfile: " << NewPlayer->MetadataProfile << '\n';
	std::cout << "MainMcpProfile: " << NewPlayer->MainMcpProfile << '\n';
	std::cout << "CommonCoreMcpProfile: " << NewPlayer->CommonCoreMcpProfile << '\n';
	std::cout << "CommonPublicMcpProfile: " << NewPlayer->CommonPublicMcpProfile << '\n';
	std::cout << "CreativeModeProfile: " << NewPlayer->CreativeModeProfile << '\n';

	if (NewPlayer->GetRegisteredPlayerInfo())
		std::cout << "GetRegisteredPlayerInfo()->CreativeModeProfile: " << NewPlayer->GetRegisteredPlayerInfo()->CreativeModeProfile << '\n';

	std::cout << "SKIDD: " << NewPlayer->GetRegisteredPlayerInfo() << '\n';
	*/

	if (Globals::bCreative && !PlayerState->bIsSpectator)
	{
		auto PortalManager = GameState->CreativePortalManager;
		auto Portal = PortalManager->AvailablePortals[0];
		//PortalManager->MarkPortalUsed(Portal);
		PortalManager->AvailablePortals.Remove(0);
		PortalManager->UsedPortals.Add(Portal);

		Portal->OwningPlayer = PlayerState->UniqueId;
		Portal->OnRep_OwningPlayer();

		Portal->bPortalOpen = true;
		Portal->OnRep_PortalOpen();

		Portal->PlayersReady.Add(Portal->OwningPlayer);
		Portal->OnRep_PlayersReady();

		Portal->IslandInfo.CreatorName = PlayerState->GetPlayerName();
		Portal->IslandInfo.Version = 1.0f;
		Portal->IslandInfo.SupportCode = L"ProjectReboot";
		Portal->IslandInfo.Mnemonic = L"discord.gg/reboot";
		Portal->IslandInfo.ImageUrl = L"https://th.bing.com/th/id/OIP.uUg45Kci2-a38s2ac3arVAHaEK?pid=ImgDet&rs=1";
		Portal->OnRep_IslandInfo();

		constexpr bool bIsPublished = false;

		Portal->bUserInitiatedLoad = true;
		Portal->bInErrorState = false;

		Portal->bIsPublishedPortal = bIsPublished;
		Portal->OnRep_PublishedPortal();

		NewPlayer->OwnedPortal = Portal;
		NewPlayer->CreativePlotLinkedVolume = Portal->LinkedVolume;
		NewPlayer->OnRep_CreativePlotLinkedVolume();

		// std::cout << "volume state: " << (int)NewPlayer->CreativePlotLinkedVolume->VolumeState << '\n';
		// std::cout << "volume type: " << (int)NewPlayer->CreativePlotLinkedVolume->GetFortVolumeType() << '\n';

		NewPlayer->CreativePlotLinkedVolume->bNeverAllowSaving = false;
		NewPlayer->CreativePlotLinkedVolume->VolumeState = EVolumeState::Ready;
		NewPlayer->CreativePlotLinkedVolume->OnRep_VolumeState();

		// static UFortCreativeRealEstatePlotItemDefinition* RealEstatePID =
			// UObject::FindObject<UFortCreativeRealEstatePlotItemDefinition>("/Game/Playgrounds/Items/Plots/BlackGlass_Medium.BlackGlass_Medium");
			// UObject::FindObject<UFortCreativeRealEstatePlotItemDefinition>("/Game/Playgrounds/Items/Plots/Temperate_Medium.Temperate_Medium");
		
		auto VolumeManager = GameState->VolumeManager;
		auto& VolumeObjects = VolumeManager->VolumeObjects;

		// std::cout << "VolumeObjects Num: " << VolumeObjects.Num() << '\n';

		// VolumeObjects.Add(NewPlayer->CreativePlotLinkedVolume);

		// if (RealEstatePID)
		// if (false)
		{
			static auto IslandPlayset = // UObject::FindObject<UFortPlaysetItemDefinition>("/Game/Playsets/PID_Playset_60x60_Composed_BlackGlass.PID_Playset_60x60_Composed_BlackGlass"); 
				UObject::FindObject<UFortPlaysetItemDefinition>("/Game/Playsets/PID_Playset_60x60_Composed.PID_Playset_60x60_Composed");
				// UObject::FindObject<UFortPlaysetItemDefinition>("/Game/Playsets/PID_Playset_105x105_Composed_Desert.PID_Playset_105x105_Composed_Desert");
				// UObject::FindObject<UFortPlaysetItemDefinition>("/Game/Playsets/PID_Playset_105x105_Composed_FlatGrid.PID_Playset_105x105_Composed_FlatGrid");
				// UObject::FindObject<UFortPlaysetItemDefinition>("/Game/Playsets/PID_Playset_105x105_Composed_Desert_02.PID_Playset_105x105_Composed_Desert_02");
				// RealEstatePID->BasePlayset.Get();

			if (NewPlayer->CreativePlotLinkedVolume)
			{
				NewPlayer->CreativePlotLinkedVolume->SetCurrentPlayset(IslandPlayset);
				// NewPlayer->CreativePlotLinkedVolume->OverridePlayset = IslandPlayset;

				NewPlayer->CreativePlotLinkedVolume->bShowPublishWatermark = bIsPublished;

				auto LevelSaveComponent = (UFortLevelSaveComponent*)NewPlayer->CreativePlotLinkedVolume->GetComponentByClass(UFortLevelSaveComponent::StaticClass());

				// std::cout << "LevelSaveComponent: " << LevelSaveComponent << '\n';

				if (LevelSaveComponent)
				{
					LevelSaveComponent->AccountIdOfOwner = PlayerState->UniqueId;
					LevelSaveComponent->LoadedLinkData = Portal->IslandInfo;
					LevelSaveComponent->bIsLoaded = true;
					LevelSaveComponent->LoadedPlotInstanceId = L"1";
					// LevelSaveComponent->RestrictedPlotDefinition = RealEstatePID;
					// LevelSaveComponent->LoadedPlot = (UFortCreativeRealEstatePlotItem*)LevelSaveComponent->RestrictedPlotDefinition->CreateTemporaryItemInstanceBP(1, 1);
					LevelSaveComponent->bAutoLoadFromRestrictedPlotDefinition = true;

					// std::cout << "LevelSaveComponent->LoadedPlot: " << LevelSaveComponent->LoadedPlot << '\n';
					// std::cout << "LevelSaveComponent->bAutoLoadFromRestrictedPlotDefinition: " << LevelSaveComponent->bAutoLoadFromRestrictedPlotDefinition << '\n';

					if (LevelSaveComponent->LoadedPlot)
					{
						// std::cout << "LevelSaveComponent->LoadedPlot Name: " << LevelSaveComponent->LoadedPlot->GetFullName() << '\n';
						LevelSaveComponent->LoadedPlot->IslandCode = L"4949-4949-4949";
						LevelSaveComponent->LoadedPlot->IslandTitle = L"BIG SKIDDERS";
					}

					LevelSaveComponent->OnRep_LoadedPlotInstanceId();
					LevelSaveComponent->OnRep_LoadedLinkData();
					// LevelSaveComponent->OnRep_Loaded(); // cloud stuff makes it crash ig idik
				}
			}

			ShowPlayset(IslandPlayset, NewPlayer->CreativePlotLinkedVolume, NewPlayer);
		}

		// std::cout << "is owner: " << NewPlayer->OwnsIslandVolume(NewPlayer->CreativePlotLinkedVolume) << '\n';

		// FCreativeIslandData IslandData;
		// NewPlayer->CreativeIslands.Add(IslandData);
	}

	return HandleStartingNewPlayer(GameMode, NewPlayer);
}

bool TeleportPlayerToLinkedVolumeHook(UObject* Object, UFunction*, void* Parameters)
{
	// std::cout << "ada\n";
	auto Portal = (AFortAthenaCreativePortal*)Object;

	// std::cout << "Portal->LinkedVolume: " << Portal->LinkedVolume << '\n';

	if (!Portal->LinkedVolume)
		return false;

	auto Params = (AFortAthenaCreativePortal_TeleportPlayerToLinkedVolume_Params*)Parameters;

	auto Pawn = Cast<AFortPlayerPawnAthena>(Params->PlayerPawn);

	auto TeleportLocation = Portal->LinkedVolume->K2_GetActorLocation();

	Pawn->K2_TeleportTo(TeleportLocation, Pawn->K2_GetActorRotation());
	// Pawn->K2_SetActorLocation(TeleportLocation, false, true, new FHitResult());
	Pawn->TeleportToSkyDive(0.0f);
	// Portal->OnPlayerPawnTeleported(Pawn);

	return false;
}

void (*ServerChoosePartOriginal)(AFortPlayerPawn* Pawn, TEnumAsByte<EFortCustomPartType> Part, UCustomCharacterPart* ChosenCharacterPart);

void ServerChoosePartHook(AFortPlayerPawn* Pawn, TEnumAsByte<EFortCustomPartType> Part, UCustomCharacterPart* ChosenCharacterPart)
{
	if (!ChosenCharacterPart) // && Part != EFortCustomPartType::Backpack)
	{
		std::cout << "null!\n";
		return;
	}

	// std::cout << std::format("scp: 0x{:x}\n", __int64(_ReturnAddress()) - __int64(GetModuleHandleW(0)));

	return ServerChoosePartOriginal(Pawn, Part, ChosenCharacterPart);
}

void (*ServerLoadingScreenDropped)(AFortPlayerControllerAthena* PlayerController);

void ServerLoadingScreenDroppedHook(AFortPlayerControllerAthena* PlayerController)
{	
	// std::cout << "lsdropped!\n";

	// static FFortAthenaLoadout (*GetLoadout)(UFortMcpProfileAthena* AthenaProfile, char a2) = decltype(GetLoadout)(__int64(GetModuleHandleW(0)) + 0x1F15AB0);

	auto Loadout = PlayerController->CosmeticLoadoutPC; // GetLoadout(PlayerController->AthenaProfile, false);

	std::cout << "Loadout.Backpack: " << Loadout.Backpack << '\n';

	if (Loadout.Backpack)
	{
		std::cout << "Loadout.Backpack Name: " << Loadout.Backpack->GetFullName() << '\n';
	}

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

		// std::cout << "OtherRiftClass: " << OtherRiftClass << '\n';

		if (OtherRiftClass && MyFortPawn)
		{
			// auto Rift = GetWorld()->SpawnActor<AFortAthenaCreativePortal>(MyFortPawn->K2_GetActorLocation(), FRotator(), OtherRiftClass);
		}
	}

	// PlayerController->ClientSendMessage(UKismetTextLibrary::Conv_StringToText(L"Hi"), nullptr);
	// PlayerController->ClientSendConfirmationMessage(UKismetTextLibrary::Conv_StringToText(L"Hi"), false);

	return ServerLoadingScreenDropped(PlayerController);
}

void (*ServerSetInAircraft)(AFortPlayerStateAthena* PlayerState, bool bNewInAircraft);

void ServerSetInAircraftHook(AFortPlayerStateAthena* PlayerState, bool bNewInAircraft)
{
	auto PlayerController = Cast<AFortPlayerControllerAthena>(PlayerState->GetOwner());

	std::cout << "HUH!\n";

	if (!PlayerController)
		return;

	// std::cout << "bNewInAircraft: " << bNewInAircraft << '\n';
	// std::cout << "PlayerController->IsInAircraft(): " << PlayerController->IsInAircraft() << '\n';

	auto& InventoryList = PlayerController->WorldInventory->Inventory;

	if ((/* (bNewInAircraft && !PlayerController->IsInAircraft()) || */ (Globals::bLateGame ? bNewInAircraft : true)) && InventoryList.ItemInstances.Num())
	{
		// std::cout << "InventoryList.ItemInstances.Num(): " << InventoryList.ItemInstances.Num() << '\n';

		for (int i = 0; i < InventoryList.ItemInstances.Num(); i++)
		{
			if (InventoryList.ItemInstances[i]->CanBeDropped())
			{
				std::cout << "i: " << i << '\n';
				InventoryList.ItemInstances.Remove(i);
			}
		}

		// std::cout << "InventoryList.ReplicatedEntries.Num(): " << InventoryList.ReplicatedEntries.Num() << '\n';

		for (int i = 0; i < InventoryList.ReplicatedEntries.Num(); i++)
		{
			if (((UFortWorldItemDefinition*)InventoryList.ReplicatedEntries[i].ItemDefinition)->bCanBeDropped)
			{
				std::cout << "i: " << i << '\n';
				InventoryList.ReplicatedEntries.Remove(i);
			}
		}

		Update(PlayerController);

		PlayerState->CurrentShield = 0; // real
	}

	ServerSetInAircraft(PlayerState, bNewInAircraft);
}

bool ServerMoveHook(UObject* Object, UFunction*, void* Parameters)
// void ServerMoveHook(AFortPhysicsPawn* PhysicsPawn, FReplicatedPhysicsPawnState InState)
{
	auto PhysicsPawn = (AFortPhysicsPawn*)Object;
	auto Params = (AFortPhysicsPawn_ServerMove_Params*)Parameters;

	if (!Params)
		return false;

	auto InState = Params->InState;

	auto Mesh = Cast<UPrimitiveComponent>(PhysicsPawn->RootComponent);

	// PhysicsPawn->GravityMultiplier
	
	float v50 = -2.0;
	float v49 = 2.5;

	InState.Rotation.X -= v49;
	InState.Rotation.Y /= 0.3;
	InState.Rotation.Z -= v50;
	InState.Rotation.W /= -1.2;

	FTransform Transform{};
	Transform.Translation = InState.Translation;
	Transform.Rotation = InState.Rotation; // InState.Rotation;
	Transform.Scale3D = FVector{ 1, 1, 1 };

	/*
	
	LINEAR X == ANGULAR Y
	LINEAR Y == ANGULAR Z
	LINEAR Z == LINEAR X
	ANGULAR X == LINEAR Y
	ANGULAR Y == LINEAR Z
	ANGULAR Z == ANGULAR X

	*/

	/* auto oldLinear = InState.LinearVelocity;
	auto oldAngular = InState.AngularVelocity;

	InState.LinearVelocity.X = oldAngular.Y;
	InState.LinearVelocity.Y = oldAngular.Z;
	InState.LinearVelocity.Z = oldLinear.X;

	InState.AngularVelocity.X = oldLinear.Y;
	InState.AngularVelocity.Y = oldLinear.Z;
	InState.AngularVelocity.Z = oldAngular.X; */

	/* PhysicsPawn->SafeTeleportInfo.Location = Transform.Translation;
	PhysicsPawn->SafeTeleportInfo.Rotation = Rot;
	PhysicsPawn->OnRep_SafeTeleportInfo(); */

	// std::cout << "IDK (int): " << *(int*)(__int64(Parameters) + sizeof(FVector)) << '\n';
	// std::cout << "IDK (float): " << *(float*)(__int64(Parameters) + sizeof(FVector)) << '\n';

	bool bTeleport = true; // false not proper!!!
	bool bSweep = false;
	
	// std::cout << std::format("X: {} Y: {} Z: {} W: {}\n", InState.Rotation.X, InState.Rotation.Y, InState.Rotation.Z, InState.Rotation.W);

	// Mesh->K2_SetRelativeLocation(Transform.Translation, bSweep, bTeleport, nullptr);
	// PhysicsPawn->K2_SetActorLocation(Transform.Translation, bSweep, bTeleport, nullptr);
	// PhysicsPawn->K2_SetActorLocationAndRotation(Transform.Translation, Rotator(Transform.Rotation), bSweep, bTeleport, nullptr);
	Mesh->K2_SetWorldTransform(Transform, bSweep, bTeleport, nullptr);
	Mesh->bComponentToWorldUpdated = true;
	Mesh->SetPhysicsLinearVelocity(InState.LinearVelocity, 0, FName());
	Mesh->SetPhysicsAngularVelocity(InState.AngularVelocity, 0, FName());

	return false;
}

#define UFUNC_SERVERUPDATESTATESYNC

#ifdef UFUNC_SERVERUPDATESTATESYNC
bool ServerUpdateStateSyncHook(UObject* Object, UFunction*, void* Parameters)
#else
void ServerUpdateStateSyncHook(AFortPhysicsPawn* PhysicsPawn, TArray<unsigned char> StateSyncData)
#endif
{
#ifdef UFUNC_SERVERUPDATESTATESYNC
	auto PhysicsPawn = (AFortPhysicsPawn*)Object;
	auto StateSyncData = *(TArray<unsigned char>*)Parameters;
#endif
	// MessageBoxA(0, "Hello", "Forge", MB_OK);

	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

	for (int i = 0; i < StateSyncData.Num(); i++)
	{
		std::cout << std::format("[{}] {}\n", i, (int)StateSyncData[i]);
	}

	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

#ifdef UFUNC_SERVERUPDATESTATESYNC
	return false;
#endif
}

static void TickFlushHook(UNetDriver* NetDriver)
{
	static void (*ServerReplicateActors)(UReplicationDriver*) = decltype(ServerReplicateActors)((uintptr_t)GetModuleHandleW(0) + 0xA33E90);

	if (NetDriver->ReplicationDriver)
		ServerReplicateActors(NetDriver->ReplicationDriver);

	TickFlush(NetDriver);
}

/* static void ServerDropAllItemsHook(AFortPlayerController* PlayerController, void* Frame)
{
	auto IgnoreItemDef = *(UFortItemDefinition**)(Frame);

	auto& InventoryList = PlayerController->WorldInventory->Inventory;

	for (int i = 0; i < InventoryList.ItemInstances.Num(); i++)
	{
		auto ItemInstance = InventoryList.ItemInstances[i];

		if (ItemInstance->ItemEntry.ItemDefinition != IgnoreItemDef)
			PlayerController->ServerAttemptInventoryDrop(ItemInstance->ItemEntry.ItemGuid, ItemInstance->ItemEntry.Count);
	}
} */


inline APawn* SpawnDefaultPawnForHook(AGameModeBase* GameModeA, AController* NewPlayer, AActor* StartSpot)
{
	auto GameMode = Cast<AFortGameModeAthena>(GameModeA);

	if (!GameMode)
		return nullptr;

	// std::cout << std::format("SpawnDefaultPawnForHook: 0x{:x}\n", __int64(_ReturnAddress()) - __int64(GetModuleHandleW(0)));

	auto SpawnTransform = StartSpot->GetTransform();
	// SpawnLocation.Translation = FVector{ 1250, 1818, 3284 };

	auto Controller = Cast<AFortPlayerControllerAthena>(NewPlayer);

	bool bIsRespawning = false;

	auto PlayerState = Cast<AFortPlayerStateAthena>(Controller->PlayerState);

	if (Controller)
	{
		if (PlayerState)
		{
			auto& RespawnData = PlayerState->RespawnData;

			if (RespawnData.bServerIsReady && RespawnData.bRespawnDataAvailable) // && GameState->IsRespawningAllowed(PlayerState);
			{
				SpawnTransform.Translation = PlayerState->RespawnData.RespawnLocation;
				// SpawnTransform.Rotation = Quaternion(PlayerState->RespawnData.RespawnRotation);

				bIsRespawning = true;
			}
			}
		}

	auto newpawn = GameMode->SpawnDefaultPawnAtTransform(NewPlayer, SpawnTransform);
	std::cout << "newpawn: " << newpawn << '\n';
	std::cout << "bIsRespawning: " << bIsRespawning << '\n';

	bool bFoundPickaxe = false;

	auto& ItemInstances = Controller->WorldInventory->Inventory.ItemInstances;

	for (int i = 0; i < ItemInstances.Num() && !bFoundPickaxe; ++i)
	{
		bFoundPickaxe = ItemInstances[i]->ItemEntry.ItemDefinition->IsA(UFortWeaponMeleeItemDefinition::StaticClass());
	}

	bool bShouldGiveStartingItems = !bFoundPickaxe;

	if (bShouldGiveStartingItems)
	{
		auto PickaxeDefinition = Globals::bNoMCP ? GetRandomObjectOfClass<UAthenaPickaxeItemDefinition>(true, true) :
			Controller->CosmeticLoadoutPC.Pickaxe; // UObject::FindObject<UAthenaPickaxeItemDefinition>("/Game/Athena/Items/Cosmetics/Pickaxes/DefaultPickaxe.DefaultPickaxe");
		GiveItem(Controller, PickaxeDefinition->WeaponDefinition, 1);

		/*
		static auto WallPiece = UObject::FindObject<UFortItemDefinition>("/Game/Items/Weapons/BuildingTools/BuildingItemData_Wall.BuildingItemData_Wall");
		static auto FloorPiece = UObject::FindObject<UFortItemDefinition>("/Game/Items/Weapons/BuildingTools/BuildingItemData_Floor.BuildingItemData_Floor");
		static auto StairPiece = UObject::FindObject<UFortItemDefinition>("/Game/Items/Weapons/BuildingTools/BuildingItemData_Stair_W.BuildingItemData_Stair_W");
		static auto RoofPiece = UObject::FindObject<UFortItemDefinition>("/Game/Items/Weapons/BuildingTools/BuildingItemData_RoofS.BuildingItemData_RoofS");

		GiveItem(NewPlayer, WallPiece, 1);
		GiveItem(NewPlayer, FloorPiece, 1);
		GiveItem(NewPlayer, StairPiece, 1);
		GiveItem(NewPlayer, RoofPiece, 1);
		*/

		for (int i = 0; i < GameMode->StartingItems.Num(); i++)
		{
			auto& StartingItem = GameMode->StartingItems[i];
			auto ItemDef = StartingItem.Item;

			if (!ItemDef)
				continue;

			// std::cout << std::format("[{}] {}\n", i, ItemDef->GetFullName());

			GiveItem(Controller, StartingItem.Item, StartingItem.Count);
		}

		auto CurrentPlaylist = GetCurrentPlaylist();

		if (CurrentPlaylist)
		{
			for (int i = 0; i < CurrentPlaylist->InventoryItemsToGrant.Num(); i++)
			{
				auto& StartingItem = CurrentPlaylist->InventoryItemsToGrant[i];
				auto ItemDef = StartingItem.Item;

				if (!ItemDef)
					continue;

				// std::cout << std::format("[{}] {}\n", i, ItemDef->GetFullName());

				GiveItem(Controller, StartingItem.Item, StartingItem.Count);
			}
		}

		/*
		auto MutatorListComponent = GameState->MutatorListComponent;
		std::cout << "MutatorListComponent: " << MutatorListComponent << '\n';
		auto Mutator = (AFortAthenaMutator_InventoryOverride*)MutatorListComponent->GetMutatorByClass(AFortAthenaMutator_InventoryOverride::StaticClass());
		std::cout << "Mutator: " << Mutator << '\n';

		if (Mutator)
		{
			std::cout << "size: " << Mutator->InventoryLoadouts.Num() << '\n';

			for (int i = 0; i < Mutator->InventoryLoadouts.Num(); i++)
			{
				auto& InventoryLoadout = Mutator->InventoryLoadouts[i];

				for (int z = 0; i < InventoryLoadout.Loadout.Num(); z++)
				{
					auto& StartingItem = InventoryLoadout.Loadout[z];
					auto ItemDef = StartingItem.Item;

					if (!ItemDef)
						continue;

					std::cout << std::format("[{}] {}\n", z, ItemDef->GetFullName());

					GiveItem(NewPlayer, StartingItem.Item, StartingItem.Count);
				}
			}
		}
		*/

		Update(Controller);
	}

	if (newpawn)
	{
		std::cout << "bUseControllerRotationPitch: " << (int)newpawn->bUseControllerRotationPitch << '\n';
		std::cout << "bUseControllerRotationRoll: " << (int)newpawn->bUseControllerRotationRoll << '\n';
		std::cout << "bUseControllerRotationYaw: " << (int)newpawn->bUseControllerRotationYaw << '\n';

		auto PawnAsAthena = Cast<AFortPlayerPawnAthena>(newpawn);

		if (PawnAsAthena && Controller)
		{
			std::cout << "wtf!\n";

			PawnAsAthena->CosmeticLoadout = Controller->CosmeticLoadoutPC;
			PawnAsAthena->OnRep_CosmeticLoadout();

			ApplyCID(PlayerState, Controller->CosmeticLoadoutPC.Character);

			// ApplyCustomizationToCharacter(PlayerState);

			// ApplyCID(PlayerState, PawnAsAthena->CosmeticLoadout.Character, PawnAsAthena);

			if (bIsRespawning)
			{
				PawnAsAthena->SetShield(100);

				auto& ItemInstances = Controller->WorldInventory->Inventory.ItemInstances;

				for (int i = 0; i < ItemInstances.Num(); i++)
				{
					auto ItemInstance = ItemInstances[i];

					if (auto WeaponDef = Cast<UFortWeaponItemDefinition>(ItemInstance->ItemEntry.ItemDefinition))
					{
						auto ClipSize = GetClipSize(WeaponDef);

						auto ReplicatedEntry = FindReplicatedEntry(Controller, WeaponDef);

						ItemInstance->ItemEntry.LoadedAmmo = GetClipSize(WeaponDef);
						ReplicatedEntry->LoadedAmmo = ClipSize;

						Controller->WorldInventory->Inventory.MarkItemDirty(ItemInstance->ItemEntry);
						Controller->WorldInventory->Inventory.MarkItemDirty(*ReplicatedEntry);
					}
				}
			}
		}
	}

	return newpawn;
}

static void ServerExecuteInventoryItemHook(AFortPlayerControllerAthena* PlayerController, FGuid ItemGuid)
{
	auto Pawn = Cast<AFortPlayerPawnAthena>(PlayerController->Pawn);
	auto PlayerState = Cast<AFortPlayerStateAthena>(PlayerController->PlayerState, false /* ? */);

	if (!Pawn || !PlayerState)
		return;

	// PlayerController->CurrentPlayset = UObject::FindObject<UFortPlaysetItemDefinition>("/Game/Playsets/PID_CP_Devices_CreativeButton.PID_CP_Devices_CreativeButton");

	// ApplyCID(PlayerState, PlayerController->CosmeticLoadoutPC.Character, Pawn);

	auto ReplicatedEntry = FindReplicatedEntry(PlayerController, ItemGuid);

	if (!ReplicatedEntry)
	{
		std::cout << "Failed to find entry!\n";
		return;
	}

	auto ItemDef = ReplicatedEntry->ItemDefinition;

	// std::cout << "ItemDef: " << ItemDef->GetFullName() << '\n';

	if (UFortGadgetItemDefinition* GadgetDef = Cast<UFortGadgetItemDefinition>(ItemDef))
	{
		ItemDef = GadgetDef->GetWeaponItemDefinition();
		// Pawn->AnimBPOverride = GadgetItemDef->AnimBPOverride.Get();
	}

	/* else */ if (UFortDecoItemDefinition* DecoDef = Cast<UFortDecoItemDefinition>(ItemDef))
	{
		Pawn->PickUpActor(nullptr, DecoDef);
		Pawn->CurrentWeapon->ItemEntryGuid = ReplicatedEntry->ItemGuid;

		if (auto ContextTrapTool = Cast<AFortDecoTool_ContextTrap>(Pawn->CurrentWeapon))
		{
			ContextTrapTool->ContextTrapItemDefinition = (UFortContextTrapItemDefinition*)ItemDef;
		}

		ItemDef = nullptr;
	}

	if (!ItemDef)
		return;

	auto WeaponDef = Cast<UFortWeaponItemDefinition>(ItemDef);

	if (!WeaponDef)
		return;

	if (auto Weapon = Pawn->EquipWeaponDefinition(WeaponDef, ItemGuid))
	{
		
	}
}

static bool OnEndAbilityHook(UObject* Object, UFunction*, void* Parameters)
{
	auto GameplayAbility = (UGameplayAbility*)Object;

	static auto C4DetonateClass = UObject::FindObject<UBlueprintGeneratedClass>("/Game/Athena/Items/Consumables/C4/GA_Athena_C4_Detonate.GA_Athena_C4_Detonate_C");
	static auto SleepyTimeClass = UObject::FindObject<UBlueprintGeneratedClass>("/Game/Athena/Items/EnvironmentalItems/PinkOatmeal/SleepyTime/GA_PinkOatmeal_SleepyTime_Consume.GA_PinkOatmeal_SleepyTime_Consume_C");

	if (GameplayAbility->IsA(C4DetonateClass)) // EventReceived_66DB263A44E303CAE6B174AFF4094381 GA_Athena_C4_Passive_C
	{
		auto FortGameplayAbility = (UFortGameplayAbility*)GameplayAbility;
		// auto ActivatingPawn = FortGameplayAbility->GetActivatingPawn();
		auto C4Actor = Cast<ABuildingGameplayActorC4>(FortGameplayAbility->GetAvatarActorFromActorInfo());

		if (!C4Actor)
		{
			std::cout << "No Avatar!\n";
			return false;
		}

		// auto ActivatingPawn = *(AFortPlayerPawn**)(__int64(C4Actor) + 0x758);

		auto owner = C4Actor->GetOwner();

		// std::cout << "owner: " << owner << '\n';

		// if (owner)
			// std::cout << "owner: " << owner->GetFullName() << '\n';

		auto ActivatingPawn = Cast<AFortPlayerPawn>(owner);

		if (!ActivatingPawn)
		{
			std::cout << "No Pawn!\n";
			return false;
		}

		auto Controller = Cast<AFortPlayerControllerAthena>(ActivatingPawn->Controller);

		if (!Controller)
		{
			std::cout << "No Controller!\n";
			return false;
		}

		auto C4Def = UObject::FindObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Consumables/C4/Athena_C4.Athena_C4");

		auto C4 = FindItemInstance(Controller, C4Def);

		if (C4 && C4->ItemEntry.Count <= 0)
		{
			// std::cout << "C4 Count: " << C4->ItemEntry.Count << '\n';

			RemoveItem(Controller, C4->ItemEntry.ItemGuid, 1);
			Update(Controller);
		}
	}
	else if (GameplayAbility->IsA(SleepyTimeClass)) // OnSync_D0847E7F46FF2906815557815985751D 
	{
		auto FortGameplayAbility = (UFortGameplayAbility*)GameplayAbility;
		auto ActivatingPawn = FortGameplayAbility->GetActivatingPawn();
		auto Avatar = Cast<ABuildingGameplayActorC4>(FortGameplayAbility->GetAvatarActorFromActorInfo());

		// std::cout << "Avatar: " << Avatar << '\n';

		if (Avatar)
		{
			// std::cout << "Avatar Name: " << Avatar->GetFullName() << '\n';
		}

		// std::cout << "ActivatingPawn: " << ActivatingPawn << '\n';

		if (!ActivatingPawn)
			return false;

		auto Loc = ActivatingPawn->K2_GetActorLocation();

		auto LootDrops = PickLootDrops(UKismetStringLibrary::Conv_StringToName(L"Loot_AthenaSleepy"), true);

		for (auto& LootDrop : LootDrops)
		{
			SpawnPickup(LootDrop.ItemDefinition, Loc, LootDrop.Count, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, -1, ActivatingPawn);
		}
	}

	return false;
}

void ServerSendZiplineStateHook(AFortPlayerPawn* Pawn, FZiplinePawnState InZiplineState)
{
	if (InZiplineState.AuthoritativeValue > Pawn->ZiplineState.AuthoritativeValue)
	{
		Pawn->ZiplineState = InZiplineState;

		if (!Pawn->ZiplineState.bIsZiplining)
		{
			if (Pawn->ZiplineState.bJumped)
			{
				float ZiplineJumpDampening = 1500;
				float ZiplineJumpStrength = 0; // fabs(-0.5);

				FVector PawnVelocity = Pawn->CharacterMovement->Velocity;
				FVector LaunchVelocity{};

				/* float wtf = ZiplineJumpDampening * PawnVelocity.X;
				float wtf2 = ZiplineJumpDampening * 0;

				LaunchVelocity.X = fminf(wtf, 750.0);
				LaunchVelocity.Y = fminf(wtf2, 750.0); */
				LaunchVelocity.X = ZiplineJumpStrength;
				LaunchVelocity.Z = ZiplineJumpDampening;

// #define ZIPLINEJUMP_TEST

#ifndef ZIPLINEJUMP_TEST
				{ // wtf
					Pawn->CharacterMovement->Velocity = FVector();
					Pawn->CharacterMovement->StopMovementImmediately();
				}

				Pawn->LaunchCharacterJump(LaunchVelocity, false, false, false, true);
#else
				Pawn->LaunchCharacter(LaunchVelocity, false, true);
#endif
			}
		}
	}

	static void (*OnRep_ZiplineState)(AFortPlayerPawn* Pawn) = decltype(OnRep_ZiplineState)(__int64(GetModuleHandleW(0)) + 0x1967d30);
	OnRep_ZiplineState(Pawn);
}

bool ServerSetPlaysetHook(UObject* Object, UFunction*, void* Parameters)
{
	auto PlayerController = (AFortPlayerControllerAthena*)Object;

	auto Params = (AFortPlayerControllerAthena_ServerSetPlayset_Params*)Parameters;

	PlayerController->CurrentPlayset = Params->NewPlayset;

	// std::cout << "AAakjejq!\n";

	return false;
}

static unsigned int* (*GiveAbilityAndActivateOnce)(UAbilitySystemComponent* ASC, int* outHandle, FGameplayAbilitySpec Spec)
	= decltype(GiveAbilityAndActivateOnce)(__int64(GetModuleHandleW(0)) + 0x935130);

bool NotifyAbilityToSpawnToyHook(UObject* Object, UFunction*, void* Parameters)
{
	auto Params = (UFortToyAbilityInterface_NotifyAbilityToSpawnToy_Params*)Parameters;

	auto GameplayAbility = Cast<UFortGameplayAbility>(Object);

	// std::cout << "GameplayAbility: " << GameplayAbility << '\n';

	if (GameplayAbility)
	{
		auto Pawn = GameplayAbility->GetActivatingPawn();

		// std::cout << "Pawn: " << Pawn << '\n';

		if (Pawn)
		{
			auto ToyItemDefinition = Cast<UAthenaToyItemDefinition>(Pawn->LastEmoteItemDef);

			// std::cout << "ToyItemDefinition: " << ToyItemDefinition << '\n';

			if (ToyItemDefinition)
			{
				auto ASsEPt = ToyItemDefinition->ToyActorClass.ObjectID.AssetPathName.ToString();
				// std::cout << "ASsEPt: " << ASsEPt << '\n';
				auto ToyAcTORKSID = UObject::FindObject<UBlueprintGeneratedClass>(ASsEPt);

				// std::cout << "ToyAcTORKSID: " << ToyAcTORKSID << '\n';

				if (ToyAcTORKSID)
				{
					auto Controller = Cast<AFortPlayerController>(Pawn->Controller);

					auto TOYBOZO = GetWorld()->SpawnActor<AActor>(Params->DesiredLocation.Translation, Rotator(Params->DesiredLocation.Rotation), ToyAcTORKSID);
					TOYBOZO->SetOwner(Controller); // ?
					// std::cout << "TOYBOZO: " << TOYBOZO << '\n';
					// MakeBallDormant

					static auto PhysicsBallMasterClass = UObject::FindObject<UBlueprintGeneratedClass>("/Game/Building/ActorBlueprints/Prop/PhysicsBall_Master.PhysicsBall_Master_C");

					if (TOYBOZO)
					{
						if (TOYBOZO->IsA(PhysicsBallMasterClass))
						{
							// std::cout << "AA!agjqu243g!\n";
							static auto funcaf = UObject::FindObject<UFunction>("/Game/Building/ActorBlueprints/Prop/PhysicsBall_Master.PhysicsBall_Master_C.MakeBallDormant");
							TOYBOZO->ProcessEvent(funcaf, nullptr);
						}

						{
							Controller->ActiveToyInstances.Add(TOYBOZO);
							// Controller->ToySummonCounts
						}
					}

					Params->ReturnValue = TOYBOZO;
				}
			}
		}
	}

	return false;
}

void ServerPlayEmoteItemHook(AFortPlayerController* PlayerController, UFortMontageItemDefinitionBase* EmoteAsset)
{
	auto PlayerState = Cast<AFortPlayerStateAthena>(PlayerController->PlayerState);
	auto Pawn = Cast<AFortPlayerPawnAthena>(PlayerController->Pawn);

	if (!EmoteAsset || !PlayerState || !Pawn)
		return;

	UGameplayAbility* AbilityToUse = nullptr;

	if (auto SprayEmoteAsset = Cast<UAthenaSprayItemDefinition>(EmoteAsset))
	{
		static auto SprayGameplayAbilityDefault = UObject::FindObject<UGameplayAbility>("/Game/Abilities/Sprays/GAB_Spray_Generic.Default__GAB_Spray_Generic_C");
		AbilityToUse = SprayGameplayAbilityDefault;
	}
	else if (auto ToyEmoteAsset = Cast<UAthenaToyItemDefinition>(EmoteAsset))
	{
		auto AssetPathNameStr = ToyEmoteAsset->ToySpawnAbility.ObjectID.AssetPathName.ToString();
		// std::cout << "AA: " << AssetPathNameStr << '\n';
		/* AbilityToUse = */ auto skidda = UObject::FindObject<UBlueprintGeneratedClass>(AssetPathNameStr); // ToyEmoteAsset->ToySpawnAbility.Get();
		// std::cout << "skidda: " << skidda << '\n';

		if (skidda)
			AbilityToUse = (UGameplayAbility*)skidda->CreateDefaultObject();

		// std::cout << "AbilityToUse: " << AbilityToUse << '\n';

		if (AbilityToUse)
		{
			// std::cout << "10 band: " << AbilityToUse->GetFullName() << '\n';
		}

		static auto SKIDD = UObject::FindObject<UFunction>("/Game/Abilities/Toys/Shared/GAB_ToyThrow_Base.GAB_ToyThrow_Base_C.NotifyAbilityToSpawnToy");

		// std::cout << "SKIDD: " << SKIDD << '\n';

		if (SKIDD)
		{
			AddHook(SKIDD, NotifyAbilityToSpawnToyHook);
			SKIDD = nullptr;
		}
	}
	
	if (!AbilityToUse)
	{
		static auto EmoteGameplayAbilityDefault = UObject::FindObject<UGameplayAbility>("/Game/Abilities/Emotes/GAB_Emote_Generic.Default__GAB_Emote_Generic_C");
		AbilityToUse = EmoteGameplayAbilityDefault;
	}

	if (!AbilityToUse)
		return;

	auto DanceAsset = Cast<UAthenaDanceItemDefinition>(EmoteAsset);

	if (DanceAsset)
	{
		Pawn->bMovingEmote = DanceAsset->bMovingEmote;
		Pawn->bMovingEmoteForwardOnly = DanceAsset->bMoveForwardOnly;
		Pawn->EmoteWalkSpeed = DanceAsset->WalkForwardSpeed;
	}

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

bool K2_OnEndAbilityEmoteHook(UObject* Ability, UFunction*, void* Parameters)
{
	auto Pawn = ((UFortGameplayAbility*)Ability)->GetActivatingPawn();

	if (Pawn)
	{
		Pawn->bMovingEmote = false;
		Pawn->bMovingEmoteForwardOnly = false;
	}

	return false;
}

void (*ServerAttemptInteract)(UFortControllerComponent_Interaction* InteractionComponent, AActor* ReceivingActor, UPrimitiveComponent* InteractComponent,
	TEnumAsByte<ETInteractionType> InteractType, UObject* OptionalObjectData);

void ServerAttemptInteractHook(UFortControllerComponent_Interaction* InteractionComponent, AActor* ReceivingActor, UPrimitiveComponent* InteractComponent,
	TEnumAsByte<ETInteractionType> InteractType, UObject* OptionalObjectData)
{
	static auto LlamaClass = UObject::FindObject<UClass>("/Game/Athena/SupplyDrops/Llama/AthenaSupplyDrop_Llama.AthenaSupplyDrop_Llama_C");

	auto Controller = Cast<AFortPlayerControllerAthena>(InteractionComponent->GetOwner());
	auto Pawn = Controller->MyFortPawn;

	// std::cout << "skidded!\n";

	// std::cout << "ReceivingActor: " << ReceivingActor->GetFullName() << '\n';

	static auto BatarangClass = UObject::FindObject<UBlueprintGeneratedClass>("/Game/Athena/Items/Weapons/Prototype/Badger_Bangs/BGA_Athena_BadgerBangsStuck.BGA_Athena_BadgerBangsStuck_C");

	auto CorrectLocation = ReceivingActor->K2_GetActorLocation() + ReceivingActor->GetActorRightVector() * 70.0f + FVector{ 0, 0, 50 }; // + LootSpawnOffset?

	if (auto RebootVan = Cast<ABuildingGameplayActorSpawnMachine>(ReceivingActor))
	{
		HandleReboot(Controller, RebootVan);
		ServerAttemptInteract(InteractionComponent, ReceivingActor, InteractComponent, InteractType, OptionalObjectData);
		return;
	}

	else if (auto Chip = Cast<ABuildingGameplayActorSpawnChip>(ReceivingActor))
	{
		auto PlayerState = Cast<AFortPlayerStateAthena>(Chip->OwnerPlayerState);

		// std::cout << "AA PlayerState: " << PlayerState << '\n';
		auto PlayerTeam = PlayerState->PlayerTeam;

		std::unordered_set<AFortPlayerControllerAthena*> TeamMembers;

		if (PlayerTeam)
		{
			for (int i = 0; i < PlayerTeam->TeamMembers.Num(); i++)
			{
				auto TeamMember = Cast<AFortPlayerControllerAthena>(PlayerTeam->TeamMembers[i]);

				if (!TeamMember /* || TeamMember == PlayerController */)
					continue;

				TeamMembers.emplace(TeamMember);
			}
		}

		for (auto TeamMember : TeamMembers)
		{
			TeamMember->ResurrectionComponent->PlayerIdsForResurrection.Add(PlayerState->UniqueId);
			TeamMember->ResurrectionComponent->OnRep_PlayerIdsForResurrection();
		}
	}

	else if (ReceivingActor->IsA(BatarangClass)) // automatic if we hook giveitemtoplayeror something i forgot
	{
		static auto BatarangWID = UObject::FindObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Weapons/Prototype/Badger_Bangs/WID_Athena_BadgerBangsNew.WID_Athena_BadgerBangsNew");

		bool bShouldUpdate = false;

		GiveItem(Controller, BatarangWID, 1, -1, false, &bShouldUpdate);

		if (bShouldUpdate)
			Update(Controller);
	}

	else if (auto ItemCollector = Cast<ABuildingItemCollectorActor>(ReceivingActor)) // Vending Machine
	{
		auto CurrentMaterial = ItemCollector->ActiveInputItem; // InteractType->OptionalObjectData

		// std::cout << "CurrentMaterial: " << CurrentMaterial << '\n';

		if (!CurrentMaterial)
			return;

		int Index = 0;

		static auto StoneItemData = UObject::FindObject<UFortResourceItemDefinition>(("/Game/Items/ResourcePickups/StoneItemData.StoneItemData"));
		static auto MetalItemData = UObject::FindObject<UFortResourceItemDefinition>(("/Game/Items/ResourcePickups/MetalItemData.MetalItemData"));

		auto CorrectLocation = ItemCollector->K2_GetActorLocation() + ItemCollector->GetActorRightVector() * 70.0f + FVector{ 0, 0, 50 }; // + LootSpawnOffset?

		if (CurrentMaterial == StoneItemData)
			Index = 1;
		else if (CurrentMaterial == MetalItemData)
			Index = 2;

		auto& ItemCollection = ItemCollector->ItemCollections[Index];

		for (int z = 0; z < ItemCollection.OutputItemEntry.Num(); z++)
		{
			SpawnPickup(ItemCollection.OutputItemEntry[z].ItemDefinition, CorrectLocation, ItemCollection.OutputItemEntry[z].Count, EFortPickupSourceTypeFlag::Other, EFortPickupSpawnSource::Unset, -1, Pawn);
		}

		ItemCollector->bCurrentInteractionSuccess = true;

		if (!Globals::bPlayground)
		{
			static auto DoVendDeath = UObject::FindObject<UFunction>("/Game/Athena/Items/Gameplay/VendingMachine/B_Athena_VendingMachine.B_Athena_VendingMachine_C.DoVendDeath");
			ItemCollector->ProcessEvent(DoVendDeath, nullptr);
			ItemCollector->K2_DestroyActor();
		}
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

		/* std::cout << "Pawn->VehicleStateLocal.Vehicle: " << Pawn->VehicleStateLocal.Vehicle << '\n';
		std::cout << "Pawn->VehicleStateLocal.SeatIndex: " << (int)Pawn->VehicleStateLocal.SeatIndex << '\n';

		std::cout << "Pawn->CharacterMovement->CustomMovementMode: " << (int)Pawn->CharacterMovement->CustomMovementMode << '\n';

		std::cout << "Pawn->VehicleStateRep.Vehicle: " << Pawn->VehicleStateRep.Vehicle << '\n';
		std::cout << "Pawn->VehicleStateRep.SeatIndex: " << (int)Pawn->VehicleStateRep.SeatIndex << '\n'; */

		int SeatIndex = Vehicle->FindSeatIndex(Pawn);

		/* Pawn->VehicleStateLastTick = Pawn->VehicleStateLocal;
		Pawn->VehicleStateLocal.Vehicle = Vehicle;
		Pawn->VehicleStateLocal.SeatIndex = SeatIndex;
		Pawn->VehicleStateLocal.EntryTime = UGameplayStatics::GetTimeSeconds(GetWorld()); */

		// Pawn->VehicleStateRep = Pawn->VehicleStateLocal;
		Pawn->OnRep_InVehicle();

		// OnEnteredVehicle

		auto WeaponComponent = Vehicle->GetSeatWeaponComponent(SeatIndex);

		if (WeaponComponent)
		{
			for (int i = 0; i < WeaponComponent->WeaponSeatDefinitions.Num(); i++)
			{
				break;

				auto& CurrentDefinition = WeaponComponent->WeaponSeatDefinitions[i];

				if (CurrentDefinition.SeatIndex == SeatIndex)
				{
					auto VehicleWeaponDef = CurrentDefinition.VehicleWeapon;

					if (VehicleWeaponDef)
					{
						// std::cout << "VehicleWeaponDef: " << VehicleWeaponDef->GetFullName() << '\n';
						int Ammo = 10000; // INT32_MAX - 1;
						
						auto VehicleInstance = GiveItem(Controller, VehicleWeaponDef, 1, GetClipSize(VehicleWeaponDef));
						auto VehicleWeapon = Pawn->EquipWeaponDefinition(VehicleWeaponDef, VehicleInstance->ItemEntry.ItemGuid);

						Update(Controller);

						return;

						/*
						auto VehicleWeaponInstance = CreateAndGiveItem(Controller, VehicleWeaponDef, 1, Ammo); // GiveItem(Controller, VehicleWeaponDef, 1, Ammo); // Pawn->EquipWeaponDefinition(VehicleWeaponDef, FGuid());
						Update(Controller);
						VehicleWeaponInstance->ItemEntry.LoadedAmmo = Ammo;
						Controller->WorldInventory->Inventory.MarkItemDirty(VehicleWeaponInstance->ItemEntry);
						Controller->ClientExecuteInventoryItem(VehicleWeaponInstance->ItemEntry.ItemGuid, 0, true, true);
						Controller->ServerExecuteInventoryItem(VehicleWeaponInstance->ItemEntry.ItemGuid);
						auto Weapon = Pawn->EquipWeaponDefinition(VehicleWeaponDef, VehicleWeaponInstance->ItemEntry.ItemGuid);
						Weapon->AmmoCount = Ammo;
						Weapon->OnRep_AmmoCount(0);
						*/
					}
				}
			}
		}

		return;
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

	else if (auto DBNOPawn = Cast<AFortPlayerPawnAthena>(ReceivingActor))
	{
		auto DBNOController = Cast<AFortPlayerControllerAthena>(DBNOPawn->Controller);
		auto DBNOPlayerState = Cast<AFortPlayerStateAthena>(DBNOPawn->PlayerState);
		auto DBNOPawnASC = DBNOPawn->AbilitySystemComponent;

		auto InstigatorController = Controller;
		auto InstigatorPlayerState = Cast<AFortPlayerStateAthena>(InstigatorController->PlayerState);
		auto InstigatorPawn = Cast<AFortPlayerPawnAthena>(InstigatorController->Pawn);

		if (!DBNOController || !DBNOPlayerState || !DBNOPawnASC || !InstigatorPlayerState || !InstigatorPawn || DBNOPlayerState->TeamIndex != InstigatorPlayerState->TeamIndex)
			return;

		auto findAbilityInASC = [](UAbilitySystemComponent* ASC, UFortGameplayAbility* DefaultAbility) -> FGameplayAbilitySpec* {
			for (int i = 0; i < ASC->ActivatableAbilities.Items.Num(); i++)
			{
				auto& Spec = ASC->ActivatableAbilities.Items[i];

				if (Spec.Ability->Class == DefaultAbility->Class)
				{
					return &Spec;
				}
			}

			return nullptr;
		};

		static auto GAB_AthenaDBNOClass = UObject::FindObject<UFortGameplayAbility>("/Game/Abilities/NPC/Generic/GAB_AthenaDBNO.Default__GAB_AthenaDBNO_C");

		FGameplayAbilitySpec* DBNOSpec = findAbilityInASC(DBNOPawnASC, GAB_AthenaDBNOClass);

		if (!DBNOSpec)
		{
			std::cout << "Didnt find!\n";
			return;
		}

		DBNOPawnASC->ClientCancelAbility(DBNOSpec->Handle, DBNOSpec->ActivationInfo);
		DBNOPawnASC->ClientEndAbility(DBNOSpec->Handle, DBNOSpec->ActivationInfo);
		DBNOPawnASC->ServerEndAbility(DBNOSpec->Handle, DBNOSpec->ActivationInfo, FPredictionKey());

		DBNOController->ClientOnPawnRevived(InstigatorController);

		DBNOPlayerState->DeathInfo = FDeathInfo();
		DBNOPlayerState->OnRep_DeathInfo();

		DBNOPawn->SetHealth(30);

		static auto GAB_AthenaReviveClass = UObject::FindObject<UFortGameplayAbility>("/Game/Abilities/NPC/Generic/GAB_AthenaDBNORevive.Default__GAB_AthenaDBNORevive_C");
		// auto ReviveSpec = findAbilityInASC(DBNOPawnASC, GAB_AthenaReviveClass);

		// if (!ReviveSpec)
		{
			// std::cout << "Didnt find2!\n";

			DBNOPawn->bIsDBNO = false;
			DBNOPawn->OnRep_IsDBNO();

			return;
		}

		/* FGameplayEventData EventData;
		EventData.EventTag = DBNOPawn->EventReviveTag;
		EventData.Instigator = InstigatorController;
		EventData.Target = DBNOPawn;

		FPredictionKey PredictionKey = FPredictionKey(); // ReviveSpec->ActivationInfo.PredictionKeyWhenActivated
		bool InputPressed = true; // ReviveSpec->InputPressed

		DBNOPawnASC->ServerTryActivateAbilityWithEventData(ReviveSpec->Handle, InputPressed, PredictionKey, EventData); */
	}

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

static char (*INTOTHETHICKOFIT)(__int64 a1, void* a2, int a3, char a4, char a5) = decltype(INTOTHETHICKOFIT)(__int64(GetModuleHandleW(0)) + 0x19C4410);

char __fastcall INTOTHETHICKOFITHOOK(__int64 a1, FGuid ItemGuid, int Count, bool bForceRemoveFromQuickBars, bool bForceRemoval) // serverremoveisw4wg
{
	// std::cout << std::format("RETURNRR: 0x{:x}\n", __int64(_ReturnAddress()) - __int64(GetModuleHandleW(0)));
	return true;

	if (!a1)
		return false;

	auto PlayerController = *(AFortPlayerControllerAthena**)(__int64(a1) - 0x2B80);
	
	std::cout << "PlayerController: " << PlayerController->GetName() << '\n';

	if (!PlayerController->WorldInventory /* || PlayerController->bInfiniteAmmo */)
		return false;

	auto Pawn = PlayerController->MyFortPawn;

	if (!Pawn)
		return false;

	auto ItemInstance = FindItemInstance(PlayerController, ItemGuid);

	if (!ItemInstance)
		return false;

	auto ReplicatedEntry = FindReplicatedEntry(PlayerController, ItemGuid);
	auto InstanceEntry = &ItemInstance->ItemEntry;

	if (!ReplicatedEntry || !InstanceEntry)
		return false;

	/* ReplicatedEntry->LoadedAmmo = Weapon->AmmoCount;
	InstanceEntry->LoadedAmmo = Weapon->AmmoCount;

	PlayerController->WorldInventory->Inventory.MarkItemDirty(*ReplicatedEntry);
	PlayerController->WorldInventory->Inventory.MarkItemDirty(*InstanceEntry); */

	auto ItemDefAsWorld = (UFortWorldItemDefinition*)ReplicatedEntry->ItemDefinition;

	std::cout << "ItemDefAsWorld: " << ItemDefAsWorld->GetName() << '\n';

	auto AmmoDef = ItemDefAsWorld->IsA(UFortTrapItemDefinition::StaticClass()) ? ItemDefAsWorld : ItemDefAsWorld->GetAmmoWorldItemDefinition_BP();

	std::cout << "AmmoDef: " << AmmoDef << '\n';

	if (AmmoDef)
	{
		std::cout << "AmmoDef Name: " << AmmoDef->GetFullName() << '\n';
		auto AmmoInstance = AmmoDef == ItemDefAsWorld ? FindItemInstance(PlayerController, ItemGuid) : FindItemInstance(PlayerController, AmmoDef);

		if (AmmoInstance)
		{
			bool bShouldUpdate = false;
			RemoveItem(PlayerController, AmmoInstance->ItemEntry.ItemGuid, Count, true, &bShouldUpdate);

			if (bShouldUpdate)
				Update(PlayerController);
		}
	}

	std::cout << std::format("RETURNRR: 0x{:x}\n", __int64(_ReturnAddress()) - __int64(GetModuleHandleW(0)));

	return true;
}

char (*GetSquadIdForCurrentPlayer)(AFortGameSessionDedicatedAthena* GameSession, FUniqueNetIdRepl UniqueId) = decltype(GetSquadIdForCurrentPlayer)(__int64(GetModuleHandleW(0)) + 0x17DDBB0);

char GetSquadIdForCurrentPlayerHook(AFortGameSessionDedicatedAthena* GameSession, FUniqueNetIdRepl UniqueId)
{
	TArray<AActor*> CONTRTOLLERS;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AFortPlayerController::StaticClass(), &CONTRTOLLERS);

	for (int i = 0; i < CONTRTOLLERS.Num(); i++)
	{
		auto Controller = (AFortPlayerController*)CONTRTOLLERS[i];
		auto PlayerState = Cast<AFortPlayerStateAthena>(Controller->PlayerState);

		if (PlayerState && AFortPlayerState::AreUniqueIDsIdentical(Controller->PlayerState->UniqueId, UniqueId))
		{
			// std::cout << "FOUND!\n";
			return PlayerState->TeamIndex - 2;
		}
	}

	std::cout << "NOT FDOUND!!\n";

	return 0;
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

void ClientOnPawnDiedHook(AFortPlayerControllerAthena* DeadPlayerController, FFortPlayerDeathReport DeathReport)
{
	auto DeadPlayerState = Cast<AFortPlayerStateAthena>(DeadPlayerController->PlayerState);
	auto KillerPawn = Cast<AFortPlayerPawnAthena>(DeathReport.KillerPawn);
	auto DeadPawn = Cast<AFortPlayerPawnAthena>(DeadPlayerController->Pawn);
	auto KillerPlayerState = Cast<AFortPlayerStateAthena>(DeathReport.KillerPlayerState);
	auto GameMode = Cast<AFortGameModeAthena>(GetWorld()->AuthorityGameMode);
	auto GameState = Cast<AFortGameStateAthena>(GetWorld()->GameState);

	if (!DeadPawn)
		return;

	// if (GameState->GamePhase <= EAthenaGamePhase::Aircraft)
		// return ClientOnPawnDied(PlayerController, DeathReport);

	if (DeadPlayerController && DeadPlayerState)
	{
		// std::cout << "bIsDBNO: " << (int)DeadPawn->bIsDBNO << '\n';

		FDeathInfo DeathInfo;
		DeathInfo.bDBNO = DeadPawn->bIsDBNO; // DeadPawn->bWasDBNOOnDeath; // bad
		DeathInfo.DeathLocation = DeadPawn ? DeadPawn->K2_GetActorLocation() : FVector();
		// DeathInfo.Distance = Pawn->LastFallDistance;

		DeathInfo.DeathTags = *(FGameplayTagContainer*)(__int64(DeadPawn) + 0x1428); // DeadPawn->DeathTags; // DeathReport.Tags;
		// std::cout << "TAGS: " << DeathInfo.DeathTags.ToStringSimple(true) << '\n';
		DeathInfo.bInitialized = true;
		DeathInfo.DeathCause = AFortPlayerStateAthena::ToDeathCause(DeathReport.Tags, DeathInfo.bDBNO);
		// std::cout << "DeathInfo.DeathCause: " << (int)DeathInfo.DeathCause << '\n';
		DeathInfo.FinisherOrDowner = KillerPlayerState ? KillerPlayerState : DeadPlayerState;
		DeathInfo.Distance = DeathInfo.DeathCause == EDeathCause::FallDamage ? DeadPawn->LastFallDistance : (KillerPawn ? KillerPawn->GetDistanceTo(DeadPawn) : 0);

		DeadPlayerState->PawnDeathLocation = DeathInfo.DeathLocation;
		DeadPlayerState->DeathInfo = DeathInfo;
		DeadPlayerState->OnRep_DeathInfo();

		if (KillerPlayerState && KillerPlayerState != DeadPlayerState)
		{
			KillerPlayerState->KillScore++;
			KillerPlayerState->TeamKillScore++;

			KillerPlayerState->ClientReportKill(DeadPlayerState);
			KillerPlayerState->OnRep_Kills();
		}

		if (Globals::bSiphonEnabled && KillerPawn && KillerPawn != DeadPawn)
		{
			KillerPawn->SetHealth(100);
			KillerPawn->SetShield(100);

			if (false)
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
		}

		// std::cout << "UFortKismetLibrary::GetActorTeam(Pawn): " << (int)UFortKismetLibrary::GetActorTeam(DeadPawn) << '\n';
		// std::cout << "IsRessurrewivcwigw4giujogj: " << GameState->IsResurrectionEnabled(DeadPawn) << '\n';
		// std::cout << "DefaultRebootMachineHotfix: " << GameState->DefaultRebootMachineHotfix << '\n';

		if (!GameState->IsRespawningAllowed(DeadPlayerState))
		{
			bool bDropItems = true;

			/*
			auto MutatorListComponent = GameState->MutatorListComponent;
			auto Mutator = (AFortAthenaMutator_InventoryOverride*)MutatorListComponent->GetMutatorByClass(AFortAthenaMutator_InventoryOverride::StaticClass());

			if (Mutator)
			{
				if (Mutator->DropAllItemsOverride == EAthenaLootDropOverride::ForceKeep)
					bDropItems = false;
			}
			*/

			if (bDropItems)
			{
				auto DroppableItems = GetDroppableItems(DeadPlayerController, nullptr, true);

				// std::cout << "DroppableItems.size(): " << DroppableItems.size() << '\n';

				for (int i = 0; i < DroppableItems.size(); i++)
				{
					auto Item = DroppableItems[i];

					if (!Item)
						continue;

					SpawnPickup(Item->ItemEntry, DeathInfo.DeathLocation, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::PlayerElimination);
					RemoveItem(DeadPlayerController, Item->ItemEntry.ItemGuid, Item->ItemEntry.Count);
				}

				Update(DeadPlayerController);
			}

			if (!DeadPawn->bIsDBNO)
			{
				{
					static void (*removeFromAlivePlayers)(AFortGameModeAthena* GameMode, AFortPlayerControllerAthena* PlayerController, APlayerState* PlayerState, APawn* FinisherPawn,
						UFortWeaponItemDefinition* FinishingWeapon, EDeathCause DeathCause, char a7)
							= decltype(removeFromAlivePlayers)(__int64(GetModuleHandleW(0)) + 0x11D95E0);

					AActor* DamageCauser = DeathReport.DamageCauser;
					UFortWeaponItemDefinition* KillerWeaponDef = nullptr;

					if (auto ProjectileBase = Cast<AFortProjectileBase>(DamageCauser))
						KillerWeaponDef = ((AFortWeapon*)ProjectileBase->GetOwner())->WeaponData;
					if (auto Weapon = Cast<AFortWeapon>(DamageCauser))
						KillerWeaponDef = Weapon->WeaponData;

					removeFromAlivePlayers(GameMode, DeadPlayerController, KillerPlayerState == DeadPlayerState ? nullptr : KillerPlayerState, KillerPawn, KillerWeaponDef, DeathInfo.DeathCause, 0);		
				}
			}
		}
		else
		{
		}
	}

	return ClientOnPawnDied(DeadPlayerController, DeathReport);
}

static bool (*CanCreateInCurrentContextOriginal)(UObject* Template) = decltype(CanCreateInCurrentContextOriginal)(__int64(GetModuleHandleW(0)) + 0x22A30C0);

bool CanCreateInCurrentContextHook(UObject* Template)
{
	return reinterpret_cast<bool(*)(UObject*)>(Template->VFT[0xD8 / 8])(Template);
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

static bool ServerPlaySquadQuickChatMessageHook(UObject* Object, UFunction*, void* Parameters)
{
	auto Controller = (AFortPlayerControllerAthena*)Object;
	auto Params = (AFortPlayerControllerAthena_ServerPlaySquadQuickChatMessage_Params*)Parameters;

	if (!Controller || !Params)
		return false;

	auto PlayerState = Cast<AFortPlayerStateAthena>(Controller->PlayerState);

	if (!PlayerState)
		return false;

	static auto EmojiComm = UObject::FindObject<UAthenaEmojiItemDefinition>("/Game/Athena/Items/Cosmetics/Dances/Emoji/Emoji_Comm.Emoji_Comm");

	Controller->BroadcastRemoteClientInfo->RemoteChatEntry = Params->ChatEntry; // needed?
	Controller->BroadcastRemoteClientInfo->OnRep_RemoteChatEntry();
	Controller->ServerPlayEmoteItem(EmojiComm);

	for (int i = 0; i < PlayerState->PlayerTeam->TeamMembers.Num(); i++)
	{
		if (PlayerState->PlayerTeam->TeamMembers[i] == Controller)
			continue;

		auto CurrentTeamMemberPC = Cast<AFortPlayerControllerAthena>(PlayerState->PlayerTeam->TeamMembers[i]);

		if (!CurrentTeamMemberPC)
			continue;

		CurrentTeamMemberPC->ClientReceiveSquadQuickChatMessage(Params->ChatEntry, Controller);
	}

	return false;
}

void ServerSuicideHook(AFortPlayerController* FortPlayerController)
{
	KillPlayer(FortPlayerController);
}

char (*BuildingDamageOriginal)(ABuildingActor* BuildingActor, float damageig, FGameplayTagContainer DamageTags, __int64 someEffectThing, AController* InstigatedBy, AActor* DamageCauser)
	= decltype(BuildingDamageOriginal)(__int64(GetModuleHandleW(0)) + 0x136A8B0);

// static void OnDamageServerHook(ABuildingActor* BuildingActor, float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, AController* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext)
char BuildingDamageHook(ABuildingActor* BuildingActor, float DamageIg, FGameplayTagContainer DamageTags, __int64 someEffectThing, AController* InstigatedBy, AActor* DamageCauser)
{
	auto BuildingSMActor = Cast<ABuildingSMActor>(BuildingActor);
	auto PlayerController = Cast<AFortPlayerControllerAthena>(InstigatedBy);
	auto Pawn = Cast<AFortPlayerPawnAthena>(PlayerController ? PlayerController->Pawn : nullptr);
	auto Weapon = Cast<AFortWeapon>(DamageCauser);

	if (!BuildingSMActor || !PlayerController || !Pawn || !Weapon || BuildingSMActor->bPlayerPlaced)
		// return OnDamageServer(BuildingActor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);
		return BuildingDamageOriginal(BuildingActor, DamageIg, DamageTags, someEffectThing, InstigatedBy, DamageCauser);

	auto Damage = fmaxf(DamageIg, 0.0f);

	// std::cout << std::format("ONDAMAGE: 0x{:x}\n", __int64(_ReturnAddress()) - __int64(GetModuleHandleW(0)));

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

				{
					auto curveMap = ((UDataTable*)CurveTable)->RowMap;
					auto curve = curveMap[BuildingResourceAmountOverride.RowName];

					float Out = ((FSimpleCurve*)curve)->Keys[0].Value;

					// auto HealthBeforeHit = ??

					// auto DamageThatWillAffect = Damage >= HealthBeforeHit ? HealthBeforeHit : Damage;
					auto DamageThatWillAffect = Damage;

					/*
					std::cout << "Damage: " << Damage << '\n';
					// std::cout << "HealthBeforeHit: " << HealthBeforeHit << '\n';
					std::cout << "DamageThatWillAffect: " << DamageThatWillAffect << '\n';
					std::cout << "BuildingSMActor->GetMaxHealth() / DamageThatWillAffect: " << BuildingSMActor->GetMaxHealth() / DamageThatWillAffect << '\n';
					std::cout << "Out: " << Out << '\n';
					std::cout << "Out / BuildingSMActor->GetMaxHealth() / DamageThatWillAffect: " << Out / (BuildingSMActor->GetMaxHealth() / DamageThatWillAffect) << '\n';
					*/

					// float test = 0;
					// TEnumAsByte<EEvaluateCurveTableResult> test2;
					// int x = (BuildingSMActor->GetMaxHealth() / DamageThatWillAffect) / 100;
					// UDataTableFunctionLibrary::EvaluateCurveTableRow(CurveTable, BuildingResourceAmountOverride.RowName, x, L"", &test2, &test);
					// std::cout << "test: " << test << '\n';

					/* std::cout << "Out: " << Out << '\n';

					for (float i = 0; i < 1; i += 0.01)
					{
						float test = 0;
						TEnumAsByte<EEvaluateCurveTableResult> test2;
						FString ContextString;
						UDataTableFunctionLibrary::EvaluateCurveTableRow(CurveTable, BuildingResourceAmountOverride.RowName, i, ContextString, &test2, &test);
						std::cout << std::format("[{}] {}\n", i, test);
					} */

					auto skid = Out / /* round */(BuildingSMActor->GetMaxHealth() / DamageThatWillAffect);

					ResourceCount = round(skid); // almost right
				}
			}

			if (!ItemDef || ResourceCount <= 0)
			{
				return BuildingDamageOriginal(BuildingActor, DamageIg, DamageTags, someEffectThing, InstigatedBy, DamageCauser);
				// return OnDamageServer(BuildingActor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);
			}

			bool bIsWeakspot = Damage == 100.0f;
			PlayerController->ClientReportDamagedResourceBuilding(BuildingSMActor, BuildingSMActor->ResourceType, ResourceCount, false, bIsWeakspot);

			/* auto ReplicatedMatEntry = FindReplicatedEntry(PlayerController, ItemDef);
			// auto ResourceInstance = FindItemInstance(PlayerController, ItemDef);

			std::cout << "ReplicatedMatEntry: " << ReplicatedMatEntry << '\n';

			if (ReplicatedMatEntry)
			{
				auto NewCount = ReplicatedMatEntry->Count + ResourceCount;
			
				std::cout << "ItemEntry->Count: " << FindItemInstance(PlayerController, ItemDef)->ItemEntry.Count << '\n';
				std::cout << "ReplicatedMatEntry->Count: " << ReplicatedMatEntry->Count << '\n';
				std::cout << "NewCount: " << NewCount << '\n';

				if (NewCount > 999)
				{
					std::cout << "ResourceCount: " << ResourceCount << '\n';
					SpawnPickup(ItemDef, Pawn->K2_GetActorLocation(), NewCount - 999, EFortPickupSourceTypeFlag::Other, EFortPickupSpawnSource::Unset, -1, Pawn);
					ResourceCount = 999 - ReplicatedMatEntry->Count;
					std::cout << "ResourceCount: " << ResourceCount << '\n';
				}
			} */

			if (ResourceCount > 0)
			{
				GiveItem(PlayerController, ItemDef, ResourceCount, 0, false);
				Update(PlayerController);
			}
		}
	}

	// OnDamageServer(BuildingActor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);
	return BuildingDamageOriginal(BuildingActor, DamageIg, DamageTags, someEffectThing, InstigatedBy, DamageCauser);
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
				BuildingActor->bPlayerPlaced = true;
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
	// return;

	auto Owner = MarkerComponent->GetOwner();

	// MessageBoxA(0, Owner ? Owner->GetFullName().c_str() : "NULL", "Forge", MB_OK);

	// return;

	AFortPlayerControllerAthena* PlayerController = Cast<AFortPlayerControllerAthena>(Owner);

	if (!PlayerController)
		return;

	AFortPlayerStateAthena* PlayerState = Cast<AFortPlayerStateAthena>(PlayerController->PlayerState);

	// auto MarkerStream = MarkerComponent->MarkerStream;

	// MessageBoxA(0, std::to_string(MarkerStream.Num()).c_str(), "Forge", MB_OK);

	// FFortWorldMarkerData* MarkerDataPtr = (FFortWorldMarkerData*)FMemory_Realloc(0, sizeof(FFortWorldMarkerData), 0);
	auto MarkerData = FFortWorldMarkerData(); // *MarkerDataPtr;

	FFortWorldMarkerData (*ConstructEmptyMarkerData)(FFortWorldMarkerData& a1) = decltype(ConstructEmptyMarkerData)(__int64(GetModuleHandleW(0)) + 0x1228D60);
	MarkerData = ConstructEmptyMarkerData(MarkerData);

	FMarkerID MarkerID{};
	MarkerID.PlayerID = PlayerState->PlayerID;
	MarkerID.InstanceID = MarkerRequest.InstanceID;

	MarkerData.MarkerType = MarkerRequest.MarkerType;
	MarkerData.Owner = PlayerState;
	MarkerData.WorldPosition = MarkerRequest.WorldPosition;
	MarkerData.WorldNormal = MarkerRequest.WorldNormal;
	MarkerData.WorldPositionOffset = MarkerRequest.WorldPositionOffset;
	MarkerData.MarkerID = MarkerID;
	MarkerData.MarkedActorClass.WeakPtr.ObjectIndex = -1;
	MarkerData.MarkedActorClass.WeakPtr.ObjectSerialNumber = 0;
	MarkerData.MarkedActor.WeakPtr.ObjectIndex = -1;
	MarkerData.MarkedActor.WeakPtr.ObjectSerialNumber = 0;
	MarkerData.CustomDisplayInfo.Icon.WeakPtr.ObjectIndex = -1;
	MarkerData.CustomDisplayInfo.Icon.WeakPtr.ObjectSerialNumber = 0;

	if (MarkerRequest.MarkedActor)
	{
		MarkerData.MarkedActor.WeakPtr.ObjectIndex = MarkerRequest.MarkedActor->InternalIndex;
		MarkerData.MarkedActor.WeakPtr.ObjectSerialNumber = 0;

		MarkerData.MarkedActorClass.WeakPtr.ObjectIndex = MarkerRequest.MarkedActor->Class->InternalIndex;
		MarkerData.MarkedActorClass.WeakPtr.ObjectSerialNumber = 0;

		char (*WtfSkidda)(UAthenaMarkerComponent * a1, AActor * a2, FFortWorldMarkerData & MarkerData) = decltype(WtfSkidda)(__int64(GetModuleHandleW(0)) + 0x1297E00);
		(int)WtfSkidda(PlayerController->MarkerComponent, MarkerRequest.MarkedActor, MarkerData);
		// std::cout << "WtfSkidda: " << (int)WtfSkidda(PlayerController->MarkerComponent, MarkerRequest.MarkedActor, MarkerData) << '\n';
	}

	if (MarkerData.MarkerType == EFortWorldMarkerType::Item)
	{
		if (auto Pickup = Cast<AFortPickup>(MarkerRequest.MarkedActor))
		{
			MarkerData.ItemDefinition = Pickup->PrimaryPickupItemEntry.ItemDefinition;
			MarkerData.ItemCount = Pickup->PrimaryPickupItemEntry.Count;
		}
	}

	// static void (*Idk)(UAthenaMarkerComponent* MarkerComponent, FFortWorldMarkerData MarkerData) = decltype(Idk)(__int64(GetModuleHandleW(0)) + 0x12A8990);
	
	for (int i = 0; i < PlayerState->PlayerTeam->TeamMembers.Num(); i++)
	{
		if (PlayerState->PlayerTeam->TeamMembers[i] == PlayerController)
			continue;

		auto CurrentTeamMemberPC = Cast<AFortPlayerControllerAthena>(PlayerState->PlayerTeam->TeamMembers[i]);

		if (!CurrentTeamMemberPC)
			continue;

		auto CurrentTeamMemberMarkerComponent = CurrentTeamMemberPC->MarkerComponent;// (UAthenaMarkerComponent*)CurrentTeamMemberPC->GetComponentByClass(UAthenaMarkerComponent::StaticClass());

		// std::cout << "CurrentTeamMemberMarkerComponent: " << CurrentTeamMemberMarkerComponent << '\n';

		if (!CurrentTeamMemberMarkerComponent)
			continue;

		// Idk(CurrentTeamMemberPC->MarkerComponent, MarkerData);

		// auto CurrentTeamMemberPS = Cast<AFortPlayerStaquteAthena>(CurrentTeamMemberPC->PlayerState);

		// CurrentTeamMemberPC->BroadcastRemoteClientInfo->ClientRemotePlayerAddMapMarker(MarkerData);
		// CurrentTeamMemberPC->BroadcastRemoteClientInfo->OnServerAddMapMarker(MarkerData); // cals ClientRemotePlayerAddMapMarker?
		// CurrentTeamMemberMarkerComponent->ReplayMarkers.Add(MarkerData);
		// CurrentTeamMemberMarkerComponent->OnRep_ReplayMarkers();
		CurrentTeamMemberMarkerComponent->ClientAddMarker(MarkerData);
	}
}

void (*ServerSetTeamOriginal)(AFortPlayerControllerAthena* Controller, unsigned char InTeam);

void ServerSetTeamHook(AFortPlayerControllerAthena* Controller, unsigned char InTeam)
{
	auto CurrentPlaylist = GetCurrentPlaylist();
	auto PlayerState = Cast<AFortPlayerStateAthena>(Controller->PlayerState);

	if (!CurrentPlaylist || !CurrentPlaylist->bAllowTeamSwitching || 
		!PlayerState || !Controller->MyFortPawn || CurrentPlaylist->DefaultFirstTeam > InTeam || CurrentPlaylist->DefaultLastTeam < InTeam)
		return;

	// std::cout << "InTeam: " << (int)InTeam << '\n';

	auto OldTeam = PlayerState->TeamIndex;

	auto OldPlayerTeam = PlayerState->PlayerTeam;

	ServerSetTeamOriginal(Controller, InTeam);

	for (int i = 0; i < PlayerState->PlayerTeam->TeamMembers.Num(); i++)
	{
		if (PlayerState->PlayerTeam->TeamMembers[i] == Controller)
		{
			PlayerState->PlayerTeam->TeamMembers.Remove(i);
		}
	}

	auto GameState = Cast<AFortGameStateAthena>(GetWorld()->GameState);

	PlayerState->SquadId = PlayerState->TeamIndex - 2;

	PlayerState->OnRep_PlayerTeam();
	PlayerState->OnRep_PlayerTeamPrivate();
	PlayerState->OnRep_TeamIndex(OldTeam);
	PlayerState->OnRep_SquadId();

	for (int i = 0; i < GameState->GameMemberInfoArray.Members.Num(); i++)
	{
		if (UFortKismetLibrary::EqualEqual_UniqueNetIdReplUniqueNetIdRepl(GameState->GameMemberInfoArray.Members[i].MemberUniqueId, PlayerState->UniqueId))
		{
			GameState->GameMemberInfoArray.Members.Remove(i);
		}
	}

	FGameMemberInfo MemberInfo{ -1, -1, -1 };
	MemberInfo.TeamIndex = PlayerState->TeamIndex;
	MemberInfo.SquadId = PlayerState->SquadId;
	MemberInfo.MemberUniqueId = PlayerState->UniqueId;

	GameState->GameMemberInfoArray.Members.Add(MemberInfo);
	GameState->GameMemberInfoArray.MarkArrayDirty();
}

void ServerRepairBuildingActorHook(AFortPlayerController* PlayerController, ABuildingSMActor* BuildingActorToRepair)
{
	if (!BuildingActorToRepair)
		return;

	// __int64 (*getreoarcaski)(AFortPlayerController* a1, ABuildingSMActor* a2, __int64 a3) = decltype(getreoarcaski)(__int64(GetModuleHandleW(0)) + 0x19BE090);

		// auto aa = getreoarcaski(PlayerController, BuildingActorToRepair, 0);

	// std::cout << "BuildingActorToRepair: " << BuildingActorToRepair << '\n';
	// std::cout << "BuildingActorToRepair Name: " << BuildingActorToRepair->GetFullName() << '\n';

	auto add = BuildingActorToRepair->VFT[0xBF0 / 8];

	__int64 (*flawlessyeah)(ABuildingSMActor* BuildingActor, AFortPlayerController* Controller) = decltype(flawlessyeah)(add);

	auto aa = flawlessyeah(BuildingActorToRepair, PlayerController);

	// std::cout << "cost: " << aa << '\n';

	auto ResourceItem = UFortKismetLibrary::K2_GetResourceItemDefinition(BuildingActorToRepair->ResourceType);

	if (!ResourceItem)
		return;

	if (!PlayerController->bBuildFree)
	{
		bool bShouldUpdate = false;

		if (!RemoveItem(PlayerController, ResourceItem, aa, &bShouldUpdate))
			return;

		if (bShouldUpdate)
			Update(PlayerController);
	}

	if (aa > 0)
	{
		BuildingActorToRepair->RepairBuilding(PlayerController, aa); // now we should probably check if the player has that many items..
		// PlayerController->FortClientPlaySoundAtLocation(PlayerController->StartRepairSound, BuildingActorToRepair->K2_GetActorLocation(), 0, 0);
	}

	auto AssetManager = Cast<UFortAssetManager>(GEngine->AssetManager);
	auto GameState = Cast<AFortGameStateAthena>(GetWorld()->GameState);

	auto& BuildingRepairCostMultiplierHandle = AssetManager->GameDataCommon->BuildingRepairCostMultiplierHandles[(int)BuildingActorToRepair->ResourceType.GetValue()];

	float v12 = BuildingActorToRepair->GetHealth() / BuildingActorToRepair->GetMaxHealth();
	float BuildingCost = 10;
	float x = 0;
	float test = 0;
	TEnumAsByte<EEvaluateCurveTableResult> test2;
	UDataTableFunctionLibrary::EvaluateCurveTableRow(BuildingRepairCostMultiplierHandle.CurveTable,
		BuildingRepairCostMultiplierHandle.RowName, x, L"", &test2, &test);

	// std::cout << "test: " << test << '\n';
	// std::cout << "skidD: " << test / BuildingActorToRepair->GetHealth() << '\n'; // BuildingActorToRepair->GetMaxHealth() / DamageThatWillAffect

	// std::cout << "v12: " << v12 << '\n';
	float skid = (float)(BuildingCost * v12) * test;
	// std::cout << "skid: " << skid << '\n';
}

void ServerHandlePickupHook(AFortPlayerPawn* Pawn, AFortPickup* Pickup, float InFlyTime, FVector InStartDirection, bool bPlayPickupSound)
{
	auto PlayerController = (AFortPlayerControllerAthena*)Pawn->Controller;

	/* if (PlayerController->LineOfSightTo(Pickup, Vector(PlayerController->GetControlRotation()), true))
	{
		std::cout << "cheater?!\n";
		return;
	} */

	/* if (BasicLocationCheck(Pawn, Pickup, 500))
	{
		std::cout << "cheate2!\n";
		return;
	} */

	if (Pickup && !Pickup->bPickedUp)
	{
		Pawn->IncomingPickups.Add(Pickup);

		Pickup->PickupLocationData.PickupTarget = Pawn;
		Pickup->PickupLocationData.FlyTime = 0.40;
		Pickup->PickupLocationData.ItemOwner = Pawn;
		Pickup->PickupLocationData.StartDirection = FVector_NetQuantizeNormal{ InStartDirection.X, InStartDirection.Y, InStartDirection.Z };
		Pickup->PickupLocationData.PickupGuid = Pawn->CurrentWeapon ? Pawn->CurrentWeapon->ItemEntryGuid : FGuid();
		Pickup->OnRep_PickupLocationData();

		Pickup->bPickedUp = true;
		Pickup->OnRep_bPickedUp();
	}
}

static void ServerBeginEditingBuildingActorHook(AFortPlayerController* PlayerController, ABuildingSMActor* BuildingActorToEdit)
{
	auto Pawn = PlayerController->MyFortPawn;

	if (!Pawn)
		return;

	auto PlayerState = Cast<AFortPlayerStateZone>(Pawn->PlayerState);

	if (!PlayerState)
		return;

	/* if (Pawn->CurrentWeapon)
	{
		if (Pawn->CurrentWeapon->IsA(AFortWeap_BuildingToolBase::StaticClass()))
			return;
	} */

	if (BuildingActorToEdit && BuildingActorToEdit->bPlayerPlaced)
	{
		static auto EditToolDef = UObject::FindObject<UFortWeaponItemDefinition>("/Game/Items/Weapons/BuildingTools/EditTool.EditTool");

		if (auto EditTool = Cast<AFortWeap_EditingTool>(Pawn->EquipWeaponDefinition(EditToolDef, FGuid{})))
		{
			BuildingActorToEdit->EditingPlayer = Cast<AFortPlayerStateZone>(Pawn->PlayerState);
			BuildingActorToEdit->OnRep_EditingPlayer();

			EditTool->EditActor = BuildingActorToEdit;
			EditTool->OnRep_EditActor();
		}
	}
}

__int64 (*AFortGameSessionDedicatedAthena_SetMatchStartTimeOriginal)(__int64 a1, __int64 a2) = decltype(AFortGameSessionDedicatedAthena_SetMatchStartTimeOriginal)
(__int64(GetModuleHandleW(0)) + 0x17F9660);

__int64 AFortGameSessionDedicatedAthena_SetMatchStartTimeHook(__int64 a1, __int64 a2) // only required for nomcp
{
	std::cout << "L!\n";
	return 0;
}

void ServerTeleportToPlaygroundLobbyIslandHook(AFortPlayerControllerAthena* PlayerController)
{
	if (!Globals::bCreative)
		return;

	// std::cout << "ba!\n";

	auto Pawn = PlayerController->MyFortPawn;

	if (Pawn)
	{
		auto RandomPlayerStart = GetRandomObjectOfClass<AFortPlayerStartCreative>(false, false);

		// std::cout << "RandomPlayerStart: " << RandomPlayerStart << '\n';

		if (!RandomPlayerStart)
			return;

		auto aaaa = RandomPlayerStart->PlayerStartTags.Contains("Playground.LobbyIsland.Spawn");

		// std::cout << "aaaa: " << aaaa << '\n';
		// std::cout << "RandomPlayerStart->PlayerStartTags.ToStringSimple(true): " << RandomPlayerStart->PlayerStartTags.ToStringSimple(true) << '\n';
		// std::cout << "RandomPlayerStart->CreativeLinkComponent: " << RandomPlayerStart->CreativeLinkComponent << '\n';
		// std::cout << "RandomPlayerStart->bUseAsIslandStart: " << RandomPlayerStart->bUseAsIslandStart << '\n';

		if (!aaaa)
			return ServerTeleportToPlaygroundLobbyIslandHook(PlayerController);

		/* if (RandomPlayerStart->CreativeLinkComponent)
		{
			std::cout << "RandomPlayerStart->CreativeLinkComponent->LinkedVolume: " << RandomPlayerStart->CreativeLinkComponent->LinkedVolume << '\n';
			std::cout << "RandomPlayerStart->CreativeLinkComponent->bShouldFindVolumeAtStart: " << RandomPlayerStart->CreativeLinkComponent->bShouldFindVolumeAtStart << '\n';
		
			// if (!RandomPlayerStart->CreativeLinkComponent->LinkedVolume)
				// return ServerTeleportToPlaygroundLobbyIslandHook(PlayerController);
		} */

		Pawn->K2_TeleportTo(RandomPlayerStart->K2_GetActorLocation(), Pawn->K2_GetActorRotation());
		// Pawn->K2_SetActorLocation(RandomPlayerStart->K2_GetActorLocation(), false, true, new FHitResult());
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

		if ((ItemEntry->Count < Count && Count != 0) || !ItemDefinition || !ItemDefinition->bCanBeDropped)
			return;

		// ItemEntry->StateValues.Free();

		// std::cout << "WeaponList Before: " << Pawn->CurrentWeaponList.Num() << '\n';

		if (auto Pickup = SpawnPickup(*ItemEntry, Pawn->K2_GetActorLocation(), EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, Pawn))
		{
			Pickup->PrimaryPickupItemEntry.Count = Count;
			Pickup->OnRep_PrimaryPickupItemEntry();
		}

		bool bShouldUpdate = false;
		RemoveItem(PlayerController, ItemGuid, Count, false, &bShouldUpdate);
		
		if (bShouldUpdate)
			Update(PlayerController);

		// std::cout << "WeaponList After: " << Pawn->CurrentWeaponList.Num() << '\n';
	}
}

static void ServerEditBuildingActorHook(AFortPlayerControllerAthena* PlayerController, ABuildingSMActor* BuildingActorToEdit, UClass* NewBuildingClass, int RotationIterations, char bMirrored)
{
	if (!BuildingActorToEdit || !NewBuildingClass || BuildingActorToEdit->bDestroyed || BuildingActorToEdit->EditingPlayer != PlayerController->PlayerState)
		return;

	auto PlayerState = Cast<AFortPlayerStateAthena>(PlayerController->PlayerState);

	if (!PlayerState || PlayerState->TeamIndex != BuildingActorToEdit->TeamIndex)
		return;

	auto GameState = Cast<AFortGameStateAthena>(GetWorld()->GameState);

	/* bool bFound = false;

	for (int i = 0; i < GameState->PlayerBuildableClasses->BuildingClasses.Num(); i++)
	{
		if (GameState->PlayerBuildableClasses->BuildingClasses[i] == NewBuildingClass)
		{
			bFound = true;
			break;
		}
	}

	if (!bFound)
		return; */

	BuildingActorToEdit->EditingPlayer = nullptr;

	static ABuildingSMActor* (*BuildingSMActorReplaceBuildingActor)(ABuildingSMActor*, __int64, UClass*, int, int, uint8_t, AFortPlayerController*) =
		decltype(BuildingSMActorReplaceBuildingActor)((uintptr_t)GetModuleHandleW(0) + 0x13D0DE0);

	if (auto BuildingActor = BuildingSMActorReplaceBuildingActor(BuildingActorToEdit, 1, NewBuildingClass, BuildingActorToEdit->CurrentBuildingLevel, RotationIterations, bMirrored, PlayerController))
	{
		BuildingActor->bPlayerPlaced = true;

		if (auto PlayerState = Cast<AFortPlayerStateAthena>(PlayerController->PlayerState))
			BuildingActor->SetTeam(PlayerState->TeamIndex);

		BuildingActor->OnRep_Team();
	}
}

static void ServerEndEditingBuildingActorHook(AFortPlayerControllerAthena* PlayerController, ABuildingSMActor* BuildingActorToStopEditing)
{
	// if (!PlayerController->IsInAircraft() && BuildingActorToStopEditing && PlayerController->MyFortPawn)

	if (!BuildingActorToStopEditing || !PlayerController->MyFortPawn 
		// || BuildingActorToStopEditing->EditingPlayer != PlayerController->PlayerState
		|| BuildingActorToStopEditing->bDestroyed)
		return;

	auto EditTool = Cast<AFortWeap_EditingTool>(PlayerController->MyFortPawn->CurrentWeapon);

	BuildingActorToStopEditing->EditingPlayer = nullptr;
	BuildingActorToStopEditing->OnRep_EditingPlayer();

	if (EditTool)
	{
		// EditTool->bEditConfirmed = true;
		EditTool->EditActor = nullptr;
		EditTool->OnRep_EditActor();
	}
}

static void (*HandleReloadCost)(AFortWeapon* Weapon, int AmountToRemove) = decltype(HandleReloadCost)(__int64(GetModuleHandleW(0)) + 0x1c66a30);

static void HandleReloadCostHook(AFortWeapon* Weapon, int AmountToRemove)
{
	auto Pawn = Cast<AFortPlayerPawnAthena>(Weapon->GetOwner());

	if (!Pawn || !Weapon)
		return;

	auto PlayerController = Cast<AFortPlayerControllerAthena>(Pawn->Controller);

	if (!PlayerController || !PlayerController->WorldInventory || PlayerController->bInfiniteAmmo)
		return;

	auto ReplicatedEntry = FindReplicatedEntry(PlayerController, Weapon->ItemEntryGuid);
	auto InstanceEntry = &FindItemInstance(PlayerController, Weapon->ItemEntryGuid)->ItemEntry;

	if (!ReplicatedEntry || !InstanceEntry)
		return;

	ReplicatedEntry->LoadedAmmo = Weapon->AmmoCount;
	InstanceEntry->LoadedAmmo = Weapon->AmmoCount;

	PlayerController->WorldInventory->Inventory.MarkItemDirty(*ReplicatedEntry);
	PlayerController->WorldInventory->Inventory.MarkItemDirty(*InstanceEntry);

	// return HandleReloadCost(Weapon, AmountToRemove);

	std::cout << "Reload!\n";

	auto AmmoDef = Weapon->WeaponData->GetAmmoWorldItemDefinition_BP();

	if (AmmoDef)
	{
		auto AmmoInstance = AmmoDef == Weapon->WeaponData ? FindItemInstance(PlayerController, Weapon->ItemEntryGuid) : FindItemInstance(PlayerController, AmmoDef);

		if (AmmoInstance)
		{
			bool bShouldUpdate = false;
			RemoveItem(PlayerController, AmmoInstance->ItemEntry.ItemGuid, AmountToRemove, true, &bShouldUpdate);

			if (bShouldUpdate)
				Update(PlayerController);
		}
	}
}

static __int64 (*PickTeam)(AFortGameModeAthena* GameMode, unsigned __int8 preferredTeam, AFortPlayerControllerAthena* Controller) = decltype(PickTeam)(__int64(GetModuleHandleW(0)) + 0x11D42B0);

__int64 PickTeamHook(AFortGameModeAthena* GameMode, unsigned __int8 preferredTeam, AFortPlayerControllerAthena* Controller)
{
	// auto OriginalTeam = PickTeam(GameMode, preferredTeam, Controller);
	// std::cout << "OriginalTeam: " << OriginalTeam << '\n';

	auto GameState = Cast<AFortGameStateAthena>(GameMode->GameState);

	auto Playlist = GameState->CurrentPlaylistInfo.BasePlaylist;

	static int CurrentTeamMembers = 0; // bad

	// std::cout << "Dru!\n";

	if (!Playlist)
	{
		CurrentTeamMembers = 0;
		static int Current = 3;
		CurrentTeamMembers++;
		return Current++;
	}

	static int NextTeamIndex = Playlist->DefaultFirstTeam;

	// std::cout << "CurrentTeamMembers: " << CurrentTeamMembers << '\n';

	if (Globals::bPlayground || CurrentTeamMembers >= Playlist->MaxSquadSize)
	{
		// std::cout << "Moving next team!\n";

		NextTeamIndex++;
		CurrentTeamMembers = 0;
	}

	CurrentTeamMembers++;

	return NextTeamIndex;
}

__int64 skidder()
{
	return 3;
}

void GetPlayerViewPointHook(AFortPlayerController* PlayerController, FVector& Location, FRotator& Rotation)
{
	auto MyFortPawn = PlayerController->MyFortPawn;

	auto PlayerState = Cast<AFortPlayerStateZone>(PlayerController->PlayerState);

	// if (PlayerState && PlayerState->SpectatingTarget) // else if (IsInState(NAME_Spectating) && HasAuthority() && !IsLocalController())
	if (PlayerController->StateName.ComparisonIndex == 322)
	{
		Location = PlayerController->LastSpectatorSyncLocation;
		Rotation = PlayerController->LastSpectatorSyncRotation;
	}
	else if (MyFortPawn)
	{
		Location = GetActorLocation(MyFortPawn);
		Rotation = PlayerController->GetControlRotation();
	}
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
			Location = GetActorLocation(ViewTarget);
			Rotation = ViewTarget->K2_GetActorRotation();
		}
	}
}

void ProcessEventHook(UObject* Object, UFunction* Function, void* Parameters)
{
	if (!Object || !Function)
		return;

	if (Globals::bRestarting)
		return ProcessEvent(Object, Function, Parameters);

	if (Globals::bLogProcessEvent)
	{
		auto FunctionName = Function->GetName(); // UKismetSystemLibrary::GetPathName(Function).ToString();
		auto FunctionFullName = Function->GetFullName();
		auto ObjectName = Object->GetName();

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
			!strstr(FunctionName.c_str(), "PinkOatmeal") &&
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
			!strstr(FunctionName.c_str(), "K2_GetComponentToWorld") &&
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
			!strstr(FunctionName.c_str(), "MoveFromOffset__UpdateFunc") &&
			!strstr(FunctionFullName.c_str(), "PinkOatmeal_GreenGlop_C") &&
			!strstr(ObjectName.c_str(), "CBGA_GreenGlop_WithGrav_C") &&
			!strstr(ObjectName.c_str(), "CBGA_Glitch_"))
		{
			std::cout << std::format("Function called: {} with {}\n", FunctionFullName, ObjectName);
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

void ServerGiveCreativeItemHook(AFortPlayerControllerAthena* Controller, FFortItemEntry CreativeItem)
{
	if (!CreativeItem.ItemDefinition)
		return;

	std::cout << "Giving: " << CreativeItem.ItemDefinition->GetFullName() << '\n';

	bool bShouldUpdate = false;

	GiveItem(Controller, CreativeItem.ItemDefinition, CreativeItem.Count, CreativeItem.LoadedAmmo, false, &bShouldUpdate);
	
	if (bShouldUpdate)
		Update(Controller);
}

void ServerHandlePickupWithSwap(AFortPickup* Pickup, FGuid Swap, float InFlyTime, FVector InStartDirection, bool bPlayPickupSound)
{

}

static void (*OnCapsuleBeginOverlapOriginal)(AFortPlayerPawn* Pawn, UPrimitiveComponent* OverlappedComp, AActor* OtherActor) = decltype(OnCapsuleBeginOverlapOriginal)
(__int64(GetModuleHandleW(0)) + 0x196DB00);

void OnCapsuleBeginOverlapHook(AFortPlayerPawn* Pawn, UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, FHitResult SweepResult)
{
	// std::cout << "aa!\n";
	// std::cout << "Other: " << OtherActor->GetFullName() << '\n';

	if (auto Pickup = Cast<AFortPickup>(OtherActor))
	{
		// std::cout << "b!\n";

		{
			auto ItemDefinition = Pickup->PrimaryPickupItemEntry.ItemDefinition;

			if (Pickup->PawnWhoDroppedPickup != Pawn)
				// (Isslotsfil(ItemDefinition)
					// ? !IsInventoryFull(Cast<AFortPlayerControllerAthena>(Pawn->Controller), 1, ItemDefinition, Pickup->PrimaryPickupItemEntry.Count) : true))
			{
				auto  PlayerController = Cast<AFortPlayerControllerAthena>(Pawn->Controller, false);
				auto& ItemInstances = PlayerController->WorldInventory->Inventory.ItemInstances;

				bool  ItemDefGoingInPrimary = IsPrimaryQuickbar(ItemDefinition);
				int   PrimarySlotsFilled = 0;
				bool  bCanStack = false;
				bool	bFoundStack = false;

				for (int i = 0; i < ItemInstances.Num(); i++)
				{
					auto ItemInstance = ItemInstances[i];

					if (ItemDefGoingInPrimary && IsPrimaryQuickbar(ItemInstance->ItemEntry.ItemDefinition))
						PrimarySlotsFilled++;

					bool bIsInventoryFull = (PrimarySlotsFilled /* - 6 */) >= 5;

					if (ItemInstance->ItemEntry.ItemDefinition == ItemDefinition)
					{
						bFoundStack = true;

						if (ItemInstance->ItemEntry.Count < ItemDefinition->MaxStackSize)
						{
							bCanStack = true;
							break;
						}
					}

					if (bIsInventoryFull)
						return;
				}

				// std::cout << "bCanStack: " << bCanStack << '\n';
				// std::cout << "bFoundStack: " << bFoundStack << '\n';

				if (!bCanStack ? (!bFoundStack ? true : ItemDefinition->bAllowMultipleStacks) : true)
					ServerHandlePickupHook(Pawn, Pickup, 0.4, FVector(), true);
			}
		}
	}

	else if (auto Portal = Cast<AFortAthenaCreativePortal>(OtherActor))
	{
		Portal->CurrentPopulation++;
		Portal->OnRep_PopulationChanged();

		if (Portal->LinkedVolume)
		{
			if (Portal->bTeleportLocationIsIslandStart)
			{
				Pawn->K2_SetActorLocation(Portal->TeleportLocation, false, true, new FHitResult());
			}
			else
			{
				auto params = AFortAthenaCreativePortal_TeleportPlayerToLinkedVolume_Params{};
				params.PlayerPawn = Pawn;
				TeleportPlayerToLinkedVolumeHook(Portal, nullptr, &params);
			}
		}
		else if (Portal->DestinationActor)
		{
			Pawn->K2_SetActorLocation(Portal->DestinationActor->K2_GetActorLocation(), false, true, new FHitResult());
		}
		else
		{
			std::cout << "Wheretf!\n";
		}
	}

	return OnCapsuleBeginOverlapOriginal(Pawn, OverlappedComp, OtherActor);
}

char (*PickupDelay)(AFortPickup* Pickup) = decltype(PickupDelay)(__int64(GetModuleHandleW(0)) + 0x16F7D10);

char PickupDelayHook(AFortPickup* Pickup)
{
	auto Pawn = Cast<AFortPlayerPawnAthena>(Pickup->PickupLocationData.PickupTarget);

	if (IsBadReadPtr(Pawn) || Pawn->bActorIsBeingDestroyed)
		return PickupDelay(Pickup);

	auto PlayerController = Cast<AFortPlayerControllerAthena>(Pawn->Controller);

	if (IsBadReadPtr(PlayerController) || IsBadReadPtr(PlayerController->WorldInventory))
		return PickupDelay(Pickup);

	// std::cout << "Pawn->IncomingPickups.Num(): " << Pawn->IncomingPickups.Num() << '\n';

	auto CurrentPickup = Pickup; //  Pawn->IncomingPickups[i];

	if (IsBadReadPtr(CurrentPickup))
		return PickupDelay(Pickup);

	auto ItemDef = CurrentPickup->PrimaryPickupItemEntry.ItemDefinition;
	auto IncomingCount = CurrentPickup->PrimaryPickupItemEntry.Count;

	if (IsBadReadPtr(ItemDef))
		return PickupDelay(Pickup);

	auto& ItemInstances = PlayerController->WorldInventory->Inventory.ItemInstances;

	auto CurrentItemGuid = CurrentPickup->PickupLocationData.PickupGuid; // Pawn->CurrentWeapon->ItemEntryGuid;

	auto ItemInstanceToSwap = FindItemInstance(PlayerController, CurrentItemGuid);
	bool bHasSwapped = false;

	int cpyCount = IncomingCount;

	auto PawnLoc = Pawn->K2_GetActorLocation();
	auto ItemDefGoingInPrimary = IsPrimaryQuickbar(ItemDef);

	std::vector<std::pair<FFortItemEntry*, FFortItemEntry*>> PairsToMarkDirty; // vector of sets or something so no duplicates??

	bool bForceOverflow = false;

	// std::cout << "ItemDef->MaxStackSize: " << ItemDef->MaxStackSize << '\n';

	while (cpyCount > 0)
	{
		int PrimarySlotsFilled = 0;
		bool bEverStacked = false;
		bool bDoesStackExist = false;

		bool bIsInventoryFull = false;

		for (int i = 0; i < ItemInstances.Num(); i++)
		{
			auto ItemInstance = ItemInstances[i];

			// std::cout << std::format("[{}] {} {}\n", i, cpyCount, PrimarySlotsFilled);

			if (ItemDefGoingInPrimary && IsPrimaryQuickbar(ItemInstance->ItemEntry.ItemDefinition))
			{
				// std::cout << "Primary: " << ItemInstance->ItemEntry.ItemDefinition->GetName() << '\n';
				PrimarySlotsFilled++;
			}

			bIsInventoryFull = (PrimarySlotsFilled /* - 6 */) >= 5;

			if (bIsInventoryFull) // probs shouldnt do in loop but alr
			{
				if (ItemInstanceToSwap && ItemInstanceToSwap->CanBeDropped() && !bHasSwapped)
				{
					// std::cout << "PrimarySlotsFilled: " << PrimarySlotsFilled << '\n';

					// std::cout << "Swapping!\n";

					auto& ItemEntryToSwap = ItemInstanceToSwap->ItemEntry;

					// std::cout << "ItemEntryToSwap.LoadedAmmo: " << ItemEntryToSwap.LoadedAmmo << '\n';

					auto SwappedPickup = SpawnPickup(ItemEntryToSwap, PawnLoc, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, Pawn);
					RemoveItem(PlayerController, CurrentItemGuid, ItemEntryToSwap.Count);

					bHasSwapped = true;

					// i--;
					// PrimarySlotsFilled--; ??
					continue; // ???
				}
			}

			if (ItemInstance->ItemEntry.ItemDefinition == ItemDef)
			{
				// if (ItemInstance->ItemEntry.Count >= ItemDef->MaxStackSize)
					// continue; // Fully stacked

				// std::cout << "ItemInstance->ItemEntry.Count: " << ItemInstance->ItemEntry.Count << '\n';
				// std::cout << "ItemDef->MaxStackSize: " << ItemDef->MaxStackSize << '\n';

				if (ItemInstance->ItemEntry.Count < ItemDef->MaxStackSize)
				{
					int OverStack = ItemInstance->ItemEntry.Count + cpyCount - ItemDef->MaxStackSize;
					int AmountToStack = OverStack > 0 ? cpyCount - OverStack : cpyCount;

					// std::cout << "AmountToStack: " << AmountToStack << '\n';

					cpyCount -= AmountToStack;

					std::pair<FFortItemEntry*, FFortItemEntry*> Pairs;
					ModifyCount(PlayerController, ItemInstance, AmountToStack, false, &Pairs, false);
					PairsToMarkDirty.push_back(Pairs);

					bEverStacked = true;

					// if (cpyCount > 0)
						// break;
				}

				bDoesStackExist = true;
			}

			if ((bIsInventoryFull || bForceOverflow) && cpyCount > 0)
			{
				// std::cout << "PrimarySlotsFilled: " << PrimarySlotsFilled << '\n';
				std::cout << "Spawning pickup due to overflow!\n";
				FFortItemEntry PickupToSpawn{};
				PickupToSpawn.ItemDefinition = ItemDef;
				PickupToSpawn.Count = cpyCount > ItemDef->MaxStackSize ? ItemDef->MaxStackSize : cpyCount;
				// std::cout << "cpyCount: " << cpyCount << '\n';
				SpawnPickup(PickupToSpawn, PawnLoc, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, Pawn);
				// std::cout << "PickupToSpawn.Count: " << PickupToSpawn.Count << '\n';
				cpyCount -= PickupToSpawn.Count;
				bForceOverflow = false;
			}

			if (cpyCount <= 0)
				break;
		}

		// if (!bEverFoundStack)
		if (cpyCount > 0 && !bIsInventoryFull)
		{
			if (bDoesStackExist ? ItemDef->bAllowMultipleStacks : true)
			{
				std::cout << "Giving Item! cpycount: " << cpyCount << '\n';
				auto NewItem = CreateAndGiveItem(PlayerController, ItemDef, cpyCount > ItemDef->MaxStackSize ? ItemDef->MaxStackSize : cpyCount, CurrentPickup->PrimaryPickupItemEntry.LoadedAmmo, true);

				if (NewItem)
					cpyCount -= NewItem->ItemEntry.Count;
			}
			else
			{
				bForceOverflow = true;
			}
		}
	}

	// auto Item = GiveItem(PlayerController, ItemDef, cpyCount, CurrentPickup->PrimaryPickupItemEntry.LoadedAmmo, true);

	/* for (int i = 0; i < Pawn->IncomingPickups.Num(); i++)
	{
		Pawn->IncomingPickups[i]->PickupLocationData.PickupGuid = Item->ItemEntry.ItemGuid;
	} */

	Update(PlayerController, PairsToMarkDirty.size() == 0);

	for (auto& [key, value] : PairsToMarkDirty)
	{
		PlayerController->WorldInventory->Inventory.MarkItemDirty(*key);
		PlayerController->WorldInventory->Inventory.MarkItemDirty(*value);
	}

	return PickupDelay(Pickup);
}

float (*GetMaxTickRate)(UGameEngine* Engine, float DeltaTime, bool bAllowFrameRateSmoothing) = decltype(GetMaxTickRate)(__int64(GetModuleHandleW(0)) + 0x3085220);

float GetMaxTickRateHook(UGameEngine* Engine, float DeltaTime, bool bAllowFrameRateSmoothing)
{
	// auto TickRate = GetMaxTickRate(Engine, DeltaTime, bAllowFrameRateSmoothing);
	// std::cout << "TickRate: " << TickRate << " bAllowFrameRateSmoothing: " << bAllowFrameRateSmoothing << '\n';
	return 30;
}

void ServerFireActorInCannonHook(AFortWeaponRangedMountedCannon* Cannon, FVector LaunchDir)
{
	auto Pawn = Cast<AFortPlayerPawnAthena>(Cannon->Owner);

	std::cout << "ServerFireActorInCannonHook Pawn: " << Pawn << '\n';

	if (!Pawn)
		return;

	auto Vehicle = Cast<AFortAthenaVehicle>(Pawn->VehicleStateLocal.Vehicle);

	std::cout << "ServerFireActorInCannonHook Pawn: " << Pawn << '\n';

	if (!Vehicle)
		return;

	auto PushCannon = Cast<AFortAthenaSKPushCannon>(Vehicle);

	std::cout << "ServerFireActorInCannonHook PushCannon: " << Pawn << '\n';

	if (!PushCannon)
	{
		auto MountedCannon = Cast<AFortMountedCannon>(Vehicle);

		std::cout << "ServerFireActorInCannonHook MountedCannon: " << MountedCannon << '\n';

		if (MountedCannon)
		{
			auto PawnToShoot = Vehicle->GetPawnAtSeat(0);

			std::cout << "ServerFireActorInCannonHook PawnToShoot1: " << Pawn << '\n';

			if (!PawnToShoot)
				return;

			Pawn->ServerOnExitVehicle(ETryExitVehicleBehavior::ForceAlways);
			MountedCannon->OnLaunchPawn(PawnToShoot);
		}

		return;
	}

	if (!Vehicle->GetPawnAtSeat(1))
		return;

	auto PawnToShoot = Vehicle->GetPawnAtSeat(1);

	std::cout << "ServerFireActorInCannonHook PawnToShoot2: " << Pawn << '\n';

	if (!PawnToShoot)
		return;

	PushCannon->OnPreLaunchPawn(PawnToShoot, LaunchDir);
	Pawn->ServerOnExitVehicle(ETryExitVehicleBehavior::ForceAlways);
	PushCannon->OnLaunchPawn(PawnToShoot, LaunchDir);
	PushCannon->MultiCastPushCannonLaunchedPlayer();
}

void ServerRemoveMapMarkerHook(UAthenaMarkerComponent* MarkerComponent, FMarkerID MarkerID, ECancelMarkerReason CancelReason)
{
	auto Owner = MarkerComponent->GetOwner();

	// MessageBoxA(0, Owner ? Owner->GetFullName().c_str() : "NULL", "Forge", MB_OK);

	// return;

	AFortPlayerControllerAthena* PlayerController = Cast<AFortPlayerControllerAthena>(Owner);

	if (!PlayerController)
		return;

	AFortPlayerStateAthena* PlayerState = Cast<AFortPlayerStateAthena>(PlayerController->PlayerState);

	for (int i = 0; i < PlayerState->PlayerTeam->TeamMembers.Num(); i++)
	{
		if (PlayerState->PlayerTeam->TeamMembers[i] == PlayerController)
			continue;

		auto CurrentTeamMemberPC = Cast<AFortPlayerControllerAthena>(PlayerState->PlayerTeam->TeamMembers[i]);

		if (!CurrentTeamMemberPC)
			continue;

		auto CurrentTeamMemberMarkerComponent = CurrentTeamMemberPC->MarkerComponent;// (UAthenaMarkerComponent*)CurrentTeamMemberPC->GetComponentByClass(UAthenaMarkerComponent::StaticClass());

		// std::cout << "CurrentTeamMemberMarkerComponent: " << CurrentTeamMemberMarkerComponent << '\n';

		if (!CurrentTeamMemberMarkerComponent)
			continue;

		CurrentTeamMemberMarkerComponent->ClientCancelMarker(MarkerID);
	}
}