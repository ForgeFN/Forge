#pragma once

#include "inventory.h"

#include <algorithm>
#include <vector>
#include <format>

bool IsOperator(APlayerState* PlayerState)
{
	auto IP = PlayerState->SavedNetworkAddress;
}

void ServerCheatHook(AFortPlayerControllerAthena* PlayerController, FString Msg)
{
	auto PlayerState = Cast<AFortPlayerStateAthena>(PlayerController->PlayerState);

	if (!PlayerState) // || !IsOperator(PlayerState))
		return;

	std::vector<std::string> Arguments;
	auto OldMsg = Msg.ToString();

	auto ReceivingController = PlayerController; // for now
	auto ReceivingPlayerState = PlayerState; // for now

	auto firstBackslash = OldMsg.find_first_of("\\");
	auto lastBackslash = OldMsg.find_last_of("\\");

	if (firstBackslash != lastBackslash && firstBackslash != std::string::npos && lastBackslash != std::string::npos) // we want to specify a player
	{
		std::string player = OldMsg;

		player = player.substr(firstBackslash + 1, lastBackslash - firstBackslash - 1);

		auto& ClientConnections = GetWorld()->NetDriver->ClientConnections;

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

		std::cout << "Message Before: " << Message << '\n';

		while (Message.find(" ") != -1)
		{
			auto arg = Message.substr(0, Message.find(' '));
			Arguments.push_back(arg);
			std::cout << std::format("[{}] {}\n", zz, arg);
			Message.erase(0, Message.find(' ') + 1);
			zz++;
		}

		// if (zz == 0)
		{
			Arguments.push_back(Message);
			std::cout << std::format("[{}] {}\n", zz, Message);
			zz++;
		}

		std::cout << "Message After: " << Message << '\n';
	}

	auto NumArgs = Arguments.size() == 0 ? 0 : Arguments.size() - 1;

	std::cout << "NumArgs: " << NumArgs << '\n';

	if (Arguments.size() >= 1)
	{
		auto& Command = Arguments[0];
		std::transform(Command.begin(), Command.end(), Command.begin(), ::tolower);

		if (Command == "giveitem")
		{
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
				if (IsInventoryFull(ReceivingController))
				{
					auto Pawn = Cast<AFortPlayerPawnAthena>(ReceivingController->Pawn);

					if (!Pawn)
					{
						SendMessageToConsole(PlayerController, L"No pawn to spawn weapon at!");
						return;
					}

					SpawnPickup(WID, Pawn->K2_GetActorLocation(), count);
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

			constexpr int Max = 5;

			if (Count > Max)
			{
				SendMessageToConsole(PlayerController, (std::wstring(L"You went over the limit! Only spawning ") + std::to_wstring(Max) + L".").c_str());
				Count = Max;
			}

			auto ClassObj = UObject::FindObject<UClass>(ClassName);

			if (ClassObj)
			{
				for (int i = 0; i < Count; i++)
				{
					GetWorld()->SpawnActor<AActor>(Pawn->K2_GetActorLocation(), FRotator(), ClassObj);
				}
			}
			else
			{
				SendMessageToConsole(PlayerController, L"Not a valid class!");
			}
		}
		else if (Command == "suicide")
		{
			ServerSuicideHook(ReceivingController);
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
		else if (Command == "applyge")
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
		}
		else if (Command == "freeze")
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
		}
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

			try { Shield = std::stof(Arguments[1]); }
			catch (...) {}

			Pawn->SetShield(Shield);
			SendMessageToConsole(PlayerController, L"Set shield!\n");
		}
		else if (Command == "setmaxplayers")
		{
			auto GameMode = Cast<AFortGameModeAthena>(GetWorld()->AuthorityGameMode);
			auto GameState = Cast<AFortGameStateAthena>(GetWorld()->GameState);

			if (!GameMode || !GameState)
				return;

			int newMaxPlayers = GameState->CurrentPlaylistInfo.BasePlaylist ? GameState->CurrentPlaylistInfo.BasePlaylist->MaxPlayers : 100;

			try { newMaxPlayers = std::stoi(Arguments[1]); }
			catch (...) {}

			GameMode->GameSession->MaxPlayers = newMaxPlayers;
		}
		// else if (Command == "restartserver") { RestartServer(); }
		else if (Command == "help")
		{
			std::wstring Message = LR"(
cheat god - Toggles god
cheat infiniteammo - Toggles infinite ammo and infinite consumables
cheat buildfree - Toggles material depletion
cheat giveitem <ShortWID> <Count=1> - Gives a weapon to the executing player, if inventory is full drops a pickup on the player.
cheat summon <BlueprintClassPathName> <Count=1>- Summons the specified blueprint class at the executing player's location. Note: There is a limit on the count.
cheat bugitgo <X> <Y> <Z> - Teleport to a location.
cheat sethealth <Health=100.f> - Sets executing player's health.
cheat setshield <Shield=0.f> - Sets executing player's shield.
cheat setmaxplayers <MaxPlayers=PlaylistDefault> - Sets the max players that can join. This will not kick anyone, for ex. 20 people in server, but max is 10.
cheat applyge <GameplayEffectClass> <Level=1.0f> - Gives a gameplay effect to executing player.
cheat freeze - Toggles freeze.
cheat listplayers - Gives you all players names.
cheat suicide - Kills you.

If you want to execute a command on a certain player, surround their name (case sensitive) with \, and put the param anywhere. Example: cheat sethealth \Milxnor\ 100
)";

			/*
			cheat op <IP> - Gives operator to players with this IP.
			cheat deop <IP> - Deletes operator from players.
			cheat whitelist <on/off> - Turns whitelist on or off.
			cheat addwhitelist <IP> - Adds an IP to the whitelist.
			cheat removewhitelist <IP> - Removes an IP from the whitelist.
			cheat kick <Player> <Reason> - Kicks a player.
			cheat ban <IP/Player> <Reason> - Bans a player.
			cheat pardon <IP> - Unbans a player.
			cheat restartserver - Restarts the server.
			*/

			SendMessageToConsole(PlayerController, Message.c_str());
		}
	}
}