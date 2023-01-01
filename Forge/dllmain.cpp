#include <Windows.h>

#include "util.h"
#include "admin.h"
#include "hooks.h"

enum ENetMode
{
    NM_Standalone,
    NM_DedicatedServer,
    NM_ListenServer,
    NM_Client,
    NM_MAX,
};

bool rettrue() { return true; }
bool retfalse() { return false; }

ENetMode GetNetModeHook() { return ENetMode::NM_DedicatedServer; }
bool IsNoMCPHook() { return true; }

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
            ReadyToStartMatchHook(Cast<AFortGameModeAthena>(GetWorld()->AuthorityGameMode));
        }

        else if (GetAsyncKeyState(VK_F4) & 1)
        {
            auto& ClientConnections = GetWorld()->NetDriver->ClientConnections;

            for (int i = 0; i < ClientConnections.Num(); i++)
            {
                auto ClientConnection = ClientConnections[i];

                auto Pawn = GetWorld()->SpawnActor<AFortPlayerPawnAthena>(FVector(0, 0, 10000), FRotator(), GetWorld()->AuthorityGameMode->DefaultPawnClass);
                ClientConnection->PlayerController->Possess(Pawn);
            }
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

    std::cout << std::format("Base Address: 0x{:x}\n", __int64(GetModuleHandleW(0)));

    UObject::GObjects = decltype(UObject::GObjects)(__int64(GetModuleHandleW(0)) + 0x64a0090);

    auto PlayerController = GetWorld()->OwningGameInstance->LocalPlayers[0]->PlayerController;
    PlayerController->SwitchLevel(/* Globals::bCreative ? L"/Game/Creative/Maps/CreativeHubs/CreativeHub_S10_01" : */ L"Athena_Terrain");

    GetWorld()->OwningGameInstance->LocalPlayers.Remove(0);

    ENetMode (*GetNetMode)()  = decltype(GetNetMode)(__int64(GetModuleHandleW(0)) + 0x34d2140);
    CREATE_HOOK(GetNetModeHook, GetNetMode);

    bool(*IsNoMCP)() = decltype(IsNoMCP)(__int64(GetModuleHandleW(0)) + 0x161d600);
    CREATE_HOOK(IsNoMCPHook, IsNoMCP);

    auto CanActivateAbilityAddress = (void*)(__int64(GetModuleHandleW(0)) + 0x9214C0);
    // CREATE_HOOK(rettrue, CanActivateAbilityAddress);

    CreateThread(0, 0, InputThread, 0, 0, 0);

    *(bool*)(__int64(GetModuleHandleW(0)) + 0x637925B) = false; // GIsClient
    *(bool*)(__int64(GetModuleHandleW(0)) + 0x637925C) = true; // GIsServer

    auto DefaultFortPCAthena = UObject::FindObject<AFortPlayerControllerAthena>("/Game/Athena/Athena_PlayerController.Default__Athena_PlayerController_C");
    auto DefaultFortAbilitySystemComp = UFortAbilitySystemComponentAthena::StaticClass()->CreateDefaultObject();
    auto DefaultFortPlayerStateAthena = AFortPlayerStateAthena::StaticClass()->CreateDefaultObject();
    auto DefaultFortGameModeAthena = AFortGameModeAthena::StaticClass()->CreateDefaultObject();
    auto DefaultFortPawnAthena = UObject::FindObject<AFortPlayerPawnAthena>("/Game/Athena/PlayerPawn_Athena.Default__PlayerPawn_Athena_C");
    auto DefaultTrapTool = UObject::FindObject<AFortTrapTool>("/Game/Weapons/FORT_BuildingTools/TrapTool.Default__TrapTool_C");
    auto DefaultFortPhysicsPawn = AFortPhysicsPawn::StaticClass()->CreateDefaultObject();
    auto DefaultFortPickupAthena = AFortPickupAthena::StaticClass()->CreateDefaultObject();

    static auto ReadyToStartMatchFn = UObject::FindObject<UFunction>("/Script/Engine.GameMode.ReadyToStartMatch");
    HookFunction(DefaultFortGameModeAthena, ReadyToStartMatchFn, ReadyToStartMatchHook, (PVOID*)&ReadyToStartMatch);

    static auto ReceiveActorBeginOverlapFn = UObject::FindObject<UFunction>("/Script/Engine.Actor.ReceiveActorBeginOverlap");
    // HookFunction(DefaultFortPickupAthena, ReceiveActorBeginOverlapFn, ReceiveActorBeginOverlapHook, (PVOID*)&ReceiveActorBeginOverlap);
    AddHook(ReceiveActorBeginOverlapFn, ReceiveActorBeginOverlapHook);

    static auto ReceiveActorEndOverlapFn = UObject::FindObject<UFunction>("/Script/Engine.Actor.ReceiveActorEndOverlap");
    // HookFunction(DefaultFortPickupAthena, ReceiveActorEndOverlapFn, ReceiveActorEndOverlapHook, (PVOID*)&ReceiveActorEndOverlap);
    AddHook(ReceiveActorEndOverlapFn, ReceiveActorEndOverlapHook);

    static auto ServerSendZiplineStateFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerPawn.ServerSendZiplineState");
    HookFunction(DefaultFortPawnAthena, ServerSendZiplineStateFn, ServerSendZiplineStateHook);

    static auto SpawnDefaultPawnForFn = UObject::FindObject<UFunction>("/Script/Engine.GameModeBase.SpawnDefaultPawnFor");
    HookFunction(DefaultFortGameModeAthena, SpawnDefaultPawnForFn, SpawnDefaultPawnForHook);

    static auto ServerAcknowledgePossessionFn = UObject::FindObject<UFunction>("/Script/Engine.PlayerController.ServerAcknowledgePossession");
    HookFunction(DefaultFortPCAthena, ServerAcknowledgePossessionFn, ServerAcknowledgePossessionHook);

    static auto ServerExecuteInventoryItemFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerExecuteInventoryItem");
    HookFunction(DefaultFortPCAthena, ServerExecuteInventoryItemFn, ServerExecuteInventoryItemHook);

    static auto ServerSuicideFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerSuicide");
    HookFunction(DefaultFortPCAthena, ServerSuicideFn, ServerSuicideHook);

    static int OnBuildingActorInitializedOffset = 0x610;
    static auto OnBuildingActorInitializedFn = UObject::FindObject<UFunction>("/Script/FortniteGame.BuildingActor.OnBuildingActorInitialized");
    // HookFunction(ABuildingActor::StaticClass()->CreateDefaultObject(), OnBuildingActorInitializedFn, OnBuildingActorInitializedHook, (PVOID*)&OnBuildingActorInitialized, false, OnBuildingActorInitializedOffset);

    static auto ServerPlayEmoteItemFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerPlayEmoteItem");
    HookFunction(DefaultFortPCAthena, ServerPlayEmoteItemFn, ServerPlayEmoteItemHook);

    // static auto ClientOnPawnDiedFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerControllerZone.ClientOnPawnDied");
    // HookFunction(DefaultFortPCAthena, ClientOnPawnDiedFn, ClientOnPawnDiedHook, (PVOID*)&ClientOnPawnDied);
    
    CREATE_HOOK(ClientOnPawnDiedHook, ClientOnPawnDied);

    static void (*CollectGarbage)() = decltype(CollectGarbage)((uintptr_t)GetModuleHandleW(0) + 0x227D720);
    CREATE_HOOK(rettrue, CollectGarbage);

    CREATE_HOOK(ProcessEventHook, ProcessEvent);

    CREATE_HOOK(PickupDelayHook, PickupDelay);

    CREATE_HOOK(GetMaxTickRateHook, GetMaxTickRate);

    static auto HandleStartingNewPlayerFn = UObject::FindObject<UFunction>("/Script/Engine.GameModeBase.HandleStartingNewPlayer");
    HookFunction(DefaultFortGameModeAthena, HandleStartingNewPlayerFn, HandleStartingNewPlayerHook, (PVOID*)&HandleStartingNewPlayer);

    static auto ServerTryActivateAbilityFn = UObject::FindObject<UFunction>("/Script/GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility");
    HookFunction(DefaultFortAbilitySystemComp, ServerTryActivateAbilityFn, ServerTryActivateAbilityHook);

    static auto ServerTryActivateAbilityWithEventDataFn = UObject::FindObject<UFunction>("/Script/GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData");
    HookFunction(DefaultFortAbilitySystemComp, ServerTryActivateAbilityWithEventDataFn, ServerTryActivateAbilityWithEventDataHook);

    static auto ServerAbilityRPCBatchFn = UObject::FindObject<UFunction>("/Script/GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch");
    HookFunction(DefaultFortAbilitySystemComp, ServerAbilityRPCBatchFn, ServerAbilityRPCBatchHook, (PVOID*)&ServerAbilityRPCBatch);
    
    int ServerHandlePickupIndex = 0xE38;
    static auto ServerHandlePickupFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerPawn.ServerHandlePickup");
    HookFunction(DefaultFortPawnAthena, ServerHandlePickupFn, ServerHandlePickupHook, nullptr, false, ServerHandlePickupIndex);

    static auto ServerAttemptInteractFnOffset = 0x408;
    static auto ServerAttemptInteractFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortControllerComponent_Interaction.ServerAttemptInteract");
    HookFunction(UFortControllerComponent_Interaction::StaticClass()->CreateDefaultObject(), ServerAttemptInteractFn, ServerAttemptInteractHook, (PVOID*)&ServerAttemptInteract, false, ServerAttemptInteractFnOffset);
    // ^^ 41 FF 92 08 04 00 00

    int ServerServerLoadingScreenDroppedIndex = 0x12F0;
    static auto ServerLoadingScreenDroppedFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerLoadingScreenDropped");
    HookFunction(DefaultFortPCAthena, ServerLoadingScreenDroppedFn, ServerLoadingScreenDroppedHook, (PVOID*)&ServerLoadingScreenDropped, false, ServerServerLoadingScreenDroppedIndex);
    // ^^ 48 FF A0 F0 12 00 00

    static auto ServerAttemptInventoryDropFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerAttemptInventoryDrop");
    HookFunction(DefaultFortPCAthena, ServerAttemptInventoryDropFn, ServerAttemptInventoryDropHook);

    static auto ServerBeginEditingBuildingActorFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerBeginEditingBuildingActor");
    HookFunction(DefaultFortPCAthena, ServerBeginEditingBuildingActorFn, ServerBeginEditingBuildingActorHook);

    static auto ServerEditBuildingActorFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerEditBuildingActor");
    HookFunction(DefaultFortPCAthena, ServerEditBuildingActorFn, ServerEditBuildingActorHook);

    static auto ServerEndEditingBuildingActorFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerEndEditingBuildingActor");
    HookFunction(DefaultFortPCAthena, ServerEndEditingBuildingActorFn, ServerEndEditingBuildingActorHook);

    static auto ServerCreateBuildingActorFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerCreateBuildingActor");
    HookFunction(DefaultFortPCAthena, ServerCreateBuildingActorFn, ServerCreateBuildingActorHook);

    static auto ServerAddMapMarkerFn = UObject::FindObject<UFunction>("/Script/FortniteGame.AthenaMarkerComponent.ServerAddMapMarker");
    HookFunction(UAthenaMarkerComponent::StaticClass()->CreateDefaultObject(), ServerAddMapMarkerFn, ServerAddMapMarkerHook);

    static auto ServerMoveFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPhysicsPawn.ServerMove");
    HookFunction(AFortPhysicsPawn::StaticClass()->CreateDefaultObject(), ServerMoveFn, ServerMoveHook);

    static auto ServerUpdateStateSyncFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPhysicsPawn.ServerUpdateStateSync");
    HookFunction(AFortPhysicsPawn::StaticClass()->CreateDefaultObject(), ServerUpdateStateSyncFn, ServerUpdateStateSyncHook);

    static auto ServerCheatFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerCheat");
    HookFunction(DefaultFortPCAthena, ServerCheatFn, ServerCheatHook);

    static auto ServerSetInAircraftFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerStateAthena.ServerSetInAircraft");
    HookFunction(DefaultFortPlayerStateAthena, ServerSetInAircraftFn, ServerSetInAircraftHook, (PVOID*)&ServerSetInAircraft, false, -1, IAmADumbass::fALSE);

    static FRotator* (*GetControlRotation)(AFortPlayerController* Controller, FRotator* a2) = decltype(GetControlRotation)(__int64(GetModuleHandleW(0)) + 0x17B1F20);
    // CREATE_HOOK(GetControlRotationHook, GetControlRotation);

    static void (*HandleReloadCost)(AFortWeapon* Weapon, int AmountToRemove) = decltype(HandleReloadCost)(__int64(GetModuleHandleW(0)) + 0x1c66a30);
    CREATE_HOOK(HandleReloadCostHook, HandleReloadCost);

    static void (*GetPlayerViewPoint)(AFortPlayerControllerAthena* PlayerController, FVector& Location, FRotator& Rotation) = decltype(GetPlayerViewPoint)(__int64(GetModuleHandleW(0)) + 0x19A4780);
    CREATE_HOOK(GetPlayerViewPointHook, GetPlayerViewPoint);

    CREATE_HOOK(TickFlushHook, TickFlush);

    static void (*KickPlayer)(void*, void*) = decltype(KickPlayer)((uintptr_t)GetModuleHandleW(0) + 0x17F07B0);
    CREATE_HOOK(rettrue, KickPlayer);

    CREATE_HOOK(GenericArray_GetHook, GenericArray_Get);

    CREATE_HOOK(OnDamageServerHook, OnDamageServer);

    static void (*RebootCardTeamCheck)(void*, void*) = decltype(RebootCardTeamCheck)((uintptr_t)GetModuleHandleW(0) + 0x1243CB0);
    CREATE_HOOK(retfalse, RebootCardTeamCheck);

    static void (*PreLogin)() = decltype(PreLogin)((uintptr_t)GetModuleHandleW(0) + 0x11D5950);
    // CREATE_HOOK(retfalse, PreLogin);
    
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
        break;
    }
    return TRUE;
}

