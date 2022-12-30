#pragma once

#include "framework.h"

#include "rebooting.h"
#include "inventory.h"

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

bool ReadyToStartMatchHook(AFortGameModeAthena* GameMode)
{
	if (GetWorld()->OwningGameInstance->LocalPlayers.Num())
		GetWorld()->OwningGameInstance->LocalPlayers.Remove(0);

	TArray<AActor*> Actors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AFortPlayerStartWarmup::StaticClass(), &Actors);

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
		
		UFortPlaylistAthena* Playlist = UObject::FindObject<UFortPlaylistAthena>("/Game/Athena/Playlists/Playlist_DefaultSolo.Playlist_DefaultSolo");
			// UObject::FindObject<UFortPlaylistAthena>("/Game/Athena/Playlists/Playground/Playlist_Playground.Playlist_Playground");
		
		GameState->CurrentPlaylistInfo.BasePlaylist = Playlist;
		GameState->CurrentPlaylistInfo.OverridePlaylist = Playlist;

		GameState->CurrentPlaylistInfo.PlaylistReplicationKey++;
		GameState->CurrentPlaylistInfo.MarkArrayDirty();
		GameState->OnRep_CurrentPlaylistInfo();
	}

	if (!GameState->MapInfo)
		return false;

	static UNetDriver* (*CreateNetDriver)(UEngine*, UWorld*, FName) = decltype(CreateNetDriver)((uintptr_t)GetModuleHandleW(0) + 0x347FAF0);
	static char (*InitListen)(UNetDriver*, void*, FURL&, bool, FString&) = decltype(InitListen)((uintptr_t)GetModuleHandleW(0) + 0x6F5F90);
	static void (*SetWorld)(UNetDriver*, UWorld*) = decltype(SetWorld)((uintptr_t)GetModuleHandleW(0) + 0x31EDF40);

	GetWorld()->NetDriver = CreateNetDriver(GEngine, GetWorld(), UKismetStringLibrary::Conv_StringToName(L"GameNetDriver"));

	FString Error;
	auto URL = FURL();
	URL.Port = 7777;

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

		auto OverrideLootTierGroup = ItemCollector->GetLootTierGroupOverride();
		auto LootDrops = PickLootDrops(OverrideLootTierGroup);

		for (int z = 0; z < ItemCollector->ItemCollections.Num(); z++)
		{
			if (z >= LootDrops.size())
				break;

			auto LootEntry = LootDrops.at(z);

			ItemCollector->ItemCollections[z].OutputItem = (UFortWorldItemDefinition*)LootEntry.ItemDefinition;
			ItemCollector->ItemCollections[z].OutputItemEntry[0] = LootEntry;
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

	return true;
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

	NewPlayer->bHasServerFinishedLoading = true;
	NewPlayer->OnRep_bHasServerFinishedLoading();

	PlayerState->bHasStartedPlaying = true;
	PlayerState->OnRep_bHasStartedPlaying();

	static auto PickaxeDefinition = UObject::FindObject<UFortItemDefinition>("/Game/Athena/Items/Weapons/WID_Harvest_Pickaxe_Athena_C_T01.WID_Harvest_Pickaxe_Athena_C_T01");
	static auto WallPiece = UObject::FindObject<UFortItemDefinition>("/Game/Items/Weapons/BuildingTools/BuildingItemData_Wall.BuildingItemData_Wall");
	static auto FloorPiece = UObject::FindObject<UFortItemDefinition>("/Game/Items/Weapons/BuildingTools/BuildingItemData_Floor.BuildingItemData_Floor");
	static auto StairPiece = UObject::FindObject<UFortItemDefinition>("/Game/Items/Weapons/BuildingTools/BuildingItemData_Stair_W.BuildingItemData_Stair_W");
	static auto RoofPiece = UObject::FindObject<UFortItemDefinition>("/Game/Items/Weapons/BuildingTools/BuildingItemData_RoofS.BuildingItemData_RoofS");

	GiveItem(NewPlayer, PickaxeDefinition, 1);
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

	static auto HeadPart = UObject::FindObject<UCustomCharacterPart>("/Game/Characters/CharacterParts/Female/Medium/Heads/F_Med_Head1.F_Med_Head1");
	static auto BodyPart = UObject::FindObject<UCustomCharacterPart>("/Game/Characters/CharacterParts/Female/Medium/Bodies/F_Med_Soldier_01.F_Med_Soldier_01");
	static auto BackpackPart = UObject::FindObject<UCustomCharacterPart>("/Game/Characters/CharacterParts/Backpacks/NoBackpack.NoBackpack");

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
	// PhysicsPawn->SafeTeleportInfo.Rotation = Rot;
	PhysicsPawn->OnRep_SafeTeleportInfo();

	bool bTeleport = false;
	bool bSweep = false;

	// Mesh->K2_SetRelativeLocation(Transform.Translation, bSweep, bTeleport, nullptr);
	// Mesh->K2_SetWorldTransform(Transform, bSweep, bTeleport, nullptr);
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
		if (auto GadgetDef = Cast<UAthenaGadgetItemDefinition>(Pawn->CurrentWeapon->WeaponData)) // is this right?
		{
			// reset character parts here
			// clear the ability set
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

		/* int SeatIndex = Vehicle->FindSeatIndex(Pawn);
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
						int Ammo = 10000;
						auto VehicleWeaponInstance = GiveItem(Controller, VehicleWeaponDef, 1, Ammo); // Pawn->EquipWeaponDefinition(VehicleWeaponDef, FGuid());
						Controller->WorldInventory->Inventory.MarkItemDirty(*FindReplicatedEntry(Controller, VehicleWeaponDef));
						auto VehicleWeapon = Pawn->EquipWeaponDefinition(VehicleWeaponDef, VehicleWeaponInstance->ItemEntry.ItemGuid);
						int OldAmmoCount = VehicleWeapon->AmmoCount;
						VehicleWeapon->AmmoCount = Ammo;
						VehicleWeapon->OnRep_AmmoCount(OldAmmoCount);
						Update(Controller);
					}
				}
			}
		} */

		return;
	}

	else if (auto Container = Cast<ABuildingContainer>(ReceivingActor))
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

FRotator* GetControlRotationHook(AFortPlayerController* Controller, FRotator* a2)
{
	*a2 = Controller->ControlRotation;
	return a2;
}

void ClientOnPawnDiedHook(AFortPlayerControllerAthena* PlayerController, FFortPlayerDeathReport DeathReport)
{
	auto PlayerState = Cast<AFortPlayerStateAthena>(PlayerController->PlayerState);
	auto KillerPawn = Cast<AFortPlayerPawnAthena>(DeathReport.KillerPawn);
	auto Pawn = Cast<AFortPlayerPawnAthena>(PlayerController->Pawn);
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

			SpawnRebootCard(PlayerController);
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

static void OnDamageServerHook(ABuildingActor* BuildingActor, float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, AController* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext)
{
	auto BuildingSMActor = Cast<ABuildingSMActor>(BuildingActor);
	auto PlayerController = Cast<AFortPlayerControllerAthena>(InstigatedBy);
	auto Pawn = Cast<AFortPlayerPawnAthena>(PlayerController ? PlayerController->Pawn : nullptr);
	auto Weapon = Cast<AFortWeapon>(DamageCauser);

	if (!BuildingSMActor || !PlayerController || !Pawn || !Weapon || BuildingSMActor->bPlayerPlaced)
		return;

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

		auto Item = GiveItem(PlayerController, ItemDef, Pickup->PrimaryPickupItemEntry.Count, Pickup->PrimaryPickupItemEntry.LoadedAmmo);
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

	if (Pawn->CurrentWeapon)
	{
		if (Pawn->CurrentWeapon->IsA(AFortWeap_BuildingToolBase::StaticClass()))
			return;
	}

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

		if (auto Pickup = SpawnPickup(*ItemEntry, Pawn->K2_GetActorLocation()))
		{
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
