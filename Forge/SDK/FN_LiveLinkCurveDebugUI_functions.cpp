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

// Function LiveLinkCurveDebugUI.LiveLinkDebuggerBlueprintLibrary.HideLiveLinkDebugger
// (Final, Native, Static, Private, BlueprintCallable)

void ULiveLinkDebuggerBlueprintLibrary::HideLiveLinkDebugger()
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLinkCurveDebugUI.LiveLinkDebuggerBlueprintLibrary.HideLiveLinkDebugger");

	ULiveLinkDebuggerBlueprintLibrary_HideLiveLinkDebugger_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LiveLinkCurveDebugUI.LiveLinkDebuggerBlueprintLibrary.DisplayLiveLinkDebugger
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// struct FString                 SubjectName                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULiveLinkDebuggerBlueprintLibrary::DisplayLiveLinkDebugger(struct FString SubjectName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLinkCurveDebugUI.LiveLinkDebuggerBlueprintLibrary.DisplayLiveLinkDebugger");

	ULiveLinkDebuggerBlueprintLibrary_DisplayLiveLinkDebugger_Params params;
	params.SubjectName = SubjectName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LiveLinkCurveDebugUI.LiveLinkDebuggerSettings.GetDPIScaleBasedOnSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FIntPoint               Size                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ULiveLinkDebuggerSettings::GetDPIScaleBasedOnSize(struct FIntPoint Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLinkCurveDebugUI.LiveLinkDebuggerSettings.GetDPIScaleBasedOnSize");

	ULiveLinkDebuggerSettings_GetDPIScaleBasedOnSize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LiveLinkCurveDebugUI.LiveLinkDebuggerSettings.GetBarColorForCurveValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          CurveValue                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSlateColor ULiveLinkDebuggerSettings::GetBarColorForCurveValue(float CurveValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLinkCurveDebugUI.LiveLinkDebuggerSettings.GetBarColorForCurveValue");

	ULiveLinkDebuggerSettings_GetBarColorForCurveValue_Params params;
	params.CurveValue = CurveValue;

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
