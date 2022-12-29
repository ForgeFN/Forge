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

// Class LiveStreamVoice.LiveStreamVoiceChannel
// 0x0000 (0x0080 - 0x0080)
class ULiveStreamVoiceChannel : public UVoiceChannel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveStreamVoice.LiveStreamVoiceChannel");
		return ptr;
	}

};


// Class LiveStreamVoice.LiveStreamVoiceSubsystem
// 0x0018 (0x0048 - 0x0030)
class ULiveStreamVoiceSubsystem : public UGameInstanceSubsystem
{
public:
	struct FVoiceSettings                              PlaybackSettings;                                         // 0x0030(0x0018) (NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveStreamVoice.LiveStreamVoiceSubsystem");
		return ptr;
	}


	void SetVoiceSettings(struct FVoiceSettings InSettings);
	void EnableLocalVoiceProcessing(unsigned char LocalUserNum, bool bEnable);
	void ClearVoiceSettings();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
