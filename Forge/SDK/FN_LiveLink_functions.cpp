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

// Function LiveLink.LiveLinkBlueprintLibrary.TransformNames
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle     SubjectFrameHandle             (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FName>           TransformNames                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::TransformNames(struct FSubjectFrameHandle* SubjectFrameHandle, TArray<struct FName>* TransformNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.TransformNames");

	ULiveLinkBlueprintLibrary_TransformNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (TransformNames != nullptr)
		*TransformNames = params.TransformNames;
}


// Function LiveLink.LiveLinkBlueprintLibrary.TransformName
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform      LiveLinkTransform              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::TransformName(struct FLiveLinkTransform* LiveLinkTransform, struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.TransformName");

	ULiveLinkBlueprintLibrary_TransformName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
	if (Name != nullptr)
		*Name = params.Name;
}


// Function LiveLink.LiveLinkBlueprintLibrary.RequestShutdown
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle   SourceHandle                   (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULiveLinkBlueprintLibrary::RequestShutdown(struct FLiveLinkSourceHandle* SourceHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.RequestShutdown");

	ULiveLinkBlueprintLibrary_RequestShutdown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform
// (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform      LiveLinkTransform              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::ParentBoneSpaceTransform(struct FLiveLinkTransform* LiveLinkTransform, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform");

	ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle     SubjectFrameHandle             (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int ULiveLinkBlueprintLibrary::NumberOfTransforms(struct FSubjectFrameHandle* SubjectFrameHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms");

	ULiveLinkBlueprintLibrary_NumberOfTransforms_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle   SourceHandle                   (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULiveLinkBlueprintLibrary::IsSourceStillValid(struct FLiveLinkSourceHandle* SourceHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid");

	ULiveLinkBlueprintLibrary_IsSourceStillValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.HasParent
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform      LiveLinkTransform              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULiveLinkBlueprintLibrary::HasParent(struct FLiveLinkTransform* LiveLinkTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.HasParent");

	ULiveLinkBlueprintLibrary_HasParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByName
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle     SubjectFrameHandle             (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   TransformName                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLiveLinkTransform      LiveLinkTransform              (Parm, OutParm, NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::GetTransformByName(struct FName TransformName, struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByName");

	ULiveLinkBlueprintLibrary_GetTransformByName_Params params;
	params.TransformName = TransformName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle     SubjectFrameHandle             (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            TransformIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLiveLinkTransform      LiveLinkTransform              (Parm, OutParm, NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::GetTransformByIndex(int TransformIndex, struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex");

	ULiveLinkBlueprintLibrary_GetTransformByIndex_Params params;
	params.TransformIndex = TransformIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceType
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle   SourceHandle                   (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FText ULiveLinkBlueprintLibrary::GetSourceType(struct FLiveLinkSourceHandle* SourceHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetSourceType");

	ULiveLinkBlueprintLibrary_GetSourceType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle   SourceHandle                   (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FText ULiveLinkBlueprintLibrary::GetSourceStatus(struct FLiveLinkSourceHandle* SourceHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus");

	ULiveLinkBlueprintLibrary_GetSourceStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle   SourceHandle                   (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FText ULiveLinkBlueprintLibrary::GetSourceMachineName(struct FLiveLinkSourceHandle* SourceHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName");

	ULiveLinkBlueprintLibrary_GetSourceMachineName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetRootTransform
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle     SubjectFrameHandle             (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLiveLinkTransform      LiveLinkTransform              (Parm, OutParm, NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::GetRootTransform(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetRootTransform");

	ULiveLinkBlueprintLibrary_GetRootTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetParent
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform      LiveLinkTransform              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLiveLinkTransform      Parent                         (Parm, OutParm, NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::GetParent(struct FLiveLinkTransform* LiveLinkTransform, struct FLiveLinkTransform* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetParent");

	ULiveLinkBlueprintLibrary_GetParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
	if (Parent != nullptr)
		*Parent = params.Parent;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetMetadata
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle     SubjectFrameHandle             (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSubjectMetadata        MetaData                       (Parm, OutParm, NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::GetMetadata(struct FSubjectFrameHandle* SubjectFrameHandle, struct FSubjectMetadata* MetaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetMetadata");

	ULiveLinkBlueprintLibrary_GetMetadata_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (MetaData != nullptr)
		*MetaData = params.MetaData;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetCurves
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle     SubjectFrameHandle             (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TMap<struct FName, float>      Curves                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::GetCurves(struct FSubjectFrameHandle* SubjectFrameHandle, TMap<struct FName, float>* Curves)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetCurves");

	ULiveLinkBlueprintLibrary_GetCurves_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
	if (Curves != nullptr)
		*Curves = params.Curves;
}


// Function LiveLink.LiveLinkBlueprintLibrary.GetChildren
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform      LiveLinkTransform              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FLiveLinkTransform> Children                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::GetChildren(struct FLiveLinkTransform* LiveLinkTransform, TArray<struct FLiveLinkTransform>* Children)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetChildren");

	ULiveLinkBlueprintLibrary_GetChildren_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
	if (Children != nullptr)
		*Children = params.Children;
}


// Function LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform
// (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform      LiveLinkTransform              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::ComponentSpaceTransform(struct FLiveLinkTransform* LiveLinkTransform, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform");

	ULiveLinkBlueprintLibrary_ComponentSpaceTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;
	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function LiveLink.LiveLinkBlueprintLibrary.ChildCount
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform      LiveLinkTransform              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int ULiveLinkBlueprintLibrary::ChildCount(struct FLiveLinkTransform* LiveLinkTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.ChildCount");

	ULiveLinkBlueprintLibrary_ChildCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = params.LiveLinkTransform;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   SubjectName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          WorldTime                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSubjectFrameHandle     SubjectFrameHandle             (Parm, OutParm, NativeAccessSpecifierPublic)

void ULiveLinkComponent::GetSubjectDataAtWorldTime(struct FName SubjectName, float WorldTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime");

	ULiveLinkComponent_GetSubjectDataAtWorldTime_Params params;
	params.SubjectName = SubjectName;
	params.WorldTime = WorldTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
}


// Function LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   SubjectName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimecode               SceneTime                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSubjectFrameHandle     SubjectFrameHandle             (Parm, OutParm, NativeAccessSpecifierPublic)

void ULiveLinkComponent::GetSubjectDataAtSceneTime(struct FName SubjectName, struct FTimecode SceneTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime");

	ULiveLinkComponent_GetSubjectDataAtSceneTime_Params params;
	params.SubjectName = SubjectName;
	params.SceneTime = SceneTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
}


// Function LiveLink.LiveLinkComponent.GetSubjectData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   SubjectName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSubjectFrameHandle     SubjectFrameHandle             (Parm, OutParm, NativeAccessSpecifierPublic)

void ULiveLinkComponent::GetSubjectData(struct FName SubjectName, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkComponent.GetSubjectData");

	ULiveLinkComponent_GetSubjectData_Params params;
	params.SubjectName = SubjectName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = params.SubjectFrameHandle;
}


// Function LiveLink.LiveLinkComponent.GetAvailableSubjectNames
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FName>           SubjectNames                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void ULiveLinkComponent::GetAvailableSubjectNames(TArray<struct FName>* SubjectNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkComponent.GetAvailableSubjectNames");

	ULiveLinkComponent_GetAvailableSubjectNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubjectNames != nullptr)
		*SubjectNames = params.SubjectNames;
}


// Function LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FProviderPollResult> AvailableProviders             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void ULiveLinkMessageBusFinder::GetAvailableProviders(class UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, float Duration, TArray<struct FProviderPollResult>* AvailableProviders)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders");

	ULiveLinkMessageBusFinder_GetAvailableProviders_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AvailableProviders != nullptr)
		*AvailableProviders = params.AvailableProviders;
}


// Function LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULiveLinkMessageBusFinder* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULiveLinkMessageBusFinder* ULiveLinkMessageBusFinder::ConstructMessageBusFinder()
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder");

	ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkMessageBusFinder.ConnectToProvider
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FProviderPollResult     Provider                       (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLiveLinkSourceHandle   SourceHandle                   (Parm, OutParm, NativeAccessSpecifierPublic)

void ULiveLinkMessageBusFinder::ConnectToProvider(struct FProviderPollResult* Provider, struct FLiveLinkSourceHandle* SourceHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkMessageBusFinder.ConnectToProvider");

	ULiveLinkMessageBusFinder_ConnectToProvider_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Provider != nullptr)
		*Provider = params.Provider;
	if (SourceHandle != nullptr)
		*SourceHandle = params.SourceHandle;
}


// Function LiveLink.LiveLinkRemapAsset.RemapCurveElements
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// TMap<struct FName, float>      CurveItems                     (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ULiveLinkRemapAsset::RemapCurveElements(TMap<struct FName, float>* CurveItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkRemapAsset.RemapCurveElements");

	ULiveLinkRemapAsset_RemapCurveElements_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurveItems != nullptr)
		*CurveItems = params.CurveItems;
}


// Function LiveLink.LiveLinkRemapAsset.GetRemappedCurveName
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FName                   CurveName                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FName ULiveLinkRemapAsset::GetRemappedCurveName(struct FName CurveName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkRemapAsset.GetRemappedCurveName");

	ULiveLinkRemapAsset_GetRemappedCurveName_Params params;
	params.CurveName = CurveName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LiveLink.LiveLinkRemapAsset.GetRemappedBoneName
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FName ULiveLinkRemapAsset::GetRemappedBoneName(struct FName BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkRemapAsset.GetRemappedBoneName");

	ULiveLinkRemapAsset_GetRemappedBoneName_Params params;
	params.BoneName = BoneName;

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
