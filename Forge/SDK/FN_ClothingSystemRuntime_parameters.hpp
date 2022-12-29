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

// Function ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveSpringStiffness
struct UClothingSimulationInteractorNv_SetAnimDriveSpringStiffness_Params
{
	float                                              InStiffness;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness
struct UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Params
{
	float                                              InStiffness;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ClothingSystemRuntime.ClothingSimulationInteractorNv.EnableGravityOverride
struct UClothingSimulationInteractorNv_EnableGravityOverride_Params
{
	struct FVector                                     InVector;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ClothingSystemRuntime.ClothingSimulationInteractorNv.DisableGravityOverride
struct UClothingSimulationInteractorNv_DisableGravityOverride_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
