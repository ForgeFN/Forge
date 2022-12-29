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

// Class KairosSceneCapture.KairosCaptureStatics
// 0x0000 (0x0028 - 0x0028)
class UKairosCaptureStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KairosSceneCapture.KairosCaptureStatics");
		return ptr;
	}


	static void ToggleAutoRotate(bool bIsAutoRotateAllowed);
	void PauseOrResumeSnippet(struct FKairosSnippetParams Params, struct FWebJSResponse Response);
	static class AKairosSceneManagerActor* GetSceneManager(class UObject* WorldContextObject);
};


// Class KairosSceneCapture.KairosConfig
// 0x0140 (0x0170 - 0x0030)
class UKairosConfig : public UDataAsset
{
public:
	float                                              DefaultHeroScale;                                         // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ARSpawnStartingScale;                                     // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      AvatarCaptureBlueprint;                                   // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DefaultKairosPawn;                                        // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UARSessionConfig*                            FaceARConfig;                                             // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty KairosSceneCapture.KairosConfig.ARMap
	unsigned char                                      UnknownData01[0x28];                                      // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty KairosSceneCapture.KairosConfig.CaptureMap
	class UAnimMontage*                                KairosMenuIdle_Male;                                      // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                KairosMenuIdle_Female;                                    // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  AvatarRenderCameraLocation_CloseUp;                       // 0x00B0(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  AvatarRenderCameraLocation_Bust;                          // 0x00E0(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  AvatarRenderCameraLocation_Torso;                         // 0x0110(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  AvatarRenderCameraLocation_FullBody;                      // 0x0140(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KairosSceneCapture.KairosConfig");
		return ptr;
	}

};


// Class KairosSceneCapture.KairosGameModeBase
// 0x0008 (0x02C0 - 0x02B8)
class AKairosGameModeBase : public AGameModeBase
{
public:
	class UKairosConfig*                               DefaultConfig;                                            // 0x02B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KairosSceneCapture.KairosGameModeBase");
		return ptr;
	}


	class UKairosConfig* GetDefaultConfig();
};


// Class KairosSceneCapture.KairosHeroBase
// 0x0030 (0x0248 - 0x0218)
class AKairosHeroBase : public AActor
{
public:
	struct FString                                     PlayerID;                                                 // 0x0218(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsBeingCaptured;                                         // 0x0228(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0229(0x0007) MISSED OFFSET
	class USceneCaptureComponent2D*                    SceneCaptureComponent2D;                                  // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EKairosHeroAnimationState                          CurrentAnimationState;                                    // 0x0238(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EKairosHeroSkeletonType                            SkeletonType;                                             // 0x0239(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x6];                                       // 0x023A(0x0006) MISSED OFFSET
	class AFortPlayerPawn*                             CapturePawn;                                              // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KairosSceneCapture.KairosHeroBase");
		return ptr;
	}


	bool EndCapture();
	bool BeginCapture(struct FKairosAnimationFramingInfo FramingInfo, struct FKairosCaptureParams CaptureParams);
};


// Class KairosSceneCapture.KairosPawn
// 0x0000 (0x0278 - 0x0278)
class AKairosPawn : public APawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KairosSceneCapture.KairosPawn");
		return ptr;
	}

};


// Class KairosSceneCapture.KairosPlayerController
// 0x0000 (0x0568 - 0x0568)
class AKairosPlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KairosSceneCapture.KairosPlayerController");
		return ptr;
	}

};


// Class KairosSceneCapture.KairosSceneManagerActor
// 0x0188 (0x03A0 - 0x0218)
class AKairosSceneManagerActor : public AActor
{
public:
	TMap<struct FString, struct FKairosAvatarDisplayInfo> DisplayAvatars;                                           // 0x0218(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0268(0x0008) MISSED OFFSET
	struct FTransform                                  SpawnedPawnHeadCaptureTransform;                          // 0x0270(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UAudioComponent*                             SnippetAudioComponent;                                    // 0x02A0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                                 ActiveGroupWidget;                                        // 0x02A8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsSnippetPaused;                                         // 0x02B0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x02B1(0x001F) MISSED OFFSET
	struct FKairosSceneInfo                            ActiveSceneInfo;                                          // 0x02D0(0x0020) (Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0xB0];                                      // 0x02F0(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KairosSceneCapture.KairosSceneManagerActor");
		return ptr;
	}


	void StopAR();
	void PauseOrResumeSnippet(struct FString PlayerID, bool bShouldPase);
	void OLD_OnSceneSetupComplete(struct FKairosSceneInfo CompleteSceneInfoCopy);
	void LoadWorldARMode();
	struct FKairosSceneInfo GetSceneInfo();
	void BeginEmotePlaybackForPlayer(struct FString PlayerID, struct FString EmoteID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
