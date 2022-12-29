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

// Class AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAnalyticsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary");
		return ptr;
	}


	static bool StartSessionWithAttributes(TArray<struct FAnalyticsEventAttr> Attributes);
	static bool StartSession();
	static void SetUserId(struct FString UserId);
	static void SetSessionId(struct FString SessionId);
	static void SetLocation(struct FString Location);
	static void SetGender(struct FString Gender);
	static void SetBuildInfo(struct FString BuildInfo);
	static void SetAge(int Age);
	static void RecordSimpleItemPurchaseWithAttributes(struct FString ItemId, int ItemQuantity, TArray<struct FAnalyticsEventAttr> Attributes);
	static void RecordSimpleItemPurchase(struct FString ItemId, int ItemQuantity);
	static void RecordSimpleCurrencyPurchaseWithAttributes(struct FString GameCurrencyType, int GameCurrencyAmount, TArray<struct FAnalyticsEventAttr> Attributes);
	static void RecordSimpleCurrencyPurchase(struct FString GameCurrencyType, int GameCurrencyAmount);
	static void RecordProgressWithFullHierarchyAndAttributes(struct FString ProgressType, TArray<struct FString> ProgressNames, TArray<struct FAnalyticsEventAttr> Attributes);
	static void RecordProgressWithAttributes(struct FString ProgressType, struct FString ProgressName, TArray<struct FAnalyticsEventAttr> Attributes);
	static void RecordProgress(struct FString ProgressType, struct FString ProgressName);
	static void RecordItemPurchase(struct FString ItemId, struct FString Currency, int PerItemCost, int ItemQuantity);
	static void RecordEventWithAttributes(struct FString EventName, TArray<struct FAnalyticsEventAttr> Attributes);
	static void RecordEventWithAttribute(struct FString EventName, struct FString AttributeName, struct FString AttributeValue);
	static void RecordEvent(struct FString EventName);
	static void RecordErrorWithAttributes(struct FString Error, TArray<struct FAnalyticsEventAttr> Attributes);
	static void RecordError(struct FString Error);
	static void RecordCurrencyPurchase(struct FString GameCurrencyType, int GameCurrencyAmount, struct FString RealCurrencyType, float RealMoneyCost, struct FString PaymentProvider);
	static void RecordCurrencyGivenWithAttributes(struct FString GameCurrencyType, int GameCurrencyAmount, TArray<struct FAnalyticsEventAttr> Attributes);
	static void RecordCurrencyGiven(struct FString GameCurrencyType, int GameCurrencyAmount);
	static struct FAnalyticsEventAttr MakeEventAttribute(struct FString AttributeName, struct FString AttributeValue);
	static struct FString GetUserId();
	static struct FString GetSessionId();
	static void FlushEvents();
	static void EndSession();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
