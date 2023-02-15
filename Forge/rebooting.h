#pragma once

#include "framework.h"
#include "inventory.h"
#include <unordered_set>

// #define USE_EXPERIMENTAL_REBOOTING

#ifdef USE_EXPERIMENTAL_REBOOTING
void HandleReboot(AActor* Instigator, ABuildingGameplayActorSpawnMachine* RebootVan)
#else
void HandleReboot2(AActor* Instigator, ABuildingGameplayActorSpawnMachine* RebootVan)
#endif
{
	auto RequestingController = Cast<AFortPlayerControllerAthena>(Instigator);

	if (!RequestingController)
		return;

	auto RequestingPlayerState = Cast<AFortPlayerStateAthena>(RequestingController->PlayerState);
	auto RequestingPawn = Cast<AFortPlayerPawnAthena>(RequestingController->Pawn);
}

#ifdef USE_EXPERIMENTAL_REBOOTING
void HandleReboot2(AActor* Instigator, ABuildingGameplayActorSpawnMachine* RebootVan)
#else
void HandleReboot(AActor* Instigator, ABuildingGameplayActorSpawnMachine* RebootVan)
#endif
{
	auto RequestingController = Cast<AFortPlayerControllerAthena>(Instigator);

	if (!RequestingController)
		return;

	auto RequestingPlayerState = Cast<AFortPlayerStateAthena>(RequestingController->PlayerState);
	auto RequestingPawn = Cast<AFortPlayerPawnAthena>(RequestingController->Pawn);

	// MessageBoxA(0, std::to_string(__int64(RebootVan->ResurrectLocation)).c_str(), "Forge", MB_OK);

	TArray<AActor*> Actors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AFortPlayerStart::StaticClass(), &Actors);

	RebootVan->ResurrectLocation = (AFortPlayerStart*)Actors[0];
	// return;

	// std::cout << "RequestingController->ResurrectionComponent->ResurrectionLocation: " << RequestingController->ResurrectionComponent->ResurrectionLocation.ObjectIndex << '\n';

	auto RebootVanPadCollision = *(UStaticMeshComponent**)(__int64(RebootVan) + 0x8A8);

	auto SpawnTransform = RebootVanPadCollision->K2_GetComponentToWorld();
		// RebootVan->GetTransform();
		//  // RebootVan->ResurrectLocation->GetTransform();
	// RequestingController->ResurrectionComponent->ResurrectionLocation.Get<AFortPlayerStart>()->GetTransform(); 
	// RequestingPawn->GetTransform();

	std::cout << "ActiveTeam: " << (int)RebootVan->ActiveTeam << '\n';

	SpawnTransform.Scale3D = FVector{ 1, 1, 1 };
	SpawnTransform.Translation.Z += 1000;
	SpawnTransform.Rotation = FQuat();

	auto GameState = Cast<AFortGameStateAthena>(GetWorld()->GameState);
	auto GameMode = Cast<AFortGameModeAthena>(GetWorld()->AuthorityGameMode);

	for (int z = 0; z < RequestingController->ResurrectionComponent->PlayerIdsForResurrection.Num(); z++)
	{
		auto& PlayerId = RequestingController->ResurrectionComponent->PlayerIdsForResurrection[z];
		AFortPlayerStateAthena* CurrentPlayerState = nullptr;

		for (int p = 0; p < GameState->PlayerArray.Num(); p++)
		{
			if (AFortPlayerState::AreUniqueIDsIdentical(PlayerId, GameState->PlayerArray[p]->UniqueId))
			{
				CurrentPlayerState = Cast<AFortPlayerStateAthena>(GameState->PlayerArray[p]);
				break;
			}
		}

		if (!CurrentPlayerState)
			continue;

		auto CurrentPlayerController = Cast<AFortPlayerControllerAthena>(CurrentPlayerState->GetOwner());

		if (!CurrentPlayerController)
			continue;

		auto RespawnedPawn = (AFortPlayerPawnAthena*)GetWorld()->AuthorityGameMode->SpawnDefaultPawnAtTransform(CurrentPlayerController, SpawnTransform);

		if (!RespawnedPawn)
			continue;

		CurrentPlayerController->Possess(RespawnedPawn);

		CurrentPlayerState->CurrentHealth = 100.f;
		RespawnedPawn->SetHealth(100);
		// GameMode->AlivePlayers.Add(CurrentPlayerController);
		// RespawnedPawn->HealthSet->Health.CurrentValue = 100.f;
		// RespawnedPawn->HealthSet->OnRep_Health();

		CurrentPlayerState->DeathInfo = FDeathInfo();
		CurrentPlayerState->OnRep_DeathInfo();
		CurrentPlayerController->ClientClearDeathNotification();
		CurrentPlayerController->RespawnPlayerAfterDeath(true);
		CurrentPlayerController->ClientOnPawnSpawned();
		// CurrentPlayerState->DeathInfo = FDeathInfo();

		/* CurrentPlayerState->SpectatingTarget = nullptr;
		CurrentPlayerState->Spectators = FFortSpectatorZoneArray();
		CurrentPlayerState->Spectators.MarkArrayDirty(); // UD */

		CurrentPlayerState->ResurrectionChipAvailable = FFortResurrectionData();

		static void (*addToAlivePlayers)(AFortGameModeAthena* GameMode, AFortPlayerControllerAthena * Player) = decltype(addToAlivePlayers)(__int64(GetModuleHandleW(0)) +
			0x11B47F0);

		addToAlivePlayers(GameMode, CurrentPlayerController);

		// GameState->PlayersLeft++;
		// GameState->OnRep_PlayersLeft();

		static auto OnPlayerPawnResurrectedFn = UObject::FindObject<UFunction>("/Game/Athena/Items/EnvironmentalItems/SCMachine/BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnPlayerPawnResurrected");
		// RebootVan->OnPlayerPawnResurrected(RespawnedPawn);
		RebootVan->ProcessEvent(OnPlayerPawnResurrectedFn, &RespawnedPawn);

		auto LootToGive = PickLootDrops(StringToName(L"Loot_AthenaSCM"));

		for (auto& LootDrop : LootToGive)
		{
			GiveItem(CurrentPlayerController, LootDrop.ItemDefinition, LootDrop.Count, LootDrop.LoadedAmmo);
		}

		Update(CurrentPlayerController);
	}

	for (int i = 0; i < RequestingPlayerState->PlayerTeam->TeamMembers.Num(); i++)
	{
		auto TeamMember = Cast<AFortPlayerControllerAthena>(RequestingPlayerState->PlayerTeam->TeamMembers[i]);

		if (!TeamMember)
			continue;

		for (int j = 0; j < TeamMember->ResurrectionComponent->PlayerIdsForResurrection.Num(); j++)
		{
			TeamMember->ResurrectionComponent->PlayerIdsForResurrection.Remove(j);
		}

		// TeamMember->ResurrectionComponent->PlayerIdsForResurrection.Free();
		TeamMember->ResurrectionComponent->OnRep_PlayerIdsForResurrection();
	}

	static auto StartCooldown = UObject::FindObject<UFunction>("/Game/Athena/Items/EnvironmentalItems/SCMachine/BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.StartCooldown");
	RebootVan->ProcessEvent(StartCooldown, nullptr);

	RebootVan->ActiveTeam = 0;
	RebootVan->SquadId = 0;

	// static auto OnResurrectionCompleted = UObject::FindObject<UFunction>("/Game/Athena/Items/EnvironmentalItems/SCMachine/BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnResurrectionCompleted");
	// RebootVan->ProcessEvent(OnResurrectionCompleted, nullptr);

	RebootVan->SetSpawnMachineState(ESpawnMachineState::OnCooldown);
	// RebootVan->SpawnMachineState = ESpawnMachineState::Complete;
	RebootVan->OnRep_SpawnMachineState();

	RebootVan->InstigatorPC.ObjectIndex = 0;
	RebootVan->InstigatorPC.ObjectSerialNumber = 0;
	// RebootVan->SpawnMachineSubTextState = ESpawnMachineSubTextState::NoCards;

	auto PlayersInteracting = (TArray<AFortPlayerControllerAthena*>*)(__int64(RebootVan) + 0xA78);

	for (int i = 0; i < PlayersInteracting->Num(); i++)
	{
		if (PlayersInteracting->operator[](i) == RequestingController)
		{
			PlayersInteracting->Remove(i);
			break;
		}
	}
}

__int64 (*SpawnPawnOrSOmething)(ABuildingGameplayActorSpawnMachine* SpawnMachine, int a2) = decltype(SpawnPawnOrSOmething)(__int64(GetModuleHandleW(0)) + 0x139C580);

void* SpawnPawnOrSOmethingHook(ABuildingGameplayActorSpawnMachine* SpawnMachine, int SquadIdMaybe)
{
	std::cout << "SpawnPawnOrSOmethingHook!\n";
	auto ActiveTeam = SpawnMachine->ActiveTeam << '\n';
	std::cout << "SquadIdMaybe: " << SquadIdMaybe << '\n';
	std::cout << std::format("SpawnPawnOrSOmethingRET: 0x{:x}\n", __int64(_ReturnAddress()) - __int64(GetModuleHandleW(0)));
	return GetWorld()->SpawnActor<AFortPawn>(FVector{ 1, 1, 10000 }, FRotator{});
}