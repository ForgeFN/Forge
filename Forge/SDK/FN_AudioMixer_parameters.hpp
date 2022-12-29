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

// Function AudioMixer.SynthComponent.Stop
struct USynthComponent_Stop_Params
{
};

// Function AudioMixer.SynthComponent.Start
struct USynthComponent_Start_Params
{
};

// Function AudioMixer.SynthComponent.SetVolumeMultiplier
struct USynthComponent_SetVolumeMultiplier_Params
{
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.SynthComponent.SetSubmixSend
struct USynthComponent_SetSubmixSend_Params
{
	class USoundSubmix*                                Submix;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SendLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.SynthComponent.IsPlaying
struct USynthComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache
struct UAudioMixerBlueprintLibrary_TrimAudioCache_Params
{
	float                                              InMegabytesToFree;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
struct UAudioMixerBlueprintLibrary_StopRecordingOutput_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAudioRecordingExportType                          ExportType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                                SubmixToRecord;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundWave*                                  ExistingSoundWaveToOverwrite;                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundWave*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput
struct UAudioMixerBlueprintLibrary_StopAnalyzingOutput_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                                SubmixToStopAnalyzing;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
struct UAudioMixerBlueprintLibrary_StartRecordingOutput_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExpectedDuration;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                                SubmixToRecord;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput
struct UAudioMixerBlueprintLibrary_StartAnalyzingOutput_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                                SubmixToAnalyze;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFFTSize                                           FFTSize;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFFTPeakInterpolationMethod                        InterpolationMethod;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFFTWindowType                                     WindowType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HopSize;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
struct UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*               PresetChain;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EntryIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBypassed;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput
struct UAudioMixerBlueprintLibrary_ResumeRecordingOutput_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                                SubmixToPause;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
struct UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*               PresetChain;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EntryIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
struct UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSubmixPreset*                    SubmixEffectPreset;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback
struct UAudioMixerBlueprintLibrary_PrimeSoundForPlayback_Params
{
	class USoundWave*                                  SoundWave;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput
struct UAudioMixerBlueprintLibrary_PauseRecordingOutput_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                                SubmixToPause;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies
struct UAudioMixerBlueprintLibrary_GetPhaseForFrequencies_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      Frequencies;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<float>                                      Phases;                                                   // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class USoundSubmix*                                SubmixToAnalyze;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
struct UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*               PresetChain;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies
struct UAudioMixerBlueprintLibrary_GetMagnitudeForFrequencies_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      Frequencies;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<float>                                      Magnitudes;                                               // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class USoundSubmix*                                SubmixToAnalyze;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
struct UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
struct UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*               PresetChain;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSourceEffectChainEntry                     Entry;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
struct UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSubmixPreset*                    SubmixEffectPreset;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
struct USubmixEffectDynamicsProcessorPreset_SetSettings_Params
{
	struct FSubmixEffectDynamicsProcessorSettings      InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
struct USubmixEffectSubmixEQPreset_SetSettings_Params
{
	struct FSubmixEffectSubmixEQSettings               InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
struct USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Params
{
	class UReverbEffect*                               InReverbEffect;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WetLevel;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DryLevel;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.SubmixEffectReverbPreset.SetSettings
struct USubmixEffectReverbPreset_SetSettings_Params
{
	struct FSubmixEffectReverbSettings                 InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AudioMixer.SubmixEffectReverbFastPreset.SetSettingsWithReverbEffect
struct USubmixEffectReverbFastPreset_SetSettingsWithReverbEffect_Params
{
	class UReverbEffect*                               InReverbEffect;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WetLevel;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DryLevel;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AudioMixer.SubmixEffectReverbFastPreset.SetSettings
struct USubmixEffectReverbFastPreset_SetSettings_Params
{
	struct FSubmixEffectReverbFastSettings             InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
