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

// ScriptStruct SidecarSys.SidecarFileInfo
// 0x0068
struct FSidecarFileInfo
{
	TMap<struct FString, struct FString>               Meta;                                                     // 0x0000(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bIsCheckedOut;                                            // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOperationPending;                                        // 0x0051(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
	struct FString                                     CheckoutGuid;                                             // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct SidecarSys.InventoryFlushPayload
// 0x0010
struct FInventoryFlushPayload
{
	TArray<struct FString>                             InventoryNames;                                           // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
