#pragma once

// Fortnite (11.00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin
struct UAbilitySystemBlueprintLibrary_TargetDataHasOrigin_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult
struct UAbilitySystemBlueprintLibrary_TargetDataHasHitResult_Params
{
	struct FGameplayAbilityTargetDataHandle            HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint
struct UAbilitySystemBlueprintLibrary_TargetDataHasEndPoint_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor
struct UAbilitySystemBlueprintLibrary_TargetDataHasActor_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax
struct UAbilitySystemBlueprintLibrary_SetStackCountToMax_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (Parm, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount
struct UAbilitySystemBlueprintLibrary_SetStackCount_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (Parm, NativeAccessSpecifierPublic)
	int                                                StackCount;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration
struct UAbilitySystemBlueprintLibrary_SetDuration_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (Parm, NativeAccessSpecifierPublic)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor
struct UAbilitySystemBlueprintLibrary_SendGameplayEventToActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                EventTag;                                                 // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEventData                          Payload;                                                  // (Parm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute
struct UAbilitySystemBlueprintLibrary_NotEqual_GameplayAttributeGameplayAttribute_Params
{
	struct FGameplayAttribute                          AttributeA;                                               // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                          AttributeB;                                               // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle
struct UAbilitySystemBlueprintLibrary_MakeSpecHandle_Params
{
	class UGameplayEffect*                             InGameplayEffect;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      InInstigator;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      InEffectCauser;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InLevel;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters
struct UAbilitySystemBlueprintLibrary_MakeGameplayCueParameters_Params
{
	float                                              NormalizedMagnitude;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RawMagnitude;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm, NativeAccessSpecifierPublic)
	struct FGameplayTag                                MatchedTagName;                                           // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                OriginalTag;                                              // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       AggregatedSourceTags;                                     // (Parm, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       AggregatedTargetTags;                                     // (Parm, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Normal;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      EffectCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     SourceObject;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                           PhysicalMaterial;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameplayEffectLevel;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AbilityLevel;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             TargetAttachComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                      ReturnValue;                                              // (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle
struct UAbilitySystemBlueprintLibrary_MakeFilterHandle_Params
{
	struct FGameplayTargetDataFilter                   Filter;                                                   // (Parm, NativeAccessSpecifierPublic)
	class AActor*                                      FilterActor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTargetDataFilterHandle             ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid
struct UAbilitySystemBlueprintLibrary_IsValid_Params
{
	struct FGameplayAttribute                          Attribute;                                                // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer
struct UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlledPlayer_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled
struct UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlled_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult
struct UAbilitySystemBlueprintLibrary_HasHitResult_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin
struct UAbilitySystemBlueprintLibrary_GetTargetDataOrigin_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform
struct UAbilitySystemBlueprintLibrary_GetTargetDataEndPointTransform_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint
struct UAbilitySystemBlueprintLibrary_GetTargetDataEndPoint_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin
struct UAbilitySystemBlueprintLibrary_GetOrigin_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude
struct UAbilitySystemBlueprintLibrary_GetModifiedAttributeMagnitude_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (Parm, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                          Attribute;                                                // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform
struct UAbilitySystemBlueprintLibrary_GetInstigatorTransform_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor
struct UAbilitySystemBlueprintLibrary_GetInstigatorActor_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData
struct UAbilitySystemBlueprintLibrary_GetHitResultFromTargetData_Params
{
	struct FGameplayAbilityTargetDataHandle            HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult
struct UAbilitySystemBlueprintLibrary_GetHitResult_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FHitResult                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal
struct UAbilitySystemBlueprintLibrary_GetGameplayCueEndLocationAndNormal_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Normal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection
struct UAbilitySystemBlueprintLibrary_GetGameplayCueDirection_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                                     Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent
struct UAbilitySystemBlueprintLibrary_GetFloatAttributeFromAbilitySystemComponent_Params
{
	class UAbilitySystemComponent*                     AbilitySystem;                                            // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                          Attribute;                                                // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuccessfullyFoundAttribute;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent
struct UAbilitySystemBlueprintLibrary_GetFloatAttributeBaseFromAbilitySystemComponent_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                          Attribute;                                                // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuccessfullyFoundAttribute;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase
struct UAbilitySystemBlueprintLibrary_GetFloatAttributeBase_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                          Attribute;                                                // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuccessfullyFoundAttribute;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute
struct UAbilitySystemBlueprintLibrary_GetFloatAttribute_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                          Attribute;                                                // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuccessfullyFoundAttribute;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext
struct UAbilitySystemBlueprintLibrary_GetEffectContext_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (Parm, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle                ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData
struct UAbilitySystemBlueprintLibrary_GetDataCountFromTargetData_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllLinkedGameplayEffectSpecHandles
struct UAbilitySystemBlueprintLibrary_GetAllLinkedGameplayEffectSpecHandles_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (Parm, NativeAccessSpecifierPublic)
	TArray<struct FGameplayEffectSpecHandle>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllActorsFromTargetData
struct UAbilitySystemBlueprintLibrary_GetAllActorsFromTargetData_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData
struct UAbilitySystemBlueprintLibrary_GetActorsFromTargetData_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount
struct UAbilitySystemBlueprintLibrary_GetActorCount_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex
struct UAbilitySystemBlueprintLibrary_GetActorByIndex_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectTotalDuration
struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectTotalDuration_Params
{
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStartTime
struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStartTime_Params
{
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount
struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackLimitCount_Params
{
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount
struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackCount_Params
{
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectRemainingDuration
struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectRemainingDuration_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectExpectedEndTime
struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectExpectedEndTime_Params
{
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString
struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectDebugString_Params
{
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent
struct UAbilitySystemBlueprintLibrary_GetAbilitySystemComponent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget
struct UAbilitySystemBlueprintLibrary_ForwardGameplayCueToTarget_Params
{
	TScriptInterface<class UGameplayCueInterface>      TargetCueInterface;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData
struct UAbilitySystemBlueprintLibrary_FilterTargetData_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetDataHandle;                                         // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTargetDataFilterHandle             ActorFilterClass;                                         // (Parm, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle            ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase
struct UAbilitySystemBlueprintLibrary_EvaluateAttributeValueWithTagsAndBase_Params
{
	class UAbilitySystemComponent*                     AbilitySystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                          Attribute;                                                // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       SourceTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       TargetTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              BaseValue;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags
struct UAbilitySystemBlueprintLibrary_EvaluateAttributeValueWithTags_Params
{
	class UAbilitySystemComponent*                     AbilitySystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                          Attribute;                                                // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       SourceTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       TargetTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute
struct UAbilitySystemBlueprintLibrary_EqualEqual_GameplayAttributeGameplayAttribute_Params
{
	struct FGameplayAttribute                          AttributeA;                                               // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                          AttributeB;                                               // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin
struct UAbilitySystemBlueprintLibrary_EffectContextSetOrigin_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm, NativeAccessSpecifierPublic)
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid
struct UAbilitySystemBlueprintLibrary_EffectContextIsValid_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled
struct UAbilitySystemBlueprintLibrary_EffectContextIsInstigatorLocallyControlled_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult
struct UAbilitySystemBlueprintLibrary_EffectContextHasHitResult_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject
struct UAbilitySystemBlueprintLibrary_EffectContextGetSourceObject_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm, NativeAccessSpecifierPublic)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor
struct UAbilitySystemBlueprintLibrary_EffectContextGetOriginalInstigatorActor_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin
struct UAbilitySystemBlueprintLibrary_EffectContextGetOrigin_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor
struct UAbilitySystemBlueprintLibrary_EffectContextGetInstigatorActor_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult
struct UAbilitySystemBlueprintLibrary_EffectContextGetHitResult_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm, NativeAccessSpecifierPublic)
	struct FHitResult                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser
struct UAbilitySystemBlueprintLibrary_EffectContextGetEffectCauser_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult
struct UAbilitySystemBlueprintLibrary_EffectContextAddHitResult_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm, NativeAccessSpecifierPublic)
	struct FHitResult                                  HitResult;                                                // (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor
struct UAbilitySystemBlueprintLibrary_DoesTargetDataContainActor_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements
struct UAbilitySystemBlueprintLibrary_DoesGameplayCueMeetTagRequirements_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements                    SourceTagReqs;                                            // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements                    TargetTagReqs;                                            // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.CloneSpecHandle
struct UAbilitySystemBlueprintLibrary_CloneSpecHandle_Params
{
	class AActor*                                      InNewInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      InEffectCauser;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle                   GameplayEffectSpecHandle_Clone;                           // (Parm, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters
struct UAbilitySystemBlueprintLibrary_BreakGameplayCueParameters_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                              NormalizedMagnitude;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RawMagnitude;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm, OutParm, NativeAccessSpecifierPublic)
	struct FGameplayTag                                MatchedTagName;                                           // (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                OriginalTag;                                              // (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       AggregatedSourceTags;                                     // (Parm, OutParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       AggregatedTargetTags;                                     // (Parm, OutParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Normal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Instigator;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      EffectCauser;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     SourceObject;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                           PhysicalMaterial;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameplayEffectLevel;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AbilityLevel;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             TargetAttachComponent;                                    // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignTagSetByCallerMagnitude
struct UAbilitySystemBlueprintLibrary_AssignTagSetByCallerMagnitude_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (Parm, NativeAccessSpecifierPublic)
	struct FGameplayTag                                DataTag;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude
struct UAbilitySystemBlueprintLibrary_AssignSetByCallerMagnitude_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (Parm, NativeAccessSpecifierPublic)
	struct FName                                       DataName;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle
struct UAbilitySystemBlueprintLibrary_AppendTargetDataHandle_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetHandle;                                             // (Parm, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle            HandleToAdd;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle            ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec
struct UAbilitySystemBlueprintLibrary_AddLinkedGameplayEffectSpec_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (Parm, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle                   LinkedGameplayEffectSpec;                                 // (Parm, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffect
struct UAbilitySystemBlueprintLibrary_AddLinkedGameplayEffect_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (Parm, NativeAccessSpecifierPublic)
	class UClass*                                      LinkedGameplayEffect;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags
struct UAbilitySystemBlueprintLibrary_AddGrantedTags_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       NewGameplayTags;                                          // (Parm, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag
struct UAbilitySystemBlueprintLibrary_AddGrantedTag_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (Parm, NativeAccessSpecifierPublic)
	struct FGameplayTag                                NewGameplayTag;                                           // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags
struct UAbilitySystemBlueprintLibrary_AddAssetTags_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       NewGameplayTags;                                          // (Parm, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag
struct UAbilitySystemBlueprintLibrary_AddAssetTag_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (Parm, NativeAccessSpecifierPublic)
	struct FGameplayTag                                NewGameplayTag;                                           // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations
struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromLocations_Params
{
	struct FGameplayAbilityTargetingLocationInfo       SourceLocation;                                           // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetingLocationInfo       TargetLocation;                                           // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle            ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult
struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromHitResult_Params
{
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle            ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray
struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActorArray_Params
{
	TArray<class AActor*>                              ActorArray;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               OneTargetPerHandle;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle            ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor
struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle            ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
struct UAbilitySystemComponent_TryActivateAbilityByClass_Params
{
	class UClass*                                      InAbilityToActivate;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowRemoteActivation;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
struct UAbilitySystemComponent_TryActivateAbilitiesByTag_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bAllowRemoteActivation;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.TargetConfirm
struct UAbilitySystemComponent_TargetConfirm_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.TargetCancel
struct UAbilitySystemComponent_TargetCancel_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
struct UAbilitySystemComponent_SetUserAbilityActivationInhibited_Params
{
	bool                                               NewInhibit;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery
struct UAbilitySystemComponent_SetActiveGameplayEffectLevelUsingQuery_Params
{
	struct FGameplayEffectQuery                        Query;                                                    // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int                                                NewLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
struct UAbilitySystemComponent_SetActiveGameplayEffectLevel_Params
{
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
struct UAbilitySystemComponent_ServerTryActivateAbilityWithEventData_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToActivate;                                        // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InputPressed;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                              PredictionKey;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEventData                          TriggerEventData;                                         // (Parm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
struct UAbilitySystemComponent_ServerTryActivateAbility_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToActivate;                                        // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InputPressed;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                              PredictionKey;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
struct UAbilitySystemComponent_ServerSetReplicatedTargetDataCancelled_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                              AbilityOriginalPredictionKey;                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                              CurrentPredictionKey;                                     // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
struct UAbilitySystemComponent_ServerSetReplicatedTargetData_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                              AbilityOriginalPredictionKey;                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle            ReplicatedTargetDataHandle;                               // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                              CurrentPredictionKey;                                     // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload
struct UAbilitySystemComponent_ServerSetReplicatedEventWithPayload_Params
{
	TEnumAsByte<EAbilityGenericReplicatedEvent>        EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                              AbilityOriginalPredictionKey;                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                              CurrentPredictionKey;                                     // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                      VectorPayload;                                            // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
struct UAbilitySystemComponent_ServerSetReplicatedEvent_Params
{
	TEnumAsByte<EAbilityGenericReplicatedEvent>        EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                              AbilityOriginalPredictionKey;                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                              CurrentPredictionKey;                                     // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
struct UAbilitySystemComponent_ServerSetInputReleased_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
struct UAbilitySystemComponent_ServerSetInputPressed_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings
struct UAbilitySystemComponent_ServerPrintDebug_RequestWithStrings_Params
{
	TArray<struct FString>                             Strings;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request
struct UAbilitySystemComponent_ServerPrintDebug_Request_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility
struct UAbilitySystemComponent_ServerEndAbility_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToEnd;                                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilityActivationInfo              ActivationInfo;                                           // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FPredictionKey                              PredictionKey;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate
struct UAbilitySystemComponent_ServerCurrentMontageSetPlayRate_Params
{
	class UAnimMontage*                                ClientAnimMontage;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
struct UAbilitySystemComponent_ServerCurrentMontageSetNextSectionName_Params
{
	class UAnimMontage*                                ClientAnimMontage;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ClientPosition;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SectionName;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NextSectionName;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
struct UAbilitySystemComponent_ServerCurrentMontageJumpToSectionName_Params
{
	class UAnimMontage*                                ClientAnimMontage;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SectionName;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
struct UAbilitySystemComponent_ServerCancelAbility_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToCancel;                                          // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilityActivationInfo              ActivationInfo;                                           // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch
struct UAbilitySystemComponent_ServerAbilityRPCBatch_Params
{
	struct FGameplayAbilities_FServerAbilityRPCBatch   BatchInfo;                                                // (Parm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
struct UAbilitySystemComponent_RemoveActiveGameplayEffectBySourceEffect_Params
{
	class UClass*                                      GameplayEffect;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*                     InstigatorAbilitySystemComponent;                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StacksToRemove;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
struct UAbilitySystemComponent_RemoveActiveGameplayEffect_Params
{
	struct FActiveGameplayEffectHandle                 Handle;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StacksToRemove;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
struct UAbilitySystemComponent_RemoveActiveEffectsWithTags_Params
{
	struct FGameplayTagContainer                       Tags;                                                     // (Parm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags
struct UAbilitySystemComponent_RemoveActiveEffectsWithSourceTags_Params
{
	struct FGameplayTagContainer                       Tags;                                                     // (Parm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags
struct UAbilitySystemComponent_RemoveActiveEffectsWithGrantedTags_Params
{
	struct FGameplayTagContainer                       Tags;                                                     // (Parm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags
struct UAbilitySystemComponent_RemoveActiveEffectsWithAppliedTags_Params
{
	struct FGameplayTagContainer                       Tags;                                                     // (Parm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString
struct UAbilitySystemComponent_OnRep_ServerDebugString_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
struct UAbilitySystemComponent_OnRep_ReplicatedAnimMontage_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
struct UAbilitySystemComponent_OnRep_OwningActor_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString
struct UAbilitySystemComponent_OnRep_ClientDebugString_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
struct UAbilitySystemComponent_OnRep_ActivateAbilities_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesExecuted_WithParams_Params
{
	struct FGameplayTagContainer                       GameplayCueTags;                                          // (ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FPredictionKey                              PredictionKey;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                      GameplayCueParameters;                                    // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesExecuted_Params
{
	struct FGameplayTagContainer                       GameplayCueTags;                                          // (ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FPredictionKey                              PredictionKey;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams_Params
{
	struct FGameplayTagContainer                       GameplayCueTags;                                          // (ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FPredictionKey                              PredictionKey;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                      GameplayCueParameters;                                    // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_WithParams_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                              PredictionKey;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                      GameplayCueParameters;                                    // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_FromSpec_Params
{
	struct FGameplayEffectSpecForRPC                   Spec;                                                     // (ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FPredictionKey                              PredictionKey;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                              PredictionKey;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                              PredictionKey;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                      GameplayCueParameters;                                    // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec_Params
{
	struct FGameplayEffectSpecForRPC                   Spec;                                                     // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FPredictionKey                              PredictionKey;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_WithParams_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                              PredictionKey;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                              PredictionKey;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
struct UAbilitySystemComponent_MakeOutgoingSpec_Params
{
	class UClass*                                      GameplayEffectClass;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle                Context;                                                  // (Parm, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext
struct UAbilitySystemComponent_MakeEffectContext_Params
{
	struct FGameplayEffectContextHandle                ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.K2_InitStats
struct UAbilitySystemComponent_K2_InitStats_Params
{
	class UClass*                                      Attributes;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  DataTable;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
struct UAbilitySystemComponent_IsGameplayCueActive_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
struct UAbilitySystemComponent_GetUserAbilityActivationInhibited_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
struct UAbilitySystemComponent_GetGameplayEffectMagnitude_Params
{
	struct FActiveGameplayEffectHandle                 Handle;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                          Attribute;                                                // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
struct UAbilitySystemComponent_GetGameplayEffectCount_Params
{
	class UClass*                                      SourceGameplayEffect;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*                     OptionalInstigatorFilterComponent;                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnforceOnGoingCheck;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.GetActiveEffects
struct UAbilitySystemComponent_GetActiveEffects_Params
{
	struct FGameplayEffectQuery                        Query;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FActiveGameplayEffectHandle>         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
struct UAbilitySystemComponent_ClientTryActivateAbility_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToActivate;                                        // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
struct UAbilitySystemComponent_ClientSetReplicatedEvent_Params
{
	TEnumAsByte<EAbilityGenericReplicatedEvent>        EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                              AbilityOriginalPredictionKey;                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response
struct UAbilitySystemComponent_ClientPrintDebug_Response_Params
{
	TArray<struct FString>                             Strings;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                GameFlags;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility
struct UAbilitySystemComponent_ClientEndAbility_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToEnd;                                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilityActivationInfo              ActivationInfo;                                           // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
struct UAbilitySystemComponent_ClientCancelAbility_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToCancel;                                          // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilityActivationInfo              ActivationInfo;                                           // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
struct UAbilitySystemComponent_ClientActivateAbilitySucceedWithEventData_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToActivate;                                        // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                              PredictionKey;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEventData                          TriggerEventData;                                         // (Parm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
struct UAbilitySystemComponent_ClientActivateAbilitySucceed_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToActivate;                                        // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPredictionKey                              PredictionKey;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
struct UAbilitySystemComponent_ClientActivateAbilityFailed_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToActivate;                                        // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16_t                                            PredictionKey;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
struct UAbilitySystemComponent_BP_ApplyGameplayEffectToTarget_Params
{
	class UClass*                                      GameplayEffectClass;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*                     Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle                Context;                                                  // (Parm, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle                 ReturnValue;                                              // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
struct UAbilitySystemComponent_BP_ApplyGameplayEffectToSelf_Params
{
	class UClass*                                      GameplayEffectClass;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle                 ReturnValue;                                              // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
struct UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToTarget_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*                     Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle                 ReturnValue;                                              // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
struct UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToSelf_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle                 ReturnValue;                                              // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
struct UAbilitySystemComponent_AbilityConfirmOrCancel__DelegateSignature_Params
{
};

// DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
struct UAbilitySystemComponent_AbilityAbilityKey__DelegateSignature_Params
{
	int                                                InputID;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts
struct UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCosts_Params
{
};

// Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns
struct UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCooldowns_Params
{
};

// Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce
struct UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WorldDirection;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Strength;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAdditive;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 StrengthOverTime;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERootMotionFinishVelocityMode                      VelocityOnFinishMode;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SetVelocityOnFinish;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ClampVelocityOnFinish;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_ApplyRootMotionConstantForce*   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback
struct UAbilityTask_ApplyRootMotionJumpForce_OnLandedCallback_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish
struct UAbilityTask_ApplyRootMotionJumpForce_Finish_Params
{
};

// Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce
struct UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumLandedTriggerTime;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFinishOnLanded;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERootMotionFinishVelocityMode                      VelocityOnFinishMode;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SetVelocityOnFinish;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ClampVelocityOnFinish;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveVector*                                PathOffsetCurve;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 TimeMappingCurve;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_ApplyRootMotionJumpForce*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnTargetActorSwapped
struct UAbilityTask_ApplyRootMotionMoveToActorForce_OnTargetActorSwapped_Params
{
	class AActor*                                      OriginalTarget;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation
struct UAbilityTask_ApplyRootMotionMoveToActorForce_OnRep_TargetLocation_Params
{
};

// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToTargetDataActorForce
struct UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle            TargetDataHandle;                                         // (Parm, NativeAccessSpecifierPublic)
	int                                                TargetDataIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TargetActorIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TargetLocationOffset;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERootMotionMoveToActorTargetOffsetType             OffsetAlignment;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 TargetLerpSpeedHorizontal;                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 TargetLerpSpeedVertical;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSetNewMovementMode;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRestrictSpeedToExpected;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveVector*                                PathOffsetCurve;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 TimeMappingCurve;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERootMotionFinishVelocityMode                      VelocityOnFinishMode;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SetVelocityOnFinish;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ClampVelocityOnFinish;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisableDestinationReachedInterrupt;                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_ApplyRootMotionMoveToActorForce* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce
struct UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TargetLocationOffset;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERootMotionMoveToActorTargetOffsetType             OffsetAlignment;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 TargetLerpSpeedHorizontal;                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 TargetLerpSpeedVertical;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSetNewMovementMode;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRestrictSpeedToExpected;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveVector*                                PathOffsetCurve;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 TimeMappingCurve;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERootMotionFinishVelocityMode                      VelocityOnFinishMode;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SetVelocityOnFinish;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ClampVelocityOnFinish;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisableDestinationReachedInterrupt;                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_ApplyRootMotionMoveToActorForce* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce
struct UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TargetLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSetNewMovementMode;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRestrictSpeedToExpected;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveVector*                                PathOffsetCurve;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERootMotionFinishVelocityMode                      VelocityOnFinishMode;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SetVelocityOnFinish;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ClampVelocityOnFinish;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_ApplyRootMotionMoveToForce*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce
struct UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      LocationActor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Strength;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPush;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAdditive;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNoZForce;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 StrengthDistanceFalloff;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 StrengthOverTime;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseFixedWorldDirection;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    FixedWorldDirection;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	ERootMotionFinishVelocityMode                      VelocityOnFinishMode;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SetVelocityOnFinish;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ClampVelocityOnFinish;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_ApplyRootMotionRadialForce*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
struct UAbilityTask_MoveToLocation_MoveToLocation_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 OptionalInterpolationCurve;                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveVector*                                OptionalVectorInterpolationCurve;                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_MoveToLocation*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
struct UAbilityTask_NetworkSyncPoint_WaitNetSync_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAbilityTaskNetSyncType                            SyncType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_NetworkSyncPoint*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
struct UAbilityTask_NetworkSyncPoint_OnSignalCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
struct UAbilityTask_PlayMontageAndWait_OnMontageInterrupted_Params
{
};

// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded
struct UAbilityTask_PlayMontageAndWait_OnMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
struct UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
struct UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                MontageToPlay;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       StartSection;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopWhenAbilityEnds;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnimRootMotionTranslationScale;                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_PlayMontageAndWait*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_Repeat.RepeatAction
struct UAbilityTask_Repeat_RepeatAction_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeBetweenActions;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalActionCount;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_Repeat*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
struct UAbilityTask_SpawnActor_SpawnActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (Parm, NativeAccessSpecifierPublic)
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_SpawnActor*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
struct UAbilityTask_SpawnActor_FinishSpawningActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (Parm, NativeAccessSpecifierPublic)
	class AActor*                                      SpawnedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
struct UAbilityTask_SpawnActor_BeginSpawningActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (Parm, NativeAccessSpecifierPublic)
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      SpawnedActor;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
struct UAbilityTask_StartAbilityState_StartAbilityState_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       StateName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEndCurrentState;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_StartAbilityState*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
struct UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGameplayAbilityTargetActor*                 TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_VisualizeTargeting*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
struct UAbilityTask_VisualizeTargeting_VisualizeTargeting_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_VisualizeTargeting*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
struct UAbilityTask_VisualizeTargeting_FinishSpawningActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGameplayAbilityTargetActor*                 SpawnedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
struct UAbilityTask_VisualizeTargeting_BeginSpawningActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGameplayAbilityTargetActor*                 SpawnedActor;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements
struct UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements                    TagRequirements;                                          // (Parm, NativeAccessSpecifierPublic)
	bool                                               IncludeTriggeredAbilities;                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TriggerOnce;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitAbilityActivate*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate_Query
struct UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                           Query;                                                    // (Parm, NativeAccessSpecifierPublic)
	bool                                               IncludeTriggeredAbilities;                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TriggerOnce;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitAbilityActivate*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
struct UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                WithTag;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                WithoutTag;                                               // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IncludeTriggeredAbilities;                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TriggerOnce;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitAbilityActivate*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
struct UAbilityTask_WaitAbilityActivate_OnAbilityActivate_Params
{
	class UGameplayAbility*                            ActivatedAbility;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit_Query
struct UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                           Query;                                                    // (Parm, NativeAccessSpecifierPublic)
	bool                                               TriggerOnce;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitAbilityCommit*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
struct UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                WithTag;                                                  // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                WithoutTage;                                              // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TriggerOnce;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitAbilityCommit*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
struct UAbilityTask_WaitAbilityCommit_OnAbilityCommit_Params
{
	class UGameplayAbility*                            ActivatedAbility;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
struct UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                          InAttribute;                                              // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                InWithTag;                                                // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                InWithoutTag;                                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EWaitAttributeChangeComparison>        InComparisonType;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InComparisonValue;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TriggerOnce;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OptionalExternalOwner;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitAttributeChange*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
struct UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                          Attribute;                                                // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                WithSrcTag;                                               // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                WithoutSrcTag;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TriggerOnce;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OptionalExternalOwner;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitAttributeChange*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold
struct UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                          AttributeNumerator;                                       // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                          AttributeDenominator;                                     // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EWaitAttributeChangeComparison>        ComparisonType;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ComparisonValue;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTriggerOnce;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OptionalExternalOwner;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitAttributeChangeRatioThreshold* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold
struct UAbilityTask_WaitAttributeChangeThreshold_WaitForAttributeChangeThreshold_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                          Attribute;                                                // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EWaitAttributeChangeComparison>        ComparisonType;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ComparisonValue;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTriggerOnce;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OptionalExternalOwner;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitAttributeChangeThreshold*   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
struct UAbilityTask_WaitCancel_WaitCancel_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitCancel*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
struct UAbilityTask_WaitCancel_OnLocalCancelCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
struct UAbilityTask_WaitCancel_OnCancelCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
struct UAbilityTask_WaitConfirm_WaitConfirm_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitConfirm*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
struct UAbilityTask_WaitConfirm_OnConfirmCallback_Params
{
	class UGameplayAbility*                            InAbility;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
struct UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitConfirmCancel*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
struct UAbilityTask_WaitConfirmCancel_OnLocalConfirmCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
struct UAbilityTask_WaitConfirmCancel_OnLocalCancelCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
struct UAbilityTask_WaitConfirmCancel_OnConfirmCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
struct UAbilityTask_WaitConfirmCancel_OnCancelCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
struct UAbilityTask_WaitDelay_WaitDelay_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitDelay*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
struct UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Params
{
	class UAbilitySystemComponent*                     Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpec                         SpecApplied;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf_Query
struct UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTargetDataFilterHandle             SourceFilter;                                             // (ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                           SourceTagQuery;                                           // (Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                           TargetTagQuery;                                           // (Parm, NativeAccessSpecifierPublic)
	bool                                               TriggerOnce;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OptionalExternalOwner;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ListenForPeriodicEffect;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitGameplayEffectApplied_Self* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
struct UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTargetDataFilterHandle             SourceFilter;                                             // (ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements                    SourceTagRequirements;                                    // (Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements                    TargetTagRequirements;                                    // (Parm, NativeAccessSpecifierPublic)
	bool                                               TriggerOnce;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OptionalExternalOwner;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ListenForPeriodicEffect;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitGameplayEffectApplied_Self* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget_Query
struct UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTargetDataFilterHandle             SourceFilter;                                             // (ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                           SourceTagQuery;                                           // (Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                           TargetTagQuery;                                           // (Parm, NativeAccessSpecifierPublic)
	bool                                               TriggerOnce;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OptionalExternalOwner;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ListenForPeriodicEffect;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitGameplayEffectApplied_Target* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
struct UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTargetDataFilterHandle             TargetFilter;                                             // (ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements                    SourceTagRequirements;                                    // (Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements                    TargetTagRequirements;                                    // (Parm, NativeAccessSpecifierPublic)
	bool                                               TriggerOnce;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OptionalExternalOwner;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ListenForPeriodicEffects;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitGameplayEffectApplied_Target* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity
struct UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements                    SourceTagRequirements;                                    // (Parm, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements                    TargetTagRequirements;                                    // (Parm, NativeAccessSpecifierPublic)
	class AActor*                                      OptionalExternalTarget;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OnlyTriggerOnce;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitGameplayEffectBlockedImmunity* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
struct UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle                 Handle;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitGameplayEffectRemoved*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
struct UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Params
{
	struct FGameplayEffectRemovalInfo                  InGameplayEffectRemovalInfo;                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange
struct UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle                 Handle;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitGameplayEffectStackChange*  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange
struct UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Params
{
	struct FActiveGameplayEffectHandle                 Handle;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OldCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent
struct UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                EventTag;                                                 // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OptionalExternalTarget;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OnlyTriggerOnce;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OnlyMatchExact;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitGameplayEvent*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
struct UAbilityTask_WaitGameplayTag_GameplayTagCallback_Params
{
	struct FGameplayTag                                Tag;                                                      // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
struct UAbilityTask_WaitGameplayTagAdded_WaitGameplayTagAdd_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                Tag;                                                      // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      InOptionalExternalTarget;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OnlyTriggerOnce;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitGameplayTagAdded*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
struct UAbilityTask_WaitGameplayTagRemoved_WaitGameplayTagRemove_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                Tag;                                                      // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      InOptionalExternalTarget;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OnlyTriggerOnce;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitGameplayTagRemoved*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
struct UAbilityTask_WaitInputPress_WaitInputPress_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTestAlreadyPressed;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitInputPress*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
struct UAbilityTask_WaitInputPress_OnPressCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
struct UAbilityTask_WaitInputRelease_WaitInputRelease_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTestAlreadyReleased;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitInputRelease*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
struct UAbilityTask_WaitInputRelease_OnReleaseCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
struct UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
struct UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EMovementMode>                         NewMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitMovementModeChange*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
struct UAbilityTask_WaitOverlap_WaitForOverlap_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitOverlap*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
struct UAbilityTask_WaitOverlap_OnHitCallback_Params
{
	class UPrimitiveComponent*                         HitComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
struct UAbilityTask_WaitTargetData_WaitTargetDataUsingActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EGameplayTargetingConfirmation>        ConfirmationType;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGameplayAbilityTargetActor*                 TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitTargetData*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
struct UAbilityTask_WaitTargetData_WaitTargetData_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EGameplayTargetingConfirmation>        ConfirmationType;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitTargetData*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
struct UAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
struct UAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Params
{
	struct FGameplayAbilityTargetDataHandle            Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayTag                                ActivationTag;                                            // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
struct UAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Params
{
	struct FGameplayAbilityTargetDataHandle            Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
struct UAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Params
{
	struct FGameplayAbilityTargetDataHandle            Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
struct UAbilityTask_WaitTargetData_FinishSpawningActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGameplayAbilityTargetActor*                 SpawnedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
struct UAbilityTask_WaitTargetData_BeginSpawningActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGameplayAbilityTargetActor*                 SpawnedActor;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
struct UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumMagnitude;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTask_WaitVelocityChange*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
struct UGameplayAbility_SetShouldBlockOtherAbilities_Params
{
	bool                                               bShouldBlockAbilities;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.SetCanBeCanceled
struct UGameplayAbility_SetCanBeCanceled_Params
{
	bool                                               bCanBeCanceled;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.SendGameplayEvent
struct UGameplayAbility_SendGameplayEvent_Params
{
	struct FGameplayTag                                EventTag;                                                 // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEventData                          Payload;                                                  // (Parm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.RemoveGrantedByEffect
struct UGameplayAbility_RemoveGrantedByEffect_Params
{
};

// Function GameplayAbilities.GameplayAbility.MontageStop
struct UGameplayAbility_MontageStop_Params
{
	float                                              OverrideBlendOutTime;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName
struct UGameplayAbility_MontageSetNextSectionName_Params
{
	struct FName                                       FromSectionName;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ToSectionName;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.MontageJumpToSection
struct UGameplayAbility_MontageJumpToSection_Params
{
	struct FName                                       SectionName;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
struct UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Params
{
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetingLocationInfo       ReturnValue;                                              // (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
struct UGameplayAbility_MakeTargetLocationInfoFromOwnerActor_Params
{
	struct FGameplayAbilityTargetingLocationInfo       ReturnValue;                                              // (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
struct UGameplayAbility_MakeOutgoingGameplayEffectSpec_Params
{
	class UClass*                                      GameplayEffectClass;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
struct UGameplayAbility_K2_ShouldAbilityRespondToEvent_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayEventData                          Payload;                                                  // (Parm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
struct UGameplayAbility_K2_RemoveGameplayCue_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.K2_OnEndAbility
struct UGameplayAbility_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
struct UGameplayAbility_K2_ExecuteGameplayCueWithParams_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                      GameplayCueParameters;                                    // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
struct UGameplayAbility_K2_ExecuteGameplayCue_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle                Context;                                                  // (Parm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.K2_EndAbility
struct UGameplayAbility_K2_EndAbility_Params
{
};

// Function GameplayAbilities.GameplayAbility.K2_CommitExecute
struct UGameplayAbility_K2_CommitExecute_Params
{
};

// Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
struct UGameplayAbility_K2_CommitAbilityCost_Params
{
	bool                                               BroadcastCommitEvent;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
struct UGameplayAbility_K2_CommitAbilityCooldown_Params
{
	bool                                               BroadcastCommitEvent;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ForceCooldown;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.K2_CommitAbility
struct UGameplayAbility_K2_CommitAbility_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
struct UGameplayAbility_K2_CheckAbilityCost_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
struct UGameplayAbility_K2_CheckAbilityCooldown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.K2_CancelAbility
struct UGameplayAbility_K2_CancelAbility_Params
{
};

// Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility
struct UGameplayAbility_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       RelevantTags;                                             // (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
struct UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Params
{
	struct FGameplayEffectSpecHandle                   EffectSpecHandle;                                         // (ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (Parm, NativeAccessSpecifierPublic)
	TArray<struct FActiveGameplayEffectHandle>         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
struct UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Params
{
	struct FGameplayEffectSpecHandle                   EffectSpecHandle;                                         // (ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle                 ReturnValue;                                              // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams
struct UGameplayAbility_K2_AddGameplayCueWithParams_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                      GameplayCueParameter;                                     // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               bRemoveOnAbilityEnd;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue
struct UGameplayAbility_K2_AddGameplayCue_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle                Context;                                                  // (Parm, NativeAccessSpecifierPublic)
	bool                                               bRemoveOnAbilityEnd;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
struct UGameplayAbility_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.K2_ActivateAbility
struct UGameplayAbility_K2_ActivateAbility_Params
{
};

// Function GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey
struct UGameplayAbility_InvalidateClientPredictionKey_Params
{
};

// Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
struct UGameplayAbility_GetOwningComponentFromActorInfo_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
struct UGameplayAbility_GetOwningActorFromActorInfo_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.GetGrantedByEffectContext
struct UGameplayAbility_GetGrantedByEffectContext_Params
{
	struct FGameplayEffectContextHandle                ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject
struct UGameplayAbility_GetCurrentSourceObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.GetCurrentMontage
struct UGameplayAbility_GetCurrentMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining
struct UGameplayAbility_GetCooldownTimeRemaining_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.GetContextFromOwner
struct UGameplayAbility_GetContextFromOwner_Params
{
	struct FGameplayAbilityTargetDataHandle            OptionalTargetData;                                       // (Parm, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle                ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
struct UGameplayAbility_GetAvatarActorFromActorInfo_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.GetActorInfo
struct UGameplayAbility_GetActorInfo_Params
{
	struct FGameplayAbilityActorInfo                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.GetAbilitySystemComponentFromActorInfo
struct UGameplayAbility_GetAbilitySystemComponentFromActorInfo_Params
{
	class UAbilitySystemComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.GetAbilityLevel
struct UGameplayAbility_GetAbilityLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName
struct UGameplayAbility_EndTaskByInstanceName_Params
{
	struct FName                                       InstanceName;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.EndAbilityState
struct UGameplayAbility_EndAbilityState_Params
{
	struct FName                                       OptionalStateNameToEnd;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
struct UGameplayAbility_ConfirmTaskByInstanceName_Params
{
	struct FName                                       InstanceName;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEndTask;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
struct UGameplayAbility_CancelTaskByInstanceName_Params
{
	struct FName                                       InstanceName;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle
struct UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithHandle_Params
{
	struct FActiveGameplayEffectHandle                 Handle;                                                   // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StacksToRemove;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
struct UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Params
{
	struct FGameplayTagContainer                       WithGrantedTags;                                          // (Parm, NativeAccessSpecifierPublic)
	int                                                StacksToRemove;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
struct UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Params
{
	struct FGameplayTagContainer                       WithAssetTags;                                            // (Parm, NativeAccessSpecifierPublic)
	int                                                StacksToRemove;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
struct UGameplayAbility_BP_ApplyGameplayEffectToTarget_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (Parm, NativeAccessSpecifierPublic)
	class UClass*                                      GameplayEffectClass;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameplayEffectLevel;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Stacks;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FActiveGameplayEffectHandle>         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
struct UGameplayAbility_BP_ApplyGameplayEffectToOwner_Params
{
	class UClass*                                      GameplayEffectClass;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameplayEffectLevel;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Stacks;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle                 ReturnValue;                                              // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
struct AGameplayAbilityTargetActor_ConfirmTargeting_Params
{
};

// Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
struct AGameplayAbilityTargetActor_CancelTargeting_Params
{
};

// Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
struct AGameplayAbilityWorldReticle_SetReticleMaterialParamVector_Params
{
	struct FName                                       ParamName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
struct AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Params
{
	struct FName                                       ParamName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
struct AGameplayAbilityWorldReticle_OnValidTargetChanged_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
struct AGameplayAbilityWorldReticle_OnTargetingAnActor_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
struct AGameplayAbilityWorldReticle_OnParametersInitialized_Params
{
};

// Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
struct AGameplayAbilityWorldReticle_FaceTowardSource_Params
{
	bool                                               bFaceIn2D;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent
struct UGameplayCueInterface_ForwardGameplayCueToParent_Params
{
};

// Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler
struct UGameplayCueInterface_BlueprintCustomHandler_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive
struct AGameplayCueNotify_Actor_WhileActive_Params
{
	class AActor*                                      MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove
struct AGameplayCueNotify_Actor_OnRemove_Params
{
	class AActor*                                      MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
struct AGameplayCueNotify_Actor_OnOwnerDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute
struct AGameplayCueNotify_Actor_OnExecute_Params
{
	class AActor*                                      MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayCueNotify_Actor.OnActive
struct AGameplayCueNotify_Actor_OnActive_Params
{
	class AActor*                                      MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
struct AGameplayCueNotify_Actor_K2_HandleGameplayCue_Params
{
	class AActor*                                      MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue
struct AGameplayCueNotify_Actor_K2_EndGameplayCue_Params
{
};

// Function GameplayAbilities.GameplayCueNotify_Static.WhileActive
struct UGameplayCueNotify_Static_WhileActive_Params
{
	class AActor*                                      MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayCueNotify_Static.OnRemove
struct UGameplayCueNotify_Static_OnRemove_Params
{
	class AActor*                                      MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayCueNotify_Static.OnExecute
struct UGameplayCueNotify_Static_OnExecute_Params
{
	class AActor*                                      MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayCueNotify_Static.OnActive
struct UGameplayCueNotify_Static_OnActive_Params
{
	class AActor*                                      MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
struct UGameplayCueNotify_Static_K2_HandleGameplayCue_Params
{
	class AActor*                                      MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect
struct UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Params
{
	class UGameplayEffect*                             GameplayEffect;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpec                         Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*                     ASC;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute
struct UGameplayEffectExecutionCalculation_Execute_Params
{
	struct FGameplayEffectCustomExecutionParameters    ExecutionParams;                                          // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGameplayEffectCustomExecutionOutput        OutExecutionOutput;                                       // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
struct UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
struct UGameplayTagReponseTable_TagResponseEvent_Params
{
	struct FGameplayTag                                Tag;                                                      // (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*                     ASC;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
