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

// Class Solaris.SolarisArrayLibrary
// 0x0000 (0x0028 - 0x0028)
class USolarisArrayLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Solaris.SolarisArrayLibrary");
		return ptr;
	}


	static int Num(TArray<int> Array);
	static int Add(TArray<int> Array, int new_item);
};


// Class Solaris.SolarisMathLibrary_Bool
// 0x0000 (0x0028 - 0x0028)
class USolarisMathLibrary_Bool : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Solaris.SolarisMathLibrary_Bool");
		return ptr;
	}


	static bool logical_xor(bool LHS, bool RHS);
	static bool logical_not(bool Value);
	static bool assign(bool RHS, bool* LHS);
};


// Class Solaris.SolarisMathLibrary_Int
// 0x0000 (0x0028 - 0x0028)
class USolarisMathLibrary_Int : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Solaris.SolarisMathLibrary_Int");
		return ptr;
	}


	static int Subtract(int LHS, int RHS);
	static bool not_equal(int LHS, int RHS);
	static int negate(int Value);
	static int Multiply(int LHS, int RHS);
	static int Min(int LHS, int RHS);
	static int Max(int LHS, int RHS);
	static bool less_equal(int LHS, int RHS);
	static bool less(int LHS, int RHS);
	static bool greater_equal(int LHS, int RHS);
	static bool greater(int LHS, int RHS);
	static bool equal(int LHS, int RHS);
	static int Divide(int LHS, int RHS);
	static int assign(int RHS, int* LHS);
	static int Add(int LHS, int RHS);
	static int abs(int Value);
};


// Class Solaris.SolarisMathLibrary_Real
// 0x0000 (0x0028 - 0x0028)
class USolarisMathLibrary_Real : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Solaris.SolarisMathLibrary_Real");
		return ptr;
	}


	static float Subtract(float LHS, float RHS);
	static bool not_equal(float LHS, float RHS);
	static float negate(float Value);
	static float Multiply(float LHS, float RHS);
	static float Min(float LHS, float RHS);
	static float Max(float LHS, float RHS);
	static bool less_equal(float LHS, float RHS);
	static bool less(float LHS, float RHS);
	static bool greater_equal(float LHS, float RHS);
	static bool greater(float LHS, float RHS);
	static bool equal(float LHS, float RHS);
	static float Divide(float LHS, float RHS);
	static float assign(float RHS, float* LHS);
	static float Add(float LHS, float RHS);
	static float abs(float Value);
};


// Class Solaris.SolarisGameSettings
// 0x0018 (0x0040 - 0x0028)
class USolarisGameSettings : public UObject
{
public:
	TArray<struct FString>                             Blacklist;                                                // 0x0028(0x0010) (ZeroConstructor, Config, NativeAccessSpecifierPublic)
	int                                                MaxAllowedSize;                                           // 0x0038(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Solaris.SolarisGameSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
