// Fortnite (11.00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSessionWithAttributes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FAnalyticsEventAttr> Attributes                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAnalyticsBlueprintLibrary::StartSessionWithAttributes(TArray<struct FAnalyticsEventAttr> Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSessionWithAttributes");

	UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Params params;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAnalyticsBlueprintLibrary::StartSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSession");

	UAnalyticsBlueprintLibrary_StartSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetUserId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 UserId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::SetUserId(struct FString UserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetUserId");

	UAnalyticsBlueprintLibrary_SetUserId_Params params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetSessionId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 SessionId                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::SetSessionId(struct FString SessionId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetSessionId");

	UAnalyticsBlueprintLibrary_SetSessionId_Params params;
	params.SessionId = SessionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetLocation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Location                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::SetLocation(struct FString Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetLocation");

	UAnalyticsBlueprintLibrary_SetLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetGender
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Gender                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::SetGender(struct FString Gender)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetGender");

	UAnalyticsBlueprintLibrary_SetGender_Params params;
	params.Gender = Gender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetBuildInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 BuildInfo                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::SetBuildInfo(struct FString BuildInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetBuildInfo");

	UAnalyticsBlueprintLibrary_SetBuildInfo_Params params;
	params.BuildInfo = BuildInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetAge
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Age                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::SetAge(int Age)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetAge");

	UAnalyticsBlueprintLibrary_SetAge_Params params;
	params.Age = Age;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchaseWithAttributes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 ItemId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ItemQuantity                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAnalyticsEventAttr> Attributes                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::RecordSimpleItemPurchaseWithAttributes(struct FString ItemId, int ItemQuantity, TArray<struct FAnalyticsEventAttr> Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchaseWithAttributes");

	UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Params params;
	params.ItemId = ItemId;
	params.ItemQuantity = ItemQuantity;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchase
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ItemId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ItemQuantity                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::RecordSimpleItemPurchase(struct FString ItemId, int ItemQuantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchase");

	UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase_Params params;
	params.ItemId = ItemId;
	params.ItemQuantity = ItemQuantity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchaseWithAttributes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 GameCurrencyType               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GameCurrencyAmount             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAnalyticsEventAttr> Attributes                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::RecordSimpleCurrencyPurchaseWithAttributes(struct FString GameCurrencyType, int GameCurrencyAmount, TArray<struct FAnalyticsEventAttr> Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchaseWithAttributes");

	UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Params params;
	params.GameCurrencyType = GameCurrencyType;
	params.GameCurrencyAmount = GameCurrencyAmount;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchase
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 GameCurrencyType               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GameCurrencyAmount             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::RecordSimpleCurrencyPurchase(struct FString GameCurrencyType, int GameCurrencyAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchase");

	UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase_Params params;
	params.GameCurrencyType = GameCurrencyType;
	params.GameCurrencyAmount = GameCurrencyAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithFullHierarchyAndAttributes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 ProgressType                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         ProgressNames                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FAnalyticsEventAttr> Attributes                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::RecordProgressWithFullHierarchyAndAttributes(struct FString ProgressType, TArray<struct FString> ProgressNames, TArray<struct FAnalyticsEventAttr> Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithFullHierarchyAndAttributes");

	UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Params params;
	params.ProgressType = ProgressType;
	params.ProgressNames = ProgressNames;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithAttributes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 ProgressType                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ProgressName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAnalyticsEventAttr> Attributes                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::RecordProgressWithAttributes(struct FString ProgressType, struct FString ProgressName, TArray<struct FAnalyticsEventAttr> Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithAttributes");

	UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Params params;
	params.ProgressType = ProgressType;
	params.ProgressName = ProgressName;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ProgressType                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ProgressName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::RecordProgress(struct FString ProgressType, struct FString ProgressName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgress");

	UAnalyticsBlueprintLibrary_RecordProgress_Params params;
	params.ProgressType = ProgressType;
	params.ProgressName = ProgressName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordItemPurchase
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ItemId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Currency                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PerItemCost                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ItemQuantity                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::RecordItemPurchase(struct FString ItemId, struct FString Currency, int PerItemCost, int ItemQuantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordItemPurchase");

	UAnalyticsBlueprintLibrary_RecordItemPurchase_Params params;
	params.ItemId = ItemId;
	params.Currency = Currency;
	params.PerItemCost = PerItemCost;
	params.ItemQuantity = ItemQuantity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttributes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAnalyticsEventAttr> Attributes                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::RecordEventWithAttributes(struct FString EventName, TArray<struct FAnalyticsEventAttr> Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttributes");

	UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Params params;
	params.EventName = EventName;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttribute
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AttributeName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AttributeValue                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::RecordEventWithAttribute(struct FString EventName, struct FString AttributeName, struct FString AttributeValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttribute");

	UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Params params;
	params.EventName = EventName;
	params.AttributeName = AttributeName;
	params.AttributeValue = AttributeValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::RecordEvent(struct FString EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEvent");

	UAnalyticsBlueprintLibrary_RecordEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordErrorWithAttributes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Error                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAnalyticsEventAttr> Attributes                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::RecordErrorWithAttributes(struct FString Error, TArray<struct FAnalyticsEventAttr> Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordErrorWithAttributes");

	UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Params params;
	params.Error = Error;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordError
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Error                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::RecordError(struct FString Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordError");

	UAnalyticsBlueprintLibrary_RecordError_Params params;
	params.Error = Error;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyPurchase
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 GameCurrencyType               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GameCurrencyAmount             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RealCurrencyType               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RealMoneyCost                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PaymentProvider                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::RecordCurrencyPurchase(struct FString GameCurrencyType, int GameCurrencyAmount, struct FString RealCurrencyType, float RealMoneyCost, struct FString PaymentProvider)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyPurchase");

	UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Params params;
	params.GameCurrencyType = GameCurrencyType;
	params.GameCurrencyAmount = GameCurrencyAmount;
	params.RealCurrencyType = RealCurrencyType;
	params.RealMoneyCost = RealMoneyCost;
	params.PaymentProvider = PaymentProvider;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGivenWithAttributes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 GameCurrencyType               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GameCurrencyAmount             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAnalyticsEventAttr> Attributes                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::RecordCurrencyGivenWithAttributes(struct FString GameCurrencyType, int GameCurrencyAmount, TArray<struct FAnalyticsEventAttr> Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGivenWithAttributes");

	UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Params params;
	params.GameCurrencyType = GameCurrencyType;
	params.GameCurrencyAmount = GameCurrencyAmount;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGiven
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 GameCurrencyType               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GameCurrencyAmount             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnalyticsBlueprintLibrary::RecordCurrencyGiven(struct FString GameCurrencyType, int GameCurrencyAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGiven");

	UAnalyticsBlueprintLibrary_RecordCurrencyGiven_Params params;
	params.GameCurrencyType = GameCurrencyType;
	params.GameCurrencyAmount = GameCurrencyAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.MakeEventAttribute
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 AttributeName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 AttributeValue                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAnalyticsEventAttr     ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FAnalyticsEventAttr UAnalyticsBlueprintLibrary::MakeEventAttribute(struct FString AttributeName, struct FString AttributeValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.MakeEventAttribute");

	UAnalyticsBlueprintLibrary_MakeEventAttribute_Params params;
	params.AttributeName = AttributeName;
	params.AttributeValue = AttributeValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetUserId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FString UAnalyticsBlueprintLibrary::GetUserId()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetUserId");

	UAnalyticsBlueprintLibrary_GetUserId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetSessionId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FString UAnalyticsBlueprintLibrary::GetSessionId()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetSessionId");

	UAnalyticsBlueprintLibrary_GetSessionId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.FlushEvents
// (Final, Native, Static, Public, BlueprintCallable)

void UAnalyticsBlueprintLibrary::FlushEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.FlushEvents");

	UAnalyticsBlueprintLibrary_FlushEvents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.EndSession
// (Final, Native, Static, Public, BlueprintCallable)

void UAnalyticsBlueprintLibrary::EndSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.EndSession");

	UAnalyticsBlueprintLibrary_EndSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
