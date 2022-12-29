#pragma once

// Fortnite (11.00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum TimeSynth.ETimeSynthEventQuantization
enum class ETimeSynthEventQuantization : uint8_t
{
	None                           = 0,
	Bars8                          = 1,
	Bars4                          = 2,
	Bars2                          = 3,
	Bar                            = 4,
	HalfNote                       = 5,
	HalfNoteTriplet                = 6,
	QuarterNote                    = 7,
	QuarterNoteTriplet             = 8,
	EighthNote                     = 9,
	EighthNoteTriplet              = 10,
	SixteenthNote                  = 11,
	SixteenthNoteTriplet           = 12,
	ThirtySecondNote               = 13,
	Count                          = 14,
	ETimeSynthEventQuantization_MAX = 15
};


// Enum TimeSynth.ETimeSynthEnvelopeFollowerPeakMode
enum class ETimeSynthEnvelopeFollowerPeakMode : uint8_t
{
	MeanSquared                    = 0,
	RootMeanSquared                = 1,
	Peak                           = 2,
	Count                          = 3,
	ETimeSynthEnvelopeFollowerPeakMode_MAX = 4
};


// Enum TimeSynth.ETimeSynthFilterType
enum class ETimeSynthFilterType : uint8_t
{
	LowPass                        = 0,
	HighPass                       = 1,
	BandPass                       = 2,
	BandStop                       = 3,
	Count                          = 4,
	ETimeSynthFilterType_MAX       = 5
};


// Enum TimeSynth.ETimeSynthFilter
enum class ETimeSynthFilter : uint8_t
{
	FilterA                        = 0,
	FilterB                        = 1,
	Count                          = 2,
	ETimeSynthFilter_MAX           = 3
};


// Enum TimeSynth.ETimeSynthEventClipQuantization
enum class ETimeSynthEventClipQuantization : uint8_t
{
	Global                         = 0,
	None                           = 1,
	Bars8                          = 2,
	Bars4                          = 3,
	Bars2                          = 4,
	Bar                            = 5,
	HalfNote                       = 6,
	HalfNoteTriplet                = 7,
	QuarterNote                    = 8,
	QuarterNoteTriplet             = 9,
	EighthNote                     = 10,
	EighthNoteTriplet              = 11,
	SixteenthNote                  = 12,
	SixteenthNoteTriplet           = 13,
	ThirtySecondNote               = 14,
	Count                          = 15,
	ETimeSynthEventClipQuantization_MAX = 16
};


// Enum TimeSynth.ETimeSynthFFTSize
enum class ETimeSynthFFTSize : uint8_t
{
	Min_64                         = 0,
	Small_256                      = 1,
	Medium_512                     = 2,
	Large_1024                     = 3,
	ETimeSynthFFTSize_MAX          = 4
};


// Enum TimeSynth.ETimeSynthBeatDivision
enum class ETimeSynthBeatDivision : uint8_t
{
	One                            = 0,
	Two                            = 1,
	Four                           = 2,
	Eight                          = 3,
	Sixteen                        = 4,
	Count                          = 5,
	ETimeSynthBeatDivision_MAX     = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TimeSynth.TimeSynthClipSound
// 0x0018
struct FTimeSynthClipSound
{
	class USoundWave*                                  SoundWave;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RandomWeight;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   DistanceRange;                                            // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct TimeSynth.TimeSynthTimeDef
// 0x0008
struct FTimeSynthTimeDef
{
	int                                                NumBars;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumBeats;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct TimeSynth.TimeSynthQuantizationSettings
// 0x0014
struct FTimeSynthQuantizationSettings
{
	float                                              BeatsPerMinute;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BeatsPerBar;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETimeSynthBeatDivision                             BeatDivision;                                             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              EventDelaySeconds;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETimeSynthEventQuantization                        GlobalQuantization;                                       // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct TimeSynth.TimeSynthFilterSettings
// 0x000C
struct FTimeSynthFilterSettings
{
	ETimeSynthFilterType                               FilterType;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              CutoffFrequency;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FilterQ;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct TimeSynth.TimeSynthEnvelopeFollowerSettings
// 0x000C
struct FTimeSynthEnvelopeFollowerSettings
{
	float                                              AttackTime;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReleaseTime;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETimeSynthEnvelopeFollowerPeakMode                 PeakMode;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAnalogMode;                                            // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct TimeSynth.TimeSynthClipHandle
// 0x000C
struct FTimeSynthClipHandle
{
	struct FName                                       ClipName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ClipId;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct TimeSynth.TimeSynthSpectralData
// 0x0008
struct FTimeSynthSpectralData
{
	float                                              FrequencyHz;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Magnitude;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
