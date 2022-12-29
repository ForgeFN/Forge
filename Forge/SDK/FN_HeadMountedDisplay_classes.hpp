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

// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary");
		return ptr;
	}


	static void UpdateExternalTrackingHMDPosition(struct FTransform ExternalTrackingTransform);
	static void SetWorldToMetersScale(class UObject* WorldContext, float NewScale);
	static void SetTrackingOrigin(TEnumAsByte<EHMDTrackingOrigin> Origin);
	static void SetSpectatorScreenTexture(class UTexture* InTexture);
	static void SetSpectatorScreenModeTexturePlusEyeLayout(struct FVector2D EyeRectMin, struct FVector2D EyeRectMax, struct FVector2D TextureRectMin, struct FVector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha);
	static void SetSpectatorScreenMode(ESpectatorScreenMode Mode);
	static void SetClippingPlanes(float Near, float Far);
	static void ResetOrientationAndPosition(float Yaw, TEnumAsByte<EOrientPositionSelector> Options);
	static bool IsSpectatorScreenModeControllable();
	static bool IsInLowPersistenceMode();
	static bool IsHeadMountedDisplayEnabled();
	static bool IsHeadMountedDisplayConnected();
	static bool IsDeviceTracking(struct FXRDeviceId XRDeviceId);
	static bool HasValidTrackingPosition();
	static float GetWorldToMetersScale(class UObject* WorldContext);
	static void GetVRFocusState(bool* bUseFocus, bool* bHasFocus);
	static struct FTransform GetTrackingToWorldTransform(class UObject* WorldContext);
	static void GetTrackingSensorParameters(int Index, struct FVector* Origin, struct FRotator* Rotation, float* LeftFOV, float* RightFOV, float* TopFOV, float* BottomFOV, float* Distance, float* NearPlane, float* FarPlane, bool* IsActive);
	static TEnumAsByte<EHMDTrackingOrigin> GetTrackingOrigin();
	static float GetScreenPercentage();
	static void GetPositionalTrackingCameraParameters(struct FVector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane);
	static float GetPixelDensity();
	static void GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition);
	static int GetNumOfTrackingSensors();
	static TEnumAsByte<EHMDWornState> GetHMDWornState();
	static struct FName GetHMDDeviceName();
	static void GetDeviceWorldPose(class UObject* WorldContext, struct FXRDeviceId XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position);
	static void GetDevicePose(struct FXRDeviceId XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position);
	static TArray<struct FXRDeviceId> EnumerateTrackedDevices(struct FName SystemId, EXRTrackedDeviceType DeviceType);
	static void EnableLowPersistenceMode(bool bEnable);
	static bool EnableHMD(bool bEnable);
	static void CalibrateExternalTrackingToHMD(struct FTransform ExternalTrackingTransform);
};


// Class HeadMountedDisplay.MotionControllerComponent
// 0x00C0 (0x0480 - 0x03C0)
class UMotionControllerComponent : public UPrimitiveComponent
{
public:
	int                                                PlayerIndex;                                              // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EControllerHand                                    Hand;                                                     // 0x03C4(0x0001) (BlueprintVisible, ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03C5(0x0003) MISSED OFFSET
	struct FName                                       MotionSource;                                             // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDisableLowLatencyUpdate : 1;                             // 0x03D0(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03D1(0x0003) MISSED OFFSET
	ETrackingStatus                                    CurrentTrackingStatus;                                    // 0x03D4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisplayDeviceModel;                                      // 0x03D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x2];                                       // 0x03D6(0x0002) MISSED OFFSET
	struct FName                                       DisplayModelSource;                                       // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 CustomDisplayMesh;                                        // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>                  DisplayMeshMaterialOverrides;                             // 0x03E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x68];                                      // 0x03F8(0x0068) MISSED OFFSET
	class UPrimitiveComponent*                         DisplayComponent;                                         // 0x0460(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData04[0x18];                                      // 0x0468(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.MotionControllerComponent");
		return ptr;
	}


	void SetTrackingSource(EControllerHand NewSource);
	void SetTrackingMotionSource(struct FName NewSource);
	void SetShowDeviceModel(bool bShowControllerModel);
	void SetDisplayModelSource(struct FName NewDisplayModelSource);
	void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);
	void SetAssociatedPlayerIndex(int NewPlayer);
	void OnMotionControllerUpdated();
	bool IsTracked();
	EControllerHand GetTrackingSource();
	float GetParameterValue(struct FName InName, bool* bValueFound);
};


// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary");
		return ptr;
	}


	static void SetIsControllerMotionTrackingEnabledByDefault(bool Enable);
	static bool IsMotionTrackingEnabledForSource(int PlayerIndex, struct FName SourceName);
	static bool IsMotionTrackingEnabledForDevice(int PlayerIndex, EControllerHand Hand);
	static bool IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* MotionControllerComponent);
	static bool IsMotionTrackedDeviceCountManagementNecessary();
	static bool IsMotionSourceTracking(int PlayerIndex, struct FName SourceName);
	static int GetMotionTrackingEnabledControllerCount();
	static int GetMaximumMotionTrackedControllerCount();
	static struct FName GetActiveTrackingSystemName();
	static TArray<struct FName> EnumerateMotionSources();
	static bool EnableMotionTrackingOfSource(int PlayerIndex, struct FName SourceName);
	static bool EnableMotionTrackingOfDevice(int PlayerIndex, EControllerHand Hand);
	static bool EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
	static void DisableMotionTrackingOfSource(int PlayerIndex, struct FName SourceName);
	static void DisableMotionTrackingOfDevice(int PlayerIndex, EControllerHand Hand);
	static void DisableMotionTrackingOfControllersForPlayer(int PlayerIndex);
	static void DisableMotionTrackingOfAllControllers();
	static void DisableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
};


// Class HeadMountedDisplay.VRNotificationsComponent
// 0x0090 (0x0140 - 0x00B0)
class UVRNotificationsComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HeadMountedDisplay.VRNotificationsComponent.HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate
	unsigned char                                      UnknownData01[0x10];                                      // 0x00C0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HeadMountedDisplay.VRNotificationsComponent.HMDTrackingInitializedDelegate
	unsigned char                                      UnknownData02[0x10];                                      // 0x00D0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HeadMountedDisplay.VRNotificationsComponent.HMDRecenteredDelegate
	unsigned char                                      UnknownData03[0x10];                                      // 0x00E0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HeadMountedDisplay.VRNotificationsComponent.HMDLostDelegate
	unsigned char                                      UnknownData04[0x10];                                      // 0x00F0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HeadMountedDisplay.VRNotificationsComponent.HMDReconnectedDelegate
	unsigned char                                      UnknownData05[0x10];                                      // 0x0100(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HeadMountedDisplay.VRNotificationsComponent.HMDConnectCanceledDelegate
	unsigned char                                      UnknownData06[0x10];                                      // 0x0110(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HeadMountedDisplay.VRNotificationsComponent.HMDPutOnHeadDelegate
	unsigned char                                      UnknownData07[0x10];                                      // 0x0120(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HeadMountedDisplay.VRNotificationsComponent.HMDRemovedFromHeadDelegate
	unsigned char                                      UnknownData08[0x10];                                      // 0x0130(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HeadMountedDisplay.VRNotificationsComponent.VRControllerRecenteredDelegate

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.VRNotificationsComponent");
		return ptr;
	}

};


// Class HeadMountedDisplay.XRAssetFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.XRAssetFunctionLibrary");
		return ptr;
	}


	static class UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(class AActor* Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, struct FTransform RelativeTransform, struct FXRDeviceId* XRDeviceId);
	static class UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(class AActor* Target, struct FXRDeviceId XRDeviceId, bool bManualAttachment, struct FTransform RelativeTransform);
};


// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
// 0x0030 (0x0060 - 0x0030)
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.OnModelLoaded
	unsigned char                                      UnknownData01[0x10];                                      // 0x0040(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.OnLoadFailure
	unsigned char                                      UnknownData02[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
	class UPrimitiveComponent*                         SpawnedComponent;                                         // 0x0058(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent");
		return ptr;
	}


	static class UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(class AActor* Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, struct FTransform RelativeTransform, struct FXRDeviceId* XRDeviceId, class UPrimitiveComponent** NewComponent);
	static class UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(class AActor* Target, struct FXRDeviceId XRDeviceId, bool bManualAttachment, struct FTransform RelativeTransform, class UPrimitiveComponent** NewComponent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
