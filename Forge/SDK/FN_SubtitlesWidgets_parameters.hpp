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

// Function SubtitlesWidgets.FortMediaSubtitlesPlayer.Stop
struct UFortMediaSubtitlesPlayer_Stop_Params
{
};

// Function SubtitlesWidgets.FortMediaSubtitlesPlayer.SetSubtitles
struct UFortMediaSubtitlesPlayer_SetSubtitles_Params
{
	class UOverlays*                                   Subtitles;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SubtitlesWidgets.FortMediaSubtitlesPlayer.Play
struct UFortMediaSubtitlesPlayer_Play_Params
{
};

// Function SubtitlesWidgets.FortMediaSubtitlesPlayer.BindToMediaPlayer
struct UFortMediaSubtitlesPlayer_BindToMediaPlayer_Params
{
	class UMediaPlayer*                                InMediaPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SubtitlesWidgets.SubtitleDisplay.HasSubtitles
struct USubtitleDisplay_HasSubtitles_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
