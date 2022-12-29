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

// Function MediaAssets.MediaSource.Validate
struct UMediaSource_Validate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaSource.SetMediaOptionString
struct UMediaSource_SetMediaOptionString_Params
{
	struct FName                                       Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaSource.SetMediaOptionInt64
struct UMediaSource_SetMediaOptionInt64_Params
{
	struct FName                                       Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaSource.SetMediaOptionFloat
struct UMediaSource_SetMediaOptionFloat_Params
{
	struct FName                                       Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaSource.SetMediaOptionBool
struct UMediaSource_SetMediaOptionBool_Params
{
	struct FName                                       Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaSource.GetUrl
struct UMediaSource_GetUrl_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.FileMediaSource.SetFilePath
struct UFileMediaSource_SetFilePath_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices
struct UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Params
{
	TArray<struct FMediaCaptureDevice>                 OutDevices;                                               // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                Filter;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices
struct UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Params
{
	TArray<struct FMediaCaptureDevice>                 OutDevices;                                               // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                Filter;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices
struct UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Params
{
	TArray<struct FMediaCaptureDevice>                 OutDevices;                                               // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                Filter;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.SupportsSeeking
struct UMediaPlayer_SupportsSeeking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.SupportsScrubbing
struct UMediaPlayer_SupportsScrubbing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.SupportsRate
struct UMediaPlayer_SupportsRate_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Unthinned;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.SetViewRotation
struct UMediaPlayer_SetViewRotation_Params
{
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               Absolute;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.SetViewField
struct UMediaPlayer_SetViewField_Params
{
	float                                              Horizontal;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Vertical;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Absolute;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate
struct UMediaPlayer_SetVideoTrackFrameRate_Params
{
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FormatIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FrameRate;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.SetTrackFormat
struct UMediaPlayer_SetTrackFormat_Params
{
	EMediaPlayerTrack                                  TrackType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FormatIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.SetTimeDelay
struct UMediaPlayer_SetTimeDelay_Params
{
	struct FTimespan                                   TimeDelay;                                                // (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.SetRate
struct UMediaPlayer_SetRate_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.SetNativeVolume
struct UMediaPlayer_SetNativeVolume_Params
{
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.SetMediaOptions
struct UMediaPlayer_SetMediaOptions_Params
{
	class UMediaSource*                                Options;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.SetLooping
struct UMediaPlayer_SetLooping_Params
{
	bool                                               Looping;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.SetDesiredPlayerName
struct UMediaPlayer_SetDesiredPlayerName_Params
{
	struct FName                                       PlayerName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.SetBlockOnTime
struct UMediaPlayer_SetBlockOnTime_Params
{
	struct FTimespan                                   Time;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.SelectTrack
struct UMediaPlayer_SelectTrack_Params
{
	EMediaPlayerTrack                                  TrackType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.Seek
struct UMediaPlayer_Seek_Params
{
	struct FTimespan                                   Time;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.Rewind
struct UMediaPlayer_Rewind_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.Reopen
struct UMediaPlayer_Reopen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.Previous
struct UMediaPlayer_Previous_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.Play
struct UMediaPlayer_Play_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.Pause
struct UMediaPlayer_Pause_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.OpenUrl
struct UMediaPlayer_OpenUrl_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.OpenSourceWithOptions
struct UMediaPlayer_OpenSourceWithOptions_Params
{
	class UMediaSource*                                MediaSource;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMediaPlayerOptions                         Options;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.OpenSourceLatent
struct UMediaPlayer_OpenSourceLatent_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UMediaSource*                                MediaSource;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMediaPlayerOptions                         Options;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.OpenSource
struct UMediaPlayer_OpenSource_Params
{
	class UMediaSource*                                MediaSource;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.OpenPlaylistIndex
struct UMediaPlayer_OpenPlaylistIndex_Params
{
	class UMediaPlaylist*                              InPlaylist;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.OpenPlaylist
struct UMediaPlayer_OpenPlaylist_Params
{
	class UMediaPlaylist*                              InPlaylist;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.OpenFile
struct UMediaPlayer_OpenFile_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.Next
struct UMediaPlayer_Next_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.IsReady
struct UMediaPlayer_IsReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.IsPreparing
struct UMediaPlayer_IsPreparing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.IsPlaying
struct UMediaPlayer_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.IsPaused
struct UMediaPlayer_IsPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.IsLooping
struct UMediaPlayer_IsLooping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.IsConnecting
struct UMediaPlayer_IsConnecting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.IsClosed
struct UMediaPlayer_IsClosed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.IsBuffering
struct UMediaPlayer_IsBuffering_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.HasError
struct UMediaPlayer_HasError_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.GetViewRotation
struct UMediaPlayer_GetViewRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.GetVideoTrackType
struct UMediaPlayer_GetVideoTrackType_Params
{
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FormatIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates
struct UMediaPlayer_GetVideoTrackFrameRates_Params
{
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FormatIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatRange                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate
struct UMediaPlayer_GetVideoTrackFrameRate_Params
{
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FormatIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.GetVideoTrackDimensions
struct UMediaPlayer_GetVideoTrackDimensions_Params
{
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FormatIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
struct UMediaPlayer_GetVideoTrackAspectRatio_Params
{
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FormatIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.GetVerticalFieldOfView
struct UMediaPlayer_GetVerticalFieldOfView_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.GetUrl
struct UMediaPlayer_GetUrl_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.GetTrackLanguage
struct UMediaPlayer_GetTrackLanguage_Params
{
	EMediaPlayerTrack                                  TrackType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.GetTrackFormat
struct UMediaPlayer_GetTrackFormat_Params
{
	EMediaPlayerTrack                                  TrackType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.GetTrackDisplayName
struct UMediaPlayer_GetTrackDisplayName_Params
{
	EMediaPlayerTrack                                  TrackType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.GetTimeDelay
struct UMediaPlayer_GetTimeDelay_Params
{
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.GetTime
struct UMediaPlayer_GetTime_Params
{
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.GetSupportedRates
struct UMediaPlayer_GetSupportedRates_Params
{
	TArray<struct FFloatRange>                         OutRates;                                                 // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               Unthinned;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.GetSelectedTrack
struct UMediaPlayer_GetSelectedTrack_Params
{
	EMediaPlayerTrack                                  TrackType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.GetRate
struct UMediaPlayer_GetRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.GetPlaylistIndex
struct UMediaPlayer_GetPlaylistIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.GetPlaylist
struct UMediaPlayer_GetPlaylist_Params
{
	class UMediaPlaylist*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.GetPlayerName
struct UMediaPlayer_GetPlayerName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.GetNumTracks
struct UMediaPlayer_GetNumTracks_Params
{
	EMediaPlayerTrack                                  TrackType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.GetNumTrackFormats
struct UMediaPlayer_GetNumTrackFormats_Params
{
	EMediaPlayerTrack                                  TrackType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.GetMediaName
struct UMediaPlayer_GetMediaName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.GetLastVideoSampleProcessedTime
struct UMediaPlayer_GetLastVideoSampleProcessedTime_Params
{
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.GetLastAudioSampleProcessedTime
struct UMediaPlayer_GetLastAudioSampleProcessedTime_Params
{
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView
struct UMediaPlayer_GetHorizontalFieldOfView_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.GetDuration
struct UMediaPlayer_GetDuration_Params
{
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.GetDesiredPlayerName
struct UMediaPlayer_GetDesiredPlayerName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.GetAudioTrackType
struct UMediaPlayer_GetAudioTrackType_Params
{
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FormatIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate
struct UMediaPlayer_GetAudioTrackSampleRate_Params
{
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FormatIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.GetAudioTrackChannels
struct UMediaPlayer_GetAudioTrackChannels_Params
{
	int                                                TrackIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FormatIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.Close
struct UMediaPlayer_Close_Params
{
};

// Function MediaAssets.MediaPlayer.CanPlayUrl
struct UMediaPlayer_CanPlayUrl_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.CanPlaySource
struct UMediaPlayer_CanPlaySource_Params
{
	class UMediaSource*                                MediaSource;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlayer.CanPause
struct UMediaPlayer_CanPause_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlaylist.Replace
struct UMediaPlaylist_Replace_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSource*                                Replacement;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlaylist.RemoveAt
struct UMediaPlaylist_RemoveAt_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlaylist.Remove
struct UMediaPlaylist_Remove_Params
{
	class UMediaSource*                                MediaSource;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlaylist.Num
struct UMediaPlaylist_Num_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlaylist.Insert
struct UMediaPlaylist_Insert_Params
{
	class UMediaSource*                                MediaSource;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlaylist.GetRandom
struct UMediaPlaylist_GetRandom_Params
{
	int                                                OutIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSource*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlaylist.GetPrevious
struct UMediaPlaylist_GetPrevious_Params
{
	int                                                InOutIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSource*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlaylist.GetNext
struct UMediaPlaylist_GetNext_Params
{
	int                                                InOutIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSource*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlaylist.Get
struct UMediaPlaylist_Get_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSource*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlaylist.AddUrl
struct UMediaPlaylist_AddUrl_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlaylist.AddFile
struct UMediaPlaylist_AddFile_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaPlaylist.Add
struct UMediaPlaylist_Add_Params
{
	class UMediaSource*                                MediaSource;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings
struct UMediaSoundComponent_SetSpectralAnalysisSettings_Params
{
	TArray<float>                                      InFrequenciesToAnalyze;                                   // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	EMediaSoundComponentFFTSize                        InFFTSize;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaSoundComponent.SetMediaPlayer
struct UMediaSoundComponent_SetMediaPlayer_Params
{
	class UMediaPlayer*                                NewMediaPlayer;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings
struct UMediaSoundComponent_SetEnvelopeFollowingsettings_Params
{
	int                                                AttackTimeMsec;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReleaseTimeMsec;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis
struct UMediaSoundComponent_SetEnableSpectralAnalysis_Params
{
	bool                                               bInSpectralAnalysisEnabled;                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing
struct UMediaSoundComponent_SetEnableEnvelopeFollowing_Params
{
	bool                                               bInEnvelopeFollowing;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaSoundComponent.GetSpectralData
struct UMediaSoundComponent_GetSpectralData_Params
{
	TArray<struct FMediaSoundComponentSpectralData>    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaSoundComponent.GetMediaPlayer
struct UMediaSoundComponent_GetMediaPlayer_Params
{
	class UMediaPlayer*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaSoundComponent.GetEnvelopeValue
struct UMediaSoundComponent_GetEnvelopeValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply
struct UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Params
{
	struct FSoundAttenuationSettings                   OutAttenuationSettings;                                   // (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaTexture.SetMediaPlayer
struct UMediaTexture_SetMediaPlayer_Params
{
	class UMediaPlayer*                                NewMediaPlayer;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaTexture.GetWidth
struct UMediaTexture_GetWidth_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaTexture.GetMediaPlayer
struct UMediaTexture_GetMediaPlayer_Params
{
	class UMediaPlayer*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaTexture.GetHeight
struct UMediaTexture_GetHeight_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MediaAssets.MediaTexture.GetAspectRatio
struct UMediaTexture_GetAspectRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
