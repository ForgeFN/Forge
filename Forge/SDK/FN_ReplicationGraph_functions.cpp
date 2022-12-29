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

// Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AReplicationGraphDebugActor::ServerStopDebugging()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging");

	AReplicationGraphDebugActor_ServerStopDebugging_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AReplicationGraphDebugActor::ServerStartDebugging()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging");

	AReplicationGraphDebugActor_ServerStartDebugging_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PeriodFrame                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AReplicationGraphDebugActor::ServerSetPeriodFrameForClass(class UClass* Class, int PeriodFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass");

	AReplicationGraphDebugActor_ServerSetPeriodFrameForClass_Params params;
	params.Class = Class;
	params.PeriodFrame = PeriodFrame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          CullDistance                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AReplicationGraphDebugActor::ServerSetCullDistanceForClass(class UClass* Class, float CullDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass");

	AReplicationGraphDebugActor_ServerSetCullDistanceForClass_Params params;
	params.Class = Class;
	params.CullDistance = CullDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AReplicationGraphDebugActor::ServerSetConditionalActorBreakpoint(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint");

	AReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FString                 Str                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AReplicationGraphDebugActor::ServerPrintAllActorInfo(struct FString Str)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo");

	AReplicationGraphDebugActor_ServerPrintAllActorInfo_Params params;
	params.Str = Str;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AReplicationGraphDebugActor::ServerCellInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo");

	AReplicationGraphDebugActor_ServerCellInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// struct FVector                 CellLocation                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 CellExtent                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          Actors                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void AReplicationGraphDebugActor::ClientCellInfo(struct FVector CellLocation, struct FVector CellExtent, TArray<class AActor*> Actors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo");

	AReplicationGraphDebugActor_ClientCellInfo_Params params;
	params.CellLocation = CellLocation;
	params.CellExtent = CellExtent;
	params.Actors = Actors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
