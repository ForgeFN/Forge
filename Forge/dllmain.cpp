#include <Windows.h>

#include "util.h"
#include "admin.h"
#include "hooks.h"
#include "gui.h"

bool rettrue() { return true; }
bool crashaf(__int64 A1) {
    std::cout << std::format("crashtqu2wg2gwgwwrgb: 0x{:x}\n", __int64(_ReturnAddress()) - __int64(GetModuleHandleW(0)));

    return false; }
bool crashaf2() {
    std::cout << std::format("afwqq23f: 0x{:x}\n", __int64(_ReturnAddress()) - __int64(GetModuleHandleW(0)));
    return false;
}
bool retfalse() { return false; }
void printretaddress() { std::cout << std::format("0x{:x}\n", __int64(_ReturnAddress()) - __int64(GetModuleHandleW(0))); }
void printretaddressaa() { std::cout << std::format("BUGHA 0x{:x}\n", __int64(_ReturnAddress()) - __int64(GetModuleHandleW(0))); }

DWORD WINAPI InputThread(LPVOID)
{
    while (1)
    {
        if (GetAsyncKeyState(VK_F2) & 1)
        {
            Globals::bLogProcessEvent = !Globals::bLogProcessEvent;
        }

        else if (GetAsyncKeyState(VK_F3) & 1)
        {
            FillVendingMachines();
        }

        Sleep(1000 / 30);
    }
}

DWORD WINAPI Main(LPVOID)
{
    AllocConsole();
    FILE* fptr;
    freopen_s(&fptr, "CONOUT$", "w+", stdout);

    SetConsoleTitleA("Forge Server");

    std::ios::sync_with_stdio(false);

    std::cout << std::format("[Init] Base Address: 0x{:x}\n", __int64(GetModuleHandleW(0)));

    UObject::GObjects = decltype(UObject::GObjects)(__int64(GetModuleHandleW(0)) + 0x64a0090);

    static auto getgameseaddy = __int64(GetModuleHandleW(0)) + 0x15816C0;

    CREATE_HOOK(sub_7FF68F8816C0HOOK, getgameseaddy);

    auto DefaultFortGameModeAthena = AFortGameModeAthena::StaticClass()->CreateDefaultObject();

    auto GetGameSessionClassOffset = 0x670;

    /* DWORD dwProtection;
    VirtualProtect(DefaultFortGameModeAthena->VFT, (GetGameSessionClassOffset + 8), PAGE_EXECUTE_READWRITE, &dwProtection);

    DefaultFortGameModeAthena->VFT[GetGameSessionClassOffset / 8] = GetGameSessionClassHook;

    DWORD dwTemp;
    VirtualProtect(DefaultFortGameModeAthena->VFT, (GetGameSessionClassOffset + 8), dwProtection, &dwTemp); */

    auto PlayerController = GetWorld()->OwningGameInstance->LocalPlayers[0]->PlayerController;

    UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), L"log LogProfileSys VeryVerbose", PlayerController);
    UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), L"log LogFortVolumeManager VeryVerbose", PlayerController);
    UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), L"log LogPlaysetLevelStream VeryVerbose", PlayerController);
    UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), L"log LogFortCustomization VeryVerbose", PlayerController);
    UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), L"log LogFortCosmetics VeryVerbose", PlayerController);
    UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), L"log LogFort VeryVerbose", PlayerController);
    UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), L"log LogFortInventory VeryVerbose", PlayerController);
    UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), L"log LogFortPawnScriptedBehavior VeryVerbose", PlayerController);
    UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), L"log LogFortAI VeryVerbose", PlayerController);
    UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), L"log LogFortLoot VeryVerbose", PlayerController);
    UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), L"log LogFortTeams VeryVerbose", PlayerController);
    UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), L"log LogPlayerPawnAthena VeryVerbose", PlayerController);
    UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), L"log LogOnlineGame VeryVerbose", PlayerController);
    UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), L"log LogAthenaBots VeryVerbose", PlayerController);
    UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), L"log LogNavigation VeryVerbose", PlayerController);
    UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), L"log LogAbilitySystem VeryVerbose", PlayerController);
    UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), L"log LogFortAIDirector VeryVerbose", PlayerController);

    // UObject::FindObject<UNavCollision>("/Script/NavigationSystem.Default__NavCollision")->bCreateOnClient = true;

    // std::cout << std::format("vafqe2: 0x{:x}\n", __int64(UObject::FindObject<UNavCollision>("/Script/NavigationSystem.Default__NavCollision")->VFT) - __int64(GetModuleHandleW(0)));

    // CREATE_HOOK(NavCollisionConstructorHook, NavCollisionConstructorOriginal);
    CREATE_HOOK(AddNavigationSystemToWorldHook, AddNavigationSystemToWorldOriginal);
    CREATE_HOOK(GetNetModeHook, GetNetMode);

    PlayerController->SwitchLevel(L"Athena_Terrain");

    GetWorld()->OwningGameInstance->LocalPlayers.Remove(0);

    CreateThread(0, 0, GuiThread, 0, 0, 0);
    // return 0;

    auto matchmaking = Memcury::Scanner::FindPattern("83 BD ? ? ? ? 01 7F 18 49 8D 4D D8 48 8B D6 E8 ? ? ? ? 48").Get();

    matchmaking = matchmaking ? matchmaking : Memcury::Scanner::FindPattern("83 7D 88 01 7F 0D 48 8B CE E8").Get();

    std::cout << std::format("matchmaking: 0x{:x}\n", matchmaking - __int64(GetModuleHandleW(0)));
    bool bMatchmakingSupported = matchmaking;

    int idx = 0;

    if (bMatchmakingSupported)
    {
        for (int i = 0; i < 9; i++)
        {
            auto byte = (uint8_t*)(matchmaking + i);

            if (IsBadReadPtr(byte))
                continue;

            // std::cout << std::format("[{}] 0x{:x}\n", i, (int)*byte);

            if (*byte == 0x7F)
            {
                bMatchmakingSupported = true;
                idx = i;
                break;
            }

            bMatchmakingSupported = false;
        }
    }


    std::cout << "Matchmaking will " << (bMatchmakingSupported ? "be supported\n" : "not be supported\n");

    if (bMatchmakingSupported)
    {
        std::cout << "idx: " << idx << '\n';

        auto before = (uint8_t*)(matchmaking + idx);

        std::cout << "before byte: " << (int)*before << '\n';

        *before = 0x74;
    }

    srand(time(0));

    CREATE_HOOK(rettrue, CollectGarbage);

    if (Globals::bNoMCP)
    {
        CREATE_HOOK(IsNoMCPHook, IsNoMCP);
    }
    else
    {
        CREATE_HOOK(DispatchRequestHook, DispatchRequestOriginal);
    }

    // CREATE_HOOK(sub_7FF68F4E72C0Detour, sub_7FF68F4E72C0Og);
    // CREATE_HOOK(asdaqdDetour, asdaqdOg);
    // CREATE_HOOK(wtfafaeifgjkwDetour, wtfafaeifgjkwOg);

    __int64 (*sub_7FF68F3C56B0)(__int64* a1, __int64 a2, char a3) = decltype(sub_7FF68F3C56B0)(__int64(GetModuleHandleW(0)) + 0x10C56B0);
    // CREATE_HOOK(crashaf, sub_7FF68F3C56B0);

    // static auto crash2
    
    // CREATE_HOOK(SetCurrentPlaylistNameHOOK, SetCurrentPlaylistName);

    auto CanActivateAbilityAddress = (void*)(__int64(GetModuleHandleW(0)) + 0x9214C0);
    CREATE_HOOK(rettrue, CanActivateAbilityAddress);

    // CreateThread(0, 0, InputThread, 0, 0, 0);

    *(bool*)(__int64(GetModuleHandleW(0)) + 0x637925B) = false; // GIsClient
    *(bool*)(__int64(GetModuleHandleW(0)) + 0x637925C) = true; // GIsServer

    auto DefaultFortPCAthena = UObject::FindObject<AFortPlayerControllerAthena>("/Game/Athena/Athena_PlayerController.Default__Athena_PlayerController_C");
    auto DefaultFortAbilitySystemComp = UFortAbilitySystemComponentAthena::StaticClass()->CreateDefaultObject();
    auto DefaultFortPlayerStateAthena = AFortPlayerStateAthena::StaticClass()->CreateDefaultObject();
    auto DefaultFortPawnAthena = UObject::FindObject<AFortPlayerPawnAthena>("/Game/Athena/PlayerPawn_Athena.Default__PlayerPawn_Athena_C");
    auto DefaultTrapTool = UObject::FindObject<AFortTrapTool>("/Game/Weapons/FORT_BuildingTools/TrapTool.Default__TrapTool_C");
    auto DefaultFortPhysicsPawn = AFortPhysicsPawn::StaticClass()->CreateDefaultObject();
    auto DefaultFortPickupAthena = AFortPickupAthena::StaticClass()->CreateDefaultObject();

    static auto ReadyToStartMatchFn = UObject::FindObject<UFunction>("/Script/Engine.GameMode.ReadyToStartMatch");
    HookFunction(DefaultFortGameModeAthena, ReadyToStartMatchFn, ReadyToStartMatchHook, (PVOID*)&ReadyToStartMatch);

    static auto OnCapsuleBeginOverlapFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerPawn.OnCapsuleBeginOverlap");
    // AddHook(OnCapsuleBeginOverlapFn, OnCapsuleBeginOverlapHook);
    // HookFunction(DefaultFortPawnAthena, OnCapsuleBeginOverlapFn, OnCapsuleBeginOverlapHook);

    static auto ReceiveActorEndOverlapFn = UObject::FindObject<UFunction>("/Script/Engine.Actor.ReceiveActorEndOverlap");
    // HookFunction(DefaultFortPickupAthena, ReceiveActorEndOverlapFn, ReceiveActorEndOverlapHook, (PVOID*)&ReceiveActorEndOverlap);
    AddHook(ReceiveActorEndOverlapFn, ReceiveActorEndOverlapHook);

    static auto ServerSendZiplineStateFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerPawn.ServerSendZiplineState");
    HookFunction(DefaultFortPawnAthena, ServerSendZiplineStateFn, ServerSendZiplineStateHook);

    static auto SpawnDefaultPawnForFn = UObject::FindObject<UFunction>("/Script/Engine.GameModeBase.SpawnDefaultPawnFor");
    HookFunction(DefaultFortGameModeAthena, SpawnDefaultPawnForFn, SpawnDefaultPawnForHook);

    static auto ServerAcknowledgePossessionFn = UObject::FindObject<UFunction>("/Script/Engine.PlayerController.ServerAcknowledgePossession");
    HookFunction(DefaultFortPCAthena, ServerAcknowledgePossessionFn, ServerAcknowledgePossessionHook);

    static auto ServerGiveCreativeItemFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerControllerAthena.ServerGiveCreativeItem");
    HookFunction2(DefaultFortPCAthena, ServerGiveCreativeItemFn, ServerGiveCreativeItemHook);
    // AddHook(ServerGiveCreativeItemFn, ServerGiveCreativeItemHook);

    static auto TeleportPlayerToLinkedVolumeFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortAthenaCreativePortal.TeleportPlayerToLinkedVolume");
    // AddHook(TeleportPlayerToLinkedVolumeFn, TeleportPlayerToLinkedVolumeHook); // CANNOT NATIVE HOOK, NULLSUB

    static auto ServerChangeNameFn = UObject::FindObject<UFunction>("/Script/Engine.PlayerController.ServerChangeName");
    HookFunction(DefaultFortPCAthena, ServerChangeNameFn, ServerChangeNameHook);

    static auto ServerRepairBuildingActorFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerRepairBuildingActor");
    HookFunction(DefaultFortPCAthena, ServerRepairBuildingActorFn, ServerRepairBuildingActorHook);
    // AddHook(ServerRepairBuildingActorFn, ServerRepairBuildingActorHook);

    static auto GiveItemToInventoryOwnerFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortKismetLibrary.GiveItemToInventoryOwner");
    // HookFunction(UFortKismetLibrary::StaticClass()->CreateDefaultObject(), GiveItemToInventoryOwnerFn, GiveItemToInventoryOwnerHook, nullptr, true);

    static auto K2_RemoveItemFromPlayerFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortKismetLibrary.K2_RemoveItemFromPlayer");
    // HookFunction(UFortKismetLibrary::StaticClass()->CreateDefaultObject(), K2_RemoveItemFromPlayerFn, K2_RemoveItemFromPlayerHook, (PVOID*)&K2_RemoveItemFromPlayerOriginal, true);

    static auto ServerExecuteInventoryItemFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerExecuteInventoryItem");
    HookFunction(DefaultFortPCAthena, ServerExecuteInventoryItemFn, ServerExecuteInventoryItemHook);

    // static auto OnSafeZoneStateChangeFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortSafeZoneIndicator.OnSafeZoneStateChange");
    // std::cout << "OnSafeZoneStateChangeFn: " << OnSafeZoneStateChangeFn << '\n';
    // AddHook(OnSafeZoneStateChangeFn, OnSafeZoneStateChangeHook);

    static auto ServerSuicideFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerSuicide");
    // AddHook(ServerSuicideFn, ServerSuicideHook);
    HookFunction(DefaultFortPCAthena, ServerSuicideFn, ServerSuicideHook);

    static auto ServerRemoveInventoryItemFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerRemoveInventoryItem");
    HookFunction2(DefaultFortPCAthena, ServerRemoveInventoryItemFn, ServerRemoveInventoryItemHook);
    // AddHook(ServerRemoveInventoryItemFn, ServerRemoveInventoryItemHook);

    if (Globals::bLateGame)
    {
        static auto ServerAttemptAircraftJumpFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerAttemptAircraftJump");
        HookFunction(DefaultFortPCAthena, ServerAttemptAircraftJumpFn, ServerAttemptAircraftJumpHook);
    }

    static int OnBuildingActorInitializedOffset = 0x610;
    static auto OnBuildingActorInitializedFn = UObject::FindObject<UFunction>("/Script/FortniteGame.BuildingActor.OnBuildingActorInitialized");
    // HookFunction(ABuildingActor::StaticClass()->CreateDefaultObject(), OnBuildingActorInitializedFn, OnBuildingActorInitializedHook, (PVOID*)&OnBuildingActorInitialized, false, OnBuildingActorInitializedOffset);

    static auto ServerPlayEmoteItemFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerPlayEmoteItem");
    HookFunction(DefaultFortPCAthena, ServerPlayEmoteItemFn, ServerPlayEmoteItemHook);

    // static auto ClientOnPawnDiedFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerControllerZone.ClientOnPawnDied");
    // HookFunction(DefaultFortPCAthena, ClientOnPawnDiedFn, ClientOnPawnDiedHook, (PVOID*)&ClientOnPawnDied);
    
    static auto ServerPlaySquadQuickChatMessageFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerControllerAthena.ServerPlaySquadQuickChatMessage");
    AddHook(ServerPlaySquadQuickChatMessageFn, ServerPlaySquadQuickChatMessageHook); // cant native hook, https://imgur.com/a/TiqLVxl

    static auto OnEndAbility = UObject::FindObject<UFunction>("/Script/GameplayAbilities.GameplayAbility.K2_OnEndAbility");
    AddHook(OnEndAbility, OnEndAbilityHook);

    static auto HandleStartingNewPlayerFn = UObject::FindObject<UFunction>("/Script/Engine.GameModeBase.HandleStartingNewPlayer");
    HookFunction(DefaultFortGameModeAthena, HandleStartingNewPlayerFn, HandleStartingNewPlayerHook, (PVOID*)&HandleStartingNewPlayer);

    static auto Kismet_PickLootDropsFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortKismetLibrary.PickLootDrops");
    // HookFunction(nullptr, Kismet_PickLootDropsFn, PickLootDropsHook, (PVOID*)&PickLootDropsOriginal, true);

    static auto K2_SpawnPickupInWorldFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortKismetLibrary.K2_SpawnPickupInWorld");
    // HookFunction(nullptr, K2_SpawnPickupInWorldFn, K2_SpawnPickupInWorldHook, (PVOID*)&K2_SpawnPickupInWorldOriginal, true);

    static auto SupplyDrop_SpawnPickup = UObject::FindObject<UFunction>("/Script/FortniteGame.FortAthenaSupplyDrop.SpawnPickup");
    // HookFunction(nullptr, SupplyDrop_SpawnPickup, SupplyDrop_SpawnPickupHook, (PVOID*)&SupplyDrop_SpawnPickupOriginal, true);

    static auto ServerTryActivateAbilityFn = UObject::FindObject<UFunction>("/Script/GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility");
    HookFunction(DefaultFortAbilitySystemComp, ServerTryActivateAbilityFn, ServerTryActivateAbilityHook);

    static auto ServerTryActivateAbilityWithEventDataFn = UObject::FindObject<UFunction>("/Script/GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData");
    HookFunction(DefaultFortAbilitySystemComp, ServerTryActivateAbilityWithEventDataFn, ServerTryActivateAbilityWithEventDataHook);

    static auto ServerAbilityRPCBatchFn = UObject::FindObject<UFunction>("/Script/GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch");
    HookFunction(DefaultFortAbilitySystemComp, ServerAbilityRPCBatchFn, ServerAbilityRPCBatchHook, (PVOID*)&ServerAbilityRPCBatch);
    
    // int ServerHandlePickupIndex = 0xE38;
    static auto ServerHandlePickupFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerPawn.ServerHandlePickup");
    HookFunction(DefaultFortPawnAthena, ServerHandlePickupFn, ServerHandlePickupHook/*, nullptr, false, ServerHandlePickupIndex*/);

    static auto ServerAttemptInteractFnOffset = 0x408;
    static auto ServerAttemptInteractFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortControllerComponent_Interaction.ServerAttemptInteract");
    HookFunction(UFortControllerComponent_Interaction::StaticClass()->CreateDefaultObject(), ServerAttemptInteractFn, ServerAttemptInteractHook, (PVOID*)&ServerAttemptInteract, false, ServerAttemptInteractFnOffset);
    // ^^ 41 FF 92 08 04 00 00

    static auto Teleporttohubvfn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerControllerAthena.ServerTeleportToPlaygroundLobbyIsland");
    HookFunction(DefaultFortPCAthena, Teleporttohubvfn, ServerTeleportToPlaygroundLobbyIslandHook);

    static auto ServerFireActorInCannonFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortWeaponRangedMountedCannon.ServerFireActorInCannon");
    HookFunction(AFortWeaponRangedMountedCannon::StaticClass()->CreateDefaultObject(), ServerFireActorInCannonFn, ServerFireActorInCannonHook);

    int ServerServerLoadingScreenDroppedIndex = 0x12F0;
    static auto ServerLoadingScreenDroppedFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerLoadingScreenDropped");
    HookFunction(DefaultFortPCAthena, ServerLoadingScreenDroppedFn, ServerLoadingScreenDroppedHook, (PVOID*)&ServerLoadingScreenDropped, false, ServerServerLoadingScreenDroppedIndex);
    // ^^ 48 FF A0 F0 12 00 00

    static auto EmoteEndAbility = UObject::FindObject<UFunction>("/Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C.K2_OnEndAbility");
    AddHook(EmoteEndAbility, K2_OnEndAbilityEmoteHook);

    static auto ServerAttemptInventoryDropFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerAttemptInventoryDrop");
    HookFunction(DefaultFortPCAthena, ServerAttemptInventoryDropFn, ServerAttemptInventoryDropHook);

    static auto ServerBeginEditingBuildingActorFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerBeginEditingBuildingActor");
    HookFunction(DefaultFortPCAthena, ServerBeginEditingBuildingActorFn, ServerBeginEditingBuildingActorHook);

    static auto ServerDropAllItemsFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerDropAllItems");
    // HookFunction(DefaultFortPCAthena, ServerDropAllItemsFn, ServerDropAllItemsHook, nullptr, true);

    static auto ServerEditBuildingActorFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerEditBuildingActor");
    HookFunction(DefaultFortPCAthena, ServerEditBuildingActorFn, ServerEditBuildingActorHook);

    static auto ServerEndEditingBuildingActorFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerEndEditingBuildingActor");
    HookFunction(DefaultFortPCAthena, ServerEndEditingBuildingActorFn, ServerEndEditingBuildingActorHook);

    static auto ServerCreateBuildingActorFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerCreateBuildingActor");
    HookFunction(DefaultFortPCAthena, ServerCreateBuildingActorFn, ServerCreateBuildingActorHook);

    static auto ServerAddMapMarkerFn = UObject::FindObject<UFunction>("/Script/FortniteGame.AthenaMarkerComponent.ServerAddMapMarker");
    HookFunction(UAthenaMarkerComponent::StaticClass()->CreateDefaultObject(), ServerAddMapMarkerFn, ServerAddMapMarkerHook);

    static auto ServerRemoveMapMarkerFn = UObject::FindObject<UFunction>("/Script/FortniteGame.AthenaMarkerComponent.ServerRemoveMapMarker");
    HookFunction(UAthenaMarkerComponent::StaticClass()->CreateDefaultObject(), ServerRemoveMapMarkerFn, ServerRemoveMapMarkerHook);

    static auto ServerMoveFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPhysicsPawn.ServerMove");
    // HookFunction(AFortPhysicsPawn::StaticClass()->CreateDefaultObject(), ServerMoveFn, ServerMoveHook);
    AddHook(ServerMoveFn, ServerMoveHook);

    /* static auto ServerUpdateStateSyncFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPhysicsPawn.ServerUpdateStateSync");
#ifdef UFUNC_SERVERUPDATESTATESYNC
    AddHook(ServerUpdateStateSyncFn, ServerUpdateStateSyncHook);
#else
    HookFunction(AFortPhysicsPawn::StaticClass()->CreateDefaultObject(), ServerUpdateStateSyncFn, ServerUpdateStateSyncHook);
#endif */

    static auto ServerCheatFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerCheat");
    HookFunction(DefaultFortPCAthena, ServerCheatFn, ServerCheatHook);

    static auto ServerSetInAircraftFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerStateAthena.ServerSetInAircraft");
    // HookFunction(DefaultFortPlayerStateAthena, ServerSetInAircraftFn, ServerSetInAircraftHook, (PVOID*)&ServerSetInAircraft, false, -1, IAmADumbass::fALSE);
    HookFunction2(DefaultFortPlayerStateAthena, ServerSetInAircraftFn, ServerSetInAircraftHook, (PVOID*)&ServerSetInAircraft);

    static auto ServerSetTeamFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerControllerAthena.ServerSetTeam");
    // HookFunction2(DefaultFortPCAthena, ServerSetTeamFn, ServerSetTeamHook, (PVOID*)&ServerSetTeamOriginal);

    static auto ServerChoosePartFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerPawn.ServerChoosePart");
    HookFunction2(DefaultFortPawnAthena, ServerChoosePartFn, ServerChoosePartHook, (PVOID*)&ServerChoosePartOriginal);

    static void (*RebootCardTeamCheck)(void*, void*) = decltype(RebootCardTeamCheck)((uintptr_t)GetModuleHandleW(0) + 0x1243CB0);
    static void (*GetPlayerViewPoint)(AFortPlayerControllerAthena* PlayerController, FVector& Location, FRotator& Rotation) = decltype(GetPlayerViewPoint)(__int64(GetModuleHandleW(0)) + 0x19A4780);

    CREATE_HOOK(ProcessEventHook, ProcessEvent);
    CREATE_HOOK(GetPlayerViewPointHook, GetPlayerViewPoint);
    CREATE_HOOK(HandleReloadCostHook, HandleReloadCost);
    CREATE_HOOK(TickFlushHook, TickFlush);
    CREATE_HOOK(INTOTHETHICKOFITHOOK, INTOTHETHICKOFIT);
    CREATE_HOOK(KickPlayerHook, KickPlayerO);
    CREATE_HOOK(IsResurrectionEnabledHook, IsResurrectionEnabled);
    CREATE_HOOK(GenericArray_GetHook, GenericArray_Get);
    CREATE_HOOK(BuildingDamageHook, BuildingDamageOriginal);
    CREATE_HOOK(retfalse, RebootCardTeamCheck);
    CREATE_HOOK(SetCustomizationLoadoutDataHook, SetCustomizationLoadoutDataOriginal);
    CREATE_HOOK(GetSquadIdForCurrentPlayerHook, GetSquadIdForCurrentPlayer);
    CREATE_HOOK(SpawnPawnOrSOmethingHook, SpawnPawnOrSOmething);
    CREATE_HOOK(PickupDelayHook, PickupDelay);
    CREATE_HOOK(PickTeamHook, PickTeam);
    CREATE_HOOK(GetMaxTickRateHook, GetMaxTickRate);
    CREATE_HOOK(ClientOnPawnDiedHook, ClientOnPawnDied);
    CREATE_HOOK(OnCapsuleBeginOverlapHook, OnCapsuleBeginOverlapOriginal);
    CREATE_HOOK(CanCreateInCurrentContextHook, CanCreateInCurrentContextOriginal);
    CREATE_HOOK(AFortGameSessionDedicatedAthena_SetMatchStartTimeHook, AFortGameSessionDedicatedAthena_SetMatchStartTimeOriginal);
    // CREATE_HOOK(BoiWatTheMarkerCRashHook, BoiWatTheMarkerCRashOriginal);
    // CREATE_HOOK(IsPlaysetWithinVolumeBoundsHook, IsPlaysetWithinVolumeBoundsOriginal);

    // HookCall((uint8_t*)(__int64(GetModuleHandleW(0)) + 0x1C59EC2), (uint8_t*)rettrue);

    std::cout << "[Init] Finished hooks!\n";
    
    /*
    auto matchmaking = __int64(GetModuleHandleW(0)) + 0x34D4C63;

    int idx = 0;

    for (int i = 0; i < 9; i++)
    {
        auto byte = (uint8_t*)(matchmaking + i);

        if (IsBadReadPtr(byte))
            continue;

        // std::cout << std::format("[{}] 0x{:x}\n", i, (int)*byte);

        if (*byte == 0x7F)
        {
            idx = i;
            break;
        }
    }

    {
        std::cout << "idx: " << idx << '\n';

        auto before = (uint8_t*)(matchmaking + idx);

        std::cout << "before byte: " << (int)*before << '\n';

        *before = 0x74;
    }
    */

    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0, Main, 0, 0, 0);
        break;
    case DLL_PROCESS_DETACH:
        UptimeWebHook.send_message("Servers down!");
        break;
    }
    return TRUE;
}

