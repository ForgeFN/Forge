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

// Class EasyAntiCheatCommon.EasyAntiCheatNetComponent
// 0x0008 (0x00B8 - 0x00B0)
class UEasyAntiCheatNetComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EasyAntiCheatCommon.EasyAntiCheatNetComponent");
		return ptr;
	}


	void ServerMessage(TArray<unsigned char> Message);
	void ClientMessage(TArray<unsigned char> Message);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
