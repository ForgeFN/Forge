#pragma once

// Fortnite (11.00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum OodleHandlerComponent.EOodleEnableMode
enum class EOodleEnableMode : uint8_t
{
	AlwaysEnabled                  = 0,
	WhenCompressedPacketReceived   = 1,
	EOodleEnableMode_MAX           = 2
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
