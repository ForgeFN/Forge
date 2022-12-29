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

// Function LiveStreamVoice.LiveStreamVoiceSubsystem.SetVoiceSettings
struct ULiveStreamVoiceSubsystem_SetVoiceSettings_Params
{
	struct FVoiceSettings                              InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function LiveStreamVoice.LiveStreamVoiceSubsystem.EnableLocalVoiceProcessing
struct ULiveStreamVoiceSubsystem_EnableLocalVoiceProcessing_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LiveStreamVoice.LiveStreamVoiceSubsystem.ClearVoiceSettings
struct ULiveStreamVoiceSubsystem_ClearVoiceSettings_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
