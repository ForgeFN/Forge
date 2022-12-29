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

// Class Crashlytics.CrashlyticsBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UCrashlyticsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Crashlytics.CrashlyticsBlueprintLibrary");
		return ptr;
	}


	static void SetUserName(struct FString Name);
	static void SetUserIdentifier(struct FString ID);
	static void SetUserEmail(struct FString Email);
	static void SetStringKey(struct FString Key, struct FString Value);
	static void SetIntegerKey(struct FString Key, int Value);
	static void SetFloatKey(struct FString Key, float Value);
	static void SetBooleanKey(struct FString Key, bool Value);
	static void LogMessage(struct FString Message);
	static void LogException(struct FString Message);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
