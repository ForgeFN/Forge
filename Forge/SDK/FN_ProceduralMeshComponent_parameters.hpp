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

// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh
struct UKismetProceduralMeshLibrary_SliceProceduralMesh_Params
{
	class UProceduralMeshComponent*                    InProcMesh;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     PlanePosition;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     PlaneNormal;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCreateOtherHalf;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UProceduralMeshComponent*                    OutOtherHalfProcMesh;                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EProcMeshSliceCapOption                            CapOption;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          CapMaterial;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh
struct UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Params
{
	class UStaticMesh*                                 InMesh;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LODIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SectionIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             Vertices;                                                 // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        Triangles;                                                // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             Normals;                                                  // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                           UVs;                                                      // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FProcMeshTangent>                    Tangents;                                                 // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh
struct UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Params
{
	class UProceduralMeshComponent*                    InProcMesh;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SectionIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             Vertices;                                                 // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        Triangles;                                                // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             Normals;                                                  // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                           UVs;                                                      // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FProcMeshTangent>                    Tangents;                                                 // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
struct UKismetProceduralMeshLibrary_GenerateBoxMesh_Params
{
	struct FVector                                     BoxRadius;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             Vertices;                                                 // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        Triangles;                                                // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             Normals;                                                  // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                           UVs;                                                      // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FProcMeshTangent>                    Tangents;                                                 // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded
struct UKismetProceduralMeshLibrary_CreateGridMeshWelded_Params
{
	int                                                NumX;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumY;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        Triangles;                                                // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             Vertices;                                                 // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                           UVs;                                                      // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              GridSpacing;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
struct UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Params
{
	int                                                NumX;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumY;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWinding;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        Triangles;                                                // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshSplit
struct UKismetProceduralMeshLibrary_CreateGridMeshSplit_Params
{
	int                                                NumX;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumY;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        Triangles;                                                // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             Vertices;                                                 // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                           UVs;                                                      // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                           UV1s;                                                     // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              GridSpacing;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent
struct UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Params
{
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LODIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UProceduralMeshComponent*                    ProcMeshComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCreateCollision;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
struct UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Params
{
	TArray<int>                                        Triangles;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                Vert0;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Vert1;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Vert2;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Vert3;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh
struct UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Params
{
	TArray<struct FVector>                             Vertices;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<int>                                        Triangles;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                           UVs;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             Normals;                                                  // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FProcMeshTangent>                    Tangents;                                                 // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
struct UProceduralMeshComponent_UpdateMeshSection_LinearColor_Params
{
	int                                                SectionIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             Vertices;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             Normals;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                           UV0;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                           UV1;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                           UV2;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                           UV3;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                        VertexColors;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FProcMeshTangent>                    Tangents;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
struct UProceduralMeshComponent_UpdateMeshSection_Params
{
	int                                                SectionIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             Vertices;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             Normals;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                           UV0;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FColor>                              VertexColors;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FProcMeshTangent>                    Tangents;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
struct UProceduralMeshComponent_SetMeshSectionVisible_Params
{
	int                                                SectionIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNewVisibility;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
struct UProceduralMeshComponent_IsMeshSectionVisible_Params
{
	int                                                SectionIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
struct UProceduralMeshComponent_GetNumSections_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
struct UProceduralMeshComponent_CreateMeshSection_LinearColor_Params
{
	int                                                SectionIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             Vertices;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<int>                                        Triangles;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             Normals;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                           UV0;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                           UV1;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                           UV2;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                           UV3;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                        VertexColors;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FProcMeshTangent>                    Tangents;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bCreateCollision;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
struct UProceduralMeshComponent_CreateMeshSection_Params
{
	int                                                SectionIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             Vertices;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<int>                                        Triangles;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             Normals;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                           UV0;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FColor>                              VertexColors;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FProcMeshTangent>                    Tangents;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bCreateCollision;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
struct UProceduralMeshComponent_ClearMeshSection_Params
{
	int                                                SectionIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes
struct UProceduralMeshComponent_ClearCollisionConvexMeshes_Params
{
};

// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections
struct UProceduralMeshComponent_ClearAllMeshSections_Params
{
};

// Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
struct UProceduralMeshComponent_AddCollisionConvexMesh_Params
{
	TArray<struct FVector>                             ConvexVerts;                                              // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
