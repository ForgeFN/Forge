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

// Class AugmentedReality.ARBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARBlueprintLibrary");
		return ptr;
	}


	static void UnpinComponent(class USceneComponent* ComponentToUnpin);
	static void StopARSession();
	static void StartARSession(class UARSessionConfig* SessionConfig);
	static void SetAlignmentTransform(struct FTransform InAlignmentTransform);
	static void RemovePin(class UARPin* PinToRemove);
	static class UARPin* PinComponentToTraceResult(class USceneComponent* ComponentToPin, struct FARTraceResult TraceResult, struct FName DebugName);
	static class UARPin* PinComponent(class USceneComponent* ComponentToPin, struct FTransform PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, struct FName DebugName);
	static void PauseARSession();
	static TArray<struct FARTraceResult> LineTraceTrackedObjects3D(struct FVector Start, struct FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
	static TArray<struct FARTraceResult> LineTraceTrackedObjects(struct FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
	static bool IsSessionTypeSupported(EARSessionType SessionType);
	static bool IsARSupported();
	static EARWorldMappingState GetWorldMappingStatus();
	static EARTrackingQualityReason GetTrackingQualityReason();
	static EARTrackingQuality GetTrackingQuality();
	static TArray<struct FARVideoFormat> GetSupportedVideoFormats(EARSessionType SessionType);
	static class UARSessionConfig* GetSessionConfig();
	static TArray<struct FVector> GetPointCloud();
	static class UARLightEstimate* GetCurrentLightEstimate();
	static class UARTextureCameraImage* GetCameraImage();
	static class UARTextureCameraDepth* GetCameraDepth();
	static struct FARSessionStatus GetARSessionStatus();
	static TArray<class UARTrackedPoint*> GetAllTrackedPoints();
	static TArray<class UARPlaneGeometry*> GetAllTrackedPlanes();
	static TArray<class UARTrackedImage*> GetAllTrackedImages();
	static TArray<class UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes();
	static TArray<class UARPin*> GetAllPins();
	static TArray<class UARTrackedGeometry*> GetAllGeometries();
	static void DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, struct FLinearColor Color, float OutlineThickness, float PersistForSeconds);
	static void DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, struct FLinearColor Color, float Scale, float PersistForSeconds);
	static class UARCandidateImage* AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, struct FString FriendlyName, float PhysicalWidth);
	static bool AddManualEnvironmentCaptureProbe(struct FVector Location, struct FVector Extent);
};


// Class AugmentedReality.ARTraceResultLibrary
// 0x0000 (0x0028 - 0x0028)
class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTraceResultLibrary");
		return ptr;
	}


	static class UARTrackedGeometry* GetTrackedGeometry(struct FARTraceResult TraceResult);
	static EARLineTraceChannels GetTraceChannel(struct FARTraceResult TraceResult);
	static struct FTransform GetLocalToWorldTransform(struct FARTraceResult TraceResult);
	static struct FTransform GetLocalToTrackingTransform(struct FARTraceResult TraceResult);
	static float GetDistanceFromCamera(struct FARTraceResult TraceResult);
};


// Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
// 0x0020 (0x0050 - 0x0030)
class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy");
		return ptr;
	}

};


// Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
// 0x0030 (0x0080 - 0x0050)
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.OnSuccess
	unsigned char                                      UnknownData01[0x10];                                      // 0x0060(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.OnFailed
	unsigned char                                      UnknownData02[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy");
		return ptr;
	}


	static class UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(class UObject* WorldContextObject);
};


// Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
// 0x0048 (0x0098 - 0x0050)
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.OnSuccess
	unsigned char                                      UnknownData01[0x10];                                      // 0x0060(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.OnFailed
	unsigned char                                      UnknownData02[0x28];                                      // 0x0070(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy");
		return ptr;
	}


	static class UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(class UObject* WorldContextObject, struct FVector Location, struct FVector Extent);
};


// Class AugmentedReality.ARLightEstimate
// 0x0000 (0x0028 - 0x0028)
class UARLightEstimate : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARLightEstimate");
		return ptr;
	}

};


// Class AugmentedReality.ARBasicLightEstimate
// 0x0018 (0x0040 - 0x0028)
class UARBasicLightEstimate : public UARLightEstimate
{
public:
	float                                              AmbientIntensityLumens;                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              AmbientColorTemperatureKelvin;                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                                AmbientColor;                                             // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARBasicLightEstimate");
		return ptr;
	}


	float GetAmbientIntensityLumens();
	float GetAmbientColorTemperatureKelvin();
	struct FLinearColor GetAmbientColor();
};


// Class AugmentedReality.ARPin
// 0x00C8 (0x00F0 - 0x0028)
class UARPin : public UObject
{
public:
	class UARTrackedGeometry*                          TrackedGeometry;                                          // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                             PinnedComponent;                                          // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FTransform                                  LocalToTrackingTransform;                                 // 0x0040(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FTransform                                  LocalToAlignedTrackingTransform;                          // 0x0070(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	EARTrackingState                                   TrackingState;                                            // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x00A1(0x001F) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x00A1(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AugmentedReality.ARPin.OnARTrackingStateChanged
	unsigned char                                      UnknownData03[0x10];                                      // 0x00D0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AugmentedReality.ARPin.OnARTransformUpdated
	unsigned char                                      UnknownData04[0x10];                                      // 0x00E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARPin");
		return ptr;
	}


	EARTrackingState GetTrackingState();
	class UARTrackedGeometry* GetTrackedGeometry();
	class USceneComponent* GetPinnedComponent();
	struct FTransform GetLocalToWorldTransform();
	struct FTransform GetLocalToTrackingTransform();
	struct FName GetDebugName();
	void DebugDraw(class UWorld* World, struct FLinearColor Color, float Scale, float PersistForSeconds);
};


// Class AugmentedReality.ARSessionConfig
// 0x0068 (0x0098 - 0x0030)
class UARSessionConfig : public UDataAsset
{
public:
	EARWorldAlignment                                  WorldAlignment;                                           // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EARSessionType                                     SessionType;                                              // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EARPlaneDetectionMode                              PlaneDetectionMode;                                       // 0x0032(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bHorizontalPlaneDetection;                                // 0x0033(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bVerticalPlaneDetection;                                  // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bEnableAutoFocus;                                         // 0x0035(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EARLightEstimationMode                             LightEstimationMode;                                      // 0x0036(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EARFrameSyncMode                                   FrameSyncMode;                                            // 0x0037(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bEnableAutomaticCameraOverlay;                            // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bEnableAutomaticCameraTracking;                           // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bResetCameraTracking;                                     // 0x003A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bResetTrackedObjects;                                     // 0x003B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<class UARCandidateImage*>                   CandidateImages;                                          // 0x0040(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int                                                MaxNumSimultaneousImagesTracked;                          // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EAREnvironmentCaptureProbeType                     EnvironmentCaptureProbeType;                              // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	TArray<unsigned char>                              WorldMapData;                                             // 0x0058(0x0010) (Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<class UARCandidateObject*>                  CandidateObjects;                                         // 0x0068(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FARVideoFormat                              DesiredVideoFormat;                                       // 0x0078(0x000C) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	EARFaceTrackingDirection                           FaceTrackingDirection;                                    // 0x0084(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EARFaceTrackingUpdate                              FaceTrackingUpdate;                                       // 0x0085(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0086(0x0002) MISSED OFFSET
	TArray<unsigned char>                              SerializedARCandidateImageDatabase;                       // 0x0088(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARSessionConfig");
		return ptr;
	}


	bool ShouldResetTrackedObjects();
	bool ShouldResetCameraTracking();
	bool ShouldRenderCameraOverlay();
	bool ShouldEnableCameraTracking();
	bool ShouldEnableAutoFocus();
	void SetWorldMapData(TArray<unsigned char> WorldMapData);
	void SetResetTrackedObjects(bool bNewValue);
	void SetResetCameraTracking(bool bNewValue);
	void SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate);
	void SetFaceTrackingDirection(EARFaceTrackingDirection InDirection);
	void SetEnableAutoFocus(bool bNewValue);
	void SetDesiredVideoFormat(struct FARVideoFormat NewFormat);
	void SetCandidateObjectList(TArray<class UARCandidateObject*> InCandidateObjects);
	TArray<unsigned char> GetWorldMapData();
	EARWorldAlignment GetWorldAlignment();
	EARSessionType GetSessionType();
	EARPlaneDetectionMode GetPlaneDetectionMode();
	int GetMaxNumSimultaneousImagesTracked();
	EARLightEstimationMode GetLightEstimationMode();
	EARFrameSyncMode GetFrameSyncMode();
	EARFaceTrackingUpdate GetFaceTrackingUpdate();
	EARFaceTrackingDirection GetFaceTrackingDirection();
	EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType();
	struct FARVideoFormat GetDesiredVideoFormat();
	TArray<class UARCandidateObject*> GetCandidateObjectList();
	TArray<class UARCandidateImage*> GetCandidateImageList();
	void AddCandidateObject(class UARCandidateObject* CandidateObject);
	void AddCandidateImage(class UARCandidateImage* NewCandidateImage);
};


// Class AugmentedReality.ARSharedWorldGameMode
// 0x0068 (0x0368 - 0x0300)
class AARSharedWorldGameMode : public AGameMode
{
public:
	int                                                BufferSizePerChunk;                                       // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x64];                                      // 0x0304(0x0064) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARSharedWorldGameMode");
		return ptr;
	}


	void SetPreviewImageData(TArray<unsigned char> ImageData);
	void SetARWorldSharingIsReady();
	void SetARSharedWorldData(TArray<unsigned char> ARWorldData);
	class AARSharedWorldGameState* GetARSharedWorldGameState();
};


// Class AugmentedReality.ARSharedWorldGameState
// 0x0038 (0x02B0 - 0x0278)
class AARSharedWorldGameState : public AGameState
{
public:
	TArray<unsigned char>                              PreviewImageData;                                         // 0x0278(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              ARWorldData;                                              // 0x0288(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                PreviewImageBytesTotal;                                   // 0x0298(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ARWorldBytesTotal;                                        // 0x029C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PreviewImageBytesDelivered;                               // 0x02A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ARWorldBytesDelivered;                                    // 0x02A4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARSharedWorldGameState");
		return ptr;
	}


	void K2_OnARWorldMapIsReady();
};


// Class AugmentedReality.ARSharedWorldPlayerController
// 0x0008 (0x0570 - 0x0568)
class AARSharedWorldPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0568(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARSharedWorldPlayerController");
		return ptr;
	}


	void ServerMarkReadyForReceiving();
	void ClientUpdatePreviewImageData(int Offset, TArray<unsigned char> Buffer);
	void ClientUpdateARWorldData(int Offset, TArray<unsigned char> Buffer);
	void ClientInitSharedWorld(int PreviewImageSize, int ARWorldDataSize);
};


// Class AugmentedReality.ARSkyLight
// 0x0010 (0x0238 - 0x0228)
class AARSkyLight : public ASkyLight
{
public:
	class UAREnvironmentCaptureProbe*                  CaptureProbe;                                             // 0x0228(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0230(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARSkyLight");
		return ptr;
	}


	void SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe);
};


// Class AugmentedReality.ARTexture
// 0x0020 (0x00F8 - 0x00D8)
class UARTexture : public UTexture
{
public:
	EARTextureType                                     TextureType;                                              // 0x00D8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	float                                              Timestamp;                                                // 0x00DC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ExternalTextureGuid;                                      // 0x00E0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Size;                                                     // 0x00F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTexture");
		return ptr;
	}

};


// Class AugmentedReality.ARTextureCameraImage
// 0x0000 (0x00F8 - 0x00F8)
class UARTextureCameraImage : public UARTexture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTextureCameraImage");
		return ptr;
	}

};


// Class AugmentedReality.ARTextureCameraDepth
// 0x0008 (0x0100 - 0x00F8)
class UARTextureCameraDepth : public UARTexture
{
public:
	EARDepthQuality                                    DepthQuality;                                             // 0x00F8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EARDepthAccuracy                                   DepthAccuracy;                                            // 0x00F9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsTemporallySmoothed;                                    // 0x00FA(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5];                                       // 0x00FB(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTextureCameraDepth");
		return ptr;
	}

};


// Class AugmentedReality.AREnvironmentCaptureProbeTexture
// 0x0020 (0x0150 - 0x0130)
class UAREnvironmentCaptureProbeTexture : public UTextureCube
{
public:
	EARTextureType                                     TextureType;                                              // 0x0130(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	float                                              Timestamp;                                                // 0x0134(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ExternalTextureGuid;                                      // 0x0138(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Size;                                                     // 0x0148(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.AREnvironmentCaptureProbeTexture");
		return ptr;
	}

};


// Class AugmentedReality.ARTraceResultDummy
// 0x0000 (0x0028 - 0x0028)
class UARTraceResultDummy : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTraceResultDummy");
		return ptr;
	}

};


// Class AugmentedReality.ARTrackedGeometry
// 0x00A8 (0x00D0 - 0x0028)
class UARTrackedGeometry : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FTransform                                  LocalToTrackingTransform;                                 // 0x0030(0x0030) (IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FTransform                                  LocalToAlignedTrackingTransform;                          // 0x0060(0x0030) (IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	EARTrackingState                                   TrackingState;                                            // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3F];                                      // 0x0091(0x003F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTrackedGeometry");
		return ptr;
	}


	bool IsTracked();
	EARTrackingState GetTrackingState();
	struct FTransform GetLocalToWorldTransform();
	struct FTransform GetLocalToTrackingTransform();
	float GetLastUpdateTimestamp();
	int GetLastUpdateFrameNumber();
	struct FName GetDebugName();
};


// Class AugmentedReality.ARPlaneGeometry
// 0x0030 (0x0100 - 0x00D0)
class UARPlaneGeometry : public UARTrackedGeometry
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D0(0x0004) MISSED OFFSET
	struct FVector                                     Extent;                                                   // 0x00D4(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00E0(0x0010) MISSED OFFSET
	class UARPlaneGeometry*                            SubsumedBy;                                               // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARPlaneGeometry");
		return ptr;
	}


	class UARPlaneGeometry* GetSubsumedBy();
	struct FVector GetExtent();
	struct FVector GetCenter();
	TArray<struct FVector> GetBoundaryPolygonInLocalSpace();
};


// Class AugmentedReality.ARTrackedPoint
// 0x0000 (0x00D0 - 0x00D0)
class UARTrackedPoint : public UARTrackedGeometry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTrackedPoint");
		return ptr;
	}

};


// Class AugmentedReality.ARTrackedImage
// 0x0010 (0x00E0 - 0x00D0)
class UARTrackedImage : public UARTrackedGeometry
{
public:
	class UARCandidateImage*                           DetectedImage;                                            // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                                   EstimatedSize;                                            // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTrackedImage");
		return ptr;
	}


	struct FVector2D GetEstimateSize();
	class UARCandidateImage* GetDetectedImage();
};


// Class AugmentedReality.ARFaceGeometry
// 0x00F0 (0x01C0 - 0x00D0)
class UARFaceGeometry : public UARTrackedGeometry
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D0(0x0004) MISSED OFFSET
	bool                                               bIsTracked;                                               // 0x00D4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00D5(0x0003) MISSED OFFSET
	TMap<EARFaceBlendShape, float>                     BlendShapes;                                              // 0x00D8(0x0050) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x98];                                      // 0x0128(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARFaceGeometry");
		return ptr;
	}


	struct FTransform GetWorldSpaceEyeTransform(EAREye Eye);
	struct FTransform GetLocalSpaceEyeTransform(EAREye Eye);
	float GetBlendShapeValue(EARFaceBlendShape BlendShape);
	TMap<EARFaceBlendShape, float> GetBlendShapes();
};


// Class AugmentedReality.AREnvironmentCaptureProbe
// 0x0010 (0x00E0 - 0x00D0)
class UAREnvironmentCaptureProbe : public UARTrackedGeometry
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	class UAREnvironmentCaptureProbeTexture*           EnvironmentCaptureTexture;                                // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.AREnvironmentCaptureProbe");
		return ptr;
	}


	struct FVector GetExtent();
	class UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();
};


// Class AugmentedReality.ARTrackedObject
// 0x0000 (0x00D0 - 0x00D0)
class UARTrackedObject : public UARTrackedGeometry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTrackedObject");
		return ptr;
	}


	class UARCandidateObject* GetDetectedObject();
};


// Class AugmentedReality.ARTypesDummyClass
// 0x0000 (0x0028 - 0x0028)
class UARTypesDummyClass : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTypesDummyClass");
		return ptr;
	}

};


// Class AugmentedReality.ARCandidateImage
// 0x0028 (0x0058 - 0x0030)
class UARCandidateImage : public UDataAsset
{
public:
	class UTexture2D*                                  CandidateTexture;                                         // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     FriendlyName;                                             // 0x0038(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              Width;                                                    // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              Height;                                                   // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	EARCandidateImageOrientation                       Orientation;                                              // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARCandidateImage");
		return ptr;
	}


	float GetPhysicalWidth();
	float GetPhysicalHeight();
	EARCandidateImageOrientation GetOrientation();
	struct FString GetFriendlyName();
	class UTexture2D* GetCandidateTexture();
};


// Class AugmentedReality.ARCandidateObject
// 0x0040 (0x0070 - 0x0030)
class UARCandidateObject : public UDataAsset
{
public:
	TArray<unsigned char>                              CandidateObjectData;                                      // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FString                                     FriendlyName;                                             // 0x0040(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FBox                                        BoundingBox;                                              // 0x0050(0x001C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARCandidateObject");
		return ptr;
	}


	void SetCandidateObjectData(TArray<unsigned char> InCandidateObject);
	void SetBoundingBox(struct FBox InBoundingBox);
	struct FString GetFriendlyName();
	TArray<unsigned char> GetCandidateObjectData();
	struct FBox GetBoundingBox();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
