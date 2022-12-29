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

// Class UMG.Visual
// 0x0000 (0x0028 - 0x0028)
class UVisual : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Visual");
		return ptr;
	}

};


// Class UMG.Widget
// 0x00D8 (0x0100 - 0x0028)
class UWidget : public UVisual
{
public:
	class UPanelSlot*                                  Slot;                                                     // 0x0028(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.Widget.bIsEnabledDelegate
	struct FText                                       ToolTipText;                                              // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0058(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.Widget.ToolTipTextDelegate
	class UWidget*                                     ToolTipWidget;                                            // 0x0068(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0070(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.Widget.ToolTipWidgetDelegate
	unsigned char                                      UnknownData03[0x10];                                      // 0x0080(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.Widget.VisibilityDelegate
	struct FWidgetTransform                            RenderTransform;                                          // 0x0090(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   RenderTransformPivot;                                     // 0x00AC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsVariable : 1;                                          // 0x00B4(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCreatedByConstructionScript : 1;                         // 0x00B4(0x0001) (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsEnabled : 1;                                           // 0x00B4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_Cursor : 1;                                     // 0x00B4(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsVolatile : 1;                                          // 0x00B4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<EMouseCursor>                          Cursor;                                                   // 0x00B5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EWidgetClipping                                    Clipping;                                                 // 0x00B6(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESlateVisibility                                   Visibility;                                               // 0x00B7(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RenderOpacity;                                            // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	class UWidgetNavigation*                           Navigation;                                               // 0x00C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFlowDirectionPreference                           FlowDirectionPreference;                                  // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x27];                                      // 0x00C9(0x0027) MISSED OFFSET
	TArray<class UPropertyBinding*>                    NativeBindings;                                           // 0x00F0(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Widget");
		return ptr;
	}


	void SetVisibility(ESlateVisibility InVisibility);
	void SetUserFocus(class APlayerController* PlayerController);
	void SetToolTipText(struct FText InToolTipText);
	void SetToolTip(class UWidget* Widget);
	void SetRenderTranslation(struct FVector2D Translation);
	void SetRenderTransformPivot(struct FVector2D Pivot);
	void SetRenderTransform(struct FWidgetTransform InTransform);
	void SetRenderShear(struct FVector2D Shear);
	void SetRenderScale(struct FVector2D Scale);
	void SetRenderOpacity(float InOpacity);
	void SetRenderAngle(float Angle);
	void SetNavigationRuleExplicit(EUINavigation Direction, class UWidget* InWidget);
	void SetNavigationRuleCustomBoundary(EUINavigation Direction);
	void SetNavigationRuleCustom(EUINavigation Direction);
	void SetNavigationRuleBase(EUINavigation Direction, EUINavigationRule Rule);
	void SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, struct FName WidgetToFocus);
	void SetKeyboardFocus();
	void SetIsEnabled(bool bInIsEnabled);
	void SetCursor(TEnumAsByte<EMouseCursor> InCursor);
	void SetClipping(EWidgetClipping InClipping);
	void SetAllNavigationRules(EUINavigationRule Rule, struct FName WidgetToFocus);
	void ResetCursor();
	void RemoveFromParent();
	struct FEventReply OnReply__DelegateSignature();
	struct FEventReply OnPointerEvent__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent);
	bool IsVisible();
	bool IsHovered();
	void InvalidateLayoutAndVolatility();
	bool HasUserFocusedDescendants(class APlayerController* PlayerController);
	bool HasUserFocus(class APlayerController* PlayerController);
	bool HasMouseCaptureByUser(int UserIndex, int PointerIndex);
	bool HasMouseCapture();
	bool HasKeyboardFocus();
	bool HasFocusedDescendants();
	bool HasAnyUserFocus();
	class UWidget* GetWidget__DelegateSignature();
	ESlateVisibility GetVisibility();
	struct FGeometry GetTickSpaceGeometry();
	struct FText GetText__DelegateSignature();
	ESlateVisibility GetSlateVisibility__DelegateSignature();
	struct FSlateColor GetSlateColor__DelegateSignature();
	struct FSlateBrush GetSlateBrush__DelegateSignature();
	float GetRenderOpacity();
	class UPanelWidget* GetParent();
	struct FGeometry GetPaintSpaceGeometry();
	class APlayerController* GetOwningPlayer();
	class ULocalPlayer* GetOwningLocalPlayer();
	TEnumAsByte<EMouseCursor> GetMouseCursor__DelegateSignature();
	struct FLinearColor GetLinearColor__DelegateSignature();
	bool GetIsEnabled();
	int GetInt32__DelegateSignature();
	class UGameInstance* GetGameInstance();
	float GetFloat__DelegateSignature();
	struct FVector2D GetDesiredSize();
	EWidgetClipping GetClipping();
	ECheckBoxState GetCheckBoxState__DelegateSignature();
	struct FGeometry GetCachedGeometry();
	bool GetBool__DelegateSignature();
	class UWidget* GenerateWidgetForString__DelegateSignature(struct FString Item);
	class UWidget* GenerateWidgetForObject__DelegateSignature(class UObject* Item);
	void ForceVolatile(bool bForce);
	void ForceLayoutPrepass();
};


// Class UMG.Slider
// 0x03E8 (0x04E8 - 0x0100)
class USlider : public UWidget
{
public:
	float                                              Value;                                                    // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0104(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.Slider.ValueDelegate
	unsigned char                                      UnknownData01[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	struct FSliderStyle                                WidgetStyle;                                              // 0x0118(0x0340) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0458(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0459(0x0003) MISSED OFFSET
	struct FLinearColor                                SliderBarColor;                                           // 0x045C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                SliderHandleColor;                                        // 0x046C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IndentHandle;                                             // 0x047C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Locked;                                                   // 0x047D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               MouseUsesStep;                                            // 0x047E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RequiresControllerLock;                                   // 0x047F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StepSize;                                                 // 0x0480(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsFocusable;                                              // 0x0484(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0485(0x0003) MISSED OFFSET
	unsigned char                                      UnknownData04[0x10];                                      // 0x0485(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.Slider.OnMouseCaptureBegin
	unsigned char                                      UnknownData05[0x10];                                      // 0x0498(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.Slider.OnMouseCaptureEnd
	unsigned char                                      UnknownData06[0x10];                                      // 0x04A8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.Slider.OnControllerCaptureBegin
	unsigned char                                      UnknownData07[0x10];                                      // 0x04B8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.Slider.OnControllerCaptureEnd
	unsigned char                                      UnknownData08[0x10];                                      // 0x04C8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.Slider.OnValueChanged
	unsigned char                                      UnknownData09[0x10];                                      // 0x04D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Slider");
		return ptr;
	}


	void SetValue(float InValue);
	void SetStepSize(float InValue);
	void SetSliderHandleColor(struct FLinearColor InValue);
	void SetSliderBarColor(struct FLinearColor InValue);
	void SetLocked(bool InValue);
	void SetIndentHandle(bool InValue);
	float GetValue();
};


// Class UMG.UserWidget
// 0x0128 (0x0228 - 0x0100)
class UUserWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0108(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0118(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.UserWidget.ColorAndOpacityDelegate
	struct FSlateColor                                 ForegroundColor;                                          // 0x0128(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0150(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.UserWidget.ForegroundColorDelegate
	struct FMargin                                     Padding;                                                  // 0x0160(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class UUMGSequencePlayer*>                  ActiveSequencePlayers;                                    // 0x0170(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class UUMGSequencePlayer*>                  StoppedSequencePlayers;                                   // 0x0180(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FNamedSlotBinding>                   NamedSlotBindings;                                        // 0x0190(0x0010) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UWidgetTree*                                 WidgetTree;                                               // 0x01A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Priority;                                                 // 0x01A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsKeyboardFocus : 1;                               // 0x01AC(0x0001) (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsFocusable : 1;                                         // 0x01AC(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bStopAction : 1;                                          // 0x01AC(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bHasScriptImplementedTick : 1;                            // 0x01AC(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bHasScriptImplementedPaint : 1;                           // 0x01AC(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03 : 2;                                        // 0x01AC(0x0001)
	unsigned char                                      bCookedWidgetTree : 1;                                    // 0x01AC(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0xB];                                       // 0x01AD(0x000B) MISSED OFFSET
	EWidgetTickFrequency                               TickFrequency;                                            // 0x01B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData05[0x7];                                       // 0x01B9(0x0007) MISSED OFFSET
	class UInputComponent*                             InputComponent;                                           // 0x01C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FAnimationEventBinding>              AnimationCallbacks;                                       // 0x01C8(0x0010) (ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData06[0x50];                                      // 0x01D8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UserWidget");
		return ptr;
	}


	void UnregisterInputComponent();
	void UnbindFromAnimationStarted(class UWidgetAnimation* Animation);
	void UnbindFromAnimationFinished(class UWidgetAnimation* Animation);
	void UnbindAllFromAnimationStarted(class UWidgetAnimation* Animation);
	void UnbindAllFromAnimationFinished(class UWidgetAnimation* Animation);
	void Tick(struct FGeometry MyGeometry, float InDeltaTime);
	void StopListeningForInputAction(struct FName ActionName, TEnumAsByte<EInputEvent> EventType);
	void StopListeningForAllInputActions();
	void StopAnimationsAndLatentActions();
	void StopAnimation(class UWidgetAnimation* InAnimation);
	void StopAllAnimations();
	void SetPositionInViewport(struct FVector2D Position, bool bRemoveDPIScale);
	void SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed);
	void SetPadding(struct FMargin InPadding);
	void SetOwningPlayer(class APlayerController* LocalPlayerController);
	void SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int NumLoopsToPlay);
	void SetInputActionPriority(int NewPriority);
	void SetInputActionBlocking(bool bShouldBlock);
	void SetForegroundColor(struct FSlateColor InForegroundColor);
	void SetDesiredSizeInViewport(struct FVector2D Size);
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity);
	void SetAnchorsInViewport(struct FAnchors Anchors);
	void SetAlignmentInViewport(struct FVector2D Alignment);
	void ReverseAnimation(class UWidgetAnimation* InAnimation);
	void RemoveFromViewport();
	void RegisterInputComponent();
	void PreConstruct(bool IsDesignTime);
	void PlaySound(class USoundBase* SoundToPlay);
	class UUMGSequencePlayer* PlayAnimationTimeRange(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed);
	class UUMGSequencePlayer* PlayAnimationReverse(class UWidgetAnimation* InAnimation, float PlaybackSpeed);
	class UUMGSequencePlayer* PlayAnimationForward(class UWidgetAnimation* InAnimation, float PlaybackSpeed);
	class UUMGSequencePlayer* PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed);
	float PauseAnimation(class UWidgetAnimation* InAnimation);
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent);
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent);
	struct FEventReply OnTouchGesture(struct FGeometry MyGeometry, struct FPointerEvent GestureEvent);
	struct FEventReply OnTouchForceChanged(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent);
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent);
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent);
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent);
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent);
	void OnPaint(struct FPaintContext* Context);
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent);
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent);
	void OnMouseLeave(struct FPointerEvent MouseEvent);
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent);
	void OnMouseCaptureLost();
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent);
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent);
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent InMouseEvent);
	struct FEventReply OnMotionDetected(struct FGeometry MyGeometry, struct FMotionEvent InMotionEvent);
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent);
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent);
	struct FEventReply OnKeyChar(struct FGeometry MyGeometry, struct FCharacterEvent InCharacterEvent);
	void OnInitialized();
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent);
	void OnFocusLost(struct FFocusEvent InFocusEvent);
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, class UDragDropOperation* Operation);
	bool OnDragOver(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, class UDragDropOperation* Operation);
	void OnDragLeave(struct FPointerEvent PointerEvent, class UDragDropOperation* Operation);
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, class UDragDropOperation* Operation);
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, class UDragDropOperation** Operation);
	void OnDragCancelled(struct FPointerEvent PointerEvent, class UDragDropOperation* Operation);
	void OnAnimationStarted(class UWidgetAnimation* Animation);
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent);
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent);
	void ListenForInputAction(struct FName ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume);
	bool IsPlayingAnimation();
	bool IsListeningForInputAction(struct FName ActionName);
	bool IsInViewport();
	bool IsInteractable();
	bool IsAnyAnimationPlaying();
	bool IsAnimationPlayingForward(class UWidgetAnimation* InAnimation);
	bool IsAnimationPlaying(class UWidgetAnimation* InAnimation);
	class APawn* GetOwningPlayerPawn();
	bool GetIsVisible();
	float GetAnimationCurrentTime(class UWidgetAnimation* InAnimation);
	struct FAnchors GetAnchorsInViewport();
	struct FVector2D GetAlignmentInViewport();
	void Destruct();
	void Construct();
	void CancelLatentActions();
	void BindToAnimationStarted(class UWidgetAnimation* Animation);
	void BindToAnimationFinished(class UWidgetAnimation* Animation);
	void BindToAnimationEvent(class UWidgetAnimation* Animation, EWidgetAnimationEvent AnimationEvent, struct FName UserTag);
	void AddToViewport(int ZOrder);
	bool AddToPlayerScreen(int ZOrder);
};


// Class UMG.PanelWidget
// 0x0018 (0x0118 - 0x0100)
class UPanelWidget : public UWidget
{
public:
	TArray<class UPanelSlot*>                          Slots;                                                    // 0x0100(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0110(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.PanelWidget");
		return ptr;
	}


	bool RemoveChildAt(int Index);
	bool RemoveChild(class UWidget* Content);
	bool HasChild(class UWidget* Content);
	bool HasAnyChildren();
	int GetChildrenCount();
	int GetChildIndex(class UWidget* Content);
	class UWidget* GetChildAt(int Index);
	TArray<class UWidget*> GetAllChildren();
	void ClearChildren();
	class UPanelSlot* AddChild(class UWidget* Content);
};


// Class UMG.ContentWidget
// 0x0000 (0x0118 - 0x0118)
class UContentWidget : public UPanelWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ContentWidget");
		return ptr;
	}


	class UPanelSlot* SetContent(class UWidget* Content);
	class UPanelSlot* GetContentSlot();
	class UWidget* GetContent();
};


// Class UMG.Border
// 0x0150 (0x0268 - 0x0118)
class UBorder : public UContentWidget
{
public:
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0118(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0119(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShowEffectWhenDisabled : 1;                              // 0x011A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x011B(0x0001) MISSED OFFSET
	struct FLinearColor                                ContentColorAndOpacity;                                   // 0x011C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x012C(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.Border.ContentColorAndOpacityDelegate
	struct FMargin                                     Padding;                                                  // 0x013C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	struct FSlateBrush                                 Background;                                               // 0x0150(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x10];                                      // 0x01D8(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.Border.BackgroundDelegate
	struct FLinearColor                                BrushColor;                                               // 0x01E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x10];                                      // 0x01F8(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.Border.BrushColorDelegate
	struct FVector2D                                   DesiredSizeScale;                                         // 0x0208(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFlipForRightToLeftFlowDirection;                         // 0x0210(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0211(0x0003) MISSED OFFSET
	unsigned char                                      UnknownData06[0x10];                                      // 0x0211(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.Border.OnMouseButtonDownEvent
	unsigned char                                      UnknownData07[0x10];                                      // 0x0224(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.Border.OnMouseButtonUpEvent
	unsigned char                                      UnknownData08[0x10];                                      // 0x0234(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.Border.OnMouseMoveEvent
	unsigned char                                      UnknownData09[0x10];                                      // 0x0244(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.Border.OnMouseDoubleClickEvent
	unsigned char                                      UnknownData10[0x14];                                      // 0x0254(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Border");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(struct FMargin InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetDesiredSizeScale(struct FVector2D InScale);
	void SetContentColorAndOpacity(struct FLinearColor InContentColorAndOpacity);
	void SetBrushFromTexture(class UTexture2D* Texture);
	void SetBrushFromMaterial(class UMaterialInterface* Material);
	void SetBrushFromAsset(class USlateBrushAsset* Asset);
	void SetBrushColor(struct FLinearColor InBrushColor);
	void SetBrush(struct FSlateBrush InBrush);
	class UMaterialInstanceDynamic* GetDynamicMaterial();
};


// Class UMG.Button
// 0x0308 (0x0420 - 0x0118)
class UButton : public UContentWidget
{
public:
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0118(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FButtonStyle                                WidgetStyle;                                              // 0x0120(0x0278) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0398(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                BackgroundColor;                                          // 0x03A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EButtonClickMethod>                    ClickMethod;                                              // 0x03B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EButtonTouchMethod>                    TouchMethod;                                              // 0x03B9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EButtonPressMethod>                    PressMethod;                                              // 0x03BA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsFocusable;                                              // 0x03BB(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x03BC(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.Button.OnClicked
	unsigned char                                      UnknownData02[0x10];                                      // 0x03D0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.Button.OnPressed
	unsigned char                                      UnknownData03[0x10];                                      // 0x03E0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.Button.OnReleased
	unsigned char                                      UnknownData04[0x10];                                      // 0x03F0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.Button.OnHovered
	unsigned char                                      UnknownData05[0x10];                                      // 0x0400(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.Button.OnUnhovered
	unsigned char                                      UnknownData06[0x10];                                      // 0x0410(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Button");
		return ptr;
	}


	void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);
	void SetStyle(struct FButtonStyle InStyle);
	void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity);
	void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);
	void SetBackgroundColor(struct FLinearColor InBackgroundColor);
	bool IsPressed();
};


// Class UMG.TextLayoutWidget
// 0x0020 (0x0120 - 0x0100)
class UTextLayoutWidget : public UWidget
{
public:
	struct FShapedTextOptions                          ShapedTextOptions;                                        // 0x0100(0x0003) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x0103(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	ETextWrappingPolicy                                WrappingPolicy;                                           // 0x0104(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      AutoWrapText : 1;                                         // 0x0105(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0106(0x0002) MISSED OFFSET
	float                                              WrapTextAt;                                               // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                                     Margin;                                                   // 0x010C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	float                                              LineHeightPercentage;                                     // 0x011C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TextLayoutWidget");
		return ptr;
	}

};


// Class UMG.TextBlock
// 0x0178 (0x0298 - 0x0120)
class UTextBlock : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0120(0x0018) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0138(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.TextBlock.TextDelegate
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x0148(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0170(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.TextBlock.ColorAndOpacityDelegate
	struct FSlateFontInfo                              Font;                                                     // 0x0180(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 StrikeBrush;                                              // 0x01D0(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                                   ShadowOffset;                                             // 0x0258(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ShadowColorAndOpacity;                                    // 0x0260(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0270(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.TextBlock.ShadowColorAndOpacityDelegate
	float                                              MinDesiredWidth;                                          // 0x0280(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWrapWithInvalidationPanel;                               // 0x0284(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoWrapText;                                            // 0x0285(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSimpleTextMode;                                          // 0x0286(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x11];                                      // 0x0287(0x0011) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TextBlock");
		return ptr;
	}


	void SetText(struct FText InText);
	void SetStrikeBrush(struct FSlateBrush InStrikeBrush);
	void SetShadowOffset(struct FVector2D InShadowOffset);
	void SetShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity);
	void SetOpacity(float InOpacity);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetJustification(TEnumAsByte<ETextJustify> InJustification);
	void SetFont(struct FSlateFontInfo InFontInfo);
	void SetColorAndOpacity(struct FSlateColor InColorAndOpacity);
	void SetAutoWrapText(bool InAutoTextWrap);
	struct FText GetText();
	class UMaterialInstanceDynamic* GetDynamicOutlineMaterial();
	class UMaterialInstanceDynamic* GetDynamicFontMaterial();
};


// Class UMG.ScrollBox
// 0x0750 (0x0868 - 0x0118)
class UScrollBox : public UPanelWidget
{
public:
	struct FScrollBoxStyle                             WidgetStyle;                                              // 0x0118(0x0228) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FScrollBarStyle                             WidgetBarStyle;                                           // 0x0340(0x04D0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0810(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      BarStyle;                                                 // 0x0818(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0820(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESlateVisibility                                   ScrollBarVisibility;                                      // 0x0821(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EConsumeMouseWheel                                 ConsumeMouseWheel;                                        // 0x0822(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0823(0x0001) MISSED OFFSET
	struct FVector2D                                   ScrollbarThickness;                                       // 0x0824(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AlwaysShowScrollbar;                                      // 0x082C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AlwaysShowScrollbarTrack;                                 // 0x082D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowOverscroll;                                          // 0x082E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnimateWheelScrolling;                                   // 0x082F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDescendantScrollDestination                       NavigationDestination;                                    // 0x0830(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0831(0x0003) MISSED OFFSET
	float                                              NavigationScrollPadding;                                  // 0x0834(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowRightClickDragScrolling;                            // 0x0838(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0839(0x0003) MISSED OFFSET
	float                                              WheelScrollMultiplier;                                    // 0x083C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0840(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.ScrollBox.OnUserScrolled
	unsigned char                                      UnknownData04[0x18];                                      // 0x0850(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScrollBox");
		return ptr;
	}


	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
	void SetScrollOffset(float NewScrollOffset);
	void SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility);
	void SetScrollbarThickness(struct FVector2D NewScrollbarThickness);
	void SetOrientation(TEnumAsByte<EOrientation> NewOrientation);
	void SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel);
	void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling);
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
	void SetAllowOverscroll(bool NewAllowOverscroll);
	void ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination);
	void ScrollToStart();
	void ScrollToEnd();
	float GetViewOffsetFraction();
	float GetScrollOffset();
	void EndInertialScrolling();
};


// Class UMG.Image
// 0x0108 (0x0208 - 0x0100)
class UImage : public UWidget
{
public:
	struct FSlateBrush                                 Brush;                                                    // 0x0100(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0188(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.Image.BrushDelegate
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0198(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x01A8(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.Image.ColorAndOpacityDelegate
	bool                                               bFlipForRightToLeftFlowDirection;                         // 0x01B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01B9(0x0003) MISSED OFFSET
	unsigned char                                      UnknownData03[0x10];                                      // 0x01B9(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.Image.OnMouseButtonDownEvent
	unsigned char                                      UnknownData04[0x3C];                                      // 0x01CC(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Image");
		return ptr;
	}


	void SetOpacity(float InOpacity);
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity);
	void SetBrushTintColor(struct FSlateColor TintColor);
	void SetBrushSize(struct FVector2D DesiredSize);
	void SetBrushResourceObject(class UObject* ResourceObject);
	void SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize);
	void SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);
	void SetBrushFromSoftTexture(bool bMatchSize);
	void SetBrushFromSoftMaterial();
	void SetBrushFromMaterial(class UMaterialInterface* Material);
	void SetBrushFromAtlasInterface(TScriptInterface<class USlateTextureAtlasInterface> AtlasRegion, bool bMatchSize);
	void SetBrushFromAsset(class USlateBrushAsset* Asset);
	void SetBrush(struct FSlateBrush InBrush);
	class UMaterialInstanceDynamic* GetDynamicMaterial();
};


// Class UMG.ListViewBase
// 0x0110 (0x0210 - 0x0100)
class UListViewBase : public UWidget
{
public:
	class UClass*                                      EntryWidgetClass;                                         // 0x0100(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WheelScrollMultiplier;                                    // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bEnableScrollAnimation;                                   // 0x010C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bEnableFixedLineOffset;                                   // 0x010D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x2];                                       // 0x010E(0x0002) MISSED OFFSET
	float                                              FixedLineScrollOffset;                                    // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x0114(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.ListViewBase.BP_OnEntryGenerated
	unsigned char                                      UnknownData03[0x10];                                      // 0x0128(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.ListViewBase.BP_OnEntryReleased
	struct FUserWidgetPool                             EntryWidgetPool;                                          // 0x0138(0x0080) (Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData04[0x58];                                      // 0x01B8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ListViewBase");
		return ptr;
	}


	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
	void SetScrollBarVisibility(ESlateVisibility InVisibility);
	void ScrollToTop();
	void ScrollToBottom();
	void RequestRefresh();
	void RegenerateAllEntries();
	TArray<class UUserWidget*> GetDisplayedEntryWidgets();
};


// Class UMG.ListView
// 0x0150 (0x0360 - 0x0210)
class UListView : public UListViewBase
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0210(0x00C0) MISSED OFFSET
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x02D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<ESelectionMode>                        SelectionMode;                                            // 0x02D1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EConsumeMouseWheel                                 ConsumeMouseWheel;                                        // 0x02D2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bClearSelectionOnClick;                                   // 0x02D3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsFocusable;                                             // 0x02D4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02D5(0x0003) MISSED OFFSET
	float                                              EntrySpacing;                                             // 0x02D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bReturnFocusToSelection;                                  // 0x02DC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02DD(0x0003) MISSED OFFSET
	TArray<class UObject*>                             ListItems;                                                // 0x02E0(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x10];                                      // 0x02F0(0x0010) MISSED OFFSET
	unsigned char                                      UnknownData04[0x10];                                      // 0x02F0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.ListView.BP_OnEntryInitialized
	unsigned char                                      UnknownData05[0x10];                                      // 0x0310(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.ListView.BP_OnItemClicked
	unsigned char                                      UnknownData06[0x10];                                      // 0x0320(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.ListView.BP_OnItemDoubleClicked
	unsigned char                                      UnknownData07[0x10];                                      // 0x0330(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.ListView.BP_OnItemIsHoveredChanged
	unsigned char                                      UnknownData08[0x10];                                      // 0x0340(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.ListView.BP_OnItemSelectionChanged
	unsigned char                                      UnknownData09[0x10];                                      // 0x0350(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.ListView.BP_OnItemScrolledIntoView

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ListView");
		return ptr;
	}


	void SetSelectionMode(TEnumAsByte<ESelectionMode> SelectionMode);
	void SetSelectedIndex(int Index);
	void ScrollIndexIntoView(int Index);
	void RemoveItem(class UObject* Item);
	void NavigateToIndex(int Index);
	bool IsRefreshPending();
	int GetNumItems();
	TArray<class UObject*> GetListItems();
	class UObject* GetItemAt(int Index);
	int GetIndexForItem(class UObject* Item);
	void ClearListItems();
	void BP_SetSelectedItem(class UObject* Item);
	void BP_SetListItems(TArray<class UObject*> InListItems);
	void BP_SetItemSelection(class UObject* Item, bool bSelected);
	void BP_ScrollItemIntoView(class UObject* Item);
	void BP_NavigateToItem(class UObject* Item);
	bool BP_IsItemVisible(class UObject* Item);
	bool BP_GetSelectedItems(TArray<class UObject*>* Items);
	class UObject* BP_GetSelectedItem();
	int BP_GetNumItemsSelected();
	void BP_ClearSelection();
	void BP_CancelScrollIntoView();
	void AddItem(class UObject* Item);
};


// Class UMG.PanelSlot
// 0x0010 (0x0038 - 0x0028)
class UPanelSlot : public UVisual
{
public:
	class UPanelWidget*                                Parent;                                                   // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     Content;                                                  // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.PanelSlot");
		return ptr;
	}

};


// Class UMG.RichTextBlock
// 0x0540 (0x0660 - 0x0120)
class URichTextBlock : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0120(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	class UDataTable*                                  TextStyleSet;                                             // 0x0138(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UClass*>                              DecoratorClasses;                                         // 0x0140(0x0010) (Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	bool                                               bOverrideDefaultStyle;                                    // 0x0150(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0151(0x0007) MISSED OFFSET
	struct FTextBlockStyle                             DefaultTextStyleOverride;                                 // 0x0158(0x0268) (Edit, Protected, NativeAccessSpecifierProtected)
	float                                              MinDesiredWidth;                                          // 0x03C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x26C];                                     // 0x03C4(0x026C) MISSED OFFSET
	TArray<class URichTextBlockDecorator*>             InstanceDecorators;                                       // 0x0630(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0640(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RichTextBlock");
		return ptr;
	}


	void SetTextStyleSet(class UDataTable* NewTextStyleSet);
	void SetText(struct FText InText);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetJustification(TEnumAsByte<ETextJustify> InJustification);
	void SetDefaultTextStyle(struct FTextBlockStyle InDefaultTextStyle);
	void SetDefaultStrikeBrush(struct FSlateBrush* InStrikeBrush);
	void SetDefaultShadowOffset(struct FVector2D InShadowOffset);
	void SetDefaultShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity);
	void SetDefaultFont(struct FSlateFontInfo InFontInfo);
	void SetDefaultColorAndOpacity(struct FSlateColor InColorAndOpacity);
	void SetAutoWrapText(bool InAutoTextWrap);
	class URichTextBlockDecorator* GetDecoratorByClass(class UClass* DecoratorClass);
	void ClearAllDefaultStyleOverrides();
};


// Class UMG.TileView
// 0x0020 (0x0380 - 0x0360)
class UTileView : public UListView
{
public:
	float                                              EntryHeight;                                              // 0x0360(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              EntryWidth;                                               // 0x0364(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EListItemAlignment                                 TileAlignment;                                            // 0x0368(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bWrapHorizontalNavigation;                                // 0x0369(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x16];                                      // 0x036A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TileView");
		return ptr;
	}


	void SetEntryWidth(float NewWidth);
	void SetEntryHeight(float NewHeight);
};


// Class UMG.TreeView
// 0x0058 (0x03B8 - 0x0360)
class UTreeView : public UListView
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0360(0x0010) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0360(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.TreeView.BP_OnGetItemChildren
	unsigned char                                      UnknownData02[0x10];                                      // 0x0380(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.TreeView.BP_OnItemExpansionChanged
	unsigned char                                      UnknownData03[0x28];                                      // 0x0390(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TreeView");
		return ptr;
	}


	void SetItemExpansion(class UObject* Item, bool bExpandItem);
	void ExpandAll();
	void CollapseAll();
};


// Class UMG.WidgetSwitcher
// 0x0018 (0x0130 - 0x0118)
class UWidgetSwitcher : public UPanelWidget
{
public:
	int                                                ActiveWidgetIndex;                                        // 0x0118(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x14];                                      // 0x011C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetSwitcher");
		return ptr;
	}


	void SetActiveWidgetIndex(int Index);
	void SetActiveWidget(class UWidget* Widget);
	class UWidget* GetWidgetAtIndex(int Index);
	int GetNumWidgets();
	int GetActiveWidgetIndex();
	class UWidget* GetActiveWidget();
};


// Class UMG.AsyncTaskDownloadImage
// 0x0020 (0x0050 - 0x0030)
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.AsyncTaskDownloadImage.OnSuccess
	unsigned char                                      UnknownData01[0x10];                                      // 0x0040(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.AsyncTaskDownloadImage.OnFail

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.AsyncTaskDownloadImage");
		return ptr;
	}


	static class UAsyncTaskDownloadImage* DownloadImage(struct FString URL);
};


// Class UMG.BackgroundBlur
// 0x00B8 (0x01D0 - 0x0118)
class UBackgroundBlur : public UContentWidget
{
public:
	struct FMargin                                     Padding;                                                  // 0x0118(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0128(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0129(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bApplyAlphaToBlur;                                        // 0x012A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x012B(0x0001) MISSED OFFSET
	float                                              BlurStrength;                                             // 0x012C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideAutoRadiusCalculation;                           // 0x0130(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	int                                                BlurRadius;                                               // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 LowQualityFallbackBrush;                                  // 0x0138(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x10];                                      // 0x01C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BackgroundBlur");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(struct FMargin InPadding);
	void SetLowQualityFallbackBrush(struct FSlateBrush InBrush);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetBlurStrength(float InStrength);
	void SetBlurRadius(int InBlurRadius);
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);
};


// Class UMG.BackgroundBlurSlot
// 0x0028 (0x0060 - 0x0038)
class UBackgroundBlurSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BackgroundBlurSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(struct FMargin InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.PropertyBinding
// 0x0038 (0x0060 - 0x0028)
class UPropertyBinding : public UObject
{
public:
	TWeakObjectPtr<class UObject>                      SourceObject;                                             // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDynamicPropertyPath                        SourcePath;                                               // 0x0030(0x0028) (NativeAccessSpecifierPublic)
	struct FName                                       DestinationProperty;                                      // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.PropertyBinding");
		return ptr;
	}

};


// Class UMG.BoolBinding
// 0x0000 (0x0060 - 0x0060)
class UBoolBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BoolBinding");
		return ptr;
	}


	bool GetValue();
};


// Class UMG.BorderSlot
// 0x0028 (0x0060 - 0x0038)
class UBorderSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BorderSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(struct FMargin InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.BrushBinding
// 0x0008 (0x0068 - 0x0060)
class UBrushBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BrushBinding");
		return ptr;
	}


	struct FSlateBrush GetValue();
};


// Class UMG.ButtonSlot
// 0x0028 (0x0060 - 0x0038)
class UButtonSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ButtonSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(struct FMargin InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.CanvasPanel
// 0x0010 (0x0128 - 0x0118)
class UCanvasPanel : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CanvasPanel");
		return ptr;
	}


	class UCanvasPanelSlot* AddChildToCanvas(class UWidget* Content);
};


// Class UMG.CanvasPanelSlot
// 0x0038 (0x0070 - 0x0038)
class UCanvasPanelSlot : public UPanelSlot
{
public:
	struct FAnchorData                                 LayoutData;                                               // 0x0038(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAutoSize;                                                // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                ZOrder;                                                   // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CanvasPanelSlot");
		return ptr;
	}


	void SetZOrder(int InZOrder);
	void SetSize(struct FVector2D InSize);
	void SetPosition(struct FVector2D InPosition);
	void SetOffsets(struct FMargin InOffset);
	void SetMinimum(struct FVector2D InMinimumAnchors);
	void SetMaximum(struct FVector2D InMaximumAnchors);
	void SetLayout(struct FAnchorData InLayoutData);
	void SetAutoSize(bool InbAutoSize);
	void SetAnchors(struct FAnchors InAnchors);
	void SetAlignment(struct FVector2D InAlignment);
	int GetZOrder();
	struct FVector2D GetSize();
	struct FVector2D GetPosition();
	struct FMargin GetOffsets();
	struct FAnchorData GetLayout();
	bool GetAutoSize();
	struct FAnchors GetAnchors();
	struct FVector2D GetAlignment();
};


// Class UMG.CheckBox
// 0x0650 (0x0768 - 0x0118)
class UCheckBox : public UContentWidget
{
public:
	ECheckBoxState                                     CheckedState;                                             // 0x0118(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0119(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.CheckBox.CheckedStateDelegate
	unsigned char                                      UnknownData02[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	struct FCheckBoxStyle                              WidgetStyle;                                              // 0x0130(0x0580) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x06B0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            UncheckedImage;                                           // 0x06B8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            UncheckedHoveredImage;                                    // 0x06C0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            UncheckedPressedImage;                                    // 0x06C8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            CheckedImage;                                             // 0x06D0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            CheckedHoveredImage;                                      // 0x06D8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            CheckedPressedImage;                                      // 0x06E0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            UndeterminedImage;                                        // 0x06E8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            UndeterminedHoveredImage;                                 // 0x06F0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            UndeterminedPressedImage;                                 // 0x06F8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0700(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0701(0x0003) MISSED OFFSET
	struct FMargin                                     Padding;                                                  // 0x0704(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0714(0x0004) MISSED OFFSET
	struct FSlateColor                                 BorderBackgroundColor;                                    // 0x0718(0x0028) (Deprecated, NativeAccessSpecifierPublic)
	bool                                               IsFocusable;                                              // 0x0740(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0741(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData06[0x10];                                      // 0x0741(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.CheckBox.OnCheckStateChanged
	unsigned char                                      UnknownData07[0x10];                                      // 0x0758(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CheckBox");
		return ptr;
	}


	void SetIsChecked(bool InIsChecked);
	void SetCheckedState(ECheckBoxState InCheckedState);
	bool IsPressed();
	bool IsChecked();
	ECheckBoxState GetCheckedState();
};


// Class UMG.CheckedStateBinding
// 0x0008 (0x0068 - 0x0060)
class UCheckedStateBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CheckedStateBinding");
		return ptr;
	}


	ECheckBoxState GetValue();
};


// Class UMG.CircularThrobber
// 0x00B8 (0x01B8 - 0x0100)
class UCircularThrobber : public UWidget
{
public:
	int                                                NumberOfPieces;                                           // 0x0100(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Period;                                                   // 0x0104(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                   // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	class USlateBrushAsset*                            PieceImage;                                               // 0x0110(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Image;                                                    // 0x0118(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bEnableRadius;                                            // 0x01A0(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x17];                                      // 0x01A1(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CircularThrobber");
		return ptr;
	}


	void SetRadius(float InRadius);
	void SetPeriod(float InPeriod);
	void SetNumberOfPieces(int InNumberOfPieces);
};


// Class UMG.ColorBinding
// 0x0008 (0x0068 - 0x0060)
class UColorBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ColorBinding");
		return ptr;
	}


	struct FSlateColor GetSlateValue();
	struct FLinearColor GetLinearValue();
};


// Class UMG.ComboBox
// 0x0038 (0x0138 - 0x0100)
class UComboBox : public UWidget
{
public:
	TArray<class UObject*>                             Items;                                                    // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0110(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.ComboBox.OnGenerateWidgetEvent
	bool                                               bIsFocusable;                                             // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0121(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ComboBox");
		return ptr;
	}

};


// Class UMG.ComboBoxString
// 0x0CC8 (0x0DC8 - 0x0100)
class UComboBoxString : public UWidget
{
public:
	TArray<struct FString>                             DefaultOptions;                                           // 0x0100(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FString                                     SelectedOption;                                           // 0x0110(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FComboBoxStyle                              WidgetStyle;                                              // 0x0120(0x03D8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTableRowStyle                              ItemStyle;                                                // 0x04F8(0x07C8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                                     ContentPadding;                                           // 0x0CC0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              MaxListHeight;                                            // 0x0CD0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasDownArrow;                                             // 0x0CD4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               EnableGamepadNavigationMode;                              // 0x0CD5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0CD6(0x0002) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x0CD8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0D28(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bIsFocusable;                                             // 0x0D50(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0D51(0x0003) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x0D51(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.ComboBoxString.OnGenerateWidgetEvent
	unsigned char                                      UnknownData03[0x4];                                       // 0x0D64(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData04[0x10];                                      // 0x0D64(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.ComboBoxString.OnSelectionChanged
	unsigned char                                      UnknownData05[0x10];                                      // 0x0D78(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.ComboBoxString.OnOpening
	unsigned char                                      UnknownData06[0x40];                                      // 0x0D88(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ComboBoxString");
		return ptr;
	}


	void SetSelectedOption(struct FString Option);
	void SetSelectedIndex(int Index);
	bool RemoveOption(struct FString Option);
	void RefreshOptions();
	void OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void OnOpeningEvent__DelegateSignature();
	struct FString GetSelectedOption();
	int GetSelectedIndex();
	int GetOptionCount();
	struct FString GetOptionAtIndex(int Index);
	int FindOptionIndex(struct FString Option);
	void ClearSelection();
	void ClearOptions();
	void AddOption(struct FString Option);
};


// Class UMG.DragDropOperation
// 0x0060 (0x0088 - 0x0028)
class UDragDropOperation : public UObject
{
public:
	struct FString                                     Tag;                                                      // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Payload;                                                  // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     DefaultDragVisual;                                        // 0x0040(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDragPivot                                         Pivot;                                                    // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	struct FVector2D                                   Offset;                                                   // 0x004C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x0054(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.DragDropOperation.OnDrop
	unsigned char                                      UnknownData03[0x10];                                      // 0x0068(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.DragDropOperation.OnDragCancelled
	unsigned char                                      UnknownData04[0x10];                                      // 0x0078(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.DragDropOperation.OnDragged

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.DragDropOperation");
		return ptr;
	}


	void Drop(struct FPointerEvent PointerEvent);
	void Dragged(struct FPointerEvent PointerEvent);
	void DragCancelled(struct FPointerEvent PointerEvent);
};


// Class UMG.DynamicEntryBoxBase
// 0x00C0 (0x01C0 - 0x0100)
class UDynamicEntryBoxBase : public UWidget
{
public:
	EDynamicBoxType                                    EntryBoxType;                                             // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0101(0x0003) MISSED OFFSET
	struct FVector2D                                   EntrySpacing;                                             // 0x0104(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	TArray<struct FVector2D>                           SpacingPattern;                                           // 0x0110(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateChildSize                             EntrySizeRule;                                            // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<EHorizontalAlignment>                  EntryHorizontalAlignment;                                 // 0x0128(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<EVerticalAlignment>                    EntryVerticalAlignment;                                   // 0x0129(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x2];                                       // 0x012A(0x0002) MISSED OFFSET
	int                                                MaxElementSize;                                           // 0x012C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0130(0x0010) MISSED OFFSET
	struct FUserWidgetPool                             EntryWidgetPool;                                          // 0x0140(0x0080) (Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.DynamicEntryBoxBase");
		return ptr;
	}


	void SetEntrySpacing(struct FVector2D InEntrySpacing);
	int GetNumEntries();
	TArray<class UUserWidget*> GetAllEntries();
};


// Class UMG.DynamicEntryBox
// 0x0008 (0x01C8 - 0x01C0)
class UDynamicEntryBox : public UDynamicEntryBoxBase
{
public:
	class UClass*                                      EntryWidgetClass;                                         // 0x01C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.DynamicEntryBox");
		return ptr;
	}


	void Reset(bool bDeleteWidgets);
	void RemoveEntry(class UUserWidget* EntryWidget);
	class UUserWidget* BP_CreateEntryOfClass(class UClass* EntryClass);
	class UUserWidget* BP_CreateEntry();
};


// Class UMG.EditableText
// 0x0348 (0x0448 - 0x0100)
class UEditableText : public UWidget
{
public:
	struct FText                                       Text;                                                     // 0x0100(0x0018) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.EditableText.TextDelegate
	struct FText                                       HintText;                                                 // 0x0128(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0140(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.EditableText.HintTextDelegate
	struct FEditableTextStyle                          WidgetStyle;                                              // 0x0150(0x0218) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0368(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            BackgroundImageSelected;                                  // 0x0370(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            BackgroundImageComposing;                                 // 0x0378(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            CaretImage;                                               // 0x0380(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font;                                                     // 0x0388(0x0050) (Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x03D8(0x0028) (Deprecated, NativeAccessSpecifierPublic)
	bool                                               IsReadOnly;                                               // 0x0400(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsPassword;                                               // 0x0401(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0402(0x0002) MISSED OFFSET
	float                                              MinimumDesiredWidth;                                      // 0x0404(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsCaretMovedWhenGainFocus;                                // 0x0408(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SelectAllTextWhenFocused;                                 // 0x0409(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RevertTextOnEscape;                                       // 0x040A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x040B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SelectAllTextOnCommit;                                    // 0x040C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowContextMenu;                                         // 0x040D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EVirtualKeyboardType>                  KeyboardType;                                             // 0x040E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVirtualKeyboardOptions                     VirtualKeyboardOptions;                                   // 0x040F(0x0001) (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                             // 0x0410(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x0411(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FShapedTextOptions                          ShapedTextOptions;                                        // 0x0412(0x0003) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0415(0x0003) MISSED OFFSET
	unsigned char                                      UnknownData04[0x10];                                      // 0x0415(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.EditableText.OnTextChanged
	unsigned char                                      UnknownData05[0x10];                                      // 0x0428(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.EditableText.OnTextCommitted
	unsigned char                                      UnknownData06[0x10];                                      // 0x0438(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.EditableText");
		return ptr;
	}


	void SetText(struct FText InText);
	void SetIsReadOnly(bool InbIsReadyOnly);
	void SetIsPassword(bool InbIsPassword);
	void SetHintText(struct FText InHintText);
	void OnEditableTextCommittedEvent__DelegateSignature(struct FText Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnEditableTextChangedEvent__DelegateSignature(struct FText Text);
	struct FText GetText();
};


// Class UMG.EditableTextBox
// 0x0920 (0x0A20 - 0x0100)
class UEditableTextBox : public UWidget
{
public:
	struct FText                                       Text;                                                     // 0x0100(0x0018) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.EditableTextBox.TextDelegate
	struct FEditableTextBoxStyle                       WidgetStyle;                                              // 0x0128(0x07F0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0918(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       HintText;                                                 // 0x0920(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0938(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.EditableTextBox.HintTextDelegate
	struct FSlateFontInfo                              Font;                                                     // 0x0948(0x0050) (Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ForegroundColor;                                          // 0x0998(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                BackgroundColor;                                          // 0x09A8(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReadOnlyForegroundColor;                                  // 0x09B8(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsReadOnly;                                               // 0x09C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsPassword;                                               // 0x09C9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x2];                                       // 0x09CA(0x0002) MISSED OFFSET
	float                                              MinimumDesiredWidth;                                      // 0x09CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     Padding;                                                  // 0x09D0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               IsCaretMovedWhenGainFocus;                                // 0x09E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SelectAllTextWhenFocused;                                 // 0x09E1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RevertTextOnEscape;                                       // 0x09E2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x09E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SelectAllTextOnCommit;                                    // 0x09E4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowContextMenu;                                         // 0x09E5(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EVirtualKeyboardType>                  KeyboardType;                                             // 0x09E6(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVirtualKeyboardOptions                     VirtualKeyboardOptions;                                   // 0x09E7(0x0001) (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                             // 0x09E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x09E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FShapedTextOptions                          ShapedTextOptions;                                        // 0x09EA(0x0003) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x09ED(0x0003) MISSED OFFSET
	unsigned char                                      UnknownData04[0x10];                                      // 0x09ED(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.EditableTextBox.OnTextChanged
	unsigned char                                      UnknownData05[0x10];                                      // 0x0A00(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.EditableTextBox.OnTextCommitted
	unsigned char                                      UnknownData06[0x10];                                      // 0x0A10(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.EditableTextBox");
		return ptr;
	}


	void SetText(struct FText InText);
	void SetIsReadOnly(bool bReadOnly);
	void SetIsPassword(bool bIsPassword);
	void SetHintText(struct FText InText);
	void SetError(struct FText InError);
	void OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text);
	bool HasError();
	struct FText GetText();
	void ClearError();
};


// Class UMG.ExpandableArea
// 0x0230 (0x0330 - 0x0100)
class UExpandableArea : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET
	struct FExpandableAreaStyle                        Style;                                                    // 0x0108(0x0120) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BorderBrush;                                              // 0x0228(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateColor                                 BorderColor;                                              // 0x02B0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bIsExpanded;                                              // 0x02D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02D9(0x0003) MISSED OFFSET
	float                                              MaxHeight;                                                // 0x02DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     HeaderPadding;                                            // 0x02E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                     AreaPadding;                                              // 0x02F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0300(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.ExpandableArea.OnExpansionChanged
	class UWidget*                                     HeaderContent;                                            // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                                     BodyContent;                                              // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0320(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ExpandableArea");
		return ptr;
	}


	void SetIsExpanded_Animated(bool IsExpanded);
	void SetIsExpanded(bool IsExpanded);
	bool GetIsExpanded();
};


// Class UMG.FloatBinding
// 0x0000 (0x0060 - 0x0060)
class UFloatBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.FloatBinding");
		return ptr;
	}


	float GetValue();
};


// Class UMG.GridPanel
// 0x0030 (0x0148 - 0x0118)
class UGridPanel : public UPanelWidget
{
public:
	TArray<float>                                      ColumnFill;                                               // 0x0118(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      RowFill;                                                  // 0x0128(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0138(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.GridPanel");
		return ptr;
	}


	void SetRowFill(int ColumnIndex, float Coefficient);
	void SetColumnFill(int ColumnIndex, float Coefficient);
	class UGridSlot* AddChildToGrid(class UWidget* Content);
};


// Class UMG.GridSlot
// 0x0038 (0x0070 - 0x0038)
class UGridSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004A(0x0002) MISSED OFFSET
	int                                                Row;                                                      // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RowSpan;                                                  // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Column;                                                   // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ColumnSpan;                                               // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Layer;                                                    // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Nudge;                                                    // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.GridSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetRowSpan(int InRowSpan);
	void SetRow(int InRow);
	void SetPadding(struct FMargin InPadding);
	void SetLayer(int InLayer);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetColumnSpan(int InColumnSpan);
	void SetColumn(int InColumn);
};


// Class UMG.HorizontalBox
// 0x0010 (0x0128 - 0x0118)
class UHorizontalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.HorizontalBox");
		return ptr;
	}


	class UHorizontalBoxSlot* AddChildToHorizontalBox(class UWidget* Content);
};


// Class UMG.HorizontalBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UHorizontalBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateChildSize                             Size;                                                     // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0052(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.HorizontalBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetSize(struct FSlateChildSize InSize);
	void SetPadding(struct FMargin InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.InputKeySelector
// 0x05E8 (0x06E8 - 0x0100)
class UInputKeySelector : public UWidget
{
public:
	struct FButtonStyle                                WidgetStyle;                                              // 0x0100(0x0278) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                             TextStyle;                                                // 0x0378(0x0268) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FInputChord                                 SelectedKey;                                              // 0x05E0(0x0020) (BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font;                                                     // 0x0600(0x0050) (Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     Margin;                                                   // 0x0650(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0660(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       KeySelectionText;                                         // 0x0670(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       NoKeySpecifiedText;                                       // 0x0688(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bAllowModifierKeys;                                       // 0x06A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowGamepadKeys;                                        // 0x06A1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x06A2(0x0006) MISSED OFFSET
	TArray<struct FKey>                                EscapeKeys;                                               // 0x06A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x06B8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.InputKeySelector.OnKeySelected
	unsigned char                                      UnknownData02[0x10];                                      // 0x06C8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.InputKeySelector.OnIsSelectingKeyChanged
	unsigned char                                      UnknownData03[0x10];                                      // 0x06D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.InputKeySelector");
		return ptr;
	}


	void SetTextBlockVisibility(ESlateVisibility InVisibility);
	void SetSelectedKey(struct FInputChord InSelectedKey);
	void SetNoKeySpecifiedText(struct FText InNoKeySpecifiedText);
	void SetKeySelectionText(struct FText InKeySelectionText);
	void SetEscapeKeys(TArray<struct FKey> InKeys);
	void SetAllowModifierKeys(bool bInAllowModifierKeys);
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys);
	void OnKeySelected__DelegateSignature(struct FInputChord SelectedKey);
	void OnIsSelectingKeyChanged__DelegateSignature();
	bool GetIsSelectingKey();
};


// Class UMG.Int32Binding
// 0x0000 (0x0060 - 0x0060)
class UInt32Binding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Int32Binding");
		return ptr;
	}


	int GetValue();
};


// Class UMG.InvalidationBox
// 0x0018 (0x0130 - 0x0118)
class UInvalidationBox : public UContentWidget
{
public:
	bool                                               bCanCache;                                                // 0x0118(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               CacheRelativeTransforms;                                  // 0x0119(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x16];                                      // 0x011A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.InvalidationBox");
		return ptr;
	}


	void SetCanCache(bool CanCache);
	void InvalidateCache();
	bool GetCanCache();
};


// Class UMG.UserListEntry
// 0x0000 (0x0028 - 0x0028)
class UUserListEntry : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UserListEntry");
		return ptr;
	}


	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnEntryReleased();
};


// Class UMG.UserListEntryLibrary
// 0x0000 (0x0028 - 0x0028)
class UUserListEntryLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UserListEntryLibrary");
		return ptr;
	}


	static bool IsListItemSelected(TScriptInterface<class UUserListEntry> UserListEntry);
	static bool IsListItemExpanded(TScriptInterface<class UUserListEntry> UserListEntry);
	static class UListViewBase* GetOwningListView(TScriptInterface<class UUserListEntry> UserListEntry);
};


// Class UMG.UserObjectListEntry
// 0x0000 (0x0028 - 0x0028)
class UUserObjectListEntry : public UUserListEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UserObjectListEntry");
		return ptr;
	}


	void OnListItemObjectSet(class UObject* ListItemObject);
};


// Class UMG.UserObjectListEntryLibrary
// 0x0000 (0x0028 - 0x0028)
class UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UserObjectListEntryLibrary");
		return ptr;
	}


	static class UObject* GetListItemObject(TScriptInterface<class UUserObjectListEntry> UserObjectListEntry);
};


// Class UMG.ListViewDesignerPreviewItem
// 0x0000 (0x0028 - 0x0028)
class UListViewDesignerPreviewItem : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ListViewDesignerPreviewItem");
		return ptr;
	}

};


// Class UMG.MenuAnchor
// 0x0040 (0x0158 - 0x0118)
class UMenuAnchor : public UContentWidget
{
public:
	class UClass*                                      MenuClass;                                                // 0x0118(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0120(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.MenuAnchor.OnGetMenuContentEvent
	TEnumAsByte<EMenuPlacement>                        Placement;                                                // 0x0130(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShouldDeferPaintingAfterWindowContent;                    // 0x0131(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseApplicationMenuStack;                                  // 0x0132(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0133(0x0005) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x0133(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.MenuAnchor.OnMenuOpenChanged
	unsigned char                                      UnknownData03[0x10];                                      // 0x0148(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MenuAnchor");
		return ptr;
	}


	void ToggleOpen(bool bFocusOnOpen);
	bool ShouldOpenDueToClick();
	void Open(bool bFocusMenu);
	bool IsOpen();
	bool HasOpenSubMenus();
	struct FVector2D GetMenuPosition();
	void Close();
};


// Class UMG.MouseCursorBinding
// 0x0000 (0x0060 - 0x0060)
class UMouseCursorBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MouseCursorBinding");
		return ptr;
	}


	TEnumAsByte<EMouseCursor> GetValue();
};


// Class UMG.MovieScene2DTransformSection
// 0x0470 (0x0550 - 0x00E0)
class UMovieScene2DTransformSection : public UMovieSceneSection
{
public:
	struct FMovieScene2DTransformMask                  TransformMask;                                            // 0x00E0(0x0004) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	struct FMovieSceneFloatChannel                     Translation[0x2];                                         // 0x00E8(0x00A0) (NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     Rotation;                                                 // 0x0228(0x00A0) (NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     Scale[0x2];                                               // 0x02C8(0x00A0) (NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     Shear[0x2];                                               // 0x0408(0x00A0) (NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0548(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieScene2DTransformSection");
		return ptr;
	}

};


// Class UMG.MovieScene2DTransformTrack
// 0x0000 (0x0088 - 0x0088)
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieScene2DTransformTrack");
		return ptr;
	}

};


// Class UMG.MovieSceneMarginSection
// 0x0280 (0x0360 - 0x00E0)
class UMovieSceneMarginSection : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel                     TopCurve;                                                 // 0x00E0(0x00A0) (NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     LeftCurve;                                                // 0x0180(0x00A0) (NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     RightCurve;                                               // 0x0220(0x00A0) (NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     BottomCurve;                                              // 0x02C0(0x00A0) (NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieSceneMarginSection");
		return ptr;
	}

};


// Class UMG.MovieSceneMarginTrack
// 0x0000 (0x0088 - 0x0088)
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieSceneMarginTrack");
		return ptr;
	}

};


// Class UMG.MovieSceneWidgetMaterialTrack
// 0x0018 (0x0080 - 0x0068)
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	TArray<struct FName>                               BrushPropertyNamePath;                                    // 0x0068(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FName                                       TrackName;                                                // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieSceneWidgetMaterialTrack");
		return ptr;
	}

};


// Class UMG.MultiLineEditableText
// 0x0338 (0x0458 - 0x0120)
class UMultiLineEditableText : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0120(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       HintText;                                                 // 0x0138(0x0018) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0150(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.MultiLineEditableText.HintTextDelegate
	struct FTextBlockStyle                             WidgetStyle;                                              // 0x0160(0x0268) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               bIsReadOnly;                                              // 0x03C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x03D0(0x0050) (Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SelectAllTextWhenFocused;                                 // 0x0420(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ClearTextSelectionOnFocusLoss;                            // 0x0421(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RevertTextOnEscape;                                       // 0x0422(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x0423(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowContextMenu;                                         // 0x0424(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVirtualKeyboardOptions                     VirtualKeyboardOptions;                                   // 0x0425(0x0001) (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                             // 0x0426(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0427(0x0001) MISSED OFFSET
	unsigned char                                      UnknownData03[0x10];                                      // 0x0427(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.MultiLineEditableText.OnTextChanged
	unsigned char                                      UnknownData04[0x10];                                      // 0x0438(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.MultiLineEditableText.OnTextCommitted
	unsigned char                                      UnknownData05[0x10];                                      // 0x0448(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MultiLineEditableText");
		return ptr;
	}


	void SetText(struct FText InText);
	void SetIsReadOnly(bool bReadOnly);
	void SetHintText(struct FText InHintText);
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText Text);
	struct FText GetText();
	struct FText GetHintText();
};


// Class UMG.MultiLineEditableTextBox
// 0x0B58 (0x0C78 - 0x0120)
class UMultiLineEditableTextBox : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0120(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       HintText;                                                 // 0x0138(0x0018) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0150(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.MultiLineEditableTextBox.HintTextDelegate
	struct FEditableTextBoxStyle                       WidgetStyle;                                              // 0x0160(0x07F0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                             TextStyle;                                                // 0x0950(0x0268) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               bIsReadOnly;                                              // 0x0BB8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowContextMenu;                                         // 0x0BB9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVirtualKeyboardOptions                     VirtualKeyboardOptions;                                   // 0x0BBA(0x0001) (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                             // 0x0BBB(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0BBC(0x0004) MISSED OFFSET
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0BC0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font;                                                     // 0x0BC8(0x0050) (Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ForegroundColor;                                          // 0x0C18(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                BackgroundColor;                                          // 0x0C28(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReadOnlyForegroundColor;                                  // 0x0C38(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0C48(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.MultiLineEditableTextBox.OnTextChanged
	unsigned char                                      UnknownData03[0x10];                                      // 0x0C58(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.MultiLineEditableTextBox.OnTextCommitted
	unsigned char                                      UnknownData04[0x10];                                      // 0x0C68(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MultiLineEditableTextBox");
		return ptr;
	}


	void SetText(struct FText InText);
	void SetIsReadOnly(bool bReadOnly);
	void SetHintText(struct FText InHintText);
	void SetError(struct FText InError);
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(struct FText Text);
	struct FText GetText();
	struct FText GetHintText();
};


// Class UMG.NamedSlot
// 0x0010 (0x0128 - 0x0118)
class UNamedSlot : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.NamedSlot");
		return ptr;
	}

};


// Class UMG.NamedSlotInterface
// 0x0000 (0x0028 - 0x0028)
class UNamedSlotInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.NamedSlotInterface");
		return ptr;
	}

};


// Class UMG.NativeWidgetHost
// 0x0010 (0x0110 - 0x0100)
class UNativeWidgetHost : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0100(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.NativeWidgetHost");
		return ptr;
	}

};


// Class UMG.Overlay
// 0x0010 (0x0128 - 0x0118)
class UOverlay : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Overlay");
		return ptr;
	}


	class UOverlaySlot* AddChildToOverlay(class UWidget* Content);
};


// Class UMG.OverlaySlot
// 0x0020 (0x0058 - 0x0038)
class UOverlaySlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FMargin                                     Padding;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0052(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.OverlaySlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(struct FMargin InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.ProgressBar
// 0x0210 (0x0310 - 0x0100)
class UProgressBar : public UWidget
{
public:
	struct FProgressBarStyle                           WidgetStyle;                                              // 0x0100(0x01A0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x02A0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            BackgroundImage;                                          // 0x02A8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            FillImage;                                                // 0x02B0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            MarqueeImage;                                             // 0x02B8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Percent;                                                  // 0x02C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EProgressBarFillType>                  BarFillType;                                              // 0x02C4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsMarquee;                                               // 0x02C5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x02C6(0x0002) MISSED OFFSET
	struct FVector2D                                   BorderPadding;                                            // 0x02C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x02D0(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.ProgressBar.PercentDelegate
	struct FLinearColor                                FillColorAndOpacity;                                      // 0x02E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x10];                                      // 0x02F0(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.ProgressBar.FillColorAndOpacityDelegate
	unsigned char                                      UnknownData03[0x10];                                      // 0x0300(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ProgressBar");
		return ptr;
	}


	void SetPercent(float InPercent);
	void SetIsMarquee(bool InbIsMarquee);
	void SetFillColorAndOpacity(struct FLinearColor InColor);
};


// Class UMG.RetainerBox
// 0x0030 (0x0148 - 0x0118)
class URetainerBox : public UContentWidget
{
public:
	bool                                               RenderOnInvalidation;                                     // 0x0118(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RenderOnPhase;                                            // 0x0119(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x011A(0x0002) MISSED OFFSET
	int                                                Phase;                                                    // 0x011C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PhaseCount;                                               // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
	class UMaterialInterface*                          EffectMaterial;                                           // 0x0128(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       TextureParameter;                                         // 0x0130(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0138(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RetainerBox");
		return ptr;
	}


	void SetTextureParameter(struct FName TextureParameter);
	void SetRenderingPhase(int RenderPhase, int TotalPhases);
	void SetEffectMaterial(class UMaterialInterface* EffectMaterial);
	void RequestRender();
	class UMaterialInstanceDynamic* GetEffectMaterial();
};


// Class UMG.RichTextBlockDecorator
// 0x0000 (0x0028 - 0x0028)
class URichTextBlockDecorator : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RichTextBlockDecorator");
		return ptr;
	}

};


// Class UMG.RichTextBlockImageDecorator
// 0x0008 (0x0030 - 0x0028)
class URichTextBlockImageDecorator : public URichTextBlockDecorator
{
public:
	class UDataTable*                                  ImageSet;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RichTextBlockImageDecorator");
		return ptr;
	}

};


// Class UMG.SafeZone
// 0x0018 (0x0130 - 0x0118)
class USafeZone : public UContentWidget
{
public:
	bool                                               PadLeft;                                                  // 0x0118(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PadRight;                                                 // 0x0119(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PadTop;                                                   // 0x011A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PadBottom;                                                // 0x011B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x14];                                      // 0x011C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SafeZone");
		return ptr;
	}


	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);
};


// Class UMG.SafeZoneSlot
// 0x0028 (0x0060 - 0x0038)
class USafeZoneSlot : public UPanelSlot
{
public:
	bool                                               bIsTitleSafe;                                             // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FMargin                                     SafeAreaScale;                                            // 0x003C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<EHorizontalAlignment>                  HAlign;                                                   // 0x004C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EVerticalAlignment>                    VAlign;                                                   // 0x004D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
	struct FMargin                                     Padding;                                                  // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SafeZoneSlot");
		return ptr;
	}

};


// Class UMG.ScaleBox
// 0x0020 (0x0138 - 0x0118)
class UScaleBox : public UContentWidget
{
public:
	TEnumAsByte<EStretch>                              Stretch;                                                  // 0x0118(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EStretchDirection>                     StretchDirection;                                         // 0x0119(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x011A(0x0002) MISSED OFFSET
	float                                              UserSpecifiedScale;                                       // 0x011C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IgnoreInheritedScale;                                     // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0121(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScaleBox");
		return ptr;
	}


	void SetUserSpecifiedScale(float InUserSpecifiedScale);
	void SetStretchDirection(TEnumAsByte<EStretchDirection> InStretchDirection);
	void SetStretch(TEnumAsByte<EStretch> InStretch);
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);
};


// Class UMG.ScaleBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UScaleBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScaleBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(struct FMargin InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.ScrollBar
// 0x04F8 (0x05F8 - 0x0100)
class UScrollBar : public UWidget
{
public:
	struct FScrollBarStyle                             WidgetStyle;                                              // 0x0100(0x04D0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x05D0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlwaysShowScrollbar;                                     // 0x05D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlwaysShowScrollbarTrack;                                // 0x05D9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x05DA(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x05DB(0x0001) MISSED OFFSET
	struct FVector2D                                   Thickness;                                                // 0x05DC(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x14];                                      // 0x05E4(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScrollBar");
		return ptr;
	}


	void SetState(float InOffsetFraction, float InThumbSizeFraction);
};


// Class UMG.ScrollBoxSlot
// 0x0020 (0x0058 - 0x0038)
class UScrollBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xE];                                       // 0x004A(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScrollBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(struct FMargin InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.SizeBox
// 0x0030 (0x0148 - 0x0118)
class USizeBox : public UContentWidget
{
public:
	unsigned char                                      bOverride_WidthOverride : 1;                              // 0x0118(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_HeightOverride : 1;                             // 0x0118(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MinDesiredWidth : 1;                            // 0x0118(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MinDesiredHeight : 1;                           // 0x0118(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MaxDesiredWidth : 1;                            // 0x0118(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MaxDesiredHeight : 1;                           // 0x0118(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MaxAspectRatio : 1;                             // 0x0118(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	float                                              WidthOverride;                                            // 0x011C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HeightOverride;                                           // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDesiredWidth;                                          // 0x0124(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDesiredHeight;                                         // 0x0128(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDesiredWidth;                                          // 0x012C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDesiredHeight;                                         // 0x0130(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxAspectRatio;                                           // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0138(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SizeBox");
		return ptr;
	}


	void SetWidthOverride(float InWidthOverride);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetMinDesiredHeight(float InMinDesiredHeight);
	void SetMaxDesiredWidth(float InMaxDesiredWidth);
	void SetMaxDesiredHeight(float InMaxDesiredHeight);
	void SetMaxAspectRatio(float InMaxAspectRatio);
	void SetHeightOverride(float InHeightOverride);
	void ClearWidthOverride();
	void ClearMinDesiredWidth();
	void ClearMinDesiredHeight();
	void ClearMaxDesiredWidth();
	void ClearMaxDesiredHeight();
	void ClearMaxAspectRatio();
	void ClearHeightOverride();
};


// Class UMG.SizeBoxSlot
// 0x0028 (0x0060 - 0x0038)
class USizeBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SizeBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(struct FMargin InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.SlateBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SlateBlueprintLibrary");
		return ptr;
	}


	static struct FVector2D TransformVectorLocalToAbsolute(struct FGeometry Geometry, struct FVector2D LocalVector);
	static struct FVector2D TransformVectorAbsoluteToLocal(struct FGeometry Geometry, struct FVector2D AbsoluteVector);
	static float TransformScalarLocalToAbsolute(struct FGeometry Geometry, float LocalScalar);
	static float TransformScalarAbsoluteToLocal(struct FGeometry Geometry, float AbsoluteScalar);
	static void ScreenToWidgetLocal(class UObject* WorldContextObject, struct FGeometry Geometry, struct FVector2D ScreenPosition, struct FVector2D* LocalCoordinate);
	static void ScreenToWidgetAbsolute(class UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D* AbsoluteCoordinate);
	static void ScreenToViewport(class UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D* ViewportPosition);
	static void LocalToViewport(class UObject* WorldContextObject, struct FGeometry Geometry, struct FVector2D LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
	static struct FVector2D LocalToAbsolute(struct FGeometry Geometry, struct FVector2D LocalCoordinate);
	static bool IsUnderLocation(struct FGeometry Geometry, struct FVector2D AbsoluteCoordinate);
	static struct FVector2D GetLocalSize(struct FGeometry Geometry);
	static struct FVector2D GetAbsoluteSize(struct FGeometry Geometry);
	static bool EqualEqual_SlateBrush(struct FSlateBrush A, struct FSlateBrush B);
	static void AbsoluteToViewport(class UObject* WorldContextObject, struct FVector2D AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
	static struct FVector2D AbsoluteToLocal(struct FGeometry Geometry, struct FVector2D AbsoluteCoordinate);
};


// Class UMG.SlateVectorArtData
// 0x0038 (0x0060 - 0x0028)
class USlateVectorArtData : public UObject
{
public:
	TArray<struct FSlateMeshVertex>                    VertexData;                                               // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<uint32_t>                                   IndexData;                                                // 0x0038(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                          Material;                                                 // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2D                                   ExtentMin;                                                // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2D                                   ExtentMax;                                                // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SlateVectorArtData");
		return ptr;
	}

};


// Class UMG.Spacer
// 0x0018 (0x0118 - 0x0100)
class USpacer : public UWidget
{
public:
	struct FVector2D                                   Size;                                                     // 0x0100(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0108(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Spacer");
		return ptr;
	}


	void SetSize(struct FVector2D InSize);
};


// Class UMG.SpinBox
// 0x0400 (0x0500 - 0x0100)
class USpinBox : public UWidget
{
public:
	float                                              Value;                                                    // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0104(0x0010) UNKNOWN PROPERTY: DelegateProperty UMG.SpinBox.ValueDelegate
	unsigned char                                      UnknownData01[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	struct FSpinBoxStyle                               WidgetStyle;                                              // 0x0118(0x02E8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0400(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Delta;                                                    // 0x0408(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SliderExponent;                                           // 0x040C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font;                                                     // 0x0410(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x0460(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0461(0x0003) MISSED OFFSET
	float                                              MinDesiredWidth;                                          // 0x0464(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x0468(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SelectAllTextOnCommit;                                    // 0x0469(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x6];                                       // 0x046A(0x0006) MISSED OFFSET
	struct FSlateColor                                 ForegroundColor;                                          // 0x0470(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0498(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.SpinBox.OnValueChanged
	unsigned char                                      UnknownData05[0x10];                                      // 0x04A8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.SpinBox.OnValueCommitted
	unsigned char                                      UnknownData06[0x10];                                      // 0x04B8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.SpinBox.OnBeginSliderMovement
	unsigned char                                      UnknownData07[0x10];                                      // 0x04C8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.SpinBox.OnEndSliderMovement
	unsigned char                                      bOverride_MinValue : 1;                                   // 0x04D8(0x0001) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bOverride_MaxValue : 1;                                   // 0x04D8(0x0001) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bOverride_MinSliderValue : 1;                             // 0x04D8(0x0001) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bOverride_MaxSliderValue : 1;                             // 0x04D8(0x0001) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData08[0x3];                                       // 0x04D9(0x0003) MISSED OFFSET
	float                                              MinValue;                                                 // 0x04DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxValue;                                                 // 0x04E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinSliderValue;                                           // 0x04E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxSliderValue;                                           // 0x04E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData09[0x14];                                      // 0x04EC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SpinBox");
		return ptr;
	}


	void SetValue(float NewValue);
	void SetMinValue(float NewValue);
	void SetMinSliderValue(float NewValue);
	void SetMaxValue(float NewValue);
	void SetMaxSliderValue(float NewValue);
	void SetForegroundColor(struct FSlateColor InForegroundColor);
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod);
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void OnSpinBoxBeginSliderMovement__DelegateSignature();
	float GetValue();
	float GetMinValue();
	float GetMinSliderValue();
	float GetMaxValue();
	float GetMaxSliderValue();
	void ClearMinValue();
	void ClearMinSliderValue();
	void ClearMaxValue();
	void ClearMaxSliderValue();
};


// Class UMG.TextBinding
// 0x0008 (0x0068 - 0x0060)
class UTextBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TextBinding");
		return ptr;
	}


	struct FText GetTextValue();
	struct FString GetStringValue();
};


// Class UMG.Throbber
// 0x00A8 (0x01A8 - 0x0100)
class UThrobber : public UWidget
{
public:
	int                                                NumberOfPieces;                                           // 0x0100(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnimateHorizontally;                                     // 0x0104(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnimateVertically;                                       // 0x0105(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnimateOpacity;                                          // 0x0106(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0107(0x0001) MISSED OFFSET
	class USlateBrushAsset*                            PieceImage;                                               // 0x0108(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Image;                                                    // 0x0110(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0198(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Throbber");
		return ptr;
	}


	void SetNumberOfPieces(int InNumberOfPieces);
	void SetAnimateVertically(bool bInAnimateVertically);
	void SetAnimateOpacity(bool bInAnimateOpacity);
	void SetAnimateHorizontally(bool bInAnimateHorizontally);
};


// Class UMG.UMGSequencePlayer
// 0x06C8 (0x06F0 - 0x0028)
class UUMGSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x348];                                     // 0x0028(0x0348) MISSED OFFSET
	class UWidgetAnimation*                            Animation;                                                // 0x0370(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x378];                                     // 0x0378(0x0378) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UMGSequencePlayer");
		return ptr;
	}


	void SetUserTag(struct FName InUserTag);
	struct FName GetUserTag();
};


// Class UMG.UniformGridPanel
// 0x0028 (0x0140 - 0x0118)
class UUniformGridPanel : public UPanelWidget
{
public:
	struct FMargin                                     SlotPadding;                                              // 0x0118(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              MinDesiredSlotWidth;                                      // 0x0128(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDesiredSlotHeight;                                     // 0x012C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0130(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UniformGridPanel");
		return ptr;
	}


	void SetSlotPadding(struct FMargin InSlotPadding);
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
	class UUniformGridSlot* AddChildToUniformGrid(class UWidget* Content);
};


// Class UMG.UniformGridSlot
// 0x0018 (0x0050 - 0x0038)
class UUniformGridSlot : public UPanelSlot
{
public:
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	int                                                Row;                                                      // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Column;                                                   // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0044(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UniformGridSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetRow(int InRow);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetColumn(int InColumn);
};


// Class UMG.VerticalBox
// 0x0010 (0x0128 - 0x0118)
class UVerticalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.VerticalBox");
		return ptr;
	}


	class UVerticalBoxSlot* AddChildToVerticalBox(class UWidget* Content);
};


// Class UMG.VerticalBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UVerticalBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateChildSize                             Size;                                                     // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0052(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.VerticalBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetSize(struct FSlateChildSize InSize);
	void SetPadding(struct FMargin InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.Viewport
// 0x0028 (0x0140 - 0x0118)
class UViewport : public UContentWidget
{
public:
	struct FLinearColor                                BackgroundColor;                                          // 0x0118(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0128(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Viewport");
		return ptr;
	}


	class AActor* Spawn(class UClass* ActorClass);
	void SetViewRotation(struct FRotator Rotation);
	void SetViewLocation(struct FVector Location);
	struct FRotator GetViewRotation();
	class UWorld* GetViewportWorld();
	struct FVector GetViewLocation();
};


// Class UMG.VisibilityBinding
// 0x0000 (0x0060 - 0x0060)
class UVisibilityBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.VisibilityBinding");
		return ptr;
	}


	ESlateVisibility GetValue();
};


// Class UMG.WidgetAnimation
// 0x0030 (0x0378 - 0x0348)
class UWidgetAnimation : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                               // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWidgetAnimationBinding>             AnimationBindings;                                        // 0x0350(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bLegacyFinishOnStop;                                      // 0x0360(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0361(0x0007) MISSED OFFSET
	struct FString                                     DisplayLabel;                                             // 0x0368(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetAnimation");
		return ptr;
	}


	void UnbindFromAnimationStarted(class UUserWidget* Widget);
	void UnbindFromAnimationFinished(class UUserWidget* Widget);
	void UnbindAllFromAnimationStarted(class UUserWidget* Widget);
	void UnbindAllFromAnimationFinished(class UUserWidget* Widget);
	float GetStartTime();
	float GetEndTime();
	void BindToAnimationStarted(class UUserWidget* Widget);
	void BindToAnimationFinished(class UUserWidget* Widget);
};


// Class UMG.WidgetAnimationDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding
{
public:
	TArray<struct FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings;                          // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetAnimationDelegateBinding");
		return ptr;
	}

};


// Class UMG.WidgetBinding
// 0x0000 (0x0060 - 0x0060)
class UWidgetBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetBinding");
		return ptr;
	}


	class UWidget* GetValue();
};


// Class UMG.WidgetBlueprintGeneratedClass
// 0x0070 (0x0350 - 0x02E0)
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	class UWidgetTree*                                 WidgetTree;                                               // 0x02E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowTemplate : 1;                                       // 0x02E8(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowDynamicCreation : 1;                                // 0x02E8(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bValidTemplate : 1;                                       // 0x02E8(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bTemplateInitialized : 1;                                 // 0x02E8(0x0001) (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bCookedTemplate : 1;                                      // 0x02E8(0x0001) (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bClassRequiresNativeTick : 1;                             // 0x02E8(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02E9(0x0007) MISSED OFFSET
	TArray<struct FDelegateRuntimeBinding>             Bindings;                                                 // 0x02F0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UWidgetAnimation*>                    Animations;                                               // 0x0300(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               NamedSlots;                                               // 0x0310(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0320(0x0028) UNKNOWN PROPERTY: SoftObjectProperty UMG.WidgetBlueprintGeneratedClass.TemplateAsset
	class UUserWidget*                                 Template;                                                 // 0x0348(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetBlueprintGeneratedClass");
		return ptr;
	}

};


// Class UMG.WidgetBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetBlueprintLibrary");
		return ptr;
	}


	static struct FEventReply UnlockMouse(struct FEventReply* Reply);
	static struct FEventReply Unhandled();
	static void SetWindowTitleBarState(class UWidget* TitleBarContent, EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible);
	static void SetWindowTitleBarOnCloseClickedDelegate();
	static void SetWindowTitleBarCloseButtonActive(bool bActive);
	static struct FEventReply SetUserFocus(class UWidget* FocusWidget, bool bInAllUsers, struct FEventReply* Reply);
	static struct FEventReply SetMousePosition(struct FVector2D NewMousePosition, struct FEventReply* Reply);
	static void SetInputMode_UIOnlyEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode);
	static void SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport);
	static void SetInputMode_GameOnly(class APlayerController* PlayerController);
	static void SetInputMode_GameAndUIEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture);
	static void SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture);
	static bool SetHardwareCursor(class UObject* WorldContextObject, TEnumAsByte<EMouseCursor> CursorShape, struct FName CursorName, struct FVector2D HotSpot);
	static void SetFocusToGameViewport();
	static void SetColorVisionDeficiencyType(EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency);
	static void SetBrushResourceToTexture(class UTexture2D* Texture, struct FSlateBrush* Brush);
	static void SetBrushResourceToMaterial(class UMaterialInterface* Material, struct FSlateBrush* Brush);
	static void RestorePreviousWindowTitleBarState();
	static struct FEventReply ReleaseMouseCapture(struct FEventReply* Reply);
	static struct FEventReply ReleaseJoystickCapture(bool bInAllJoysticks, struct FEventReply* Reply);
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();
	static struct FSlateBrush NoResourceBrush();
	static struct FSlateBrush MakeBrushFromTexture(class UTexture2D* Texture, int Width, int Height);
	static struct FSlateBrush MakeBrushFromMaterial(class UMaterialInterface* Material, int Width, int Height);
	static struct FSlateBrush MakeBrushFromAsset(class USlateBrushAsset* BrushAsset);
	static struct FEventReply LockMouse(class UWidget* CapturingWidget, struct FEventReply* Reply);
	static bool IsDragDropping();
	static struct FEventReply Handled();
	static void GetSafeZonePadding(class UObject* WorldContextObject, struct FVector4* SafePadding, struct FVector2D* SafePaddingScale, struct FVector4* SpillOverPadding);
	static struct FKeyEvent GetKeyEventFromAnalogInputEvent(struct FAnalogInputEvent Event);
	static struct FInputEvent GetInputEventFromPointerEvent(struct FPointerEvent Event);
	static struct FInputEvent GetInputEventFromNavigationEvent(struct FNavigationEvent Event);
	static struct FInputEvent GetInputEventFromKeyEvent(struct FKeyEvent Event);
	static struct FInputEvent GetInputEventFromCharacterEvent(struct FCharacterEvent Event);
	static class UMaterialInstanceDynamic* GetDynamicMaterial(struct FSlateBrush* Brush);
	static class UDragDropOperation* GetDragDroppingContent();
	static class UTexture2D* GetBrushResourceAsTexture2D(struct FSlateBrush Brush);
	static class UMaterialInterface* GetBrushResourceAsMaterial(struct FSlateBrush Brush);
	static class UObject* GetBrushResource(struct FSlateBrush Brush);
	static void GetAllWidgetsWithInterface(class UObject* WorldContextObject, class UClass* Interface, bool TopLevelOnly, TArray<class UUserWidget*>* FoundWidgets);
	static void GetAllWidgetsOfClass(class UObject* WorldContextObject, class UClass* WidgetClass, bool TopLevelOnly, TArray<class UUserWidget*>* FoundWidgets);
	static struct FEventReply EndDragDrop(struct FEventReply* Reply);
	static void DrawTextFormatted(struct FText Text, struct FVector2D Position, class UFont* Font, int FontSize, struct FName FontTypeFace, struct FLinearColor Tint, struct FPaintContext* Context);
	static void DrawText(struct FString inString, struct FVector2D Position, struct FLinearColor Tint, struct FPaintContext* Context);
	static void DrawLines(TArray<struct FVector2D> Points, struct FLinearColor Tint, bool bAntiAlias, float Thickness, struct FPaintContext* Context);
	static void DrawLine(struct FVector2D PositionA, struct FVector2D PositionB, struct FLinearColor Tint, bool bAntiAlias, float Thickness, struct FPaintContext* Context);
	static void DrawBox(struct FVector2D Position, struct FVector2D Size, class USlateBrushAsset* Brush, struct FLinearColor Tint, struct FPaintContext* Context);
	static void DismissAllMenus();
	static struct FEventReply DetectDragIfPressed(struct FPointerEvent PointerEvent, class UWidget* WidgetDetectingDrag, struct FKey DragKey);
	static struct FEventReply DetectDrag(class UWidget* WidgetDetectingDrag, struct FKey DragKey, struct FEventReply* Reply);
	static class UDragDropOperation* CreateDragDropOperation(class UClass* OperationClass);
	static class UUserWidget* Create(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer);
	static struct FEventReply ClearUserFocus(bool bInAllUsers, struct FEventReply* Reply);
	static struct FEventReply CaptureMouse(class UWidget* CapturingWidget, struct FEventReply* Reply);
	static struct FEventReply CaptureJoystick(class UWidget* CapturingWidget, bool bInAllJoysticks, struct FEventReply* Reply);
	static void CancelDragDrop();
};


// Class UMG.WidgetComponent
// 0x0110 (0x0500 - 0x03F0)
class UWidgetComponent : public UMeshComponent
{
public:
	class UClass*                                      WidgetClass;                                              // 0x03F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FIntPoint                                   DrawSize;                                                 // 0x03F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bManuallyRedraw;                                          // 0x0400(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bRedrawRequested;                                         // 0x0401(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0402(0x0002) MISSED OFFSET
	float                                              RedrawTime;                                               // 0x0404(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0408(0x0008) MISSED OFFSET
	struct FIntPoint                                   CurrentDrawSize;                                          // 0x0410(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDrawAtDesiredSize;                                       // 0x0418(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0419(0x0003) MISSED OFFSET
	struct FVector2D                                   Pivot;                                                    // 0x041C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bReceiveHardwareInput;                                    // 0x0424(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bWindowFocusable;                                         // 0x0425(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bApplyGammaCorrection;                                    // 0x0426(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0427(0x0001) MISSED OFFSET
	class ULocalPlayer*                                OwnerPlayer;                                              // 0x0428(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                BackgroundColor;                                          // 0x0430(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                TintColorAndOpacity;                                      // 0x0440(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              OpacityFromTexture;                                       // 0x0450(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EWidgetBlendMode                                   BlendMode;                                                // 0x0454(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsTwoSided;                                              // 0x0455(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               TickWhenOffscreen;                                        // 0x0456(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0457(0x0001) MISSED OFFSET
	class UUserWidget*                                 Widget;                                                   // 0x0458(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0x20];                                      // 0x0460(0x0020) MISSED OFFSET
	class UBodySetup*                                  BodySetup;                                                // 0x0480(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          TranslucentMaterial;                                      // 0x0488(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          TranslucentMaterial_OneSided;                             // 0x0490(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          OpaqueMaterial;                                           // 0x0498(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          OpaqueMaterial_OneSided;                                  // 0x04A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          MaskedMaterial;                                           // 0x04A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          MaskedMaterial_OneSided;                                  // 0x04B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextureRenderTarget2D*                      RenderTarget;                                             // 0x04B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*                    MaterialInstance;                                         // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bAddedToScreen;                                           // 0x04C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bEditTimeUsable;                                          // 0x04C9(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData06[0x2];                                       // 0x04CA(0x0002) MISSED OFFSET
	struct FName                                       SharedLayerName;                                          // 0x04CC(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                LayerZOrder;                                              // 0x04D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EWidgetGeometryMode                                GeometryMode;                                             // 0x04D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData07[0x3];                                       // 0x04D9(0x0003) MISSED OFFSET
	float                                              CylinderArcAngle;                                         // 0x04DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData08[0x20];                                      // 0x04E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetComponent");
		return ptr;
	}


	void SetWindowFocusable(bool bInWindowFocusable);
	void SetWidgetSpace(EWidgetSpace NewSpace);
	void SetWidget(class UUserWidget* Widget);
	void SetTwoSided(bool bWantTwoSided);
	void SetTintColorAndOpacity(struct FLinearColor NewTintColorAndOpacity);
	void SetTickWhenOffscreen(bool bWantTickWhenOffscreen);
	void SetRedrawTime(float bInRedrawTime);
	void SetPivot(struct FVector2D InPivot);
	void SetOwnerPlayer(class ULocalPlayer* LocalPlayer);
	void SetManuallyRedraw(bool bUseManualRedraw);
	void SetGeometryMode(EWidgetGeometryMode InGeometryMode);
	void SetDrawSize(struct FVector2D Size);
	void SetDrawAtDesiredSize(bool InbDrawAtDesiredSize);
	void SetCylinderArcAngle(float InCylinderArcAngle);
	void SetBackgroundColor(struct FLinearColor NewBackgroundColor);
	void RequestRedraw();
	bool GetWindowFocusable();
	EWidgetSpace GetWidgetSpace();
	class UUserWidget* GetUserWidgetObject();
	bool GetTwoSided();
	bool GetTickWhenOffscreen();
	class UTextureRenderTarget2D* GetRenderTarget();
	float GetRedrawTime();
	struct FVector2D GetPivot();
	class ULocalPlayer* GetOwnerPlayer();
	class UMaterialInstanceDynamic* GetMaterialInstance();
	bool GetManuallyRedraw();
	EWidgetGeometryMode GetGeometryMode();
	struct FVector2D GetDrawSize();
	bool GetDrawAtDesiredSize();
	float GetCylinderArcAngle();
	struct FVector2D GetCurrentDrawSize();
};


// Class UMG.WidgetInteractionComponent
// 0x01F0 (0x03E0 - 0x01F0)
class UWidgetInteractionComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01F0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.WidgetInteractionComponent.OnHoveredWidgetChanged
	unsigned char                                      UnknownData01[0x10];                                      // 0x0200(0x0010) MISSED OFFSET
	int                                                VirtualUserIndex;                                         // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PointerIndex;                                             // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x0218(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0219(0x0003) MISSED OFFSET
	float                                              InteractionDistance;                                      // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EWidgetInteractionSource                           InteractionSource;                                        // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableHitTesting;                                        // 0x0221(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowDebug;                                               // 0x0222(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0223(0x0001) MISSED OFFSET
	struct FLinearColor                                DebugColor;                                               // 0x0224(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x7C];                                      // 0x0234(0x007C) MISSED OFFSET
	struct FHitResult                                  CustomHitResult;                                          // 0x02B0(0x0088) (Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FVector2D                                   LocalHitLocation;                                         // 0x0338(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                                   LastLocalHitLocation;                                     // 0x0340(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetComponent*                            HoveredWidgetComponent;                                   // 0x0348(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FHitResult                                  LastHitResult;                                            // 0x0350(0x0088) (Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                               bIsHoveredWidgetInteractable;                             // 0x03D8(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsHoveredWidgetFocusable;                                // 0x03D9(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsHoveredWidgetHitTestVisible;                           // 0x03DA(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0x5];                                       // 0x03DB(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetInteractionComponent");
		return ptr;
	}


	void SetCustomHitResult(struct FHitResult HitResult);
	bool SendKeyChar(struct FString Characters, bool bRepeat);
	void ScrollWheel(float ScrollDelta);
	void ReleasePointerKey(struct FKey Key);
	bool ReleaseKey(struct FKey Key);
	void PressPointerKey(struct FKey Key);
	bool PressKey(struct FKey Key, bool bRepeat);
	bool PressAndReleaseKey(struct FKey Key);
	bool IsOverInteractableWidget();
	bool IsOverHitTestVisibleWidget();
	bool IsOverFocusableWidget();
	struct FHitResult GetLastHitResult();
	class UWidgetComponent* GetHoveredWidgetComponent();
	struct FVector2D Get2DHitLocation();
};


// Class UMG.WidgetLayoutLibrary
// 0x0000 (0x0028 - 0x0028)
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetLayoutLibrary");
		return ptr;
	}


	static class UVerticalBoxSlot* SlotAsVerticalBoxSlot(class UWidget* Widget);
	static class UUniformGridSlot* SlotAsUniformGridSlot(class UWidget* Widget);
	static class UOverlaySlot* SlotAsOverlaySlot(class UWidget* Widget);
	static class UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(class UWidget* Widget);
	static class UGridSlot* SlotAsGridSlot(class UWidget* Widget);
	static class UCanvasPanelSlot* SlotAsCanvasSlot(class UWidget* Widget);
	static class UBorderSlot* SlotAsBorderSlot(class UWidget* Widget);
	static void RemoveAllWidgets(class UObject* WorldContextObject);
	static bool ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, struct FVector WorldLocation, struct FVector2D* ScreenPosition);
	static struct FGeometry GetViewportWidgetGeometry(class UObject* WorldContextObject);
	static struct FVector2D GetViewportSize(class UObject* WorldContextObject);
	static float GetViewportScale(class UObject* WorldContextObject);
	static struct FGeometry GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController);
	static bool GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY);
	static struct FVector2D GetMousePositionOnViewport(class UObject* WorldContextObject);
	static struct FVector2D GetMousePositionOnPlatform();
};


// Class UMG.WidgetNavigation
// 0x00D8 (0x0100 - 0x0028)
class UWidgetNavigation : public UObject
{
public:
	struct FWidgetNavigationData                       Up;                                                       // 0x0028(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                       Down;                                                     // 0x004C(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                       Left;                                                     // 0x0070(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                       Right;                                                    // 0x0094(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                       Next;                                                     // 0x00B8(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                       Previous;                                                 // 0x00DC(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetNavigation");
		return ptr;
	}

};


// Class UMG.WidgetSwitcherSlot
// 0x0020 (0x0058 - 0x0038)
class UWidgetSwitcherSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xE];                                       // 0x004A(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetSwitcherSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(struct FMargin InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.WidgetTree
// 0x0008 (0x0030 - 0x0028)
class UWidgetTree : public UObject
{
public:
	class UWidget*                                     RootWidget;                                               // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetTree");
		return ptr;
	}

};


// Class UMG.WindowTitleBarArea
// 0x0020 (0x0138 - 0x0118)
class UWindowTitleBarArea : public UContentWidget
{
public:
	bool                                               bWindowButtonsEnabled;                                    // 0x0118(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDoubleClickTogglesFullscreen;                            // 0x0119(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1E];                                      // 0x011A(0x001E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WindowTitleBarArea");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(struct FMargin InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.WindowTitleBarAreaSlot
// 0x0028 (0x0060 - 0x0038)
class UWindowTitleBarAreaSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WindowTitleBarAreaSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(struct FMargin InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.WrapBox
// 0x0020 (0x0138 - 0x0118)
class UWrapBox : public UPanelWidget
{
public:
	struct FVector2D                                   InnerSlotPadding;                                         // 0x0118(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WrapWidth;                                                // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bExplicitWrapWidth;                                       // 0x0124(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x13];                                      // 0x0125(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WrapBox");
		return ptr;
	}


	void SetInnerSlotPadding(struct FVector2D InPadding);
	class UWrapBoxSlot* AddChildToWrapBox(class UWidget* Content);
};


// Class UMG.WrapBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UWrapBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bFillEmptySpace;                                          // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              FillSpanWhenLessThan;                                     // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xE];                                       // 0x0052(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WrapBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(struct FMargin InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
	void SetFillEmptySpace(bool InbFillEmptySpace);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
