// Fortnite (11.00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Niagara.NiagaraComponent.SetVariableVec4
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableVec4(struct FName InVariableName, struct FVector4 InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableVec4");

	UNiagaraComponent_SetVariableVec4_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariableVec3
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableVec3(struct FName InVariableName, struct FVector InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableVec3");

	UNiagaraComponent_SetVariableVec3_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariableVec2
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableVec2(struct FName InVariableName, struct FVector2D InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableVec2");

	UNiagaraComponent_SetVariableVec2_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariableQuat
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                   InValue                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableQuat(struct FName InVariableName, struct FQuat InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableQuat");

	UNiagaraComponent_SetVariableQuat_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariableObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableObject(struct FName InVariableName, class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableObject");

	UNiagaraComponent_SetVariableObject_Params params;
	params.InVariableName = InVariableName;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariableLinearColor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableLinearColor(struct FName InVariableName, struct FLinearColor InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableLinearColor");

	UNiagaraComponent_SetVariableLinearColor_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariableInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableInt(struct FName InVariableName, int InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableInt");

	UNiagaraComponent_SetVariableInt_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariableFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableFloat(struct FName InVariableName, float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableFloat");

	UNiagaraComponent_SetVariableFloat_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariableBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableBool(struct FName InVariableName, bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableBool");

	UNiagaraComponent_SetVariableBool_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetVariableActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InVariableName                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableActor(struct FName InVariableName, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetVariableActor");

	UNiagaraComponent_SetVariableActor_Params params;
	params.InVariableName = InVariableName;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetSeekDelta
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InSeekDelta                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetSeekDelta(float InSeekDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetSeekDelta");

	UNiagaraComponent_SetSeekDelta_Params params;
	params.InSeekDelta = InSeekDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetRenderingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInRenderingEnabled            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetRenderingEnabled(bool bInRenderingEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetRenderingEnabled");

	UNiagaraComponent_SetRenderingEnabled_Params params;
	params.bInRenderingEnabled = bInRenderingEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetPreviewLODDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnablePreviewLODDistance      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PreviewLODDistance             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetPreviewLODDistance");

	UNiagaraComponent_SetPreviewLODDistance_Params params;
	params.bEnablePreviewLODDistance = bEnablePreviewLODDistance;
	params.PreviewLODDistance = PreviewLODDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetPreviewDetailLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnablePreviewDetailLevel      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PreviewDetailLevel             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetPreviewDetailLevel(bool bEnablePreviewDetailLevel, int PreviewDetailLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetPreviewDetailLevel");

	UNiagaraComponent_SetPreviewDetailLevel_Params params;
	params.bEnablePreviewDetailLevel = bEnablePreviewDetailLevel;
	params.PreviewDetailLevel = PreviewDetailLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInPaused                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetPaused(bool bInPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetPaused");

	UNiagaraComponent_SetPaused_Params params;
	params.bInPaused = bInPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableVec4(struct FString InVariableName, struct FVector4 InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableVec4");

	UNiagaraComponent_SetNiagaraVariableVec4_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableVec3(struct FString InVariableName, struct FVector InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableVec3");

	UNiagaraComponent_SetNiagaraVariableVec3_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableVec2(struct FString InVariableName, struct FVector2D InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableVec2");

	UNiagaraComponent_SetNiagaraVariableVec2_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableQuat
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                   InValue                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableQuat(struct FString InVariableName, struct FQuat InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableQuat");

	UNiagaraComponent_SetNiagaraVariableQuat_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableObject(struct FString InVariableName, class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableObject");

	UNiagaraComponent_SetNiagaraVariableObject_Params params;
	params.InVariableName = InVariableName;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableLinearColor(struct FString InVariableName, struct FLinearColor InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor");

	UNiagaraComponent_SetNiagaraVariableLinearColor_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableInt(struct FString InVariableName, int InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableInt");

	UNiagaraComponent_SetNiagaraVariableInt_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableFloat(struct FString InVariableName, float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableFloat");

	UNiagaraComponent_SetNiagaraVariableFloat_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableBool(struct FString InVariableName, bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableBool");

	UNiagaraComponent_SetNiagaraVariableBool_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableActor(struct FString InVariableName, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetNiagaraVariableActor");

	UNiagaraComponent_SetNiagaraVariableActor_Params params;
	params.InVariableName = InVariableName;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetMaxSimTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InMaxTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetMaxSimTime(float InMaxTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetMaxSimTime");

	UNiagaraComponent_SetMaxSimTime_Params params;
	params.InMaxTime = InMaxTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetForceSolo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInForceSolo                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetForceSolo(bool bInForceSolo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetForceSolo");

	UNiagaraComponent_SetForceSolo_Params params;
	params.bInForceSolo = bInForceSolo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetDesiredAge
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InDesiredAge                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetDesiredAge(float InDesiredAge)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetDesiredAge");

	UNiagaraComponent_SetDesiredAge_Params params;
	params.InDesiredAge = InDesiredAge;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInCanRenderWhileSeeking       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking");

	UNiagaraComponent_SetCanRenderWhileSeeking_Params params;
	params.bInCanRenderWhileSeeking = bInCanRenderWhileSeeking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetAutoDestroy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInAutoDestroy                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetAutoDestroy(bool bInAutoDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetAutoDestroy");

	UNiagaraComponent_SetAutoDestroy_Params params;
	params.bInAutoDestroy = bInAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UNiagaraSystem*          InAsset                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetAsset(class UNiagaraSystem* InAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetAsset");

	UNiagaraComponent_SetAsset_Params params;
	params.InAsset = InAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetAgeUpdateMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ENiagaraAgeUpdateMode          InAgeUpdateMode                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SetAgeUpdateMode");

	UNiagaraComponent_SetAgeUpdateMode_Params params;
	params.InAgeUpdateMode = InAgeUpdateMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SeekToDesiredAge
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InDesiredAge                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SeekToDesiredAge(float InDesiredAge)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.SeekToDesiredAge");

	UNiagaraComponent_SeekToDesiredAge_Params params;
	params.InDesiredAge = InDesiredAge;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.ResetSystem
// (Final, Native, Public, BlueprintCallable)

void UNiagaraComponent::ResetSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.ResetSystem");

	UNiagaraComponent_ResetSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.ReinitializeSystem
// (Final, Native, Public, BlueprintCallable)

void UNiagaraComponent::ReinitializeSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.ReinitializeSystem");

	UNiagaraComponent_ReinitializeSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNiagaraComponent::IsPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.IsPaused");

	UNiagaraComponent_IsPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetSeekDelta
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNiagaraComponent::GetSeekDelta()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetSeekDelta");

	UNiagaraComponent_GetSeekDelta_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InEmitterName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 InValueName                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVector> UNiagaraComponent::GetNiagaraParticleValueVec3_DebugOnly(struct FString InEmitterName, struct FString InValueName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly");

	UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Params params;
	params.InEmitterName = InEmitterName;
	params.InValueName = InValueName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InEmitterName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 InValueName                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<float> UNiagaraComponent::GetNiagaraParticleValues_DebugOnly(struct FString InEmitterName, struct FString InValueName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly");

	UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Params params;
	params.InEmitterName = InEmitterName;
	params.InValueName = InValueName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InEmitterName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVector> UNiagaraComponent::GetNiagaraParticlePositions_DebugOnly(struct FString InEmitterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly");

	UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Params params;
	params.InEmitterName = InEmitterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetMaxSimTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNiagaraComponent::GetMaxSimTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetMaxSimTime");

	UNiagaraComponent_GetMaxSimTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetForceSolo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNiagaraComponent::GetForceSolo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetForceSolo");

	UNiagaraComponent_GetForceSolo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetDesiredAge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNiagaraComponent::GetDesiredAge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetDesiredAge");

	UNiagaraComponent_GetDesiredAge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetAsset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UNiagaraSystem*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNiagaraSystem* UNiagaraComponent::GetAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetAsset");

	UNiagaraComponent_GetAsset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.GetAgeUpdateMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ENiagaraAgeUpdateMode          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

ENiagaraAgeUpdateMode UNiagaraComponent::GetAgeUpdateMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.GetAgeUpdateMode");

	UNiagaraComponent_GetAgeUpdateMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraComponent.AdvanceSimulationByTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          SimulateTime                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TickDeltaSeconds               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.AdvanceSimulationByTime");

	UNiagaraComponent_AdvanceSimulationByTime_Params params;
	params.SimulateTime = SimulateTime;
	params.TickDeltaSeconds = TickDeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.AdvanceSimulation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TickCount                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TickDeltaSeconds               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::AdvanceSimulation(int TickCount, float TickDeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraComponent.AdvanceSimulation");

	UNiagaraComponent_AdvanceSimulation_Params params;
	params.TickCount = TickCount;
	params.TickDeltaSeconds = TickDeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraSystem*          SystemTemplate                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*         AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   AttachPointName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// TEnumAsByte<EAttachLocation>   LocationType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAutoActivate                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNiagaraComponent* UNiagaraFunctionLibrary::SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, bool bAutoActivate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached");

	UNiagaraFunctionLibrary_SpawnSystemAttached_Params params;
	params.SystemTemplate = SystemTemplate;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.LocationType = LocationType;
	params.bAutoDestroy = bAutoDestroy;
	params.bAutoActivate = bAutoActivate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraSystem*          SystemTemplate                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                 Scale                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAutoActivate                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNiagaraComponent* UNiagaraFunctionLibrary::SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, struct FVector Location, struct FRotator Rotation, struct FVector Scale, bool bAutoDestroy, bool bAutoActivate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation");

	UNiagaraFunctionLibrary_SpawnSystemAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SystemTemplate = SystemTemplate;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;
	params.bAutoDestroy = bAutoDestroy;
	params.bAutoActivate = bAutoActivate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OverrideName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMeshComponent*    StaticMeshComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraFunctionLibrary::OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, struct FString OverrideName, class UStaticMeshComponent* StaticMeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent");

	UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.StaticMeshComponent = StaticMeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OverrideName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMesh*             StaticMesh                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraFunctionLibrary::OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, struct FString OverrideName, class UStaticMesh* StaticMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh");

	UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.StaticMesh = StaticMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*       NiagaraSystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OverrideName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*  SkeletalMeshComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraFunctionLibrary::OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, struct FString OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent");

	UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Params params;
	params.NiagaraSystem = NiagaraSystem;
	params.OverrideName = OverrideName;
	params.SkeletalMeshComponent = SkeletalMeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraParameterCollection* Collection                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraParameterCollectionInstance* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNiagaraParameterCollectionInstance* UNiagaraFunctionLibrary::GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection");

	UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Collection = Collection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraParameterCollectionInstance::SetVectorParameter(struct FString InVariableName, struct FVector InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter");

	UNiagaraParameterCollectionInstance_SetVectorParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                InValue                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraParameterCollectionInstance::SetVector4Parameter(struct FString InVariableName, struct FVector4 InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter");

	UNiagaraParameterCollectionInstance_SetVector4Parameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraParameterCollectionInstance::SetVector2DParameter(struct FString InVariableName, struct FVector2D InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter");

	UNiagaraParameterCollectionInstance_SetVector2DParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                   InValue                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UNiagaraParameterCollectionInstance::SetQuatParameter(struct FString InVariableName, struct FQuat InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter");

	UNiagaraParameterCollectionInstance_SetQuatParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraParameterCollectionInstance::SetIntParameter(struct FString InVariableName, int InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter");

	UNiagaraParameterCollectionInstance_SetIntParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraParameterCollectionInstance::SetFloatParameter(struct FString InVariableName, float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter");

	UNiagaraParameterCollectionInstance_SetFloatParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraParameterCollectionInstance::SetColorParameter(struct FString InVariableName, struct FLinearColor InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter");

	UNiagaraParameterCollectionInstance_SetColorParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraParameterCollectionInstance::SetBoolParameter(struct FString InVariableName, bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter");

	UNiagaraParameterCollectionInstance_SetBoolParameter_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UNiagaraParameterCollectionInstance::GetVectorParameter(struct FString InVariableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter");

	UNiagaraParameterCollectionInstance_GetVectorParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector4 UNiagaraParameterCollectionInstance::GetVector4Parameter(struct FString InVariableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter");

	UNiagaraParameterCollectionInstance_GetVector4Parameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UNiagaraParameterCollectionInstance::GetVector2DParameter(struct FString InVariableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter");

	UNiagaraParameterCollectionInstance_GetVector2DParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FQuat UNiagaraParameterCollectionInstance::GetQuatParameter(struct FString InVariableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter");

	UNiagaraParameterCollectionInstance_GetQuatParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int UNiagaraParameterCollectionInstance::GetIntParameter(struct FString InVariableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter");

	UNiagaraParameterCollectionInstance_GetIntParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNiagaraParameterCollectionInstance::GetFloatParameter(struct FString InVariableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter");

	UNiagaraParameterCollectionInstance_GetFloatParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UNiagaraParameterCollectionInstance::GetColorParameter(struct FString InVariableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter");

	UNiagaraParameterCollectionInstance_GetColorParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InVariableName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNiagaraParameterCollectionInstance::GetBoolParameter(struct FString InVariableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter");

	UNiagaraParameterCollectionInstance_GetBoolParameter_Params params;
	params.InVariableName = InVariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraPreviewBase.SetSystem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraSystem*          InSystem                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ANiagaraPreviewBase::SetSystem(class UNiagaraSystem* InSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewBase.SetSystem");

	ANiagaraPreviewBase_SetSystem_Params params;
	params.InSystem = InSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraPreviewBase.SetLabelText
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InXAxisText                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FText                   InYAxisText                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ANiagaraPreviewBase::SetLabelText(struct FText InXAxisText, struct FText InYAxisText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewBase.SetLabelText");

	ANiagaraPreviewBase_SetLabelText_Params params;
	params.InXAxisText = InXAxisText;
	params.InYAxisText = InYAxisText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraPreviewAxis.Num
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int UNiagaraPreviewAxis::Num()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewAxis.Num");

	UNiagaraPreviewAxis_Num_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraPreviewAxis.ApplyToPreview
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*       PreviewComponent               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PreviewIndex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsXAxis                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 OutLabelText                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraPreviewAxis::ApplyToPreview(class UNiagaraComponent* PreviewComponent, int PreviewIndex, bool bIsXAxis, struct FString* OutLabelText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewAxis.ApplyToPreview");

	UNiagaraPreviewAxis_ApplyToPreview_Params params;
	params.PreviewComponent = PreviewComponent;
	params.PreviewIndex = PreviewIndex;
	params.bIsXAxis = bIsXAxis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLabelText != nullptr)
		*OutLabelText = params.OutLabelText;
}


// Function Niagara.NiagaraPreviewGrid.DeactivatePreviews
// (Final, Native, Public, BlueprintCallable)

void ANiagaraPreviewGrid::DeactivatePreviews()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewGrid.DeactivatePreviews");

	ANiagaraPreviewGrid_DeactivatePreviews_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraPreviewGrid.ActivatePreviews
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bReset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ANiagaraPreviewGrid::ActivatePreviews(bool bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraPreviewGrid.ActivatePreviews");

	ANiagaraPreviewGrid_ActivatePreviews_Params params;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraScript.OnCompilationComplete
// (Final, Native, Public)

void UNiagaraScript::OnCompilationComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Niagara.NiagaraScript.OnCompilationComplete");

	UNiagaraScript_OnCompilationComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
