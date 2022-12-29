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

// Function LiveLinkCurveDebugUI.LiveLinkDebuggerBlueprintLibrary.HideLiveLinkDebugger
struct ULiveLinkDebuggerBlueprintLibrary_HideLiveLinkDebugger_Params
{
};

// Function LiveLinkCurveDebugUI.LiveLinkDebuggerBlueprintLibrary.DisplayLiveLinkDebugger
struct ULiveLinkDebuggerBlueprintLibrary_DisplayLiveLinkDebugger_Params
{
	struct FString                                     SubjectName;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LiveLinkCurveDebugUI.LiveLinkDebuggerSettings.GetDPIScaleBasedOnSize
struct ULiveLinkDebuggerSettings_GetDPIScaleBasedOnSize_Params
{
	struct FIntPoint                                   Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LiveLinkCurveDebugUI.LiveLinkDebuggerSettings.GetBarColorForCurveValue
struct ULiveLinkDebuggerSettings_GetBarColorForCurveValue_Params
{
	float                                              CurveValue;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
