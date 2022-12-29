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

// Enum KairosSceneCapture.EKairosAvatarCaptureState
enum class EKairosAvatarCaptureState : uint8_t
{
	Unloaded                       = 0,
	LoadingAssets                  = 1,
	ReadyToSpawn                   = 2,
	FinalizingSpawn                = 3,
	Displaying                     = 4,
	EKairosAvatarCaptureState_MAX  = 5
};


// Enum KairosSceneCapture.EKairosHeroAnimationType
enum class EKairosHeroAnimationType : uint8_t
{
	Unknown                        = 0,
	Idle                           = 1,
	Emote                          = 2,
	EKairosHeroAnimationType_MAX   = 3
};


// Enum KairosSceneCapture.EKairosHeroAnimationState
enum class EKairosHeroAnimationState : uint8_t
{
	Unknown                        = 0,
	Idling                         = 1,
	Emoting                        = 2,
	Face_Live                      = 3,
	Face_Playback                  = 4,
	EKairosHeroAnimationState_MAX  = 5
};


// Enum KairosSceneCapture.EKairosHeroSkeletonType
enum class EKairosHeroSkeletonType : uint8_t
{
	Unknown                        = 0,
	Male                           = 1,
	Female                         = 2,
	EKairosHeroSkeletonType_MAX    = 3
};


// Enum KairosSceneCapture.EKairosAppMode
enum class EKairosAppMode : uint8_t
{
	Unknown                        = 0,
	AvatarCapture                  = 1,
	AvatarRender                   = 2,
	EKairosAppMode_MAX             = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct KairosSceneCapture.KairosSnippetParams
// 0x0018
struct FKairosSnippetParams
{
	struct FString                                     PlayerID;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPause;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct KairosSceneCapture.KairosAnimationFramingInfo
// 0x0050
struct FKairosAnimationFramingInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                IdleMontage;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EKairosHeroAnimationType                           AnimationType;                                            // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EKairosHeroSkeletonType                            SkeletonType;                                             // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0012(0x000E) MISSED OFFSET
	struct FTransform                                  CameraTransform;                                          // 0x0020(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct KairosSceneCapture.KairosCaptureParams
// 0x0100
struct FKairosCaptureParams
{
	int                                                FrameRate;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OverrideNumFrames;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Size;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      BackgroundColor;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     FullPathAndName;                                          // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xD8];                                      // 0x0028(0x00D8) MISSED OFFSET
};

// ScriptStruct KairosSceneCapture.KairosAvatarAttributesMcpData
// 0x0010
struct FKairosAvatarAttributesMcpData
{
	TArray<struct FMcpVariantReader>                   Variants;                                                 // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct KairosSceneCapture.KairosAvatarItemMcpData
// 0x0020
struct FKairosAvatarItemMcpData
{
	struct FString                                     TemplateId;                                               // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKairosAvatarAttributesMcpData              Attributes;                                               // 0x0010(0x0010) (NativeAccessSpecifierPublic)
};

// ScriptStruct KairosSceneCapture.KairosAvatarMcpData
// 0x0098
struct FKairosAvatarMcpData
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                              // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CurrentUser;                                              // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShouldPlayFacialAnimation;                                // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
	struct FKairosAvatarItemMcpData                    Character;                                                // 0x0028(0x0020) (NativeAccessSpecifierPublic)
	struct FKairosAvatarItemMcpData                    Backpack;                                                 // 0x0048(0x0020) (NativeAccessSpecifierPublic)
	struct FKairosAvatarItemMcpData                    Dance;                                                    // 0x0068(0x0020) (NativeAccessSpecifierPublic)
	TArray<struct FString>                             BackgroundColors;                                         // 0x0088(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct KairosSceneCapture.KairosAvatarDisplayInfo
// 0x03C0
struct FKairosAvatarDisplayInfo
{
	EKairosAvatarCaptureState                          CurrentState;                                             // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EKairosAvatarCaptureState                          TargetState;                                              // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0002(0x000E) MISSED OFFSET
	struct FTransform                                  SpawnTransform;                                           // 0x0010(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FKairosAvatarMcpData                        AvatarData;                                               // 0x0040(0x0098) (NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x30];                                      // 0x00D8(0x0030) MISSED OFFSET
	struct FFortAthenaLoadout                          Loadout;                                                  // 0x0108(0x00F0) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           AnimToPlay;                                               // 0x01F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SnippetPathToPlay;                                        // 0x0200(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0210(0x0010) MISSED OFFSET
	class UFortHero*                                   HeroItem;                                                 // 0x0220(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0228(0x0008) MISSED OFFSET
	struct FKairosCaptureParams                        CaptureParams;                                            // 0x0230(0x0100) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                        BackgroundColors;                                         // 0x0330(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class AKairosHeroBase*                             KairosHero;                                               // 0x0340(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerPawn*                             Pawn;                                                     // 0x0348(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsCurrentUser;                                           // 0x0350(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	struct FString                                     DisplayName;                                              // 0x0358(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0368(0x0008) MISSED OFFSET
	struct FTransform                                  HeadBoneTransform;                                        // 0x0370(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bSpawnTransformIsAbsolute;                                // 0x03A0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsNewCharacter;                                          // 0x03A1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x6];                                       // 0x03A2(0x0006) MISSED OFFSET
	class UClass*                                      HeroPawnClass;                                            // 0x03A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseDefaultFrontendAnimClass;                             // 0x03B0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData07[0xF];                                       // 0x03B1(0x000F) MISSED OFFSET
};

// ScriptStruct KairosSceneCapture.KairosSceneInfo
// 0x0020
struct FKairosSceneInfo
{
	EKairosAppMode                                     SceneAppMode;                                             // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FKairosAvatarDisplayInfo>            SpawnedAvatars;                                           // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FColor                                      BackgroundColor;                                          // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct KairosSceneCapture.KairosSnippetPlayRecord
// 0x0018
struct FKairosSnippetPlayRecord
{
	struct FString                                     PlayerID;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPause;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct KairosSceneCapture.KairosCaptureAvatarParams
// 0x0040
struct FKairosCaptureAvatarParams
{
	struct FString                                     Background;                                               // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Format;                                                   // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Width;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Height;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FrameRate;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumFrames;                                                // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKairosAvatarMcpData>                Characters;                                               // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct KairosSceneCapture.KairosBobbleTimeParams
// 0x0060
struct FKairosBobbleTimeParams
{
	struct FString                                     Background;                                               // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKairosAvatarMcpData>                Characters;                                               // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     SnippetPath;                                              // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ContainerType;                                            // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ContainerID;                                              // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MessageID;                                                // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
