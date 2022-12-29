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

// Class UACBase.UACNetworkComponent
// 0x0100 (0x01B0 - 0x00B0)
class UUACNetworkComponent : public UActorComponent
{
public:
	int                                                PlayerID;                                                 // 0x00B0(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xFC];                                      // 0x00B4(0x00FC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UACBase.UACNetworkComponent");
		return ptr;
	}


	void SendPacketToServer(unsigned char Type, TArray<unsigned char> Packet);
	void SendPacketToClient(unsigned char Type, TArray<unsigned char> Packet);
	void SendClientHello(uint32_t SessionKey);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
