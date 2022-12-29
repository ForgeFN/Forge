#pragma once

#include "framework.h"
#include "inventory.h"
#include <unordered_set>

void SpawnRebootCard(AFortPlayerControllerAthena* PlayerController)
{
	static auto ChipClass = UObject::FindObject<UClass>("/Game/Athena/Items/EnvironmentalItems/SCMachine/BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C");
	auto Pawn = Cast<AFortPlayerPawnAthena>(PlayerController->Pawn);
	auto PlayerState = Cast<AFortPlayerStateAthena>(PlayerController->PlayerState);

	if (!Pawn || !PlayerState)
		return;

	auto PawnTransform = Pawn->GetTransform();
	PawnTransform.Translation.Z += 100;

	ABuildingGameplayActorSpawnChip* Chip = (ABuildingGameplayActorSpawnChip*)UGameplayStatics::BeginDeferredActorSpawnFromClass(GetWorld(), ChipClass,
		PawnTransform, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, PlayerController);

	auto PawnTeam = UFortKismetLibrary::GetActorTeam(Pawn);

	UKismetSystemLibrary::SetBytePropertyByName(Chip, StringToName(L"OwnerTeam"), PawnTeam);
	Chip->OwnerPlayerController = PlayerController;

	Chip = (ABuildingGameplayActorSpawnChip*)UGameplayStatics::FinishSpawningActor(Chip, PawnTransform);

	std::unordered_set<AFortPlayerControllerAthena*> TeamMembers;

	for (int i = 0; i < PlayerState->PlayerTeam->TeamMembers.Num(); i++)
	{
		auto TeamMember = Cast<AFortPlayerControllerAthena>(PlayerState->PlayerTeam->TeamMembers[i]);

		if (!TeamMember /* || TeamMember == PlayerController */)
			continue;

		TeamMembers.emplace(TeamMember);
	}

	for (auto TeamMember : TeamMembers)
	{
		TeamMember->ResurrectionComponent->PlayerIdsForResurrection.Add(PlayerState->UniqueId);
		TeamMember->ResurrectionComponent->OnRep_PlayerIdsForResurrection();
	}
}

void HandleReboot(AActor* Instigator, ABuildingGameplayActorSpawnMachine* RebootVan)
{
	auto RequestingController = Cast<AFortPlayerControllerAthena>(Instigator);

	if (!RequestingController)
		return;

	auto RequestingPlayerState = Cast<AFortPlayerStateAthena>(RequestingController->PlayerState);
	auto RequestingPawn = Cast<AFortPlayerPawnAthena>(RequestingController->Pawn);

	// MessageBoxA(0, std::to_string(__int64(RebootVan->ResurrectLocation)).c_str(), "Forge", MB_OK);

	// TArray<AActor*> Actors;
	// UGameplayStatics::GetAllActorsOfClass(GetWorld(), AFortPlayerStart::StaticClass(), &Actors);

	// RebootVan->ResurrectLocation = (AFortPlayerStart*)Actors[0];

	auto SpawnTransform = // RebootVan->ResurrectLocation->GetTransform();
	// RequestingController->ResurrectionComponent->ResurrectionLocation.Get<AFortPlayerStart>()->GetTransform(); 
	RequestingPawn->GetTransform();

	auto GameState = Cast<AFortGameStateAthena>(GetWorld()->GameState);

	auto WeaponToGive = *(UFortWorldItemDefinition**)(__int64(RebootVan) + 0x948);
	auto MatsToGive = *(UFortWorldItemDefinition**)(__int64(RebootVan) + 0x950);
	auto AmmoToGive = *(UFortWorldItemDefinition**)(__int64(RebootVan) + 0x978);

	auto MatNumberToGive = *(int32_t*)(__int64(RebootVan) + 0x958);
	auto AmmoNumberToGive = *(int32_t*)(__int64(RebootVan) + 0x95C);

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
		CurrentPlayerController->Possess(RespawnedPawn);

		CurrentPlayerState->CurrentHealth = 100.f;
		RespawnedPawn->SetHealth(100);
		// RespawnedPawn->HealthSet->Health.CurrentValue = 100.f;
		// RespawnedPawn->HealthSet->OnRep_Health();

		CurrentPlayerController->RespawnPlayerAfterDeath(false);
		CurrentPlayerController->ClientOnPawnSpawned();
		// CurrentPlayerState->DeathInfo = FDeathInfo();

		/* CurrentPlayerState->SpectatingTarget = nullptr;
		CurrentPlayerState->Spectators = FFortSpectatorZoneArray();
		CurrentPlayerState->Spectators.MarkArrayDirty(); // UD */

		CurrentPlayerState->ResurrectionChipAvailable = FFortResurrectionData();

		GameState->PlayersLeft++;
		GameState->OnRep_PlayersLeft();

		RebootVan->OnPlayerPawnResurrected(RespawnedPawn);

		WeaponToGive = UObject::FindObject<UFortWorldItemDefinition>("/Game/Athena/Items/Weapons/WID_Pistol_SemiAuto_Athena_C_Ore_T02.WID_Pistol_SemiAuto_Athena_C_Ore_T02");
		MatsToGive = UObject::FindObject<UFortWorldItemDefinition>("/Game/Items/ResourcePickups/WoodItemData.WoodItemData");

		if (WeaponToGive)
			AmmoToGive = WeaponToGive->GetAmmoWorldItemDefinition_BP(); // UObject::FindObject<UFortWorldItemDefinition>("/Game/Athena/Items/Weapons/WID_Pistol_SemiAuto_Athena_C_Ore_T02.WID_Pistol_SemiAuto_Athena_C_Ore_T02");

		MatNumberToGive = 100;
		AmmoNumberToGive = 75;

		// if (false)
		{
			if (WeaponToGive)
				GiveItem(CurrentPlayerController, WeaponToGive, 1);

			if (MatsToGive)
				GiveItem(CurrentPlayerController, MatsToGive, MatNumberToGive);

			if (AmmoToGive)
				GiveItem(CurrentPlayerController, AmmoToGive, AmmoNumberToGive);

			Update(CurrentPlayerController);
		}
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
}