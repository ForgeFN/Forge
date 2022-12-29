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

// Enum LiveLinkInterface.ELiveLinkSourceMode
enum class ELiveLinkSourceMode : uint8_t
{
	Default                        = 0,
	Interpolated                   = 1,
	TimeSynchronized               = 2,
	ELiveLinkSourceMode_MAX        = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LiveLinkInterface.LiveLinkInterpolationSettings
// 0x0004
struct FLiveLinkInterpolationSettings
{
	float                                              InterpolationOffset;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeSynchronizationSettings
// 0x0008
struct FLiveLinkTimeSynchronizationSettings
{
	struct FFrameRate                                  FrameRate;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkCurveConversionSettings
// 0x0050
struct FLiveLinkCurveConversionSettings
{
	TMap<struct FString, struct FSoftObjectPath>       CurveConversionAssetMap;                                  // 0x0000(0x0050) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkRefSkeleton
// 0x0020
struct FLiveLinkRefSkeleton
{
	TArray<struct FName>                               BoneNames;                                                // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<int>                                        BoneParents;                                              // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
};

// ScriptStruct LiveLinkInterface.LiveLinkCurveElement
// 0x000C
struct FLiveLinkCurveElement
{
	struct FName                                       CurveName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CurveValue;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkWorldTime
// 0x0010
struct FLiveLinkWorldTime
{
	double                                             Time;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             Offset;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkMetaData
// 0x0060
struct FLiveLinkMetaData
{
	TMap<struct FName, struct FString>                 StringMetadata;                                           // 0x0000(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FQualifiedFrameTime                         SceneTime;                                                // 0x0050(0x0010) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkFrameData
// 0x0090
struct FLiveLinkFrameData
{
	TArray<struct FTransform>                          Transforms;                                               // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FLiveLinkCurveElement>               CurveElements;                                            // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLiveLinkWorldTime                          WorldTime;                                                // 0x0020(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	struct FLiveLinkMetaData                           MetaData;                                                 // 0x0030(0x0060) (NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkSourceHandle
// 0x0018
struct FLiveLinkSourceHandle
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct LiveLinkInterface.LiveLinkFrameRate
// 0x0000 (0x0008 - 0x0008)
struct FLiveLinkFrameRate : public FFrameRate
{

};

// ScriptStruct LiveLinkInterface.LiveLinkTimeCode_Base_DEPRECATED
// 0x0010
struct FLiveLinkTimeCode_Base_DEPRECATED
{
	int                                                Seconds;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Frames;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLiveLinkFrameRate                          FrameRate;                                                // 0x0008(0x0008) (NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeCode
// 0x0000 (0x0010 - 0x0010)
struct FLiveLinkTimeCode : public FLiveLinkTimeCode_Base_DEPRECATED
{

};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectName
// 0x0008
struct FLiveLinkSubjectName
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
