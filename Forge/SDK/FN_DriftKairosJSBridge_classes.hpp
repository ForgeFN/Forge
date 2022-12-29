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

// Class DriftKairosJSBridge.DriftKairosCommonJSBridge
// 0x0000 (0x0028 - 0x0028)
class UDriftKairosCommonJSBridge : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DriftKairosJSBridge.DriftKairosCommonJSBridge");
		return ptr;
	}

};


// Class DriftKairosJSBridge.DanceChallengesJSBridge
// 0x0010 (0x0038 - 0x0028)
class UDanceChallengesJSBridge : public UDriftKairosCommonJSBridge
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DriftKairosJSBridge.DanceChallengesJSBridge");
		return ptr;
	}


	void GetDanceChallenges(struct FWebJSResponse Response);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
