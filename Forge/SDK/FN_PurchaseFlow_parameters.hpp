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

// Function PurchaseFlow.PurchaseFlowJSBridge.RequestClose
struct UPurchaseFlowJSBridge_RequestClose_Params
{
	struct FString                                     CloseInfo;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PurchaseFlow.PurchaseFlowJSBridge.Receipt
struct UPurchaseFlowJSBridge_Receipt_Params
{
	struct FPurchaseFlowReceiptParam                   Receipt;                                                  // (Parm, NativeAccessSpecifierPublic)
};

// Function PurchaseFlow.PurchaseFlowJSBridge.LaunchValidatedExternalBrowserUrl
struct UPurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl_Params
{
	struct FString                                     AllowedBrowserID;                                         // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PurchaseFlow.PurchaseFlowJSBridge.LaunchExternalBrowserUrl
struct UPurchaseFlowJSBridge_LaunchExternalBrowserUrl_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PurchaseFlow.PurchaseFlowJSBridge.GetExternalBrowserPath
struct UPurchaseFlowJSBridge_GetExternalBrowserPath_Params
{
	struct FString                                     BrowserId;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PurchaseFlow.PurchaseFlowJSBridge.GetExternalBrowserName
struct UPurchaseFlowJSBridge_GetExternalBrowserName_Params
{
	struct FString                                     BrowserId;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function PurchaseFlow.PurchaseFlowJSBridge.GetDefaultExternalBrowserID
struct UPurchaseFlowJSBridge_GetDefaultExternalBrowserID_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
