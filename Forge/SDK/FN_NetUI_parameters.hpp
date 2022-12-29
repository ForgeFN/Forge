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

// Function NetUI.BadNetworkIndicator.UpdateDisplay
struct UBadNetworkIndicator_UpdateDisplay_Params
{
};

// Function NetUI.BadNetworkIndicator.ShouldDisplay
struct UBadNetworkIndicator_ShouldDisplay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NetUI.BadNetworkIndicator.HasSeverePing
struct UBadNetworkIndicator_HasSeverePing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NetUI.BadNetworkIndicator.HasSeverePacketLoss
struct UBadNetworkIndicator_HasSeverePacketLoss_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NetUI.BadNetworkIndicator.HasBadPing
struct UBadNetworkIndicator_HasBadPing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NetUI.BadNetworkIndicator.HasBadPacketLoss
struct UBadNetworkIndicator_HasBadPacketLoss_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NetUI.BadNetworkIndicator.GetPing
struct UBadNetworkIndicator_GetPing_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NetUI.BadNetworkIndicator.GetPacketLoss
struct UBadNetworkIndicator_GetPacketLoss_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function NetUI.NetDebugWidget.StopTimer
struct UNetDebugWidget_StopTimer_Params
{
};

// Function NetUI.NetDebugWidget.StartTimer
struct UNetDebugWidget_StartTimer_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
