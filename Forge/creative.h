#pragma once

#include "framework.h"

#include <fstream>

#include "StringConv.h"
#include "json.hpp"

void LoadIsland(const std::string SaveFileName, AFortVolume* LoadIntoVolume)
{
	auto GameState = Cast<AFortGameStateAthena>(GetWorld()->GameState);

	std::ifstream fileStream(fs::current_path().string() + "\\Islands\\" + SaveFileName + ".save");

	if (!fileStream.is_open())
	{
		// SendMessageToConsole(PlayerController, L"Failed to open filestream (file may not exist)!\n");
		return;
	}

	nlohmann::json j;
	fileStream >> j;

	auto AllBuildingActors = LoadIntoVolume->GetActorsWithinVolumeByClass(ABuildingActor::StaticClass());

	for (int i = 0; i < AllBuildingActors.Num(); i++)
	{
		auto CurrentBuildingActor = (ABuildingActor*)AllBuildingActors[i];
		CurrentBuildingActor->SilentDie();
	}

	auto VolumeLocation = LoadIntoVolume->K2_GetActorLocation();
	auto VolumeRotation = LoadIntoVolume->K2_GetActorRotation();

	for (const auto& obj : j) {
		for (auto it = obj.begin(); it != obj.end(); ++it) {
			auto& ClassName = it.key();
			auto Class = UObject::FindObject<UClass>(ClassName);

			if (!Class)
			{
				std::cout << "Invalid Class!\n";
				continue;
			}

			std::vector<float> stuff;

			auto& value = it.value();

			std::vector<std::string> DevicePropertiesStr;

			if (value.is_array()) {
				for (const auto& elem : value) {
					if (!elem.is_array())
					{
						stuff.push_back(elem);
					}
					else // Device Properties
					{
						for (const auto& elem2 : elem) {
							for (auto it2 = elem2.begin(); it2 != elem2.end(); ++it2) {
								auto& value2z = it2.value();
								DevicePropertiesStr.push_back(value2z);
							}
						}
					}
				}
			}
			else {

			}

			// std::cout << "stuff.size(): " << stuff.size() << '\n';

			if (stuff.size() >= 8)
			{
				FRotator rot{};
				rot.Pitch = stuff[3] + VolumeRotation.Pitch;
				rot.Roll = stuff[4] + VolumeRotation.Roll;
				rot.Yaw = stuff[5] + VolumeRotation.Yaw;

				FVector Scale3D = { 1, 1, 1 };

				if (stuff.size() >= 11)
				{
					Scale3D.X = stuff[8];
					Scale3D.Y = stuff[9];
					Scale3D.Z = stuff[10];
				}

				auto NewActor = GetWorld()->SpawnActor<ABuildingActor>(FVector{ stuff[0] + VolumeLocation.X , stuff[1] + VolumeLocation.Y, stuff[2] + VolumeLocation.Z },
					rot, Class, Scale3D);

				if (!NewActor)
					continue;

				// NewActor->bCanBeDamaged = false;
				NewActor->InitializeKismetSpawnedBuildingActor(NewActor, nullptr, false);
				NewActor->TeamIndex = stuff[6];
				// NewActor->SetHealth(stuff[7]);

				auto ActorOptionsComponent = (UFortActorOptionsComponent*)NewActor->GetComponentByClass(UFortActorOptionsComponent::StaticClass());

				continue;

				if (ActorOptionsComponent)
				{
					// UE::TMap<FString, FString> Map{};

					std::cout << "DevicePropertiesStr.size(): " << DevicePropertiesStr.size() << '\n';
					std::cout << "ActorOptionsComponent->PlayerOptionData.PropertyOverrides.Num(): " << ActorOptionsComponent->PlayerOptionData.PropertyOverrides.Num() << '\n';

					for (int kl = 0; kl < DevicePropertiesStr.size(); kl += 2)
					{
						if (kl + 1 >= DevicePropertiesStr.size())
							break;

						auto PropertyName = DevicePropertiesStr[kl];
						auto PropertyData = DevicePropertiesStr[kl + 1];

						auto PropertyNameWStr = string_towstring(PropertyName);
						auto PropertyDataWStr = string_towstring(PropertyData);

						FPropertyOverrideMk2 OverrideSkidda;
						OverrideSkidda.PropertyName = PropertyNameWStr.c_str();
							// std::wstring(PropertyName.begin(), PropertyName.end()).c_str();
						OverrideSkidda.PropertyData = PropertyDataWStr.c_str();
							// std::wstring(PropertyData.begin(), PropertyData.end()).c_str();

						std::wcout << L"[" + PropertyNameWStr + L"] " + PropertyDataWStr << '\n';

						if (!OverrideSkidda.PropertyData.IsEmpty() && !OverrideSkidda.PropertyName.IsEmpty())
						{
							// Map.AddSingle({ OverrideSkidda.PropertyName, OverrideSkidda.PropertyData });
							ActorOptionsComponent->PlayerOptionData.PropertyOverrides.Add(OverrideSkidda);

							if (GameState->ReplOverrideData)
							{
								FPropertyOverrideRepl ReplOverride{-1, -1, -1};
								ReplOverride.PropertyScopedName = ReplOverride.PropertyScopedName;
								ReplOverride.PropertyData = OverrideSkidda.PropertyData;
								GameState->ReplOverrideData->ReplOverrides.PropertyOverridesRepl.Add(ReplOverride);
							}
						}
					}

					std::cout << "\n\n";

					// ActorOptionsComponent->SetPropertyOverrides(*(TMap<FString, FString>*)&Map);
					// ActorOptionsComponent->SetPropertyOverrideValues(*(TMap<FString, FString>*)&Map); // stripped

					/* TMap<FString, FString> Fstring;
					auto test = ActorOptionsComponent->GetPropertyOverrides(&Fstring);

					for (auto& string : *(UE::TMap<FString, FString>*)&Fstring)
					{
						std::cout << std::format("[{}] {}\n", string.Key().ToString(), string.Value().ToString());
					} */

					ActorOptionsComponent->OnRep_PlayerOptionData();
				}
			}
		}
	}

	/* std::cout << "GameState->ReplOverrideData: " << GameState->ReplOverrideData << '\n';

	if (GameState->ReplOverrideData)
	{
		GameState->ReplOverrideData->OnRep_ReplOverrides();
		GameState->ReplOverrideData->ReplOverrides.MarkArrayDirty();
	} */
}