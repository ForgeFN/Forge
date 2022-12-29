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

// Function MeshNetwork.MeshBeaconClient.ServerUpdateMultipleLevelsVisibility
struct AMeshBeaconClient_ServerUpdateMultipleLevelsVisibility_Params
{
	TArray<struct FUpdateLevelVisibilityLevelInfo>     LevelVisibilities;                                        // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function MeshNetwork.MeshBeaconClient.ServerUpdateLevelVisibility
struct AMeshBeaconClient_ServerUpdateLevelVisibility_Params
{
	struct FUpdateLevelVisibilityLevelInfo             LevelVisibility;                                          // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MeshNetwork.MeshBeaconClient.OnRep_ConnectedToRoot
struct AMeshBeaconClient_OnRep_ConnectedToRoot_Params
{
};

// Function MeshNetwork.MeshNetworkComponent.GetMeshNetworkNodeType
struct UMeshNetworkComponent_GetMeshNetworkNodeType_Params
{
	EMeshNetworkNodeType                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshNetwork.MeshNetworkSubsystem.SetMetaDataWithKey
struct UMeshNetworkSubsystem_SetMetaDataWithKey_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMeshMetaDataStruct                         MetaData;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MeshNetwork.MeshNetworkSubsystem.SetMetaData
struct UMeshNetworkSubsystem_SetMetaData_Params
{
	struct FMeshMetaDataStruct                         MetaData;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MeshNetwork.MeshNetworkSubsystem.GetMetaDataWithKey
struct UMeshNetworkSubsystem_GetMetaDataWithKey_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMeshMetaDataStruct                         MetaData;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshNetwork.MeshNetworkSubsystem.GetMetadata
struct UMeshNetworkSubsystem_GetMetadata_Params
{
	struct FMeshMetaDataStruct                         MetaData;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MeshNetwork.MeshNetworkSubsystem.GetMeshNetworkNodeType
struct UMeshNetworkSubsystem_GetMeshNetworkNodeType_Params
{
	EMeshNetworkNodeType                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshNetwork.MeshNetworkSubsystem.GetGameServerNodeType
struct UMeshNetworkSubsystem_GetGameServerNodeType_Params
{
	EMeshNetworkNodeType                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshNetwork.MeshNetworkSubsystem.GetConnectedToRoot
struct UMeshNetworkSubsystem_GetConnectedToRoot_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
