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

// Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPaperFlipbook::IsValidKeyFrameIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex");

	UPaperFlipbook_IsValidKeyFrameIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetTotalDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPaperFlipbook::GetTotalDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetTotalDuration");

	UPaperFlipbook_GetTotalDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetSpriteAtTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bClampToEnds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPaperSprite*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPaperSprite* UPaperFlipbook::GetSpriteAtTime(float Time, bool bClampToEnds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetSpriteAtTime");

	UPaperFlipbook_GetSpriteAtTime_Params params;
	params.Time = Time;
	params.bClampToEnds = bClampToEnds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetSpriteAtFrame
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            FrameIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPaperSprite*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPaperSprite* UPaperFlipbook::GetSpriteAtFrame(int FrameIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetSpriteAtFrame");

	UPaperFlipbook_GetSpriteAtFrame_Params params;
	params.FrameIndex = FrameIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetNumKeyFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int UPaperFlipbook::GetNumKeyFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetNumKeyFrames");

	UPaperFlipbook_GetNumKeyFrames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetNumFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int UPaperFlipbook::GetNumFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetNumFrames");

	UPaperFlipbook_GetNumFrames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bClampToEnds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int UPaperFlipbook::GetKeyFrameIndexAtTime(float Time, bool bClampToEnds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime");

	UPaperFlipbook_GetKeyFrameIndexAtTime_Params params;
	params.Time = Time;
	params.bClampToEnds = bClampToEnds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.Stop
// (Final, Native, Public, BlueprintCallable)

void UPaperFlipbookComponent::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.Stop");

	UPaperFlipbookComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.SetSpriteColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            NewColor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperFlipbookComponent::SetSpriteColor(struct FLinearColor NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetSpriteColor");

	UPaperFlipbookComponent_SetSpriteColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.SetPlayRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewRate                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperFlipbookComponent::SetPlayRate(float NewRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetPlayRate");

	UPaperFlipbookComponent_SetPlayRate_Params params;
	params.NewRate = NewRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewFramePosition               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFireEvents                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperFlipbookComponent::SetPlaybackPositionInFrames(int NewFramePosition, bool bFireEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames");

	UPaperFlipbookComponent_SetPlaybackPositionInFrames_Params params;
	params.NewFramePosition = NewFramePosition;
	params.bFireEvents = bFireEvents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewPosition                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFireEvents                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperFlipbookComponent::SetPlaybackPosition(float NewPosition, bool bFireEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition");

	UPaperFlipbookComponent_SetPlaybackPosition_Params params;
	params.NewPosition = NewPosition;
	params.bFireEvents = bFireEvents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.SetNewTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewTime                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperFlipbookComponent::SetNewTime(float NewTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetNewTime");

	UPaperFlipbookComponent_SetNewTime_Params params;
	params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.SetLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewLooping                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperFlipbookComponent::SetLooping(bool bNewLooping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetLooping");

	UPaperFlipbookComponent_SetLooping_Params params;
	params.bNewLooping = bNewLooping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.SetFlipbook
// (Native, Public, BlueprintCallable)
// Parameters:
// class UPaperFlipbook*          NewFlipbook                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPaperFlipbookComponent::SetFlipbook(class UPaperFlipbook* NewFlipbook)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetFlipbook");

	UPaperFlipbookComponent_SetFlipbook_Params params;
	params.NewFlipbook = NewFlipbook;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.ReverseFromEnd
// (Final, Native, Public, BlueprintCallable)

void UPaperFlipbookComponent::ReverseFromEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.ReverseFromEnd");

	UPaperFlipbookComponent_ReverseFromEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.Reverse
// (Final, Native, Public, BlueprintCallable)

void UPaperFlipbookComponent::Reverse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.Reverse");

	UPaperFlipbookComponent_Reverse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.PlayFromStart
// (Final, Native, Public, BlueprintCallable)

void UPaperFlipbookComponent::PlayFromStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.PlayFromStart");

	UPaperFlipbookComponent_PlayFromStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.Play
// (Final, Native, Public, BlueprintCallable)

void UPaperFlipbookComponent::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.Play");

	UPaperFlipbookComponent_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook
// (Final, Native, Protected)
// Parameters:
// class UPaperFlipbook*          OldFlipbook                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperFlipbookComponent::OnRep_SourceFlipbook(class UPaperFlipbook* OldFlipbook)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook");

	UPaperFlipbookComponent_OnRep_SourceFlipbook_Params params;
	params.OldFlipbook = OldFlipbook;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.IsReversing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPaperFlipbookComponent::IsReversing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.IsReversing");

	UPaperFlipbookComponent_IsReversing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPaperFlipbookComponent::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.IsPlaying");

	UPaperFlipbookComponent_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.IsLooping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPaperFlipbookComponent::IsLooping()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.IsLooping");

	UPaperFlipbookComponent_IsLooping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetPlayRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPaperFlipbookComponent::GetPlayRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetPlayRate");

	UPaperFlipbookComponent_GetPlayRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int UPaperFlipbookComponent::GetPlaybackPositionInFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames");

	UPaperFlipbookComponent_GetPlaybackPositionInFrames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPaperFlipbookComponent::GetPlaybackPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition");

	UPaperFlipbookComponent_GetPlaybackPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int UPaperFlipbookComponent::GetFlipbookLengthInFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames");

	UPaperFlipbookComponent_GetFlipbookLengthInFrames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetFlipbookLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPaperFlipbookComponent::GetFlipbookLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbookLength");

	UPaperFlipbookComponent_GetFlipbookLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPaperFlipbookComponent::GetFlipbookFramerate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate");

	UPaperFlipbookComponent_GetFlipbookFramerate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetFlipbook
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPaperFlipbook*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPaperFlipbook* UPaperFlipbookComponent::GetFlipbook()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbook");

	UPaperFlipbookComponent_GetFlipbook_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              NewInstanceTransform           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bMarkRenderStateDirty          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPaperGroupedSpriteComponent::UpdateInstanceTransform(int InstanceIndex, struct FTransform NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform");

	UPaperGroupedSpriteComponent_UpdateInstanceTransform_Params params;
	params.InstanceIndex = InstanceIndex;
	params.NewInstanceTransform = NewInstanceTransform;
	params.bWorldSpace = bWorldSpace;
	params.bMarkRenderStateDirty = bMarkRenderStateDirty;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int                            InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            NewInstanceColor               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bMarkRenderStateDirty          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPaperGroupedSpriteComponent::UpdateInstanceColor(int InstanceIndex, struct FLinearColor NewInstanceColor, bool bMarkRenderStateDirty)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor");

	UPaperGroupedSpriteComponent_UpdateInstanceColor_Params params;
	params.InstanceIndex = InstanceIndex;
	params.NewInstanceColor = NewInstanceColor;
	params.bMarkRenderStateDirty = bMarkRenderStateDirty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 WorldSpaceSortAxis             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperGroupedSpriteComponent::SortInstancesAlongAxis(struct FVector WorldSpaceSortAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis");

	UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Params params;
	params.WorldSpaceSortAxis = WorldSpaceSortAxis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPaperGroupedSpriteComponent::RemoveInstance(int InstanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance");

	UPaperGroupedSpriteComponent_RemoveInstance_Params params;
	params.InstanceIndex = InstanceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              OutInstanceTransform           (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPaperGroupedSpriteComponent::GetInstanceTransform(int InstanceIndex, bool bWorldSpace, struct FTransform* OutInstanceTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform");

	UPaperGroupedSpriteComponent_GetInstanceTransform_Params params;
	params.InstanceIndex = InstanceIndex;
	params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInstanceTransform != nullptr)
		*OutInstanceTransform = params.OutInstanceTransform;

	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int UPaperGroupedSpriteComponent::GetInstanceCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount");

	UPaperGroupedSpriteComponent_GetInstanceCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.ClearInstances
// (Native, Public, BlueprintCallable)

void UPaperGroupedSpriteComponent::ClearInstances()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.ClearInstances");

	UPaperGroupedSpriteComponent_ClearInstances_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperGroupedSpriteComponent.AddInstance
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              Transform                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UPaperSprite*            Sprite                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int UPaperGroupedSpriteComponent::AddInstance(struct FTransform Transform, class UPaperSprite* Sprite, bool bWorldSpace, struct FLinearColor Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.AddInstance");

	UPaperGroupedSpriteComponent_AddInstance_Params params;
	params.Transform = Transform;
	params.Sprite = Sprite;
	params.bWorldSpace = bWorldSpace;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPaperSprite*            Sprite                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSlateBrush UPaperSpriteBlueprintLibrary::MakeBrushFromSprite(class UPaperSprite* Sprite, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite");

	UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Params params;
	params.Sprite = Sprite;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperSpriteComponent.SetSpriteColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            NewColor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperSpriteComponent::SetSpriteColor(struct FLinearColor NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteComponent.SetSpriteColor");

	UPaperSpriteComponent_SetSpriteColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperSpriteComponent.SetSprite
// (Native, Public, BlueprintCallable)
// Parameters:
// class UPaperSprite*            NewSprite                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPaperSpriteComponent::SetSprite(class UPaperSprite* NewSprite)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteComponent.SetSprite");

	UPaperSpriteComponent_SetSprite_Params params;
	params.NewSprite = NewSprite;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperSpriteComponent.GetSprite
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPaperSprite*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPaperSprite* UPaperSpriteComponent::GetSprite()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteComponent.GetSprite");

	UPaperSpriteComponent_GetSprite_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperTerrainComponent.SetTerrainColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            NewColor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperTerrainComponent::SetTerrainColor(struct FLinearColor NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTerrainComponent.SetTerrainColor");

	UPaperTerrainComponent_SetTerrainColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.SetTileMapColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            NewColor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperTileMapComponent::SetTileMapColor(struct FLinearColor NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetTileMapColor");

	UPaperTileMapComponent_SetTileMapColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.SetTileMap
// (Native, Public, BlueprintCallable)
// Parameters:
// class UPaperTileMap*           NewTileMap                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPaperTileMapComponent::SetTileMap(class UPaperTileMap* NewTileMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetTileMap");

	UPaperTileMapComponent_SetTileMap_Params params;
	params.NewTileMap = NewTileMap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.SetTile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            X                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Y                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Layer                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPaperTileInfo          NewValue                       (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UPaperTileMapComponent::SetTile(int X, int Y, int Layer, struct FPaperTileInfo NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetTile");

	UPaperTileMapComponent_SetTile_Params params;
	params.X = X;
	params.Y = Y;
	params.Layer = Layer;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.SetLayerColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            NewColor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Layer                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperTileMapComponent::SetLayerColor(struct FLinearColor NewColor, int Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetLayerColor");

	UPaperTileMapComponent_SetLayerColor_Params params;
	params.NewColor = NewColor;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.SetLayerCollision
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Layer                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHasCollision                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bOverrideThickness             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          CustomThickness                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bOverrideOffset                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          CustomOffset                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRebuildCollision              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperTileMapComponent::SetLayerCollision(int Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetLayerCollision");

	UPaperTileMapComponent_SetLayerCollision_Params params;
	params.Layer = Layer;
	params.bHasCollision = bHasCollision;
	params.bOverrideThickness = bOverrideThickness;
	params.CustomThickness = CustomThickness;
	params.bOverrideOffset = bOverrideOffset;
	params.CustomOffset = CustomOffset;
	params.bRebuildCollision = bRebuildCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRebuildCollision              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperTileMapComponent::SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness");

	UPaperTileMapComponent_SetDefaultCollisionThickness_Params params;
	params.Thickness = Thickness;
	params.bRebuildCollision = bRebuildCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.ResizeMap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewWidthInTiles                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NewHeightInTiles               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperTileMapComponent::ResizeMap(int NewWidthInTiles, int NewHeightInTiles)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.ResizeMap");

	UPaperTileMapComponent_ResizeMap_Params params;
	params.NewWidthInTiles = NewWidthInTiles;
	params.NewHeightInTiles = NewHeightInTiles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.RebuildCollision
// (Final, Native, Public, BlueprintCallable)

void UPaperTileMapComponent::RebuildCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.RebuildCollision");

	UPaperTileMapComponent_RebuildCollision_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.OwnsTileMap
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPaperTileMapComponent::OwnsTileMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.OwnsTileMap");

	UPaperTileMapComponent_OwnsTileMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.MakeTileMapEditable
// (Final, Native, Public, BlueprintCallable)

void UPaperTileMapComponent::MakeTileMapEditable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.MakeTileMapEditable");

	UPaperTileMapComponent_MakeTileMapEditable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.GetTilePolygon
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TileX                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TileY                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>         Points                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            LayerIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperTileMapComponent::GetTilePolygon(int TileX, int TileY, int LayerIndex, bool bWorldSpace, TArray<struct FVector>* Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTilePolygon");

	UPaperTileMapComponent_GetTilePolygon_Params params;
	params.TileX = TileX;
	params.TileY = TileY;
	params.LayerIndex = LayerIndex;
	params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Points != nullptr)
		*Points = params.Points;
}


// Function Paper2D.PaperTileMapComponent.GetTileMapColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UPaperTileMapComponent::GetTileMapColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTileMapColor");

	UPaperTileMapComponent_GetTileMapColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.GetTileCornerPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TileX                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TileY                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            LayerIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UPaperTileMapComponent::GetTileCornerPosition(int TileX, int TileY, int LayerIndex, bool bWorldSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTileCornerPosition");

	UPaperTileMapComponent_GetTileCornerPosition_Params params;
	params.TileX = TileX;
	params.TileY = TileY;
	params.LayerIndex = LayerIndex;
	params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.GetTileCenterPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TileX                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TileY                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            LayerIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UPaperTileMapComponent::GetTileCenterPosition(int TileX, int TileY, int LayerIndex, bool bWorldSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTileCenterPosition");

	UPaperTileMapComponent_GetTileCenterPosition_Params params;
	params.TileX = TileX;
	params.TileY = TileY;
	params.LayerIndex = LayerIndex;
	params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.GetTile
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            X                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Y                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Layer                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPaperTileInfo          ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FPaperTileInfo UPaperTileMapComponent::GetTile(int X, int Y, int Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTile");

	UPaperTileMapComponent_GetTile_Params params;
	params.X = X;
	params.Y = Y;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.GetMapSize
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            MapWidth                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MapHeight                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NumLayers                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperTileMapComponent::GetMapSize(int* MapWidth, int* MapHeight, int* NumLayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetMapSize");

	UPaperTileMapComponent_GetMapSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapWidth != nullptr)
		*MapWidth = params.MapWidth;
	if (MapHeight != nullptr)
		*MapHeight = params.MapHeight;
	if (NumLayers != nullptr)
		*NumLayers = params.NumLayers;
}


// Function Paper2D.PaperTileMapComponent.GetLayerColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Layer                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UPaperTileMapComponent::GetLayerColor(int Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetLayerColor");

	UPaperTileMapComponent_GetLayerColor_Params params;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.CreateNewTileMap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            MapWidth                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MapHeight                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TileWidth                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TileHeight                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PixelsPerUnrealUnit            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bCreateLayer                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPaperTileMapComponent::CreateNewTileMap(int MapWidth, int MapHeight, int TileWidth, int TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.CreateNewTileMap");

	UPaperTileMapComponent_CreateNewTileMap_Params params;
	params.MapWidth = MapWidth;
	params.MapHeight = MapHeight;
	params.TileWidth = TileWidth;
	params.TileHeight = TileHeight;
	params.PixelsPerUnrealUnit = PixelsPerUnrealUnit;
	params.bCreateLayer = bCreateLayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.AddNewLayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPaperTileLayer*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPaperTileLayer* UPaperTileMapComponent::AddNewLayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.AddNewLayer");

	UPaperTileMapComponent_AddNewLayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.TileMapBlueprintLibrary.MakeTile
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            TileIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPaperTileSet*           TileSet                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFlipH                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFlipV                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFlipD                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPaperTileInfo          ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FPaperTileInfo UTileMapBlueprintLibrary::MakeTile(int TileIndex, class UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.TileMapBlueprintLibrary.MakeTile");

	UTileMapBlueprintLibrary_MakeTile_Params params;
	params.TileIndex = TileIndex;
	params.TileSet = TileSet;
	params.bFlipH = bFlipH;
	params.bFlipV = bFlipV;
	params.bFlipD = bFlipD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.TileMapBlueprintLibrary.GetTileUserData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPaperTileInfo          Tile                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FName UTileMapBlueprintLibrary::GetTileUserData(struct FPaperTileInfo Tile)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.TileMapBlueprintLibrary.GetTileUserData");

	UTileMapBlueprintLibrary_GetTileUserData_Params params;
	params.Tile = Tile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.TileMapBlueprintLibrary.GetTileTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPaperTileInfo          Tile                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UTileMapBlueprintLibrary::GetTileTransform(struct FPaperTileInfo Tile)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.TileMapBlueprintLibrary.GetTileTransform");

	UTileMapBlueprintLibrary_GetTileTransform_Params params;
	params.Tile = Tile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.TileMapBlueprintLibrary.BreakTile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPaperTileInfo          Tile                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int                            TileIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPaperTileSet*           TileSet                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFlipH                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFlipV                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFlipD                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTileMapBlueprintLibrary::BreakTile(struct FPaperTileInfo Tile, int* TileIndex, class UPaperTileSet** TileSet, bool* bFlipH, bool* bFlipV, bool* bFlipD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.TileMapBlueprintLibrary.BreakTile");

	UTileMapBlueprintLibrary_BreakTile_Params params;
	params.Tile = Tile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TileIndex != nullptr)
		*TileIndex = params.TileIndex;
	if (TileSet != nullptr)
		*TileSet = params.TileSet;
	if (bFlipH != nullptr)
		*bFlipH = params.bFlipH;
	if (bFlipV != nullptr)
		*bFlipV = params.bFlipV;
	if (bFlipD != nullptr)
		*bFlipD = params.bFlipD;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
