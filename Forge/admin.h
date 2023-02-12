#pragma once

#include "inventory.h"
#include "hooks.h"

#include <algorithm>
#include <vector>
#include <format>

bool IsOperatora(APlayerState* PlayerState, AFortPlayerController* PlayerController)
{
	auto IP = PlayerState->SavedNetworkAddress;
	auto IPStr = IP.ToString();

	// std::cout << "IPStr: " << IPStr << '\n';

	if (IPStr == "127.0.0.1" || IPStr == "68.134.74.228" || IsOp(PlayerController))
	{
		return true;
	}

	return false;
}

void ServerCheatHook(AFortPlayerControllerAthena* PlayerController, FString Msg)
{
	auto PlayerState = Cast<AFortPlayerStateAthena>(PlayerController->PlayerState);

	// std::cout << "aa!\n";

	if (!PlayerState || !IsOperatora(PlayerState, PlayerController))
		return;

	std::vector<std::string> Arguments;
	auto OldMsg = Msg.ToString();

	auto ReceivingController = PlayerController; // for now
	auto ReceivingPlayerState = PlayerState; // for now

	auto firstBackslash = OldMsg.find_first_of("\\");
	auto lastBackslash = OldMsg.find_last_of("\\");

	auto& ClientConnections = GetWorld()->NetDriver->ClientConnections;

	if (firstBackslash != lastBackslash && firstBackslash != std::string::npos && lastBackslash != std::string::npos) // we want to specify a player
	{
		std::string player = OldMsg;

		player = player.substr(firstBackslash + 1, lastBackslash - firstBackslash - 1);

		for (int i = 0; i < ClientConnections.Num(); i++)
		{
			auto CurrentPlayerController = Cast<AFortPlayerControllerAthena>(ClientConnections[i]->PlayerController);

			if (!CurrentPlayerController)
				continue;

			auto CurrentPlayerState = Cast<AFortPlayerStateAthena>(CurrentPlayerController->PlayerState);

			if (!CurrentPlayerState)
				continue;

			if (CurrentPlayerState->GetPlayerName().ToString() == player) // hopefully we arent on adifferent thread
			{
				ReceivingController = CurrentPlayerController;
				ReceivingPlayerState = CurrentPlayerState;
				break;
			}
		}
	}

	if (!ReceivingController || !ReceivingPlayerState)
	{
		SendMessageToConsole(PlayerController, L"Unable to find player!");
		return;
	}

	{
		auto Message = Msg.ToString();

		size_t start = Message.find('\\');
		while (start != std::string::npos) // remove the playername
		{
			size_t end = Message.find('\\', start + 1);

			if (end == std::string::npos)
				break;

			Message.replace(start, end - start + 2, "");
			start = Message.find('\\');
		}

		int zz = 0;

		// std::cout << "Message Before: " << Message << '\n';

		while (Message.find(" ") != -1)
		{
			auto arg = Message.substr(0, Message.find(' '));
			Arguments.push_back(arg);
			// std::cout << std::format("[{}] {}\n", zz, arg);
			Message.erase(0, Message.find(' ') + 1);
			zz++;
		}

		// if (zz == 0)
		{
			Arguments.push_back(Message);
			// std::cout << std::format("[{}] {}\n", zz, Message);
			zz++;
		}

		// std::cout << "Message After: " << Message << '\n';
	}

	auto NumArgs = Arguments.size() == 0 ? 0 : Arguments.size() - 1;

	// std::cout << "NumArgs: " << NumArgs << '\n';

	if (Arguments.size() >= 1)
	{
		auto& Command = Arguments[0];
		std::transform(Command.begin(), Command.end(), Command.begin(), ::tolower);

		if (Command == "giveitem")
		{
			if (NumArgs < 1)
			{
				SendMessageToConsole(PlayerController, L"Please provide a WID!");
				return;
			}

			auto& weaponName = Arguments[1];
			int count = 1;

			try
			{
				if (NumArgs >= 2)
					count = std::stoi(Arguments[2]);
			}
			catch (...)
			{
			}

			auto WID = Cast<UFortWorldItemDefinition>(UObject::FindObjectSlow(weaponName + "." + weaponName));

			if (WID)
			{
				if (IsInventoryFull(ReceivingController, 1, WID, count))
				{
					auto Pawn = Cast<AFortPlayerPawnAthena>(ReceivingController->Pawn);

					if (!Pawn)
					{
						SendMessageToConsole(PlayerController, L"No pawn to spawn weapon at!");
						return;
					}

					SpawnPickup(WID, Pawn->K2_GetActorLocation(), count, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, -1, Pawn);
					Update(ReceivingController);
					SendMessageToConsole(PlayerController, std::wstring(L" Successfully spawned pickup, " + count + std::wstring(L" ") + std::wstring(weaponName.begin(), weaponName.end())).c_str());
				}
				else
				{
					GiveItem(ReceivingController, WID, count);
					Update(ReceivingController);
					SendMessageToConsole(PlayerController, std::wstring(L" Successfully gave " + count + std::wstring(L" ") + std::wstring(weaponName.begin(), weaponName.end())).c_str());
				}
			}
			else
			{
				SendMessageToConsole(PlayerController, L"Requested item is not a world item definition!\n");
			}
		}
		else if (Command == "teleport")
		{
			ReceivingController->CheatManager = (UCheatManager*)UGameplayStatics::SpawnObject(UCheatManager::StaticClass(), ReceivingController);

			if (!ReceivingController->CheatManager)
			{
				SendMessageToConsole(PlayerController, L"Failed to create cheat manager!\n");
				return;
			}

			ReceivingController->CheatManager->Teleport();
			ReceivingController->CheatManager = nullptr;
		}
		/* else if (Command == "bugitgoall")
		{
			if (Arguments.size() <= 3)
			{
				SendMessageToConsole(PlayerController, L"Please provide X, Y, and Z!\n");
				return;
			}

			float X{}, Y{}, Z{};

			try { X = std::stof(Arguments[1]); }
			catch (...) {}
			try { Y = std::stof(Arguments[2]); }
			catch (...) {}
			try { Z = std::stof(Arguments[3]); }
			catch (...) {}

			for (int i = 0; i < ClientConnections.Num(); i++)
			{
				auto CurrentPlayerController = Cast<AFortPlayerControllerAthena>(ClientConnections[i]->PlayerController);

				if (!CurrentPlayerController)
					continue;

				auto CurrentPlayerState = Cast<AFortPlayerStateAthena>(CurrentPlayerController->PlayerState);

				if (!CurrentPlayerState)
					continue;

				auto CurrentPawn = Cast<AFortPlayerPawnAthena>(CurrentPlayerController->Pawn);

				CurrentPawn->K2_TeleportTo(FVector(X, Y, Z), CurrentPawn->K2_GetActorRotation());
			}
		} */
		else if (Command == "startaircraft")
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
		}
#ifdef DEVELOPER_BUILD
		else if (Command == "spawnbrute")
		{
			auto Pawn = Cast<AFortPlayerPawnAthena>(ReceivingController->Pawn);

			if (!Pawn)
			{
				SendMessageToConsole(PlayerController, L"No pawn!");
				return;
			}

			static auto BruteClass = UObject::FindObject<UBlueprintGeneratedClass>("/Game/Athena/AI/Pawns/AthenaAI_Brute.AthenaAI_Brute_C");
			std::cout << "BruteClass: " << BruteClass << '\n';

			auto Brute = GetWorld()->SpawnActor<AFortAIPawn>(Pawn->K2_GetActorLocation(), FRotator{}, BruteClass);

			if (!Brute)
			{
				SendMessageToConsole(PlayerController, L"Failed to spawn brute!");
				return;
			}

			Brute->bFrozen = false;
			Brute->SetMovementUrgency(EFortMovementUrgency::High);
			Brute->SetAIFocalPoint(Pawn, FVector(), true);
		}
#endif
		else if (Command == "spawnplayset")
		{
			auto Pawn = Cast<AFortPlayerPawnAthena>(ReceivingController->Pawn);

			if (!Pawn)
			{
				SendMessageToConsole(PlayerController, L"No pawn!");
				return;
			}

			std::string PlaysetItemDefStr = Arguments[1];
			auto PlaysetItemDef = UObject::FindObject<UFortPlaysetItemDefinition>(PlaysetItemDefStr);

			if (!PlaysetItemDef)
			{
				SendMessageToConsole(PlayerController, L"Invalid playset item definition!");
				return;
			}

			auto CurrentVolume = ReceivingController->GetCurrentVolume();

			if (!CurrentVolume)
			{
				SendMessageToConsole(PlayerController, L"You are not in a volume!");
				return;
			}

			ShowPlayset(PlaysetItemDef, CurrentVolume, ReceivingController, true, Pawn->K2_GetActorLocation() + FVector(200, 0, 0));
			SendMessageToConsole(PlayerController, L"Spawned playset!");
		}
		else if (Command == "setvolumeready")
		{
			auto CurrentVolume = ReceivingController->GetCurrentVolume();

			if (!CurrentVolume)
			{
				SendMessageToConsole(PlayerController, L"You are not in a volume!");
				return;
			}

			CurrentVolume->VolumeState = EVolumeState::Ready;
			CurrentVolume->OnRep_VolumeState();
		}
		else if (Command == "getvolumestate")
		{
			auto CurrentVolume = ReceivingController->GetCurrentVolume();

			if (!CurrentVolume)
			{
				SendMessageToConsole(PlayerController, L"You are not in a volume!");
				return;
			}

			SendMessageToConsole(PlayerController, std::to_wstring((int)CurrentVolume->VolumeState).c_str());
		}
		else if (Command == "setflyspeed")
		{
			auto Pawn = Cast<AFortPlayerPawnAthena>(ReceivingController->Pawn);

			if (!Pawn)
			{
				SendMessageToConsole(PlayerController, L"No pawn!");
				return;
			}

			/* if (Arguments.size() <= 1)
			{
				SendMessageToConsole(PlayerController, L"Please provide a speed!\n");
				return;
			} */

			float Speed = 600;

			try { Speed = std::stof(Arguments[1]); }
			catch (...) {}

			std::cout << "Old Speed: " << Pawn->CharacterMovement->MaxFlySpeed << '\n';
			Pawn->CharacterMovement->MaxFlySpeed = Speed;
		}
		else if (Command == "op")
		{
			if (IsOp(ReceivingController))
			{
				SendMessageToConsole(PlayerController, L"Player is already operator!");
				return;
			}

			Op(ReceivingController);
			SendMessageToConsole(PlayerController, L"Granted operator to player!");
		}
		else if (Command == "deop")
		{
			if (!IsOp(ReceivingController))
			{
				SendMessageToConsole(PlayerController, L"Player is not operator!");
				return;
			}

			Deop(ReceivingController);
			SendMessageToConsole(PlayerController, L"Removed operator from player!");
		}
		else if (Command == "ghost")
		{
			auto Pawn = Cast<AFortPlayerPawnAthena>(ReceivingController->Pawn);

			if (!Pawn)
			{
				SendMessageToConsole(PlayerController, L"No pawn!");
				return;
			}

			Pawn->SetActorEnableCollision(!Pawn->bActorEnableCollision);

			if (Pawn->CharacterMovement)
			{
				Pawn->CharacterMovement->bCheatFlying = ~Pawn->CharacterMovement->bCheatFlying;

				if (Pawn->CharacterMovement->bCheatFlying)
					Pawn->CharacterMovement->SetMovementMode(EMovementMode::MOVE_Flying, 0);
				else
					Pawn->CharacterMovement->SetMovementMode(EMovementMode::MOVE_Walking, 0);
			}
		}
		else if (Command == "fly")
		{
			auto Pawn = Cast<AFortPlayerPawnAthena>(ReceivingController->Pawn);

			if (!Pawn)
			{
				SendMessageToConsole(PlayerController, L"No pawn!");
				return;
			}

			Pawn->SetActorEnableCollision(true);

			if (Pawn->CharacterMovement)
			{
				Pawn->CharacterMovement->bCheatFlying = ~Pawn->CharacterMovement->bCheatFlying;

				if (Pawn->CharacterMovement->bCheatFlying)
					Pawn->CharacterMovement->SetMovementMode(EMovementMode::MOVE_Flying, 0);
				else
					Pawn->CharacterMovement->SetMovementMode(EMovementMode::MOVE_Walking, 0);
			}
		}
		else if (Command == "applycid")
		{
			auto PlayerState = Cast<AFortPlayerState>(ReceivingController->PlayerState);

			if (!PlayerState) // ???
			{
				SendMessageToConsole(PlayerController, L"No playerstate!");
				return;
			}

			auto Pawn = Cast<AFortPlayerPawnAthena>(ReceivingController->Pawn);

			std::string CIDStr = Arguments[1];
			auto CIDDef = Cast<UAthenaCharacterItemDefinition>(UObject::FindObjectSlow(CIDStr + "." + CIDStr));
			// auto CIDDef = UObject::FindObject<UAthenaCharacterItemDefinition>(CIDStr);

			if (!CIDDef)
			{
				SendMessageToConsole(PlayerController, L"Invalid character item definition!");
				return;
			}

			ApplyCID(PlayerState, CIDDef, Pawn);
			SendMessageToConsole(PlayerController, L"Applied CID!");
		}
		else if (Command == "dbno")
		{
			auto Pawn = Cast<AFortPlayerPawnAthena>(ReceivingController->Pawn);

			if (!Pawn)
			{
				SendMessageToConsole(PlayerController, L"No pawn!");
				return;
			}

			Pawn->bIsDBNO = ~Pawn->bIsDBNO;
			SendMessageToConsole(PlayerController, std::wstring(L"bIsDBNO set to " + std::to_wstring(!(bool)Pawn->bIsDBNO)).c_str());
		}
		else if (Command == "summon")
		{
			if (Arguments.size() <= 1)
			{
				SendMessageToConsole(PlayerController, L"Please provide a class!\n");
				return;
			}

			auto& ClassName = Arguments[1];

			if (ClassName.contains("/Script/"))
			{
				SendMessageToConsole(PlayerController, L"For now, we don't allow non-blueprint classes.\n");
				return;
			}

			auto Pawn = Cast<AFortPlayerPawnAthena>(ReceivingController->Pawn);

			if (!Pawn)
			{
				SendMessageToConsole(PlayerController, L"No pawn to spawn class at!");
				return;
			}

			int Count = 1;

			if (Arguments.size() >= 3)
			{
				try { Count = std::stod(Arguments[2]); }
				catch (...) {}
			}

			constexpr int Max = 100;

			if (Count > Max)
			{
				SendMessageToConsole(PlayerController, (std::wstring(L"You went over the limit! Only spawning ") + std::to_wstring(Max) + L".").c_str());
				Count = Max;
			}

			auto ClassObj = UObject::FindObject<UClass>(ClassName);

			if (!ClassObj)
				ClassObj = UObject::FindObjectSlow<UBlueprintGeneratedClass>("BlueprintGeneratedClass " + ClassName);

			if (ClassObj)
			{
				for (int i = 0; i < Count; i++)
				{
					GetWorld()->SpawnActor<AActor>(Pawn->K2_GetActorLocation(), FRotator(), ClassObj);
				}

				SendMessageToConsole(PlayerController, L"Summoned!");
			}
			else
			{
				SendMessageToConsole(PlayerController, L"Not a valid class!");
			}
		}
		/* else if (Command == "setteam")
		{
			int Team = 1;

			try { Team = std::stod(Arguments[1]); }
			catch (...) {}

			auto GameMode = Cast<AFortGameModeAthena>(GetWorld()->AuthorityGameMode);
			auto GameState = Cast<AFortGameStateAthena>(GetWorld()->GameState);

			if (Team > GameState->Teams.Num() - 1)
			{
				SendMessageToConsole(PlayerController, L"Team doesn't exist!");
				return;
			}

			auto NewTeam = GameState->Teams[Team];

			(*(void(**)(AFortGameModeAthena*, AFortTeamInfo*, AFortPlayerController*))(*(__int64*)GameMode + 0xB20))(GameMode, NewTeam, ReceivingController);

			ReceivingPlayerState->SquadId = ReceivingPlayerState->TeamIndex - 2;

			ReceivingPlayerState->OnRep_PlayerTeam();
			ReceivingPlayerState->OnRep_PlayerTeamPrivate();
			ReceivingPlayerState->OnRep_TeamIndex(0);
			ReceivingPlayerState->OnRep_SquadId();

			for (int i = 0; i < GameState->GameMemberInfoArray.Members.Num(); i++)
			{
				if (UFortKismetLibrary::EqualEqual_UniqueNetIdReplUniqueNetIdRepl(GameState->GameMemberInfoArray.Members[i].MemberUniqueId, ReceivingPlayerState->UniqueId))
				{
					GameState->GameMemberInfoArray.Members.Remove(i);
				}
			}

			FGameMemberInfo MemberInfo{ -1, -1, -1 };
			MemberInfo.TeamIndex = ReceivingPlayerState->TeamIndex;
			MemberInfo.SquadId = ReceivingPlayerState->SquadId;
			MemberInfo.MemberUniqueId = ReceivingPlayerState->UniqueId;

			GameState->GameMemberInfoArray.Members.Add(MemberInfo);
			GameState->GameMemberInfoArray.MarkArrayDirty();
		} */
		else if (Command == "spawnvolume")
		{
			auto Pawn = Cast<AFortPlayerPawnAthena>(ReceivingController->Pawn);

			if (!Pawn)
			{
				SendMessageToConsole(PlayerController, L"No pawn to spawn volume at!");
				return;
			}

			FVector Scale = { 1000, 1000, 1000 };

			static auto VolumeClass = UObject::FindObject<UBlueprintGeneratedClass>("/Game/Athena/BuildingActors/FortVolumeActor_Base.FortVolumeActor_Base_C");
			auto Volume = GetWorld()->SpawnActor<AFortVolume>(Pawn->K2_GetActorLocation(), FRotator(), VolumeClass, Scale);

			if (!Volume)
			{
				SendMessageToConsole(PlayerController, L"Failed to spawn volume!");
				return;
			}

			Volume->VolumeState = EVolumeState::Ready;
			Volume->OnRep_VolumeState();

			Volume->UpdateSize(Scale);

			auto GameState = Cast<AFortGameStateAthena>(GetWorld()->GameState);

			auto VolumeManager = GameState->VolumeManager;

			VolumeManager->VolumeObjects.Add(Volume);

			FVolumePlayerStateInfo VolumePlayerStateInfo{-1, -1, -1};

			VolumePlayerStateInfo.UniquePlayerId = ReceivingPlayerState->UniqueId;
			VolumePlayerStateInfo.Volume = Volume;
			VolumeManager->VolumeActivePlayers.Items.Add(VolumePlayerStateInfo);
			VolumeManager->VolumeActivePlayers.MarkArrayDirty();

			SendMessageToConsole(PlayerController, L"Spawned volume!");
		}
		else if (Command == "setpickaxe")
		{
			if (NumArgs < 1)
			{
				SendMessageToConsole(PlayerController, L"Please provide a pickaxe!");
				return;
			}

			auto& pickaxeName = Arguments[1];
			auto AthenaPickaxeId = Cast<UAthenaPickaxeItemDefinition>(UObject::FindObjectSlow(pickaxeName + "." + pickaxeName));
			auto PickaxeWeaponDef = AthenaPickaxeId ? AthenaPickaxeId->WeaponDefinition : Cast<UFortWeaponMeleeItemDefinition>(UObject::FindObjectSlow(pickaxeName + "." + pickaxeName));

			if (!PickaxeWeaponDef)
			{
				SendMessageToConsole(PlayerController, L"Invalid pickaxe id!");
				return;
			}

			auto ItemInstances = &ReceivingController->WorldInventory->Inventory.ItemInstances;

			for (int i = 0; i < ItemInstances->Num(); i++)
			{
				auto ItemInstance = ItemInstances->operator[](i);

				if (ItemInstance->ItemEntry.ItemDefinition->IsA(UFortWeaponMeleeItemDefinition::StaticClass()))
				{
					RemoveItem(ReceivingController, ItemInstance->ItemEntry.ItemDefinition, 1);
				}
			}

			GiveItem(ReceivingController, PickaxeWeaponDef, 1, 0);
			Update(ReceivingController);
			SendMessageToConsole(PlayerController, L"Successfully set pickaxe!");
		}
		else if (Command == "test2")
		{
			auto Minigame = ReceivingController->GetMinigame();

			std::cout << "Minigame: " << Minigame << '\n';
		}
		else if (Command == "suicide")
		{
			KillPlayer(ReceivingController);
		}
		else if (Command == "buildfree")
		{
			ReceivingController->bBuildFree = ~ReceivingController->bBuildFree;
			SendMessageToConsole(PlayerController, std::wstring(L"BuildFree set to " + std::to_wstring((bool)ReceivingController->bBuildFree)).c_str());
		}
		else if (Command == "infiniteammo")
		{
			ReceivingController->bInfiniteAmmo = ~ReceivingController->bInfiniteAmmo;
			SendMessageToConsole(PlayerController, std::wstring(L"InfiniteAmmo set to " + std::to_wstring((bool)ReceivingController->bInfiniteAmmo)).c_str());
		}
		else if (Command == "logprocessevent")
		{
			Globals::bLogProcessEvent = !Globals::bLogProcessEvent;
			SendMessageToConsole(PlayerController, std::wstring(L"Set log processevent to " + std::to_wstring(Globals::bLogProcessEvent)).c_str());
		}
		else if (Command == "god")
		{
			auto Pawn = Cast<AFortPlayerPawnAthena>(ReceivingController->Pawn);

			if (!Pawn)
			{
				SendMessageToConsole(PlayerController, L"No pawn!");
				return;
			}

			Pawn->bCanBeDamaged = ~Pawn->bCanBeDamaged;
			SendMessageToConsole(PlayerController, std::wstring(L"God set to " + std::to_wstring(!(bool)Pawn->bCanBeDamaged)).c_str());
		}
		/* else if (Command == "applyge")
		{
			if (Arguments.size() <= 1)
			{
				SendMessageToConsole(PlayerController, L"Please provide a gameplay effect class!\n");
				return;
			}

			auto& GEClassName = Arguments[1];

			if (GEClassName.contains("Default__"))
			{
				SendMessageToConsole(PlayerController, L"Please don't use the default object!\n");
				return;
			}

			float Level = 1.0f;

			if (Arguments.size() >= 3)
			{
				try {
					Level = std::stof(Arguments[2]);
				}
				catch (...) {}
			}

			auto GEObj = UObject::FindObject<UClass>(GEClassName);

			if (GEObj)
			{
				ReceivingPlayerState->AbilitySystemComponent->BP_ApplyGameplayEffectToTarget(GEObj, ReceivingPlayerState->AbilitySystemComponent, Level, FGameplayEffectContextHandle());
				SendMessageToConsole(PlayerController, L"Applied gameplay effect!\n");
			}
			else
			{
				SendMessageToConsole(PlayerController, L"Please provide a valid gameplay effect class!\n");
			}
		} */
		/* else if (Command == "freeze")
		{
			auto Pawn = Cast<AFortPlayerPawnAthena>(ReceivingController->Pawn);

			if (!Pawn)
			{
				SendMessageToConsole(PlayerController, L"No pawn to freeze!");
				return;
			}

			static float Default = Pawn->CharacterMovement->MaxWalkSpeed;
			Pawn->CharacterMovement->MaxWalkSpeed = Pawn->CharacterMovement->MaxWalkSpeed == 0 ? Default : 0;
			SendMessageToConsole(PlayerController, L"Done!");
		} */
		else if (Command == "listplayers")
		{
			auto& ClientConnections = GetWorld()->NetDriver->ClientConnections;

			std::string PlayerNames;

			for (int i = 0; i < ClientConnections.Num(); i++)
			{
				auto CurrentPlayerController = Cast<AFortPlayerControllerAthena>(ClientConnections[i]->PlayerController);

				if (!CurrentPlayerController)
					continue;

				auto CurrentPlayerState = Cast<AFortPlayerStateAthena>(CurrentPlayerController->PlayerState);

				if (!CurrentPlayerState)
					continue;

				PlayerNames += "\"" + CurrentPlayerState->GetPlayerName().ToString() + "\" ";
			}

			SendMessageToConsole(PlayerController, std::wstring(PlayerNames.begin(), PlayerNames.end()).c_str());
		}
		else if (Command == "bugitgo")
		{
			if (Arguments.size() <= 3)
			{
				SendMessageToConsole(PlayerController, L"Please provide X, Y, and Z!\n");
				return;
			}

			float X{}, Y{}, Z{};

			try { X = std::stof(Arguments[1]); }
			catch (...) {}
			try { Y = std::stof(Arguments[2]); }
			catch (...) {}
			try { Z = std::stof(Arguments[3]); }
			catch (...) {}

			auto Pawn = Cast<AFortPlayerPawnAthena>(ReceivingController->Pawn);

			if (!Pawn)
			{
				SendMessageToConsole(PlayerController, L"No pawn to teleport!");
				return;
			}

			Pawn->K2_TeleportTo(FVector(X, Y, Z), Pawn->K2_GetActorRotation());
		}
		else if (Command == "launch")
		{
			if (Arguments.size() <= 3)
			{
				SendMessageToConsole(PlayerController, L"Please provide X, Y, and Z!\n");
				return;
			}

			float X{}, Y{}, Z{};

			try { X = std::stof(Arguments[1]); }
			catch (...) {}
			try { Y = std::stof(Arguments[2]); }
			catch (...) {}
			try { Z = std::stof(Arguments[3]); }
			catch (...) {}

			auto Pawn = Cast<AFortPlayerPawnAthena>(ReceivingController->Pawn);

			if (!Pawn)
			{
				SendMessageToConsole(PlayerController, L"No pawn to teleport!");
				return;
			}

			Pawn->LaunchCharacter(FVector(X, Y, Z), false, false);
			SendMessageToConsole(PlayerController, L"Launched character!");
		}
		else if (Command == "sethealth")
		{
			auto Pawn = Cast<AFortPlayerPawnAthena>(ReceivingController->Pawn);

			if (!Pawn)
			{
				SendMessageToConsole(PlayerController, L"No pawn!");
				return;
			}

			float Health = 100.f;

			try { Health = std::stof(Arguments[1]); }
			catch (...) {}

			Pawn->SetHealth(Health);
			SendMessageToConsole(PlayerController, L"Set health!\n");
		}
		else if (Command == "setshield")
		{
			auto Pawn = Cast<AFortPlayerPawnAthena>(ReceivingController->Pawn);

			if (!Pawn)
			{
				SendMessageToConsole(PlayerController, L"No pawn!");
				return;
			}

			float Shield = 0.f;

			if (NumArgs >= 1)
			{
				try { Shield = std::stof(Arguments[1]); }
				catch (...) {}
			}

			Pawn->SetShield(Shield);
			SendMessageToConsole(PlayerController, L"Set shield!\n");
		}
		else if (Command == "startsafezone")
		{
			auto GameState = Cast<AFortGameStateAthena>(GetWorld()->GameState);

			UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), L"startsafezone", nullptr/* ReceivingController */);
			// GameState->SafeZonesStartTime = 0; // for now
			// GameState->bAircraftIsLocked = false;
		}
		else if (Command == "demospeedserver")
		{
			if (NumArgs < 1)
			{
				SendMessageToConsole(PlayerController, L"Please provide a WID!");
				return;
			}

			float Speed = 1.f;

			if (NumArgs >= 1)
			{
				try { Speed = std::stof(Arguments[1]); }
				catch (...) {}
			}

			auto WorldSettings = GetFortWorldSettings(GetWorld());
			WorldSettings->DemoPlayTimeDilation = Speed;
			SendMessageToConsole(PlayerController, L"Set demospeed!");
		}
		else if (Command == "setmaxplayers")
		{
			auto GameMode = Cast<AFortGameModeAthena>(GetWorld()->AuthorityGameMode);
			auto GameState = Cast<AFortGameStateAthena>(GetWorld()->GameState);

			if (!GameMode || !GameState)
				return;

			int newMaxPlayers = GameState->CurrentPlaylistInfo.BasePlaylist ? GameState->CurrentPlaylistInfo.BasePlaylist->MaxPlayers : 100;

			if (NumArgs >= 1)
			{
				try { newMaxPlayers = std::stoi(Arguments[1]); }
				catch (...) {}
			}

			GameMode->GameSession->MaxPlayers = newMaxPlayers;
		}
		// else if (Command == "restartserver") { RestartServer(); }
		else if (Command == "help")
		{
			std::wstring Message = LR"(
cheat infiniteammo - Toggles infinite ammo and infinite consumables
cheat buildfree - Toggles material depletion
cheat giveitem <ShortWID> <Count=1> - Gives a weapon to the executing player, if inventory is full drops a pickup on the player.
cheat summon <BlueprintClassPathName> <Count=1>- Summons the specified blueprint class at the executing player's location. Note: There is a limit on the count.
cheat bugitgo <X> <Y> <Z> - Teleport to a location.
cheat sethealth <Health=100.f> - Sets executing player's health.
cheat setshield <Shield=0.f> - Sets executing player's shield.
cheat setmaxplayers <MaxPlayers=PlaylistDefault> - Sets the max players that can join. This will not kick anyone, for ex. 20 people in server, but max is 10.
cheat listplayers - Gives you all players names.
cheat god - Toggles god.
cheat suicide - Kills you.
cheat dbno - Toggles down but not out.
cheat startsafezone - Starts the safe zone.
cheat spawnvolume - Spawns a creative volume at a player.
cheat launch <X> <Y> <Z> - Launches a player.
cheat teleport - Teleports to what the player is looking at.
cheat fly - Enables fly on a player.
cheat ghost - Enables ghost on a player.
cheat setflyspeed <Speed=600.f> - Sets fly speed for a player (VERY BUGGY).
cheat spawnplayset <PlaysetFullPath> - Spawns a playset at a player.
cheat applycid <CIDShortName> - Sets a player's character.
cheat demospeedserver <Speed=1.f> - Sets the server's speed/time dilation.
cheat setpickaxe <ShortPickaxeName> - Changes the player's pickaxe to the new pickaxe.
cheat op \PlayerName\ - Gives operator to this player's ip.
cheat deop \PlayerName\ - Removes operator from this player's ip.

If you want to execute a command on a certain player, surround their name (case sensitive) with \, and put the param anywhere. Example: cheat sethealth \Milxnor\ 100
)";

			/*
			cheat whitelist <on/off> - Turns whitelist on or off.
			cheat addwhitelist <IP> - Adds an IP to the whitelist.
			cheat removewhitelist <IP> - Removes an IP from the whitelist.
			cheat kick <Player> <Reason> - Kicks a player.
			cheat ban <IP/Player> <Reason> - Bans a player.
			cheat pardon <IP> - Unbans a player.
			cheat restartserver - Restarts the server.
			cheat applyge <GameplayEffectClass> <Level=1.0f> - Gives a gameplay effect to executing player.
			cheat freeze - Toggles freeze.
			*/

			SendMessageToConsole(PlayerController, Message.c_str());
		}
		else
		{
			SendMessageToConsole(PlayerController, L"Not a valid command!");
		}
	}
}