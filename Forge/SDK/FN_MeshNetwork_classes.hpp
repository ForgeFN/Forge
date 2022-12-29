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

// Class MeshNetwork.MeshBeaconClient
// 0x0038 (0x02D0 - 0x0298)
class AMeshBeaconClient : public AOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0298(0x0020) MISSED OFFSET
	bool                                               bConnectedToRoot;                                         // 0x02B8(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x17];                                      // 0x02B9(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshNetwork.MeshBeaconClient");
		return ptr;
	}


	void ServerUpdateMultipleLevelsVisibility(TArray<struct FUpdateLevelVisibilityLevelInfo> LevelVisibilities);
	void ServerUpdateLevelVisibility(struct FUpdateLevelVisibilityLevelInfo LevelVisibility);
	void OnRep_ConnectedToRoot();
};


// Class MeshNetwork.MeshBeaconHost
// 0x0008 (0x0308 - 0x0300)
class AMeshBeaconHost : public AOnlineBeaconHost
{
public:
	int                                                MaxConnections;                                           // 0x0300(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0304(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshNetwork.MeshBeaconHost");
		return ptr;
	}

};


// Class MeshNetwork.MeshBeaconHostObject
// 0x0008 (0x0248 - 0x0240)
class AMeshBeaconHostObject : public AOnlineBeaconHostObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0240(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshNetwork.MeshBeaconHostObject");
		return ptr;
	}

};


// Class MeshNetwork.MeshConnection
// 0x0000 (0x1A28 - 0x1A28)
class UMeshConnection : public UIpConnection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshNetwork.MeshConnection");
		return ptr;
	}

};


// Class MeshNetwork.MeshNetDriver
// 0x0000 (0x0788 - 0x0788)
class UMeshNetDriver : public UIpNetDriver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshNetwork.MeshNetDriver");
		return ptr;
	}

};


// Class MeshNetwork.MeshNetworkComponent
// 0x00A8 (0x0158 - 0x00B0)
class UMeshNetworkComponent : public UActorComponent
{
public:
	EMeshNetworkRelevancy                              MeshRelevancy;                                            // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	TMap<struct FName, double>                         AggregationTimeouts;                                      // 0x00B8(0x0050) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FName, struct FAggregatedFunction>     AggregatedFunctions;                                      // 0x0108(0x0050) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshNetwork.MeshNetworkComponent");
		return ptr;
	}


	EMeshNetworkNodeType GetMeshNetworkNodeType();
};


// Class MeshNetwork.MeshNetworkSubsystem
// 0x00C8 (0x00F8 - 0x0030)
class UMeshNetworkSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MeshNetwork.MeshNetworkSubsystem.OnMeshNodeTypeChanged
	unsigned char                                      UnknownData01[0x10];                                      // 0x0040(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MeshNetwork.MeshNetworkSubsystem.OnConnectedToRootChanged
	unsigned char                                      UnknownData02[0x10];                                      // 0x0050(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MeshNetwork.MeshNetworkSubsystem.OnGameServerNodeTypeChanged
	unsigned char                                      UnknownData03[0x10];                                      // 0x0060(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MeshNetwork.MeshNetworkSubsystem.OnMeshMetaDataUpdated
	unsigned char                                      UnknownData04[0x30];                                      // 0x0070(0x0030) MISSED OFFSET
	EMeshNetworkNodeType                               NodeType;                                                 // 0x00A0(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EMeshNetworkNodeType                               GameServerNodeType;                                       // 0x00A1(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bConnectedToRoot;                                         // 0x00A2(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bMetadataReceived;                                        // 0x00A3(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0x54];                                      // 0x00A4(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshNetwork.MeshNetworkSubsystem");
		return ptr;
	}


	void SetMetaDataWithKey(struct FName Key, struct FMeshMetaDataStruct MetaData);
	void SetMetaData(struct FMeshMetaDataStruct MetaData);
	bool GetMetaDataWithKey(struct FName Key, struct FMeshMetaDataStruct* MetaData);
	void GetMetadata(struct FMeshMetaDataStruct* MetaData);
	EMeshNetworkNodeType GetMeshNetworkNodeType();
	EMeshNetworkNodeType GetGameServerNodeType();
	bool GetConnectedToRoot();
};


// Class MeshNetwork.MeshReplicationGraphNode_AlwaysRelevant_ForConnection
// 0x0028 (0x0120 - 0x00F8)
class UMeshReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00F8(0x0018) MISSED OFFSET
	TArray<struct FAlwaysRelevantActorInfo>            PastRelevantActors;                                       // 0x0110(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshNetwork.MeshReplicationGraphNode_AlwaysRelevant_ForConnection");
		return ptr;
	}

};


// Class MeshNetwork.MeshReplicationGraph
// 0x0000 (0x04A0 - 0x04A0)
class UMeshReplicationGraph : public UReplicationGraph
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshNetwork.MeshReplicationGraph");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
