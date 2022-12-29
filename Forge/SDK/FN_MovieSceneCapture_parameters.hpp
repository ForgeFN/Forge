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

// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
struct UMovieSceneCaptureProtocolBase_IsCapturing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
struct UMovieSceneCaptureProtocolBase_GetState_Params
{
	EMovieSceneCaptureProtocolState                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
struct UMovieSceneCapture_SetImageCaptureProtocolType_Params
{
	class UClass*                                      ProtocolType;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
struct UMovieSceneCapture_SetAudioCaptureProtocolType_Params
{
	class UClass*                                      ProtocolType;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
struct UMovieSceneCapture_GetImageCaptureProtocol_Params
{
	class UMovieSceneCaptureProtocolBase*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
struct UMovieSceneCapture_GetAudioCaptureProtocol_Params
{
	class UMovieSceneCaptureProtocolBase*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress
struct UMovieSceneCaptureEnvironment_IsCaptureInProgress_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
struct UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
struct UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol
struct UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Params
{
	class UMovieSceneImageCaptureProtocolBase*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol
struct UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Params
{
	class UMovieSceneAudioCaptureProtocolBase*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels
struct UUserDefinedCaptureProtocol_StopCapturingFinalPixels_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
struct UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Params
{
	struct FCapturedPixelsID                           StreamID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
struct UUserDefinedCaptureProtocol_ResolveBuffer_Params
{
	class UTexture*                                    Buffer;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCapturedPixelsID                           BufferID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp
struct UUserDefinedCaptureProtocol_OnWarmUp_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick
struct UUserDefinedCaptureProtocol_OnTick_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture
struct UUserDefinedCaptureProtocol_OnStartCapture_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
struct UUserDefinedCaptureProtocol_OnSetup_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick
struct UUserDefinedCaptureProtocol_OnPreTick_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived
struct UUserDefinedCaptureProtocol_OnPixelsReceived_Params
{
	struct FCapturedPixels                             Pixels;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FCapturedPixelsID                           ID;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FFrameMetrics                               FrameMetrics;                                             // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture
struct UUserDefinedCaptureProtocol_OnPauseCapture_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize
struct UUserDefinedCaptureProtocol_OnFinalize_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame
struct UUserDefinedCaptureProtocol_OnCaptureFrame_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
struct UUserDefinedCaptureProtocol_OnCanFinalize_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize
struct UUserDefinedCaptureProtocol_OnBeginFinalize_Params
{
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
struct UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Params
{
	struct FFrameMetrics                               ReturnValue;                                              // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
struct UUserDefinedCaptureProtocol_GenerateFilename_Params
{
	struct FFrameMetrics                               InFrameMetrics;                                           // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
struct UUserDefinedImageCaptureProtocol_WriteImageToDisk_Params
{
	struct FCapturedPixels                             PixelData;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FCapturedPixelsID                           StreamID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FFrameMetrics                               FrameMetrics;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bCopyImageData;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
struct UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
struct UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Params
{
	class UTexture*                                    Buffer;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCapturedPixelsID                           StreamID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
