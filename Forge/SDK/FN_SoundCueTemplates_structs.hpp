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

// Enum SoundCueTemplates.ESoundContainerType
enum class ESoundContainerType : uint8_t
{
	Concatenate                    = 0,
	Randomize                      = 1,
	Mix                            = 2,
	ESoundContainerType_MAX        = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SoundCueTemplates.SoundCueCrossfadeInfo
// 0x0020
struct FSoundCueCrossfadeInfo
{
	struct FDistanceDatum                              DistanceInfo;                                             // 0x0000(0x0014) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class USoundWave*                                  Sound;                                                    // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct SoundCueTemplates.SoundCueTemplateQualitySettings
// 0x0028
struct FSoundCueTemplateQualitySettings
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (Edit, EditConst, NativeAccessSpecifierPublic)
	int                                                MaxConcatenatedVariations;                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxRandomizedVariations;                                  // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxMixVariations;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
