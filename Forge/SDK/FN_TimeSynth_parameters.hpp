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

// Function TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroupWithFadeOverride
struct UTimeSynthComponent_StopSoundsOnVolumeGroupWithFadeOverride_Params
{
	class UTimeSynthVolumeGroup*                       InVolumeGroup;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETimeSynthEventClipQuantization                    EventQuantization;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimeSynthTimeDef                           FadeTime;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroup
struct UTimeSynthComponent_StopSoundsOnVolumeGroup_Params
{
	class UTimeSynthVolumeGroup*                       InVolumeGroup;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETimeSynthEventClipQuantization                    EventQuantization;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TimeSynth.TimeSynthComponent.StopClipWithFadeOverride
struct UTimeSynthComponent_StopClipWithFadeOverride_Params
{
	struct FTimeSynthClipHandle                        InClipHandle;                                             // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	ETimeSynthEventClipQuantization                    EventQuantization;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimeSynthTimeDef                           FadeTime;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TimeSynth.TimeSynthComponent.StopClip
struct UTimeSynthComponent_StopClip_Params
{
	struct FTimeSynthClipHandle                        InClipHandle;                                             // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	ETimeSynthEventClipQuantization                    EventQuantization;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TimeSynth.TimeSynthComponent.SetVolumeGroup
struct UTimeSynthComponent_SetVolumeGroup_Params
{
	class UTimeSynthVolumeGroup*                       InVolumeGroup;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VolumeDb;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeTimeSec;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TimeSynth.TimeSynthComponent.SetSeed
struct UTimeSynthComponent_SetSeed_Params
{
	int                                                InSeed;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TimeSynth.TimeSynthComponent.SetQuantizationSettings
struct UTimeSynthComponent_SetQuantizationSettings_Params
{
	struct FTimeSynthQuantizationSettings              InQuantizationSettings;                                   // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TimeSynth.TimeSynthComponent.SetFilterSettings
struct UTimeSynthComponent_SetFilterSettings_Params
{
	ETimeSynthFilter                                   Filter;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimeSynthFilterSettings                    InSettings;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TimeSynth.TimeSynthComponent.SetFilterEnabled
struct UTimeSynthComponent_SetFilterEnabled_Params
{
	ETimeSynthFilter                                   Filter;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TimeSynth.TimeSynthComponent.SetFFTSize
struct UTimeSynthComponent_SetFFTSize_Params
{
	ETimeSynthFFTSize                                  InFFTSize;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TimeSynth.TimeSynthComponent.SetEnvelopeFollowerSettings
struct UTimeSynthComponent_SetEnvelopeFollowerSettings_Params
{
	struct FTimeSynthEnvelopeFollowerSettings          InSettings;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TimeSynth.TimeSynthComponent.SetEnvelopeFollowerEnabled
struct UTimeSynthComponent_SetEnvelopeFollowerEnabled_Params
{
	bool                                               bInIsEnabled;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TimeSynth.TimeSynthComponent.SetBPM
struct UTimeSynthComponent_SetBPM_Params
{
	float                                              BeatsPerMinute;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TimeSynth.TimeSynthComponent.ResetSeed
struct UTimeSynthComponent_ResetSeed_Params
{
};

// Function TimeSynth.TimeSynthComponent.PlayClip
struct UTimeSynthComponent_PlayClip_Params
{
	class UTimeSynthClip*                              InClip;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTimeSynthVolumeGroup*                       InVolumeGroup;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimeSynthClipHandle                        ReturnValue;                                              // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TimeSynth.TimeSynthComponent.GetSpectralData
struct UTimeSynthComponent_GetSpectralData_Params
{
	TArray<struct FTimeSynthSpectralData>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function TimeSynth.TimeSynthComponent.GetEnvelopeFollowerValue
struct UTimeSynthComponent_GetEnvelopeFollowerValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TimeSynth.TimeSynthComponent.GetBPM
struct UTimeSynthComponent_GetBPM_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TimeSynth.TimeSynthComponent.AddQuantizationEventDelegate
struct UTimeSynthComponent_AddQuantizationEventDelegate_Params
{
	ETimeSynthEventQuantization                        QuantizationType;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
