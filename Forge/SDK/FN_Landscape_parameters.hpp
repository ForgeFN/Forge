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

// Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
struct ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Params
{
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
struct ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Params
{
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                                    Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
struct ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Params
{
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
struct ALandscapeProxy_EditorSetLandscapeMaterial_Params
{
	class UMaterialInterface*                          NewLandscapeMaterial;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeProxy.EditorApplySpline
struct ALandscapeProxy_EditorApplySpline_Params
{
	class USplineComponent*                            InSplineComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartWidth;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndWidth;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartSideFalloff;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndSideFalloff;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartRoll;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndRoll;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumSubdivisions;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRaiseHeights;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLowerHeights;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULandscapeLayerInfoObject*                   PaintLayer;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
struct ALandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff_Params
{
	bool                                               InComponentScreenSizeToUseSubSections;                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
struct ALandscapeProxy_ChangeTessellationComponentScreenSizeFalloff_Params
{
	float                                              InUseTessellationComponentScreenSizeFalloff;              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
struct ALandscapeProxy_ChangeTessellationComponentScreenSize_Params
{
	float                                              InTessellationComponentScreenSize;                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
struct ALandscapeProxy_ChangeLODDistanceFactor_Params
{
	float                                              InLODDistanceFactor;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
struct ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Params
{
	float                                              InComponentScreenSizeToUseSubSections;                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate
struct ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Params
{
};

// Function Landscape.LandscapeBlueprintBrushBase.Render
struct ALandscapeBlueprintBrushBase_Render_Params
{
	bool                                               InIsHeightmap;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                      InCombinedResult;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InWeightmapLayerName;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeBlueprintBrushBase.Initialize
struct ALandscapeBlueprintBrushBase_Initialize_Params
{
	struct FTransform                                  InLandscapeTransform;                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FIntPoint                                   InLandscapeSize;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                                   InLandscapeRenderTargetSize;                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
struct ULandscapeComponent_GetMaterialInstanceDynamic_Params
{
	int                                                InIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
struct ULandscapeSplinesComponent_GetSplineMeshComponents_Params
{
	TArray<class USplineMeshComponent*>                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
