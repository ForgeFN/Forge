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

// Function LiveLink.LiveLinkBlueprintLibrary.TransformNames
struct ULiveLinkBlueprintLibrary_TransformNames_Params
{
	struct FSubjectFrameHandle                         SubjectFrameHandle;                                       // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FName>                               TransformNames;                                           // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkBlueprintLibrary.TransformName
struct ULiveLinkBlueprintLibrary_TransformName_Params
{
	struct FLiveLinkTransform                          LiveLinkTransform;                                        // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FName                                       Name;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkBlueprintLibrary.RequestShutdown
struct ULiveLinkBlueprintLibrary_RequestShutdown_Params
{
	struct FLiveLinkSourceHandle                       SourceHandle;                                             // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform
struct ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform_Params
{
	struct FLiveLinkTransform                          LiveLinkTransform;                                        // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                // (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms
struct ULiveLinkBlueprintLibrary_NumberOfTransforms_Params
{
	struct FSubjectFrameHandle                         SubjectFrameHandle;                                       // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid
struct ULiveLinkBlueprintLibrary_IsSourceStillValid_Params
{
	struct FLiveLinkSourceHandle                       SourceHandle;                                             // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkBlueprintLibrary.HasParent
struct ULiveLinkBlueprintLibrary_HasParent_Params
{
	struct FLiveLinkTransform                          LiveLinkTransform;                                        // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByName
struct ULiveLinkBlueprintLibrary_GetTransformByName_Params
{
	struct FSubjectFrameHandle                         SubjectFrameHandle;                                       // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FName                                       TransformName;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLiveLinkTransform                          LiveLinkTransform;                                        // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex
struct ULiveLinkBlueprintLibrary_GetTransformByIndex_Params
{
	struct FSubjectFrameHandle                         SubjectFrameHandle;                                       // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                TransformIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLiveLinkTransform                          LiveLinkTransform;                                        // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceType
struct ULiveLinkBlueprintLibrary_GetSourceType_Params
{
	struct FLiveLinkSourceHandle                       SourceHandle;                                             // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus
struct ULiveLinkBlueprintLibrary_GetSourceStatus_Params
{
	struct FLiveLinkSourceHandle                       SourceHandle;                                             // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName
struct ULiveLinkBlueprintLibrary_GetSourceMachineName_Params
{
	struct FLiveLinkSourceHandle                       SourceHandle;                                             // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetRootTransform
struct ULiveLinkBlueprintLibrary_GetRootTransform_Params
{
	struct FSubjectFrameHandle                         SubjectFrameHandle;                                       // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLiveLinkTransform                          LiveLinkTransform;                                        // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetParent
struct ULiveLinkBlueprintLibrary_GetParent_Params
{
	struct FLiveLinkTransform                          LiveLinkTransform;                                        // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLiveLinkTransform                          Parent;                                                   // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetMetadata
struct ULiveLinkBlueprintLibrary_GetMetadata_Params
{
	struct FSubjectFrameHandle                         SubjectFrameHandle;                                       // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSubjectMetadata                            MetaData;                                                 // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetCurves
struct ULiveLinkBlueprintLibrary_GetCurves_Params
{
	struct FSubjectFrameHandle                         SubjectFrameHandle;                                       // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TMap<struct FName, float>                          Curves;                                                   // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkBlueprintLibrary.GetChildren
struct ULiveLinkBlueprintLibrary_GetChildren_Params
{
	struct FLiveLinkTransform                          LiveLinkTransform;                                        // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FLiveLinkTransform>                  Children;                                                 // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform
struct ULiveLinkBlueprintLibrary_ComponentSpaceTransform_Params
{
	struct FLiveLinkTransform                          LiveLinkTransform;                                        // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                // (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkBlueprintLibrary.ChildCount
struct ULiveLinkBlueprintLibrary_ChildCount_Params
{
	struct FLiveLinkTransform                          LiveLinkTransform;                                        // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime
struct ULiveLinkComponent_GetSubjectDataAtWorldTime_Params
{
	struct FName                                       SubjectName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WorldTime;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSubjectFrameHandle                         SubjectFrameHandle;                                       // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime
struct ULiveLinkComponent_GetSubjectDataAtSceneTime_Params
{
	struct FName                                       SubjectName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimecode                                   SceneTime;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSubjectFrameHandle                         SubjectFrameHandle;                                       // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkComponent.GetSubjectData
struct ULiveLinkComponent_GetSubjectData_Params
{
	struct FName                                       SubjectName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSubjectFrameHandle                         SubjectFrameHandle;                                       // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkComponent.GetAvailableSubjectNames
struct ULiveLinkComponent_GetAvailableSubjectNames_Params
{
	TArray<struct FName>                               SubjectNames;                                             // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders
struct ULiveLinkMessageBusFinder_GetAvailableProviders_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FProviderPollResult>                 AvailableProviders;                                       // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder
struct ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Params
{
	class ULiveLinkMessageBusFinder*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkMessageBusFinder.ConnectToProvider
struct ULiveLinkMessageBusFinder_ConnectToProvider_Params
{
	struct FProviderPollResult                         Provider;                                                 // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLiveLinkSourceHandle                       SourceHandle;                                             // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkRemapAsset.RemapCurveElements
struct ULiveLinkRemapAsset_RemapCurveElements_Params
{
	TMap<struct FName, float>                          CurveItems;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkRemapAsset.GetRemappedCurveName
struct ULiveLinkRemapAsset_GetRemappedCurveName_Params
{
	struct FName                                       CurveName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LiveLink.LiveLinkRemapAsset.GetRemappedBoneName
struct ULiveLinkRemapAsset_GetRemappedBoneName_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
