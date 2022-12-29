#pragma once

// Fortnite (11.00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AugmentedReality.ARBlueprintLibrary.UnpinComponent
struct UARBlueprintLibrary_UnpinComponent_Params
{
	class USceneComponent*                             ComponentToUnpin;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.StopARSession
struct UARBlueprintLibrary_StopARSession_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.StartARSession
struct UARBlueprintLibrary_StartARSession_Params
{
	class UARSessionConfig*                            SessionConfig;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
struct UARBlueprintLibrary_SetAlignmentTransform_Params
{
	struct FTransform                                  InAlignmentTransform;                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.RemovePin
struct UARBlueprintLibrary_RemovePin_Params
{
	class UARPin*                                      PinToRemove;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
struct UARBlueprintLibrary_PinComponentToTraceResult_Params
{
	class USceneComponent*                             ComponentToPin;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FARTraceResult                              TraceResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FName                                       DebugName;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UARPin*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.PinComponent
struct UARBlueprintLibrary_PinComponent_Params
{
	class USceneComponent*                             ComponentToPin;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  PinToWorldTransform;                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UARTrackedGeometry*                          TrackedGeometry;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DebugName;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UARPin*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.PauseARSession
struct UARBlueprintLibrary_PauseARSession_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D
struct UARBlueprintLibrary_LineTraceTrackedObjects3D_Params
{
	struct FVector                                     Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTestFeaturePoints;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTestGroundPlane;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTestPlaneExtents;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTestPlaneBoundaryPolygon;                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FARTraceResult>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
struct UARBlueprintLibrary_LineTraceTrackedObjects_Params
{
	struct FVector2D                                   ScreenCoord;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTestFeaturePoints;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTestGroundPlane;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTestPlaneExtents;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTestPlaneBoundaryPolygon;                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FARTraceResult>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
struct UARBlueprintLibrary_IsSessionTypeSupported_Params
{
	EARSessionType                                     SessionType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.IsARSupported
struct UARBlueprintLibrary_IsARSupported_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus
struct UARBlueprintLibrary_GetWorldMappingStatus_Params
{
	EARWorldMappingState                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason
struct UARBlueprintLibrary_GetTrackingQualityReason_Params
{
	EARTrackingQualityReason                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
struct UARBlueprintLibrary_GetTrackingQuality_Params
{
	EARTrackingQuality                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats
struct UARBlueprintLibrary_GetSupportedVideoFormats_Params
{
	EARSessionType                                     SessionType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FARVideoFormat>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig
struct UARBlueprintLibrary_GetSessionConfig_Params
{
	class UARSessionConfig*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetPointCloud
struct UARBlueprintLibrary_GetPointCloud_Params
{
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
struct UARBlueprintLibrary_GetCurrentLightEstimate_Params
{
	class UARLightEstimate*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetCameraImage
struct UARBlueprintLibrary_GetCameraImage_Params
{
	class UARTextureCameraImage*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth
struct UARBlueprintLibrary_GetCameraDepth_Params
{
	class UARTextureCameraDepth*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
struct UARBlueprintLibrary_GetARSessionStatus_Params
{
	struct FARSessionStatus                            ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints
struct UARBlueprintLibrary_GetAllTrackedPoints_Params
{
	TArray<class UARTrackedPoint*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes
struct UARBlueprintLibrary_GetAllTrackedPlanes_Params
{
	TArray<class UARPlaneGeometry*>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages
struct UARBlueprintLibrary_GetAllTrackedImages_Params
{
	TArray<class UARTrackedImage*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes
struct UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Params
{
	TArray<class UAREnvironmentCaptureProbe*>          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetAllPins
struct UARBlueprintLibrary_GetAllPins_Params
{
	TArray<class UARPin*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries
struct UARBlueprintLibrary_GetAllGeometries_Params
{
	TArray<class UARTrackedGeometry*>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
struct UARBlueprintLibrary_DebugDrawTrackedGeometry_Params
{
	class UARTrackedGeometry*                          TrackedGeometry;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutlineThickness;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PersistForSeconds;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin
struct UARBlueprintLibrary_DebugDrawPin_Params
{
	class UARPin*                                      ARPin;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PersistForSeconds;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage
struct UARBlueprintLibrary_AddRuntimeCandidateImage_Params
{
	class UARSessionConfig*                            SessionConfig;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  CandidateTexture;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FriendlyName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PhysicalWidth;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UARCandidateImage*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe
struct UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Extent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry
struct UARTraceResultLibrary_GetTrackedGeometry_Params
{
	struct FARTraceResult                              TraceResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UARTrackedGeometry*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel
struct UARTraceResultLibrary_GetTraceChannel_Params
{
	struct FARTraceResult                              TraceResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	EARLineTraceChannels                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform
struct UARTraceResultLibrary_GetLocalToWorldTransform_Params
{
	struct FARTraceResult                              TraceResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform
struct UARTraceResultLibrary_GetLocalToTrackingTransform_Params
{
	struct FARTraceResult                              TraceResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
struct UARTraceResultLibrary_GetDistanceFromCamera_Params
{
	struct FARTraceResult                              TraceResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
struct UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UARSaveWorldAsyncTaskBlueprintProxy*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
struct UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Extent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UARGetCandidateObjectAsyncTaskBlueprintProxy* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
struct UARBasicLightEstimate_GetAmbientIntensityLumens_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
struct UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor
struct UARBasicLightEstimate_GetAmbientColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPin.GetTrackingState
struct UARPin_GetTrackingState_Params
{
	EARTrackingState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPin.GetTrackedGeometry
struct UARPin_GetTrackedGeometry_Params
{
	class UARTrackedGeometry*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPin.GetPinnedComponent
struct UARPin_GetPinnedComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPin.GetLocalToWorldTransform
struct UARPin_GetLocalToWorldTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPin.GetLocalToTrackingTransform
struct UARPin_GetLocalToTrackingTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPin.GetDebugName
struct UARPin_GetDebugName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPin.DebugDraw
struct UARPin_DebugDraw_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PersistForSeconds;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
struct UARSessionConfig_ShouldResetTrackedObjects_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
struct UARSessionConfig_ShouldResetCameraTracking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
struct UARSessionConfig_ShouldRenderCameraOverlay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
struct UARSessionConfig_ShouldEnableCameraTracking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
struct UARSessionConfig_ShouldEnableAutoFocus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.SetWorldMapData
struct UARSessionConfig_SetWorldMapData_Params
{
	TArray<unsigned char>                              WorldMapData;                                             // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects
struct UARSessionConfig_SetResetTrackedObjects_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.SetResetCameraTracking
struct UARSessionConfig_SetResetCameraTracking_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
struct UARSessionConfig_SetFaceTrackingUpdate_Params
{
	EARFaceTrackingUpdate                              InUpdate;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
struct UARSessionConfig_SetFaceTrackingDirection_Params
{
	EARFaceTrackingDirection                           InDirection;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus
struct UARSessionConfig_SetEnableAutoFocus_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
struct UARSessionConfig_SetDesiredVideoFormat_Params
{
	struct FARVideoFormat                              NewFormat;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.SetCandidateObjectList
struct UARSessionConfig_SetCandidateObjectList_Params
{
	TArray<class UARCandidateObject*>                  InCandidateObjects;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.GetWorldMapData
struct UARSessionConfig_GetWorldMapData_Params
{
	TArray<unsigned char>                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.GetWorldAlignment
struct UARSessionConfig_GetWorldAlignment_Params
{
	EARWorldAlignment                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.GetSessionType
struct UARSessionConfig_GetSessionType_Params
{
	EARSessionType                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
struct UARSessionConfig_GetPlaneDetectionMode_Params
{
	EARPlaneDetectionMode                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
struct UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.GetLightEstimationMode
struct UARSessionConfig_GetLightEstimationMode_Params
{
	EARLightEstimationMode                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.GetFrameSyncMode
struct UARSessionConfig_GetFrameSyncMode_Params
{
	EARFrameSyncMode                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
struct UARSessionConfig_GetFaceTrackingUpdate_Params
{
	EARFaceTrackingUpdate                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
struct UARSessionConfig_GetFaceTrackingDirection_Params
{
	EARFaceTrackingDirection                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
struct UARSessionConfig_GetEnvironmentCaptureProbeType_Params
{
	EAREnvironmentCaptureProbeType                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
struct UARSessionConfig_GetDesiredVideoFormat_Params
{
	struct FARVideoFormat                              ReturnValue;                                              // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.GetCandidateObjectList
struct UARSessionConfig_GetCandidateObjectList_Params
{
	TArray<class UARCandidateObject*>                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.GetCandidateImageList
struct UARSessionConfig_GetCandidateImageList_Params
{
	TArray<class UARCandidateImage*>                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.AddCandidateObject
struct UARSessionConfig_AddCandidateObject_Params
{
	class UARCandidateObject*                          CandidateObject;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSessionConfig.AddCandidateImage
struct UARSessionConfig_AddCandidateImage_Params
{
	class UARCandidateImage*                           NewCandidateImage;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
struct AARSharedWorldGameMode_SetPreviewImageData_Params
{
	TArray<unsigned char>                              ImageData;                                                // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
struct AARSharedWorldGameMode_SetARWorldSharingIsReady_Params
{
};

// Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
struct AARSharedWorldGameMode_SetARSharedWorldData_Params
{
	TArray<unsigned char>                              ARWorldData;                                              // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
struct AARSharedWorldGameMode_GetARSharedWorldGameState_Params
{
	class AARSharedWorldGameState*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
struct AARSharedWorldGameState_K2_OnARWorldMapIsReady_Params
{
};

// Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving
struct AARSharedWorldPlayerController_ServerMarkReadyForReceiving_Params
{
};

// Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData
struct AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Params
{
	int                                                Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              Buffer;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
struct AARSharedWorldPlayerController_ClientUpdateARWorldData_Params
{
	int                                                Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              Buffer;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld
struct AARSharedWorldPlayerController_ClientInitSharedWorld_Params
{
	int                                                PreviewImageSize;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ARWorldDataSize;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
struct AARSkyLight_SetEnvironmentCaptureProbe_Params
{
	class UAREnvironmentCaptureProbe*                  InCaptureProbe;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTrackedGeometry.IsTracked
struct UARTrackedGeometry_IsTracked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTrackedGeometry.GetTrackingState
struct UARTrackedGeometry_GetTrackingState_Params
{
	EARTrackingState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
struct UARTrackedGeometry_GetLocalToWorldTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
struct UARTrackedGeometry_GetLocalToTrackingTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
struct UARTrackedGeometry_GetLastUpdateTimestamp_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
struct UARTrackedGeometry_GetLastUpdateFrameNumber_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTrackedGeometry.GetDebugName
struct UARTrackedGeometry_GetDebugName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy
struct UARPlaneGeometry_GetSubsumedBy_Params
{
	class UARPlaneGeometry*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPlaneGeometry.GetExtent
struct UARPlaneGeometry_GetExtent_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPlaneGeometry.GetCenter
struct UARPlaneGeometry_GetCenter_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
struct UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Params
{
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTrackedImage.GetEstimateSize
struct UARTrackedImage_GetEstimateSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTrackedImage.GetDetectedImage
struct UARTrackedImage_GetDetectedImage_Params
{
	class UARCandidateImage*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
struct UARFaceGeometry_GetWorldSpaceEyeTransform_Params
{
	EAREye                                             Eye;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
struct UARFaceGeometry_GetLocalSpaceEyeTransform_Params
{
	EAREye                                             Eye;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
struct UARFaceGeometry_GetBlendShapeValue_Params
{
	EARFaceBlendShape                                  BlendShape;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARFaceGeometry.GetBlendShapes
struct UARFaceGeometry_GetBlendShapes_Params
{
	TMap<EARFaceBlendShape, float>                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent
struct UAREnvironmentCaptureProbe_GetExtent_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
struct UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Params
{
	class UAREnvironmentCaptureProbeTexture*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARTrackedObject.GetDetectedObject
struct UARTrackedObject_GetDetectedObject_Params
{
	class UARCandidateObject*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARCandidateImage.GetPhysicalWidth
struct UARCandidateImage_GetPhysicalWidth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARCandidateImage.GetPhysicalHeight
struct UARCandidateImage_GetPhysicalHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARCandidateImage.GetOrientation
struct UARCandidateImage_GetOrientation_Params
{
	EARCandidateImageOrientation                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARCandidateImage.GetFriendlyName
struct UARCandidateImage_GetFriendlyName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARCandidateImage.GetCandidateTexture
struct UARCandidateImage_GetCandidateTexture_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARCandidateObject.SetCandidateObjectData
struct UARCandidateObject_SetCandidateObjectData_Params
{
	TArray<unsigned char>                              InCandidateObject;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARCandidateObject.SetBoundingBox
struct UARCandidateObject_SetBoundingBox_Params
{
	struct FBox                                        InBoundingBox;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARCandidateObject.GetFriendlyName
struct UARCandidateObject_GetFriendlyName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARCandidateObject.GetCandidateObjectData
struct UARCandidateObject_GetCandidateObjectData_Params
{
	TArray<unsigned char>                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AugmentedReality.ARCandidateObject.GetBoundingBox
struct UARCandidateObject_GetBoundingBox_Params
{
	struct FBox                                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
