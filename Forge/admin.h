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
	{
		auto Message = Msg.ToString();

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

		auto ReceivingController = PlayerController; // for now
		auto ReceivingPlayerState = PlayerState; // for now

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
				FGameplayEffectSpecHandle EffectHandle = ReceivingPlayerState->AbilitySystemComponent->MakeOutgoingSpec(GEObj, Level, FGameplayEffectContextHandle());
				ReceivingPlayerState->AbilitySystemComponent->BP_ApplyGameplayEffectSpecToTarget(EffectHandle, ReceivingPlayerState->AbilitySystemComponent);
			}
			else
			{
				SendMessageToConsole(PlayerController, L"Please provide a valid gameplay effect class!\n");
			}
		} */
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
			cheat applyge <GameplayEffectClass> <Level=1.0f> - Gives a gameplay effect to executing player.
			cheat restartserver - Restarts the server.
			*/

			SendMessageToConsole(PlayerController, Message.c_str());
		}
	}
}