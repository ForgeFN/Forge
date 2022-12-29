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

// Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEyeTrackerFunctionLibrary::SetEyeTrackedPlayer(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer");

	UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEyeTrackerFunctionLibrary::IsStereoGazeDataAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable");

	UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEyeTrackerFunctionLibrary::IsEyeTrackerConnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected");

	UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEyeTrackerStereoGazeData OutGazeData                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEyeTrackerFunctionLibrary::GetStereoGazeData(struct FEyeTrackerStereoGazeData* OutGazeData)
{
	static auto fn = UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData");

	UEyeTrackerFunctionLibrary_GetStereoGazeData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutGazeData != nullptr)
		*OutGazeData = params.OutGazeData;

	return params.ReturnValue;
}


// Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEyeTrackerGazeData     OutGazeData                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEyeTrackerFunctionLibrary::GetGazeData(struct FEyeTrackerGazeData* OutGazeData)
{
	static auto fn = UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData");

	UEyeTrackerFunctionLibrary_GetGazeData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutGazeData != nullptr)
		*OutGazeData = params.OutGazeData;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
