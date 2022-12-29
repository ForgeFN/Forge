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

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSessionWithAttributes
struct UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Params
{
	TArray<struct FAnalyticsEventAttr>                 Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSession
struct UAnalyticsBlueprintLibrary_StartSession_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetUserId
struct UAnalyticsBlueprintLibrary_SetUserId_Params
{
	struct FString                                     UserId;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetSessionId
struct UAnalyticsBlueprintLibrary_SetSessionId_Params
{
	struct FString                                     SessionId;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetLocation
struct UAnalyticsBlueprintLibrary_SetLocation_Params
{
	struct FString                                     Location;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetGender
struct UAnalyticsBlueprintLibrary_SetGender_Params
{
	struct FString                                     Gender;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetBuildInfo
struct UAnalyticsBlueprintLibrary_SetBuildInfo_Params
{
	struct FString                                     BuildInfo;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetAge
struct UAnalyticsBlueprintLibrary_SetAge_Params
{
	int                                                Age;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchaseWithAttributes
struct UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Params
{
	struct FString                                     ItemId;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemQuantity;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAnalyticsEventAttr>                 Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchase
struct UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase_Params
{
	struct FString                                     ItemId;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemQuantity;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchaseWithAttributes
struct UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Params
{
	struct FString                                     GameCurrencyType;                                         // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameCurrencyAmount;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAnalyticsEventAttr>                 Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchase
struct UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase_Params
{
	struct FString                                     GameCurrencyType;                                         // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameCurrencyAmount;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithFullHierarchyAndAttributes
struct UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Params
{
	struct FString                                     ProgressType;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ProgressNames;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FAnalyticsEventAttr>                 Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithAttributes
struct UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Params
{
	struct FString                                     ProgressType;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ProgressName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAnalyticsEventAttr>                 Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgress
struct UAnalyticsBlueprintLibrary_RecordProgress_Params
{
	struct FString                                     ProgressType;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ProgressName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordItemPurchase
struct UAnalyticsBlueprintLibrary_RecordItemPurchase_Params
{
	struct FString                                     ItemId;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Currency;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PerItemCost;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemQuantity;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttributes
struct UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAnalyticsEventAttr>                 Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttribute
struct UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AttributeName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AttributeValue;                                           // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEvent
struct UAnalyticsBlueprintLibrary_RecordEvent_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordErrorWithAttributes
struct UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Params
{
	struct FString                                     Error;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAnalyticsEventAttr>                 Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordError
struct UAnalyticsBlueprintLibrary_RecordError_Params
{
	struct FString                                     Error;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyPurchase
struct UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Params
{
	struct FString                                     GameCurrencyType;                                         // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameCurrencyAmount;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RealCurrencyType;                                         // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RealMoneyCost;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PaymentProvider;                                          // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGivenWithAttributes
struct UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Params
{
	struct FString                                     GameCurrencyType;                                         // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameCurrencyAmount;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAnalyticsEventAttr>                 Attributes;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGiven
struct UAnalyticsBlueprintLibrary_RecordCurrencyGiven_Params
{
	struct FString                                     GameCurrencyType;                                         // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameCurrencyAmount;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.MakeEventAttribute
struct UAnalyticsBlueprintLibrary_MakeEventAttribute_Params
{
	struct FString                                     AttributeName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AttributeValue;                                           // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnalyticsEventAttr                         ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetUserId
struct UAnalyticsBlueprintLibrary_GetUserId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetSessionId
struct UAnalyticsBlueprintLibrary_GetSessionId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.FlushEvents
struct UAnalyticsBlueprintLibrary_FlushEvents_Params
{
};

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.EndSession
struct UAnalyticsBlueprintLibrary_EndSession_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
