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

// Function ScreenCapture.ScreenCaptureContext.ToggleMicrophoneRecording
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnableMicrophone              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScreenCaptureContext::ToggleMicrophoneRecording(bool bEnableMicrophone)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenCapture.ScreenCaptureContext.ToggleMicrophoneRecording");

	UScreenCaptureContext_ToggleMicrophoneRecording_Params params;
	params.bEnableMicrophone = bEnableMicrophone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenCapture.ScreenCaptureContext.TakeScreenshot
// (Final, Native, Public, BlueprintCallable)

void UScreenCaptureContext::TakeScreenshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenCapture.ScreenCaptureContext.TakeScreenshot");

	UScreenCaptureContext_TakeScreenshot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenCapture.ScreenCaptureContext.StopCapture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsCaptureInterrupted          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScreenCaptureContext::StopCapture(bool bIsCaptureInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenCapture.ScreenCaptureContext.StopCapture");

	UScreenCaptureContext_StopCapture_Params params;
	params.bIsCaptureInterrupted = bIsCaptureInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenCapture.ScreenCaptureContext.StartCapture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInRecordAppAudio              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bGeneratePreviewImage          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScreenCaptureContext::StartCapture(bool bInRecordAppAudio, bool bGeneratePreviewImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenCapture.ScreenCaptureContext.StartCapture");

	UScreenCaptureContext_StartCapture_Params params;
	params.bInRecordAppAudio = bInRecordAppAudio;
	params.bGeneratePreviewImage = bGeneratePreviewImage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenCapture.ScreenCaptureContext.SaveToAlbum
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 LocalFilePath                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UScreenCaptureContext::SaveToAlbum(struct FString LocalFilePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenCapture.ScreenCaptureContext.SaveToAlbum");

	UScreenCaptureContext_SaveToAlbum_Params params;
	params.LocalFilePath = LocalFilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScreenCapture.ScreenCaptureContext.RemoveFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 LocalFilePath                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UScreenCaptureContext::RemoveFile(struct FString LocalFilePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenCapture.ScreenCaptureContext.RemoveFile");

	UScreenCaptureContext_RemoveFile_Params params;
	params.LocalFilePath = LocalFilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScreenCapture.ScreenCaptureContext.IsRecording
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UScreenCaptureContext::IsRecording()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenCapture.ScreenCaptureContext.IsRecording");

	UScreenCaptureContext_IsRecording_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScreenCapture.ScreenCaptureContext.CreateScreenCaptureContext
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScreenCaptureContext*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UScreenCaptureContext* UScreenCaptureContext::CreateScreenCaptureContext(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenCapture.ScreenCaptureContext.CreateScreenCaptureContext");

	UScreenCaptureContext_CreateScreenCaptureContext_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
