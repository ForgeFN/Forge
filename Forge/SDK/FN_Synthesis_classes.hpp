#pragma once

// Fortnite (11.00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Synthesis.ModularSynthPresetBank
// 0x0010 (0x0038 - 0x0028)
class UModularSynthPresetBank : public UObject
{
public:
	TArray<struct FModularSynthPresetBankEntry>        Presets;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.ModularSynthPresetBank");
		return ptr;
	}

};


// Class Synthesis.ModularSynthLibrary
// 0x0000 (0x0028 - 0x0028)
class UModularSynthLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.ModularSynthLibrary");
		return ptr;
	}


	static void AddModularSynthPresetToBankAsset(class UModularSynthPresetBank* InBank, struct FModularSynthPreset Preset, struct FString PresetName);
};


// Class Synthesis.ModularSynthComponent
// 0x0680 (0x0C80 - 0x0600)
class UModularSynthComponent : public USynthComponent
{
public:
	int                                                VoiceCount;                                               // 0x0600(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x67C];                                     // 0x0604(0x067C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.ModularSynthComponent");
		return ptr;
	}


	void SetSynthPreset(struct FModularSynthPreset SynthPreset);
	void SetSustainGain(float SustainGain);
	void SetStereoDelayWetlevel(float DelayWetlevel);
	void SetStereoDelayTime(float DelayTimeMsec);
	void SetStereoDelayRatio(float DelayRatio);
	void SetStereoDelayMode(ESynthStereoDelayMode StereoDelayMode);
	void SetStereoDelayIsEnabled(bool StereoDelayEnabled);
	void SetStereoDelayFeedback(float DelayFeedback);
	void SetSpread(float Spread);
	void SetReleaseTime(float ReleaseTimeMsec);
	void SetPortamento(float Portamento);
	void SetPitchBend(float PitchBend);
	void SetPan(float Pan);
	void SetOscType(int OscIndex, ESynth1OscType OscType);
	void SetOscSync(bool bIsSynced);
	void SetOscSemitones(int OscIndex, float Semitones);
	void SetOscPulsewidth(int OscIndex, float Pulsewidth);
	void SetOscOctave(int OscIndex, float Octave);
	void SetOscGainMod(int OscIndex, float OscGainMod);
	void SetOscGain(int OscIndex, float OscGain);
	void SetOscFrequencyMod(int OscIndex, float OscFreqMod);
	void SetOscCents(int OscIndex, float Cents);
	void SetModEnvSustainGain(float SustainGain);
	void SetModEnvReleaseTime(float Release);
	void SetModEnvPatch(ESynthModEnvPatch InPatchType);
	void SetModEnvInvert(bool bInvert);
	void SetModEnvDepth(float Depth);
	void SetModEnvDecayTime(float DecayTimeMsec);
	void SetModEnvBiasPatch(ESynthModEnvBiasPatch InPatchType);
	void SetModEnvBiasInvert(bool bInvert);
	void SetModEnvAttackTime(float AttackTimeMsec);
	void SetLFOType(int LFOIndex, ESynthLFOType LFOType);
	void SetLFOPatch(int LFOIndex, ESynthLFOPatchType LFOPatchType);
	void SetLFOMode(int LFOIndex, ESynthLFOMode LFOMode);
	void SetLFOGainMod(int LFOIndex, float GainMod);
	void SetLFOGain(int LFOIndex, float Gain);
	void SetLFOFrequencyMod(int LFOIndex, float FrequencyModHz);
	void SetLFOFrequency(int LFOIndex, float FrequencyHz);
	void SetGainDb(float GainDb);
	void SetFilterType(ESynthFilterType FilterType);
	void SetFilterQMod(float FilterQ);
	void SetFilterQ(float FilterQ);
	void SetFilterFrequencyMod(float FilterFrequencyHz);
	void SetFilterFrequency(float FilterFrequencyHz);
	void SetFilterAlgorithm(ESynthFilterAlgorithm FilterAlgorithm);
	void SetEnableUnison(bool EnableUnison);
	void SetEnableRetrigger(bool RetriggerEnabled);
	void SetEnablePolyphony(bool bEnablePolyphony);
	bool SetEnablePatch(struct FPatchId PatchId, bool bIsEnabled);
	void SetEnableLegato(bool LegatoEnabled);
	void SetDecayTime(float DecayTimeMsec);
	void SetChorusFrequency(float Frequency);
	void SetChorusFeedback(float Feedback);
	void SetChorusEnabled(bool EnableChorus);
	void SetChorusDepth(float Depth);
	void SetAttackTime(float AttackTimeMsec);
	void NoteOn(float Note, int Velocity, float Duration);
	void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes);
	struct FPatchId CreatePatch(ESynth1PatchSource PatchSource, TArray<struct FSynth1PatchCable> PatchCables, bool bEnableByDefault);
};


// Class Synthesis.SourceEffectBitCrusherPreset
// 0x0038 (0x0078 - 0x0040)
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0040(0x0030) MISSED OFFSET
	struct FSourceEffectBitCrusherSettings             Settings;                                                 // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectBitCrusherPreset");
		return ptr;
	}


	void SetSettings(struct FSourceEffectBitCrusherSettings InSettings);
};


// Class Synthesis.SourceEffectChorusPreset
// 0x0058 (0x0098 - 0x0040)
class USourceEffectChorusPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0040(0x0040) MISSED OFFSET
	struct FSourceEffectChorusSettings                 Settings;                                                 // 0x0080(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectChorusPreset");
		return ptr;
	}


	void SetSettings(struct FSourceEffectChorusSettings InSettings);
};


// Class Synthesis.SourceEffectDynamicsProcessorPreset
// 0x0078 (0x00B8 - 0x0040)
class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0040(0x0050) MISSED OFFSET
	struct FSourceEffectDynamicsProcessorSettings      Settings;                                                 // 0x0090(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectDynamicsProcessorPreset");
		return ptr;
	}


	void SetSettings(struct FSourceEffectDynamicsProcessorSettings InSettings);
};


// Class Synthesis.EnvelopeFollowerListener
// 0x0020 (0x00D0 - 0x00B0)
class UEnvelopeFollowerListener : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Synthesis.EnvelopeFollowerListener.OnEnvelopeFollowerUpdate
	unsigned char                                      UnknownData01[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.EnvelopeFollowerListener");
		return ptr;
	}

};


// Class Synthesis.SourceEffectEnvelopeFollowerPreset
// 0x0040 (0x0080 - 0x0040)
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0040(0x0034) MISSED OFFSET
	struct FSourceEffectEnvelopeFollowerSettings       Settings;                                                 // 0x0074(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectEnvelopeFollowerPreset");
		return ptr;
	}


	void UnregisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);
	void SetSettings(struct FSourceEffectEnvelopeFollowerSettings InSettings);
	void RegisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);
};


// Class Synthesis.SourceEffectEQPreset
// 0x0048 (0x0088 - 0x0040)
class USourceEffectEQPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0040(0x0038) MISSED OFFSET
	struct FSourceEffectEQSettings                     Settings;                                                 // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectEQPreset");
		return ptr;
	}


	void SetSettings(struct FSourceEffectEQSettings InSettings);
};


// Class Synthesis.SourceEffectFilterPreset
// 0x0040 (0x0080 - 0x0040)
class USourceEffectFilterPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0040(0x0034) MISSED OFFSET
	struct FSourceEffectFilterSettings                 Settings;                                                 // 0x0074(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectFilterPreset");
		return ptr;
	}


	void SetSettings(struct FSourceEffectFilterSettings InSettings);
};


// Class Synthesis.SourceEffectFoldbackDistortionPreset
// 0x0040 (0x0080 - 0x0040)
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0040(0x0034) MISSED OFFSET
	struct FSourceEffectFoldbackDistortionSettings     Settings;                                                 // 0x0074(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectFoldbackDistortionPreset");
		return ptr;
	}


	void SetSettings(struct FSourceEffectFoldbackDistortionSettings InSettings);
};


// Class Synthesis.SourceEffectPannerPreset
// 0x0030 (0x0070 - 0x0040)
class USourceEffectPannerPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0040(0x002C) MISSED OFFSET
	struct FSourceEffectPannerSettings                 Settings;                                                 // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectPannerPreset");
		return ptr;
	}


	void SetSettings(struct FSourceEffectPannerSettings InSettings);
};


// Class Synthesis.SourceEffectPhaserPreset
// 0x0048 (0x0088 - 0x0040)
class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0040(0x0038) MISSED OFFSET
	struct FSourceEffectPhaserSettings                 Settings;                                                 // 0x0078(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectPhaserPreset");
		return ptr;
	}


	void SetSettings(struct FSourceEffectPhaserSettings InSettings);
};


// Class Synthesis.SourceEffectRingModulationPreset
// 0x0050 (0x0090 - 0x0040)
class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0040(0x003C) MISSED OFFSET
	struct FSourceEffectRingModulationSettings         Settings;                                                 // 0x007C(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectRingModulationPreset");
		return ptr;
	}


	void SetSettings(struct FSourceEffectRingModulationSettings InSettings);
};


// Class Synthesis.SourceEffectSimpleDelayPreset
// 0x0058 (0x0098 - 0x0040)
class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0040(0x0040) MISSED OFFSET
	struct FSourceEffectSimpleDelaySettings            Settings;                                                 // 0x0080(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectSimpleDelayPreset");
		return ptr;
	}


	void SetSettings(struct FSourceEffectSimpleDelaySettings InSettings);
};


// Class Synthesis.SourceEffectStereoDelayPreset
// 0x0050 (0x0090 - 0x0040)
class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0040(0x003C) MISSED OFFSET
	struct FSourceEffectStereoDelaySettings            Settings;                                                 // 0x007C(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectStereoDelayPreset");
		return ptr;
	}


	void SetSettings(struct FSourceEffectStereoDelaySettings InSettings);
};


// Class Synthesis.SourceEffectWaveShaperPreset
// 0x0038 (0x0078 - 0x0040)
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0040(0x0030) MISSED OFFSET
	struct FSourceEffectWaveShaperSettings             Settings;                                                 // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectWaveShaperPreset");
		return ptr;
	}


	void SetSettings(struct FSourceEffectWaveShaperSettings InSettings);
};


// Class Synthesis.SubmixEffectDelayPreset
// 0x0050 (0x0090 - 0x0040)
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0040(0x0034) MISSED OFFSET
	struct FSubmixEffectDelaySettings                  Settings;                                                 // 0x0074(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSubmixEffectDelaySettings                  DynamicSettings;                                          // 0x0080(0x000C) (Transient, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SubmixEffectDelayPreset");
		return ptr;
	}


	void SetSettings(struct FSubmixEffectDelaySettings InSettings);
	void SetInterpolationTime(float Time);
	void SetDelay(float Length);
	float GetMaxDelayInMilliseconds();
};


// Class Synthesis.SubmixEffectFilterPreset
// 0x0040 (0x0080 - 0x0040)
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0040(0x0034) MISSED OFFSET
	struct FSubmixEffectFilterSettings                 Settings;                                                 // 0x0074(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SubmixEffectFilterPreset");
		return ptr;
	}


	void SetSettings(struct FSubmixEffectFilterSettings InSettings);
	void SetFilterType(ESubmixFilterType InType);
	void SetFilterQMod(float InQ);
	void SetFilterQ(float InQ);
	void SetFilterCutoffFrequencyMod(float InFrequency);
	void SetFilterCutoffFrequency(float InFrequency);
	void SetFilterAlgorithm(ESubmixFilterAlgorithm InAlgorithm);
};


// Class Synthesis.SubmixEffectFlexiverbPreset
// 0x0048 (0x0088 - 0x0040)
class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0040(0x0038) MISSED OFFSET
	struct FSubmixEffectFlexiverbSettings              Settings;                                                 // 0x0078(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SubmixEffectFlexiverbPreset");
		return ptr;
	}


	void SetSettings(struct FSubmixEffectFlexiverbSettings InSettings);
};


// Class Synthesis.SubmixEffectTapDelayPreset
// 0x0070 (0x00B0 - 0x0040)
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0040(0x0040) MISSED OFFSET
	struct FSubmixEffectTapDelaySettings               Settings;                                                 // 0x0080(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0098(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SubmixEffectTapDelayPreset");
		return ptr;
	}


	void SetTap(int TapId, struct FTapDelayInfo TapInfo);
	void SetSettings(struct FSubmixEffectTapDelaySettings InSettings);
	void SetInterpolationTime(float Time);
	void RemoveTap(int TapId);
	void GetTapIds(TArray<int>* TapIds);
	void GetTap(int TapId, struct FTapDelayInfo* TapInfo);
	float GetMaxDelayInMilliseconds();
	void AddTap(int* TapId);
};


// Class Synthesis.Synth2DSlider
// 0x0370 (0x0470 - 0x0100)
class USynth2DSlider : public UWidget
{
public:
	float                                              ValueX;                                                   // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ValueY;                                                   // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0108(0x0010) UNKNOWN PROPERTY: DelegateProperty Synthesis.Synth2DSlider.ValueXDelegate
	unsigned char                                      UnknownData01[0x10];                                      // 0x0118(0x0010) UNKNOWN PROPERTY: DelegateProperty Synthesis.Synth2DSlider.ValueYDelegate
	struct FSynth2DSliderStyle                         WidgetStyle;                                              // 0x0128(0x02B8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                                SliderHandleColor;                                        // 0x03E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IndentHandle;                                             // 0x03F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Locked;                                                   // 0x03F1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x2];                                       // 0x03F2(0x0002) MISSED OFFSET
	float                                              StepSize;                                                 // 0x03F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsFocusable;                                              // 0x03F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x7];                                       // 0x03F9(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData04[0x10];                                      // 0x03F9(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Synthesis.Synth2DSlider.OnMouseCaptureBegin
	unsigned char                                      UnknownData05[0x10];                                      // 0x0410(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Synthesis.Synth2DSlider.OnMouseCaptureEnd
	unsigned char                                      UnknownData06[0x10];                                      // 0x0420(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Synthesis.Synth2DSlider.OnControllerCaptureBegin
	unsigned char                                      UnknownData07[0x10];                                      // 0x0430(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Synthesis.Synth2DSlider.OnControllerCaptureEnd
	unsigned char                                      UnknownData08[0x10];                                      // 0x0440(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Synthesis.Synth2DSlider.OnValueChangedX
	unsigned char                                      UnknownData09[0x10];                                      // 0x0450(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Synthesis.Synth2DSlider.OnValueChangedY
	unsigned char                                      UnknownData10[0x10];                                      // 0x0460(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.Synth2DSlider");
		return ptr;
	}


	void SetValue(struct FVector2D InValue);
	void SetStepSize(float InValue);
	void SetSliderHandleColor(struct FLinearColor InValue);
	void SetLocked(bool InValue);
	void SetIndentHandle(bool InValue);
	struct FVector2D GetValue();
};


// Class Synthesis.GranularSynth
// 0x0350 (0x0950 - 0x0600)
class UGranularSynth : public USynthComponent
{
public:
	class USoundWave*                                  GranulatedSoundWave;                                      // 0x0600(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x348];                                     // 0x0608(0x0348) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.GranularSynth");
		return ptr;
	}


	void SetSustainGain(float SustainGain);
	void SetSoundWave(class USoundWave* InSoundWave);
	void SetScrubMode(bool bScrubMode);
	void SetReleaseTimeMsec(float ReleaseTimeMsec);
	void SetPlayheadTime(float InPositionSec, float LerpTimeSec, EGranularSynthSeekType SeekType);
	void SetPlaybackSpeed(float InPlayheadRate);
	void SetGrainVolume(float BaseVolume, struct FVector2D VolumeRange);
	void SetGrainsPerSecond(float InGrainsPerSecond);
	void SetGrainProbability(float InGrainProbability);
	void SetGrainPitch(float BasePitch, struct FVector2D PitchRange);
	void SetGrainPan(float BasePan, struct FVector2D PanRange);
	void SetGrainEnvelopeType(EGranularSynthEnvelopeType EnvelopeType);
	void SetGrainDuration(float BaseDurationMsec, struct FVector2D DurationRange);
	void SetDecayTime(float DecayTimeMsec);
	void SetAttackTime(float AttackTimeMsec);
	void NoteOn(float Note, int Velocity, float Duration);
	void NoteOff(float Note, bool bKill);
	bool IsLoaded();
	float GetSampleDuration();
	float GetCurrentPlayheadTime();
};


// Class Synthesis.SynthSamplePlayer
// 0x0130 (0x0730 - 0x0600)
class USynthSamplePlayer : public USynthComponent
{
public:
	class USoundWave*                                  SoundWave;                                                // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0608(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Synthesis.SynthSamplePlayer.OnSampleLoaded
	unsigned char                                      UnknownData01[0x10];                                      // 0x0618(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Synthesis.SynthSamplePlayer.OnSamplePlaybackProgress
	unsigned char                                      UnknownData02[0x108];                                     // 0x0628(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SynthSamplePlayer");
		return ptr;
	}


	void SetSoundWave(class USoundWave* InSoundWave);
	void SetScrubTimeWidth(float InScrubTimeWidthSec);
	void SetScrubMode(bool bScrubMode);
	void SetPitch(float InPitch, float TimeSec);
	void SeekToTime(float TimeSec, ESamplePlayerSeekType SeekType, bool bWrap);
	bool IsLoaded();
	float GetSampleDuration();
	float GetCurrentPlaybackProgressTime();
	float GetCurrentPlaybackProgressPercent();
};


// Class Synthesis.SynthKnob
// 0x02F8 (0x03F8 - 0x0100)
class USynthKnob : public UWidget
{
public:
	float                                              Value;                                                    // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StepSize;                                                 // 0x0104(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MouseSpeed;                                               // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MouseFineTuneSpeed;                                       // 0x010C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ShowTooltipInfo : 1;                                      // 0x0110(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	struct FText                                       ParameterName;                                            // 0x0118(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       ParameterUnits;                                           // 0x0130(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0148(0x0010) UNKNOWN PROPERTY: DelegateProperty Synthesis.SynthKnob.ValueDelegate
	struct FSynthKnobStyle                             WidgetStyle;                                              // 0x0158(0x0238) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               Locked;                                                   // 0x0390(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsFocusable;                                              // 0x0391(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0392(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData03[0x10];                                      // 0x0392(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Synthesis.SynthKnob.OnMouseCaptureBegin
	unsigned char                                      UnknownData04[0x10];                                      // 0x03A8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Synthesis.SynthKnob.OnMouseCaptureEnd
	unsigned char                                      UnknownData05[0x10];                                      // 0x03B8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Synthesis.SynthKnob.OnControllerCaptureBegin
	unsigned char                                      UnknownData06[0x10];                                      // 0x03C8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Synthesis.SynthKnob.OnControllerCaptureEnd
	unsigned char                                      UnknownData07[0x10];                                      // 0x03D8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Synthesis.SynthKnob.OnValueChanged
	unsigned char                                      UnknownData08[0x10];                                      // 0x03E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SynthKnob");
		return ptr;
	}


	void SetValue(float InValue);
	void SetStepSize(float InValue);
	void SetLocked(bool InValue);
	float GetValue();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
