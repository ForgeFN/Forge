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

// Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// class UModularSynthPresetBank* InBank                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModularSynthPreset     Preset                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 PresetName                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthLibrary::AddModularSynthPresetToBankAsset(class UModularSynthPresetBank* InBank, struct FModularSynthPreset Preset, struct FString PresetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset");

	UModularSynthLibrary_AddModularSynthPresetToBankAsset_Params params;
	params.InBank = InBank;
	params.Preset = Preset;
	params.PresetName = PresetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetSynthPreset
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FModularSynthPreset     SynthPreset                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetSynthPreset(struct FModularSynthPreset SynthPreset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetSynthPreset");

	UModularSynthComponent_SetSynthPreset_Params params;
	params.SynthPreset = SynthPreset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetSustainGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          SustainGain                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetSustainGain(float SustainGain)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetSustainGain");

	UModularSynthComponent_SetSustainGain_Params params;
	params.SustainGain = SustainGain;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DelayWetlevel                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetStereoDelayWetlevel(float DelayWetlevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel");

	UModularSynthComponent_SetStereoDelayWetlevel_Params params;
	params.DelayWetlevel = DelayWetlevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetStereoDelayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DelayTimeMsec                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetStereoDelayTime(float DelayTimeMsec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetStereoDelayTime");

	UModularSynthComponent_SetStereoDelayTime_Params params;
	params.DelayTimeMsec = DelayTimeMsec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetStereoDelayRatio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DelayRatio                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetStereoDelayRatio(float DelayRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetStereoDelayRatio");

	UModularSynthComponent_SetStereoDelayRatio_Params params;
	params.DelayRatio = DelayRatio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetStereoDelayMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ESynthStereoDelayMode          StereoDelayMode                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetStereoDelayMode(ESynthStereoDelayMode StereoDelayMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetStereoDelayMode");

	UModularSynthComponent_SetStereoDelayMode_Params params;
	params.StereoDelayMode = StereoDelayMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           StereoDelayEnabled             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetStereoDelayIsEnabled(bool StereoDelayEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled");

	UModularSynthComponent_SetStereoDelayIsEnabled_Params params;
	params.StereoDelayEnabled = StereoDelayEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DelayFeedback                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetStereoDelayFeedback(float DelayFeedback)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback");

	UModularSynthComponent_SetStereoDelayFeedback_Params params;
	params.DelayFeedback = DelayFeedback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetSpread
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Spread                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetSpread(float Spread)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetSpread");

	UModularSynthComponent_SetSpread_Params params;
	params.Spread = Spread;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetReleaseTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReleaseTimeMsec                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetReleaseTime(float ReleaseTimeMsec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetReleaseTime");

	UModularSynthComponent_SetReleaseTime_Params params;
	params.ReleaseTimeMsec = ReleaseTimeMsec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetPortamento
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Portamento                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetPortamento(float Portamento)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetPortamento");

	UModularSynthComponent_SetPortamento_Params params;
	params.Portamento = Portamento;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetPitchBend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          PitchBend                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetPitchBend(float PitchBend)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetPitchBend");

	UModularSynthComponent_SetPitchBend_Params params;
	params.PitchBend = PitchBend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetPan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Pan                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetPan(float Pan)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetPan");

	UModularSynthComponent_SetPan_Params params;
	params.Pan = Pan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetOscType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            OscIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ESynth1OscType                 OscType                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscType(int OscIndex, ESynth1OscType OscType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscType");

	UModularSynthComponent_SetOscType_Params params;
	params.OscIndex = OscIndex;
	params.OscType = OscType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetOscSync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsSynced                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscSync(bool bIsSynced)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscSync");

	UModularSynthComponent_SetOscSync_Params params;
	params.bIsSynced = bIsSynced;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetOscSemitones
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            OscIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Semitones                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscSemitones(int OscIndex, float Semitones)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscSemitones");

	UModularSynthComponent_SetOscSemitones_Params params;
	params.OscIndex = OscIndex;
	params.Semitones = Semitones;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetOscPulsewidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            OscIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Pulsewidth                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscPulsewidth(int OscIndex, float Pulsewidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscPulsewidth");

	UModularSynthComponent_SetOscPulsewidth_Params params;
	params.OscIndex = OscIndex;
	params.Pulsewidth = Pulsewidth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetOscOctave
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            OscIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Octave                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscOctave(int OscIndex, float Octave)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscOctave");

	UModularSynthComponent_SetOscOctave_Params params;
	params.OscIndex = OscIndex;
	params.Octave = Octave;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetOscGainMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            OscIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OscGainMod                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscGainMod(int OscIndex, float OscGainMod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscGainMod");

	UModularSynthComponent_SetOscGainMod_Params params;
	params.OscIndex = OscIndex;
	params.OscGainMod = OscGainMod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetOscGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            OscIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OscGain                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscGain(int OscIndex, float OscGain)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscGain");

	UModularSynthComponent_SetOscGain_Params params;
	params.OscIndex = OscIndex;
	params.OscGain = OscGain;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetOscFrequencyMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            OscIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OscFreqMod                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscFrequencyMod(int OscIndex, float OscFreqMod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscFrequencyMod");

	UModularSynthComponent_SetOscFrequencyMod_Params params;
	params.OscIndex = OscIndex;
	params.OscFreqMod = OscFreqMod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetOscCents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            OscIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Cents                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscCents(int OscIndex, float Cents)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetOscCents");

	UModularSynthComponent_SetOscCents_Params params;
	params.OscIndex = OscIndex;
	params.Cents = Cents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetModEnvSustainGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          SustainGain                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvSustainGain(float SustainGain)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvSustainGain");

	UModularSynthComponent_SetModEnvSustainGain_Params params;
	params.SustainGain = SustainGain;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Release                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvReleaseTime(float Release)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime");

	UModularSynthComponent_SetModEnvReleaseTime_Params params;
	params.Release = Release;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetModEnvPatch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ESynthModEnvPatch              InPatchType                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvPatch(ESynthModEnvPatch InPatchType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvPatch");

	UModularSynthComponent_SetModEnvPatch_Params params;
	params.InPatchType = InPatchType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetModEnvInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInvert                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvInvert(bool bInvert)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvInvert");

	UModularSynthComponent_SetModEnvInvert_Params params;
	params.bInvert = bInvert;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetModEnvDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Depth                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvDepth(float Depth)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvDepth");

	UModularSynthComponent_SetModEnvDepth_Params params;
	params.Depth = Depth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetModEnvDecayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DecayTimeMsec                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvDecayTime(float DecayTimeMsec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvDecayTime");

	UModularSynthComponent_SetModEnvDecayTime_Params params;
	params.DecayTimeMsec = DecayTimeMsec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ESynthModEnvBiasPatch          InPatchType                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvBiasPatch(ESynthModEnvBiasPatch InPatchType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch");

	UModularSynthComponent_SetModEnvBiasPatch_Params params;
	params.InPatchType = InPatchType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInvert                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvBiasInvert(bool bInvert)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert");

	UModularSynthComponent_SetModEnvBiasInvert_Params params;
	params.bInvert = bInvert;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetModEnvAttackTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          AttackTimeMsec                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvAttackTime(float AttackTimeMsec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetModEnvAttackTime");

	UModularSynthComponent_SetModEnvAttackTime_Params params;
	params.AttackTimeMsec = AttackTimeMsec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetLFOType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            LFOIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ESynthLFOType                  LFOType                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetLFOType(int LFOIndex, ESynthLFOType LFOType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOType");

	UModularSynthComponent_SetLFOType_Params params;
	params.LFOIndex = LFOIndex;
	params.LFOType = LFOType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetLFOPatch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            LFOIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ESynthLFOPatchType             LFOPatchType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetLFOPatch(int LFOIndex, ESynthLFOPatchType LFOPatchType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOPatch");

	UModularSynthComponent_SetLFOPatch_Params params;
	params.LFOIndex = LFOIndex;
	params.LFOPatchType = LFOPatchType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetLFOMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            LFOIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ESynthLFOMode                  LFOMode                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetLFOMode(int LFOIndex, ESynthLFOMode LFOMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOMode");

	UModularSynthComponent_SetLFOMode_Params params;
	params.LFOIndex = LFOIndex;
	params.LFOMode = LFOMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetLFOGainMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            LFOIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          GainMod                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetLFOGainMod(int LFOIndex, float GainMod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOGainMod");

	UModularSynthComponent_SetLFOGainMod_Params params;
	params.LFOIndex = LFOIndex;
	params.GainMod = GainMod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetLFOGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            LFOIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Gain                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetLFOGain(int LFOIndex, float Gain)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOGain");

	UModularSynthComponent_SetLFOGain_Params params;
	params.LFOIndex = LFOIndex;
	params.Gain = Gain;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            LFOIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          FrequencyModHz                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetLFOFrequencyMod(int LFOIndex, float FrequencyModHz)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod");

	UModularSynthComponent_SetLFOFrequencyMod_Params params;
	params.LFOIndex = LFOIndex;
	params.FrequencyModHz = FrequencyModHz;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetLFOFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            LFOIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          FrequencyHz                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetLFOFrequency(int LFOIndex, float FrequencyHz)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetLFOFrequency");

	UModularSynthComponent_SetLFOFrequency_Params params;
	params.LFOIndex = LFOIndex;
	params.FrequencyHz = FrequencyHz;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetGainDb
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          GainDb                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetGainDb(float GainDb)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetGainDb");

	UModularSynthComponent_SetGainDb_Params params;
	params.GainDb = GainDb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetFilterType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ESynthFilterType               FilterType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetFilterType(ESynthFilterType FilterType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetFilterType");

	UModularSynthComponent_SetFilterType_Params params;
	params.FilterType = FilterType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetFilterQMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          FilterQ                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetFilterQMod(float FilterQ)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetFilterQMod");

	UModularSynthComponent_SetFilterQMod_Params params;
	params.FilterQ = FilterQ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetFilterQ
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          FilterQ                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetFilterQ(float FilterQ)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetFilterQ");

	UModularSynthComponent_SetFilterQ_Params params;
	params.FilterQ = FilterQ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          FilterFrequencyHz              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetFilterFrequencyMod(float FilterFrequencyHz)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod");

	UModularSynthComponent_SetFilterFrequencyMod_Params params;
	params.FilterFrequencyHz = FilterFrequencyHz;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetFilterFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          FilterFrequencyHz              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetFilterFrequency(float FilterFrequencyHz)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetFilterFrequency");

	UModularSynthComponent_SetFilterFrequency_Params params;
	params.FilterFrequencyHz = FilterFrequencyHz;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetFilterAlgorithm
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ESynthFilterAlgorithm          FilterAlgorithm                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetFilterAlgorithm(ESynthFilterAlgorithm FilterAlgorithm)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetFilterAlgorithm");

	UModularSynthComponent_SetFilterAlgorithm_Params params;
	params.FilterAlgorithm = FilterAlgorithm;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetEnableUnison
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           EnableUnison                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetEnableUnison(bool EnableUnison)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetEnableUnison");

	UModularSynthComponent_SetEnableUnison_Params params;
	params.EnableUnison = EnableUnison;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetEnableRetrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           RetriggerEnabled               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetEnableRetrigger(bool RetriggerEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetEnableRetrigger");

	UModularSynthComponent_SetEnableRetrigger_Params params;
	params.RetriggerEnabled = RetriggerEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetEnablePolyphony
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnablePolyphony               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetEnablePolyphony(bool bEnablePolyphony)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetEnablePolyphony");

	UModularSynthComponent_SetEnablePolyphony_Params params;
	params.bEnablePolyphony = bEnablePolyphony;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetEnablePatch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPatchId                PatchId                        (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bIsEnabled                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModularSynthComponent::SetEnablePatch(struct FPatchId PatchId, bool bIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetEnablePatch");

	UModularSynthComponent_SetEnablePatch_Params params;
	params.PatchId = PatchId;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Synthesis.ModularSynthComponent.SetEnableLegato
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           LegatoEnabled                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetEnableLegato(bool LegatoEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetEnableLegato");

	UModularSynthComponent_SetEnableLegato_Params params;
	params.LegatoEnabled = LegatoEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetDecayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DecayTimeMsec                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetDecayTime(float DecayTimeMsec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetDecayTime");

	UModularSynthComponent_SetDecayTime_Params params;
	params.DecayTimeMsec = DecayTimeMsec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetChorusFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Frequency                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetChorusFrequency(float Frequency)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetChorusFrequency");

	UModularSynthComponent_SetChorusFrequency_Params params;
	params.Frequency = Frequency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetChorusFeedback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Feedback                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetChorusFeedback(float Feedback)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetChorusFeedback");

	UModularSynthComponent_SetChorusFeedback_Params params;
	params.Feedback = Feedback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetChorusEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           EnableChorus                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetChorusEnabled(bool EnableChorus)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetChorusEnabled");

	UModularSynthComponent_SetChorusEnabled_Params params;
	params.EnableChorus = EnableChorus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetChorusDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Depth                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetChorusDepth(float Depth)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetChorusDepth");

	UModularSynthComponent_SetChorusDepth_Params params;
	params.Depth = Depth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.SetAttackTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          AttackTimeMsec                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetAttackTime(float AttackTimeMsec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.SetAttackTime");

	UModularSynthComponent_SetAttackTime_Params params;
	params.AttackTimeMsec = AttackTimeMsec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.NoteOn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Note                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Velocity                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Duration                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::NoteOn(float Note, int Velocity, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.NoteOn");

	UModularSynthComponent_NoteOn_Params params;
	params.Note = Note;
	params.Velocity = Velocity;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.NoteOff
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Note                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllNotesOff                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bKillAllNotes                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.NoteOff");

	UModularSynthComponent_NoteOff_Params params;
	params.Note = Note;
	params.bAllNotesOff = bAllNotesOff;
	params.bKillAllNotes = bKillAllNotes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.ModularSynthComponent.CreatePatch
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// ESynth1PatchSource             PatchSource                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSynth1PatchCable> PatchCables                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bEnableByDefault               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPatchId                ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FPatchId UModularSynthComponent::CreatePatch(ESynth1PatchSource PatchSource, TArray<struct FSynth1PatchCable> PatchCables, bool bEnableByDefault)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.ModularSynthComponent.CreatePatch");

	UModularSynthComponent_CreatePatch_Params params;
	params.PatchSource = PatchSource;
	params.PatchCables = PatchCables;
	params.bEnableByDefault = bEnableByDefault;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Synthesis.SourceEffectBitCrusherPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSourceEffectBitCrusherSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectBitCrusherPreset::SetSettings(struct FSourceEffectBitCrusherSettings InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectBitCrusherPreset.SetSettings");

	USourceEffectBitCrusherPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SourceEffectChorusPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSourceEffectChorusSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetSettings(struct FSourceEffectChorusSettings InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectChorusPreset.SetSettings");

	USourceEffectChorusPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSourceEffectDynamicsProcessorSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectDynamicsProcessorPreset::SetSettings(struct FSourceEffectDynamicsProcessorSettings InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings");

	USourceEffectDynamicsProcessorPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEnvelopeFollowerListener* EnvelopeFollowerListener       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USourceEffectEnvelopeFollowerPreset::UnregisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener");

	USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Params params;
	params.EnvelopeFollowerListener = EnvelopeFollowerListener;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSourceEffectEnvelopeFollowerSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectEnvelopeFollowerPreset::SetSettings(struct FSourceEffectEnvelopeFollowerSettings InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings");

	USourceEffectEnvelopeFollowerPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEnvelopeFollowerListener* EnvelopeFollowerListener       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USourceEffectEnvelopeFollowerPreset::RegisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener");

	USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Params params;
	params.EnvelopeFollowerListener = EnvelopeFollowerListener;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SourceEffectEQPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSourceEffectEQSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USourceEffectEQPreset::SetSettings(struct FSourceEffectEQSettings InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectEQPreset.SetSettings");

	USourceEffectEQPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SourceEffectFilterPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSourceEffectFilterSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectFilterPreset::SetSettings(struct FSourceEffectFilterSettings InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectFilterPreset.SetSettings");

	USourceEffectFilterPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSourceEffectFoldbackDistortionSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectFoldbackDistortionPreset::SetSettings(struct FSourceEffectFoldbackDistortionSettings InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings");

	USourceEffectFoldbackDistortionPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SourceEffectPannerPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSourceEffectPannerSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectPannerPreset::SetSettings(struct FSourceEffectPannerSettings InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectPannerPreset.SetSettings");

	USourceEffectPannerPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SourceEffectPhaserPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSourceEffectPhaserSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectPhaserPreset::SetSettings(struct FSourceEffectPhaserSettings InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectPhaserPreset.SetSettings");

	USourceEffectPhaserPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SourceEffectRingModulationPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSourceEffectRingModulationSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectRingModulationPreset::SetSettings(struct FSourceEffectRingModulationSettings InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectRingModulationPreset.SetSettings");

	USourceEffectRingModulationPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSourceEffectSimpleDelaySettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectSimpleDelayPreset::SetSettings(struct FSourceEffectSimpleDelaySettings InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings");

	USourceEffectSimpleDelayPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SourceEffectStereoDelayPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSourceEffectStereoDelaySettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectStereoDelayPreset::SetSettings(struct FSourceEffectStereoDelaySettings InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectStereoDelayPreset.SetSettings");

	USourceEffectStereoDelayPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SourceEffectWaveShaperPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSourceEffectWaveShaperSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectWaveShaperPreset::SetSettings(struct FSourceEffectWaveShaperSettings InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SourceEffectWaveShaperPreset.SetSettings");

	USourceEffectWaveShaperPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SubmixEffectDelayPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSubmixEffectDelaySettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USubmixEffectDelayPreset::SetSettings(struct FSubmixEffectDelaySettings InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectDelayPreset.SetSettings");

	USubmixEffectDelayPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectDelayPreset::SetInterpolationTime(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime");

	USubmixEffectDelayPreset_SetInterpolationTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SubmixEffectDelayPreset.SetDelay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Length                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectDelayPreset::SetDelay(float Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectDelayPreset.SetDelay");

	USubmixEffectDelayPreset_SetDelay_Params params;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USubmixEffectDelayPreset::GetMaxDelayInMilliseconds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds");

	USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Synthesis.SubmixEffectFilterPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSubmixEffectFilterSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USubmixEffectFilterPreset::SetSettings(struct FSubmixEffectFilterSettings InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetSettings");

	USubmixEffectFilterPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ESubmixFilterType              InType                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectFilterPreset::SetFilterType(ESubmixFilterType InType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetFilterType");

	USubmixEffectFilterPreset_SetFilterType_Params params;
	params.InType = InType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InQ                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectFilterPreset::SetFilterQMod(float InQ)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod");

	USubmixEffectFilterPreset_SetFilterQMod_Params params;
	params.InQ = InQ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterQ
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InQ                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectFilterPreset::SetFilterQ(float InQ)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetFilterQ");

	USubmixEffectFilterPreset_SetFilterQ_Params params;
	params.InQ = InQ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InFrequency                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectFilterPreset::SetFilterCutoffFrequencyMod(float InFrequency)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod");

	USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Params params;
	params.InFrequency = InFrequency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InFrequency                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectFilterPreset::SetFilterCutoffFrequency(float InFrequency)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency");

	USubmixEffectFilterPreset_SetFilterCutoffFrequency_Params params;
	params.InFrequency = InFrequency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ESubmixFilterAlgorithm         InAlgorithm                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectFilterPreset::SetFilterAlgorithm(ESubmixFilterAlgorithm InAlgorithm)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm");

	USubmixEffectFilterPreset_SetFilterAlgorithm_Params params;
	params.InAlgorithm = InAlgorithm;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSubmixEffectFlexiverbSettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USubmixEffectFlexiverbPreset::SetSettings(struct FSubmixEffectFlexiverbSettings InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings");

	USubmixEffectFlexiverbPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SubmixEffectTapDelayPreset.SetTap
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            TapId                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTapDelayInfo           TapInfo                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USubmixEffectTapDelayPreset::SetTap(int TapId, struct FTapDelayInfo TapInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.SetTap");

	USubmixEffectTapDelayPreset_SetTap_Params params;
	params.TapId = TapId;
	params.TapInfo = TapInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SubmixEffectTapDelayPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSubmixEffectTapDelaySettings InSettings                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USubmixEffectTapDelayPreset::SetSettings(struct FSubmixEffectTapDelaySettings InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.SetSettings");

	USubmixEffectTapDelayPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectTapDelayPreset::SetInterpolationTime(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime");

	USubmixEffectTapDelayPreset_SetInterpolationTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TapId                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectTapDelayPreset::RemoveTap(int TapId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap");

	USubmixEffectTapDelayPreset_RemoveTap_Params params;
	params.TapId = TapId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<int>                    TapIds                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void USubmixEffectTapDelayPreset::GetTapIds(TArray<int>* TapIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds");

	USubmixEffectTapDelayPreset_GetTapIds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TapIds != nullptr)
		*TapIds = params.TapIds;
}


// Function Synthesis.SubmixEffectTapDelayPreset.GetTap
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            TapId                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTapDelayInfo           TapInfo                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void USubmixEffectTapDelayPreset::GetTap(int TapId, struct FTapDelayInfo* TapInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.GetTap");

	USubmixEffectTapDelayPreset_GetTap_Params params;
	params.TapId = TapId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TapInfo != nullptr)
		*TapInfo = params.TapInfo;
}


// Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USubmixEffectTapDelayPreset::GetMaxDelayInMilliseconds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds");

	USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Synthesis.SubmixEffectTapDelayPreset.AddTap
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            TapId                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectTapDelayPreset::AddTap(int* TapId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SubmixEffectTapDelayPreset.AddTap");

	USubmixEffectTapDelayPreset_AddTap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TapId != nullptr)
		*TapId = params.TapId;
}


// Function Synthesis.Synth2DSlider.SetValue
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynth2DSlider::SetValue(struct FVector2D InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.Synth2DSlider.SetValue");

	USynth2DSlider_SetValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.Synth2DSlider.SetStepSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynth2DSlider::SetStepSize(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.Synth2DSlider.SetStepSize");

	USynth2DSlider_SetStepSize_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.Synth2DSlider.SetSliderHandleColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynth2DSlider::SetSliderHandleColor(struct FLinearColor InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.Synth2DSlider.SetSliderHandleColor");

	USynth2DSlider_SetSliderHandleColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.Synth2DSlider.SetLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynth2DSlider::SetLocked(bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.Synth2DSlider.SetLocked");

	USynth2DSlider_SetLocked_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.Synth2DSlider.SetIndentHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynth2DSlider::SetIndentHandle(bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.Synth2DSlider.SetIndentHandle");

	USynth2DSlider_SetIndentHandle_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.Synth2DSlider.GetValue
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USynth2DSlider::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.Synth2DSlider.GetValue");

	USynth2DSlider_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Synthesis.GranularSynth.SetSustainGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          SustainGain                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetSustainGain(float SustainGain)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetSustainGain");

	UGranularSynth_SetSustainGain_Params params;
	params.SustainGain = SustainGain;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.GranularSynth.SetSoundWave
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundWave*              InSoundWave                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetSoundWave(class USoundWave* InSoundWave)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetSoundWave");

	UGranularSynth_SetSoundWave_Params params;
	params.InSoundWave = InSoundWave;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.GranularSynth.SetScrubMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bScrubMode                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetScrubMode(bool bScrubMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetScrubMode");

	UGranularSynth_SetScrubMode_Params params;
	params.bScrubMode = bScrubMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.GranularSynth.SetReleaseTimeMsec
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReleaseTimeMsec                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetReleaseTimeMsec(float ReleaseTimeMsec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetReleaseTimeMsec");

	UGranularSynth_SetReleaseTimeMsec_Params params;
	params.ReleaseTimeMsec = ReleaseTimeMsec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.GranularSynth.SetPlayheadTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InPositionSec                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          LerpTimeSec                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EGranularSynthSeekType         SeekType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetPlayheadTime(float InPositionSec, float LerpTimeSec, EGranularSynthSeekType SeekType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetPlayheadTime");

	UGranularSynth_SetPlayheadTime_Params params;
	params.InPositionSec = InPositionSec;
	params.LerpTimeSec = LerpTimeSec;
	params.SeekType = SeekType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.GranularSynth.SetPlaybackSpeed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InPlayheadRate                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetPlaybackSpeed(float InPlayheadRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetPlaybackSpeed");

	UGranularSynth_SetPlaybackSpeed_Params params;
	params.InPlayheadRate = InPlayheadRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.GranularSynth.SetGrainVolume
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                          BaseVolume                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               VolumeRange                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetGrainVolume(float BaseVolume, struct FVector2D VolumeRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainVolume");

	UGranularSynth_SetGrainVolume_Params params;
	params.BaseVolume = BaseVolume;
	params.VolumeRange = VolumeRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.GranularSynth.SetGrainsPerSecond
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InGrainsPerSecond              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetGrainsPerSecond(float InGrainsPerSecond)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainsPerSecond");

	UGranularSynth_SetGrainsPerSecond_Params params;
	params.InGrainsPerSecond = InGrainsPerSecond;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.GranularSynth.SetGrainProbability
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InGrainProbability             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetGrainProbability(float InGrainProbability)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainProbability");

	UGranularSynth_SetGrainProbability_Params params;
	params.InGrainProbability = InGrainProbability;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.GranularSynth.SetGrainPitch
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                          BasePitch                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               PitchRange                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetGrainPitch(float BasePitch, struct FVector2D PitchRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainPitch");

	UGranularSynth_SetGrainPitch_Params params;
	params.BasePitch = BasePitch;
	params.PitchRange = PitchRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.GranularSynth.SetGrainPan
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                          BasePan                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               PanRange                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetGrainPan(float BasePan, struct FVector2D PanRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainPan");

	UGranularSynth_SetGrainPan_Params params;
	params.BasePan = BasePan;
	params.PanRange = PanRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.GranularSynth.SetGrainEnvelopeType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EGranularSynthEnvelopeType     EnvelopeType                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetGrainEnvelopeType(EGranularSynthEnvelopeType EnvelopeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainEnvelopeType");

	UGranularSynth_SetGrainEnvelopeType_Params params;
	params.EnvelopeType = EnvelopeType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.GranularSynth.SetGrainDuration
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                          BaseDurationMsec               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               DurationRange                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetGrainDuration(float BaseDurationMsec, struct FVector2D DurationRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetGrainDuration");

	UGranularSynth_SetGrainDuration_Params params;
	params.BaseDurationMsec = BaseDurationMsec;
	params.DurationRange = DurationRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.GranularSynth.SetDecayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DecayTimeMsec                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetDecayTime(float DecayTimeMsec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetDecayTime");

	UGranularSynth_SetDecayTime_Params params;
	params.DecayTimeMsec = DecayTimeMsec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.GranularSynth.SetAttackTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          AttackTimeMsec                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetAttackTime(float AttackTimeMsec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.SetAttackTime");

	UGranularSynth_SetAttackTime_Params params;
	params.AttackTimeMsec = AttackTimeMsec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.GranularSynth.NoteOn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Note                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Velocity                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Duration                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::NoteOn(float Note, int Velocity, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.NoteOn");

	UGranularSynth_NoteOn_Params params;
	params.Note = Note;
	params.Velocity = Velocity;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.GranularSynth.NoteOff
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Note                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bKill                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::NoteOff(float Note, bool bKill)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.NoteOff");

	UGranularSynth_NoteOff_Params params;
	params.Note = Note;
	params.bKill = bKill;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.GranularSynth.IsLoaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGranularSynth::IsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.IsLoaded");

	UGranularSynth_IsLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Synthesis.GranularSynth.GetSampleDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGranularSynth::GetSampleDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.GetSampleDuration");

	UGranularSynth_GetSampleDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Synthesis.GranularSynth.GetCurrentPlayheadTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGranularSynth::GetCurrentPlayheadTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.GranularSynth.GetCurrentPlayheadTime");

	UGranularSynth_GetCurrentPlayheadTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Synthesis.SynthSamplePlayer.SetSoundWave
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundWave*              InSoundWave                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthSamplePlayer::SetSoundWave(class USoundWave* InSoundWave)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.SetSoundWave");

	USynthSamplePlayer_SetSoundWave_Params params;
	params.InSoundWave = InSoundWave;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InScrubTimeWidthSec            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthSamplePlayer::SetScrubTimeWidth(float InScrubTimeWidthSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth");

	USynthSamplePlayer_SetScrubTimeWidth_Params params;
	params.InScrubTimeWidthSec = InScrubTimeWidthSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SynthSamplePlayer.SetScrubMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bScrubMode                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthSamplePlayer::SetScrubMode(bool bScrubMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.SetScrubMode");

	USynthSamplePlayer_SetScrubMode_Params params;
	params.bScrubMode = bScrubMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SynthSamplePlayer.SetPitch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InPitch                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TimeSec                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthSamplePlayer::SetPitch(float InPitch, float TimeSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.SetPitch");

	USynthSamplePlayer_SetPitch_Params params;
	params.InPitch = InPitch;
	params.TimeSec = TimeSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SynthSamplePlayer.SeekToTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          TimeSec                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ESamplePlayerSeekType          SeekType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWrap                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthSamplePlayer::SeekToTime(float TimeSec, ESamplePlayerSeekType SeekType, bool bWrap)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.SeekToTime");

	USynthSamplePlayer_SeekToTime_Params params;
	params.TimeSec = TimeSec;
	params.SeekType = SeekType;
	params.bWrap = bWrap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SynthSamplePlayer.IsLoaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USynthSamplePlayer::IsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.IsLoaded");

	USynthSamplePlayer_IsLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Synthesis.SynthSamplePlayer.GetSampleDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USynthSamplePlayer::GetSampleDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.GetSampleDuration");

	USynthSamplePlayer_GetSampleDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USynthSamplePlayer::GetCurrentPlaybackProgressTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime");

	USynthSamplePlayer_GetCurrentPlaybackProgressTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USynthSamplePlayer::GetCurrentPlaybackProgressPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent");

	USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Synthesis.SynthKnob.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthKnob::SetValue(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthKnob.SetValue");

	USynthKnob_SetValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SynthKnob.SetStepSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthKnob::SetStepSize(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthKnob.SetStepSize");

	USynthKnob_SetStepSize_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SynthKnob.SetLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthKnob::SetLocked(bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthKnob.SetLocked");

	USynthKnob_SetLocked_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Synthesis.SynthKnob.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USynthKnob::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Synthesis.SynthKnob.GetValue");

	USynthKnob_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
