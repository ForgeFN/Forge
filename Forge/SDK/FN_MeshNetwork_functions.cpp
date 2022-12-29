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

// Function MeshNetwork.MeshBeaconClient.ServerUpdateMultipleLevelsVisibility
// (Final, Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TArray<struct FUpdateLevelVisibilityLevelInfo> LevelVisibilities              (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void AMeshBeaconClient::ServerUpdateMultipleLevelsVisibility(TArray<struct FUpdateLevelVisibilityLevelInfo> LevelVisibilities)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshBeaconClient.ServerUpdateMultipleLevelsVisibility");

	AMeshBeaconClient_ServerUpdateMultipleLevelsVisibility_Params params;
	params.LevelVisibilities = LevelVisibilities;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshNetwork.MeshBeaconClient.ServerUpdateLevelVisibility
// (Final, Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FUpdateLevelVisibilityLevelInfo LevelVisibility                (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AMeshBeaconClient::ServerUpdateLevelVisibility(struct FUpdateLevelVisibilityLevelInfo LevelVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshBeaconClient.ServerUpdateLevelVisibility");

	AMeshBeaconClient_ServerUpdateLevelVisibility_Params params;
	params.LevelVisibility = LevelVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshNetwork.MeshBeaconClient.OnRep_ConnectedToRoot
// (Final, Native, Public)

void AMeshBeaconClient::OnRep_ConnectedToRoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshBeaconClient.OnRep_ConnectedToRoot");

	AMeshBeaconClient_OnRep_ConnectedToRoot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshNetwork.MeshNetworkComponent.GetMeshNetworkNodeType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EMeshNetworkNodeType           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EMeshNetworkNodeType UMeshNetworkComponent::GetMeshNetworkNodeType()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshNetworkComponent.GetMeshNetworkNodeType");

	UMeshNetworkComponent_GetMeshNetworkNodeType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshNetwork.MeshNetworkSubsystem.SetMetaDataWithKey
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMeshMetaDataStruct     MetaData                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UMeshNetworkSubsystem::SetMetaDataWithKey(struct FName Key, struct FMeshMetaDataStruct MetaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshNetworkSubsystem.SetMetaDataWithKey");

	UMeshNetworkSubsystem_SetMetaDataWithKey_Params params;
	params.Key = Key;
	params.MetaData = MetaData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshNetwork.MeshNetworkSubsystem.SetMetaData
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMeshMetaDataStruct     MetaData                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UMeshNetworkSubsystem::SetMetaData(struct FMeshMetaDataStruct MetaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshNetworkSubsystem.SetMetaData");

	UMeshNetworkSubsystem_SetMetaData_Params params;
	params.MetaData = MetaData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeshNetwork.MeshNetworkSubsystem.GetMetaDataWithKey
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMeshMetaDataStruct     MetaData                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMeshNetworkSubsystem::GetMetaDataWithKey(struct FName Key, struct FMeshMetaDataStruct* MetaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshNetworkSubsystem.GetMetaDataWithKey");

	UMeshNetworkSubsystem_GetMetaDataWithKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MetaData != nullptr)
		*MetaData = params.MetaData;

	return params.ReturnValue;
}


// Function MeshNetwork.MeshNetworkSubsystem.GetMetadata
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMeshMetaDataStruct     MetaData                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UMeshNetworkSubsystem::GetMetadata(struct FMeshMetaDataStruct* MetaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshNetworkSubsystem.GetMetadata");

	UMeshNetworkSubsystem_GetMetadata_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MetaData != nullptr)
		*MetaData = params.MetaData;
}


// Function MeshNetwork.MeshNetworkSubsystem.GetMeshNetworkNodeType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EMeshNetworkNodeType           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EMeshNetworkNodeType UMeshNetworkSubsystem::GetMeshNetworkNodeType()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshNetworkSubsystem.GetMeshNetworkNodeType");

	UMeshNetworkSubsystem_GetMeshNetworkNodeType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshNetwork.MeshNetworkSubsystem.GetGameServerNodeType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EMeshNetworkNodeType           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EMeshNetworkNodeType UMeshNetworkSubsystem::GetGameServerNodeType()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshNetworkSubsystem.GetGameServerNodeType");

	UMeshNetworkSubsystem_GetGameServerNodeType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MeshNetwork.MeshNetworkSubsystem.GetConnectedToRoot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMeshNetworkSubsystem::GetConnectedToRoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeshNetwork.MeshNetworkSubsystem.GetConnectedToRoot");

	UMeshNetworkSubsystem_GetConnectedToRoot_Params params;

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
