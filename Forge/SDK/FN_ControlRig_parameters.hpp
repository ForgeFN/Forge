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

// Function ControlRig.ControlRig.GetDeltaTime
struct UControlRig_GetDeltaTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ControlRig.ControlRigComponent.OnPreInitialize
struct UControlRigComponent_OnPreInitialize_Params
{
};

// Function ControlRig.ControlRigComponent.OnPreEvaluate
struct UControlRigComponent_OnPreEvaluate_Params
{
};

// Function ControlRig.ControlRigComponent.OnPostInitialize
struct UControlRigComponent_OnPostInitialize_Params
{
};

// Function ControlRig.ControlRigComponent.OnPostEvaluate
struct UControlRigComponent_OnPostEvaluate_Params
{
};

// Function ControlRig.ControlRigComponent.BP_GetControlRig
struct UControlRigComponent_BP_GetControlRig_Params
{
	class UControlRig*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ControlRig.ControlRigControl.OnTransformChanged
struct AControlRigControl_OnTransformChanged_Params
{
	struct FTransform                                  NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ControlRig.ControlRigControl.OnSelectionChanged
struct AControlRigControl_OnSelectionChanged_Params
{
	bool                                               bIsSelected;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ControlRig.ControlRigControl.OnManipulatingChanged
struct AControlRigControl_OnManipulatingChanged_Params
{
	bool                                               bIsManipulating;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ControlRig.ControlRigControl.OnHoveredChanged
struct AControlRigControl_OnHoveredChanged_Params
{
	bool                                               bIsSelected;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ControlRig.ControlRigControl.OnEnabledChanged
struct AControlRigControl_OnEnabledChanged_Params
{
	bool                                               bIsEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
