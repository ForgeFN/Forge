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

// Function LevelSequence.LevelSequence.RemoveMetaDataByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InClass                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelSequence::RemoveMetaDataByClass(class UClass* InClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.RemoveMetaDataByClass");

	ULevelSequence_RemoveMetaDataByClass_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InClass                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* ULevelSequence::FindOrAddMetaDataByClass(class UClass* InClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass");

	ULevelSequence_FindOrAddMetaDataByClass_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequence.FindMetaDataByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  InClass                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* ULevelSequence::FindMetaDataByClass(class UClass* InClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.FindMetaDataByClass");

	ULevelSequence_FindMetaDataByClass_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequence.CopyMetaData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 InMetaData                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* ULevelSequence::CopyMetaData(class UObject* InMetaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequence.CopyMetaData");

	ULevelSequence_CopyMetaData_Params params;
	params.InMetaData = InMetaData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSoftClassPath          InBurnInClass                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void ULevelSequenceBurnInOptions::SetBurnIn(struct FSoftClassPath InBurnInClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn");

	ULevelSequenceBurnInOptions_SetBurnIn_Params params;
	params.InBurnInClass = InBurnInClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.SetSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*          InSequence                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::SetSequence(class ULevelSequence* InSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetSequence");

	ALevelSequenceActor_SetSequence_Params params;
	params.InSequence = InSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.SetReplicatePlayback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReplicatePlayback              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::SetReplicatePlayback(bool ReplicatePlayback)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetReplicatePlayback");

	ALevelSequenceActor_SetReplicatePlayback_Params params;
	params.ReplicatePlayback = ReplicatePlayback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.SetEventReceivers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class AActor*>          AdditionalReceivers            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void ALevelSequenceActor::SetEventReceivers(TArray<class AActor*> AdditionalReceivers)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetEventReceivers");

	ALevelSequenceActor_SetEventReceivers_Params params;
	params.AdditionalReceivers = AdditionalReceivers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.SetBinding
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID Binding                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          Actors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bAllowBindingsFromAsset        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::SetBinding(struct FMovieSceneObjectBindingID Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetBinding");

	ALevelSequenceActor_SetBinding_Params params;
	params.Binding = Binding;
	params.Actors = Actors;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.ResetBindings
// (Final, Native, Public, BlueprintCallable)

void ALevelSequenceActor::ResetBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ResetBindings");

	ALevelSequenceActor_ResetBindings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.ResetBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID Binding                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::ResetBinding(struct FMovieSceneObjectBindingID Binding)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ResetBinding");

	ALevelSequenceActor_ResetBinding_Params params;
	params.Binding = Binding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.RemoveBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID Binding                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::RemoveBinding(struct FMovieSceneObjectBindingID Binding, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.RemoveBinding");

	ALevelSequenceActor_RemoveBinding_Params params;
	params.Binding = Binding;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature
// (Public, Delegate)

void ALevelSequenceActor::OnLevelSequenceLoaded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature");

	ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.LoadSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelSequence*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULevelSequence* ALevelSequenceActor::LoadSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.LoadSequence");

	ALevelSequenceActor_LoadSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceActor.GetSequencePlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelSequencePlayer*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULevelSequencePlayer* ALevelSequenceActor::GetSequencePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.GetSequencePlayer");

	ALevelSequenceActor_GetSequencePlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceActor.GetSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelSequence*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULevelSequence* ALevelSequenceActor::GetSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.GetSequence");

	ALevelSequenceActor_GetSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceActor.AddBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID Binding                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAllowBindingsFromAsset        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::AddBinding(struct FMovieSceneObjectBindingID Binding, class AActor* Actor, bool bAllowBindingsFromAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.AddBinding");

	ALevelSequenceActor_AddBinding_Params params;
	params.Binding = Binding;
	params.Actor = Actor;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceBurnIn.SetSettings
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                 InSettings                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelSequenceBurnIn::SetSettings(class UObject* InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnIn.SetSettings");

	ULevelSequenceBurnIn_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClass* ULevelSequenceBurnIn::GetSettingsClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass");

	ULevelSequenceBurnIn_GetSettingsClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceDirector.OnCreated
// (Event, Public, BlueprintEvent)

void ULevelSequenceDirector::OnCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceDirector.OnCreated");

	ULevelSequenceDirector_OnCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCameraComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCameraComponent* ULevelSequencePlayer::GetActiveCameraComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent");

	ULevelSequencePlayer_GetActiveCameraComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMovieSceneSequencePlaybackSettings Settings                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class ALevelSequenceActor*     OutActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelSequencePlayer*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULevelSequencePlayer* ULevelSequencePlayer::CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, struct FMovieSceneSequencePlaybackSettings Settings, class ALevelSequenceActor** OutActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer");

	ULevelSequencePlayer_CreateLevelSequencePlayer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LevelSequence = LevelSequence;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActor != nullptr)
		*OutActor = params.OutActor;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
