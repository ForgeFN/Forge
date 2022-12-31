#pragma once

#include "framework.h"

static FFortItemEntry* FindReplicatedEntry(AFortPlayerControllerAthena* PlayerController, const FGuid& Item)
{
	for (int i = 0; i < PlayerController->WorldInventory->Inventory.ReplicatedEntries.Num(); i++)
	{
		if (PlayerController->WorldInventory->Inventory.ReplicatedEntries[i].ItemGuid == Item)
			return PlayerController->WorldInventory->Inventory.ReplicatedEntries.GetRef(i);
	}

	return nullptr;
}

static FFortItemEntry* FindReplicatedEntry(AFortPlayerControllerAthena* PlayerController, UFortItemDefinition* ItemDef)
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

static void Update(AFortPlayerControllerAthena* PlayerController)
{
	if (PlayerController->WorldInventory)
	{
		PlayerController->WorldInventory->HandleInventoryLocalUpdate();
		PlayerController->WorldInventory->Inventory.MarkArrayDirty();
	}
}

static UFortWorldItem* FindItemInstance(AFortPlayerControllerAthena* PlayerController, UFortItemDefinition* ItemDef)
{
    if (!PlayerController->WorldInventory)
        return nullptr;

    for (int i = 0; i < PlayerController->WorldInventory->Inventory.ItemInstances.Num(); i++)
    {
        auto ItemInstance = PlayerController->WorldInventory->Inventory.ItemInstances[i];

        if (ItemInstance && ItemInstance->ItemEntry.ItemDefinition == ItemDef)
            return ItemInstance;
    }

    return nullptr;
}


static UFortWorldItem* FindItemInstance(AFortPlayerControllerAthena* PlayerController, const FGuid& Item)
{
    if (!PlayerController->WorldInventory)
        return nullptr;

    for (int i = 0; i < PlayerController->WorldInventory->Inventory.ItemInstances.Num(); i++)
    {
        auto ItemInstance = PlayerController->WorldInventory->Inventory.ItemInstances[i];

        if (ItemInstance && ItemInstance->ItemEntry.ItemGuid == Item)
            return ItemInstance;
    }

    return nullptr;
}

static void RemoveItem(AFortPlayerControllerAthena* PlayerController, FGuid Item, int Count)
{
    if (!PlayerController || !PlayerController->WorldInventory)
        return;

    auto ItemInstance = FindItemInstance(PlayerController, Item);
    auto ReplicatedEntry = FindReplicatedEntry(PlayerController, Item);
    auto ReplicatedEntries = &PlayerController->WorldInventory->Inventory.ReplicatedEntries;
    auto ItemInstances = &PlayerController->WorldInventory->Inventory.ItemInstances;

    if (ItemInstance && ReplicatedEntry)
    {
        auto NewCount = ReplicatedEntry->Count - Count;

        if (NewCount > 0)
        {
            ItemInstance->ItemEntry.Count = NewCount;
            ReplicatedEntry->Count = NewCount;

            PlayerController->WorldInventory->Inventory.MarkItemDirty(ItemInstance->ItemEntry);
            PlayerController->WorldInventory->Inventory.MarkItemDirty(*ReplicatedEntry);
        }
        else
        {
            for (int i = 0; i < ItemInstances->Num(); i++)
            {
                auto ItemInstance = ItemInstances->operator[](i);

                if (!ItemInstance)
                    continue;

                auto CurrentGuid = ItemInstance->GetItemGuid();

                if (CurrentGuid == Item)
                {
                    ItemInstances->Remove(i);
                    break;
                }
            }

            for (int i = 0; i < ReplicatedEntries->Num(); i++)
            {
                auto& Entry = ReplicatedEntries->operator[](i);
                auto CurrentGuid = Entry.ItemGuid;

                if (CurrentGuid == Item)
                {
                    ReplicatedEntries->Remove(i);
                    break;
                }
            }
        }
    }
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

static UFortWorldItem* GiveItem(AFortPlayerControllerAthena* PlayerController, UFortItemDefinition* ItemDef, int Count, int LoadedAmmo = -1, bool bAddToStateValues = false)
{
    if (LoadedAmmo == -1)
    {
        if (auto WeaponDef = Cast<UFortWeaponItemDefinition>(ItemDef))
            LoadedAmmo = GetClipSize(WeaponDef);
    }

    bool bAllowMultipleStacks = ItemDef->bAllowMultipleStacks;

    auto MaxStackSize = ItemDef->MaxStackSize;

    auto& ItemInstances = PlayerController->WorldInventory->Inventory.ItemInstances;

    UFortWorldItem* StackingItemInstance = nullptr;
    int OverStack = 0;

    if (MaxStackSize > 1)
    {
        for (int i = 0; i < ItemInstances.Num(); i++)
        {
            auto CurrentItemInstance = ItemInstances[i];
            auto CurrentEntry = CurrentItemInstance->ItemEntry;

            if (CurrentEntry.ItemDefinition == ItemDef)
            {
                if (CurrentEntry.Count < MaxStackSize)
                {
                    StackingItemInstance = CurrentItemInstance;

                    OverStack = CurrentEntry.Count + Count - MaxStackSize;

                    int AmountToStack = OverStack > 0 ? Count - OverStack : Count;

                    auto ReplicatedEntry = FindReplicatedEntry(PlayerController, CurrentEntry.ItemGuid);

                    CurrentEntry.Count += AmountToStack;
                    ReplicatedEntry->Count += AmountToStack;

                    PlayerController->WorldInventory->Inventory.MarkItemDirty(*ReplicatedEntry);
                    PlayerController->WorldInventory->Inventory.MarkItemDirty(CurrentEntry);

                    if (OverStack <= 0)
                        return StackingItemInstance;

                    break;
                }
            }
        }
    }

    if (!bAllowMultipleStacks && StackingItemInstance)
        return nullptr;

	UFortWorldItem* ItemInstance = nullptr;

	ItemInstance = Cast<UFortWorldItem>(ItemDef->CreateTemporaryItemInstanceBP(Count, 1));

	if (ItemInstance)
	{
        if (bAddToStateValues)
        {
            FFortItemEntryStateValue StateValue;
            StateValue.IntValue = 1;
            StateValue.StateType = EFortItemEntryState::ShouldShowItemToast;

            ItemInstance->ItemEntry.StateValues.Add(StateValue);
        }

		ItemInstance->ItemEntry.Count = Count;
		ItemInstance->ItemEntry.LoadedAmmo = LoadedAmmo;
		ItemInstance->SetOwningControllerForTemporaryItem(PlayerController);

		ItemInstances.Add(ItemInstance);
		auto& ReplicatedEntry = PlayerController->WorldInventory->Inventory.ReplicatedEntries.Add(ItemInstance->ItemEntry);
        ReplicatedEntry.LoadedAmmo = LoadedAmmo;
	}

	return ItemInstance;
}

static FFortLootTierData* GetLootTierData(std::vector<FFortLootTierData*>& LootTierData)
{
    float TotalWeight = 0;

    for (auto Item : LootTierData)
        TotalWeight += Item->Weight;

    float RandomNumber = UKismetMathLibrary::RandomFloatInRange(0, TotalWeight); // is -1 needed?

    FFortLootTierData* SelectedItem = nullptr;

    for (auto Item : LootTierData)
    {
        if (RandomNumber <= Item->Weight)
        {
            SelectedItem = Item;
            break;
        }

        RandomNumber = RandomNumber - Item->Weight;
    }

    if (!SelectedItem)
        return GetLootTierData(LootTierData);

    return SelectedItem;
}

static FFortLootPackageData* GetLootPackage(std::vector<FFortLootPackageData*>& LootPackages)
{
    float TotalWeight = 0;

    for (auto Item : LootPackages)
        TotalWeight += Item->Weight;

    float RandomNumber = UKismetMathLibrary::RandomFloatInRange(0, TotalWeight); // is -1 needed?

    FFortLootPackageData* SelectedItem = nullptr;

    for (auto Item : LootPackages)
    {
        if (RandomNumber <= Item->Weight)
        {
            SelectedItem = Item;
            break;
        }

        RandomNumber = RandomNumber - Item->Weight;
    }

    if (!SelectedItem)
        return GetLootPackage(LootPackages);

    return SelectedItem;
}

std::vector<FFortItemEntry> PickLootDrops(FName TierGroupName)
{
	/* /auto TierGroupNameWStr = std::wstring(TierGroupName.begin(), TierGroupName.end());
	auto TierGroupNameWCStr = TierGroupNameWStr.c_str();
	FString TierGroupNameFStr = TierGroupNameWCStr; */
    auto TierGroupFName = TierGroupName; // UKismetStringLibrary::StaticClass()->CreateDefaultObject< UKismetStringLibrary>()->Conv_StringToName(TierGroupNameFStr);

    static auto LTD = Cast<AFortGameStateAthena>(GetWorld()->GameState)->CurrentPlaylistInfo.BasePlaylist->LootTierData.Get();
    static UDataTable* LP = Cast<AFortGameStateAthena>(GetWorld()->GameState)->CurrentPlaylistInfo.BasePlaylist->LootPackages.Get();

    if (!LTD)
        LTD = UObject::FindObject<UDataTable>("/Game/Items/Datatables/AthenaLootTierData_Client.AthenaLootTierData_Client");

    if (!LP)
        LP = UObject::FindObject<UDataTable>("/Game/Items/Datatables/AthenaLootPackages_Client.AthenaLootPackages_Client");

    auto& LTDRowMap = LTD->RowMap;

    std::vector<FFortItemEntry> LootDrops;
    std::vector<FFortLootTierData*> TierGroupLTDs;

    auto LTDRowMapNum = LTDRowMap.Pairs.Elements.Num();

    auto TierGroupNameStr = TierGroupName.ToString();

    for (int i = 0; i < LTDRowMapNum; i++)
    {
        auto& CurrentLTD = LTDRowMap.Pairs.Elements[i].ElementData.Value;
        auto TierData = (FFortLootTierData*)CurrentLTD.Value();

        auto TierDataGroupStr = TierData->TierGroup.ToString();

        // std::cout << "TierData->TierGroup.ToString(): " << TierDataGroupStr << '\n';

        if (TierDataGroupStr == TierGroupNameStr && TierData->Weight != 0)
        {
            TierGroupLTDs.push_back(TierData);
        }
    }

    if (TierGroupLTDs.size() == 0)
    {
        std::cout << "Failed to find any LTD for: " << TierGroupName.ToString() << '\n';
        return LootDrops;
    }

    FFortLootTierData* ChosenRowLootTierData = GetLootTierData(TierGroupLTDs);

    if (!ChosenRowLootTierData)
        return LootDrops;

    float NumLootPackageDrops = ChosenRowLootTierData->NumLootPackageDrops;

    /* for (int i = 0; i < ChosenRowLootTierData->LootPackageCategoryWeightArray.Num(); i++)
    {
        if (ChosenRowLootTierData->LootPackageCategoryWeightArray[i] > 0)
            NumLootPackageDrops++;
    } */

    auto& LPRowMap = LP->RowMap;

    std::vector<FFortLootPackageData*> TierGroupLPs;

    for (int i = 0; i < LPRowMap.Pairs.Elements.Num(); i++)
    {
        auto& CurrentLP = LPRowMap.Pairs.Elements[i].ElementData.Value;
        auto LootPackage = (FFortLootPackageData*)CurrentLP.Value();

        if (!LootPackage)
            continue;

        if (LootPackage->LootPackageID == ChosenRowLootTierData->LootPackage && LootPackage->Weight != 0)
        {
            TierGroupLPs.push_back(LootPackage);
        }
    }

    bool bIsWorldList = ChosenRowLootTierData->LootPackage.ToString().contains("WorldList");

    LootDrops.reserve(NumLootPackageDrops);

    for (int i = 0; i < NumLootPackageDrops; i++)
    {
        if (i >= TierGroupLPs.size())
            break;

        auto TierGroupLP = TierGroupLPs.at(i);
        auto TierGroupLPStr = TierGroupLP->LootPackageCall.ToString();

        std::vector<FFortLootPackageData*> lootPackageCalls;

        for (int j = 0; j < LPRowMap.Pairs.Elements.Num(); j++)
        {
            auto& CurrentLP = LPRowMap.Pairs.Elements[j].ElementData.Value;

            if (bIsWorldList)
            {
                auto LootPackage = (FFortLootPackageData*)CurrentLP.Value();

                lootPackageCalls.push_back(LootPackage);
            }
            else
            {
                auto LootPackage = (FFortLootPackageData*)CurrentLP.Value();

                if (LootPackage->LootPackageID.ToString() == TierGroupLPStr && LootPackage->Weight != 0)
                {
                    lootPackageCalls.push_back(LootPackage);
                }
            }
        }

        if (lootPackageCalls.size() == 0)
            continue;

        FFortLootPackageData* LootPackageCall = GetLootPackage(lootPackageCalls);

        if (!LootPackageCall)
            continue;

        auto ItemDef = LootPackageCall->ItemDefinition.Get();

        if (!ItemDef)
            continue;

        FFortItemEntry LootDropEntry{};

        LootDropEntry.ItemDefinition = ItemDef;
        LootDropEntry.LoadedAmmo = GetClipSize(Cast<UFortWeaponItemDefinition>(ItemDef));
        LootDropEntry.Count = LootPackageCall->Count;

        LootDrops.push_back(LootDropEntry);
    }

    return LootDrops;
}

static AFortPickupAthena* SpawnPickup(FFortItemEntry ItemEntry, FVector Location, EFortPickupSourceTypeFlag PickupSource = EFortPickupSourceTypeFlag::Other, EFortPickupSpawnSource SpawnSource = EFortPickupSpawnSource::Unset)
{
    auto Pickup = SpawnPickup(ItemEntry.ItemDefinition, Location, ItemEntry.Count, PickupSource, SpawnSource, ItemEntry.LoadedAmmo);
    return Pickup;
}

static bool IsPrimaryQuickbar(UFortItemDefinition* ItemDefinition)
{
    if (!ItemDefinition->IsA(UFortWeaponMeleeItemDefinition::StaticClass()) && !ItemDefinition->IsA(UFortBuildingItemDefinition::StaticClass()) && !ItemDefinition->IsA(UFortAmmoItemDefinition::StaticClass()) && !ItemDefinition->IsA(UFortResourceItemDefinition::StaticClass()) && !ItemDefinition->IsA(UFortTrapItemDefinition::StaticClass()))
        return true;

    return false;
}

static bool IsInventoryFull(AFortPlayerControllerAthena* PlayerController, int Start = 0)
{
    int ItemCounts = Start;

    auto ItemInstances = &PlayerController->WorldInventory->Inventory.ItemInstances;

    for (int i = 0; i < ItemInstances->Num(); i++)
    {
        auto ItemInstance = ItemInstances->operator[](i);

        if (!ItemInstance)
            continue;

        auto ItemDefinition = ItemInstance->ItemEntry.ItemDefinition;

        if (IsPrimaryQuickbar(ItemDefinition))
            ItemCounts++;
    }

    return ItemCounts >= 6;
}