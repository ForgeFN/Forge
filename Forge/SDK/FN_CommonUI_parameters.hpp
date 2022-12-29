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

// Function CommonUI.CommonActionWidget.SetInputActions
struct UCommonActionWidget_SetInputActions_Params
{
	TArray<struct FDataTableRowHandle>                 NewInputActions;                                          // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonActionWidget.SetInputAction
struct UCommonActionWidget_SetInputAction_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonActionWidget.SetIconRimBrush
struct UCommonActionWidget_SetIconRimBrush_Params
{
	struct FSlateBrush                                 InIconRimBrush;                                           // (Parm, NativeAccessSpecifierPublic)
};

// DelegateFunction CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature
struct UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Params
{
	bool                                               bUsingGamepad;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonActionWidget.IsHeldAction
struct UCommonActionWidget_IsHeldAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonActionWidget.GetIcon
struct UCommonActionWidget_GetIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonActionWidget.GetDisplayText
struct UCommonActionWidget_GetDisplayText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonUserWidget.SetConsumePointerInput
struct UCommonUserWidget_SetConsumePointerInput_Params
{
	bool                                               bInConsumePointerInput;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonUserWidget.OnTouchLeave
struct UCommonUserWidget_OnTouchLeave_Params
{
	struct FPointerEvent                               TouchEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonActivatablePanel.SetInputActionHandlerWithProgressPopupMenu
struct UCommonActivatablePanel_SetInputActionHandlerWithProgressPopupMenu_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UCommonPopupMenu*                            PopupMenu;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonActivatablePanel.SetInputActionHandlerWithProgress
struct UCommonActivatablePanel_SetInputActionHandlerWithProgress_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonActivatablePanel.SetInputActionHandlerWithPopupMenu
struct UCommonActivatablePanel_SetInputActionHandlerWithPopupMenu_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UCommonPopupMenu*                            PopupMenu;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonActivatablePanel.SetInputActionHandler
struct UCommonActivatablePanel_SetInputActionHandler_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonActivatablePanel.SetActionHandlerStateWithDisabledCommitEvent
struct UCommonActivatablePanel_SetActionHandlerStateWithDisabledCommitEvent_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EInputActionState                                  State;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonActivatablePanel.SetActionHandlerStateFromHandleWithDisabledCommitEvent
struct UCommonActivatablePanel_SetActionHandlerStateFromHandleWithDisabledCommitEvent_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EInputActionState                                  State;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonActivatablePanel.SetActionHandlerStateFromHandle
struct UCommonActivatablePanel_SetActionHandlerStateFromHandle_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EInputActionState                                  State;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonActivatablePanel.SetActionHandlerState
struct UCommonActivatablePanel_SetActionHandlerState_Params
{
	class UDataTable*                                  DataTable;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EInputActionState                                  State;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonActivatablePanel.RemoveInputActionHandler
struct UCommonActivatablePanel_RemoveInputActionHandler_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonActivatablePanel.RemoveAllInputActionHandlers
struct UCommonActivatablePanel_RemoveAllInputActionHandlers_Params
{
};

// Function CommonUI.CommonActivatablePanel.PopPanel
struct UCommonActivatablePanel_PopPanel_Params
{
};

// Function CommonUI.CommonActivatablePanel.OnRemovedFromActivationStack
struct UCommonActivatablePanel_OnRemovedFromActivationStack_Params
{
};

// Function CommonUI.CommonActivatablePanel.OnInputModeChanged
struct UCommonActivatablePanel_OnInputModeChanged_Params
{
	bool                                               bUsingGamepad;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonActivatablePanel.OnDeactivated
struct UCommonActivatablePanel_OnDeactivated_Params
{
};

// Function CommonUI.CommonActivatablePanel.OnBeginOutro
struct UCommonActivatablePanel_OnBeginOutro_Params
{
};

// Function CommonUI.CommonActivatablePanel.OnBeginIntro
struct UCommonActivatablePanel_OnBeginIntro_Params
{
};

// Function CommonUI.CommonActivatablePanel.OnAddedToActivationStack
struct UCommonActivatablePanel_OnAddedToActivationStack_Params
{
};

// Function CommonUI.CommonActivatablePanel.OnActivated
struct UCommonActivatablePanel_OnActivated_Params
{
};

// Function CommonUI.CommonActivatablePanel.IsIntroed
struct UCommonActivatablePanel_IsIntroed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonActivatablePanel.IsInActivationStack
struct UCommonActivatablePanel_IsInActivationStack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonActivatablePanel.IsActivated
struct UCommonActivatablePanel_IsActivated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonActivatablePanel.HasInputActionHandler
struct UCommonActivatablePanel_HasInputActionHandler_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonActivatablePanel.GetInputActions
struct UCommonActivatablePanel_GetInputActions_Params
{
	TArray<struct FCommonInputActionHandlerData>       InputActionDataRows;                                      // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonActivatablePanel.EndOutro
struct UCommonActivatablePanel_EndOutro_Params
{
};

// Function CommonUI.CommonActivatablePanel.EndIntro
struct UCommonActivatablePanel_EndIntro_Params
{
};

// Function CommonUI.CommonActivatablePanel.BeginOutro
struct UCommonActivatablePanel_BeginOutro_Params
{
};

// Function CommonUI.CommonActivatablePanel.BeginIntro
struct UCommonActivatablePanel_BeginIntro_Params
{
};

// Function CommonUI.CommonActivatablePanel.AddInputActionNoHandler
struct UCommonActivatablePanel_AddInputActionNoHandler_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonActivatablePanel.AddInputActionHandlerWithProgressPopup
struct UCommonActivatablePanel_AddInputActionHandlerWithProgressPopup_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonPopupMenu*                            PopupMenu;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonActivatablePanel.AddInputActionHandlerWithProgress
struct UCommonActivatablePanel_AddInputActionHandlerWithProgress_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonActivatablePanel.AddInputActionHandlerWithPopup
struct UCommonActivatablePanel_AddInputActionHandlerWithPopup_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonPopupMenu*                            PopupMenu;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonActivatablePanel.AddInputActionHandler
struct UCommonActivatablePanel_AddInputActionHandler_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonBorderStyle.GetBackgroundBrush
struct UCommonBorderStyle_GetBackgroundBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonBorder.SetStyle
struct UCommonBorder_SetStyle_Params
{
	class UClass*                                      InStyle;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButtonStyle.GetSelectedTextStyle
struct UCommonButtonStyle_GetSelectedTextStyle_Params
{
	class UCommonTextStyle*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButtonStyle.GetSelectedPressedBrush
struct UCommonButtonStyle_GetSelectedPressedBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle
struct UCommonButtonStyle_GetSelectedHoveredTextStyle_Params
{
	class UCommonTextStyle*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButtonStyle.GetSelectedHoveredBrush
struct UCommonButtonStyle_GetSelectedHoveredBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButtonStyle.GetSelectedBaseBrush
struct UCommonButtonStyle_GetSelectedBaseBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButtonStyle.GetNormalTextStyle
struct UCommonButtonStyle_GetNormalTextStyle_Params
{
	class UCommonTextStyle*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButtonStyle.GetNormalPressedBrush
struct UCommonButtonStyle_GetNormalPressedBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle
struct UCommonButtonStyle_GetNormalHoveredTextStyle_Params
{
	class UCommonTextStyle*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButtonStyle.GetNormalHoveredBrush
struct UCommonButtonStyle_GetNormalHoveredBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButtonStyle.GetNormalBaseBrush
struct UCommonButtonStyle_GetNormalBaseBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButtonStyle.GetMaterialBrush
struct UCommonButtonStyle_GetMaterialBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButtonStyle.GetDisabledTextStyle
struct UCommonButtonStyle_GetDisabledTextStyle_Params
{
	class UCommonTextStyle*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButtonStyle.GetDisabledBrush
struct UCommonButtonStyle_GetDisabledBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButtonStyle.GetCustomPadding
struct UCommonButtonStyle_GetCustomPadding_Params
{
	struct FMargin                                     OutCustomPadding;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButtonStyle.GetButtonPadding
struct UCommonButtonStyle_GetButtonPadding_Params
{
	struct FMargin                                     OutButtonPadding;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.StopDoubleClickPropagation
struct UCommonButton_StopDoubleClickPropagation_Params
{
};

// Function CommonUI.CommonButton.SetTriggeringInputAction
struct UCommonButton_SetTriggeringInputAction_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.SetTriggeredInputAction
struct UCommonButton_SetTriggeredInputAction_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UCommonActivatablePanel*                     OldPanel;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.SetTouchMethod
struct UCommonButton_SetTouchMethod_Params
{
	TEnumAsByte<EButtonTouchMethod>                    InTouchMethod;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.SetStyle
struct UCommonButton_SetStyle_Params
{
	class UClass*                                      InStyle;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.SetShouldUseFallbackDefaultInputAction
struct UCommonButton_SetShouldUseFallbackDefaultInputAction_Params
{
	bool                                               bInShouldUseFallbackDefaultInputAction;                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.SetShouldSelectUponReceivingFocus
struct UCommonButton_SetShouldSelectUponReceivingFocus_Params
{
	bool                                               bInShouldSelectUponReceivingFocus;                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.SetSelectedInternal
struct UCommonButton_SetSelectedInternal_Params
{
	bool                                               bInSelected;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowSound;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBroadcast;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.SetPressMethod
struct UCommonButton_SetPressMethod_Params
{
	TEnumAsByte<EButtonPressMethod>                    InPressMethod;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.SetMinDimensions
struct UCommonButton_SetMinDimensions_Params
{
	int                                                InMinWidth;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InMinHeight;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.SetIsToggleable
struct UCommonButton_SetIsToggleable_Params
{
	bool                                               bInIsToggleable;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.SetIsSelected
struct UCommonButton_SetIsSelected_Params
{
	bool                                               InSelected;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGiveClickFeedback;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.SetIsSelectable
struct UCommonButton_SetIsSelectable_Params
{
	bool                                               bInIsSelectable;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.SetIsInteractionEnabled
struct UCommonButton_SetIsInteractionEnabled_Params
{
	bool                                               bInIsInteractionEnabled;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.SetIsInteractableWhenSelected
struct UCommonButton_SetIsInteractableWhenSelected_Params
{
	bool                                               bInInteractableWhenSelected;                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.SetInputActionProgressMaterial
struct UCommonButton_SetInputActionProgressMaterial_Params
{
	struct FSlateBrush                                 InProgressMaterialBrush;                                  // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FName                                       InProgressMaterialParam;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.SetClickMethod
struct UCommonButton_SetClickMethod_Params
{
	TEnumAsByte<EButtonClickMethod>                    InClickMethod;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.OnTriggeredInputActionChanged
struct UCommonButton_OnTriggeredInputActionChanged_Params
{
	struct FDataTableRowHandle                         NewTriggeredAction;                                       // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.OnInputMethodChanged
struct UCommonButton_OnInputMethodChanged_Params
{
	ECommonInputType                                   CurrentInputType;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.OnCurrentTextStyleChanged
struct UCommonButton_OnCurrentTextStyleChanged_Params
{
};

// Function CommonUI.CommonButton.OnActionProgress
struct UCommonButton_OnActionProgress_Params
{
	float                                              HeldPercent;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.OnActionComplete
struct UCommonButton_OnActionComplete_Params
{
};

// Function CommonUI.CommonButton.NativeOnActionProgress
struct UCommonButton_NativeOnActionProgress_Params
{
	float                                              HeldPercent;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.NativeOnActionComplete
struct UCommonButton_NativeOnActionComplete_Params
{
};

// Function CommonUI.CommonButton.IsPressed
struct UCommonButton_IsPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.IsInteractionEnabled
struct UCommonButton_IsInteractionEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.HandleTriggeringActionCommited
struct UCommonButton_HandleTriggeringActionCommited_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.HandleFocusReceived
struct UCommonButton_HandleFocusReceived_Params
{
};

// Function CommonUI.CommonButton.HandleButtonReleased
struct UCommonButton_HandleButtonReleased_Params
{
};

// Function CommonUI.CommonButton.HandleButtonPressed
struct UCommonButton_HandleButtonPressed_Params
{
};

// Function CommonUI.CommonButton.HandleButtonClicked
struct UCommonButton_HandleButtonClicked_Params
{
};

// Function CommonUI.CommonButton.GetStyle
struct UCommonButton_GetStyle_Params
{
	class UCommonButtonStyle*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.GetSingleMaterialStyleMID
struct UCommonButton_GetSingleMaterialStyleMID_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.GetShouldSelectUponReceivingFocus
struct UCommonButton_GetShouldSelectUponReceivingFocus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.GetSelected
struct UCommonButton_GetSelected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.GetInputAction
struct UCommonButton_GetInputAction_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.GetCurrentTextStyleClass
struct UCommonButton_GetCurrentTextStyleClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.GetCurrentTextStyle
struct UCommonButton_GetCurrentTextStyle_Params
{
	class UCommonTextStyle*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.GetCurrentCustomPadding
struct UCommonButton_GetCurrentCustomPadding_Params
{
	struct FMargin                                     OutCustomPadding;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.GetCurrentButtonPadding
struct UCommonButton_GetCurrentButtonPadding_Params
{
	struct FMargin                                     OutButtonPadding;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.DisableButtonWithReason
struct UCommonButton_DisableButtonWithReason_Params
{
	struct FText                                       DisabledReason;                                           // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButton.ClearSelection
struct UCommonButton_ClearSelection_Params
{
};

// Function CommonUI.CommonButton.BP_OnUnhovered
struct UCommonButton_BP_OnUnhovered_Params
{
};

// Function CommonUI.CommonButton.BP_OnSelected
struct UCommonButton_BP_OnSelected_Params
{
};

// Function CommonUI.CommonButton.BP_OnHovered
struct UCommonButton_BP_OnHovered_Params
{
};

// Function CommonUI.CommonButton.BP_OnEnabled
struct UCommonButton_BP_OnEnabled_Params
{
};

// Function CommonUI.CommonButton.BP_OnDoubleClicked
struct UCommonButton_BP_OnDoubleClicked_Params
{
};

// Function CommonUI.CommonButton.BP_OnDisabled
struct UCommonButton_BP_OnDisabled_Params
{
};

// Function CommonUI.CommonButton.BP_OnDeselected
struct UCommonButton_BP_OnDeselected_Params
{
};

// Function CommonUI.CommonButton.BP_OnClicked
struct UCommonButton_BP_OnClicked_Params
{
};

// Function CommonUI.CommonWidgetGroupBase.RemoveWidget
struct UCommonWidgetGroupBase_RemoveWidget_Params
{
	class UWidget*                                     InWidget;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonWidgetGroupBase.RemoveAll
struct UCommonWidgetGroupBase_RemoveAll_Params
{
};

// Function CommonUI.CommonWidgetGroupBase.AddWidget
struct UCommonWidgetGroupBase_AddWidget_Params
{
	class UWidget*                                     InWidget;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButtonGroup.SetSelectionRequired
struct UCommonButtonGroup_SetSelectionRequired_Params
{
	bool                                               bRequireSelection;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButtonGroup.SelectPreviousButton
struct UCommonButtonGroup_SelectPreviousButton_Params
{
	bool                                               bAllowWrap;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButtonGroup.SelectNextButton
struct UCommonButtonGroup_SelectNextButton_Params
{
	bool                                               bAllowWrap;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButtonGroup.SelectButtonAtIndex
struct UCommonButtonGroup_SelectButtonAtIndex_Params
{
	int                                                ButtonIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButtonGroup.OnSelectionStateChanged
struct UCommonButtonGroup_OnSelectionStateChanged_Params
{
	class UCommonButton*                               BaseButton;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsSelected;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButtonGroup.OnHandleButtonDoubleClicked
struct UCommonButtonGroup_OnHandleButtonDoubleClicked_Params
{
	class UCommonButton*                               BaseButton;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButtonGroup.OnHandleButtonClicked
struct UCommonButtonGroup_OnHandleButtonClicked_Params
{
	class UCommonButton*                               BaseButton;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButtonGroup.OnButtonUnhovered
struct UCommonButtonGroup_OnButtonUnhovered_Params
{
	class UCommonButton*                               BaseButton;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButtonGroup.OnButtonHovered
struct UCommonButtonGroup_OnButtonHovered_Params
{
	class UCommonButton*                               BaseButton;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButtonGroup.HasAnyButtons
struct UCommonButtonGroup_HasAnyButtons_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButtonGroup.GetSelectedButtonIndex
struct UCommonButtonGroup_GetSelectedButtonIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButtonGroup.GetHoveredButtonIndex
struct UCommonButtonGroup_GetHoveredButtonIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButtonGroup.GetButtonCount
struct UCommonButtonGroup_GetButtonCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButtonGroup.GetButtonAtIndex
struct UCommonButtonGroup_GetButtonAtIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButton*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButtonGroup.FindButtonIndex
struct UCommonButtonGroup_FindButtonIndex_Params
{
	class UCommonButton*                               ButtonToFind;                                             // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonButtonGroup.DeselectAll
struct UCommonButtonGroup_DeselectAll_Params
{
};

// Function CommonUI.CommonTextBlock.SetWrapTextWidth
struct UCommonTextBlock_SetWrapTextWidth_Params
{
	int                                                InWrapTextAt;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonTextBlock.SetTextCase
struct UCommonTextBlock_SetTextCase_Params
{
	bool                                               bUseAllCaps;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonTextBlock.SetStyle
struct UCommonTextBlock_SetStyle_Params
{
	class UClass*                                      InStyle;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonTextBlock.ResetScrollState
struct UCommonTextBlock_ResetScrollState_Params
{
};

// Function CommonUI.CommonDateTimeTextBlock.SetTimespanValue
struct UCommonDateTimeTextBlock_SetTimespanValue_Params
{
	struct FTimespan                                   InTimespan;                                               // (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonDateTimeTextBlock.SetDateTimeValue
struct UCommonDateTimeTextBlock_SetDateTimeValue_Params
{
	struct FDateTime                                   InDateTime;                                               // (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowAsCountdown;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InRefreshDelay;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText
struct UCommonDateTimeTextBlock_SetCountDownCompletionText_Params
{
	struct FText                                       InCompletionText;                                         // (ConstParm, Parm, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonDateTimeTextBlock.GetDateTime
struct UCommonDateTimeTextBlock_GetDateTime_Params
{
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonInputManager.SuspendStartingOperationProcessing
struct UCommonInputManager_SuspendStartingOperationProcessing_Params
{
};

// Function CommonUI.CommonInputManager.StopListeningForExistingHeldAction
struct UCommonInputManager_StopListeningForExistingHeldAction_Params
{
	struct FDataTableRowHandle                         InputActionDataRow;                                       // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonInputManager.StartListeningForExistingHeldAction
struct UCommonInputManager_StartListeningForExistingHeldAction_Params
{
	struct FDataTableRowHandle                         InputActionDataRow;                                       // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonInputManager.SetGlobalInputHandlerPriorityFilter
struct UCommonInputManager_SetGlobalInputHandlerPriorityFilter_Params
{
	int                                                InFilterPriority;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonInputManager.ResumeStartingOperationProcessing
struct UCommonInputManager_ResumeStartingOperationProcessing_Params
{
};

// Function CommonUI.CommonInputManager.PushActivatablePanel
struct UCommonInputManager_PushActivatablePanel_Params
{
	class UCommonActivatablePanel*                     ActivatablePanel;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIntroPanel;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOutroPanelBelow;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonInputManager.PopActivatablePanel
struct UCommonInputManager_PopActivatablePanel_Params
{
	class UCommonActivatablePanel*                     ActivatablePanel;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonInputManager.IsPanelOnStack
struct UCommonInputManager_IsPanelOnStack_Params
{
	class UCommonActivatablePanel*                     InPanel;                                                  // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonInputManager.IsInputSuspended
struct UCommonInputManager_IsInputSuspended_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonInputManager.GetTopPanel
struct UCommonInputManager_GetTopPanel_Params
{
	class UCommonActivatablePanel*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonInputManager.GetGlobalInputHandlerPriorityFilter
struct UCommonInputManager_GetGlobalInputHandlerPriorityFilter_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonInputManager.GetAvailableInputActions
struct UCommonInputManager_GetAvailableInputActions_Params
{
	TArray<struct FCommonInputActionHandlerData>       AvailableInputActions;                                    // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonInputReflector.OnButtonAdded
struct UCommonInputReflector_OnButtonAdded_Params
{
	class UCommonButton*                               AddedButton;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCommonInputActionHandlerData               Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonLazyImage.SetMaterialTextureParamName
struct UCommonLazyImage_SetMaterialTextureParamName_Params
{
	struct FName                                       TextureParamName;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonLazyImage.SetBrushFromLazyTexture
struct UCommonLazyImage_SetBrushFromLazyTexture_Params
{
	bool                                               bMatchSize;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonLazyImage.SetBrushFromLazyMaterial
struct UCommonLazyImage_SetBrushFromLazyMaterial_Params
{
};

// Function CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset
struct UCommonLazyImage_SetBrushFromLazyDisplayAsset_Params
{
	bool                                               bMatchTextureSize;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonLazyImage.IsLoading
struct UCommonLazyImage_IsLoading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonLazyWidget.SetLazyContent
struct UCommonLazyWidget_SetLazyContent_Params
{
};

// Function CommonUI.CommonLazyWidget.IsLoading
struct UCommonLazyWidget_IsLoading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonListView.SetEntrySpacing
struct UCommonListView_SetEntrySpacing_Params
{
	float                                              InEntrySpacing;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.LoadGuardSlot.SetVerticalAlignment
struct ULoadGuardSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.LoadGuardSlot.SetPadding
struct ULoadGuardSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CommonUI.LoadGuardSlot.SetHorizontalAlignment
struct ULoadGuardSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonLoadGuard.SetLoadingText
struct UCommonLoadGuard_SetLoadingText_Params
{
	struct FText                                       InLoadingText;                                            // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonLoadGuard.SetIsLoading
struct UCommonLoadGuard_SetIsLoading_Params
{
	bool                                               bInIsLoading;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature
struct UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonLoadGuard.IsLoading
struct UCommonLoadGuard_IsLoading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset
struct UCommonLoadGuard_BP_GuardAndLoadAsset_Params
{
};

// Function CommonUI.CommonNumericTextBlock.SetNumericType
struct UCommonNumericTextBlock_SetNumericType_Params
{
	ECommonNumericType                                 InNumericType;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonNumericTextBlock.SetCurrentValue
struct UCommonNumericTextBlock_SetCurrentValue_Params
{
	float                                              NewValue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature
struct UCommonNumericTextBlock_OnOutro__DelegateSignature_Params
{
	class UCommonNumericTextBlock*                     NumericTextBlock;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature
struct UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Params
{
	class UCommonNumericTextBlock*                     NumericTextBlock;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HadCompleted;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue
struct UCommonNumericTextBlock_IsInterpolatingNumericValue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonNumericTextBlock.InterpolateToValue
struct UCommonNumericTextBlock_InterpolateToValue_Params
{
	float                                              TargetValue;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaximumInterpolationDuration;                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumChangeRate;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutroOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonNumericTextBlock.GetTargetValue
struct UCommonNumericTextBlock_GetTargetValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool
struct UCommonPoolableWidgetInterface_OnReleaseToPool_Params
{
};

// Function CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool
struct UCommonPoolableWidgetInterface_OnAcquireFromPool_Params
{
};

// Function CommonUI.CommonPopupButton.GetMenuAnchorWidget
struct UCommonPopupButton_GetMenuAnchorWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonPopupMenu.SetOwningMenuAnchor
struct UCommonPopupMenu_SetOwningMenuAnchor_Params
{
	class UMenuAnchor*                                 MenuAnchor;                                               // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonPopupMenu.SetContextProvider
struct UCommonPopupMenu_SetContextProvider_Params
{
	class UObject*                                     ContextProvidingObject;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonPopupMenu.RequestClose
struct UCommonPopupMenu_RequestClose_Params
{
};

// Function CommonUI.CommonPopupMenu.OnIsOpenChanged
struct UCommonPopupMenu_OnIsOpenChanged_Params
{
	bool                                               IsOpen;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonPopupMenu.HandlePreDifferentContextProviderSet
struct UCommonPopupMenu_HandlePreDifferentContextProviderSet_Params
{
};

// Function CommonUI.CommonPopupMenu.HandlePostDifferentContextProviderSet
struct UCommonPopupMenu_HandlePostDifferentContextProviderSet_Params
{
};

// Function CommonUI.CommonRotator.ShiftTextRight
struct UCommonRotator_ShiftTextRight_Params
{
};

// Function CommonUI.CommonRotator.ShiftTextLeft
struct UCommonRotator_ShiftTextLeft_Params
{
};

// Function CommonUI.CommonRotator.SetSelectedItem
struct UCommonRotator_SetSelectedItem_Params
{
	int                                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonRotator.PopulateTextLabels
struct UCommonRotator_PopulateTextLabels_Params
{
	TArray<struct FText>                               Labels;                                                   // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonRotator.GetSelectedText
struct UCommonRotator_GetSelectedText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonRotator.GetSelectedIndex
struct UCommonRotator_GetSelectedIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonRotator.BP_OnOptionsPopulated
struct UCommonRotator_BP_OnOptionsPopulated_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonRotator.BP_OnOptionSelected
struct UCommonRotator_BP_OnOptionSelected_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonTabListWidget.SetTabVisibility
struct UCommonTabListWidget_SetTabVisibility_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESlateVisibility                                   NewVisibility;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonTabListWidget.SetTabInteractionEnabled
struct UCommonTabListWidget_SetTabInteractionEnabled_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonTabListWidget.SetTabEnabled
struct UCommonTabListWidget_SetTabEnabled_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonTabListWidget.SetListeningForInput
struct UCommonTabListWidget_SetListeningForInput_Params
{
	bool                                               bShouldListen;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonTabListWidget.SetLinkedSwitcher
struct UCommonTabListWidget_SetLinkedSwitcher_Params
{
	class UCommonWidgetSwitcher*                       CommonSwitcher;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonTabListWidget.SelectTabByID
struct UCommonTabListWidget_SelectTabByID_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuppressClickFeedback;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonTabListWidget.RemoveTab
struct UCommonTabListWidget_RemoveTab_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonTabListWidget.RemoveAllTabs
struct UCommonTabListWidget_RemoveAllTabs_Params
{
};

// Function CommonUI.CommonTabListWidget.RegisterTab
struct UCommonTabListWidget_RegisterTab_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ButtonWidgetType;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     ContentWidget;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction CommonUI.CommonTabListWidget.OnTabSelected__DelegateSignature
struct UCommonTabListWidget_OnTabSelected__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction CommonUI.CommonTabListWidget.OnTabButtonRemoved__DelegateSignature
struct UCommonTabListWidget_OnTabButtonRemoved__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButton*                               TabButton;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction CommonUI.CommonTabListWidget.OnTabButtonCreated__DelegateSignature
struct UCommonTabListWidget_OnTabButtonCreated__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButton*                               TabButton;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonTabListWidget.HandleTabRemoved
struct UCommonTabListWidget_HandleTabRemoved_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButton*                               TabButton;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonTabListWidget.HandleTabCreated
struct UCommonTabListWidget_HandleTabCreated_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButton*                               TabButton;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonTabListWidget.HandleTabButtonSelected
struct UCommonTabListWidget_HandleTabButtonSelected_Params
{
	class UCommonButton*                               SelectedTabButton;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ButtonIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonTabListWidget.HandlePreviousTabInputAction
struct UCommonTabListWidget_HandlePreviousTabInputAction_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonTabListWidget.HandlePreLinkedSwitcherChanged_BP
struct UCommonTabListWidget_HandlePreLinkedSwitcherChanged_BP_Params
{
};

// Function CommonUI.CommonTabListWidget.HandlePostLinkedSwitcherChanged_BP
struct UCommonTabListWidget_HandlePostLinkedSwitcherChanged_BP_Params
{
};

// Function CommonUI.CommonTabListWidget.HandleNextTabInputAction
struct UCommonTabListWidget_HandleNextTabInputAction_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonTabListWidget.GetTabIdAtIndex
struct UCommonTabListWidget_GetTabIdAtIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonTabListWidget.GetTabCount
struct UCommonTabListWidget_GetTabCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonTabListWidget.GetTabButtonByID
struct UCommonTabListWidget_GetTabButtonByID_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButton*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonTabListWidget.GetSelectedTabId
struct UCommonTabListWidget_GetSelectedTabId_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonTabListWidget.GetLinkedSwitcher
struct UCommonTabListWidget_GetLinkedSwitcher_Params
{
	class UCommonWidgetSwitcher*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonTabListWidget.GetActiveTab
struct UCommonTabListWidget_GetActiveTab_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonTabListWidget.DisableTabWithReason
struct UCommonTabListWidget_DisableTabWithReason_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Reason;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonTextStyle.GetStrikeBrush
struct UCommonTextStyle_GetStrikeBrush_Params
{
	struct FSlateBrush                                 OutStrikeBrush;                                           // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonTextStyle.GetShadowOffset
struct UCommonTextStyle_GetShadowOffset_Params
{
	struct FVector2D                                   OutShadowOffset;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonTextStyle.GetShadowColor
struct UCommonTextStyle_GetShadowColor_Params
{
	struct FLinearColor                                OutColor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonTextStyle.GetMargin
struct UCommonTextStyle_GetMargin_Params
{
	struct FMargin                                     OutMargin;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonTextStyle.GetLineHeightPercentage
struct UCommonTextStyle_GetLineHeightPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonTextStyle.GetFont
struct UCommonTextStyle_GetFont_Params
{
	struct FSlateFontInfo                              OutFont;                                                  // (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonTextStyle.GetColor
struct UCommonTextStyle_GetColor_Params
{
	struct FLinearColor                                OutColor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonUILibrary.FindParentWidgetOfType
struct UCommonUILibrary_FindParentWidgetOfType_Params
{
	class UWidget*                                     StartingWidget;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction CommonUI.CommonUISubsystem.InputSuspensionChanged__DelegateSignature
struct UCommonUISubsystem_InputSuspensionChanged__DelegateSignature_Params
{
	bool                                               bInputSuspended;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction CommonUI.CommonUISubsystem.InputMethodChangedDelegate__DelegateSignature
struct UCommonUISubsystem_InputMethodChangedDelegate__DelegateSignature_Params
{
	bool                                               bUsingGamepad;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonUISubsystem.GetInputManager
struct UCommonUISubsystem_GetInputManager_Params
{
	class UCommonInputManager*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonUISubsystem.GetInputActionButtonIcon
struct UCommonUISubsystem_GetInputActionButtonIcon_Params
{
	struct FDataTableRowHandle                         InputActionRowHandle;                                     // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	ECommonInputType                                   InputType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECommonGamepadType                                 GamepadType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex
struct UCommonWidgetCarousel_SetActiveWidgetIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonWidgetCarousel.SetActiveWidget
struct UCommonWidgetCarousel_SetActiveWidget_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonWidgetCarousel.PreviousPage
struct UCommonWidgetCarousel_PreviousPage_Params
{
};

// Function CommonUI.CommonWidgetCarousel.NextPage
struct UCommonWidgetCarousel_NextPage_Params
{
};

// Function CommonUI.CommonWidgetCarousel.GetWidgetAtIndex
struct UCommonWidgetCarousel_GetWidgetAtIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex
struct UCommonWidgetCarousel_GetActiveWidgetIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonWidgetCarousel.EndAutoScrolling
struct UCommonWidgetCarousel_EndAutoScrolling_Params
{
};

// Function CommonUI.CommonWidgetCarousel.BeginAutoScrolling
struct UCommonWidgetCarousel_BeginAutoScrolling_Params
{
	float                                              ScrollInterval;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel
struct UCommonWidgetCarouselNavBar_SetLinkedCarousel_Params
{
	class UCommonWidgetCarousel*                       CommonCarousel;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged
struct UCommonWidgetCarouselNavBar_HandlePageChanged_Params
{
	class UCommonWidgetCarousel*                       CommonCarousel;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PageIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked
struct UCommonWidgetCarouselNavBar_HandleButtonClicked_Params
{
	class UCommonButton*                               AssociatedButton;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ButtonIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonWidgetSwitcher.SetDisableTransitionAnimation
struct UCommonWidgetSwitcher_SetDisableTransitionAnimation_Params
{
	bool                                               bDisableAnimation;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonWidgetSwitcher.SetActiveWidgetIndex_Advanced
struct UCommonWidgetSwitcher_SetActiveWidgetIndex_Advanced_Params
{
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AttemptActivationChange;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonWidgetSwitcher.SetActiveWidget_Advanced
struct UCommonWidgetSwitcher_SetActiveWidget_Advanced_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AttemptActivationChange;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonWidgetSwitcher.HasWidgets
struct UCommonWidgetSwitcher_HasWidgets_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonWidgetSwitcher.HandleActiveWidgetDeactivated
struct UCommonWidgetSwitcher_HandleActiveWidgetDeactivated_Params
{
	class UCommonActivatablePanel*                     DeactivatedPanel;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonWidgetSwitcher.DeactivateWidget
struct UCommonWidgetSwitcher_DeactivateWidget_Params
{
};

// Function CommonUI.CommonWidgetSwitcher.ActivateWidget
struct UCommonWidgetSwitcher_ActivateWidget_Params
{
};

// Function CommonUI.CommonWidgetSwitcher.ActivatePreviousWidget
struct UCommonWidgetSwitcher_ActivatePreviousWidget_Params
{
	bool                                               bCanWrap;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonWidgetSwitcher.ActivateNextWidget
struct UCommonWidgetSwitcher_ActivateNextWidget_Params
{
	bool                                               bCanWrap;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonWidgetStack.PushWidget
struct UCommonWidgetStack_PushWidget_Params
{
	class UWidget*                                     InWidget;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonUI.CommonWidgetStack.PopWidget
struct UCommonWidgetStack_PopWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
