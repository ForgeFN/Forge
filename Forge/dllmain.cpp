#include <Windows.h>

#include "util.h"

#include "hooks.h"

bool rettrue() { return true; }
bool retfalse() { return false; }

DWORD WINAPI Main(LPVOID)
{
    AllocConsole();
    FILE* fptr;
    freopen_s(&fptr, "CONOUT$", "w+", stdout);

    std::cout << std::format("Base Address: 0x{:x}\n", __int64(GetModuleHandleW(0)));

    UObject::GObjects = decltype(UObject::GObjects)(__int64(GetModuleHandleW(0)) + 0x64a0090);

    auto PlayerController = GetWorld()->OwningGameInstance->LocalPlayers[0]->PlayerController;
    PlayerController->SwitchLevel(L"Athena_Terrain");

    GetWorld()->OwningGameInstance->LocalPlayers.Remove(0);

    auto GetNetModeAddress = (void*)(__int64(GetModuleHandleW(0)) + 0x34d2140);
    CREATE_HOOK(rettrue, GetNetModeAddress);

    auto NoMCPAddress = (void*)(__int64(GetModuleHandleW(0)) + 0x161d600);
    CREATE_HOOK(rettrue, NoMCPAddress);

    auto CanActivateAbilityAddress = (void*)(__int64(GetModuleHandleW(0)) + 0x9214C0);
    CREATE_HOOK(rettrue, CanActivateAbilityAddress);

    *(bool*)(__int64(GetModuleHandleW(0)) + 0x637925B) = false; // GIsClient
    *(bool*)(__int64(GetModuleHandleW(0)) + 0x637925C) = true; // GIsServer

    auto DefaultFortPCAthena = UObject::FindObject<AFortPlayerControllerAthena>("/Game/Athena/Athena_PlayerController.Default__Athena_PlayerController_C");
    auto DefaultFortAbilitySystemComp = UFortAbilitySystemComponentAthena::StaticClass()->CreateDefaultObject();
    auto DefaultFortPlayerStateAthena = AFortPlayerStateAthena::StaticClass()->CreateDefaultObject();
    auto DefaultFortGameModeAthena = AFortGameModeAthena::StaticClass()->CreateDefaultObject();
    auto DefaultFortPawnAthena = UObject::FindObject<AFortPlayerPawnAthena>("/Game/Athena/PlayerPawn_Athena.Default__PlayerPawn_Athena_C");
    auto DefaultTrapTool = UObject::FindObject<AFortTrapTool>("/Game/Weapons/FORT_BuildingTools/TrapTool.Default__TrapTool_C");
    auto DefaultFortPhysicsPawn = AFortPhysicsPawn::StaticClass()->CreateDefaultObject();

    std::cout << std::format("aaa: 0x{:x}\n", __int64(DefaultFortPCAthena->VFT[0xC8]) - __int64(GetModuleHandleW(0)));

    static auto ReadyToStartMatchFn = UObject::FindObject<UFunction>("/Script/Engine.GameMode.ReadyToStartMatch");
    HookFunction(DefaultFortGameModeAthena, ReadyToStartMatchFn, ReadyToStartMatchHook);

    static auto ServerSendZiplineStateFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerPawn.ServerSendZiplineState");
    HookFunction(DefaultFortPawnAthena, ServerSendZiplineStateFn, ServerSendZiplineStateHook);

    static auto SpawnDefaultPawnForFn = UObject::FindObject<UFunction>("/Script/Engine.GameModeBase.SpawnDefaultPawnFor");
    HookFunction(DefaultFortGameModeAthena, SpawnDefaultPawnForFn, SpawnDefaultPawnForHook);

    static auto ServerAcknowledgePossessionFn = UObject::FindObject<UFunction>("/Script/Engine.PlayerController.ServerAcknowledgePossession");
    HookFunction(DefaultFortPCAthena, ServerAcknowledgePossessionFn, ServerAcknowledgePossessionHook);

    static auto ServerExecuteInventoryItemFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerExecuteInventoryItem");
    HookFunction(DefaultFortPCAthena, ServerExecuteInventoryItemFn, ServerExecuteInventoryItemHook);

    static auto ServerPlayEmoteItemFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerPlayEmoteItem");
    HookFunction(DefaultFortPCAthena, ServerPlayEmoteItemFn, ServerPlayEmoteItemHook);

    // static auto ClientOnPawnDiedFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerControllerZone.ClientOnPawnDied");
    // HookFunction(DefaultFortPCAthena, ClientOnPawnDiedFn, ClientOnPawnDiedHook, (PVOID*)&ClientOnPawnDied);

    CREATE_HOOK(ClientOnPawnDiedHook, ClientOnPawnDied);

    static void (*CollectGarbage)() = decltype(CollectGarbage)((uintptr_t)GetModuleHandleW(0) + 0x227D720);
    CREATE_HOOK(rettrue, CollectGarbage);

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

    static auto ServerLoadingScreenDroppedFn = UObject::FindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerLoadingScreenDropped");
    HookFunction(DefaultFortPCAthena, ServerLoadingScreenDroppedFn, ServerLoadingScreenDroppedHook, (PVOID*)&ServerLoadingScreenDropped);

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

    static void (*HandleReloadCost)(AFortWeapon* Weapon, int AmountToRemove) = decltype(HandleReloadCost)(__int64(GetModuleHandleW(0)) + 0x1c66a30);
    // CREATE_HOOK(HandleReloadCostHook, HandleReloadCost);

    static void (*GetPlayerViewPoint)(AFortPlayerControllerAthena* PlayerController, FVector& Location, FRotator& Rotation) = decltype(GetPlayerViewPoint)(__int64(GetModuleHandleW(0)) + 0x19A4780);
    CREATE_HOOK(GetPlayerViewPointHook, GetPlayerViewPoint);

    CREATE_HOOK(TickFlushHook, TickFlush);

    static void (*KickPlayer)(void*, void*) = decltype(KickPlayer)((uintptr_t)GetModuleHandleW(0) + 0x17F07B0);
    CREATE_HOOK(rettrue, KickPlayer);

    CREATE_HOOK(OnDamageServerHook, OnDamageServer);

    static void (*RebootCardTeamCheck)(void*, void*) = decltype(RebootCardTeamCheck)((uintptr_t)GetModuleHandleW(0) + 0x1243CB0);
    CREATE_HOOK(retfalse, RebootCardTeamCheck);

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

