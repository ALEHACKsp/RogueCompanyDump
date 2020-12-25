// Class UMG.Widget
// Size: 0x110 (Inherited: 0x28)
struct UWidget : public UVisual {
	struct UPanelSlot* Slot; // 0x28(0x08)
	struct FDelegate bIsEnabledDelegate; // 0x30(0x10)
	struct FText ToolTipText; // 0x40(0x18)
	struct FDelegate ToolTipTextDelegate; // 0x58(0x10)
	struct UWidget* ToolTipWidget; // 0x68(0x08)
	struct FDelegate ToolTipWidgetDelegate; // 0x70(0x10)
	struct FDelegate VisibilityDelegate; // 0x80(0x10)
	struct FWidgetTransform RenderTransform; // 0x90(0x1c)
	struct FVector2D RenderTransformPivot; // 0xac(0x08)
	char bIsVariable : 1; // 0xb4(0x01)
	char bCreatedByConstructionScript : 1; // 0xb4(0x01)
	char bIsEnabled : 1; // 0xb4(0x01)
	char bOverride_Cursor : 1; // 0xb4(0x01)
	char UnknownData_B4_4 : 4; // 0xb4(0x01)
	char UnknownData_B5[0x3]; // 0xb5(0x03)
	struct USlateAccessibleWidgetData* AccessibleWidgetData; // 0xb8(0x08)
	char bIsVolatile : 1; // 0xc0(0x01)
	char bAllowRenderInterpolation : 1; // 0xc0(0x01)
	char bIssueGlobalInvalidateOnVisible : 1; // 0xc0(0x01)
	char UnknownData_C0_3 : 5; // 0xc0(0x01)
	char DebugWidgetIndex; // 0xc1(0x01)
	char Cursor; // 0xc2(0x01)
	enum class EWidgetClipping Clipping; // 0xc3(0x01)
	enum class ESlateVisibility Visibility; // 0xc4(0x01)
	char UnknownData_C5[0x3]; // 0xc5(0x03)
	float RenderOpacity; // 0xc8(0x04)
	char UnknownData_CC[0x4]; // 0xcc(0x04)
	struct UWidgetNavigation* Navigation; // 0xd0(0x08)
	enum class EFlowDirectionPreference FlowDirectionPreference; // 0xd8(0x01)
	char UnknownData_D9[0x27]; // 0xd9(0x27)
	struct TArray<struct UPropertyBinding*> NativeBindings; // 0x100(0x10)

	void SetVisibility(enum class ESlateVisibility InVisibility); // Function UMG.Widget.SetVisibility
	void SetUserFocus(struct APlayerController* PlayerController); // Function UMG.Widget.SetUserFocus
	void SetToolTipText(struct FText InToolTipText); // Function UMG.Widget.SetToolTipText
	void SetToolTip(struct UWidget* Widget); // Function UMG.Widget.SetToolTip
	void SetRenderTranslation(struct FVector2D Translation); // Function UMG.Widget.SetRenderTranslation
	void SetRenderTransformPivot(struct FVector2D Pivot); // Function UMG.Widget.SetRenderTransformPivot
	void SetRenderTransformAngle(float Angle); // Function UMG.Widget.SetRenderTransformAngle
	void SetRenderTransform(struct FWidgetTransform InTransform); // Function UMG.Widget.SetRenderTransform
	void SetRenderShear(struct FVector2D Shear); // Function UMG.Widget.SetRenderShear
	void SetRenderScale(struct FVector2D Scale); // Function UMG.Widget.SetRenderScale
	void SetRenderOpacity(float InOpacity); // Function UMG.Widget.SetRenderOpacity
	void SetNavigationRuleExplicit(enum class EUINavigation Direction, struct UWidget* InWidget); // Function UMG.Widget.SetNavigationRuleExplicit
	void SetNavigationRuleCustomBoundary(enum class EUINavigation Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustomBoundary
	void SetNavigationRuleCustom(enum class EUINavigation Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustom
	void SetNavigationRuleBase(enum class EUINavigation Direction, enum class EUINavigationRule Rule); // Function UMG.Widget.SetNavigationRuleBase
	void SetNavigationRule(enum class EUINavigation Direction, enum class EUINavigationRule Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetNavigationRule
	void SetKeyboardFocus(); // Function UMG.Widget.SetKeyboardFocus
	void SetIsEnabled(bool bInIsEnabled); // Function UMG.Widget.SetIsEnabled
	void SetFocus(); // Function UMG.Widget.SetFocus
	void SetCursor(char InCursor); // Function UMG.Widget.SetCursor
	void SetClipping(enum class EWidgetClipping InClipping); // Function UMG.Widget.SetClipping
	void SetAllowRenderInterpolation(bool bInAllowInterpolation); // Function UMG.Widget.SetAllowRenderInterpolation
	void SetAllNavigationRules(enum class EUINavigationRule Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetAllNavigationRules
	void ResetCursor(); // Function UMG.Widget.ResetCursor
	void RemoveFromParent(); // Function UMG.Widget.RemoveFromParent
	struct FEventReply OnReply__DelegateSignature(); // DelegateFunction UMG.Widget.OnReply__DelegateSignature
	struct FEventReply OnPointerEvent__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
	bool IsVisible(); // Function UMG.Widget.IsVisible
	bool IsHovered(); // Function UMG.Widget.IsHovered
	void InvalidateLayoutAndVolatility(); // Function UMG.Widget.InvalidateLayoutAndVolatility
	bool HasUserFocusedDescendants(struct APlayerController* PlayerController); // Function UMG.Widget.HasUserFocusedDescendants
	bool HasUserFocus(struct APlayerController* PlayerController); // Function UMG.Widget.HasUserFocus
	bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex); // Function UMG.Widget.HasMouseCaptureByUser
	bool HasMouseCapture(); // Function UMG.Widget.HasMouseCapture
	bool HasKeyboardFocus(); // Function UMG.Widget.HasKeyboardFocus
	bool HasFocusedDescendants(); // Function UMG.Widget.HasFocusedDescendants
	bool HasAnyUserFocus(); // Function UMG.Widget.HasAnyUserFocus
	struct UWidget* GetWidget__DelegateSignature(); // DelegateFunction UMG.Widget.GetWidget__DelegateSignature
	enum class ESlateVisibility GetVisibility(); // Function UMG.Widget.GetVisibility
	struct FGeometry GetTickSpaceGeometry(); // Function UMG.Widget.GetTickSpaceGeometry
	struct FText GetText__DelegateSignature(); // DelegateFunction UMG.Widget.GetText__DelegateSignature
	enum class ESlateVisibility GetSlateVisibility__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
	struct FSlateColor GetSlateColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
	struct FSlateBrush GetSlateBrush__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
	float GetRenderTransformAngle(); // Function UMG.Widget.GetRenderTransformAngle
	float GetRenderOpacity(); // Function UMG.Widget.GetRenderOpacity
	struct UPanelWidget* GetParent(); // Function UMG.Widget.GetParent
	struct FGeometry GetPaintSpaceGeometry(); // Function UMG.Widget.GetPaintSpaceGeometry
	struct APlayerController* GetOwningPlayer(); // Function UMG.Widget.GetOwningPlayer
	struct ULocalPlayer* GetOwningLocalPlayer(); // Function UMG.Widget.GetOwningLocalPlayer
	char GetMouseCursor__DelegateSignature(); // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
	struct FLinearColor GetLinearColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
	bool GetIsEnabled(); // Function UMG.Widget.GetIsEnabled
	int32_t GetInt32__DelegateSignature(); // DelegateFunction UMG.Widget.GetInt32__DelegateSignature
	struct UGameInstance* GetGameInstance(); // Function UMG.Widget.GetGameInstance
	float GetFloat__DelegateSignature(); // DelegateFunction UMG.Widget.GetFloat__DelegateSignature
	struct FVector2D GetDesiredSize(); // Function UMG.Widget.GetDesiredSize
	enum class EWidgetClipping GetClipping(); // Function UMG.Widget.GetClipping
	enum class ECheckBoxState GetCheckBoxState__DelegateSignature(); // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
	struct FGeometry GetCachedGeometry(); // Function UMG.Widget.GetCachedGeometry
	bool GetBool__DelegateSignature(); // DelegateFunction UMG.Widget.GetBool__DelegateSignature
	struct UWidget* GenerateWidgetForString__DelegateSignature(struct FString Item); // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
	struct UWidget* GenerateWidgetForObject__DelegateSignature(struct UObject* Item); // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
	void ForceVolatile(bool bForce); // Function UMG.Widget.ForceVolatile
	void ForceLayoutPrepass(); // Function UMG.Widget.ForceLayoutPrepass
};

// Class UMG.Image
// Size: 0x218 (Inherited: 0x110)
struct UImage : public UWidget {
	struct FSlateBrush Brush; // 0x110(0x88)
	struct FDelegate BrushDelegate; // 0x198(0x10)
	struct FLinearColor ColorAndOpacity; // 0x1a8(0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x1b8(0x10)
	bool bFlipForRightToLeftFlowDirection; // 0x1c8(0x01)
	char UnknownData_1C9[0x3]; // 0x1c9(0x03)
	struct FDelegate OnMouseButtonDownEvent; // 0x1cc(0x10)
	char UnknownData_1DC[0x3c]; // 0x1dc(0x3c)

	void SetOpacity(float InOpacity); // Function UMG.Image.SetOpacity
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Image.SetColorAndOpacity
	void SetBrushTintColor(struct FSlateColor TintColor); // Function UMG.Image.SetBrushTintColor
	void SetBrushSize(struct FVector2D DesiredSize); // Function UMG.Image.SetBrushSize
	void SetBrushResourceObject(struct UObject* ResourceObject); // Function UMG.Image.SetBrushResourceObject
	void SetBrushFromTextureDynamic(struct UTexture2DDynamic* Texture, bool bMatchSize); // Function UMG.Image.SetBrushFromTextureDynamic
	void SetBrushFromTexture(struct UTexture2D* Texture, bool bMatchSize); // Function UMG.Image.SetBrushFromTexture
	void SetBrushFromSoftTexture(struct TSoftObjectPtr<struct UTexture2D> SoftTexture, bool bMatchSize); // Function UMG.Image.SetBrushFromSoftTexture
	void SetBrushFromSoftMaterial(struct TSoftObjectPtr<struct UMaterialInterface> SoftMaterial); // Function UMG.Image.SetBrushFromSoftMaterial
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // Function UMG.Image.SetBrushFromMaterial
	void SetBrushFromAtlasInterface(struct TScriptInterface<None> AtlasRegion, bool bMatchSize); // Function UMG.Image.SetBrushFromAtlasInterface
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // Function UMG.Image.SetBrushFromAsset
	void SetBrush(struct FSlateBrush InBrush); // Function UMG.Image.SetBrush
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Image.GetDynamicMaterial
};

// Class UMG.PanelWidget
// Size: 0x128 (Inherited: 0x110)
struct UPanelWidget : public UWidget {
	struct TArray<struct UPanelSlot*> Slots; // 0x110(0x10)
	char UnknownData_120[0x8]; // 0x120(0x08)

	bool RemoveChildAt(int32_t Index); // Function UMG.PanelWidget.RemoveChildAt
	bool RemoveChild(struct UWidget* Content); // Function UMG.PanelWidget.RemoveChild
	bool HasChild(struct UWidget* Content); // Function UMG.PanelWidget.HasChild
	bool HasAnyChildren(); // Function UMG.PanelWidget.HasAnyChildren
	int32_t GetChildrenCount(); // Function UMG.PanelWidget.GetChildrenCount
	int32_t GetChildIndex(struct UWidget* Content); // Function UMG.PanelWidget.GetChildIndex
	struct UWidget* GetChildAt(int32_t Index); // Function UMG.PanelWidget.GetChildAt
	struct TArray<struct UWidget*> GetAllChildren(); // Function UMG.PanelWidget.GetAllChildren
	void ClearChildren(); // Function UMG.PanelWidget.ClearChildren
	struct UPanelSlot* AddChild(struct UWidget* Content); // Function UMG.PanelWidget.AddChild
};

// Class UMG.CanvasPanel
// Size: 0x138 (Inherited: 0x128)
struct UCanvasPanel : public UPanelWidget {
	char UnknownData_128[0x10]; // 0x128(0x10)

	struct UCanvasPanelSlot* AddChildToCanvas(struct UWidget* Content); // Function UMG.CanvasPanel.AddChildToCanvas
};

// Class UMG.UserWidget
// Size: 0x238 (Inherited: 0x110)
struct UUserWidget : public UWidget {
	char UnknownData_110[0x8]; // 0x110(0x08)
	struct FLinearColor ColorAndOpacity; // 0x118(0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x128(0x10)
	struct FSlateColor ForegroundColor; // 0x138(0x28)
	struct FDelegate ForegroundColorDelegate; // 0x160(0x10)
	struct FMargin Padding; // 0x170(0x10)
	struct TArray<struct UUMGSequencePlayer*> ActiveSequencePlayers; // 0x180(0x10)
	struct TArray<struct UUMGSequencePlayer*> StoppedSequencePlayers; // 0x190(0x10)
	struct TArray<struct FNamedSlotBinding> NamedSlotBindings; // 0x1a0(0x10)
	struct UWidgetTree* WidgetTree; // 0x1b0(0x08)
	int32_t Priority; // 0x1b8(0x04)
	char bSupportsKeyboardFocus : 1; // 0x1bc(0x01)
	char bIsFocusable : 1; // 0x1bc(0x01)
	char bStopAction : 1; // 0x1bc(0x01)
	char bHasScriptImplementedTick : 1; // 0x1bc(0x01)
	char bHasScriptImplementedPaint : 1; // 0x1bc(0x01)
	char UnknownData_1BC_5 : 2; // 0x1bc(0x01)
	char bCookedWidgetTree : 1; // 0x1bc(0x01)
	char UnknownData_1BD[0xb]; // 0x1bd(0x0b)
	enum class EWidgetTickFrequency TickFrequency; // 0x1c8(0x01)
	char UnknownData_1C9[0x7]; // 0x1c9(0x07)
	struct UInputComponent* InputComponent; // 0x1d0(0x08)
	struct TArray<struct FAnimationEventBinding> AnimationCallbacks; // 0x1d8(0x10)
	char UnknownData_1E8[0x50]; // 0x1e8(0x50)

	void UnregisterInputComponent(); // Function UMG.UserWidget.UnregisterInputComponent
	void UnbindFromAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationStarted
	void UnbindFromAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationFinished
	void UnbindAllFromAnimationStarted(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.UnbindAllFromAnimationStarted
	void UnbindAllFromAnimationFinished(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.UnbindAllFromAnimationFinished
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG.UserWidget.Tick
	void StopListeningForInputAction(struct FName ActionName, char EventType); // Function UMG.UserWidget.StopListeningForInputAction
	void StopListeningForAllInputActions(); // Function UMG.UserWidget.StopListeningForAllInputActions
	void StopAnimationsAndLatentActions(); // Function UMG.UserWidget.StopAnimationsAndLatentActions
	void StopAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.StopAnimation
	void StopAllAnimations(); // Function UMG.UserWidget.StopAllAnimations
	void SetZOrderInViewport(int32_t ZOrder); // Function UMG.UserWidget.SetZOrderInViewport
	void SetPositionInViewport(struct FVector2D Position, bool bRemoveDPIScale); // Function UMG.UserWidget.SetPositionInViewport
	void SetPlaybackSpeed(struct UWidgetAnimation* InAnimation, float PlaybackSpeed); // Function UMG.UserWidget.SetPlaybackSpeed
	void SetPadding(struct FMargin InPadding); // Function UMG.UserWidget.SetPadding
	void SetOwningPlayer(struct APlayerController* LocalPlayerController); // Function UMG.UserWidget.SetOwningPlayer
	void SetNumLoopsToPlay(struct UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay); // Function UMG.UserWidget.SetNumLoopsToPlay
	void SetInputActionPriority(int32_t NewPriority); // Function UMG.UserWidget.SetInputActionPriority
	void SetInputActionBlocking(bool bShouldBlock); // Function UMG.UserWidget.SetInputActionBlocking
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.UserWidget.SetForegroundColor
	void SetDesiredSizeInViewport(struct FVector2D Size); // Function UMG.UserWidget.SetDesiredSizeInViewport
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.UserWidget.SetColorAndOpacity
	void SetAnchorsInViewport(struct FAnchors Anchors); // Function UMG.UserWidget.SetAnchorsInViewport
	void SetAlignmentInViewport(struct FVector2D Alignment); // Function UMG.UserWidget.SetAlignmentInViewport
	void ReverseAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.ReverseAnimation
	void RemoveFromViewport(); // Function UMG.UserWidget.RemoveFromViewport
	void RegisterInputComponent(); // Function UMG.UserWidget.RegisterInputComponent
	void PreConstruct(bool IsDesignTime); // Function UMG.UserWidget.PreConstruct
	void PlaySound(struct USoundBase* SoundToPlay); // Function UMG.UserWidget.PlaySound
	struct UUMGSequencePlayer* PlayAnimationTimeRange(struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, char PlayMode, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationTimeRange
	struct UUMGSequencePlayer* PlayAnimationReverse(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationReverse
	struct UUMGSequencePlayer* PlayAnimationForward(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationForward
	struct UUMGSequencePlayer* PlayAnimation(struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, char PlayMode, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimation
	float PauseAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.PauseAnimation
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent); // Function UMG.UserWidget.OnTouchStarted
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent); // Function UMG.UserWidget.OnTouchMoved
	struct FEventReply OnTouchGesture(struct FGeometry MyGeometry, struct FPointerEvent GestureEvent); // Function UMG.UserWidget.OnTouchGesture
	struct FEventReply OnTouchForceChanged(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent); // Function UMG.UserWidget.OnTouchForceChanged
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent); // Function UMG.UserWidget.OnTouchEnded
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnRemovedFromFocusPath
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnPreviewMouseButtonDown
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnPreviewKeyDown
	void OnPaint(struct FPaintContext Context); // Function UMG.UserWidget.OnPaint
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnMouseWheel
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnMouseMove
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnMouseLeave
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnMouseEnter
	void OnMouseCaptureLost(); // Function UMG.UserWidget.OnMouseCaptureLost
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnMouseButtonUp
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnMouseButtonDown
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent InMouseEvent); // Function UMG.UserWidget.OnMouseButtonDoubleClick
	struct FEventReply OnMotionDetected(struct FGeometry MyGeometry, struct FMotionEvent InMotionEvent); // Function UMG.UserWidget.OnMotionDetected
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyUp
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyDown
	struct FEventReply OnKeyChar(struct FGeometry MyGeometry, struct FCharacterEvent InCharacterEvent); // Function UMG.UserWidget.OnKeyChar
	void OnInitialized(); // Function UMG.UserWidget.OnInitialized
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusReceived
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusLost
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDrop
	bool OnDragOver(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragOver
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragLeave
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragEnter
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragDetected
	void OnDragCancelled(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragCancelled
	void OnAnimationStarted(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.OnAnimationStarted
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.OnAnimationFinished
	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent); // Function UMG.UserWidget.OnAnalogValueChanged
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnAddedToFocusPath
	void ListenForInputAction(struct FName ActionName, char EventType, bool bConsume, struct FDelegate Callback); // Function UMG.UserWidget.ListenForInputAction
	bool IsPlayingAnimation(); // Function UMG.UserWidget.IsPlayingAnimation
	bool IsListeningForInputAction(struct FName ActionName); // Function UMG.UserWidget.IsListeningForInputAction
	bool IsInViewport(); // Function UMG.UserWidget.IsInViewport
	bool IsInteractable(); // Function UMG.UserWidget.IsInteractable
	bool IsAnyAnimationPlaying(); // Function UMG.UserWidget.IsAnyAnimationPlaying
	bool IsAnimationPlayingForward(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.IsAnimationPlayingForward
	bool IsAnimationPlaying(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.IsAnimationPlaying
	struct APawn* GetOwningPlayerPawn(); // Function UMG.UserWidget.GetOwningPlayerPawn
	bool GetIsVisible(); // Function UMG.UserWidget.GetIsVisible
	float GetAnimationCurrentTime(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.GetAnimationCurrentTime
	struct FAnchors GetAnchorsInViewport(); // Function UMG.UserWidget.GetAnchorsInViewport
	struct FVector2D GetAlignmentInViewport(); // Function UMG.UserWidget.GetAlignmentInViewport
	void Destruct(); // Function UMG.UserWidget.Destruct
	void Construct(); // Function UMG.UserWidget.Construct
	void CancelLatentActions(); // Function UMG.UserWidget.CancelLatentActions
	void BindToAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationStarted
	void BindToAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationFinished
	void BindToAnimationEvent(struct UWidgetAnimation* Animation, struct FDelegate Delegate, enum class EWidgetAnimationEvent AnimationEvent, struct FName UserTag); // Function UMG.UserWidget.BindToAnimationEvent
	void AddToViewport(int32_t ZOrder); // Function UMG.UserWidget.AddToViewport
	bool AddToPlayerScreen(int32_t ZOrder); // Function UMG.UserWidget.AddToPlayerScreen
};

// Class UMG.EditableTextBox
// Size: 0xa30 (Inherited: 0x110)
struct UEditableTextBox : public UWidget {
	struct FText Text; // 0x110(0x18)
	struct FDelegate TextDelegate; // 0x128(0x10)
	struct FEditableTextBoxStyle WidgetStyle; // 0x138(0x7f0)
	struct USlateWidgetStyleAsset* Style; // 0x928(0x08)
	struct FText HintText; // 0x930(0x18)
	struct FDelegate HintTextDelegate; // 0x948(0x10)
	struct FSlateFontInfo Font; // 0x958(0x50)
	struct FLinearColor ForegroundColor; // 0x9a8(0x10)
	struct FLinearColor BackgroundColor; // 0x9b8(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0x9c8(0x10)
	bool IsReadOnly; // 0x9d8(0x01)
	bool IsPassword; // 0x9d9(0x01)
	char UnknownData_9DA[0x2]; // 0x9da(0x02)
	float MinimumDesiredWidth; // 0x9dc(0x04)
	struct FMargin Padding; // 0x9e0(0x10)
	bool IsCaretMovedWhenGainFocus; // 0x9f0(0x01)
	bool SelectAllTextWhenFocused; // 0x9f1(0x01)
	bool RevertTextOnEscape; // 0x9f2(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x9f3(0x01)
	bool SelectAllTextOnCommit; // 0x9f4(0x01)
	bool AllowContextMenu; // 0x9f5(0x01)
	char KeyboardType; // 0x9f6(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x9f7(0x01)
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x9f8(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x9f9(0x01)
	char Justification; // 0x9fa(0x01)
	struct FShapedTextOptions ShapedTextOptions; // 0x9fb(0x03)
	char UnknownData_9FE[0x2]; // 0x9fe(0x02)
	struct FMulticastInlineDelegate OnTextChanged; // 0xa00(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xa10(0x10)
	char UnknownData_A20[0x10]; // 0xa20(0x10)

	void SetText(struct FText InText); // Function UMG.EditableTextBox.SetText
	void SetJustification(char InJustification); // Function UMG.EditableTextBox.SetJustification
	void SetIsReadOnly(bool bReadOnly); // Function UMG.EditableTextBox.SetIsReadOnly
	void SetIsPassword(bool bIsPassword); // Function UMG.EditableTextBox.SetIsPassword
	void SetHintText(struct FText InText); // Function UMG.EditableTextBox.SetHintText
	void SetError(struct FText InError); // Function UMG.EditableTextBox.SetError
	void OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, char CommitMethod); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
	void OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
	bool HasError(); // Function UMG.EditableTextBox.HasError
	struct FText GetText(); // Function UMG.EditableTextBox.GetText
	void ClearError(); // Function UMG.EditableTextBox.ClearError
};

// Class UMG.ScrollBox
// Size: 0x888 (Inherited: 0x128)
struct UScrollBox : public UPanelWidget {
	struct FScrollBoxStyle WidgetStyle; // 0x128(0x228)
	struct FScrollBarStyle WidgetBarStyle; // 0x350(0x4d0)
	struct USlateWidgetStyleAsset* Style; // 0x820(0x08)
	struct USlateWidgetStyleAsset* BarStyle; // 0x828(0x08)
	char Orientation; // 0x830(0x01)
	enum class ESlateVisibility ScrollBarVisibility; // 0x831(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x832(0x01)
	char UnknownData_833[0x1]; // 0x833(0x01)
	struct FVector2D ScrollbarThickness; // 0x834(0x08)
	struct FMargin ScrollbarPadding; // 0x83c(0x10)
	bool AlwaysShowScrollbar; // 0x84c(0x01)
	bool AlwaysShowScrollbarTrack; // 0x84d(0x01)
	bool AllowOverscroll; // 0x84e(0x01)
	bool bAnimateWheelScrolling; // 0x84f(0x01)
	enum class EDescendantScrollDestination NavigationDestination; // 0x850(0x01)
	char UnknownData_851[0x3]; // 0x851(0x03)
	float NavigationScrollPadding; // 0x854(0x04)
	enum class EScrollWhenFocusChanges ScrollWhenFocusChanges; // 0x858(0x01)
	bool bAllowRightClickDragScrolling; // 0x859(0x01)
	char UnknownData_85A[0x2]; // 0x85a(0x02)
	float WheelScrollMultiplier; // 0x85c(0x04)
	struct FMulticastInlineDelegate OnUserScrolled; // 0x860(0x10)
	char UnknownData_870[0x18]; // 0x870(0x18)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ScrollBox.SetWheelScrollMultiplier
	void SetScrollOffset(float NewScrollOffset); // Function UMG.ScrollBox.SetScrollOffset
	void SetScrollBarVisibility(enum class ESlateVisibility NewScrollBarVisibility); // Function UMG.ScrollBox.SetScrollBarVisibility
	void SetScrollbarThickness(struct FVector2D NewScrollbarThickness); // Function UMG.ScrollBox.SetScrollbarThickness
	void SetScrollbarPadding(struct FMargin NewScrollbarPadding); // Function UMG.ScrollBox.SetScrollbarPadding
	void SetOrientation(char NewOrientation); // Function UMG.ScrollBox.SetOrientation
	void SetConsumeMouseWheel(enum class EConsumeMouseWheel NewConsumeMouseWheel); // Function UMG.ScrollBox.SetConsumeMouseWheel
	void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling); // Function UMG.ScrollBox.SetAnimateWheelScrolling
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar); // Function UMG.ScrollBox.SetAlwaysShowScrollbar
	void SetAllowOverscroll(bool NewAllowOverscroll); // Function UMG.ScrollBox.SetAllowOverscroll
	void ScrollWidgetIntoView(struct UWidget* WidgetToFind, bool AnimateScroll, enum class EDescendantScrollDestination ScrollDestination, float Padding); // Function UMG.ScrollBox.ScrollWidgetIntoView
	void ScrollToStart(); // Function UMG.ScrollBox.ScrollToStart
	void ScrollToEnd(); // Function UMG.ScrollBox.ScrollToEnd
	float GetViewOffsetFraction(); // Function UMG.ScrollBox.GetViewOffsetFraction
	float GetScrollOffsetOfEnd(); // Function UMG.ScrollBox.GetScrollOffsetOfEnd
	float GetScrollOffset(); // Function UMG.ScrollBox.GetScrollOffset
	void EndInertialScrolling(); // Function UMG.ScrollBox.EndInertialScrolling
};

// Class UMG.GridPanel
// Size: 0x158 (Inherited: 0x128)
struct UGridPanel : public UPanelWidget {
	struct TArray<float> ColumnFill; // 0x128(0x10)
	struct TArray<float> RowFill; // 0x138(0x10)
	char UnknownData_148[0x10]; // 0x148(0x10)

	void SetRowFill(int32_t ColumnIndex, float Coefficient); // Function UMG.GridPanel.SetRowFill
	void SetColumnFill(int32_t ColumnIndex, float Coefficient); // Function UMG.GridPanel.SetColumnFill
	struct UGridSlot* AddChildToGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn); // Function UMG.GridPanel.AddChildToGrid
};

// Class UMG.VerticalBox
// Size: 0x138 (Inherited: 0x128)
struct UVerticalBox : public UPanelWidget {
	char UnknownData_128[0x10]; // 0x128(0x10)

	struct UVerticalBoxSlot* AddChildToVerticalBox(struct UWidget* Content); // Function UMG.VerticalBox.AddChildToVerticalBox
};

// Class UMG.ListViewBase
// Size: 0x220 (Inherited: 0x110)
struct UListViewBase : public UWidget {
	struct UUserWidget* EntryWidgetClass; // 0x110(0x08)
	float WheelScrollMultiplier; // 0x118(0x04)
	bool bEnableScrollAnimation; // 0x11c(0x01)
	bool bEnableFixedLineOffset; // 0x11d(0x01)
	char UnknownData_11E[0x2]; // 0x11e(0x02)
	float FixedLineScrollOffset; // 0x120(0x04)
	char UnknownData_124[0x4]; // 0x124(0x04)
	struct FMulticastInlineDelegate BP_OnEntryGenerated; // 0x128(0x10)
	struct FMulticastInlineDelegate BP_OnEntryReleased; // 0x138(0x10)
	struct FUserWidgetPool EntryWidgetPool; // 0x148(0x80)
	char UnknownData_1C8[0x58]; // 0x1c8(0x58)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ListViewBase.SetWheelScrollMultiplier
	void SetScrollOffset(float InScrollOffset); // Function UMG.ListViewBase.SetScrollOffset
	void SetScrollBarVisibility(enum class ESlateVisibility InVisibility); // Function UMG.ListViewBase.SetScrollBarVisibility
	void ScrollToTop(); // Function UMG.ListViewBase.ScrollToTop
	void ScrollToBottom(); // Function UMG.ListViewBase.ScrollToBottom
	void RequestRefresh(); // Function UMG.ListViewBase.RequestRefresh
	void RegenerateAllEntries(); // Function UMG.ListViewBase.RegenerateAllEntries
	struct TArray<struct UUserWidget*> GetDisplayedEntryWidgets(); // Function UMG.ListViewBase.GetDisplayedEntryWidgets
};

// Class UMG.ListView
// Size: 0x380 (Inherited: 0x220)
struct UListView : public UListViewBase {
	char UnknownData_220[0xc0]; // 0x220(0xc0)
	char Orientation; // 0x2e0(0x01)
	char SelectionMode; // 0x2e1(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x2e2(0x01)
	bool bClearSelectionOnClick; // 0x2e3(0x01)
	bool bIsFocusable; // 0x2e4(0x01)
	char UnknownData_2E5[0x3]; // 0x2e5(0x03)
	float EntrySpacing; // 0x2e8(0x04)
	bool bReturnFocusToSelection; // 0x2ec(0x01)
	char UnknownData_2ED[0x3]; // 0x2ed(0x03)
	struct TArray<struct UObject*> ListItems; // 0x2f0(0x10)
	char UnknownData_300[0x10]; // 0x300(0x10)
	struct FMulticastInlineDelegate BP_OnEntryInitialized; // 0x310(0x10)
	struct FMulticastInlineDelegate BP_OnItemClicked; // 0x320(0x10)
	struct FMulticastInlineDelegate BP_OnItemDoubleClicked; // 0x330(0x10)
	struct FMulticastInlineDelegate BP_OnItemIsHoveredChanged; // 0x340(0x10)
	struct FMulticastInlineDelegate BP_OnItemSelectionChanged; // 0x350(0x10)
	struct FMulticastInlineDelegate BP_OnItemScrolledIntoView; // 0x360(0x10)
	struct FMulticastInlineDelegate BP_OnListViewScrolled; // 0x370(0x10)

	void SetSelectionMode(char SelectionMode); // Function UMG.ListView.SetSelectionMode
	void SetSelectedIndex(int32_t Index); // Function UMG.ListView.SetSelectedIndex
	void ScrollIndexIntoView(int32_t Index); // Function UMG.ListView.ScrollIndexIntoView
	void RemoveItem(struct UObject* Item); // Function UMG.ListView.RemoveItem
	void NavigateToIndex(int32_t Index); // Function UMG.ListView.NavigateToIndex
	bool IsRefreshPending(); // Function UMG.ListView.IsRefreshPending
	int32_t GetNumItems(); // Function UMG.ListView.GetNumItems
	struct TArray<struct UObject*> GetListItems(); // Function UMG.ListView.GetListItems
	struct UObject* GetItemAt(int32_t Index); // Function UMG.ListView.GetItemAt
	int32_t GetIndexForItem(struct UObject* Item); // Function UMG.ListView.GetIndexForItem
	void ClearListItems(); // Function UMG.ListView.ClearListItems
	void BP_SetSelectedItem(struct UObject* Item); // Function UMG.ListView.BP_SetSelectedItem
	void BP_SetListItems(struct TArray<struct UObject*> InListItems); // Function UMG.ListView.BP_SetListItems
	void BP_SetItemSelection(struct UObject* Item, bool bSelected); // Function UMG.ListView.BP_SetItemSelection
	void BP_ScrollItemIntoView(struct UObject* Item); // Function UMG.ListView.BP_ScrollItemIntoView
	void BP_NavigateToItem(struct UObject* Item); // Function UMG.ListView.BP_NavigateToItem
	bool BP_IsItemVisible(struct UObject* Item); // Function UMG.ListView.BP_IsItemVisible
	bool BP_GetSelectedItems(struct TArray<struct UObject*> Items); // Function UMG.ListView.BP_GetSelectedItems
	struct UObject* BP_GetSelectedItem(); // Function UMG.ListView.BP_GetSelectedItem
	int32_t BP_GetNumItemsSelected(); // Function UMG.ListView.BP_GetNumItemsSelected
	void BP_ClearSelection(); // Function UMG.ListView.BP_ClearSelection
	void BP_CancelScrollIntoView(); // Function UMG.ListView.BP_CancelScrollIntoView
	void AddItem(struct UObject* Item); // Function UMG.ListView.AddItem
};

// Class UMG.TreeView
// Size: 0x3d8 (Inherited: 0x380)
struct UTreeView : public UListView {
	char UnknownData_380[0x10]; // 0x380(0x10)
	struct FDelegate BP_OnGetItemChildren; // 0x390(0x10)
	struct FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0x3a0(0x10)
	char UnknownData_3B0[0x28]; // 0x3b0(0x28)

	void SetItemExpansion(struct UObject* Item, bool bExpandItem); // Function UMG.TreeView.SetItemExpansion
	void ExpandAll(); // Function UMG.TreeView.ExpandAll
	void CollapseAll(); // Function UMG.TreeView.CollapseAll
};

// Class UMG.AsyncTaskDownloadImage
// Size: 0x50 (Inherited: 0x30)
struct UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)

	struct UAsyncTaskDownloadImage* DownloadImage(struct FString URL); // Function UMG.AsyncTaskDownloadImage.DownloadImage
};

// Class UMG.BackgroundBlur
// Size: 0x1e0 (Inherited: 0x128)
struct UBackgroundBlur : public UContentWidget {
	struct FMargin Padding; // 0x128(0x10)
	char HorizontalAlignment; // 0x138(0x01)
	char VerticalAlignment; // 0x139(0x01)
	bool bApplyAlphaToBlur; // 0x13a(0x01)
	char UnknownData_13B[0x1]; // 0x13b(0x01)
	float BlurStrength; // 0x13c(0x04)
	bool bOverrideAutoRadiusCalculation; // 0x140(0x01)
	char UnknownData_141[0x3]; // 0x141(0x03)
	int32_t BlurRadius; // 0x144(0x04)
	struct FSlateBrush LowQualityFallbackBrush; // 0x148(0x88)
	char UnknownData_1D0[0x10]; // 0x1d0(0x10)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.BackgroundBlur.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.BackgroundBlur.SetPadding
	void SetLowQualityFallbackBrush(struct FSlateBrush InBrush); // Function UMG.BackgroundBlur.SetLowQualityFallbackBrush
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.BackgroundBlur.SetHorizontalAlignment
	void SetBlurStrength(float InStrength); // Function UMG.BackgroundBlur.SetBlurStrength
	void SetBlurRadius(int32_t InBlurRadius); // Function UMG.BackgroundBlur.SetBlurRadius
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur); // Function UMG.BackgroundBlur.SetApplyAlphaToBlur
};

// Class UMG.PanelSlot
// Size: 0x38 (Inherited: 0x28)
struct UPanelSlot : public UVisual {
	struct UPanelWidget* Parent; // 0x28(0x08)
	struct UWidget* Content; // 0x30(0x08)
};

// Class UMG.BackgroundBlurSlot
// Size: 0x60 (Inherited: 0x38)
struct UBackgroundBlurSlot : public UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	char HorizontalAlignment; // 0x48(0x01)
	char VerticalAlignment; // 0x49(0x01)
	char UnknownData_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.BackgroundBlurSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.BackgroundBlurSlot.SetPadding
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.BackgroundBlurSlot.SetHorizontalAlignment
};

// Class UMG.PropertyBinding
// Size: 0x60 (Inherited: 0x28)
struct UPropertyBinding : public UObject {
	struct FWeakObjectPtr<struct UObject> SourceObject; // 0x28(0x08)
	struct FDynamicPropertyPath SourcePath; // 0x30(0x28)
	struct FName DestinationProperty; // 0x58(0x08)
};

// Class UMG.Border
// Size: 0x278 (Inherited: 0x128)
struct UBorder : public UContentWidget {
	char HorizontalAlignment; // 0x128(0x01)
	char VerticalAlignment; // 0x129(0x01)
	char bShowEffectWhenDisabled : 1; // 0x12a(0x01)
	char UnknownData_12A_1 : 7; // 0x12a(0x01)
	char UnknownData_12B[0x1]; // 0x12b(0x01)
	struct FLinearColor ContentColorAndOpacity; // 0x12c(0x10)
	struct FDelegate ContentColorAndOpacityDelegate; // 0x13c(0x10)
	struct FMargin Padding; // 0x14c(0x10)
	char UnknownData_15C[0x4]; // 0x15c(0x04)
	struct FSlateBrush background; // 0x160(0x88)
	struct FDelegate BackgroundDelegate; // 0x1e8(0x10)
	struct FLinearColor BrushColor; // 0x1f8(0x10)
	struct FDelegate BrushColorDelegate; // 0x208(0x10)
	struct FVector2D DesiredSizeScale; // 0x218(0x08)
	bool bFlipForRightToLeftFlowDirection; // 0x220(0x01)
	char UnknownData_221[0x3]; // 0x221(0x03)
	struct FDelegate OnMouseButtonDownEvent; // 0x224(0x10)
	struct FDelegate OnMouseButtonUpEvent; // 0x234(0x10)
	struct FDelegate OnMouseMoveEvent; // 0x244(0x10)
	struct FDelegate OnMouseDoubleClickEvent; // 0x254(0x10)
	char UnknownData_264[0x14]; // 0x264(0x14)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.Border.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.Border.SetPadding
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.Border.SetHorizontalAlignment
	void SetDesiredSizeScale(struct FVector2D InScale); // Function UMG.Border.SetDesiredSizeScale
	void SetContentColorAndOpacity(struct FLinearColor InContentColorAndOpacity); // Function UMG.Border.SetContentColorAndOpacity
	void SetBrushFromTexture(struct UTexture2D* Texture); // Function UMG.Border.SetBrushFromTexture
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // Function UMG.Border.SetBrushFromMaterial
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // Function UMG.Border.SetBrushFromAsset
	void SetBrushColor(struct FLinearColor InBrushColor); // Function UMG.Border.SetBrushColor
	void SetBrush(struct FSlateBrush InBrush); // Function UMG.Border.SetBrush
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Border.GetDynamicMaterial
};

// Class UMG.BorderSlot
// Size: 0x60 (Inherited: 0x38)
struct UBorderSlot : public UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	char HorizontalAlignment; // 0x48(0x01)
	char VerticalAlignment; // 0x49(0x01)
	char UnknownData_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.BorderSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.BorderSlot.SetPadding
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.BorderSlot.SetHorizontalAlignment
};

// Class UMG.BrushBinding
// Size: 0x68 (Inherited: 0x60)
struct UBrushBinding : public UPropertyBinding {
	char UnknownData_60[0x8]; // 0x60(0x08)

	struct FSlateBrush GetValue(); // Function UMG.BrushBinding.GetValue
};

// Class UMG.Button
// Size: 0x430 (Inherited: 0x128)
struct UButton : public UContentWidget {
	struct USlateWidgetStyleAsset* Style; // 0x128(0x08)
	struct FButtonStyle WidgetStyle; // 0x130(0x278)
	struct FLinearColor ColorAndOpacity; // 0x3a8(0x10)
	struct FLinearColor BackgroundColor; // 0x3b8(0x10)
	char ClickMethod; // 0x3c8(0x01)
	char TouchMethod; // 0x3c9(0x01)
	char PressMethod; // 0x3ca(0x01)
	bool IsFocusable; // 0x3cb(0x01)
	bool bAllowTouchFallthrough; // 0x3cc(0x01)
	char UnknownData_3CD[0x3]; // 0x3cd(0x03)
	struct FMulticastInlineDelegate OnClicked; // 0x3d0(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x3e0(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x3f0(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x400(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x410(0x10)
	char UnknownData_420[0x10]; // 0x420(0x10)

	void SetTouchMethod(char InTouchMethod); // Function UMG.Button.SetTouchMethod
	void SetStyle(struct FButtonStyle InStyle); // Function UMG.Button.SetStyle
	void SetPressMethod(char InPressMethod); // Function UMG.Button.SetPressMethod
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Button.SetColorAndOpacity
	void SetClickMethod(char InClickMethod); // Function UMG.Button.SetClickMethod
	void SetBackgroundColor(struct FLinearColor InBackgroundColor); // Function UMG.Button.SetBackgroundColor
	bool IsPressed(); // Function UMG.Button.IsPressed
};

// Class UMG.ButtonSlot
// Size: 0x60 (Inherited: 0x38)
struct UButtonSlot : public UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	char HorizontalAlignment; // 0x48(0x01)
	char VerticalAlignment; // 0x49(0x01)
	char UnknownData_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.ButtonSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.ButtonSlot.SetPadding
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.ButtonSlot.SetHorizontalAlignment
};

// Class UMG.CanvasPanelSlot
// Size: 0x70 (Inherited: 0x38)
struct UCanvasPanelSlot : public UPanelSlot {
	struct FAnchorData LayoutData; // 0x38(0x28)
	bool bAutoSize; // 0x60(0x01)
	char UnknownData_61[0x3]; // 0x61(0x03)
	int32_t ZOrder; // 0x64(0x04)
	char UnknownData_68[0x8]; // 0x68(0x08)

	void SetZOrder(int32_t InZOrder); // Function UMG.CanvasPanelSlot.SetZOrder
	void SetSize(struct FVector2D InSize); // Function UMG.CanvasPanelSlot.SetSize
	void SetPosition(struct FVector2D InPosition); // Function UMG.CanvasPanelSlot.SetPosition
	void SetOffsets(struct FMargin InOffset); // Function UMG.CanvasPanelSlot.SetOffsets
	void SetMinimum(struct FVector2D InMinimumAnchors); // Function UMG.CanvasPanelSlot.SetMinimum
	void SetMaximum(struct FVector2D InMaximumAnchors); // Function UMG.CanvasPanelSlot.SetMaximum
	void SetLayout(struct FAnchorData InLayoutData); // Function UMG.CanvasPanelSlot.SetLayout
	void SetAutoSize(bool InbAutoSize); // Function UMG.CanvasPanelSlot.SetAutoSize
	void SetAnchors(struct FAnchors InAnchors); // Function UMG.CanvasPanelSlot.SetAnchors
	void SetAlignment(struct FVector2D InAlignment); // Function UMG.CanvasPanelSlot.SetAlignment
	int32_t GetZOrder(); // Function UMG.CanvasPanelSlot.GetZOrder
	struct FVector2D GetSize(); // Function UMG.CanvasPanelSlot.GetSize
	struct FVector2D GetPosition(); // Function UMG.CanvasPanelSlot.GetPosition
	struct FMargin GetOffsets(); // Function UMG.CanvasPanelSlot.GetOffsets
	struct FAnchorData GetLayout(); // Function UMG.CanvasPanelSlot.GetLayout
	bool GetAutoSize(); // Function UMG.CanvasPanelSlot.GetAutoSize
	struct FAnchors GetAnchors(); // Function UMG.CanvasPanelSlot.GetAnchors
	struct FVector2D GetAlignment(); // Function UMG.CanvasPanelSlot.GetAlignment
};

// Class UMG.CheckBox
// Size: 0x778 (Inherited: 0x128)
struct UCheckBox : public UContentWidget {
	enum class ECheckBoxState CheckedState; // 0x128(0x01)
	char UnknownData_129[0x3]; // 0x129(0x03)
	struct FDelegate CheckedStateDelegate; // 0x12c(0x10)
	char UnknownData_13C[0x4]; // 0x13c(0x04)
	struct FCheckBoxStyle WidgetStyle; // 0x140(0x580)
	struct USlateWidgetStyleAsset* Style; // 0x6c0(0x08)
	struct USlateBrushAsset* UncheckedImage; // 0x6c8(0x08)
	struct USlateBrushAsset* UncheckedHoveredImage; // 0x6d0(0x08)
	struct USlateBrushAsset* UncheckedPressedImage; // 0x6d8(0x08)
	struct USlateBrushAsset* CheckedImage; // 0x6e0(0x08)
	struct USlateBrushAsset* CheckedHoveredImage; // 0x6e8(0x08)
	struct USlateBrushAsset* CheckedPressedImage; // 0x6f0(0x08)
	struct USlateBrushAsset* UndeterminedImage; // 0x6f8(0x08)
	struct USlateBrushAsset* UndeterminedHoveredImage; // 0x700(0x08)
	struct USlateBrushAsset* UndeterminedPressedImage; // 0x708(0x08)
	char HorizontalAlignment; // 0x710(0x01)
	char UnknownData_711[0x3]; // 0x711(0x03)
	struct FMargin Padding; // 0x714(0x10)
	char UnknownData_724[0x4]; // 0x724(0x04)
	struct FSlateColor BorderBackgroundColor; // 0x728(0x28)
	bool IsFocusable; // 0x750(0x01)
	char UnknownData_751[0x7]; // 0x751(0x07)
	struct FMulticastInlineDelegate OnCheckStateChanged; // 0x758(0x10)
	char UnknownData_768[0x10]; // 0x768(0x10)

	void SetIsChecked(bool InIsChecked); // Function UMG.CheckBox.SetIsChecked
	void SetCheckedState(enum class ECheckBoxState InCheckedState); // Function UMG.CheckBox.SetCheckedState
	bool IsPressed(); // Function UMG.CheckBox.IsPressed
	bool IsChecked(); // Function UMG.CheckBox.IsChecked
	enum class ECheckBoxState GetCheckedState(); // Function UMG.CheckBox.GetCheckedState
};

// Class UMG.CheckedStateBinding
// Size: 0x68 (Inherited: 0x60)
struct UCheckedStateBinding : public UPropertyBinding {
	char UnknownData_60[0x8]; // 0x60(0x08)

	enum class ECheckBoxState GetValue(); // Function UMG.CheckedStateBinding.GetValue
};

// Class UMG.CircularThrobber
// Size: 0x1c8 (Inherited: 0x110)
struct UCircularThrobber : public UWidget {
	int32_t NumberOfPieces; // 0x110(0x04)
	float Period; // 0x114(0x04)
	float Radius; // 0x118(0x04)
	char UnknownData_11C[0x4]; // 0x11c(0x04)
	struct USlateBrushAsset* PieceImage; // 0x120(0x08)
	struct FSlateBrush Image; // 0x128(0x88)
	bool bEnableRadius; // 0x1b0(0x01)
	char UnknownData_1B1[0x17]; // 0x1b1(0x17)

	void SetRadius(float InRadius); // Function UMG.CircularThrobber.SetRadius
	void SetPeriod(float InPeriod); // Function UMG.CircularThrobber.SetPeriod
	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.CircularThrobber.SetNumberOfPieces
};

// Class UMG.ColorBinding
// Size: 0x68 (Inherited: 0x60)
struct UColorBinding : public UPropertyBinding {
	char UnknownData_60[0x8]; // 0x60(0x08)

	struct FSlateColor GetSlateValue(); // Function UMG.ColorBinding.GetSlateValue
	struct FLinearColor GetLinearValue(); // Function UMG.ColorBinding.GetLinearValue
};

// Class UMG.ComboBox
// Size: 0x148 (Inherited: 0x110)
struct UComboBox : public UWidget {
	struct TArray<struct UObject*> Items; // 0x110(0x10)
	struct FDelegate OnGenerateWidgetEvent; // 0x120(0x10)
	bool bIsFocusable; // 0x130(0x01)
	char UnknownData_131[0x17]; // 0x131(0x17)
};

// Class UMG.ComboBoxString
// Size: 0xe10 (Inherited: 0x110)
struct UComboBoxString : public UWidget {
	struct TArray<struct FString> DefaultOptions; // 0x110(0x10)
	struct FString SelectedOption; // 0x120(0x10)
	struct FComboBoxStyle WidgetStyle; // 0x130(0x3f0)
	struct FTableRowStyle ItemStyle; // 0x520(0x7c8)
	struct FMargin ContentPadding; // 0xce8(0x10)
	float MaxListHeight; // 0xcf8(0x04)
	bool HasDownArrow; // 0xcfc(0x01)
	bool EnableGamepadNavigationMode; // 0xcfd(0x01)
	char UnknownData_CFE[0x2]; // 0xcfe(0x02)
	struct FSlateFontInfo Font; // 0xd00(0x50)
	struct FSlateColor ForegroundColor; // 0xd50(0x28)
	bool bIsFocusable; // 0xd78(0x01)
	char UnknownData_D79[0x3]; // 0xd79(0x03)
	struct FDelegate OnGenerateWidgetEvent; // 0xd7c(0x10)
	char UnknownData_D8C[0x4]; // 0xd8c(0x04)
	struct FMulticastInlineDelegate OnSelectionChanged; // 0xd90(0x10)
	struct FMulticastInlineDelegate OnOpening; // 0xda0(0x10)
	struct FMulticastInlineDelegate OnClosing; // 0xdb0(0x10)
	char UnknownData_DC0[0x50]; // 0xdc0(0x50)

	void SetSelectedOption(struct FString Option); // Function UMG.ComboBoxString.SetSelectedOption
	void SetSelectedIndex(int32_t Index); // Function UMG.ComboBoxString.SetSelectedIndex
	bool RemoveOption(struct FString Option); // Function UMG.ComboBoxString.RemoveOption
	void RefreshOptions(); // Function UMG.ComboBoxString.RefreshOptions
	void OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType); // DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
	void OnOpeningEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
	void OnClosingEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnClosingEvent__DelegateSignature
	bool IsOpen(); // Function UMG.ComboBoxString.IsOpen
	struct FString GetSelectedOption(); // Function UMG.ComboBoxString.GetSelectedOption
	int32_t GetSelectedIndex(); // Function UMG.ComboBoxString.GetSelectedIndex
	int32_t GetOptionCount(); // Function UMG.ComboBoxString.GetOptionCount
	struct FString GetOptionAtIndex(int32_t Index); // Function UMG.ComboBoxString.GetOptionAtIndex
	int32_t FindOptionIndex(struct FString Option); // Function UMG.ComboBoxString.FindOptionIndex
	void ClearSelection(); // Function UMG.ComboBoxString.ClearSelection
	void ClearOptions(); // Function UMG.ComboBoxString.ClearOptions
	void AddOption(struct FString Option); // Function UMG.ComboBoxString.AddOption
};

// Class UMG.DragDropOperation
// Size: 0x88 (Inherited: 0x28)
struct UDragDropOperation : public UObject {
	struct FString Tag; // 0x28(0x10)
	struct UObject* Payload; // 0x38(0x08)
	struct UWidget* DefaultDragVisual; // 0x40(0x08)
	enum class EDragPivot Pivot; // 0x48(0x01)
	char UnknownData_49[0x3]; // 0x49(0x03)
	struct FVector2D Offset; // 0x4c(0x08)
	char UnknownData_54[0x4]; // 0x54(0x04)
	struct FMulticastInlineDelegate OnDrop; // 0x58(0x10)
	struct FMulticastInlineDelegate OnDragCancelled; // 0x68(0x10)
	struct FMulticastInlineDelegate OnDragged; // 0x78(0x10)

	void Drop(struct FPointerEvent PointerEvent); // Function UMG.DragDropOperation.Drop
	void Dragged(struct FPointerEvent PointerEvent); // Function UMG.DragDropOperation.Dragged
	void DragCancelled(struct FPointerEvent PointerEvent); // Function UMG.DragDropOperation.DragCancelled
};

// Class UMG.DynamicEntryBoxBase
// Size: 0x1d0 (Inherited: 0x110)
struct UDynamicEntryBoxBase : public UWidget {
	enum class EDynamicBoxType EntryBoxType; // 0x110(0x01)
	char UnknownData_111[0x3]; // 0x111(0x03)
	struct FVector2D EntrySpacing; // 0x114(0x08)
	char UnknownData_11C[0x4]; // 0x11c(0x04)
	struct TArray<struct FVector2D> SpacingPattern; // 0x120(0x10)
	struct FSlateChildSize EntrySizeRule; // 0x130(0x08)
	char EntryHorizontalAlignment; // 0x138(0x01)
	char EntryVerticalAlignment; // 0x139(0x01)
	char UnknownData_13A[0x2]; // 0x13a(0x02)
	int32_t MaxElementSize; // 0x13c(0x04)
	char UnknownData_140[0x10]; // 0x140(0x10)
	struct FUserWidgetPool EntryWidgetPool; // 0x150(0x80)

	void SetEntrySpacing(struct FVector2D InEntrySpacing); // Function UMG.DynamicEntryBoxBase.SetEntrySpacing
	int32_t GetNumEntries(); // Function UMG.DynamicEntryBoxBase.GetNumEntries
	struct TArray<struct UUserWidget*> GetAllEntries(); // Function UMG.DynamicEntryBoxBase.GetAllEntries
};

// Class UMG.DynamicEntryBox
// Size: 0x1d8 (Inherited: 0x1d0)
struct UDynamicEntryBox : public UDynamicEntryBoxBase {
	struct UUserWidget* EntryWidgetClass; // 0x1d0(0x08)

	void Reset(bool bDeleteWidgets); // Function UMG.DynamicEntryBox.Reset
	void RemoveEntry(struct UUserWidget* EntryWidget); // Function UMG.DynamicEntryBox.RemoveEntry
	struct UUserWidget* BP_CreateEntryOfClass(struct UUserWidget* EntryClass); // Function UMG.DynamicEntryBox.BP_CreateEntryOfClass
	struct UUserWidget* BP_CreateEntry(); // Function UMG.DynamicEntryBox.BP_CreateEntry
};

// Class UMG.EditableText
// Size: 0x458 (Inherited: 0x110)
struct UEditableText : public UWidget {
	struct FText Text; // 0x110(0x18)
	struct FDelegate TextDelegate; // 0x128(0x10)
	struct FText HintText; // 0x138(0x18)
	struct FDelegate HintTextDelegate; // 0x150(0x10)
	struct FEditableTextStyle WidgetStyle; // 0x160(0x218)
	struct USlateWidgetStyleAsset* Style; // 0x378(0x08)
	struct USlateBrushAsset* BackgroundImageSelected; // 0x380(0x08)
	struct USlateBrushAsset* BackgroundImageComposing; // 0x388(0x08)
	struct USlateBrushAsset* CaretImage; // 0x390(0x08)
	struct FSlateFontInfo Font; // 0x398(0x50)
	struct FSlateColor ColorAndOpacity; // 0x3e8(0x28)
	bool IsReadOnly; // 0x410(0x01)
	bool IsPassword; // 0x411(0x01)
	char UnknownData_412[0x2]; // 0x412(0x02)
	float MinimumDesiredWidth; // 0x414(0x04)
	bool IsCaretMovedWhenGainFocus; // 0x418(0x01)
	bool SelectAllTextWhenFocused; // 0x419(0x01)
	bool RevertTextOnEscape; // 0x41a(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x41b(0x01)
	bool SelectAllTextOnCommit; // 0x41c(0x01)
	bool AllowContextMenu; // 0x41d(0x01)
	char KeyboardType; // 0x41e(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x41f(0x01)
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x420(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x421(0x01)
	char Justification; // 0x422(0x01)
	struct FShapedTextOptions ShapedTextOptions; // 0x423(0x03)
	char UnknownData_426[0x2]; // 0x426(0x02)
	struct FMulticastInlineDelegate OnTextChanged; // 0x428(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x438(0x10)
	char UnknownData_448[0x10]; // 0x448(0x10)

	void SetText(struct FText InText); // Function UMG.EditableText.SetText
	void SetJustification(char InJustification); // Function UMG.EditableText.SetJustification
	void SetIsReadOnly(bool InbIsReadyOnly); // Function UMG.EditableText.SetIsReadOnly
	void SetIsPassword(bool InbIsPassword); // Function UMG.EditableText.SetIsPassword
	void SetHintText(struct FText InHintText); // Function UMG.EditableText.SetHintText
	void OnEditableTextCommittedEvent__DelegateSignature(struct FText Text, char CommitMethod); // DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
	void OnEditableTextChangedEvent__DelegateSignature(struct FText Text); // DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
	struct FText GetText(); // Function UMG.EditableText.GetText
};

// Class UMG.ExpandableArea
// Size: 0x340 (Inherited: 0x110)
struct UExpandableArea : public UWidget {
	char UnknownData_110[0x8]; // 0x110(0x08)
	struct FExpandableAreaStyle Style; // 0x118(0x120)
	struct FSlateBrush BorderBrush; // 0x238(0x88)
	struct FSlateColor BorderColor; // 0x2c0(0x28)
	bool bIsExpanded; // 0x2e8(0x01)
	char UnknownData_2E9[0x3]; // 0x2e9(0x03)
	float MaxHeight; // 0x2ec(0x04)
	struct FMargin HeaderPadding; // 0x2f0(0x10)
	struct FMargin AreaPadding; // 0x300(0x10)
	struct FMulticastInlineDelegate OnExpansionChanged; // 0x310(0x10)
	struct UWidget* HeaderContent; // 0x320(0x08)
	struct UWidget* BodyContent; // 0x328(0x08)
	char UnknownData_330[0x10]; // 0x330(0x10)

	void SetIsExpanded_Animated(bool IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded_Animated
	void SetIsExpanded(bool IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded
	bool GetIsExpanded(); // Function UMG.ExpandableArea.GetIsExpanded
};

// Class UMG.GridSlot
// Size: 0x70 (Inherited: 0x38)
struct UGridSlot : public UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	char HorizontalAlignment; // 0x48(0x01)
	char VerticalAlignment; // 0x49(0x01)
	char UnknownData_4A[0x2]; // 0x4a(0x02)
	int32_t Row; // 0x4c(0x04)
	int32_t RowSpan; // 0x50(0x04)
	int32_t column; // 0x54(0x04)
	int32_t ColumnSpan; // 0x58(0x04)
	int32_t Layer; // 0x5c(0x04)
	struct FVector2D Nudge; // 0x60(0x08)
	char UnknownData_68[0x8]; // 0x68(0x08)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.GridSlot.SetVerticalAlignment
	void SetRowSpan(int32_t InRowSpan); // Function UMG.GridSlot.SetRowSpan
	void SetRow(int32_t InRow); // Function UMG.GridSlot.SetRow
	void SetPadding(struct FMargin InPadding); // Function UMG.GridSlot.SetPadding
	void SetNudge(struct FVector2D InNudge); // Function UMG.GridSlot.SetNudge
	void SetLayer(int32_t InLayer); // Function UMG.GridSlot.SetLayer
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.GridSlot.SetHorizontalAlignment
	void SetColumnSpan(int32_t InColumnSpan); // Function UMG.GridSlot.SetColumnSpan
	void SetColumn(int32_t InColumn); // Function UMG.GridSlot.SetColumn
};

// Class UMG.HorizontalBox
// Size: 0x138 (Inherited: 0x128)
struct UHorizontalBox : public UPanelWidget {
	char UnknownData_128[0x10]; // 0x128(0x10)

	struct UHorizontalBoxSlot* AddChildToHorizontalBox(struct UWidget* Content); // Function UMG.HorizontalBox.AddChildToHorizontalBox
};

// Class UMG.HorizontalBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UHorizontalBoxSlot : public UPanelSlot {
	char UnknownData_38[0x8]; // 0x38(0x08)
	struct FMargin Padding; // 0x40(0x10)
	struct FSlateChildSize Size; // 0x50(0x08)
	char HorizontalAlignment; // 0x58(0x01)
	char VerticalAlignment; // 0x59(0x01)
	char UnknownData_5A[0x6]; // 0x5a(0x06)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.HorizontalBoxSlot.SetVerticalAlignment
	void SetSize(struct FSlateChildSize InSize); // Function UMG.HorizontalBoxSlot.SetSize
	void SetPadding(struct FMargin InPadding); // Function UMG.HorizontalBoxSlot.SetPadding
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
};

// Class UMG.InputKeySelector
// Size: 0x6f8 (Inherited: 0x110)
struct UInputKeySelector : public UWidget {
	struct FButtonStyle WidgetStyle; // 0x110(0x278)
	struct FTextBlockStyle TextStyle; // 0x388(0x268)
	struct FInputChord SelectedKey; // 0x5f0(0x20)
	struct FSlateFontInfo Font; // 0x610(0x50)
	struct FMargin Margin; // 0x660(0x10)
	struct FLinearColor ColorAndOpacity; // 0x670(0x10)
	struct FText KeySelectionText; // 0x680(0x18)
	struct FText NoKeySpecifiedText; // 0x698(0x18)
	bool bAllowModifierKeys; // 0x6b0(0x01)
	bool bAllowGamepadKeys; // 0x6b1(0x01)
	char UnknownData_6B2[0x6]; // 0x6b2(0x06)
	struct TArray<struct FKey> EscapeKeys; // 0x6b8(0x10)
	struct FMulticastInlineDelegate OnKeySelected; // 0x6c8(0x10)
	struct FMulticastInlineDelegate OnIsSelectingKeyChanged; // 0x6d8(0x10)
	char UnknownData_6E8[0x10]; // 0x6e8(0x10)

	void SetTextBlockVisibility(enum class ESlateVisibility InVisibility); // Function UMG.InputKeySelector.SetTextBlockVisibility
	void SetSelectedKey(struct FInputChord InSelectedKey); // Function UMG.InputKeySelector.SetSelectedKey
	void SetNoKeySpecifiedText(struct FText InNoKeySpecifiedText); // Function UMG.InputKeySelector.SetNoKeySpecifiedText
	void SetKeySelectionText(struct FText InKeySelectionText); // Function UMG.InputKeySelector.SetKeySelectionText
	void SetEscapeKeys(struct TArray<struct FKey> InKeys); // Function UMG.InputKeySelector.SetEscapeKeys
	void SetAllowModifierKeys(bool bInAllowModifierKeys); // Function UMG.InputKeySelector.SetAllowModifierKeys
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys); // Function UMG.InputKeySelector.SetAllowGamepadKeys
	void OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
	void OnIsSelectingKeyChanged__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
	bool GetIsSelectingKey(); // Function UMG.InputKeySelector.GetIsSelectingKey
};

// Class UMG.InvalidationBox
// Size: 0x140 (Inherited: 0x128)
struct UInvalidationBox : public UContentWidget {
	bool bCanCache; // 0x128(0x01)
	bool CacheRelativeTransforms; // 0x129(0x01)
	char UnknownData_12A[0x16]; // 0x12a(0x16)

	void SetCanCache(bool CanCache); // Function UMG.InvalidationBox.SetCanCache
	void InvalidateCache(); // Function UMG.InvalidationBox.InvalidateCache
	bool GetCanCache(); // Function UMG.InvalidationBox.GetCanCache
};

// Class UMG.MenuAnchor
// Size: 0x168 (Inherited: 0x128)
struct UMenuAnchor : public UContentWidget {
	struct UUserWidget* MenuClass; // 0x128(0x08)
	struct FDelegate OnGetMenuContentEvent; // 0x130(0x10)
	char Placement; // 0x140(0x01)
	bool bFitInWindow; // 0x141(0x01)
	bool ShouldDeferPaintingAfterWindowContent; // 0x142(0x01)
	bool UseApplicationMenuStack; // 0x143(0x01)
	char UnknownData_144[0x4]; // 0x144(0x04)
	struct FMulticastInlineDelegate OnMenuOpenChanged; // 0x148(0x10)
	char UnknownData_158[0x10]; // 0x158(0x10)

	void ToggleOpen(bool bFocusOnOpen); // Function UMG.MenuAnchor.ToggleOpen
	bool ShouldOpenDueToClick(); // Function UMG.MenuAnchor.ShouldOpenDueToClick
	void SetPlacement(char InPlacement); // Function UMG.MenuAnchor.SetPlacement
	void Open(bool bFocusMenu); // Function UMG.MenuAnchor.Open
	bool IsOpen(); // Function UMG.MenuAnchor.IsOpen
	bool HasOpenSubMenus(); // Function UMG.MenuAnchor.HasOpenSubMenus
	struct FVector2D GetMenuPosition(); // Function UMG.MenuAnchor.GetMenuPosition
	void FitInWindow(bool bFit); // Function UMG.MenuAnchor.FitInWindow
	void Close(); // Function UMG.MenuAnchor.Close
};

// Class UMG.MovieScene2DTransformSection
// Size: 0x550 (Inherited: 0xe0)
struct UMovieScene2DTransformSection : public UMovieSceneSection {
	struct FMovieScene2DTransformMask TransformMask; // 0xe0(0x04)
	char UnknownData_E4[0x4]; // 0xe4(0x04)
	struct FMovieSceneFloatChannel Translation[0x2]; // 0xe8(0x140)
	struct FMovieSceneFloatChannel Rotation; // 0x228(0xa0)
	struct FMovieSceneFloatChannel Scale[0x2]; // 0x2c8(0x140)
	struct FMovieSceneFloatChannel Shear[0x2]; // 0x408(0x140)
	char UnknownData_548[0x8]; // 0x548(0x08)
};

// Class UMG.MovieSceneMarginSection
// Size: 0x360 (Inherited: 0xe0)
struct UMovieSceneMarginSection : public UMovieSceneSection {
	struct FMovieSceneFloatChannel TopCurve; // 0xe0(0xa0)
	struct FMovieSceneFloatChannel LeftCurve; // 0x180(0xa0)
	struct FMovieSceneFloatChannel RightCurve; // 0x220(0xa0)
	struct FMovieSceneFloatChannel BottomCurve; // 0x2c0(0xa0)
};

// Class UMG.MovieSceneWidgetMaterialTrack
// Size: 0x80 (Inherited: 0x68)
struct UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack {
	struct TArray<struct FName> BrushPropertyNamePath; // 0x68(0x10)
	struct FName TrackName; // 0x78(0x08)
};

// Class UMG.TextLayoutWidget
// Size: 0x130 (Inherited: 0x110)
struct UTextLayoutWidget : public UWidget {
	struct FShapedTextOptions ShapedTextOptions; // 0x110(0x03)
	char Justification; // 0x113(0x01)
	enum class ETextWrappingPolicy WrappingPolicy; // 0x114(0x01)
	char AutoWrapText : 1; // 0x115(0x01)
	char UnknownData_115_1 : 7; // 0x115(0x01)
	char UnknownData_116[0x2]; // 0x116(0x02)
	float WrapTextAt; // 0x118(0x04)
	struct FMargin Margin; // 0x11c(0x10)
	float LineHeightPercentage; // 0x12c(0x04)

	void SetJustification(char InJustification); // Function UMG.TextLayoutWidget.SetJustification
};

// Class UMG.MultiLineEditableText
// Size: 0x468 (Inherited: 0x130)
struct UMultiLineEditableText : public UTextLayoutWidget {
	struct FText Text; // 0x130(0x18)
	struct FText HintText; // 0x148(0x18)
	struct FDelegate HintTextDelegate; // 0x160(0x10)
	struct FTextBlockStyle WidgetStyle; // 0x170(0x268)
	bool bIsReadOnly; // 0x3d8(0x01)
	char UnknownData_3D9[0x7]; // 0x3d9(0x07)
	struct FSlateFontInfo Font; // 0x3e0(0x50)
	bool SelectAllTextWhenFocused; // 0x430(0x01)
	bool ClearTextSelectionOnFocusLoss; // 0x431(0x01)
	bool RevertTextOnEscape; // 0x432(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x433(0x01)
	bool AllowContextMenu; // 0x434(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x435(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x436(0x01)
	char UnknownData_437[0x1]; // 0x437(0x01)
	struct FMulticastInlineDelegate OnTextChanged; // 0x438(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x448(0x10)
	char UnknownData_458[0x10]; // 0x458(0x10)

	void SetWidgetStyle(struct FTextBlockStyle InWidgetStyle); // Function UMG.MultiLineEditableText.SetWidgetStyle
	void SetText(struct FText InText); // Function UMG.MultiLineEditableText.SetText
	void SetIsReadOnly(bool bReadOnly); // Function UMG.MultiLineEditableText.SetIsReadOnly
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableText.SetHintText
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText Text, char CommitMethod); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText Text); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
	struct FText GetText(); // Function UMG.MultiLineEditableText.GetText
	struct FText GetHintText(); // Function UMG.MultiLineEditableText.GetHintText
};

// Class UMG.MultiLineEditableTextBox
// Size: 0xc88 (Inherited: 0x130)
struct UMultiLineEditableTextBox : public UTextLayoutWidget {
	struct FText Text; // 0x130(0x18)
	struct FText HintText; // 0x148(0x18)
	struct FDelegate HintTextDelegate; // 0x160(0x10)
	struct FEditableTextBoxStyle WidgetStyle; // 0x170(0x7f0)
	struct FTextBlockStyle TextStyle; // 0x960(0x268)
	bool bIsReadOnly; // 0xbc8(0x01)
	bool AllowContextMenu; // 0xbc9(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xbca(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xbcb(0x01)
	char UnknownData_BCC[0x4]; // 0xbcc(0x04)
	struct USlateWidgetStyleAsset* Style; // 0xbd0(0x08)
	struct FSlateFontInfo Font; // 0xbd8(0x50)
	struct FLinearColor ForegroundColor; // 0xc28(0x10)
	struct FLinearColor BackgroundColor; // 0xc38(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xc48(0x10)
	struct FMulticastInlineDelegate OnTextChanged; // 0xc58(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xc68(0x10)
	char UnknownData_C78[0x10]; // 0xc78(0x10)

	void SetTextStyle(struct FTextBlockStyle InTextStyle); // Function UMG.MultiLineEditableTextBox.SetTextStyle
	void SetText(struct FText InText); // Function UMG.MultiLineEditableTextBox.SetText
	void SetIsReadOnly(bool bReadOnly); // Function UMG.MultiLineEditableTextBox.SetIsReadOnly
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableTextBox.SetHintText
	void SetError(struct FText InError); // Function UMG.MultiLineEditableTextBox.SetError
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, char CommitMethod); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
	struct FText GetText(); // Function UMG.MultiLineEditableTextBox.GetText
	struct FText GetHintText(); // Function UMG.MultiLineEditableTextBox.GetHintText
};

// Class UMG.NamedSlot
// Size: 0x138 (Inherited: 0x128)
struct UNamedSlot : public UContentWidget {
	char UnknownData_128[0x10]; // 0x128(0x10)
};

// Class UMG.NativeWidgetHost
// Size: 0x120 (Inherited: 0x110)
struct UNativeWidgetHost : public UWidget {
	char UnknownData_110[0x10]; // 0x110(0x10)
};

// Class UMG.Overlay
// Size: 0x138 (Inherited: 0x128)
struct UOverlay : public UPanelWidget {
	char UnknownData_128[0x10]; // 0x128(0x10)

	struct UOverlaySlot* AddChildToOverlay(struct UWidget* Content); // Function UMG.Overlay.AddChildToOverlay
};

// Class UMG.OverlaySlot
// Size: 0x58 (Inherited: 0x38)
struct UOverlaySlot : public UPanelSlot {
	char UnknownData_38[0x8]; // 0x38(0x08)
	struct FMargin Padding; // 0x40(0x10)
	char HorizontalAlignment; // 0x50(0x01)
	char VerticalAlignment; // 0x51(0x01)
	char UnknownData_52[0x6]; // 0x52(0x06)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.OverlaySlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.OverlaySlot.SetPadding
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.OverlaySlot.SetHorizontalAlignment
};

// Class UMG.ProgressBar
// Size: 0x320 (Inherited: 0x110)
struct UProgressBar : public UWidget {
	struct FProgressBarStyle WidgetStyle; // 0x110(0x1a0)
	struct USlateWidgetStyleAsset* Style; // 0x2b0(0x08)
	struct USlateBrushAsset* BackgroundImage; // 0x2b8(0x08)
	struct USlateBrushAsset* FillImage; // 0x2c0(0x08)
	struct USlateBrushAsset* MarqueeImage; // 0x2c8(0x08)
	float Percent; // 0x2d0(0x04)
	char BarFillType; // 0x2d4(0x01)
	bool bIsMarquee; // 0x2d5(0x01)
	char UnknownData_2D6[0x2]; // 0x2d6(0x02)
	struct FVector2D BorderPadding; // 0x2d8(0x08)
	struct FDelegate PercentDelegate; // 0x2e0(0x10)
	struct FLinearColor FillColorAndOpacity; // 0x2f0(0x10)
	struct FDelegate FillColorAndOpacityDelegate; // 0x300(0x10)
	char UnknownData_310[0x10]; // 0x310(0x10)

	void SetPercent(float InPercent); // Function UMG.ProgressBar.SetPercent
	void SetIsMarquee(bool InbIsMarquee); // Function UMG.ProgressBar.SetIsMarquee
	void SetFillColorAndOpacity(struct FLinearColor InColor); // Function UMG.ProgressBar.SetFillColorAndOpacity
};

// Class UMG.RetainerBox
// Size: 0x158 (Inherited: 0x128)
struct URetainerBox : public UContentWidget {
	bool RenderOnInvalidation; // 0x128(0x01)
	bool RenderOnPhase; // 0x129(0x01)
	char UnknownData_12A[0x2]; // 0x12a(0x02)
	int32_t Phase; // 0x12c(0x04)
	int32_t PhaseCount; // 0x130(0x04)
	bool bEnableRetainedRendering; // 0x134(0x01)
	char UnknownData_135[0x3]; // 0x135(0x03)
	struct UMaterialInterface* EffectMaterial; // 0x138(0x08)
	struct FName TextureParameter; // 0x140(0x08)
	char UnknownData_148[0x10]; // 0x148(0x10)

	void SetTextureParameter(struct FName TextureParameter); // Function UMG.RetainerBox.SetTextureParameter
	void SetRetainedRendering(bool bEnableRetainedRendering); // Function UMG.RetainerBox.SetRetainedRendering
	void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases); // Function UMG.RetainerBox.SetRenderingPhase
	void SetEffectMaterial(struct UMaterialInterface* EffectMaterial); // Function UMG.RetainerBox.SetEffectMaterial
	void RequestRender(); // Function UMG.RetainerBox.RequestRender
	struct UMaterialInstanceDynamic* GetEffectMaterial(); // Function UMG.RetainerBox.GetEffectMaterial
};

// Class UMG.RichTextBlock
// Size: 0x670 (Inherited: 0x130)
struct URichTextBlock : public UTextLayoutWidget {
	struct FText Text; // 0x130(0x18)
	struct UDataTable* TextStyleSet; // 0x148(0x08)
	struct TArray<struct URichTextBlockDecorator*> DecoratorClasses; // 0x150(0x10)
	bool bOverrideDefaultStyle; // 0x160(0x01)
	char UnknownData_161[0x7]; // 0x161(0x07)
	struct FTextBlockStyle DefaultTextStyleOverride; // 0x168(0x268)
	float MinDesiredWidth; // 0x3d0(0x04)
	char UnknownData_3D4[0x26c]; // 0x3d4(0x26c)
	struct TArray<struct URichTextBlockDecorator*> InstanceDecorators; // 0x640(0x10)
	char UnknownData_650[0x20]; // 0x650(0x20)

	void SetTextStyleSet(struct UDataTable* NewTextStyleSet); // Function UMG.RichTextBlock.SetTextStyleSet
	void SetText(struct FText InText); // Function UMG.RichTextBlock.SetText
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.RichTextBlock.SetMinDesiredWidth
	void SetDefaultTextStyle(struct FTextBlockStyle InDefaultTextStyle); // Function UMG.RichTextBlock.SetDefaultTextStyle
	void SetDefaultStrikeBrush(struct FSlateBrush InStrikeBrush); // Function UMG.RichTextBlock.SetDefaultStrikeBrush
	void SetDefaultShadowOffset(struct FVector2D InShadowOffset); // Function UMG.RichTextBlock.SetDefaultShadowOffset
	void SetDefaultShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity
	void SetDefaultFont(struct FSlateFontInfo InFontInfo); // Function UMG.RichTextBlock.SetDefaultFont
	void SetDefaultColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultColorAndOpacity
	void SetAutoWrapText(bool InAutoTextWrap); // Function UMG.RichTextBlock.SetAutoWrapText
	struct FText GetText(); // Function UMG.RichTextBlock.GetText
	struct URichTextBlockDecorator* GetDecoratorByClass(struct URichTextBlockDecorator* DecoratorClass); // Function UMG.RichTextBlock.GetDecoratorByClass
	void ClearAllDefaultStyleOverrides(); // Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides
};

// Class UMG.RichTextBlockImageDecorator
// Size: 0x30 (Inherited: 0x28)
struct URichTextBlockImageDecorator : public URichTextBlockDecorator {
	struct UDataTable* ImageSet; // 0x28(0x08)
};

// Class UMG.SafeZone
// Size: 0x140 (Inherited: 0x128)
struct USafeZone : public UContentWidget {
	bool PadLeft; // 0x128(0x01)
	bool PadRight; // 0x129(0x01)
	bool PadTop; // 0x12a(0x01)
	bool PadBottom; // 0x12b(0x01)
	char UnknownData_12C[0x14]; // 0x12c(0x14)

	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom); // Function UMG.SafeZone.SetSidesToPad
};

// Class UMG.SafeZoneSlot
// Size: 0x60 (Inherited: 0x38)
struct USafeZoneSlot : public UPanelSlot {
	bool bIsTitleSafe; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	struct FMargin SafeAreaScale; // 0x3c(0x10)
	char HAlign; // 0x4c(0x01)
	char VAlign; // 0x4d(0x01)
	char UnknownData_4E[0x2]; // 0x4e(0x02)
	struct FMargin Padding; // 0x50(0x10)
};

// Class UMG.ScaleBox
// Size: 0x148 (Inherited: 0x128)
struct UScaleBox : public UContentWidget {
	char Stretch; // 0x128(0x01)
	char StretchDirection; // 0x129(0x01)
	char UnknownData_12A[0x2]; // 0x12a(0x02)
	float UserSpecifiedScale; // 0x12c(0x04)
	bool IgnoreInheritedScale; // 0x130(0x01)
	char UnknownData_131[0x17]; // 0x131(0x17)

	void SetUserSpecifiedScale(float InUserSpecifiedScale); // Function UMG.ScaleBox.SetUserSpecifiedScale
	void SetStretchDirection(char InStretchDirection); // Function UMG.ScaleBox.SetStretchDirection
	void SetStretch(char InStretch); // Function UMG.ScaleBox.SetStretch
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale); // Function UMG.ScaleBox.SetIgnoreInheritedScale
};

// Class UMG.ScaleBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UScaleBoxSlot : public UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	char HorizontalAlignment; // 0x48(0x01)
	char VerticalAlignment; // 0x49(0x01)
	char UnknownData_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.ScaleBoxSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.ScaleBoxSlot.SetPadding
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.ScaleBoxSlot.SetHorizontalAlignment
};

// Class UMG.ScrollBar
// Size: 0x618 (Inherited: 0x110)
struct UScrollBar : public UWidget {
	struct FScrollBarStyle WidgetStyle; // 0x110(0x4d0)
	struct USlateWidgetStyleAsset* Style; // 0x5e0(0x08)
	bool bAlwaysShowScrollbar; // 0x5e8(0x01)
	bool bAlwaysShowScrollbarTrack; // 0x5e9(0x01)
	char Orientation; // 0x5ea(0x01)
	char UnknownData_5EB[0x1]; // 0x5eb(0x01)
	struct FVector2D Thickness; // 0x5ec(0x08)
	struct FMargin Padding; // 0x5f4(0x10)
	char UnknownData_604[0x14]; // 0x604(0x14)

	void SetState(float InOffsetFraction, float InThumbSizeFraction); // Function UMG.ScrollBar.SetState
};

// Class UMG.ScrollBoxSlot
// Size: 0x58 (Inherited: 0x38)
struct UScrollBoxSlot : public UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	char HorizontalAlignment; // 0x48(0x01)
	char VerticalAlignment; // 0x49(0x01)
	char UnknownData_4A[0xe]; // 0x4a(0x0e)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.ScrollBoxSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.ScrollBoxSlot.SetPadding
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.ScrollBoxSlot.SetHorizontalAlignment
};

// Class UMG.SizeBox
// Size: 0x160 (Inherited: 0x128)
struct USizeBox : public UContentWidget {
	char UnknownData_128[0x10]; // 0x128(0x10)
	float WidthOverride; // 0x138(0x04)
	float HeightOverride; // 0x13c(0x04)
	float MinDesiredWidth; // 0x140(0x04)
	float MinDesiredHeight; // 0x144(0x04)
	float MaxDesiredWidth; // 0x148(0x04)
	float MaxDesiredHeight; // 0x14c(0x04)
	float MinAspectRatio; // 0x150(0x04)
	float MaxAspectRatio; // 0x154(0x04)
	char bOverride_WidthOverride : 1; // 0x158(0x01)
	char bOverride_HeightOverride : 1; // 0x158(0x01)
	char bOverride_MinDesiredWidth : 1; // 0x158(0x01)
	char bOverride_MinDesiredHeight : 1; // 0x158(0x01)
	char bOverride_MaxDesiredWidth : 1; // 0x158(0x01)
	char bOverride_MaxDesiredHeight : 1; // 0x158(0x01)
	char bOverride_MinAspectRatio : 1; // 0x158(0x01)
	char bOverride_MaxAspectRatio : 1; // 0x158(0x01)
	char UnknownData_159[0x7]; // 0x159(0x07)

	void SetWidthOverride(float InWidthOverride); // Function UMG.SizeBox.SetWidthOverride
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.SizeBox.SetMinDesiredWidth
	void SetMinDesiredHeight(float InMinDesiredHeight); // Function UMG.SizeBox.SetMinDesiredHeight
	void SetMinAspectRatio(float InMinAspectRatio); // Function UMG.SizeBox.SetMinAspectRatio
	void SetMaxDesiredWidth(float InMaxDesiredWidth); // Function UMG.SizeBox.SetMaxDesiredWidth
	void SetMaxDesiredHeight(float InMaxDesiredHeight); // Function UMG.SizeBox.SetMaxDesiredHeight
	void SetMaxAspectRatio(float InMaxAspectRatio); // Function UMG.SizeBox.SetMaxAspectRatio
	void SetHeightOverride(float InHeightOverride); // Function UMG.SizeBox.SetHeightOverride
	void ClearWidthOverride(); // Function UMG.SizeBox.ClearWidthOverride
	void ClearMinDesiredWidth(); // Function UMG.SizeBox.ClearMinDesiredWidth
	void ClearMinDesiredHeight(); // Function UMG.SizeBox.ClearMinDesiredHeight
	void ClearMinAspectRatio(); // Function UMG.SizeBox.ClearMinAspectRatio
	void ClearMaxDesiredWidth(); // Function UMG.SizeBox.ClearMaxDesiredWidth
	void ClearMaxDesiredHeight(); // Function UMG.SizeBox.ClearMaxDesiredHeight
	void ClearMaxAspectRatio(); // Function UMG.SizeBox.ClearMaxAspectRatio
	void ClearHeightOverride(); // Function UMG.SizeBox.ClearHeightOverride
};

// Class UMG.SizeBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct USizeBoxSlot : public UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	char UnknownData_48[0x10]; // 0x48(0x10)
	char HorizontalAlignment; // 0x58(0x01)
	char VerticalAlignment; // 0x59(0x01)
	char UnknownData_5A[0x6]; // 0x5a(0x06)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.SizeBoxSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.SizeBoxSlot.SetPadding
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.SizeBoxSlot.SetHorizontalAlignment
};

// Class UMG.SlateVectorArtData
// Size: 0x60 (Inherited: 0x28)
struct USlateVectorArtData : public UObject {
	struct TArray<struct FSlateMeshVertex> VertexData; // 0x28(0x10)
	struct TArray<uint32_t> IndexData; // 0x38(0x10)
	struct UMaterialInterface* Material; // 0x48(0x08)
	struct FVector2D ExtentMin; // 0x50(0x08)
	struct FVector2D ExtentMax; // 0x58(0x08)
};

// Class UMG.SlateAccessibleWidgetData
// Size: 0x80 (Inherited: 0x28)
struct USlateAccessibleWidgetData : public UObject {
	bool bCanChildrenBeAccessible; // 0x28(0x01)
	enum class ESlateAccessibleBehavior AccessibleBehavior; // 0x29(0x01)
	enum class ESlateAccessibleBehavior AccessibleSummaryBehavior; // 0x2a(0x01)
	char UnknownData_2B[0x5]; // 0x2b(0x05)
	struct FText AccessibleText; // 0x30(0x18)
	struct FDelegate AccessibleTextDelegate; // 0x48(0x10)
	struct FText AccessibleSummaryText; // 0x58(0x18)
	struct FDelegate AccessibleSummaryTextDelegate; // 0x70(0x10)
};

// Class UMG.Slider
// Size: 0x500 (Inherited: 0x110)
struct USlider : public UWidget {
	float Value; // 0x110(0x04)
	struct FDelegate ValueDelegate; // 0x114(0x10)
	float MinValue; // 0x124(0x04)
	float MaxValue; // 0x128(0x04)
	char UnknownData_12C[0x4]; // 0x12c(0x04)
	struct FSliderStyle WidgetStyle; // 0x130(0x340)
	char Orientation; // 0x470(0x01)
	char UnknownData_471[0x3]; // 0x471(0x03)
	struct FLinearColor SliderBarColor; // 0x474(0x10)
	struct FLinearColor SliderHandleColor; // 0x484(0x10)
	bool IndentHandle; // 0x494(0x01)
	bool Locked; // 0x495(0x01)
	bool MouseUsesStep; // 0x496(0x01)
	bool RequiresControllerLock; // 0x497(0x01)
	float StepSize; // 0x498(0x04)
	bool IsFocusable; // 0x49c(0x01)
	char UnknownData_49D[0x3]; // 0x49d(0x03)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x4a0(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x4b0(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x4c0(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x4d0(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x4e0(0x10)
	char UnknownData_4F0[0x10]; // 0x4f0(0x10)

	void SetValue(float InValue); // Function UMG.Slider.SetValue
	void SetStepSize(float InValue); // Function UMG.Slider.SetStepSize
	void SetSliderHandleColor(struct FLinearColor InValue); // Function UMG.Slider.SetSliderHandleColor
	void SetSliderBarColor(struct FLinearColor InValue); // Function UMG.Slider.SetSliderBarColor
	void SetMinValue(float InValue); // Function UMG.Slider.SetMinValue
	void SetMaxValue(float InValue); // Function UMG.Slider.SetMaxValue
	void SetLocked(bool InValue); // Function UMG.Slider.SetLocked
	void SetIndentHandle(bool InValue); // Function UMG.Slider.SetIndentHandle
	float GetValue(); // Function UMG.Slider.GetValue
	float GetNormalizedValue(); // Function UMG.Slider.GetNormalizedValue
};

// Class UMG.Spacer
// Size: 0x128 (Inherited: 0x110)
struct USpacer : public UWidget {
	struct FVector2D Size; // 0x110(0x08)
	char UnknownData_118[0x10]; // 0x118(0x10)

	void SetSize(struct FVector2D InSize); // Function UMG.Spacer.SetSize
};

// Class UMG.SpinBox
// Size: 0x520 (Inherited: 0x110)
struct USpinBox : public UWidget {
	float Value; // 0x110(0x04)
	struct FDelegate ValueDelegate; // 0x114(0x10)
	char UnknownData_124[0x4]; // 0x124(0x04)
	struct FSpinBoxStyle WidgetStyle; // 0x128(0x2e8)
	struct USlateWidgetStyleAsset* Style; // 0x410(0x08)
	int32_t MinFractionalDigits; // 0x418(0x04)
	int32_t MaxFractionalDigits; // 0x41c(0x04)
	bool bAlwaysUsesDeltaSnap; // 0x420(0x01)
	char UnknownData_421[0x3]; // 0x421(0x03)
	float Delta; // 0x424(0x04)
	float SliderExponent; // 0x428(0x04)
	char UnknownData_42C[0x4]; // 0x42c(0x04)
	struct FSlateFontInfo Font; // 0x430(0x50)
	char Justification; // 0x480(0x01)
	char UnknownData_481[0x3]; // 0x481(0x03)
	float MinDesiredWidth; // 0x484(0x04)
	bool ClearKeyboardFocusOnCommit; // 0x488(0x01)
	bool SelectAllTextOnCommit; // 0x489(0x01)
	char UnknownData_48A[0x6]; // 0x48a(0x06)
	struct FSlateColor ForegroundColor; // 0x490(0x28)
	struct FMulticastInlineDelegate OnValueChanged; // 0x4b8(0x10)
	struct FMulticastInlineDelegate OnValueCommitted; // 0x4c8(0x10)
	struct FMulticastInlineDelegate OnBeginSliderMovement; // 0x4d8(0x10)
	struct FMulticastInlineDelegate OnEndSliderMovement; // 0x4e8(0x10)
	char bOverride_MinValue : 1; // 0x4f8(0x01)
	char bOverride_MaxValue : 1; // 0x4f8(0x01)
	char bOverride_MinSliderValue : 1; // 0x4f8(0x01)
	char bOverride_MaxSliderValue : 1; // 0x4f8(0x01)
	char UnknownData_4F8_4 : 4; // 0x4f8(0x01)
	char UnknownData_4F9[0x3]; // 0x4f9(0x03)
	float MinValue; // 0x4fc(0x04)
	float MaxValue; // 0x500(0x04)
	float MinSliderValue; // 0x504(0x04)
	float MaxSliderValue; // 0x508(0x04)
	char UnknownData_50C[0x14]; // 0x50c(0x14)

	void SetValue(float NewValue); // Function UMG.SpinBox.SetValue
	void SetMinValue(float NewValue); // Function UMG.SpinBox.SetMinValue
	void SetMinSliderValue(float NewValue); // Function UMG.SpinBox.SetMinSliderValue
	void SetMinFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMinFractionalDigits
	void SetMaxValue(float NewValue); // Function UMG.SpinBox.SetMaxValue
	void SetMaxSliderValue(float NewValue); // Function UMG.SpinBox.SetMaxSliderValue
	void SetMaxFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMaxFractionalDigits
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.SpinBox.SetForegroundColor
	void SetDelta(float NewValue); // Function UMG.SpinBox.SetDelta
	void SetAlwaysUsesDeltaSnap(bool bNewValue); // Function UMG.SpinBox.SetAlwaysUsesDeltaSnap
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, char CommitMethod); // DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue); // DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
	void OnSpinBoxBeginSliderMovement__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
	float GetValue(); // Function UMG.SpinBox.GetValue
	float GetMinValue(); // Function UMG.SpinBox.GetMinValue
	float GetMinSliderValue(); // Function UMG.SpinBox.GetMinSliderValue
	int32_t GetMinFractionalDigits(); // Function UMG.SpinBox.GetMinFractionalDigits
	float GetMaxValue(); // Function UMG.SpinBox.GetMaxValue
	float GetMaxSliderValue(); // Function UMG.SpinBox.GetMaxSliderValue
	int32_t GetMaxFractionalDigits(); // Function UMG.SpinBox.GetMaxFractionalDigits
	float GetDelta(); // Function UMG.SpinBox.GetDelta
	bool GetAlwaysUsesDeltaSnap(); // Function UMG.SpinBox.GetAlwaysUsesDeltaSnap
	void ClearMinValue(); // Function UMG.SpinBox.ClearMinValue
	void ClearMinSliderValue(); // Function UMG.SpinBox.ClearMinSliderValue
	void ClearMaxValue(); // Function UMG.SpinBox.ClearMaxValue
	void ClearMaxSliderValue(); // Function UMG.SpinBox.ClearMaxSliderValue
};

// Class UMG.TextBinding
// Size: 0x68 (Inherited: 0x60)
struct UTextBinding : public UPropertyBinding {
	char UnknownData_60[0x8]; // 0x60(0x08)

	struct FText GetTextValue(); // Function UMG.TextBinding.GetTextValue
	struct FString GetStringValue(); // Function UMG.TextBinding.GetStringValue
};

// Class UMG.TextBlock
// Size: 0x2a8 (Inherited: 0x130)
struct UTextBlock : public UTextLayoutWidget {
	struct FText Text; // 0x130(0x18)
	struct FDelegate TextDelegate; // 0x148(0x10)
	struct FSlateColor ColorAndOpacity; // 0x158(0x28)
	struct FDelegate ColorAndOpacityDelegate; // 0x180(0x10)
	struct FSlateFontInfo Font; // 0x190(0x50)
	struct FSlateBrush StrikeBrush; // 0x1e0(0x88)
	struct FVector2D ShadowOffset; // 0x268(0x08)
	struct FLinearColor ShadowColorAndOpacity; // 0x270(0x10)
	struct FDelegate ShadowColorAndOpacityDelegate; // 0x280(0x10)
	float MinDesiredWidth; // 0x290(0x04)
	bool bWrapWithInvalidationPanel; // 0x294(0x01)
	bool bAutoWrapText; // 0x295(0x01)
	bool bSimpleTextMode; // 0x296(0x01)
	char UnknownData_297[0x11]; // 0x297(0x11)

	void SetText(struct FText InText); // Function UMG.TextBlock.SetText
	void SetStrikeBrush(struct FSlateBrush InStrikeBrush); // Function UMG.TextBlock.SetStrikeBrush
	void SetShadowOffset(struct FVector2D InShadowOffset); // Function UMG.TextBlock.SetShadowOffset
	void SetShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function UMG.TextBlock.SetShadowColorAndOpacity
	void SetOpacity(float InOpacity); // Function UMG.TextBlock.SetOpacity
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.TextBlock.SetMinDesiredWidth
	void SetFont(struct FSlateFontInfo InFontInfo); // Function UMG.TextBlock.SetFont
	void SetColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function UMG.TextBlock.SetColorAndOpacity
	void SetAutoWrapText(bool InAutoTextWrap); // Function UMG.TextBlock.SetAutoWrapText
	struct FText GetText(); // Function UMG.TextBlock.GetText
	struct UMaterialInstanceDynamic* GetDynamicOutlineMaterial(); // Function UMG.TextBlock.GetDynamicOutlineMaterial
	struct UMaterialInstanceDynamic* GetDynamicFontMaterial(); // Function UMG.TextBlock.GetDynamicFontMaterial
};

// Class UMG.Throbber
// Size: 0x1b8 (Inherited: 0x110)
struct UThrobber : public UWidget {
	int32_t NumberOfPieces; // 0x110(0x04)
	bool bAnimateHorizontally; // 0x114(0x01)
	bool bAnimateVertically; // 0x115(0x01)
	bool bAnimateOpacity; // 0x116(0x01)
	char UnknownData_117[0x1]; // 0x117(0x01)
	struct USlateBrushAsset* PieceImage; // 0x118(0x08)
	struct FSlateBrush Image; // 0x120(0x88)
	char UnknownData_1A8[0x10]; // 0x1a8(0x10)

	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.Throbber.SetNumberOfPieces
	void SetAnimateVertically(bool bInAnimateVertically); // Function UMG.Throbber.SetAnimateVertically
	void SetAnimateOpacity(bool bInAnimateOpacity); // Function UMG.Throbber.SetAnimateOpacity
	void SetAnimateHorizontally(bool bInAnimateHorizontally); // Function UMG.Throbber.SetAnimateHorizontally
};

// Class UMG.TileView
// Size: 0x3a0 (Inherited: 0x380)
struct UTileView : public UListView {
	float EntryHeight; // 0x380(0x04)
	float EntryWidth; // 0x384(0x04)
	enum class EListItemAlignment TileAlignment; // 0x388(0x01)
	bool bWrapHorizontalNavigation; // 0x389(0x01)
	char UnknownData_38A[0x16]; // 0x38a(0x16)

	void SetEntryWidth(float NewWidth); // Function UMG.TileView.SetEntryWidth
	void SetEntryHeight(float NewHeight); // Function UMG.TileView.SetEntryHeight
};

// Class UMG.UMGSequencePlayer
// Size: 0x7a8 (Inherited: 0x28)
struct UUMGSequencePlayer : public UObject {
	char UnknownData_28[0x3e0]; // 0x28(0x3e0)
	struct UWidgetAnimation* Animation; // 0x408(0x08)
	char UnknownData_410[0x398]; // 0x410(0x398)

	void SetUserTag(struct FName InUserTag); // Function UMG.UMGSequencePlayer.SetUserTag
	struct FName GetUserTag(); // Function UMG.UMGSequencePlayer.GetUserTag
};

// Class UMG.UniformGridPanel
// Size: 0x150 (Inherited: 0x128)
struct UUniformGridPanel : public UPanelWidget {
	struct FMargin SlotPadding; // 0x128(0x10)
	float MinDesiredSlotWidth; // 0x138(0x04)
	float MinDesiredSlotHeight; // 0x13c(0x04)
	char UnknownData_140[0x10]; // 0x140(0x10)

	void SetSlotPadding(struct FMargin InSlotPadding); // Function UMG.UniformGridPanel.SetSlotPadding
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth); // Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight); // Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
	struct UUniformGridSlot* AddChildToUniformGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn); // Function UMG.UniformGridPanel.AddChildToUniformGrid
};

// Class UMG.UniformGridSlot
// Size: 0x50 (Inherited: 0x38)
struct UUniformGridSlot : public UPanelSlot {
	char HorizontalAlignment; // 0x38(0x01)
	char VerticalAlignment; // 0x39(0x01)
	char UnknownData_3A[0x2]; // 0x3a(0x02)
	int32_t Row; // 0x3c(0x04)
	int32_t column; // 0x40(0x04)
	char UnknownData_44[0xc]; // 0x44(0x0c)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.UniformGridSlot.SetVerticalAlignment
	void SetRow(int32_t InRow); // Function UMG.UniformGridSlot.SetRow
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.UniformGridSlot.SetHorizontalAlignment
	void SetColumn(int32_t InColumn); // Function UMG.UniformGridSlot.SetColumn
};

// Class UMG.VerticalBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UVerticalBoxSlot : public UPanelSlot {
	struct FSlateChildSize Size; // 0x38(0x08)
	struct FMargin Padding; // 0x40(0x10)
	char UnknownData_50[0x8]; // 0x50(0x08)
	char HorizontalAlignment; // 0x58(0x01)
	char VerticalAlignment; // 0x59(0x01)
	char UnknownData_5A[0x6]; // 0x5a(0x06)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.VerticalBoxSlot.SetVerticalAlignment
	void SetSize(struct FSlateChildSize InSize); // Function UMG.VerticalBoxSlot.SetSize
	void SetPadding(struct FMargin InPadding); // Function UMG.VerticalBoxSlot.SetPadding
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.VerticalBoxSlot.SetHorizontalAlignment
};

// Class UMG.Viewport
// Size: 0x150 (Inherited: 0x128)
struct UViewport : public UContentWidget {
	struct FLinearColor BackgroundColor; // 0x128(0x10)
	char UnknownData_138[0x18]; // 0x138(0x18)

	struct AActor* Spawn(struct AActor* ActorClass); // Function UMG.Viewport.Spawn
	void SetViewRotation(struct FRotator Rotation); // Function UMG.Viewport.SetViewRotation
	void SetViewLocation(struct FVector Location); // Function UMG.Viewport.SetViewLocation
	struct FRotator GetViewRotation(); // Function UMG.Viewport.GetViewRotation
	struct UWorld* GetViewportWorld(); // Function UMG.Viewport.GetViewportWorld
	struct FVector GetViewLocation(); // Function UMG.Viewport.GetViewLocation
};

// Class UMG.WidgetAnimation
// Size: 0x378 (Inherited: 0x348)
struct UWidgetAnimation : public UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x348(0x08)
	struct TArray<struct FWidgetAnimationBinding> AnimationBindings; // 0x350(0x10)
	bool bLegacyFinishOnStop; // 0x360(0x01)
	char UnknownData_361[0x7]; // 0x361(0x07)
	struct FString DisplayLabel; // 0x368(0x10)

	void UnbindFromAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationStarted
	void UnbindFromAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationFinished
	void UnbindAllFromAnimationStarted(struct UUserWidget* Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted
	void UnbindAllFromAnimationFinished(struct UUserWidget* Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished
	float GetStartTime(); // Function UMG.WidgetAnimation.GetStartTime
	float GetEndTime(); // Function UMG.WidgetAnimation.GetEndTime
	void BindToAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationStarted
	void BindToAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationFinished
};

// Class UMG.WidgetAnimationDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding {
	struct TArray<struct FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings; // 0x28(0x10)
};

// Class UMG.WidgetAnimationPlayCallbackProxy
// Size: 0x48 (Inherited: 0x28)
struct UWidgetAnimationPlayCallbackProxy : public UObject {
	struct FMulticastInlineDelegate Finished; // 0x28(0x10)
	char UnknownData_38[0x10]; // 0x38(0x10)

	struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(struct UUMGSequencePlayer* Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, char PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject
	struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(struct UUMGSequencePlayer* Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, char PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject
};

// Class UMG.WidgetBlueprintGeneratedClass
// Size: 0x398 (Inherited: 0x328)
struct UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass {
	struct UWidgetTree* WidgetTree; // 0x328(0x08)
	char bAllowTemplate : 1; // 0x330(0x01)
	char bAllowDynamicCreation : 1; // 0x330(0x01)
	char bValidTemplate : 1; // 0x330(0x01)
	char bTemplateInitialized : 1; // 0x330(0x01)
	char bCookedTemplate : 1; // 0x330(0x01)
	char bClassRequiresNativeTick : 1; // 0x330(0x01)
	char UnknownData_330_6 : 2; // 0x330(0x01)
	char UnknownData_331[0x7]; // 0x331(0x07)
	struct TArray<struct FDelegateRuntimeBinding> Bindings; // 0x338(0x10)
	struct TArray<struct UWidgetAnimation*> Animations; // 0x348(0x10)
	struct TArray<struct FName> NamedSlots; // 0x358(0x10)
	struct TSoftObjectPtr<struct UUserWidget> TemplateAsset; // 0x368(0x28)
	struct UUserWidget* Template; // 0x390(0x08)
};

// Class UMG.WidgetComponent
// Size: 0x580 (Inherited: 0x460)
struct UWidgetComponent : public UMeshComponent {
	bool bUseWidgetPool; // 0x458(0x01)
	bool bPrimePoolOnFirstUse; // 0x459(0x01)
	int32_t MaxPoolSize; // 0x45c(0x04)
	enum class EWidgetSpace Space; // 0x460(0x01)
	enum class EWidgetTimingPolicy TimingPolicy; // 0x461(0x01)
	struct UUserWidget* WidgetClass; // 0x468(0x08)
	struct FIntPoint DrawSize; // 0x470(0x08)
	bool bManuallyRedraw; // 0x478(0x01)
	bool bRedrawRequested; // 0x479(0x01)
	char UnknownData_47A[0x2]; // 0x47a(0x02)
	float RedrawTime; // 0x47c(0x04)
	char UnknownData_480[0x8]; // 0x480(0x08)
	struct FIntPoint CurrentDrawSize; // 0x488(0x08)
	bool bDrawAtDesiredSize; // 0x490(0x01)
	char UnknownData_491[0x3]; // 0x491(0x03)
	struct FVector2D Pivot; // 0x494(0x08)
	bool bReceiveHardwareInput; // 0x49c(0x01)
	bool bWindowFocusable; // 0x49d(0x01)
	enum class EWindowVisibility WindowVisibility; // 0x49e(0x01)
	bool bApplyGammaCorrection; // 0x49f(0x01)
	struct ULocalPlayer* OwnerPlayer; // 0x4a0(0x08)
	struct FLinearColor BackgroundColor; // 0x4a8(0x10)
	struct FLinearColor TintColorAndOpacity; // 0x4b8(0x10)
	float OpacityFromTexture; // 0x4c8(0x04)
	enum class EWidgetBlendMode BlendMode; // 0x4cc(0x01)
	bool bIsTwoSided; // 0x4cd(0x01)
	bool TickWhenOffscreen; // 0x4ce(0x01)
	char UnknownData_4CF[0x1]; // 0x4cf(0x01)
	struct UUserWidget* Widget; // 0x4d0(0x08)
	char UnknownData_4D8[0x20]; // 0x4d8(0x20)
	struct UBodySetup* BodySetup; // 0x4f8(0x08)
	struct UMaterialInterface* TranslucentMaterial; // 0x500(0x08)
	struct UMaterialInterface* TranslucentMaterial_OneSided; // 0x508(0x08)
	struct UMaterialInterface* OpaqueMaterial; // 0x510(0x08)
	struct UMaterialInterface* OpaqueMaterial_OneSided; // 0x518(0x08)
	struct UMaterialInterface* MaskedMaterial; // 0x520(0x08)
	struct UMaterialInterface* MaskedMaterial_OneSided; // 0x528(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0x530(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x538(0x08)
	bool bAddedToScreen; // 0x540(0x01)
	bool bEditTimeUsable; // 0x541(0x01)
	char UnknownData_542[0x2]; // 0x542(0x02)
	struct FName SharedLayerName; // 0x544(0x08)
	int32_t LayerZOrder; // 0x54c(0x04)
	enum class EWidgetGeometryMode GeometryMode; // 0x550(0x01)
	char UnknownData_551[0x3]; // 0x551(0x03)
	float CylinderArcAngle; // 0x554(0x04)
	char UnknownData_558[0x28]; // 0x558(0x28)

	void SetWindowVisibility(enum class EWindowVisibility InVisibility); // Function UMG.WidgetComponent.SetWindowVisibility
	void SetWindowFocusable(bool bInWindowFocusable); // Function UMG.WidgetComponent.SetWindowFocusable
	void SetWidgetSpace(enum class EWidgetSpace NewSpace); // Function UMG.WidgetComponent.SetWidgetSpace
	void SetWidget(struct UUserWidget* Widget); // Function UMG.WidgetComponent.SetWidget
	void SetTwoSided(bool bWantTwoSided); // Function UMG.WidgetComponent.SetTwoSided
	void SetTintColorAndOpacity(struct FLinearColor NewTintColorAndOpacity); // Function UMG.WidgetComponent.SetTintColorAndOpacity
	void SetTickWhenOffscreen(bool bWantTickWhenOffscreen); // Function UMG.WidgetComponent.SetTickWhenOffscreen
	void SetRedrawTime(float InRedrawTime); // Function UMG.WidgetComponent.SetRedrawTime
	void SetPivot(struct FVector2D InPivot); // Function UMG.WidgetComponent.SetPivot
	void SetOwnerPlayer(struct ULocalPlayer* LocalPlayer); // Function UMG.WidgetComponent.SetOwnerPlayer
	void SetManuallyRedraw(bool bUseManualRedraw); // Function UMG.WidgetComponent.SetManuallyRedraw
	void SetGeometryMode(enum class EWidgetGeometryMode InGeometryMode); // Function UMG.WidgetComponent.SetGeometryMode
	void SetDrawSize(struct FVector2D Size); // Function UMG.WidgetComponent.SetDrawSize
	void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize); // Function UMG.WidgetComponent.SetDrawAtDesiredSize
	void SetCylinderArcAngle(float InCylinderArcAngle); // Function UMG.WidgetComponent.SetCylinderArcAngle
	void SetBackgroundColor(struct FLinearColor NewBackgroundColor); // Function UMG.WidgetComponent.SetBackgroundColor
	void RequestRedraw(); // Function UMG.WidgetComponent.RequestRedraw
	enum class EWindowVisibility GetWindowVisiblility(); // Function UMG.WidgetComponent.GetWindowVisiblility
	bool GetWindowFocusable(); // Function UMG.WidgetComponent.GetWindowFocusable
	enum class EWidgetSpace GetWidgetSpace(); // Function UMG.WidgetComponent.GetWidgetSpace
	struct UUserWidget* GetUserWidgetObject(); // Function UMG.WidgetComponent.GetUserWidgetObject
	bool GetTwoSided(); // Function UMG.WidgetComponent.GetTwoSided
	bool GetTickWhenOffscreen(); // Function UMG.WidgetComponent.GetTickWhenOffscreen
	struct UTextureRenderTarget2D* GetRenderTarget(); // Function UMG.WidgetComponent.GetRenderTarget
	float GetRedrawTime(); // Function UMG.WidgetComponent.GetRedrawTime
	struct FVector2D GetPivot(); // Function UMG.WidgetComponent.GetPivot
	struct ULocalPlayer* GetOwnerPlayer(); // Function UMG.WidgetComponent.GetOwnerPlayer
	struct UMaterialInstanceDynamic* GetMaterialInstance(); // Function UMG.WidgetComponent.GetMaterialInstance
	bool GetManuallyRedraw(); // Function UMG.WidgetComponent.GetManuallyRedraw
	enum class EWidgetGeometryMode GetGeometryMode(); // Function UMG.WidgetComponent.GetGeometryMode
	struct FVector2D GetDrawSize(); // Function UMG.WidgetComponent.GetDrawSize
	bool GetDrawAtDesiredSize(); // Function UMG.WidgetComponent.GetDrawAtDesiredSize
	float GetCylinderArcAngle(); // Function UMG.WidgetComponent.GetCylinderArcAngle
	struct FVector2D GetCurrentDrawSize(); // Function UMG.WidgetComponent.GetCurrentDrawSize
};

// Class UMG.WidgetInteractionComponent
// Size: 0x400 (Inherited: 0x210)
struct UWidgetInteractionComponent : public USceneComponent {
	struct FMulticastInlineDelegate OnHoveredWidgetChanged; // 0x208(0x10)
	char UnknownData_220[0x8]; // 0x220(0x08)
	int32_t VirtualUserIndex; // 0x228(0x04)
	float PointerIndex; // 0x22c(0x04)
	char TraceChannel; // 0x230(0x01)
	char UnknownData_231[0x3]; // 0x231(0x03)
	float InteractionDistance; // 0x234(0x04)
	enum class EWidgetInteractionSource InteractionSource; // 0x238(0x01)
	bool bEnableHitTesting; // 0x239(0x01)
	bool bShowDebug; // 0x23a(0x01)
	char UnknownData_23B[0x1]; // 0x23b(0x01)
	struct FLinearColor DebugColor; // 0x23c(0x10)
	char UnknownData_24C[0x7c]; // 0x24c(0x7c)
	struct FHitResult CustomHitResult; // 0x2c8(0x88)
	struct FVector2D LocalHitLocation; // 0x350(0x08)
	struct FVector2D LastLocalHitLocation; // 0x358(0x08)
	struct UWidgetComponent* HoveredWidgetComponent; // 0x360(0x08)
	struct FHitResult LastHitResult; // 0x368(0x88)
	bool bIsHoveredWidgetInteractable; // 0x3f0(0x01)
	bool bIsHoveredWidgetFocusable; // 0x3f1(0x01)
	bool bIsHoveredWidgetHitTestVisible; // 0x3f2(0x01)
	char UnknownData_3F3[0xd]; // 0x3f3(0x0d)

	void SetFocus(struct UWidget* FocusWidget); // Function UMG.WidgetInteractionComponent.SetFocus
	void SetCustomHitResult(struct FHitResult HitResult); // Function UMG.WidgetInteractionComponent.SetCustomHitResult
	bool SendKeyChar(struct FString Characters, bool bRepeat); // Function UMG.WidgetInteractionComponent.SendKeyChar
	void ScrollWheel(float ScrollDelta); // Function UMG.WidgetInteractionComponent.ScrollWheel
	void ReleasePointerKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.ReleasePointerKey
	bool ReleaseKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.ReleaseKey
	void PressPointerKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.PressPointerKey
	bool PressKey(struct FKey Key, bool bRepeat); // Function UMG.WidgetInteractionComponent.PressKey
	bool PressAndReleaseKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.PressAndReleaseKey
	bool IsOverInteractableWidget(); // Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
	bool IsOverHitTestVisibleWidget(); // Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
	bool IsOverFocusableWidget(); // Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
	struct FHitResult GetLastHitResult(); // Function UMG.WidgetInteractionComponent.GetLastHitResult
	struct UWidgetComponent* GetHoveredWidgetComponent(); // Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
	struct FVector2D Get2DHitLocation(); // Function UMG.WidgetInteractionComponent.Get2DHitLocation
};

// Class UMG.WidgetNavigation
// Size: 0x100 (Inherited: 0x28)
struct UWidgetNavigation : public UObject {
	struct FWidgetNavigationData Up; // 0x28(0x24)
	struct FWidgetNavigationData Down; // 0x4c(0x24)
	struct FWidgetNavigationData Left; // 0x70(0x24)
	struct FWidgetNavigationData Right; // 0x94(0x24)
	struct FWidgetNavigationData Next; // 0xb8(0x24)
	struct FWidgetNavigationData Previous; // 0xdc(0x24)
};

// Class UMG.WidgetSwitcher
// Size: 0x140 (Inherited: 0x128)
struct UWidgetSwitcher : public UPanelWidget {
	int32_t ActiveWidgetIndex; // 0x128(0x04)
	char UnknownData_12C[0x14]; // 0x12c(0x14)

	void SetActiveWidgetIndex(int32_t Index); // Function UMG.WidgetSwitcher.SetActiveWidgetIndex
	void SetActiveWidget(struct UWidget* Widget); // Function UMG.WidgetSwitcher.SetActiveWidget
	struct UWidget* GetWidgetAtIndex(int32_t Index); // Function UMG.WidgetSwitcher.GetWidgetAtIndex
	int32_t GetNumWidgets(); // Function UMG.WidgetSwitcher.GetNumWidgets
	int32_t GetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.GetActiveWidgetIndex
	struct UWidget* GetActiveWidget(); // Function UMG.WidgetSwitcher.GetActiveWidget
};

// Class UMG.WidgetSwitcherSlot
// Size: 0x58 (Inherited: 0x38)
struct UWidgetSwitcherSlot : public UPanelSlot {
	char UnknownData_38[0x8]; // 0x38(0x08)
	struct FMargin Padding; // 0x40(0x10)
	char HorizontalAlignment; // 0x50(0x01)
	char VerticalAlignment; // 0x51(0x01)
	char UnknownData_52[0x6]; // 0x52(0x06)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.WidgetSwitcherSlot.SetPadding
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
};

// Class UMG.WidgetTree
// Size: 0x30 (Inherited: 0x28)
struct UWidgetTree : public UObject {
	struct UWidget* RootWidget; // 0x28(0x08)
};

// Class UMG.WindowTitleBarArea
// Size: 0x148 (Inherited: 0x128)
struct UWindowTitleBarArea : public UContentWidget {
	bool bWindowButtonsEnabled; // 0x128(0x01)
	bool bDoubleClickTogglesFullscreen; // 0x129(0x01)
	char UnknownData_12A[0x1e]; // 0x12a(0x1e)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.WindowTitleBarArea.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.WindowTitleBarArea.SetPadding
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.WindowTitleBarArea.SetHorizontalAlignment
};

// Class UMG.WindowTitleBarAreaSlot
// Size: 0x60 (Inherited: 0x38)
struct UWindowTitleBarAreaSlot : public UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	char HorizontalAlignment; // 0x48(0x01)
	char VerticalAlignment; // 0x49(0x01)
	char UnknownData_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.WindowTitleBarAreaSlot.SetPadding
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
};

// Class UMG.WrapBox
// Size: 0x148 (Inherited: 0x128)
struct UWrapBox : public UPanelWidget {
	struct FVector2D InnerSlotPadding; // 0x128(0x08)
	float WrapWidth; // 0x130(0x04)
	bool bExplicitWrapWidth; // 0x134(0x01)
	char UnknownData_135[0x13]; // 0x135(0x13)

	void SetInnerSlotPadding(struct FVector2D InPadding); // Function UMG.WrapBox.SetInnerSlotPadding
	struct UWrapBoxSlot* AddChildToWrapBox(struct UWidget* Content); // Function UMG.WrapBox.AddChildToWrapBox
};

// Class UMG.WrapBoxSlot
// Size: 0x60 (Inherited: 0x38)
struct UWrapBoxSlot : public UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	bool bFillEmptySpace; // 0x48(0x01)
	char UnknownData_49[0x3]; // 0x49(0x03)
	float FillSpanWhenLessThan; // 0x4c(0x04)
	char HorizontalAlignment; // 0x50(0x01)
	char VerticalAlignment; // 0x51(0x01)
	char UnknownData_52[0xe]; // 0x52(0x0e)

	void SetVerticalAlignment(char InVerticalAlignment); // Function UMG.WrapBoxSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.WrapBoxSlot.SetPadding
	void SetHorizontalAlignment(char InHorizontalAlignment); // Function UMG.WrapBoxSlot.SetHorizontalAlignment
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan); // Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
	void SetFillEmptySpace(bool InbFillEmptySpace); // Function UMG.WrapBoxSlot.SetFillEmptySpace
};

