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

// Class SoundCueTemplates.SoundCueContainer
// 0x0000 (0x0420 - 0x0420)
class USoundCueContainer : public USoundCueTemplate
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SoundCueTemplates.SoundCueContainer");
		return ptr;
	}

};


// Class SoundCueTemplates.SoundCueDistanceCrossfade
// 0x0000 (0x0420 - 0x0420)
class USoundCueDistanceCrossfade : public USoundCueTemplate
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SoundCueTemplates.SoundCueDistanceCrossfade");
		return ptr;
	}

};


// Class SoundCueTemplates.SoundCueTemplateSettings
// 0x0000 (0x0038 - 0x0038)
class USoundCueTemplateSettings : public UDeveloperSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SoundCueTemplates.SoundCueTemplateSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
