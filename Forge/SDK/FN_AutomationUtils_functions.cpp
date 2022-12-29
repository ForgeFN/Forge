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

// Function AutomationUtils.AutomationUtilsBlueprintLibrary.TakeGameplayAutomationScreenshot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ScreenshotName                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxGlobalError                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxLocalError                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 MapNameOverride                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAutomationUtilsBlueprintLibrary::TakeGameplayAutomationScreenshot(struct FString ScreenshotName, float MaxGlobalError, float MaxLocalError, struct FString MapNameOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutomationUtils.AutomationUtilsBlueprintLibrary.TakeGameplayAutomationScreenshot");

	UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Params params;
	params.ScreenshotName = ScreenshotName;
	params.MaxGlobalError = MaxGlobalError;
	params.MaxLocalError = MaxLocalError;
	params.MapNameOverride = MapNameOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
