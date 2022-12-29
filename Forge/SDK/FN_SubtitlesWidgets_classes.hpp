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

// Class SubtitlesWidgets.FortMediaSubtitlesPlayer
// 0x0020 (0x0048 - 0x0028)
class UFortMediaSubtitlesPlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UOverlays*                                   SourceSubtitles;                                          // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SubtitlesWidgets.FortMediaSubtitlesPlayer");
		return ptr;
	}


	void Stop();
	void SetSubtitles(class UOverlays* Subtitles);
	void Play();
	void BindToMediaPlayer(class UMediaPlayer* InMediaPlayer);
};


// Class SubtitlesWidgets.SubtitleDisplay
// 0x0308 (0x0408 - 0x0100)
class USubtitleDisplay : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0100(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty SubtitlesWidgets.SubtitleDisplay.BP_SubtitleChangedEvent
	struct FSlateFontInfo                              FontInfo;                                                 // 0x0110(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0160(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WrapTextAt;                                               // 0x0170(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x294];                                     // 0x0174(0x0294) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SubtitlesWidgets.SubtitleDisplay");
		return ptr;
	}


	bool HasSubtitles();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
