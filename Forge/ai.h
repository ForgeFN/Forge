#pragma once

#include "framework.h"

// CREDITS SPOOKY FOR MOVEMENT/NAVCONFIG SETUP

static void (*CleanUp)(UNavigationSystemV1*, uint8) = decltype(CleanUp)((uintptr_t)GetModuleHandleW(0) + 0x36FF590);

void (*AddNavigationSystemToWorldOriginal)(UWorld& WorldOwner, EFNavigationSystemRunMode RunMode, UNavigationSystemConfig* NavigationSystemConfig, char bInitializeForWorld,
    char bOverridePreviousNavSys) = decltype(AddNavigationSystemToWorldOriginal)(__int64(GetModuleHandleW(0)) + 0x2E52490);

static void SetNavigationSystem(AAthenaNavSystemConfigOverride* NavSystemOverride)
{
    auto WorldSettings = GetWorld()->K2_GetWorldSettings();

    NavSystemOverride->OverridePolicy = ENavSystemOverridePolicy::Append;

    WorldSettings->NavigationSystemConfigOverride = NavSystemOverride->NavigationSystemConfig;
    WorldSettings->NavigationSystemConfig->bIsOverriden = true;

    auto NavSystem = (UAthenaNavSystem*)GetWorld()->NavigationSystem;

    CleanUp(NavSystem, 0);

    GetWorld()->NavigationSystem = nullptr;

    if (!NavSystemOverride->NavigationSystemConfig)
        return;

    auto ClassPath = NavSystemOverride->NavigationSystemConfig->NavigationSystemClass;

    auto NewNavSystemClass = UObject::FindObject<UClass>(ClassPath.AssetPathName.ToString());

    if (!NewNavSystemClass)
        return;

    std::cout << "[AI] Setup navigation system.\n";

    AddNavigationSystemToWorldOriginal(*GetWorld(), EFNavigationSystemRunMode::GameMode, NavSystemOverride->NavigationSystemConfig, true, false);
}

static AAthenaNavSystemConfigOverride* GetOrCreateOverrideNavConfig()
{
    auto NavSystemOverride = GetWorld()->SpawnActor<AAthenaNavSystemConfigOverride>({}, {});

    if (!NavSystemOverride)
        return nullptr;

    auto AthenaNavConfig = (UAthenaNavSystemConfig*)UGameplayStatics::SpawnObject(UAthenaNavSystemConfig::StaticClass(), NavSystemOverride);
    AthenaNavConfig->bUseBuildingGridAsNavigableSpace = false;
    AthenaNavConfig->bUsesStreamedInNavLevel = true;
    AthenaNavConfig->bAllowAutoRebuild = true;
    AthenaNavConfig->bCreateOnClient = true;
    AthenaNavConfig->bAutoSpawnMissingNavData = true;
    AthenaNavConfig->bSpawnNavDataInNavBoundsLevel = true;
    AthenaNavConfig->bUseNavigationInvokers = false;
    AthenaNavConfig->DefaultAgentName = UKismetStringLibrary::Conv_StringToName(L"Deimos");

    NavSystemOverride->OverridePolicy = ENavSystemOverridePolicy::Append;
    NavSystemOverride->NavigationSystemConfig = AthenaNavConfig;

    return NavSystemOverride;
}

void AddNavigationSystemToWorldHook(UWorld& WorldOwner, EFNavigationSystemRunMode RunMode, UNavigationSystemConfig* NavigationSystemConfig, char bInitializeForWorld, char bOverridePreviousNavSys)
{
    return AddNavigationSystemToWorldOriginal(WorldOwner, RunMode, NavigationSystemConfig, bInitializeForWorld, bOverridePreviousNavSys);

    std::cout << "ad!\n";
    std::cout << "NavigationSystemConfig: " << NavigationSystemConfig << '\n';

    if (!NavigationSystemConfig)
    {
        auto NavSystemOverride = GetOrCreateOverrideNavConfig();

        NavigationSystemConfig = NavSystemOverride->NavigationSystemConfig;

        auto WorldSettings = GetWorld()->K2_GetWorldSettings();

        WorldSettings->NavigationSystemConfigOverride = NavSystemOverride->NavigationSystemConfig;
        WorldSettings->NavigationSystemConfig->bIsOverriden = true;
    }

    return AddNavigationSystemToWorldOriginal(WorldOwner, RunMode, NavigationSystemConfig, bInitializeForWorld, bOverridePreviousNavSys);
}

static void SetupNavConfig()
{
    auto NavSystemOverride = GetWorld()->SpawnActor<AAthenaNavSystemConfigOverride>({}, {});

    if (!NavSystemOverride)
        return;

    auto AthenaNavConfig = (UAthenaNavSystemConfig*)UGameplayStatics::SpawnObject(UAthenaNavSystemConfig::StaticClass(), NavSystemOverride);
    AthenaNavConfig->bUseBuildingGridAsNavigableSpace = false;
    AthenaNavConfig->bUsesStreamedInNavLevel = true;
    AthenaNavConfig->bAllowAutoRebuild = true;
    AthenaNavConfig->bCreateOnClient = true;
    AthenaNavConfig->bAutoSpawnMissingNavData = true;
    AthenaNavConfig->bSpawnNavDataInNavBoundsLevel = true;
    AthenaNavConfig->bUseNavigationInvokers = false;
    AthenaNavConfig->DefaultAgentName = UKismetStringLibrary::Conv_StringToName(L"Deimos");

    NavSystemOverride->NavigationSystemConfig = AthenaNavConfig;

    SetNavigationSystem(NavSystemOverride);
}

UNavCollision (*NavCollisionConstructorOriginal)(UNavCollision a1) = decltype(NavCollisionConstructorOriginal)(__int64(GetModuleHandleW(0)) + 0x36F8540);

UNavCollision NavCollisionConstructorHook(UNavCollision a1)
{
    a1 = NavCollisionConstructorOriginal(a1);
    std::cout << "call!!!\n";
    a1.bCreateOnClient = true;
    return a1;
}

__int64 (*AFortAIDirector_SpawnBotFromSpawnInfo)(AFortAIDirector* AIDirector, FPendingSpawnInfo PendingSpawnInfo)
    = decltype(AFortAIDirector_SpawnBotFromSpawnInfo)(__int64(GetModuleHandleW(0)) + 0xF85420);

AFortAIPawn* SpawnAIPawn(UClass* pawnClass, FVector Location, EFortressAIType AIType, AActor* SpawnPoint = nullptr, AFortPlayerController* TargetPlayer = nullptr)
{
    auto GameState = Cast<AFortGameStateAthena>(GetWorld()->GameState);
    auto GameMode = Cast<AFortGameModeAthena>(GetWorld()->AuthorityGameMode);

    /* FPendingSpawnInfo PendingSpawnInfo;
    PendingSpawnInfo.PawnClassToSpawn = pawnClass;
    PendingSpawnInfo.AIType = AIType;
    PendingSpawnInfo.SpawnPoint = SpawnPoint;
    PendingSpawnInfo.SpawnLocation = Location;
    PendingSpawnInfo.TargetPlayer = TargetPlayer;
    PendingSpawnInfo.UpgradeUIData.UpgradeIconImage.WeakPtr.ObjectIndex = -1;
    PendingSpawnInfo.UpgradeUIData.UpgradeIconImage.TagAtLastTest = -1;
    PendingSpawnInfo.bKillBuildingActorsAtSpawnLocation = true;

    auto AIDirector = GameMode->AIDirector;

    std::cout << "AIDirector: " << AIDirector << '\n';

    AFortAIDirector_SpawnBotFromSpawnInfo(AIDirector, PendingSpawnInfo); */

    FTransform Transform{};
    Transform.Translation = Location;
    Transform.Scale3D = { 1, 1, 1 };

    auto Actor = Cast<AFortAIPawn>(UGameplayStatics::BeginSpawningActorFromClass(GetWorld(), pawnClass, Transform, false, nullptr));

    if (!Actor)
        return nullptr;

    Actor->SpawnRift = SpawnPoint;
    Actor->Team = 78;

    UGameplayStatics::FinishSpawningActor(Actor, Transform);

    Actor->SpawnRift = SpawnPoint;
    Actor->Team = 78;

    for (int i = 0; i < Actor->DefaultGameplayAbilitySets.Num(); i++)
    {
        Actor->AddFortAbilitySet(Actor->DefaultGameplayAbilitySets[i]);
    }
    
    std::cout << "Actor->AIPawnAbilitySystemComponent: " << Actor->AIPawnAbilitySystemComponent << '\n';

    for (int i = 0; i < Actor->SpawnModifierDefinitions.Num(); i++)
    {
        ApplyModifierItemDefinition(Actor->SpawnModifierDefinitions[i], Actor->AbilitySystemComponent);
    }

    if (Actor->AIPawnAbilitySystemComponent)
    {
        for (int i = 0; i < Actor->SpawnModifierDefinitions.Num(); i++)
        {
            ApplyModifierItemDefinition(Actor->SpawnModifierDefinitions[i], Actor->AIPawnAbilitySystemComponent);
        }
    }
    
    if (auto SpawnRift = Cast<ABuildingRift>(SpawnPoint))
    {
        SpawnRift->OnStartedEncounterSpawn(Actor);
    }

    auto AIDirector = GameMode->AIDirector;

    if (!AIDirector)
        return Actor;

    AIDirector->AIPawns.Add(Actor);

    return Actor;
}

void SetupAIDirector()
{
    auto GameMode = Cast<AFortGameModeAthena>(GetWorld()->AuthorityGameMode);

    GameMode->AIDirector = GetWorld()->SpawnActor<AAthenaAIDirector>(FVector{});
    GameMode->AIDirector->Activate(); // ?
}

void SetupBotManager()
{
    auto GameState = Cast<AFortGameStateAthena>(GetWorld()->GameState);
    auto GameMode = Cast<AFortGameModeAthena>(GetWorld()->AuthorityGameMode);

    auto ServerBotManagerClass = UFortServerBotManagerAthena::StaticClass();

    GameMode->ServerBotManager = (UFortServerBotManagerAthena*)UGameplayStatics::SpawnObject(ServerBotManagerClass, GetTransientPackage());

    if (!GameMode->ServerBotManager)
        return;

    GameMode->ServerBotManager->CachedGameMode = GameMode;
    GameMode->ServerBotManager->CachedGameState = GameState;
    GameMode->ServerBotManager->CachedBotMutator = GetWorld()->SpawnActor<AFortAthenaMutator_Bots>(FVector{});

    if (GameMode->ServerBotManager->CachedBotMutator)
    {
        GameMode->ServerBotManager->CachedBotMutator->ServerBotManagerClass = ServerBotManagerClass;
        GameMode->ServerBotManager->CachedBotMutator->CachedGameMode = GameMode;
        GameMode->ServerBotManager->CachedBotMutator->CachedGameState = GameState;
    }
}