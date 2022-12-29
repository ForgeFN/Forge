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

// Class LauncherSocialDefaults.ChatColorSchemeDataAsset
// 0x0120 (0x0150 - 0x0030)
class UChatColorSchemeDataAsset : public UDataAsset
{
public:
	struct FChatColorScheme                            ChatColorData;                                            // 0x0030(0x0120) (Edit, NoDestructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LauncherSocialDefaults.ChatColorSchemeDataAsset");
		return ptr;
	}

};


// Class LauncherSocialDefaults.SocialActionButtonStyleDataAsset
// 0x0278 (0x02A8 - 0x0030)
class USocialActionButtonStyleDataAsset : public UDataAsset
{
public:
	struct FButtonStyle                                Style;                                                    // 0x0030(0x0278) (Edit, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LauncherSocialDefaults.SocialActionButtonStyleDataAsset");
		return ptr;
	}

};


// Class LauncherSocialDefaults.SocialChatChromeColorSchemeDataAsset
// 0x0050 (0x0080 - 0x0030)
class USocialChatChromeColorSchemeDataAsset : public UDataAsset
{
public:
	struct FChatChromeColorScheme                      Style;                                                    // 0x0030(0x0050) (Edit, NoDestructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LauncherSocialDefaults.SocialChatChromeColorSchemeDataAsset");
		return ptr;
	}

};


// Class LauncherSocialDefaults.SocialChatChromeMarginsDataAsset
// 0x0068 (0x0098 - 0x0030)
class USocialChatChromeMarginsDataAsset : public UDataAsset
{
public:
	struct FChatChromeMargins                          Style;                                                    // 0x0030(0x0064) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LauncherSocialDefaults.SocialChatChromeMarginsDataAsset");
		return ptr;
	}

};


// Class LauncherSocialDefaults.SocialChatChromeStyleDataAsset
// 0x07C8 (0x07F8 - 0x0030)
class USocialChatChromeStyleDataAsset : public UDataAsset
{
public:
	struct FChatChromeStyle                            Style;                                                    // 0x0030(0x07C8) (Edit, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LauncherSocialDefaults.SocialChatChromeStyleDataAsset");
		return ptr;
	}

};


// Class LauncherSocialDefaults.SocialChatMarkupStyleDataAsset
// 0x0690 (0x06C0 - 0x0030)
class USocialChatMarkupStyleDataAsset : public UDataAsset
{
public:
	struct FChatMarkupStyle                            Style;                                                    // 0x0030(0x0690) (Edit, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LauncherSocialDefaults.SocialChatMarkupStyleDataAsset");
		return ptr;
	}

};


// Class LauncherSocialDefaults.SocialChatStyleDataAsset
// 0x1360 (0x1390 - 0x0030)
class USocialChatStyleDataAsset : public UDataAsset
{
public:
	struct FChatStyle                                  Style;                                                    // 0x0030(0x1360) (Edit, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LauncherSocialDefaults.SocialChatStyleDataAsset");
		return ptr;
	}

};


// Class LauncherSocialDefaults.SocialCheckBoxStyleDataAsset
// 0x0580 (0x05B0 - 0x0030)
class USocialCheckBoxStyleDataAsset : public UDataAsset
{
public:
	struct FCheckBoxStyle                              Style;                                                    // 0x0030(0x0580) (Edit, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LauncherSocialDefaults.SocialCheckBoxStyleDataAsset");
		return ptr;
	}

};


// Class LauncherSocialDefaults.SocialFontStyleDataAsset
// 0x0210 (0x0240 - 0x0030)
class USocialFontStyleDataAsset : public UDataAsset
{
public:
	struct FSocialFontStyle                            Style;                                                    // 0x0030(0x0210) (Edit, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LauncherSocialDefaults.SocialFontStyleDataAsset");
		return ptr;
	}

};


// Class LauncherSocialDefaults.SocialListMarginsDataAsset
// 0x0200 (0x0230 - 0x0030)
class USocialListMarginsDataAsset : public UDataAsset
{
public:
	struct FSocialListMargins                          Style;                                                    // 0x0030(0x0200) (Edit, NoDestructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LauncherSocialDefaults.SocialListMarginsDataAsset");
		return ptr;
	}

};


// Class LauncherSocialDefaults.SocialListStyleDataAsset
// 0x26F8 (0x2728 - 0x0030)
class USocialListStyleDataAsset : public UDataAsset
{
public:
	struct FSocialListStyle                            Style;                                                    // 0x0030(0x26F8) (Edit, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LauncherSocialDefaults.SocialListStyleDataAsset");
		return ptr;
	}

};


// Class LauncherSocialDefaults.SocialProfanityDataAsset
// 0x0010 (0x0040 - 0x0030)
class USocialProfanityDataAsset : public UDataAsset
{
public:
	TArray<struct FProfanityData>                      ProfanityData;                                            // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LauncherSocialDefaults.SocialProfanityDataAsset");
		return ptr;
	}

};


// Class LauncherSocialDefaults.SocialRadioBoxStyleDataAsset
// 0x0580 (0x05B0 - 0x0030)
class USocialRadioBoxStyleDataAsset : public UDataAsset
{
public:
	struct FCheckBoxStyle                              Style;                                                    // 0x0030(0x0580) (Edit, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LauncherSocialDefaults.SocialRadioBoxStyleDataAsset");
		return ptr;
	}

};


// Class LauncherSocialDefaults.SocialScrollBarStyleDataAsset
// 0x04D0 (0x0500 - 0x0030)
class USocialScrollBarStyleDataAsset : public UDataAsset
{
public:
	struct FScrollBarStyle                             Style;                                                    // 0x0030(0x04D0) (Edit, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LauncherSocialDefaults.SocialScrollBarStyleDataAsset");
		return ptr;
	}

};


// Class LauncherSocialDefaults.SocialSoundSchemaDataAsset
// 0x0048 (0x0078 - 0x0030)
class USocialSoundSchemaDataAsset : public UDataAsset
{
public:
	struct FSocialSoundSchema                          SoundSchema;                                              // 0x0030(0x0048) (Edit, NoDestructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LauncherSocialDefaults.SocialSoundSchemaDataAsset");
		return ptr;
	}

};


// Class LauncherSocialDefaults.SocialStyleDataAsset
// 0x67E8 (0x6818 - 0x0030)
class USocialStyleDataAsset : public UDataAsset
{
public:
	class USocialFontStyleDataAsset*                   SmallFontStyle;                                           // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialFontStyleDataAsset*                   NormalFontStyle;                                          // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialFontStyleDataAsset*                   LargeFontStyle;                                           // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialFontStyleDataAsset*                   ChatFontStyle;                                            // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialListStyleDataAsset*                   SocialListStyle;                                          // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialListMarginsDataAsset*                 SocialListMargins;                                        // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatStyleDataAsset*                   ChatStyle;                                                // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatChromeStyleDataAsset*             ChatChromeStyle;                                          // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatChromeMarginsDataAsset*           ChatChromeMargins;                                        // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatChromeColorSchemeDataAsset*       ChatChromeColorScheme;                                    // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UChatColorSchemeDataAsset*                   ChatColorScheme;                                          // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialSoundSchemaDataAsset*                 SoundSchema;                                              // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialActionButtonStyleDataAsset*           ActionButtonStyle;                                        // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialCheckBoxStyleDataAsset*               CheckBoxStyle;                                            // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialRadioBoxStyleDataAsset*               RadioBoxStyle;                                            // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialScrollBarStyleDataAsset*              ScrollBoxStyle;                                           // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatMarkupStyleDataAsset*             MarkupStyle;                                              // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialProfanityDataAsset*                   ProfanityDataAsset;                                       // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6758];                                    // 0x00C0(0x6758) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LauncherSocialDefaults.SocialStyleDataAsset");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
