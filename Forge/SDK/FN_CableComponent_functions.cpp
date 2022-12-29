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

// Function CableComponent.CableComponent.SetAttachEndToComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCableComponent::SetAttachEndToComponent(class USceneComponent* Component, struct FName SocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.SetAttachEndToComponent");

	UCableComponent_SetAttachEndToComponent_Params params;
	params.Component = Component;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CableComponent.CableComponent.SetAttachEndTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   ComponentProperty              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCableComponent::SetAttachEndTo(class AActor* Actor, struct FName ComponentProperty, struct FName SocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.SetAttachEndTo");

	UCableComponent_SetAttachEndTo_Params params;
	params.Actor = Actor;
	params.ComponentProperty = ComponentProperty;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CableComponent.CableComponent.GetCableParticleLocations
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>         Locations                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UCableComponent::GetCableParticleLocations(TArray<struct FVector>* Locations)
{
	static auto fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.GetCableParticleLocations");

	UCableComponent_GetCableParticleLocations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locations != nullptr)
		*Locations = params.Locations;
}


// Function CableComponent.CableComponent.GetAttachedComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USceneComponent* UCableComponent::GetAttachedComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.GetAttachedComponent");

	UCableComponent_GetAttachedComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CableComponent.CableComponent.GetAttachedActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UCableComponent::GetAttachedActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.GetAttachedActor");

	UCableComponent_GetAttachedActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
