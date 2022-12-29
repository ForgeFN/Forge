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

// Class Account.ExternalAccountProvider
// 0x0010 (0x0038 - 0x0028)
class UExternalAccountProvider : public UObject
{
public:
	TArray<struct FExternalAccountServiceConfig>       Services;                                                 // 0x0028(0x0010) (ZeroConstructor, Config, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Account.ExternalAccountProvider");
		return ptr;
	}

};


// Class Account.OnlineAccountCommon
// 0x0640 (0x0668 - 0x0028)
class UOnlineAccountCommon : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	struct FString                                     AvailabilityServiceGameName;                              // 0x0038(0x0010) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bRequireLightswitchAtStartup;                             // 0x0048(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FString                                     EulaKey;                                                  // 0x0050(0x0010) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FWebEnvUrl>                          WebCreateEpicAccountUrl;                                  // 0x0060(0x0010) (ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	bool                                               bAllowLocalLogout;                                        // 0x0070(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bAllowLocalLogoutKairos;                                  // 0x0071(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bUsePinGrantCodeForLinking;                               // 0x0072(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0073(0x0001) MISSED OFFSET
	float                                              SkipRedeemOfflinePurchasesChance;                         // 0x0074(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bShouldGrantFreeAccess;                                   // 0x0078(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0079(0x0001) MISSED OFFSET
	bool                                               bUseGameSubAccessRedemption;                              // 0x007A(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bAllowHomeSharingAccess;                                  // 0x007B(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bRequireUGCPrivilege;                                     // 0x007C(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x29B];                                     // 0x007D(0x029B) MISSED OFFSET
	float                                              AccessGrantDelaySeconds;                                  // 0x0318(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0x4];                                       // 0x031C(0x0004) MISSED OFFSET
	class UWaitingRoomState*                           WaitingRoomState;                                         // 0x0320(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData06[0x308];                                     // 0x0328(0x0308) MISSED OFFSET
	bool                                               bAutoCreateHeadlessAccount;                               // 0x0630(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData07[0x37];                                      // 0x0631(0x0037) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Account.OnlineAccountCommon");
		return ptr;
	}

};


// Class Account.WaitingRoomState
// 0x0060 (0x0088 - 0x0028)
class UWaitingRoomState : public UObject
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0028(0x0034) MISSED OFFSET
	int                                                GracePeriodMins;                                          // 0x005C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0060(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Account.WaitingRoomState");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
