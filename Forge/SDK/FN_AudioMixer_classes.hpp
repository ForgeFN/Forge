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

// Class AudioMixer.SynthComponent
// 0x0410 (0x0600 - 0x01F0)
class USynthComponent : public USceneComponent
{
public:
	unsigned char                                      bAutoDestroy : 1;                                         // 0x01F0(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bStopWhenOwnerDestroyed : 1;                              // 0x01F0(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowSpatialization : 1;                                 // 0x01F0(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideAttenuation : 1;                                 // 0x01F0(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01F1(0x0003) MISSED OFFSET
	unsigned char                                      bOutputToBusOnly : 1;                                     // 0x01F4(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01F5(0x0003) MISSED OFFSET
	class USoundAttenuation*                           AttenuationSettings;                                      // 0x01F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundAttenuationSettings                   AttenuationOverrides;                                     // 0x0200(0x02E8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USoundConcurrency*                           ConcurrencySettings;                                      // 0x04E8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x50];                                      // 0x04F0(0x0050) UNKNOWN PROPERTY: SetProperty AudioMixer.SynthComponent.ConcurrencySet
	class USoundClass*                                 SoundClass;                                               // 0x0540(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*               SourceEffectChain;                                        // 0x0548(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                                SoundSubmix;                                              // 0x0550(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoundSubmixSendInfo>                SoundSubmixSends;                                         // 0x0558(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSoundSourceBusSendInfo>             BusSends;                                                 // 0x0568(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSoundSourceBusSendInfo>             PreEffectBusSends;                                        // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      bIsUISound : 1;                                           // 0x0588(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsPreviewSound : 1;                                      // 0x0588(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0589(0x0003) MISSED OFFSET
	int                                                EnvelopeFollowerAttackTime;                               // 0x058C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EnvelopeFollowerReleaseTime;                              // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0594(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData05[0x10];                                      // 0x0594(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AudioMixer.SynthComponent.OnAudioEnvelopeValue
	unsigned char                                      UnknownData06[0x20];                                      // 0x05A8(0x0020) MISSED OFFSET
	class USynthSound*                                 Synth;                                                    // 0x05C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioComponent*                             AudioComponent;                                           // 0x05D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData07[0x28];                                      // 0x05D8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SynthComponent");
		return ptr;
	}


	void Stop();
	void Start();
	void SetVolumeMultiplier(float VolumeMultiplier);
	void SetSubmixSend(class USoundSubmix* Submix, float SendLevel);
	bool IsPlaying();
};


// Class AudioMixer.AudioGenerator
// 0x0080 (0x00A8 - 0x0028)
class UAudioGenerator : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.AudioGenerator");
		return ptr;
	}

};


// Class AudioMixer.AudioMixerBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.AudioMixerBlueprintLibrary");
		return ptr;
	}


	static float TrimAudioCache(float InMegabytesToFree);
	static class USoundWave* StopRecordingOutput(class UObject* WorldContextObject, EAudioRecordingExportType ExportType, struct FString Name, struct FString Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite);
	static void StopAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing);
	static void StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord);
	static void StartAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize);
	static void SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex, bool bBypassed);
	static void ResumeRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
	static void RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex);
	static void RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
	static void PrimeSoundForPlayback(class USoundWave* SoundWave);
	static void PauseRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
	static void GetPhaseForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, class USoundSubmix* SubmixToAnalyze, TArray<float>* Phases);
	static int GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain);
	static void GetMagnitudeForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, class USoundSubmix* SubmixToAnalyze, TArray<float>* Magnitudes);
	static void ClearMasterSubmixEffects(class UObject* WorldContextObject);
	static void AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, struct FSourceEffectChainEntry Entry);
	static void AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
};


// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// 0x0078 (0x00B8 - 0x0040)
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0040(0x0050) MISSED OFFSET
	struct FSubmixEffectDynamicsProcessorSettings      Settings;                                                 // 0x0090(0x0028) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectDynamicsProcessorPreset");
		return ptr;
	}


	void SetSettings(struct FSubmixEffectDynamicsProcessorSettings InSettings);
};


// Class AudioMixer.SubmixEffectSubmixEQPreset
// 0x0048 (0x0088 - 0x0040)
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0040(0x0038) MISSED OFFSET
	struct FSubmixEffectSubmixEQSettings               Settings;                                                 // 0x0078(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectSubmixEQPreset");
		return ptr;
	}


	void SetSettings(struct FSubmixEffectSubmixEQSettings InSettings);
};


// Class AudioMixer.SubmixEffectReverbPreset
// 0x0090 (0x00D0 - 0x0040)
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0040(0x005C) MISSED OFFSET
	struct FSubmixEffectReverbSettings                 Settings;                                                 // 0x009C(0x0034) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectReverbPreset");
		return ptr;
	}


	void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);
	void SetSettings(struct FSubmixEffectReverbSettings InSettings);
};


// Class AudioMixer.SubmixEffectReverbFastPreset
// 0x0090 (0x00D0 - 0x0040)
class USubmixEffectReverbFastPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0040(0x005C) MISSED OFFSET
	struct FSubmixEffectReverbFastSettings             Settings;                                                 // 0x009C(0x0034) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectReverbFastPreset");
		return ptr;
	}


	void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);
	void SetSettings(struct FSubmixEffectReverbFastSettings InSettings);
};


// Class AudioMixer.SynthSound
// 0x0020 (0x0340 - 0x0320)
class USynthSound : public USoundWaveProcedural
{
public:
	class USynthComponent*                             OwningSynthComponent;                                     // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0328(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SynthSound");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
