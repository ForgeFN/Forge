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

// Function Crashlytics.CrashlyticsBlueprintLibrary.SetUserName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrashlyticsBlueprintLibrary::SetUserName(struct FString Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crashlytics.CrashlyticsBlueprintLibrary.SetUserName");

	UCrashlyticsBlueprintLibrary_SetUserName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crashlytics.CrashlyticsBlueprintLibrary.SetUserIdentifier
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrashlyticsBlueprintLibrary::SetUserIdentifier(struct FString ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crashlytics.CrashlyticsBlueprintLibrary.SetUserIdentifier");

	UCrashlyticsBlueprintLibrary_SetUserIdentifier_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crashlytics.CrashlyticsBlueprintLibrary.SetUserEmail
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Email                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrashlyticsBlueprintLibrary::SetUserEmail(struct FString Email)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crashlytics.CrashlyticsBlueprintLibrary.SetUserEmail");

	UCrashlyticsBlueprintLibrary_SetUserEmail_Params params;
	params.Email = Email;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crashlytics.CrashlyticsBlueprintLibrary.SetStringKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Value                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrashlyticsBlueprintLibrary::SetStringKey(struct FString Key, struct FString Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crashlytics.CrashlyticsBlueprintLibrary.SetStringKey");

	UCrashlyticsBlueprintLibrary_SetStringKey_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crashlytics.CrashlyticsBlueprintLibrary.SetIntegerKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrashlyticsBlueprintLibrary::SetIntegerKey(struct FString Key, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crashlytics.CrashlyticsBlueprintLibrary.SetIntegerKey");

	UCrashlyticsBlueprintLibrary_SetIntegerKey_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crashlytics.CrashlyticsBlueprintLibrary.SetFloatKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrashlyticsBlueprintLibrary::SetFloatKey(struct FString Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crashlytics.CrashlyticsBlueprintLibrary.SetFloatKey");

	UCrashlyticsBlueprintLibrary_SetFloatKey_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crashlytics.CrashlyticsBlueprintLibrary.SetBooleanKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrashlyticsBlueprintLibrary::SetBooleanKey(struct FString Key, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crashlytics.CrashlyticsBlueprintLibrary.SetBooleanKey");

	UCrashlyticsBlueprintLibrary_SetBooleanKey_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crashlytics.CrashlyticsBlueprintLibrary.LogMessage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrashlyticsBlueprintLibrary::LogMessage(struct FString Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crashlytics.CrashlyticsBlueprintLibrary.LogMessage");

	UCrashlyticsBlueprintLibrary_LogMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Crashlytics.CrashlyticsBlueprintLibrary.LogException
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrashlyticsBlueprintLibrary::LogException(struct FString Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Crashlytics.CrashlyticsBlueprintLibrary.LogException");

	UCrashlyticsBlueprintLibrary_LogException_Params params;
	params.Message = Message;

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
