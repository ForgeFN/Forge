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

// Class AndroidPermission.AndroidPermissionCallbackProxy
// 0x0020 (0x0048 - 0x0028)
class UAndroidPermissionCallbackProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AndroidPermission.AndroidPermissionCallbackProxy.OnPermissionsGrantedDynamicDelegate
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AndroidPermission.AndroidPermissionCallbackProxy");
		return ptr;
	}

};


// Class AndroidPermission.AndroidPermissionFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAndroidPermissionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AndroidPermission.AndroidPermissionFunctionLibrary");
		return ptr;
	}


	static bool CheckPermission(struct FString Permission);
	static class UAndroidPermissionCallbackProxy* AcquirePermissions(TArray<struct FString> Permissions);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
