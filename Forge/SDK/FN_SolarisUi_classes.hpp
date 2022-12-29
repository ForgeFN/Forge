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

// Class SolarisUi.SolUserWidget
// 0x0020 (0x0248 - 0x0228)
class USolUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0228(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SolarisUi.SolUserWidget");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
