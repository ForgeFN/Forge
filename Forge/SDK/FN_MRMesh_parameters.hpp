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

// Function MRMesh.MeshReconstructorBase.StopReconstruction
struct UMeshReconstructorBase_StopReconstruction_Params
{
};

// Function MRMesh.MeshReconstructorBase.StartReconstruction
struct UMeshReconstructorBase_StartReconstruction_Params
{
};

// Function MRMesh.MeshReconstructorBase.PauseReconstruction
struct UMeshReconstructorBase_PauseReconstruction_Params
{
};

// Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
struct UMeshReconstructorBase_IsReconstructionStarted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
struct UMeshReconstructorBase_IsReconstructionPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MRMesh.MeshReconstructorBase.DisconnectMRMesh
struct UMeshReconstructorBase_DisconnectMRMesh_Params
{
};

// Function MRMesh.MeshReconstructorBase.ConnectMRMesh
struct UMeshReconstructorBase_ConnectMRMesh_Params
{
	class UMRMeshComponent*                            Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
struct UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             Vertices;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<int>                                        Triangles;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             Normals;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<float>                                      Confidence;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
struct UMockDataMeshTrackerComponent_DisconnectMRMesh_Params
{
	class UMRMeshComponent*                            InMRMeshPtr;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
struct UMockDataMeshTrackerComponent_ConnectMRMesh_Params
{
	class UMRMeshComponent*                            InMRMeshPtr;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MRMesh.MRMeshComponent.IsConnected
struct UMRMeshComponent_IsConnected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MRMesh.MRMeshComponent.ForceNavMeshUpdate
struct UMRMeshComponent_ForceNavMeshUpdate_Params
{
};

// Function MRMesh.MRMeshComponent.Clear
struct UMRMeshComponent_Clear_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
