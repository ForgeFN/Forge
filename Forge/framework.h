#pragma once

#include "SDK.hpp"

#include <detours.h>
#include <iostream>

static UFortEngine* GEngine = decltype(GEngine)(*(uintptr_t*)((uintptr_t)GetModuleHandleW(0) + 0x65A40A0));

#define ANY_PACKAGE (UObject*)-1
#define CREATE_HOOK(Detour, Original) DetourTransactionBegin(); DetourUpdateThread(GetCurrentThread()); DetourAttach(&(void*&)Original, Detour); DetourTransactionCommit();

static __forceinline UWorld* GetWorld()
{
	return GEngine->GameViewport->World;
}

template <typename T>
static __forceinline T* Cast(UObject* Object)
{
	if (Object && Object->IsA(T::StaticClass()))
	{
		return (T*)Object;
	}

	return nullptr;
}

static void (*TickFlush)(UNetDriver*) =
	decltype(TickFlush)((uintptr_t)GetModuleHandle(0) + 0x31EECB0);

static FGameplayAbilitySpecHandle* (*GiveAbility)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle*, FGameplayAbilitySpec) =
	decltype(GiveAbility)((uintptr_t)GetModuleHandle(0) + 0x935010);

static void (*OnDamageServer)(ABuildingActor* BuildingActor, float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, AController* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext) =
	decltype(OnDamageServer)((uintptr_t)GetModuleHandle(0) + 0x1CC36A0);

static void (*ClientOnPawnDied)(AFortPlayerControllerAthena*, FFortPlayerDeathReport) =
decltype(ClientOnPawnDied)((uintptr_t)GetModuleHandle(0) + 0x1F34E50);

static FName StringToName(const FString& String)
{
	return UKismetStringLibrary::StaticClass()->CreateDefaultObject<UKismetStringLibrary>()->Conv_StringToName(String);
}

inline APawn* SpawnDefaultPawnForHook(AGameModeBase* GameMode, AController* NewPlayer, AActor* StartSpot)
{
	auto SpawnLocation = StartSpot->GetTransform();
	// SpawnLocation.Translation = FVector{ 1250, 1818, 3284 };

	return GameMode->SpawnDefaultPawnAtTransform(NewPlayer, SpawnLocation);
}