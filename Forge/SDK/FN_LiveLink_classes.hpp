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

// Class LiveLink.LiveLinkRetargetAsset
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkRetargetAsset : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkRetargetAsset");
		return ptr;
	}

};


// Class LiveLink.LiveLinkBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkBlueprintLibrary");
		return ptr;
	}


	static void TransformNames(struct FSubjectFrameHandle* SubjectFrameHandle, TArray<struct FName>* TransformNames);
	static void TransformName(struct FLiveLinkTransform* LiveLinkTransform, struct FName* Name);
	static bool RequestShutdown(struct FLiveLinkSourceHandle* SourceHandle);
	static void ParentBoneSpaceTransform(struct FLiveLinkTransform* LiveLinkTransform, struct FTransform* Transform);
	static int NumberOfTransforms(struct FSubjectFrameHandle* SubjectFrameHandle);
	static bool IsSourceStillValid(struct FLiveLinkSourceHandle* SourceHandle);
	static bool HasParent(struct FLiveLinkTransform* LiveLinkTransform);
	static void GetTransformByName(struct FName TransformName, struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform);
	static void GetTransformByIndex(int TransformIndex, struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform);
	static struct FText GetSourceType(struct FLiveLinkSourceHandle* SourceHandle);
	static struct FText GetSourceStatus(struct FLiveLinkSourceHandle* SourceHandle);
	static struct FText GetSourceMachineName(struct FLiveLinkSourceHandle* SourceHandle);
	static void GetRootTransform(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform);
	static void GetParent(struct FLiveLinkTransform* LiveLinkTransform, struct FLiveLinkTransform* Parent);
	static void GetMetadata(struct FSubjectFrameHandle* SubjectFrameHandle, struct FSubjectMetadata* MetaData);
	static void GetCurves(struct FSubjectFrameHandle* SubjectFrameHandle, TMap<struct FName, float>* Curves);
	static void GetChildren(struct FLiveLinkTransform* LiveLinkTransform, TArray<struct FLiveLinkTransform>* Children);
	static void ComponentSpaceTransform(struct FLiveLinkTransform* LiveLinkTransform, struct FTransform* Transform);
	static int ChildCount(struct FLiveLinkTransform* LiveLinkTransform);
};


// Class LiveLink.LiveLinkComponent
// 0x0020 (0x00D0 - 0x00B0)
class ULiveLinkComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty LiveLink.LiveLinkComponent.OnLiveLinkUpdated
	unsigned char                                      UnknownData01[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkComponent");
		return ptr;
	}


	void GetSubjectDataAtWorldTime(struct FName SubjectName, float WorldTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
	void GetSubjectDataAtSceneTime(struct FName SubjectName, struct FTimecode SceneTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
	void GetSubjectData(struct FName SubjectName, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
	void GetAvailableSubjectNames(TArray<struct FName>* SubjectNames);
};


// Class LiveLink.LiveLinkDrivenComponent
// 0x0020 (0x00D0 - 0x00B0)
class ULiveLinkDrivenComponent : public UActorComponent
{
public:
	struct FLiveLinkSubjectName                        SubjectName;                                              // 0x00B0(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       ActorTransformBone;                                       // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bModifyActorTransform;                                    // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSetRelativeLocation;                                     // 0x00C1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xE];                                       // 0x00C2(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkDrivenComponent");
		return ptr;
	}

};


// Class LiveLink.LiveLinkInstance
// 0x0000 (0x0270 - 0x0270)
class ULiveLinkInstance : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkInstance");
		return ptr;
	}

};


// Class LiveLink.LiveLinkMessageBusFinder
// 0x0058 (0x0080 - 0x0028)
class ULiveLinkMessageBusFinder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkMessageBusFinder");
		return ptr;
	}


	void GetAvailableProviders(class UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, float Duration, TArray<struct FProviderPollResult>* AvailableProviders);
	static class ULiveLinkMessageBusFinder* ConstructMessageBusFinder();
	static void ConnectToProvider(struct FProviderPollResult* Provider, struct FLiveLinkSourceHandle* SourceHandle);
};


// Class LiveLink.LiveLinkRemapAsset
// 0x00A8 (0x00D0 - 0x0028)
class ULiveLinkRemapAsset : public ULiveLinkRetargetAsset
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0028(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkRemapAsset");
		return ptr;
	}


	void RemapCurveElements(TMap<struct FName, float>* CurveItems);
	struct FName GetRemappedCurveName(struct FName CurveName);
	struct FName GetRemappedBoneName(struct FName BoneName);
};


// Class LiveLink.LiveLinkTimeSynchronizationSource
// 0x0060 (0x0090 - 0x0030)
class ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource
{
public:
	struct FName                                       SubjectName;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkTimeSynchronizationSource");
		return ptr;
	}

};


// Class LiveLink.MovieSceneLiveLinkSection
// 0x00E8 (0x01C8 - 0x00E0)
class UMovieSceneLiveLinkSection : public UMovieSceneSection
{
public:
	struct FName                                       SubjectName;                                              // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLiveLinkFrameData                          TemplateToPush;                                           // 0x00E8(0x0090) (NativeAccessSpecifierPublic)
	struct FLiveLinkRefSkeleton                        RefSkeleton;                                              // 0x0178(0x0020) (NativeAccessSpecifierPublic)
	TArray<struct FName>                               CurveNames;                                               // 0x0198(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneFloatChannel>             PropertyFloatChannels;                                    // 0x01A8(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<bool>                                       ChannelMask;                                              // 0x01B8(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.MovieSceneLiveLinkSection");
		return ptr;
	}

};


// Class LiveLink.MovieSceneLiveLinkTrack
// 0x0000 (0x0088 - 0x0088)
class UMovieSceneLiveLinkTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.MovieSceneLiveLinkTrack");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
