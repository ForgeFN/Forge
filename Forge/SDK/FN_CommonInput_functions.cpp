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

// Function CommonInput.CommonInputSubsystem.ShouldShowInputKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonInputSubsystem::ShouldShowInputKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonInput.CommonInputSubsystem.ShouldShowInputKeys");

	UCommonInputSubsystem_ShouldShowInputKeys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonInput.CommonInputSubsystem.SetGamepadInputType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECommonGamepadType             InGamepadInputType             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonInputSubsystem::SetGamepadInputType(ECommonGamepadType InGamepadInputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonInput.CommonInputSubsystem.SetGamepadInputType");

	UCommonInputSubsystem_SetGamepadInputType_Params params;
	params.InGamepadInputType = InGamepadInputType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonInput.CommonInputSubsystem.SetCurrentInputType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECommonInputType               NewInputType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonInputSubsystem::SetCurrentInputType(ECommonInputType NewInputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonInput.CommonInputSubsystem.SetCurrentInputType");

	UCommonInputSubsystem_SetCurrentInputType_Params params;
	params.NewInputType = NewInputType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonInput.CommonInputSubsystem.IsUsingPointerInput
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonInputSubsystem::IsUsingPointerInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonInput.CommonInputSubsystem.IsUsingPointerInput");

	UCommonInputSubsystem_IsUsingPointerInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction CommonInput.CommonInputSubsystem.InputMethodChangedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// ECommonInputType               bNewInputType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonInputSubsystem::InputMethodChangedDelegate__DelegateSignature(ECommonInputType bNewInputType)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CommonInput.CommonInputSubsystem.InputMethodChangedDelegate__DelegateSignature");

	UCommonInputSubsystem_InputMethodChangedDelegate__DelegateSignature_Params params;
	params.bNewInputType = bNewInputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonInput.CommonInputSubsystem.GetDefaultInputType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECommonInputType               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

ECommonInputType UCommonInputSubsystem::GetDefaultInputType()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonInput.CommonInputSubsystem.GetDefaultInputType");

	UCommonInputSubsystem_GetDefaultInputType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonInput.CommonInputSubsystem.GetCurrentInputType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECommonInputType               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

ECommonInputType UCommonInputSubsystem::GetCurrentInputType()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonInput.CommonInputSubsystem.GetCurrentInputType");

	UCommonInputSubsystem_GetCurrentInputType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonInput.CommonInputSubsystem.GetCurrentGamepadType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECommonGamepadType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

ECommonGamepadType UCommonInputSubsystem::GetCurrentGamepadType()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonInput.CommonInputSubsystem.GetCurrentGamepadType");

	UCommonInputSubsystem_GetCurrentGamepadType_Params params;

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
