#pragma once

// Fortnite (11.00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct McpProfileSys.BaseUrlContext
// 0x0080
struct FBaseUrlContext
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct McpProfileSys.DedicatedServerUrlContext
// 0x0000 (0x0080 - 0x0080)
struct FDedicatedServerUrlContext : public FBaseUrlContext
{

};

// ScriptStruct McpProfileSys.ClientUrlContext
// 0x0000 (0x0080 - 0x0080)
struct FClientUrlContext : public FBaseUrlContext
{

};

// ScriptStruct McpProfileSys.ProfileEntry
// 0x0020
struct FProfileEntry
{
	struct FString                                     ProfileId;                                                // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMcpProfile*                                 ProfileObject;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWaitingForRefreshAllProfilesResponse;                    // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct McpProfileSys.ProfileGroupEntry
// 0x0020
struct FProfileGroupEntry
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	class UMcpProfileGroup*                            ProfileGroup;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct McpProfileSys.McpLootEntry
// 0x0058
struct FMcpLootEntry
{
	struct FString                                     ItemType;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemGuid;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                 // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FJsonObjectWrapper                          Attributes;                                               // 0x0028(0x0020) (Edit, NativeAccessSpecifierPublic)
	struct FString                                     ItemProfile;                                              // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct McpProfileSys.McpAddItemRequest
// 0x0048
struct FMcpAddItemRequest
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TemplateId;                                               // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FJsonObjectWrapper                          Attributes;                                               // 0x0028(0x0020) (NativeAccessSpecifierPublic)
};

// ScriptStruct McpProfileSys.McpRemoveItemRequest
// 0x0010
struct FMcpRemoveItemRequest
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct McpProfileSys.McpChangeQuantityRequest
// 0x0018
struct FMcpChangeQuantityRequest
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DeltaQuantity;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct McpProfileSys.McpChangeAttributesRequest
// 0x0030
struct FMcpChangeAttributesRequest
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          Attributes;                                               // 0x0010(0x0020) (NativeAccessSpecifierPublic)
};

// ScriptStruct McpProfileSys.McpProfileChangeRequest
// 0x0058
struct FMcpProfileChangeRequest
{
	int                                                BaseCommandRevision;                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FMcpAddItemRequest>                  AddRequests;                                              // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMcpRemoveItemRequest>               RemoveRequests;                                           // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMcpChangeQuantityRequest>           ChangeQuantityRequests;                                   // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMcpChangeAttributesRequest>         ChangeAttributesRequests;                                 // 0x0038(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>                  ChangeStatRequests;                                       // 0x0048(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct McpProfileSys.PublicUrlContext
// 0x0000 (0x0080 - 0x0080)
struct FPublicUrlContext : public FBaseUrlContext
{

};

// ScriptStruct McpProfileSys.ProfileUpdateNotification
// 0x0028
struct FProfileUpdateNotification
{
	TArray<struct FJsonObjectWrapper>                  Changes;                                                  // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDateTime                                   LockExpiration;                                           // 0x0010(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CommandRevision;                                          // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	int64_t                                            Revision;                                                 // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct McpProfileSys.ProfileUpdateSingle
// 0x0050
struct FProfileUpdateSingle
{
	int64_t                                            ProfileRevision;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ProfileId;                                                // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            ProfileChangesBaseRevision;                               // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>                  ProfileChanges;                                           // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDateTime                                   LockExpiration;                                           // 0x0030(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>                  Notifications;                                            // 0x0038(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                ProfileCommandRevision;                                   // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct McpProfileSys.ProfileUpdate
// 0x0020 (0x0070 - 0x0050)
struct FProfileUpdate : public FProfileUpdateSingle
{
	int                                                ResponseVersion;                                          // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FDateTime                                   ServerTime;                                               // 0x0058(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FProfileUpdateSingle>                MultiUpdate;                                              // 0x0060(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct McpProfileSys.AccountIdAndProfileResponse
// 0x0080
struct FAccountIdAndProfileResponse
{
	struct FString                                     AccountId;                                                // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FProfileUpdate                              Response;                                                 // 0x0010(0x0070) (NativeAccessSpecifierPublic)
};

// ScriptStruct McpProfileSys.GiftBoxInfo
// 0x0048
struct FGiftBoxInfo
{
	struct FDateTime                                   GiftedOn;                                                 // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FromAccountId;                                            // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMcpLootEntry>                       LootList;                                                 // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                          Params;                                                   // 0x0028(0x0020) (NativeAccessSpecifierPublic)
};

// ScriptStruct McpProfileSys.McpItemIdAndQuantity
// 0x0000 (0x0058 - 0x0058)
struct FMcpItemIdAndQuantity : public FMcpLootEntry
{

};

// ScriptStruct McpProfileSys.McpLootResult
// 0x0020
struct FMcpLootResult
{
	struct FString                                     TierGroupName;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMcpLootEntry>                       Items;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
