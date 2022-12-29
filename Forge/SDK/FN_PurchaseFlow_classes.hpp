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

// Class PurchaseFlow.PurchaseFlowJSBridge
// 0x0010 (0x0038 - 0x0028)
class UPurchaseFlowJSBridge : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PurchaseFlow.PurchaseFlowJSBridge");
		return ptr;
	}


	void RequestClose(struct FString CloseInfo);
	void Receipt(struct FPurchaseFlowReceiptParam Receipt);
	bool LaunchValidatedExternalBrowserUrl(struct FString AllowedBrowserID, struct FString URL);
	bool LaunchExternalBrowserUrl(struct FString URL);
	struct FString GetExternalBrowserPath(struct FString BrowserId);
	struct FString GetExternalBrowserName(struct FString BrowserId);
	struct FString GetDefaultExternalBrowserID(struct FString URL);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
