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

// Class SidecarSys.SidecarDss
// 0x00A0 (0x00C8 - 0x0028)
class USidecarDss : public UObject
{
public:
	TMap<struct FString, struct FSidecarFileInfo>      FileInfoMap;                                              // 0x0028(0x0050) (ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FString                                     DssDownloadUrl;                                           // 0x0078(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     DssCheckoutUrl;                                           // 0x0088(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     DssUploadUrl;                                             // 0x0098(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     DssRestoreUrl;                                            // 0x00A8(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     DssCheckinUrl;                                            // 0x00B8(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SidecarSys.SidecarDss");
		return ptr;
	}

};


// Class SidecarSys.SidecarInventorySys
// 0x00B8 (0x00E0 - 0x0028)
class USidecarInventorySys : public UObject
{
public:
	struct FString                                     InventoryDownloadUrl;                                     // 0x0028(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     InventoryLockUrl;                                         // 0x0038(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     ItemUpdateUrl;                                            // 0x0048(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     ReleaseAllUrl;                                            // 0x0058(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0068(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SidecarSys.SidecarInventorySys");
		return ptr;
	}

};


// Class SidecarSys.SidecarSys
// 0x0020 (0x0048 - 0x0028)
class USidecarSys : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	class USidecarDss*                                 SidecarDss;                                               // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USidecarInventorySys*                        SidecarInventory;                                         // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SidecarSys.SidecarSys");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
