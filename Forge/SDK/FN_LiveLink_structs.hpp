#pragma once

// Fortnite (11.00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LiveLink.SubjectFrameHandle
// 0x0018
struct FSubjectFrameHandle
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct LiveLink.LiveLinkTransform
// 0x0020
struct FLiveLinkTransform
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct LiveLink.SubjectMetadata
// 0x0070
struct FSubjectMetadata
{
	TMap<struct FName, struct FString>                 StringMetadata;                                           // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTimecode                                   SceneTimecode;                                            // 0x0050(0x0014) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                                  SceneFramerate;                                           // 0x0064(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct LiveLink.ProviderPollResult
// 0x0030
struct FProviderPollResult
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MachineName;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLink.AnimNode_LiveLinkPose
// 0x0038 (0x0048 - 0x0010)
struct FAnimNode_LiveLinkPose : public FAnimNode_Base
{
	struct FPoseLink                                   InputPose;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       SubjectName;                                              // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      RetargetAsset;                                            // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULiveLinkRetargetAsset*                      CurrentRetargetAsset;                                     // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
};

// ScriptStruct LiveLink.CachedSubjectFrame
// 0x0140
struct FCachedSubjectFrame
{
	unsigned char                                      UnknownData00[0x140];                                     // 0x0000(0x0140) MISSED OFFSET
};

// ScriptStruct LiveLink.LiveLinkInstanceProxy
// 0x0050 (0x0720 - 0x06D0)
struct FLiveLinkInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x06D0(0x0050) MISSED OFFSET
};

// ScriptStruct LiveLink.LiveLinkRetargetAssetReference
// 0x0008
struct FLiveLinkRetargetAssetReference
{
	class ULiveLinkRetargetAsset*                      CurrentRetargetAsset;                                     // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct LiveLink.LiveLinkVirtualSubject
// 0x0060
struct FLiveLinkVirtualSubject
{
	TArray<struct FName>                               Subjects;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
	struct FGuid                                       Source;                                                   // 0x0020(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0030(0x0030) MISSED OFFSET
};

// ScriptStruct LiveLink.MovieSceneLiveLinkTemplateData
// 0x00D8
struct FMovieSceneLiveLinkTemplateData
{
	TArray<struct FMovieSceneFloatChannel>             FloatChannels;                                            // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLiveLinkFrameData                          TemplateToPush;                                           // 0x0010(0x0090) (NativeAccessSpecifierPublic)
	struct FLiveLinkRefSkeleton                        RefSkeleton;                                              // 0x00A0(0x0020) (NativeAccessSpecifierPublic)
	struct FName                                       SubjectName;                                              // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                       ChannelMask;                                              // 0x00C8(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct LiveLink.MovieSceneLiveLinkSectionTemplate
// 0x00D8 (0x0120 - 0x0048)
struct FMovieSceneLiveLinkSectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FMovieSceneLiveLinkTemplateData             TemplateData;                                             // 0x0048(0x00D8) (NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
