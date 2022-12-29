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

// Function EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary.NotEqual_GameplayStatTagGameplayStatTag
struct UBlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag_Params
{
	struct FGameplayStatTag                            A;                                                        // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayStatTag                            B;                                                        // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary.EqualEqual_GameplayStatTagGameplayStatTag
struct UBlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag_Params
{
	struct FGameplayStatTag                            A;                                                        // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayStatTag                            B;                                                        // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
