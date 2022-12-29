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

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging
struct AReplicationGraphDebugActor_ServerStopDebugging_Params
{
};

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging
struct AReplicationGraphDebugActor_ServerStartDebugging_Params
{
};

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass
struct AReplicationGraphDebugActor_ServerSetPeriodFrameForClass_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PeriodFrame;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
struct AReplicationGraphDebugActor_ServerSetCullDistanceForClass_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CullDistance;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint
struct AReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
struct AReplicationGraphDebugActor_ServerPrintAllActorInfo_Params
{
	struct FString                                     Str;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo
struct AReplicationGraphDebugActor_ServerCellInfo_Params
{
};

// Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
struct AReplicationGraphDebugActor_ClientCellInfo_Params
{
	struct FVector                                     CellLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CellExtent;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              Actors;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
