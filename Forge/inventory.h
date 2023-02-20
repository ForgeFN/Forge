#pragma once

#include "framework.h"

static FFortItemEntry* FindReplicatedEntry(AFortPlayerController* PlayerController, const FGuid& Item)
{
	for (int i = 0; i < PlayerController->WorldInventory->Inventory.ReplicatedEntries.Num(); i++)
	{
		if (PlayerController->WorldInventory->Inventory.ReplicatedEntries[i].ItemGuid == Item)
			return PlayerController->WorldInventory->Inventory.ReplicatedEntries.GetRef(i);
	}

	return nullptr;
}


static AFortPickupAthena* SpawnPickup(FFortItemEntry ItemEntry, FVector Location, EFortPickupSourceTypeFlag PickupSource = EFortPickupSourceTypeFlag::Other, EFortPickupSpawnSource SpawnSource = EFortPickupSpawnSource::Unset, AFortPawn* Pawn = nullptr)
{
    auto Pickup = SpawnPickup(ItemEntry.ItemDefinition, Location, ItemEntry.Count, PickupSource, SpawnSource, ItemEntry.LoadedAmmo, Pawn);
    return Pickup;
}

static void Update(AFortPlayerController* PlayerController, bool bMarkArrayDirty = true)
{
	if (PlayerController->WorldInventory)
	{
		PlayerController->WorldInventory->HandleInventoryLocalUpdate(); // is this only needed for adding items?

        if (bMarkArrayDirty)
		    PlayerController->WorldInventory->Inventory.MarkArrayDirty();
	}
}

static UFortWorldItem* FindItemInstance(AFortPlayerController* PlayerController, UFortItemDefinition* ItemDef)
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


static UFortWorldItem* FindItemInstance(AFortPlayerController* PlayerController, const FGuid& Item)
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

static void RemoveItem(AFortPlayerController* PlayerController, FGuid Item, int Count, bool bFromReload = false, bool* bShouldUpdate = nullptr)
{
    if (!PlayerController || !PlayerController->WorldInventory)
        return;

    if (bShouldUpdate)
        *bShouldUpdate = false;

    auto ItemInstance = FindItemInstance(PlayerController, Item);
    auto ReplicatedEntry = FindReplicatedEntry(PlayerController, Item);
    auto ReplicatedEntries = &PlayerController->WorldInventory->Inventory.ReplicatedEntries;
    auto ItemInstances = &PlayerController->WorldInventory->Inventory.ItemInstances;

    if (ItemInstance && ReplicatedEntry)
    {
        auto NewCount = ReplicatedEntry->Count - Count;
        auto ItemDefinition = Cast<UFortWorldItemDefinition>(ReplicatedEntry->ItemDefinition);

        if (NewCount > 0 || (ItemDefinition && ItemDefinition->bPersistInInventoryWhenFinalStackEmpty && bFromReload))
        {
            if (ItemDefinition && ItemDefinition->bPersistInInventoryWhenFinalStackEmpty && bFromReload)
                NewCount = NewCount < 0 ? 0 : NewCount;

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

                auto CurrentGuid = ItemInstance->ItemEntry.ItemGuid;

                if (CurrentGuid == Item)
                {
                    ItemInstance->ItemEntry.StateValues.Free();
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
                    Entry.StateValues.Free();
                    ReplicatedEntries->Remove(i);
                    break;
                }
            }

            auto Pawn = PlayerController->MyFortPawn;

            if (Pawn)
            {
                for (int i = 0; i < Pawn->CurrentWeaponList.Num(); i++)
                {
                    auto CurrentWeaponInList = Pawn->CurrentWeaponList[i];

                    if (CurrentWeaponInList->ItemEntryGuid == Item)
                    {
                        CurrentWeaponInList->K2_DestroyActor(); // ?
                        Pawn->CurrentWeaponList.Remove(i);
                        // break;
                    }
                }
            }

            if (bShouldUpdate)
                *bShouldUpdate = true;
        }
    }
}

static bool RemoveItem(AFortPlayerController* PlayerController, UFortItemDefinition* ItemDefinition, int Count = 1, bool* bShouldUpdate = nullptr)
{
    auto ItemInstance = FindItemInstance(PlayerController, ItemDefinition);

    if (!ItemInstance)
        return false;

    RemoveItem(PlayerController, ItemInstance->ItemEntry.ItemGuid, Count, bShouldUpdate);

    return true;
}

void ModifyCount(AFortPlayerController* PlayerController, UFortWorldItem* ItemInstance, int New, bool bRemove = false, std::pair<FFortItemEntry*, FFortItemEntry*>* outEntries = nullptr, bool bUpdate = true)
{
    auto ReplicatedEntry = FindReplicatedEntry(PlayerController, ItemInstance->ItemEntry.ItemGuid);

    if (!ReplicatedEntry)
        return;

    if (!bRemove)
    {
        ItemInstance->ItemEntry.Count += New;
        ReplicatedEntry->Count += New;
    }
    else
    {
        ItemInstance->ItemEntry.Count -= New;
        ReplicatedEntry->Count -= New;
    }

    if (outEntries)
        *outEntries = { &ItemInstance->ItemEntry, ReplicatedEntry };

    if (bUpdate || !outEntries)
    {
        PlayerController->WorldInventory->Inventory.MarkItemDirty(ItemInstance->ItemEntry);
        PlayerController->WorldInventory->Inventory.MarkItemDirty(*ReplicatedEntry);
    }

}

UFortWorldItem* CreateAndGiveItem(AFortPlayerController* PlayerController, UFortItemDefinition* ItemDef, int Count, int LoadedAmmo = -1, bool bAddToStateValues = false, bool* outUpdate = nullptr)
{
    if (outUpdate)
        *outUpdate = false;

    UFortWorldItem* ItemInstance = Cast<UFortWorldItem>(ItemDef->CreateTemporaryItemInstanceBP(Count, 1));

    if (!ItemInstance)
        return nullptr;

    if (LoadedAmmo < 0)
    {
        if (auto WeaponDef = Cast<UFortWeaponItemDefinition>(ItemDef))
            LoadedAmmo = GetClipSize(WeaponDef);
        else
            LoadedAmmo = 0;
    }

    auto& ItemInstances = PlayerController->WorldInventory->Inventory.ItemInstances;

    ItemInstance->ItemEntry.Count = Count;
    ItemInstance->ItemEntry.LoadedAmmo = LoadedAmmo;
    ItemInstance->SetOwningControllerForTemporaryItem(PlayerController);

    if (bAddToStateValues)
    {
        FFortItemEntryStateValue StateValue;
        StateValue.IntValue = 1;
        StateValue.StateType = EFortItemEntryState::ShouldShowItemToast;

        ItemInstance->ItemEntry.StateValues.Add(StateValue);
    }

    ItemInstances.Add(ItemInstance);
    auto& ReplicatedEntry = PlayerController->WorldInventory->Inventory.ReplicatedEntries.Add(ItemInstance->ItemEntry);
    ReplicatedEntry.LoadedAmmo = LoadedAmmo;

    if (outUpdate)
        *outUpdate = true;

    return ItemInstance;
}

static UFortWorldItem* GiveItem(AFortPlayerController* PlayerController, UFortItemDefinition* ItemDef, int Count, int LoadedAmmo = -1, bool bAddToStateValues = false, bool* bShouldUpdate = nullptr)
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

    if (bShouldUpdate)
        *bShouldUpdate = false;

    // bAddToStateValues = false;

    if (MaxStackSize > 1)
    {
        for (int i = 0; i < ItemInstances.Num(); i++)
        {
            auto CurrentItemInstance = ItemInstances[i];
            auto& CurrentEntry = CurrentItemInstance->ItemEntry;

            if (CurrentEntry.ItemDefinition == ItemDef)
            {
                if (CurrentEntry.Count < MaxStackSize || !bAllowMultipleStacks)
                {
                    StackingItemInstance = CurrentItemInstance;

                    OverStack = CurrentEntry.Count + Count - MaxStackSize;

                    if (!bAllowMultipleStacks && !(CurrentEntry.Count < MaxStackSize))
                    {
                        break;
                    }

                    int AmountToStack = OverStack > 0 ? Count - OverStack : Count;

                    auto ReplicatedEntry = FindReplicatedEntry(PlayerController, CurrentEntry.ItemGuid);

                    CurrentEntry.Count += AmountToStack;
                    ReplicatedEntry->Count += AmountToStack;

                    std::cout << std::format("{} : {} : {}\n", CurrentEntry.Count, ReplicatedEntry->Count, OverStack);

                    if (bAddToStateValues)
                    {
                        FFortItemEntryStateValue StateValue;
                        StateValue.IntValue = 1;
                        StateValue.StateType = EFortItemEntryState::ShouldShowItemToast;

                        CurrentEntry.StateValues.Add(StateValue);
                        ReplicatedEntry->StateValues.Add(StateValue);
                    }
                    else
                    {
                        // CurrentEntry.StateValues.FreeBAD();
                        // ReplicatedEntry->StateValues.FreeBAD();
                    }

                    PlayerController->WorldInventory->Inventory.MarkItemDirty(CurrentEntry);
                    PlayerController->WorldInventory->Inventory.MarkItemDirty(*ReplicatedEntry);

                    if (OverStack <= 0)
                        return StackingItemInstance;

                    // break;
                }
            }
        }
    }

    // if (!bAllowMultipleStacks && StackingItemInstance)
       // return nullptr;

    Count = OverStack > 0 ? OverStack : Count;

    if (OverStack > 0 && !ItemDef->bAllowMultipleStacks)
    {
        auto Pawn = PlayerController->MyFortPawn;

        if (!Pawn)
            return nullptr;

        FFortItemEntry itemEntry;
        itemEntry.Count = Count;
        itemEntry.ItemDefinition = ItemDef;

        SpawnPickup(itemEntry, Pawn->K2_GetActorLocation(), EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, Pawn);
        return nullptr;
    }

    std::cout << std::format("Creating new item for: {} OverStack: {} AllowMultipleStacks: {}\n", ItemDef->GetFullName(), OverStack, (int)ItemDef->bAllowMultipleStacks);

	UFortWorldItem* ItemInstance = CreateAndGiveItem(PlayerController, ItemDef, Count, LoadedAmmo, bAddToStateValues, bShouldUpdate);

	/* ItemInstance = Cast<UFortWorldItem>(ItemDef->CreateTemporaryItemInstanceBP(Count, 1));

	if (ItemInstance)
	{
		ItemInstance->ItemEntry.Count = Count;
		ItemInstance->ItemEntry.LoadedAmmo = LoadedAmmo;
		ItemInstance->SetOwningControllerForTemporaryItem(PlayerController);

        if (bAddToStateValues)
        {
            FFortItemEntryStateValue StateValue;
            StateValue.IntValue = 1;
            StateValue.StateType = EFortItemEntryState::ShouldShowItemToast;

            ItemInstance->ItemEntry.StateValues.Add(StateValue);
        }

		ItemInstances.Add(ItemInstance);
		auto& ReplicatedEntry = PlayerController->WorldInventory->Inventory.ReplicatedEntries.Add(ItemInstance->ItemEntry);
        ReplicatedEntry.LoadedAmmo = LoadedAmmo;

        if (bShouldUpdate)
            *bShouldUpdate = true;
	} */

	return ItemInstance;
}

static FFortLootTierData* GetLootTierData(std::vector<FFortLootTierData*>& LootTierData, bool bPrint = false)
{
    float TotalWeight = 0;

    for (auto Item : LootTierData)
        TotalWeight += Item->Weight;

    float RandomNumber = UKismetMathLibrary::RandomFloatInRange(0, TotalWeight); // is -1 needed?

    FFortLootTierData* SelectedItem = nullptr;

    if (bPrint)
    {
        std::cout << std::format("TotalWeight: {}\n", TotalWeight);
    }

    for (auto Item : LootTierData)
    {
        if (bPrint)
        {
            std::cout << std::format("Rand: {} Weight: {}\n", RandomNumber, Item->Weight);
        }

        if (RandomNumber <= Item->Weight)
        {
            SelectedItem = Item;
            break;
        }

        RandomNumber -= Item->Weight;
    }

    if (!SelectedItem)
        return GetLootTierData(LootTierData, bPrint);

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

        RandomNumber -= Item->Weight;
    }

    if (!SelectedItem)
        return GetLootPackage(LootPackages);

    return SelectedItem;
}

std::vector<FFortItemEntry> PickLootDrops(FName TierGroupName, bool bPrint = false, int recursive = 0)
{
    constexpr bool bExperimentalShuffling = false;

    std::vector<FFortItemEntry> LootDrops;

    if (recursive >= 5)
    {
        // std::cout << "Hit recursive limit for: " << TierGroupName.ToString() << '\n';
        return LootDrops;
    }

	/* auto TierGroupNameWStr = std::wstring(TierGroupName.begin(), TierGroupName.end());
	auto TierGroupNameWCStr = TierGroupNameWStr.c_str();
	FString TierGroupNameFStr = TierGroupNameWCStr; */
    auto TierGroupFName = TierGroupName; // UKismetStringLibrary::StaticClass()->CreateDefaultObject< UKismetStringLibrary>()->Conv_StringToName(TierGroupNameFStr);

    static std::vector<UDataTable*> LTDTables;
    static std::vector<UDataTable*> LPTables;

    static bool skidd = false;

    if (!skidd)
    {
        skidd = true;

        auto GameState = (AFortGameStateAthena*)GetWorld()->GameState;

        UDataTable* MainLTD = nullptr;
        UDataTable* MainLP = nullptr;

        if (false)
        {
            if (GameState->CurrentPlaylistInfo.BasePlaylist)
            {
                std::cout << "GameState->CurrentPlaylistInfo.BasePlaylist Name: " << GameState->CurrentPlaylistInfo.BasePlaylist->GetFullName() << '\n';

                std::cout << "GameState->CurrentPlaylistInfo.BasePlaylist->LootTierData.ObjectID.AssetPathName.ComparisonIndex: " << GameState->CurrentPlaylistInfo.BasePlaylist->LootTierData.ObjectID.AssetPathName.ComparisonIndex << '\n';
                std::cout << "GameState->CurrentPlaylistInfo.BasePlaylist->LootPackages.ObjectID.AssetPathName.ComparisonIndex: " << GameState->CurrentPlaylistInfo.BasePlaylist->LootPackages.ObjectID.AssetPathName.ComparisonIndex << '\n';

                if (GameState->CurrentPlaylistInfo.BasePlaylist->LootTierData.ObjectID.AssetPathName.ComparisonIndex > 0)
                {
                    std::string asdigui = GameState->CurrentPlaylistInfo.BasePlaylist->LootTierData.ObjectID.AssetPathName.ToString();

                    std::cout << "asdigui LTD: " << asdigui << '\n';

                    if (asdigui.contains("Composite")) MainLTD = UObject::FindObject<UCompositeDataTable>(asdigui);
                    else MainLTD = UObject::FindObject<UDataTable>(asdigui);
                }
                if (GameState->CurrentPlaylistInfo.BasePlaylist->LootPackages.ObjectID.AssetPathName.ComparisonIndex > 0)
                {
                    std::string asdigui = GameState->CurrentPlaylistInfo.BasePlaylist->LootPackages.ObjectID.AssetPathName.ToString();

                    std::cout << "asdigui LP: " << asdigui << '\n';

                    if (asdigui.contains("Composite")) MainLP = UObject::FindObject<UCompositeDataTable>(asdigui);
                    else MainLP = UObject::FindObject<UDataTable>(asdigui);
                }
            }
            else
            {
                std::cout << "NO PLAYLIST!?!?!\n";
            }
        }

        // auto MainLTD = GameState->CurrentPlaylistInfo.BasePlaylist ? GameState->CurrentPlaylistInfo.BasePlaylist->LootTierData.Get() : nullptr;
        // auto MainLP = GameState->CurrentPlaylistInfo.BasePlaylist ? GameState->CurrentPlaylistInfo.BasePlaylist->LootPackages.Get() : nullptr;
     
        std::cout << "MainLTDBef: " << MainLTD << '\n';
        std::cout << "MainLPBef: " << MainLP << '\n';

        if (!MainLTD)
            MainLTD = UObject::FindObject<UDataTable>("/Game/Items/Datatables/AthenaLootTierData_Client.AthenaLootTierData_Client");

        if (!MainLP)
            MainLP = UObject::FindObject<UDataTable>("/Game/Items/Datatables/AthenaLootPackages_Client.AthenaLootPackages_Client");

        if (!MainLTD || !MainLP)
        {
            std::cout << "MainLTD: " << MainLTD << '\n';
            std::cout << "MainLP: " << MainLP << '\n';
            return LootDrops;
        }

        /* if (MainLTD->IsA(UCompositeDataTable::StaticClass()))
        {
            std::cout << "((UCompositeDataTable*)MainLTD)->ParentTables.Num(): " << ((UCompositeDataTable*)MainLTD)->ParentTables.Num() << '\n';
            
            for (int i = 0; i < ((UCompositeDataTable*)MainLTD)->ParentTables.Num(); i++)
            {
                auto Table = ((UCompositeDataTable*)MainLTD)->ParentTables[i];

                if (!Table)
                    continue;

                auto TableName = Table->GetName();

                std::cout << std::format("[{}] LTD {}\n", i, TableName);

                LTDTables.push_back(Table);
            }
        } */

        LTDTables.push_back(MainLTD);

        /* if (MainLP->IsA(UCompositeDataTable::StaticClass()))
        {
            for (int i = 0; i < ((UCompositeDataTable*)MainLP)->ParentTables.Num(); i++)
            {
                auto Table = ((UCompositeDataTable*)MainLP)->ParentTables[i];

                if (!Table)
                    continue;

                auto TableName = Table->GetName();

                std::cout << std::format("[{}] LP {}\n", i, TableName);

                LPTables.push_back(Table);
            }
        } */

        LPTables.push_back(MainLP);
    }

    std::vector<FFortLootTierData*> TierGroupLTDs;

    for (int p = 0; p < LTDTables.size(); p++)
    {
        auto LTD = LTDTables[p];
        auto& LTDRowMap = LTD->RowMap;

        auto LTDRowMapNum = LTDRowMap.Pairs.Elements.Num();

        // auto TierGroupNameStr = TierGroupName.ToString();

        for (int i = 0; i < LTDRowMapNum; i++)
        {
            auto& CurrentLTD = LTDRowMap.Pairs.Elements[i].ElementData.Value;
            auto TierData = (FFortLootTierData*)CurrentLTD.Value();

            // auto TierDataGroupStr = TierData->TierGroup.ToString();

            // std::cout << "TierData->TierGroup.ToString(): " << TierDataGroupStr << '\n';

            if (TierGroupName == TierData->TierGroup /* TierDataGroupStr == TierGroupNameStr */ && TierData->Weight != 0)
            {
                TierGroupLTDs.push_back(TierData);
            }
        }
    }

    if (TierGroupLTDs.size() == 0)
    {
        // std::cout << "Failed to find LTD!\n";
        std::cout << "Failed to find any LTD for: " << TierGroupName.ToString() << '\n';
        return LootDrops;
    }

    if (bPrint)
    {
        std::cout << "TierGroupLTDs.size(): " << TierGroupLTDs.size() << '\n';
    }

    if constexpr (bExperimentalShuffling)
    {
        std::random_device rd;
        std::mt19937 afafiuq(rd());

        std::shuffle(TierGroupLTDs.begin(), TierGroupLTDs.end(), afafiuq);
    }

    FFortLootTierData* ChosenRowLootTierData = GetLootTierData(TierGroupLTDs, bPrint);

    if (!ChosenRowLootTierData) // Should NEVER happen
        return LootDrops;

    if (ChosenRowLootTierData->NumLootPackageDrops <= 0)
        return PickLootDrops(TierGroupName, bPrint, ++recursive); // hm

    if (ChosenRowLootTierData->LootPackageCategoryMinArray.Count != ChosenRowLootTierData->LootPackageCategoryWeightArray.Count ||
            ChosenRowLootTierData->LootPackageCategoryMinArray.Count != ChosenRowLootTierData->LootPackageCategoryMaxArray.Count)
        return PickLootDrops(TierGroupName, bPrint, ++recursive); // hm

    int MinimumLootDrops = 0;
    float NumLootPackageDrops = std::floor(ChosenRowLootTierData->NumLootPackageDrops);

    if (ChosenRowLootTierData->LootPackageCategoryMinArray.Count)
    {
        for (int i = 0; i < ChosenRowLootTierData->LootPackageCategoryMinArray.Count; i++)
        {
            if (ChosenRowLootTierData->LootPackageCategoryMinArray[i] > 0)
            {
                MinimumLootDrops += ChosenRowLootTierData->LootPackageCategoryMinArray[i];
            }
        }
    }

    if (MinimumLootDrops > NumLootPackageDrops)
    {

    }

    int SumLootPackageCategoryWeightArray = 0;

    for (int i = 0; i < ChosenRowLootTierData->LootPackageCategoryWeightArray.Num(); i++)
    {
        auto CategoryWeight = ChosenRowLootTierData->LootPackageCategoryWeightArray[i];

        if (CategoryWeight > 0)
        {
            auto CategoryMaxArray = ChosenRowLootTierData->LootPackageCategoryMaxArray[i];

            if (CategoryMaxArray < 0)
            {
                SumLootPackageCategoryWeightArray += CategoryWeight;
            }
        }
    }

    int SumLootPackageCategoryMinArray = 0;

    for (int i = 0; i < ChosenRowLootTierData->LootPackageCategoryMinArray.Num(); i++)
    {
        auto CategoryWeight = ChosenRowLootTierData->LootPackageCategoryMinArray[i];

        if (CategoryWeight > 0)
        {
            auto CategoryMaxArray = ChosenRowLootTierData->LootPackageCategoryMaxArray[i];

            if (CategoryMaxArray < 0)
            {
                SumLootPackageCategoryMinArray += CategoryWeight;
            }
        }
    }

    if (SumLootPackageCategoryWeightArray > SumLootPackageCategoryMinArray)
        return PickLootDrops(TierGroupName, bPrint, ++recursive); // hm

    std::vector<FFortLootPackageData*> TierGroupLPs;

    for (int p = 0; p < LPTables.size(); p++)
    {
        auto LP = LPTables[p];
        auto& LPRowMap = LP->RowMap;

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
    }

    auto ChosenLootPackageName = ChosenRowLootTierData->LootPackage.ToString();

    if (ChosenLootPackageName.contains(".Empty"))
    {
        return PickLootDrops(TierGroupName, bPrint);
        // return LootDrops;
    }

    bool bIsWorldList = ChosenLootPackageName.contains("WorldList");

    if (bPrint)
    {
        std::cout << "NumLootPackageDrops Floored: " << NumLootPackageDrops << '\n';
        std::cout << "NumLootPackageDrops Original: " << ChosenRowLootTierData->NumLootPackageDrops << '\n';
        std::cout << "TierGroupLPs.size(): " << TierGroupLPs.size() << '\n';
        std::cout << "ChosenLootPackageName: " << ChosenLootPackageName << '\n';

        /* float t = ChosenRowLootTierData->NumLootPackageDrops;

        int b = (int)((t + t) - 0.5) >> 1;
        auto c = ChosenRowLootTierData->NumLootPackageDrops - b;

        b += c >= (rand() * 0.000030518509);

        std::cout << "b: " << b << '\n'; */
    }
    
    LootDrops.reserve(NumLootPackageDrops);

    for (float i = 0; i < NumLootPackageDrops; i++)
    {
        if (i >= TierGroupLPs.size())
            break;

        auto TierGroupLP = TierGroupLPs.at(i);
        auto TierGroupLPStr = TierGroupLP->LootPackageCall.ToString();

        if (TierGroupLPStr.contains(".Empty"))
        {
            NumLootPackageDrops++;
            continue;
        }

        std::vector<FFortLootPackageData*> lootPackageCalls;

        if (bIsWorldList)
        {
            for (int j = 0; j < TierGroupLPs.size(); j++)
            {
                auto& CurrentLP = TierGroupLPs.at(j);

                if (CurrentLP->Weight != 0)
                    lootPackageCalls.push_back(CurrentLP);
            }
        }
        else
        {
            for (int p = 0; p < LPTables.size(); p++)
            {
                auto LPRowMap = LPTables[p]->RowMap;

                for (int j = 0; j < LPRowMap.Pairs.Elements.Num(); j++)
                {
                    auto& CurrentLP = LPRowMap.Pairs.Elements[j].ElementData.Value;

                    auto LootPackage = (FFortLootPackageData*)CurrentLP.Value();

                    if (LootPackage->LootPackageID.ToString() == TierGroupLPStr && LootPackage->Weight != 0)
                    {
                        lootPackageCalls.push_back(LootPackage);
                    }
                }
            }
        }

        if (lootPackageCalls.size() == 0)
        {
            // std::cout << "lootPackageCalls.size() == 0!\n";
            NumLootPackageDrops++; // ??
            continue;
        }

        if constexpr (bExperimentalShuffling)
        {
            std::random_device rd2;
            std::mt19937 afafiuq2(rd2());

            std::shuffle(lootPackageCalls.begin(), lootPackageCalls.end(), afafiuq2);
        }

        FFortLootPackageData* LootPackageCall = GetLootPackage(lootPackageCalls);

        if (!LootPackageCall) // Should NEVER happen
            continue;

        auto ItemDef = LootPackageCall->ItemDefinition.Get();

        if (!ItemDef)
        {
            NumLootPackageDrops++; // ??
            continue;
        }

        if (bPrint)
        {
            std::cout << std::format("[{}] {} {} {}\n", i, lootPackageCalls.size(), TierGroupLPStr, ItemDef->GetName());
        }

        FFortItemEntry LootDropEntry{};

        LootDropEntry.ItemDefinition = ItemDef;
        LootDropEntry.LoadedAmmo = GetClipSize(Cast<UFortWeaponItemDefinition>(ItemDef));
        LootDropEntry.Count = LootPackageCall->Count;

        LootDrops.push_back(LootDropEntry);
    }

    return LootDrops;
}

static bool IsPrimaryQuickbar(UFortItemDefinition* ItemDefinition)
{
    /* if (ItemDefinition->IsA(UFortDecoItemDefinition::StaticClass()))
    {
        if (ItemDefinition->IsA(UFortTrapItemDefinition::StaticClass()))
            return false;
        else
            return true;
    }
    else if (ItemDefinition->IsA(UFortWeaponItemDefinition::StaticClass()))
        return true; */

    if (!ItemDefinition->IsA(UFortWeaponMeleeItemDefinition::StaticClass()) && !ItemDefinition->IsA(UFortEditToolItemDefinition::StaticClass()) &&
        !ItemDefinition->IsA(UFortBuildingItemDefinition::StaticClass()) && !ItemDefinition->IsA(UFortAmmoItemDefinition::StaticClass()) && !ItemDefinition->IsA(UFortResourceItemDefinition::StaticClass()) && !ItemDefinition->IsA(UFortTrapItemDefinition::StaticClass()))
       return true;

    return false;
}

static bool CanInventoryHoldItem(AFortPlayerControllerAthena* PlayerController, UFortItemDefinition* CheckIfCanStack, int IncomingCount)
{
    auto ItemInstances = PlayerController->WorldInventory->Inventory.ItemInstances;

    bool bPrimaryQuickBarFull = false;

    if (CheckIfCanStack)
    {
        if (IsPrimaryQuickbar(CheckIfCanStack))
        {
            int ItemCounts = 0;

            for (int i = 0; i < ItemInstances.Num(); i++)
            {
                auto ItemInstance = ItemInstances[i];

                if (!ItemInstance)
                    continue;

                auto ItemDefinition = ItemInstance->ItemEntry.ItemDefinition;

                if (CheckIfCanStack == ItemDefinition)
                {
                    if (IncomingCount + ItemInstance->ItemEntry.Count <= ItemDefinition->MaxStackSize)
                    {
                        return false; // we can stack
                    }
                    /* else
                    {
                        if (!ItemDefinition->bAllowMultipleStacks)
                            return true;
                    } */
                }

                if (IsPrimaryQuickbar(ItemDefinition))
                {
                    ItemCounts++;
                    bPrimaryQuickBarFull = (ItemCounts /* - 6 */) >= 5;

                    if (bPrimaryQuickBarFull)
                        return !bPrimaryQuickBarFull;
                }
            }
        }
        else
        {
            for (int i = 0; i < ItemInstances.Num(); i++)
            {
                auto ItemInstance = ItemInstances[i];

                if (!ItemInstance)
                    continue;

                auto ItemDefinition = ItemInstance->ItemEntry.ItemDefinition;

                if (ItemDefinition == CheckIfCanStack)
                {
                }
            }
        }
    }

    return bPrimaryQuickBarFull;
}

static bool IsInventoryFull(AFortPlayerControllerAthena* PlayerController, int Start = 0, UFortItemDefinition* CheckIfCanStack = nullptr, int IncomingCount = 0)
{
    int ItemCounts = 0; /* Start */;

    auto ItemInstances = &PlayerController->WorldInventory->Inventory.ItemInstances;

    bool bIsInventoryFull = false;

    for (int i = 0; i < ItemInstances->Num(); i++)
    {
        auto ItemInstance = ItemInstances->operator[](i);

        if (!ItemInstance)
            continue;

        auto ItemDefinition = ItemInstance->ItemEntry.ItemDefinition;

        if (CheckIfCanStack == ItemDefinition)
        {
            if (IncomingCount + ItemInstance->ItemEntry.Count <= ItemDefinition->MaxStackSize)
            {
                return false; // ?
            }
            /* else
            {
                if (!ItemDefinition->bAllowMultipleStacks)
                    return true;
            } */
        }

        std::cout << "ItemCounts: " << ItemCounts << '\n';

        if (IsPrimaryQuickbar(ItemDefinition))
        {
            ItemCounts++;
            bIsInventoryFull = (ItemCounts /* - 6 */) >= 5;

            if (bIsInventoryFull)
                return bIsInventoryFull;
        }
    }

    return bIsInventoryFull;
}