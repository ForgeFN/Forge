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

// Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ServerMessage
struct UEasyAntiCheatNetComponent_ServerMessage_Params
{
	TArray<unsigned char>                              Message;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ClientMessage
struct UEasyAntiCheatNetComponent_ClientMessage_Params
{
	TArray<unsigned char>                              Message;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
