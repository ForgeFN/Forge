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

// Function CommonInput.CommonInputSubsystem.ShouldShowInputKeys
struct UCommonInputSubsystem_ShouldShowInputKeys_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonInput.CommonInputSubsystem.SetGamepadInputType
struct UCommonInputSubsystem_SetGamepadInputType_Params
{
	ECommonGamepadType                                 InGamepadInputType;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonInput.CommonInputSubsystem.SetCurrentInputType
struct UCommonInputSubsystem_SetCurrentInputType_Params
{
	ECommonInputType                                   NewInputType;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonInput.CommonInputSubsystem.IsUsingPointerInput
struct UCommonInputSubsystem_IsUsingPointerInput_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction CommonInput.CommonInputSubsystem.InputMethodChangedDelegate__DelegateSignature
struct UCommonInputSubsystem_InputMethodChangedDelegate__DelegateSignature_Params
{
	ECommonInputType                                   bNewInputType;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonInput.CommonInputSubsystem.GetDefaultInputType
struct UCommonInputSubsystem_GetDefaultInputType_Params
{
	ECommonInputType                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonInput.CommonInputSubsystem.GetCurrentInputType
struct UCommonInputSubsystem_GetCurrentInputType_Params
{
	ECommonInputType                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonInput.CommonInputSubsystem.GetCurrentGamepadType
struct UCommonInputSubsystem_GetCurrentGamepadType_Params
{
	ECommonGamepadType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
