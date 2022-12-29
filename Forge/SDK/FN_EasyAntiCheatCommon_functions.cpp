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

// Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ServerMessage
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TArray<unsigned char>          Message                        (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEasyAntiCheatNetComponent::ServerMessage(TArray<unsigned char> Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ServerMessage");

	UEasyAntiCheatNetComponent_ServerMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ClientMessage
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TArray<unsigned char>          Message                        (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEasyAntiCheatNetComponent::ClientMessage(TArray<unsigned char> Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ClientMessage");

	UEasyAntiCheatNetComponent_ClientMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
