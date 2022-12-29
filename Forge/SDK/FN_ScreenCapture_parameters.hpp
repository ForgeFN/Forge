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

// Function ScreenCapture.ScreenCaptureContext.ToggleMicrophoneRecording
struct UScreenCaptureContext_ToggleMicrophoneRecording_Params
{
	bool                                               bEnableMicrophone;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScreenCapture.ScreenCaptureContext.TakeScreenshot
struct UScreenCaptureContext_TakeScreenshot_Params
{
};

// Function ScreenCapture.ScreenCaptureContext.StopCapture
struct UScreenCaptureContext_StopCapture_Params
{
	bool                                               bIsCaptureInterrupted;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScreenCapture.ScreenCaptureContext.StartCapture
struct UScreenCaptureContext_StartCapture_Params
{
	bool                                               bInRecordAppAudio;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGeneratePreviewImage;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScreenCapture.ScreenCaptureContext.SaveToAlbum
struct UScreenCaptureContext_SaveToAlbum_Params
{
	struct FString                                     LocalFilePath;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScreenCapture.ScreenCaptureContext.RemoveFile
struct UScreenCaptureContext_RemoveFile_Params
{
	struct FString                                     LocalFilePath;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScreenCapture.ScreenCaptureContext.IsRecording
struct UScreenCaptureContext_IsRecording_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ScreenCapture.ScreenCaptureContext.CreateScreenCaptureContext
struct UScreenCaptureContext_CreateScreenCaptureContext_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScreenCaptureContext*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
