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

// Class CommonUI.AnalogSlider
// 0x0010 (0x04F8 - 0x04E8)
class UAnalogSlider : public USlider
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04E8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.AnalogSlider.OnAnalogCapture

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.AnalogSlider");
		return ptr;
	}

};


// Class CommonUI.CommonActionHandlerInterface
// 0x0000 (0x0028 - 0x0028)
class UCommonActionHandlerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonActionHandlerInterface");
		return ptr;
	}

};


// Class CommonUI.CommonActionWidget
// 0x0210 (0x0310 - 0x0100)
class UCommonActionWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0100(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonActionWidget.OnInputMethodChanged
	struct FSlateBrush                                 ProgressMaterialBrush;                                    // 0x0110(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FName                                       ProgressMaterialParam;                                    // 0x0198(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 IconRimBrush;                                             // 0x01A0(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FDataTableRowHandle>                 InputActions;                                             // 0x0228(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*                    ProgressDynamicMaterial;                                  // 0x0238(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0xD0];                                      // 0x0240(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonActionWidget");
		return ptr;
	}


	void SetInputActions(TArray<struct FDataTableRowHandle> NewInputActions);
	void SetInputAction(struct FDataTableRowHandle InputActionRow);
	void SetIconRimBrush(struct FSlateBrush InIconRimBrush);
	void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	bool IsHeldAction();
	struct FSlateBrush GetIcon();
	struct FText GetDisplayText();
};


// Class CommonUI.CommonUserWidget
// 0x0008 (0x0230 - 0x0228)
class UCommonUserWidget : public UUserWidget
{
public:
	bool                                               bConsumePointerInput;                                     // 0x0228(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0229(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonUserWidget");
		return ptr;
	}


	void SetConsumePointerInput(bool bInConsumePointerInput);
	void OnTouchLeave(struct FPointerEvent TouchEvent);
};


// Class CommonUI.CommonActivatablePanel
// 0x00E8 (0x0318 - 0x0230)
class UCommonActivatablePanel : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0230(0x0008) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0230(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonActivatablePanel.OnWidgetActivated
	unsigned char                                      UnknownData02[0x10];                                      // 0x0248(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonActivatablePanel.OnWidgetDeactivated
	unsigned char                                      UnknownData03[0x40];                                      // 0x0258(0x0040) MISSED OFFSET
	bool                                               bConsumeAllActions;                                       // 0x0298(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bExposeActionsExternally;                                 // 0x0299(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bShouldBypassStack;                                       // 0x029A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x7D];                                      // 0x029B(0x007D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonActivatablePanel");
		return ptr;
	}


	void SetInputActionHandlerWithProgressPopupMenu(struct FDataTableRowHandle InputActionRow, class UCommonPopupMenu* PopupMenu);
	void SetInputActionHandlerWithProgress(struct FDataTableRowHandle InputActionRow);
	void SetInputActionHandlerWithPopupMenu(struct FDataTableRowHandle InputActionRow, class UCommonPopupMenu* PopupMenu);
	void SetInputActionHandler(struct FDataTableRowHandle InputActionRow);
	void SetActionHandlerStateWithDisabledCommitEvent(class UDataTable* DataTable, struct FName RowName, EInputActionState State);
	void SetActionHandlerStateFromHandleWithDisabledCommitEvent(struct FDataTableRowHandle InputActionRow, EInputActionState State);
	void SetActionHandlerStateFromHandle(struct FDataTableRowHandle InputActionRow, EInputActionState State);
	void SetActionHandlerState(class UDataTable* DataTable, struct FName RowName, EInputActionState State);
	void RemoveInputActionHandler(struct FDataTableRowHandle InputActionRow);
	void RemoveAllInputActionHandlers();
	void PopPanel();
	void OnRemovedFromActivationStack();
	void OnInputModeChanged(bool bUsingGamepad);
	void OnDeactivated();
	void OnBeginOutro();
	void OnBeginIntro();
	void OnAddedToActivationStack();
	void OnActivated();
	bool IsIntroed();
	bool IsInActivationStack();
	bool IsActivated();
	bool HasInputActionHandler(struct FDataTableRowHandle InputActionRow);
	bool GetInputActions(TArray<struct FCommonInputActionHandlerData>* InputActionDataRows);
	void EndOutro();
	void EndIntro();
	void BeginOutro();
	void BeginIntro();
	void AddInputActionNoHandler(class UDataTable* DataTable, struct FName RowName);
	void AddInputActionHandlerWithProgressPopup(class UDataTable* DataTable, struct FName RowName, class UCommonPopupMenu* PopupMenu);
	void AddInputActionHandlerWithProgress(class UDataTable* DataTable, struct FName RowName);
	void AddInputActionHandlerWithPopup(class UDataTable* DataTable, struct FName RowName, class UCommonPopupMenu* PopupMenu);
	void AddInputActionHandler(class UDataTable* DataTable, struct FName RowName);
};


// Class CommonUI.CommonBorderStyle
// 0x0088 (0x00B0 - 0x0028)
class UCommonBorderStyle : public UObject
{
public:
	struct FSlateBrush                                 Background;                                               // 0x0028(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonBorderStyle");
		return ptr;
	}


	void GetBackgroundBrush(struct FSlateBrush* Brush);
};


// Class CommonUI.CommonBorder
// 0x0020 (0x0288 - 0x0268)
class UCommonBorder : public UBorder
{
public:
	class UClass*                                      Style;                                                    // 0x0268(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReducePaddingBySafezone;                                 // 0x0270(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0271(0x0003) MISSED OFFSET
	struct FMargin                                     MinimumPadding;                                           // 0x0274(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0284(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonBorder");
		return ptr;
	}


	void SetStyle(class UClass* InStyle);
};


// Class CommonUI.CommonButtonStyle
// 0x0548 (0x0570 - 0x0028)
class UCommonButtonStyle : public UObject
{
public:
	bool                                               bSingleMaterial;                                          // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FSlateBrush                                 SingleMaterialBrush;                                      // 0x0030(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 NormalBase;                                               // 0x00B8(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 NormalHovered;                                            // 0x0140(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 NormalPressed;                                            // 0x01C8(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 SelectedBase;                                             // 0x0250(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 SelectedHovered;                                          // 0x02D8(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 SelectedPressed;                                          // 0x0360(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Disabled;                                                 // 0x03E8(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FMargin                                     ButtonPadding;                                            // 0x0470(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                     CustomPadding;                                            // 0x0480(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                MinWidth;                                                 // 0x0490(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinHeight;                                                // 0x0494(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      NormalTextStyle;                                          // 0x0498(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      NormalHoveredTextStyle;                                   // 0x04A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SelectedTextStyle;                                        // 0x04A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SelectedHoveredTextStyle;                                 // 0x04B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DisabledTextStyle;                                        // 0x04B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateSound                                 PressedSlateSound;                                        // 0x04C0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FCommonButtonStyleOptionalSlateSound        SelectedPressedSlateSound;                                // 0x04D8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FCommonButtonStyleOptionalSlateSound        DisabledPressedSlateSound;                                // 0x04F8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                                 HoveredSlateSound;                                        // 0x0518(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FCommonButtonStyleOptionalSlateSound        SelectedHoveredSlateSound;                                // 0x0530(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FCommonButtonStyleOptionalSlateSound        DisabledHoveredSlateSound;                                // 0x0550(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonButtonStyle");
		return ptr;
	}


	class UCommonTextStyle* GetSelectedTextStyle();
	void GetSelectedPressedBrush(struct FSlateBrush* Brush);
	class UCommonTextStyle* GetSelectedHoveredTextStyle();
	void GetSelectedHoveredBrush(struct FSlateBrush* Brush);
	void GetSelectedBaseBrush(struct FSlateBrush* Brush);
	class UCommonTextStyle* GetNormalTextStyle();
	void GetNormalPressedBrush(struct FSlateBrush* Brush);
	class UCommonTextStyle* GetNormalHoveredTextStyle();
	void GetNormalHoveredBrush(struct FSlateBrush* Brush);
	void GetNormalBaseBrush(struct FSlateBrush* Brush);
	void GetMaterialBrush(struct FSlateBrush* Brush);
	class UCommonTextStyle* GetDisabledTextStyle();
	void GetDisabledBrush(struct FSlateBrush* Brush);
	void GetCustomPadding(struct FMargin* OutCustomPadding);
	void GetButtonPadding(struct FMargin* OutButtonPadding);
};


// Class CommonUI.CommonButtonInternal
// 0x0060 (0x0480 - 0x0420)
class UCommonButtonInternal : public UButton
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0420(0x0010) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0420(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonButtonInternal.OnDoubleClicked
	unsigned char                                      UnknownData02[0x10];                                      // 0x0440(0x0010) MISSED OFFSET
	int                                                MinWidth;                                                 // 0x0450(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MinHeight;                                                // 0x0454(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bButtonEnabled;                                           // 0x0458(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bInteractionEnabled;                                      // 0x0459(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x26];                                      // 0x045A(0x0026) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonButtonInternal");
		return ptr;
	}

};


// Class CommonUI.CommonButton
// 0x0910 (0x0B40 - 0x0230)
class UCommonButton : public UCommonUserWidget
{
public:
	int                                                MinWidth;                                                 // 0x0230(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MinHeight;                                                // 0x0234(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      Style;                                                    // 0x0238(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bHideInputAction;                                         // 0x0240(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0241(0x0007) MISSED OFFSET
	struct FSlateSound                                 PressedSlateSoundOverride;                                // 0x0248(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateSound                                 HoveredSlateSoundOverride;                                // 0x0260(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bApplyAlphaOnDisable : 1;                                 // 0x0278(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bSelectable : 1;                                          // 0x0278(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bShouldSelectUponReceivingFocus : 1;                      // 0x0278(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bInteractableWhenSelected : 1;                            // 0x0278(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bToggleable : 1;                                          // 0x0278(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bDisplayInputActionWhenNotInteractable : 1;               // 0x0278(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bHideInputActionWithKeyboard : 1;                         // 0x0278(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bShouldUseFallbackDefaultInputAction : 1;                 // 0x0278(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0279(0x0001) MISSED OFFSET
	TEnumAsByte<EButtonClickMethod>                    ClickMethod;                                              // 0x027A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EButtonTouchMethod>                    TouchMethod;                                              // 0x027B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EButtonPressMethod>                    PressMethod;                                              // 0x027C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x027D(0x0003) MISSED OFFSET
	int                                                InputPriority;                                            // 0x0280(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0284(0x0004) MISSED OFFSET
	struct FDataTableRowHandle                         TriggeringInputAction;                                    // 0x0288(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0298(0x0010) MISSED OFFSET
	unsigned char                                      UnknownData05[0x10];                                      // 0x0298(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonButton.OnSelectedChanged
	unsigned char                                      UnknownData06[0x10];                                      // 0x02B8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonButton.OnButtonClicked
	unsigned char                                      UnknownData07[0x10];                                      // 0x02C8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonButton.OnButtonDoubleClicked
	unsigned char                                      UnknownData08[0x10];                                      // 0x02D8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonButton.OnButtonHovered
	unsigned char                                      UnknownData09[0x10];                                      // 0x02E8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonButton.OnButtonUnhovered
	unsigned char                                      UnknownData10[0x30];                                      // 0x02F8(0x0030) MISSED OFFSET
	class UCommonActionWidget*                         InputActionWidget;                                        // 0x0328(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*                    SingleMaterialStyleMID;                                   // 0x0330(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FButtonStyle                                NormalStyle;                                              // 0x0338(0x0278) (NativeAccessSpecifierPrivate)
	struct FButtonStyle                                SelectedStyle;                                            // 0x05B0(0x0278) (NativeAccessSpecifierPrivate)
	struct FButtonStyle                                DisabledStyle;                                            // 0x0828(0x0278) (NativeAccessSpecifierPrivate)
	unsigned char                                      bStopDoubleClickPropagation : 1;                          // 0x0AA0(0x0001) (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData11[0x9F];                                      // 0x0AA1(0x009F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonButton");
		return ptr;
	}


	void StopDoubleClickPropagation();
	void SetTriggeringInputAction(struct FDataTableRowHandle InputActionRow);
	void SetTriggeredInputAction(struct FDataTableRowHandle InputActionRow, class UCommonActivatablePanel* OldPanel);
	void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);
	void SetStyle(class UClass* InStyle);
	void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction);
	void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus);
	void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast);
	void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);
	void SetMinDimensions(int InMinWidth, int InMinHeight);
	void SetIsToggleable(bool bInIsToggleable);
	void SetIsSelected(bool InSelected, bool bGiveClickFeedback);
	void SetIsSelectable(bool bInIsSelectable);
	void SetIsInteractionEnabled(bool bInIsInteractionEnabled);
	void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected);
	void SetInputActionProgressMaterial(struct FSlateBrush InProgressMaterialBrush, struct FName InProgressMaterialParam);
	void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle NewTriggeredAction);
	void OnInputMethodChanged(ECommonInputType CurrentInputType);
	void OnCurrentTextStyleChanged();
	void OnActionProgress(float HeldPercent);
	void OnActionComplete();
	void NativeOnActionProgress(float HeldPercent);
	void NativeOnActionComplete();
	bool IsPressed();
	bool IsInteractionEnabled();
	void HandleTriggeringActionCommited(bool* bPassThrough);
	void HandleFocusReceived();
	void HandleButtonReleased();
	void HandleButtonPressed();
	void HandleButtonClicked();
	class UCommonButtonStyle* GetStyle();
	class UMaterialInstanceDynamic* GetSingleMaterialStyleMID();
	bool GetShouldSelectUponReceivingFocus();
	bool GetSelected();
	bool GetInputAction(struct FDataTableRowHandle* InputActionRow);
	class UClass* GetCurrentTextStyleClass();
	class UCommonTextStyle* GetCurrentTextStyle();
	void GetCurrentCustomPadding(struct FMargin* OutCustomPadding);
	void GetCurrentButtonPadding(struct FMargin* OutButtonPadding);
	void DisableButtonWithReason(struct FText DisabledReason);
	void ClearSelection();
	void BP_OnUnhovered();
	void BP_OnSelected();
	void BP_OnHovered();
	void BP_OnEnabled();
	void BP_OnDoubleClicked();
	void BP_OnDisabled();
	void BP_OnDeselected();
	void BP_OnClicked();
};


// Class CommonUI.CommonWidgetGroupBase
// 0x0000 (0x0028 - 0x0028)
class UCommonWidgetGroupBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonWidgetGroupBase");
		return ptr;
	}


	void RemoveWidget(class UWidget* InWidget);
	void RemoveAll();
	void AddWidget(class UWidget* InWidget);
};


// Class CommonUI.CommonButtonGroup
// 0x0070 (0x0098 - 0x0028)
class UCommonButtonGroup : public UCommonWidgetGroupBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonButtonGroup.OnSelectedButtonChanged
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonButtonGroup.OnHoveredButtonChanged
	unsigned char                                      UnknownData02[0x10];                                      // 0x0048(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonButtonGroup.OnButtonClicked
	unsigned char                                      UnknownData03[0x10];                                      // 0x0058(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonButtonGroup.OnButtonDoubleClicked
	unsigned char                                      UnknownData04[0x10];                                      // 0x0068(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonButtonGroup.OnSelectionCleared
	bool                                               bSelectionRequired;                                       // 0x0078(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0x1F];                                      // 0x0079(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonButtonGroup");
		return ptr;
	}


	void SetSelectionRequired(bool bRequireSelection);
	void SelectPreviousButton(bool bAllowWrap);
	void SelectNextButton(bool bAllowWrap);
	void SelectButtonAtIndex(int ButtonIndex);
	void OnSelectionStateChanged(class UCommonButton* BaseButton, bool bIsSelected);
	void OnHandleButtonDoubleClicked(class UCommonButton* BaseButton);
	void OnHandleButtonClicked(class UCommonButton* BaseButton);
	void OnButtonUnhovered(class UCommonButton* BaseButton);
	void OnButtonHovered(class UCommonButton* BaseButton);
	bool HasAnyButtons();
	int GetSelectedButtonIndex();
	int GetHoveredButtonIndex();
	int GetButtonCount();
	class UCommonButton* GetButtonAtIndex(int Index);
	int FindButtonIndex(class UCommonButton* ButtonToFind);
	void DeselectAll();
};


// Class CommonUI.CommonCustomNavigation
// 0x0010 (0x0278 - 0x0268)
class UCommonCustomNavigation : public UBorder
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0268(0x0010) UNKNOWN PROPERTY: DelegateProperty CommonUI.CommonCustomNavigation.OnNavigationEvent

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonCustomNavigation");
		return ptr;
	}

};


// Class CommonUI.CommonTextBlock
// 0x0028 (0x02C0 - 0x0298)
class UCommonTextBlock : public UTextBlock
{
public:
	class UClass*                                      Style;                                                    // 0x0298(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      ScrollStyle;                                              // 0x02A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bDisplayAllCaps;                                          // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bAutoCollapseWithEmptyText;                               // 0x02A9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x2];                                       // 0x02AA(0x0002) MISSED OFFSET
	float                                              MobileFontSizeMultiplier;                                 // 0x02AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x10];                                      // 0x02B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonTextBlock");
		return ptr;
	}


	void SetWrapTextWidth(int InWrapTextAt);
	void SetTextCase(bool bUseAllCaps);
	void SetStyle(class UClass* InStyle);
	void ResetScrollState();
};


// Class CommonUI.CommonDateTimeTextBlock
// 0x0040 (0x0300 - 0x02C0)
class UCommonDateTimeTextBlock : public UCommonTextBlock
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x02C0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonDateTimeTextBlock");
		return ptr;
	}


	void SetTimespanValue(struct FTimespan InTimespan);
	void SetDateTimeValue(struct FDateTime InDateTime, bool bShowAsCountdown, float InRefreshDelay);
	void SetCountDownCompletionText(struct FText InCompletionText);
	struct FDateTime GetDateTime();
};


// Class CommonUI.CommonGlobalInputHandler
// 0x0048 (0x0070 - 0x0028)
class UCommonGlobalInputHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonGlobalInputHandler");
		return ptr;
	}

};


// Class CommonUI.CommonHierarchicalScrollBox
// 0x0000 (0x0868 - 0x0868)
class UCommonHierarchicalScrollBox : public UScrollBox
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonHierarchicalScrollBox");
		return ptr;
	}

};


// Class CommonUI.CommonInputManager
// 0x00E0 (0x0108 - 0x0028)
class UCommonInputManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET
	TScriptInterface<class UCommonActionHandlerInterface> CurrentlyHeldActionInputHandler;                          // 0x00A8(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UCommonActivatablePanel*>             ActivatablePanelStack;                                    // 0x00B8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UCommonGlobalInputHandler*                   GlobalInputHandler;                                       // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x18];                                      // 0x00D0(0x0018) MISSED OFFSET
	TArray<struct FOperation>                          Operations;                                               // 0x00E8(0x0010) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00F8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonInputManager");
		return ptr;
	}


	void SuspendStartingOperationProcessing();
	bool StopListeningForExistingHeldAction(struct FDataTableRowHandle InputActionDataRow);
	bool StartListeningForExistingHeldAction(struct FDataTableRowHandle InputActionDataRow);
	void SetGlobalInputHandlerPriorityFilter(int InFilterPriority);
	void ResumeStartingOperationProcessing();
	void PushActivatablePanel(class UCommonActivatablePanel* ActivatablePanel, bool bIntroPanel, bool bOutroPanelBelow);
	void PopActivatablePanel(class UCommonActivatablePanel* ActivatablePanel);
	bool IsPanelOnStack(class UCommonActivatablePanel* InPanel);
	bool IsInputSuspended();
	class UCommonActivatablePanel* GetTopPanel();
	int GetGlobalInputHandlerPriorityFilter();
	bool GetAvailableInputActions(TArray<struct FCommonInputActionHandlerData>* AvailableInputActions);
};


// Class CommonUI.CommonInputReflector
// 0x0030 (0x0260 - 0x0230)
class UCommonInputReflector : public UCommonUserWidget
{
public:
	class UClass*                                      ButtonType;                                               // 0x0230(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UCommonButton*>                       ActiveButtons;                                            // 0x0238(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UCommonButton*>                       InactiveButtons;                                          // 0x0248(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0258(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonInputReflector");
		return ptr;
	}


	void OnButtonAdded(class UCommonButton* AddedButton, struct FCommonInputActionHandlerData Data);
};


// Class CommonUI.CommonLazyImage
// 0x00C8 (0x02D0 - 0x0208)
class UCommonLazyImage : public UImage
{
public:
	struct FSlateBrush                                 LoadingBackgroundBrush;                                   // 0x0208(0x0088) (Edit, NativeAccessSpecifierPrivate)
	struct FName                                       MaterialTextureParamName;                                 // 0x0290(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0298(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonLazyImage.BP_OnLoadingStateChanged
	unsigned char                                      UnknownData01[0x28];                                      // 0x02A8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonLazyImage");
		return ptr;
	}


	void SetMaterialTextureParamName(struct FName TextureParamName);
	void SetBrushFromLazyTexture(bool bMatchSize);
	void SetBrushFromLazyMaterial();
	void SetBrushFromLazyDisplayAsset(bool bMatchTextureSize);
	bool IsLoading();
};


// Class CommonUI.CommonLazyWidget
// 0x00F0 (0x01F0 - 0x0100)
class UCommonLazyWidget : public UWidget
{
public:
	struct FSlateBrush                                 LoadingBackgroundBrush;                                   // 0x0100(0x0088) (Edit, NativeAccessSpecifierPrivate)
	class UUserWidget*                                 Content;                                                  // 0x0188(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0190(0x0028) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0190(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonLazyWidget.BP_OnLoadingStateChanged
	unsigned char                                      UnknownData02[0x28];                                      // 0x01C8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonLazyWidget");
		return ptr;
	}


	void SetLazyContent();
	bool IsLoading();
};


// Class CommonUI.CommonListView
// 0x0000 (0x0360 - 0x0360)
class UCommonListView : public UListView
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonListView");
		return ptr;
	}


	void SetEntrySpacing(float InEntrySpacing);
};


// Class CommonUI.LoadGuardSlot
// 0x0028 (0x0060 - 0x0038)
class ULoadGuardSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.LoadGuardSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(struct FMargin InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class CommonUI.CommonLoadGuard
// 0x0110 (0x0228 - 0x0118)
class UCommonLoadGuard : public UContentWidget
{
public:
	struct FSlateBrush                                 LoadingBackgroundBrush;                                   // 0x0118(0x0088) (Edit, NativeAccessSpecifierPrivate)
	TEnumAsByte<EHorizontalAlignment>                  ThrobberAlignment;                                        // 0x01A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01A1(0x0003) MISSED OFFSET
	struct FMargin                                     ThrobberPadding;                                          // 0x01A4(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01B4(0x0004) MISSED OFFSET
	struct FText                                       LoadingText;                                              // 0x01B8(0x0018) (Edit, NativeAccessSpecifierPrivate)
	class UClass*                                      TextStyle;                                                // 0x01D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x10];                                      // 0x01D8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonLoadGuard.BP_OnLoadingStateChanged
	struct FSoftObjectPath                             SpinnerMaterialPath;                                      // 0x01E8(0x0018) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0200(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonLoadGuard");
		return ptr;
	}


	void SetLoadingText(struct FText InLoadingText);
	void SetIsLoading(bool bInIsLoading);
	void OnAssetLoaded__DelegateSignature(class UObject* Object);
	bool IsLoading();
	void BP_GuardAndLoadAsset();
};


// Class CommonUI.CommonNumericTextBlock
// 0x0080 (0x0340 - 0x02C0)
class UCommonNumericTextBlock : public UCommonTextBlock
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02C0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonNumericTextBlock.OnOutroEvent
	unsigned char                                      UnknownData01[0x10];                                      // 0x02D0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonNumericTextBlock.OnInterpolationEndedEvent
	float                                              CurrentNumericValue;                                      // 0x02E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECommonNumericType                                 NumericType;                                              // 0x02E4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02E5(0x0003) MISSED OFFSET
	struct FCommonNumberFormattingOptions              FormattingSpecification;                                  // 0x02E8(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                              EaseOutInterpolationExponent;                             // 0x02FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterpolationUpdateInterval;                              // 0x0300(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PostInterpolationShrinkDuration;                          // 0x0304(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PerformSizeInterpolation;                                 // 0x0308(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsPercentage;                                             // 0x0309(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData03[0x36];                                      // 0x030A(0x0036) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonNumericTextBlock");
		return ptr;
	}


	void SetNumericType(ECommonNumericType InNumericType);
	void SetCurrentValue(float NewValue);
	void OnOutro__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);
	void OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted);
	bool IsInterpolatingNumericValue();
	void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset);
	float GetTargetValue();
};


// Class CommonUI.CommonPoolableWidgetInterface
// 0x0000 (0x0028 - 0x0028)
class UCommonPoolableWidgetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonPoolableWidgetInterface");
		return ptr;
	}


	void OnReleaseToPool();
	void OnAcquireFromPool();
};


// Class CommonUI.CommonPopupButton
// 0x0010 (0x0B50 - 0x0B40)
class UCommonPopupButton : public UCommonButton
{
public:
	class UMenuAnchor*                                 PopupMenuAnchor;                                          // 0x0B40(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonPopupMenu*                            PopupMenu;                                                // 0x0B48(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonPopupButton");
		return ptr;
	}


	class UWidget* GetMenuAnchorWidget();
};


// Class CommonUI.CommonPopupMenu
// 0x0018 (0x0330 - 0x0318)
class UCommonPopupMenu : public UCommonActivatablePanel
{
public:
	bool                                               bUseInputStack;                                           // 0x0318(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0319(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UMenuAnchor>                  OwningMenuAnchor;                                         // 0x031C(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UObject>                      ContextProvidingObject;                                   // 0x0324(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x032C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonPopupMenu");
		return ptr;
	}


	void SetOwningMenuAnchor(class UMenuAnchor* MenuAnchor);
	void SetContextProvider(class UObject* ContextProvidingObject);
	void RequestClose();
	void OnIsOpenChanged(bool IsOpen);
	void HandlePreDifferentContextProviderSet();
	void HandlePostDifferentContextProviderSet();
};


// Class CommonUI.CommonRichTextBlock
// 0x0038 (0x0698 - 0x0660)
class UCommonRichTextBlock : public URichTextBlock
{
public:
	ERichTextInlineIconDisplayMode                     InlineIconDisplayMode;                                    // 0x0660(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTintInlineIcon;                                          // 0x0661(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0662(0x0006) MISSED OFFSET
	class UClass*                                      DefaultTextStyleOverrideClass;                            // 0x0668(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              MobileFontSizeMultiplier;                                 // 0x0670(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0674(0x0004) MISSED OFFSET
	class UClass*                                      ScrollStyle;                                              // 0x0678(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bDisplayAllCaps;                                          // 0x0680(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x17];                                      // 0x0681(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonRichTextBlock");
		return ptr;
	}

};


// Class CommonUI.CommonRotator
// 0x0058 (0x0B98 - 0x0B40)
class UCommonRotator : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0B40(0x0010) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0B40(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonRotator.OnRotated
	unsigned char                                      UnknownData02[0x18];                                      // 0x0B60(0x0018) MISSED OFFSET
	class UCommonTextBlock*                            MyText;                                                   // 0x0B78(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0B80(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonRotator");
		return ptr;
	}


	void ShiftTextRight();
	void ShiftTextLeft();
	void SetSelectedItem(int InValue);
	void PopulateTextLabels(TArray<struct FText> Labels);
	struct FText GetSelectedText();
	int GetSelectedIndex();
	void BP_OnOptionsPopulated(int Count);
	void BP_OnOptionSelected(int Index);
};


// Class CommonUI.CommonTabListWidget
// 0x00C8 (0x02F8 - 0x0230)
class UCommonTabListWidget : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0230(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonTabListWidget.OnTabSelected
	unsigned char                                      UnknownData01[0x10];                                      // 0x0240(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonTabListWidget.OnTabButtonCreated
	unsigned char                                      UnknownData02[0x10];                                      // 0x0250(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonTabListWidget.OnTabButtonRemoved
	struct FDataTableRowHandle                         NextTabInputActionData;                                   // 0x0260(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                         PreviousTabInputActionData;                               // 0x0270(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bAutoListenForInput;                                      // 0x0280(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0281(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UCommonWidgetSwitcher>        LinkedSwitcher;                                           // 0x0284(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData04[0x4];                                       // 0x028C(0x0004) MISSED OFFSET
	TMap<struct FName, struct FCommonRegisteredTabInfo> RegisteredTabsByID;                                       // 0x0290(0x0050) (ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UCommonButtonGroup*                          TabButtonGroup;                                           // 0x02E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData05[0x10];                                      // 0x02E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonTabListWidget");
		return ptr;
	}


	void SetTabVisibility(struct FName TabNameID, ESlateVisibility NewVisibility);
	void SetTabInteractionEnabled(struct FName TabNameID, bool bEnable);
	void SetTabEnabled(struct FName TabNameID, bool bEnable);
	void SetListeningForInput(bool bShouldListen);
	void SetLinkedSwitcher(class UCommonWidgetSwitcher* CommonSwitcher);
	bool SelectTabByID(struct FName TabNameID, bool bSuppressClickFeedback);
	bool RemoveTab(struct FName TabNameID);
	void RemoveAllTabs();
	bool RegisterTab(struct FName TabNameID, class UClass* ButtonWidgetType, class UWidget* ContentWidget);
	void OnTabSelected__DelegateSignature(struct FName TabId);
	void OnTabButtonRemoved__DelegateSignature(struct FName TabId, class UCommonButton* TabButton);
	void OnTabButtonCreated__DelegateSignature(struct FName TabId, class UCommonButton* TabButton);
	void HandleTabRemoved(struct FName TabNameID, class UCommonButton* TabButton);
	void HandleTabCreated(struct FName TabNameID, class UCommonButton* TabButton);
	void HandleTabButtonSelected(class UCommonButton* SelectedTabButton, int ButtonIndex);
	void HandlePreviousTabInputAction(bool* bPassThrough);
	void HandlePreLinkedSwitcherChanged_BP();
	void HandlePostLinkedSwitcherChanged_BP();
	void HandleNextTabInputAction(bool* bPassThrough);
	struct FName GetTabIdAtIndex(int Index);
	int GetTabCount();
	class UCommonButton* GetTabButtonByID(struct FName TabNameID);
	struct FName GetSelectedTabId();
	class UCommonWidgetSwitcher* GetLinkedSwitcher();
	struct FName GetActiveTab();
	void DisableTabWithReason(struct FName TabNameID, struct FText Reason);
};


// Class CommonUI.CommonTextStyle
// 0x0120 (0x0148 - 0x0028)
class UCommonTextStyle : public UObject
{
public:
	struct FSlateFontInfo                              Font;                                                     // 0x0028(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                    // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUsesDropShadow;                                          // 0x0088(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	struct FVector2D                                   ShadowOffset;                                             // 0x008C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ShadowColor;                                              // 0x0094(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     Margin;                                                   // 0x00A4(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	struct FSlateBrush                                 StrikeBrush;                                              // 0x00B8(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              LineHeightPercentage;                                     // 0x0140(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0144(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonTextStyle");
		return ptr;
	}


	void GetStrikeBrush(struct FSlateBrush* OutStrikeBrush);
	void GetShadowOffset(struct FVector2D* OutShadowOffset);
	void GetShadowColor(struct FLinearColor* OutColor);
	void GetMargin(struct FMargin* OutMargin);
	float GetLineHeightPercentage();
	void GetFont(struct FSlateFontInfo* OutFont);
	void GetColor(struct FLinearColor* OutColor);
};


// Class CommonUI.CommonTextScrollStyle
// 0x0018 (0x0040 - 0x0028)
class UCommonTextScrollStyle : public UObject
{
public:
	float                                              Speed;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartDelay;                                               // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndDelay;                                                 // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeInDelay;                                              // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeOutDelay;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonTextScrollStyle");
		return ptr;
	}

};


// Class CommonUI.CommonTileView
// 0x0000 (0x0380 - 0x0380)
class UCommonTileView : public UTileView
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonTileView");
		return ptr;
	}

};


// Class CommonUI.CommonTreeView
// 0x0000 (0x03B8 - 0x03B8)
class UCommonTreeView : public UTreeView
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonTreeView");
		return ptr;
	}

};


// Class CommonUI.CommonUIEditorSettings
// 0x0080 (0x00A8 - 0x0028)
class UCommonUIEditorSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftClassProperty CommonUI.CommonUIEditorSettings.TemplateTextStyle
	unsigned char                                      UnknownData01[0x28];                                      // 0x0050(0x0028) UNKNOWN PROPERTY: SoftClassProperty CommonUI.CommonUIEditorSettings.TemplateButtonStyle
	unsigned char                                      UnknownData02[0x28];                                      // 0x0078(0x0028) UNKNOWN PROPERTY: SoftClassProperty CommonUI.CommonUIEditorSettings.TemplateBorderStyle
	unsigned char                                      UnknownData03[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonUIEditorSettings");
		return ptr;
	}

};


// Class CommonUI.CommonUILibrary
// 0x0000 (0x0028 - 0x0028)
class UCommonUILibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonUILibrary");
		return ptr;
	}


	static class UWidget* FindParentWidgetOfType(class UWidget* StartingWidget, class UClass* Type);
};


// Class CommonUI.CommonUIRichTextData
// 0x0008 (0x0030 - 0x0028)
class UCommonUIRichTextData : public UObject
{
public:
	class UDataTable*                                  InlineIconSet;                                            // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonUIRichTextData");
		return ptr;
	}

};


// Class CommonUI.CommonUISettings
// 0x0128 (0x0150 - 0x0028)
class UCommonUISettings : public UObject
{
public:
	bool                                               bAutoLoadData;                                            // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0029(0x0028) UNKNOWN PROPERTY: SoftObjectProperty CommonUI.CommonUISettings.DefaultImageResourceObject
	unsigned char                                      UnknownData02[0x28];                                      // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty CommonUI.CommonUISettings.DefaultThrobberMaterial
	unsigned char                                      UnknownData03[0x28];                                      // 0x0080(0x0028) UNKNOWN PROPERTY: SoftClassProperty CommonUI.CommonUISettings.DefaultRichTextDataClass
	unsigned char                                      UnknownData04[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
	class UObject*                                     DefaultImageResourceObjectInstance;                       // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                          DefaultThrobberMaterialInstance;                          // 0x00B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSlateBrush                                 DefaultThrobberBrush;                                     // 0x00C0(0x0088) (Transient, NativeAccessSpecifierPrivate)
	class UCommonUIRichTextData*                       RichTextDataInstance;                                     // 0x0148(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonUISettings");
		return ptr;
	}

};


// Class CommonUI.CommonUISubsystem
// 0x0038 (0x0068 - 0x0030)
class UCommonUISubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonUISubsystem.OnInputMethodChanged
	unsigned char                                      UnknownData01[0x10];                                      // 0x0040(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonUISubsystem.OnInputSuspensionChanged
	unsigned char                                      UnknownData02[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
	class UCommonInputManager*                         CommonInputManager;                                       // 0x0060(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonUISubsystem");
		return ptr;
	}


	void InputSuspensionChanged__DelegateSignature(bool bInputSuspended);
	void InputMethodChangedDelegate__DelegateSignature(bool bUsingGamepad);
	class UCommonInputManager* GetInputManager();
	struct FSlateBrush GetInputActionButtonIcon(struct FDataTableRowHandle InputActionRowHandle, ECommonInputType InputType, ECommonGamepadType GamepadType);
};


// Class CommonUI.CommonVideoPlayer
// 0x0110 (0x0210 - 0x0100)
class UCommonVideoPlayer : public UWidget
{
public:
	class UMediaSource*                                Video;                                                    // 0x0100(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaPlayer*                                MediaPlayer;                                              // 0x0108(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaTexture*                               MediaTexture;                                             // 0x0110(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterial*                                   VideoMaterial;                                            // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaSoundComponent*                        SoundComponent;                                           // 0x0120(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSlateBrush                                 VideoBrush;                                               // 0x0128(0x0088) (Transient, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x60];                                      // 0x01B0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonVideoPlayer");
		return ptr;
	}

};


// Class CommonUI.CommonVisibilityWidget
// 0x0010 (0x0298 - 0x0288)
class UCommonVisibilityWidget : public UCommonBorder
{
public:
	bool                                               bShowForGamepad;                                          // 0x0288(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowForMouseAndKeyboard;                                 // 0x0289(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowForTouch;                                            // 0x028A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowForPC;                                               // 0x028B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowForMac;                                              // 0x028C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowForPS4;                                              // 0x028D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowForXBox;                                             // 0x028E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowForIOS;                                              // 0x028F(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowForAndroid;                                          // 0x0290(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowForErebus;                                           // 0x0291(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESlateVisibility                                   VisibleType;                                              // 0x0292(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESlateVisibility                                   HiddenType;                                               // 0x0293(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0294(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonVisibilityWidget");
		return ptr;
	}

};


// Class CommonUI.CommonWidgetCarousel
// 0x0040 (0x0158 - 0x0118)
class UCommonWidgetCarousel : public UPanelWidget
{
public:
	int                                                ActiveWidgetIndex;                                        // 0x0118(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x011C(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonWidgetCarousel.OnCurrentPageIndexChanged
	unsigned char                                      UnknownData02[0x28];                                      // 0x0130(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonWidgetCarousel");
		return ptr;
	}


	void SetActiveWidgetIndex(int Index);
	void SetActiveWidget(class UWidget* Widget);
	void PreviousPage();
	void NextPage();
	class UWidget* GetWidgetAtIndex(int Index);
	int GetActiveWidgetIndex();
	void EndAutoScrolling();
	void BeginAutoScrolling(float ScrollInterval);
};


// Class CommonUI.CommonWidgetCarouselNavBar
// 0x0048 (0x0148 - 0x0100)
class UCommonWidgetCarouselNavBar : public UWidget
{
public:
	class UClass*                                      ButtonWidgetType;                                         // 0x0100(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     ButtonPadding;                                            // 0x0108(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET
	class UCommonWidgetCarousel*                       LinkedCarousel;                                           // 0x0128(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonGroup*                          ButtonGroup;                                              // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCommonButton*>                       Buttons;                                                  // 0x0138(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonWidgetCarouselNavBar");
		return ptr;
	}


	void SetLinkedCarousel(class UCommonWidgetCarousel* CommonCarousel);
	void HandlePageChanged(class UCommonWidgetCarousel* CommonCarousel, int PageIndex);
	void HandleButtonClicked(class UCommonButton* AssociatedButton, int ButtonIndex);
};


// Class CommonUI.CommonWidgetSwitcher
// 0x0068 (0x0198 - 0x0130)
class UCommonWidgetSwitcher : public UWidgetSwitcher
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0130(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonWidgetSwitcher.OnActiveWidgetDeactivated
	unsigned char                                      UnknownData01[0x10];                                      // 0x0140(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonWidgetSwitcher.OnActiveWidgetChanged
	unsigned char                                      UnknownData02[0x18];                                      // 0x0150(0x0018) MISSED OFFSET
	ECommonSwitcherTransition                          TransitionType;                                           // 0x0168(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	ETransitionCurve                                   TransitionCurveType;                                      // 0x0169(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x2];                                       // 0x016A(0x0002) MISSED OFFSET
	float                                              TransitionDuration;                                       // 0x016C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x22];                                      // 0x0170(0x0022) MISSED OFFSET
	bool                                               bWidgetActivationEnabled;                                 // 0x0192(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bOutroPanelBelow;                                         // 0x0193(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0194(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonWidgetSwitcher");
		return ptr;
	}


	void SetDisableTransitionAnimation(bool bDisableAnimation);
	void SetActiveWidgetIndex_Advanced(int Index, bool AttemptActivationChange);
	void SetActiveWidget_Advanced(class UWidget* Widget, bool AttemptActivationChange);
	bool HasWidgets();
	void HandleActiveWidgetDeactivated(class UCommonActivatablePanel* DeactivatedPanel);
	void DeactivateWidget();
	void ActivateWidget();
	void ActivatePreviousWidget(bool bCanWrap);
	void ActivateNextWidget(bool bCanWrap);
};


// Class CommonUI.CommonWidgetStack
// 0x0000 (0x0198 - 0x0198)
class UCommonWidgetStack : public UCommonWidgetSwitcher
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonWidgetStack");
		return ptr;
	}


	void PushWidget(class UWidget* InWidget);
	class UWidget* PopWidget();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
