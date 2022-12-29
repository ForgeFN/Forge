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

// Function Crashlytics.CrashlyticsBlueprintLibrary.SetUserName
struct UCrashlyticsBlueprintLibrary_SetUserName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Crashlytics.CrashlyticsBlueprintLibrary.SetUserIdentifier
struct UCrashlyticsBlueprintLibrary_SetUserIdentifier_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Crashlytics.CrashlyticsBlueprintLibrary.SetUserEmail
struct UCrashlyticsBlueprintLibrary_SetUserEmail_Params
{
	struct FString                                     Email;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Crashlytics.CrashlyticsBlueprintLibrary.SetStringKey
struct UCrashlyticsBlueprintLibrary_SetStringKey_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Crashlytics.CrashlyticsBlueprintLibrary.SetIntegerKey
struct UCrashlyticsBlueprintLibrary_SetIntegerKey_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Crashlytics.CrashlyticsBlueprintLibrary.SetFloatKey
struct UCrashlyticsBlueprintLibrary_SetFloatKey_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Crashlytics.CrashlyticsBlueprintLibrary.SetBooleanKey
struct UCrashlyticsBlueprintLibrary_SetBooleanKey_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Crashlytics.CrashlyticsBlueprintLibrary.LogMessage
struct UCrashlyticsBlueprintLibrary_LogMessage_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Crashlytics.CrashlyticsBlueprintLibrary.LogException
struct UCrashlyticsBlueprintLibrary_LogException_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
