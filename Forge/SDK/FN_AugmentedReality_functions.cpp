// Fortnite (11.00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AugmentedReality.ARBlueprintLibrary.UnpinComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         ComponentToUnpin               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARBlueprintLibrary::UnpinComponent(class USceneComponent* ComponentToUnpin)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.UnpinComponent");

	UARBlueprintLibrary_UnpinComponent_Params params;
	params.ComponentToUnpin = ComponentToUnpin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARBlueprintLibrary.StopARSession
// (Final, Native, Static, Public, BlueprintCallable)

void UARBlueprintLibrary::StopARSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.StopARSession");

	UARBlueprintLibrary_StopARSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARBlueprintLibrary.StartARSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARSessionConfig*        SessionConfig                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARBlueprintLibrary::StartARSession(class UARSessionConfig* SessionConfig)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.StartARSession");

	UARBlueprintLibrary_StartARSession_Params params;
	params.SessionConfig = SessionConfig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              InAlignmentTransform           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UARBlueprintLibrary::SetAlignmentTransform(struct FTransform InAlignmentTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform");

	UARBlueprintLibrary_SetAlignmentTransform_Params params;
	params.InAlignmentTransform = InAlignmentTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARBlueprintLibrary.RemovePin
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARPin*                  PinToRemove                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARBlueprintLibrary::RemovePin(class UARPin* PinToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.RemovePin");

	UARBlueprintLibrary_RemovePin_Params params;
	params.PinToRemove = PinToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class USceneComponent*         ComponentToPin                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FARTraceResult          TraceResult                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FName                   DebugName                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UARPin*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UARPin* UARBlueprintLibrary::PinComponentToTraceResult(class USceneComponent* ComponentToPin, struct FARTraceResult TraceResult, struct FName DebugName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult");

	UARBlueprintLibrary_PinComponentToTraceResult_Params params;
	params.ComponentToPin = ComponentToPin;
	params.TraceResult = TraceResult;
	params.DebugName = DebugName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.PinComponent
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*         ComponentToPin                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              PinToWorldTransform            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UARTrackedGeometry*      TrackedGeometry                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   DebugName                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UARPin*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UARPin* UARBlueprintLibrary::PinComponent(class USceneComponent* ComponentToPin, struct FTransform PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, struct FName DebugName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PinComponent");

	UARBlueprintLibrary_PinComponent_Params params;
	params.ComponentToPin = ComponentToPin;
	params.PinToWorldTransform = PinToWorldTransform;
	params.TrackedGeometry = TrackedGeometry;
	params.DebugName = DebugName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.PauseARSession
// (Final, Native, Static, Public, BlueprintCallable)

void UARBlueprintLibrary::PauseARSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PauseARSession");

	UARBlueprintLibrary_PauseARSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Start                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 End                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bTestFeaturePoints             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bTestGroundPlane               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bTestPlaneExtents              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bTestPlaneBoundaryPolygon      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FARTraceResult>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FARTraceResult> UARBlueprintLibrary::LineTraceTrackedObjects3D(struct FVector Start, struct FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D");

	UARBlueprintLibrary_LineTraceTrackedObjects3D_Params params;
	params.Start = Start;
	params.End = End;
	params.bTestFeaturePoints = bTestFeaturePoints;
	params.bTestGroundPlane = bTestGroundPlane;
	params.bTestPlaneExtents = bTestPlaneExtents;
	params.bTestPlaneBoundaryPolygon = bTestPlaneBoundaryPolygon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               ScreenCoord                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bTestFeaturePoints             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bTestGroundPlane               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bTestPlaneExtents              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bTestPlaneBoundaryPolygon      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FARTraceResult>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FARTraceResult> UARBlueprintLibrary::LineTraceTrackedObjects(struct FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects");

	UARBlueprintLibrary_LineTraceTrackedObjects_Params params;
	params.ScreenCoord = ScreenCoord;
	params.bTestFeaturePoints = bTestFeaturePoints;
	params.bTestGroundPlane = bTestGroundPlane;
	params.bTestPlaneExtents = bTestPlaneExtents;
	params.bTestPlaneBoundaryPolygon = bTestPlaneBoundaryPolygon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EARSessionType                 SessionType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UARBlueprintLibrary::IsSessionTypeSupported(EARSessionType SessionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported");

	UARBlueprintLibrary_IsSessionTypeSupported_Params params;
	params.SessionType = SessionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.IsARSupported
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UARBlueprintLibrary::IsARSupported()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsARSupported");

	UARBlueprintLibrary_IsARSupported_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EARWorldMappingState           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EARWorldMappingState UARBlueprintLibrary::GetWorldMappingStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus");

	UARBlueprintLibrary_GetWorldMappingStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EARTrackingQualityReason       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EARTrackingQualityReason UARBlueprintLibrary::GetTrackingQualityReason()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason");

	UARBlueprintLibrary_GetTrackingQualityReason_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EARTrackingQuality             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EARTrackingQuality UARBlueprintLibrary::GetTrackingQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality");

	UARBlueprintLibrary_GetTrackingQuality_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EARSessionType                 SessionType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FARVideoFormat>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FARVideoFormat> UARBlueprintLibrary::GetSupportedVideoFormats(EARSessionType SessionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats");

	UARBlueprintLibrary_GetSupportedVideoFormats_Params params;
	params.SessionType = SessionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UARSessionConfig*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UARSessionConfig* UARBlueprintLibrary::GetSessionConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig");

	UARBlueprintLibrary_GetSessionConfig_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetPointCloud
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVector> UARBlueprintLibrary::GetPointCloud()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetPointCloud");

	UARBlueprintLibrary_GetPointCloud_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UARLightEstimate*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UARLightEstimate* UARBlueprintLibrary::GetCurrentLightEstimate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate");

	UARBlueprintLibrary_GetCurrentLightEstimate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetCameraImage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARTextureCameraImage*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UARTextureCameraImage* UARBlueprintLibrary::GetCameraImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCameraImage");

	UARBlueprintLibrary_GetCameraImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARTextureCameraDepth*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UARTextureCameraDepth* UARBlueprintLibrary::GetCameraDepth()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth");

	UARBlueprintLibrary_GetCameraDepth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARSessionStatus        ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FARSessionStatus UARBlueprintLibrary::GetARSessionStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus");

	UARBlueprintLibrary_GetARSessionStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UARTrackedPoint*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UARTrackedPoint*> UARBlueprintLibrary::GetAllTrackedPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints");

	UARBlueprintLibrary_GetAllTrackedPoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UARPlaneGeometry*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UARPlaneGeometry*> UARBlueprintLibrary::GetAllTrackedPlanes()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes");

	UARBlueprintLibrary_GetAllTrackedPlanes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UARTrackedImage*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UARTrackedImage*> UARBlueprintLibrary::GetAllTrackedImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages");

	UARBlueprintLibrary_GetAllTrackedImages_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UAREnvironmentCaptureProbe*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UAREnvironmentCaptureProbe*> UARBlueprintLibrary::GetAllTrackedEnvironmentCaptureProbes()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes");

	UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAllPins
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UARPin*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UARPin*> UARBlueprintLibrary::GetAllPins()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllPins");

	UARBlueprintLibrary_GetAllPins_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class UARTrackedGeometry*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UARTrackedGeometry*> UARBlueprintLibrary::GetAllGeometries()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries");

	UARBlueprintLibrary_GetAllGeometries_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UARTrackedGeometry*      TrackedGeometry                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OutlineThickness               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PersistForSeconds              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARBlueprintLibrary::DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, struct FLinearColor Color, float OutlineThickness, float PersistForSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry");

	UARBlueprintLibrary_DebugDrawTrackedGeometry_Params params;
	params.TrackedGeometry = TrackedGeometry;
	params.WorldContextObject = WorldContextObject;
	params.Color = Color;
	params.OutlineThickness = OutlineThickness;
	params.PersistForSeconds = PersistForSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UARPin*                  ARPin                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PersistForSeconds              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARBlueprintLibrary::DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, struct FLinearColor Color, float Scale, float PersistForSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin");

	UARBlueprintLibrary_DebugDrawPin_Params params;
	params.ARPin = ARPin;
	params.WorldContextObject = WorldContextObject;
	params.Color = Color;
	params.Scale = Scale;
	params.PersistForSeconds = PersistForSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UARSessionConfig*        SessionConfig                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*              CandidateTexture               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 FriendlyName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PhysicalWidth                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UARCandidateImage*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UARCandidateImage* UARBlueprintLibrary::AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, struct FString FriendlyName, float PhysicalWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage");

	UARBlueprintLibrary_AddRuntimeCandidateImage_Params params;
	params.SessionConfig = SessionConfig;
	params.CandidateTexture = CandidateTexture;
	params.FriendlyName = FriendlyName;
	params.PhysicalWidth = PhysicalWidth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Extent                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UARBlueprintLibrary::AddManualEnvironmentCaptureProbe(struct FVector Location, struct FVector Extent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe");

	UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Params params;
	params.Location = Location;
	params.Extent = Extent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARTraceResult          TraceResult                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UARTrackedGeometry*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UARTrackedGeometry* UARTraceResultLibrary::GetTrackedGeometry(struct FARTraceResult TraceResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry");

	UARTraceResultLibrary_GetTrackedGeometry_Params params;
	params.TraceResult = TraceResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARTraceResult          TraceResult                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// EARLineTraceChannels           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EARLineTraceChannels UARTraceResultLibrary::GetTraceChannel(struct FARTraceResult TraceResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel");

	UARTraceResultLibrary_GetTraceChannel_Params params;
	params.TraceResult = TraceResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARTraceResult          TraceResult                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UARTraceResultLibrary::GetLocalToWorldTransform(struct FARTraceResult TraceResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform");

	UARTraceResultLibrary_GetLocalToWorldTransform_Params params;
	params.TraceResult = TraceResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARTraceResult          TraceResult                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UARTraceResultLibrary::GetLocalToTrackingTransform(struct FARTraceResult TraceResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform");

	UARTraceResultLibrary_GetLocalToTrackingTransform_Params params;
	params.TraceResult = TraceResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARTraceResult          TraceResult                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UARTraceResultLibrary::GetDistanceFromCamera(struct FARTraceResult TraceResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera");

	UARTraceResultLibrary_GetDistanceFromCamera_Params params;
	params.TraceResult = TraceResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UARSaveWorldAsyncTaskBlueprintProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UARSaveWorldAsyncTaskBlueprintProxy* UARSaveWorldAsyncTaskBlueprintProxy::ARSaveWorld(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld");

	UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Extent                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UARGetCandidateObjectAsyncTaskBlueprintProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UARGetCandidateObjectAsyncTaskBlueprintProxy* UARGetCandidateObjectAsyncTaskBlueprintProxy::ARGetCandidateObject(class UObject* WorldContextObject, struct FVector Location, struct FVector Extent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject");

	UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.Extent = Extent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UARBasicLightEstimate::GetAmbientIntensityLumens()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens");

	UARBasicLightEstimate_GetAmbientIntensityLumens_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UARBasicLightEstimate::GetAmbientColorTemperatureKelvin()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin");

	UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UARBasicLightEstimate::GetAmbientColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor");

	UARBasicLightEstimate_GetAmbientColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetTrackingState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EARTrackingState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EARTrackingState UARPin::GetTrackingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetTrackingState");

	UARPin_GetTrackingState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetTrackedGeometry
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UARTrackedGeometry*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UARTrackedGeometry* UARPin::GetTrackedGeometry()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetTrackedGeometry");

	UARPin_GetTrackedGeometry_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetPinnedComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USceneComponent* UARPin::GetPinnedComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetPinnedComponent");

	UARPin_GetPinnedComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetLocalToWorldTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UARPin::GetLocalToWorldTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetLocalToWorldTransform");

	UARPin_GetLocalToWorldTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetLocalToTrackingTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UARPin::GetLocalToTrackingTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetLocalToTrackingTransform");

	UARPin_GetLocalToTrackingTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.GetDebugName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FName UARPin::GetDebugName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetDebugName");

	UARPin_GetDebugName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPin.DebugDraw
// (Native, Public, HasOutParms, HasDefaults, Const)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            Color                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PersistForSeconds              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARPin::DebugDraw(class UWorld* World, struct FLinearColor Color, float Scale, float PersistForSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.DebugDraw");

	UARPin_DebugDraw_Params params;
	params.World = World;
	params.Color = Color;
	params.Scale = Scale;
	params.PersistForSeconds = PersistForSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UARSessionConfig::ShouldResetTrackedObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects");

	UARSessionConfig_ShouldResetTrackedObjects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UARSessionConfig::ShouldResetCameraTracking()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking");

	UARSessionConfig_ShouldResetCameraTracking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UARSessionConfig::ShouldRenderCameraOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay");

	UARSessionConfig_ShouldRenderCameraOverlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UARSessionConfig::ShouldEnableCameraTracking()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking");

	UARSessionConfig_ShouldEnableCameraTracking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UARSessionConfig::ShouldEnableAutoFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus");

	UARSessionConfig_ShouldEnableAutoFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.SetWorldMapData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          WorldMapData                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UARSessionConfig::SetWorldMapData(TArray<unsigned char> WorldMapData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetWorldMapData");

	UARSessionConfig_SetWorldMapData_Params params;
	params.WorldMapData = WorldMapData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewValue                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARSessionConfig::SetResetTrackedObjects(bool bNewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects");

	UARSessionConfig_SetResetTrackedObjects_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.SetResetCameraTracking
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewValue                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARSessionConfig::SetResetCameraTracking(bool bNewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetResetCameraTracking");

	UARSessionConfig_SetResetCameraTracking_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EARFaceTrackingUpdate          InUpdate                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARSessionConfig::SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate");

	UARSessionConfig_SetFaceTrackingUpdate_Params params;
	params.InUpdate = InUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EARFaceTrackingDirection       InDirection                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARSessionConfig::SetFaceTrackingDirection(EARFaceTrackingDirection InDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection");

	UARSessionConfig_SetFaceTrackingDirection_Params params;
	params.InDirection = InDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewValue                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARSessionConfig::SetEnableAutoFocus(bool bNewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus");

	UARSessionConfig_SetEnableAutoFocus_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FARVideoFormat          NewFormat                      (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UARSessionConfig::SetDesiredVideoFormat(struct FARVideoFormat NewFormat)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat");

	UARSessionConfig_SetDesiredVideoFormat_Params params;
	params.NewFormat = NewFormat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.SetCandidateObjectList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UARCandidateObject*> InCandidateObjects             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UARSessionConfig::SetCandidateObjectList(TArray<class UARCandidateObject*> InCandidateObjects)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetCandidateObjectList");

	UARSessionConfig_SetCandidateObjectList_Params params;
	params.InCandidateObjects = InCandidateObjects;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.GetWorldMapData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<unsigned char>          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<unsigned char> UARSessionConfig::GetWorldMapData()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetWorldMapData");

	UARSessionConfig_GetWorldMapData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetWorldAlignment
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EARWorldAlignment              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EARWorldAlignment UARSessionConfig::GetWorldAlignment()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetWorldAlignment");

	UARSessionConfig_GetWorldAlignment_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetSessionType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EARSessionType                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EARSessionType UARSessionConfig::GetSessionType()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetSessionType");

	UARSessionConfig_GetSessionType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EARPlaneDetectionMode          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EARPlaneDetectionMode UARSessionConfig::GetPlaneDetectionMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode");

	UARSessionConfig_GetPlaneDetectionMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int UARSessionConfig::GetMaxNumSimultaneousImagesTracked()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked");

	UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetLightEstimationMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EARLightEstimationMode         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EARLightEstimationMode UARSessionConfig::GetLightEstimationMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetLightEstimationMode");

	UARSessionConfig_GetLightEstimationMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetFrameSyncMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EARFrameSyncMode               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EARFrameSyncMode UARSessionConfig::GetFrameSyncMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFrameSyncMode");

	UARSessionConfig_GetFrameSyncMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EARFaceTrackingUpdate          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EARFaceTrackingUpdate UARSessionConfig::GetFaceTrackingUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate");

	UARSessionConfig_GetFaceTrackingUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EARFaceTrackingDirection       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EARFaceTrackingDirection UARSessionConfig::GetFaceTrackingDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection");

	UARSessionConfig_GetFaceTrackingDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EAREnvironmentCaptureProbeType ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EAREnvironmentCaptureProbeType UARSessionConfig::GetEnvironmentCaptureProbeType()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType");

	UARSessionConfig_GetEnvironmentCaptureProbeType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FARVideoFormat          ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FARVideoFormat UARSessionConfig::GetDesiredVideoFormat()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat");

	UARSessionConfig_GetDesiredVideoFormat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetCandidateObjectList
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UARCandidateObject*> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class UARCandidateObject*> UARSessionConfig::GetCandidateObjectList()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetCandidateObjectList");

	UARSessionConfig_GetCandidateObjectList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.GetCandidateImageList
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UARCandidateImage*> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class UARCandidateImage*> UARSessionConfig::GetCandidateImageList()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetCandidateImageList");

	UARSessionConfig_GetCandidateImageList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSessionConfig.AddCandidateObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UARCandidateObject*      CandidateObject                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARSessionConfig::AddCandidateObject(class UARCandidateObject* CandidateObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.AddCandidateObject");

	UARSessionConfig_AddCandidateObject_Params params;
	params.CandidateObject = CandidateObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSessionConfig.AddCandidateImage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UARCandidateImage*       NewCandidateImage              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARSessionConfig::AddCandidateImage(class UARCandidateImage* NewCandidateImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.AddCandidateImage");

	UARSessionConfig_AddCandidateImage_Params params;
	params.NewCandidateImage = NewCandidateImage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          ImageData                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void AARSharedWorldGameMode::SetPreviewImageData(TArray<unsigned char> ImageData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData");

	AARSharedWorldGameMode_SetPreviewImageData_Params params;
	params.ImageData = ImageData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void AARSharedWorldGameMode::SetARWorldSharingIsReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady");

	AARSharedWorldGameMode_SetARWorldSharingIsReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          ARWorldData                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void AARSharedWorldGameMode::SetARSharedWorldData(TArray<unsigned char> ARWorldData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData");

	AARSharedWorldGameMode_SetARSharedWorldData_Params params;
	params.ARWorldData = ARWorldData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AARSharedWorldGameState* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AARSharedWorldGameState* AARSharedWorldGameMode::GetARSharedWorldGameState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState");

	AARSharedWorldGameMode_GetARSharedWorldGameState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
// (Event, Public, BlueprintEvent)

void AARSharedWorldGameState::K2_OnARWorldMapIsReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady");

	AARSharedWorldGameState_K2_OnARWorldMapIsReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AARSharedWorldPlayerController::ServerMarkReadyForReceiving()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving");

	AARSharedWorldPlayerController_ServerMarkReadyForReceiving_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          Buffer                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void AARSharedWorldPlayerController::ClientUpdatePreviewImageData(int Offset, TArray<unsigned char> Buffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData");

	AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Params params;
	params.Offset = Offset;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// int                            Offset                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<unsigned char>          Buffer                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void AARSharedWorldPlayerController::ClientUpdateARWorldData(int Offset, TArray<unsigned char> Buffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData");

	AARSharedWorldPlayerController_ClientUpdateARWorldData_Params params;
	params.Offset = Offset;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// int                            PreviewImageSize               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ARWorldDataSize                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AARSharedWorldPlayerController::ClientInitSharedWorld(int PreviewImageSize, int ARWorldDataSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld");

	AARSharedWorldPlayerController_ClientInitSharedWorld_Params params;
	params.PreviewImageSize = PreviewImageSize;
	params.ARWorldDataSize = ARWorldDataSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAREnvironmentCaptureProbe* InCaptureProbe                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AARSkyLight::SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe");

	AARSkyLight_SetEnvironmentCaptureProbe_Params params;
	params.InCaptureProbe = InCaptureProbe;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARTrackedGeometry.IsTracked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UARTrackedGeometry::IsTracked()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.IsTracked");

	UARTrackedGeometry_IsTracked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetTrackingState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EARTrackingState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EARTrackingState UARTrackedGeometry::GetTrackingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetTrackingState");

	UARTrackedGeometry_GetTrackingState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UARTrackedGeometry::GetLocalToWorldTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform");

	UARTrackedGeometry_GetLocalToWorldTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UARTrackedGeometry::GetLocalToTrackingTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform");

	UARTrackedGeometry_GetLocalToTrackingTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UARTrackedGeometry::GetLastUpdateTimestamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp");

	UARTrackedGeometry_GetLastUpdateTimestamp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int UARTrackedGeometry::GetLastUpdateFrameNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber");

	UARTrackedGeometry_GetLastUpdateFrameNumber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedGeometry.GetDebugName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FName UARTrackedGeometry::GetDebugName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetDebugName");

	UARTrackedGeometry_GetDebugName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UARPlaneGeometry*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UARPlaneGeometry* UARPlaneGeometry::GetSubsumedBy()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy");

	UARPlaneGeometry_GetSubsumedBy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPlaneGeometry.GetExtent
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UARPlaneGeometry::GetExtent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetExtent");

	UARPlaneGeometry_GetExtent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPlaneGeometry.GetCenter
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UARPlaneGeometry::GetCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetCenter");

	UARPlaneGeometry_GetCenter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVector> UARPlaneGeometry::GetBoundaryPolygonInLocalSpace()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace");

	UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedImage.GetEstimateSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UARTrackedImage::GetEstimateSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedImage.GetEstimateSize");

	UARTrackedImage_GetEstimateSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedImage.GetDetectedImage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UARCandidateImage*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UARCandidateImage* UARTrackedImage::GetDetectedImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedImage.GetDetectedImage");

	UARTrackedImage_GetDetectedImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EAREye                         Eye                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UARFaceGeometry::GetWorldSpaceEyeTransform(EAREye Eye)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform");

	UARFaceGeometry_GetWorldSpaceEyeTransform_Params params;
	params.Eye = Eye;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EAREye                         Eye                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UARFaceGeometry::GetLocalSpaceEyeTransform(EAREye Eye)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform");

	UARFaceGeometry_GetLocalSpaceEyeTransform_Params params;
	params.Eye = Eye;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EARFaceBlendShape              BlendShape                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UARFaceGeometry::GetBlendShapeValue(EARFaceBlendShape BlendShape)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue");

	UARFaceGeometry_GetBlendShapeValue_Params params;
	params.BlendShape = BlendShape;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARFaceGeometry.GetBlendShapes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<EARFaceBlendShape, float> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TMap<EARFaceBlendShape, float> UARFaceGeometry::GetBlendShapes()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetBlendShapes");

	UARFaceGeometry_GetBlendShapes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UAREnvironmentCaptureProbe::GetExtent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent");

	UAREnvironmentCaptureProbe_GetExtent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAREnvironmentCaptureProbeTexture* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAREnvironmentCaptureProbeTexture* UAREnvironmentCaptureProbe::GetEnvironmentCaptureTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture");

	UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARTrackedObject.GetDetectedObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UARCandidateObject*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UARCandidateObject* UARTrackedObject::GetDetectedObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedObject.GetDetectedObject");

	UARTrackedObject_GetDetectedObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateImage.GetPhysicalWidth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UARCandidateImage::GetPhysicalWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetPhysicalWidth");

	UARCandidateImage_GetPhysicalWidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateImage.GetPhysicalHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UARCandidateImage::GetPhysicalHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetPhysicalHeight");

	UARCandidateImage_GetPhysicalHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateImage.GetOrientation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EARCandidateImageOrientation   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

EARCandidateImageOrientation UARCandidateImage::GetOrientation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetOrientation");

	UARCandidateImage_GetOrientation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateImage.GetFriendlyName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FString UARCandidateImage::GetFriendlyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetFriendlyName");

	UARCandidateImage_GetFriendlyName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateImage.GetCandidateTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UARCandidateImage::GetCandidateTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetCandidateTexture");

	UARCandidateImage_GetCandidateTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateObject.SetCandidateObjectData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<unsigned char>          InCandidateObject              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UARCandidateObject::SetCandidateObjectData(TArray<unsigned char> InCandidateObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetCandidateObjectData");

	UARCandidateObject_SetCandidateObjectData_Params params;
	params.InCandidateObject = InCandidateObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARCandidateObject.SetBoundingBox
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBox                    InBoundingBox                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UARCandidateObject::SetBoundingBox(struct FBox InBoundingBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetBoundingBox");

	UARCandidateObject_SetBoundingBox_Params params;
	params.InBoundingBox = InBoundingBox;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AugmentedReality.ARCandidateObject.GetFriendlyName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FString UARCandidateObject::GetFriendlyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetFriendlyName");

	UARCandidateObject_GetFriendlyName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateObject.GetCandidateObjectData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<unsigned char>          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<unsigned char> UARCandidateObject::GetCandidateObjectData()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetCandidateObjectData");

	UARCandidateObject_GetCandidateObjectData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AugmentedReality.ARCandidateObject.GetBoundingBox
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox                    ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FBox UARCandidateObject::GetBoundingBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetBoundingBox");

	UARCandidateObject_GetBoundingBox_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
