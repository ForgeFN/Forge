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

// Class PacketHandler.HandlerComponentFactory
// 0x0000 (0x0028 - 0x0028)
class UHandlerComponentFactory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PacketHandler.HandlerComponentFactory");
		return ptr;
	}

};


// Class PacketHandler.NetAnalyticsAggregatorConfig
// 0x0010 (0x0038 - 0x0028)
class UNetAnalyticsAggregatorConfig : public UObject
{
public:
	TArray<struct FNetAnalyticsDataConfig>             NetAnalyticsData;                                         // 0x0028(0x0010) (ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PacketHandler.NetAnalyticsAggregatorConfig");
		return ptr;
	}

};


// Class PacketHandler.PacketHandlerProfileConfig
// 0x0010 (0x0038 - 0x0028)
class UPacketHandlerProfileConfig : public UObject
{
public:
	TArray<struct FString>                             Components;                                               // 0x0028(0x0010) (ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PacketHandler.PacketHandlerProfileConfig");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
