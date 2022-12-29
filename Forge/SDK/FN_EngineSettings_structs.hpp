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

// Enum EngineSettings.ESubLevelStripMode
enum class ESubLevelStripMode : uint8_t
{
	ExactClass                     = 0,
	IsChildOf                      = 1,
	ESubLevelStripMode_MAX         = 2
};


// Enum EngineSettings.EFourPlayerSplitScreenType
enum class EFourPlayerSplitScreenType : uint8_t
{
	Grid                           = 0,
	Vertical                       = 1,
	Horizontal                     = 2,
	EFourPlayerSplitScreenType_MAX = 3
};


// Enum EngineSettings.EThreePlayerSplitScreenType
enum class EThreePlayerSplitScreenType : uint8_t
{
	FavorTop                       = 0,
	FavorBottom                    = 1,
	Vertical                       = 2,
	Horizontal                     = 3,
	EThreePlayerSplitScreenType_MAX = 4
};


// Enum EngineSettings.ETwoPlayerSplitScreenType
enum class ETwoPlayerSplitScreenType : uint8_t
{
	Horizontal                     = 0,
	Vertical                       = 1,
	ETwoPlayerSplitScreenType_MAX  = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EngineSettings.AutoCompleteCommand
// 0x0028
struct FAutoCompleteCommand
{
	struct FString                                     Command;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Desc;                                                     // 0x0010(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct EngineSettings.GameModeName
// 0x0028
struct FGameModeName
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftClassPath                              GameMode;                                                 // 0x0010(0x0018) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
