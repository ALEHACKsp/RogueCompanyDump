// WidgetBlueprintGeneratedClass WBP_StandardButtonInner.WBP_StandardButtonInner_C
// Size: 0x5e0 (Inherited: 0x4e0)
struct UWBP_StandardButtonInner_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* ShowButton; // 0x4e8(0x08)
	struct UWidgetAnimation* OnClick; // 0x4f0(0x08)
	struct UWidgetAnimation* Highlight; // 0x4f8(0x08)
	struct UImage* BtnBkg; // 0x500(0x08)
	struct UImage* BtnBkgHover; // 0x508(0x08)
	struct UImage* BtnClickImage; // 0x510(0x08)
	struct UImage* BtnEdge; // 0x518(0x08)
	struct UImage* BtnEdgeHover; // 0x520(0x08)
	struct UImage* BtnFrame; // 0x528(0x08)
	struct UImage* BtnFrameHover; // 0x530(0x08)
	struct UOverlay* BtnStandardWrapper; // 0x538(0x08)
	struct UTextBlock* ButtonText; // 0x540(0x08)
	struct UButton* HitTarget; // 0x548(0x08)
	struct UOverlay* HoverWrapper; // 0x550(0x08)
	struct UImage* KeyPrompt; // 0x558(0x08)
	struct USizeBox* KeyPromptSizeBox; // 0x560(0x08)
	struct USizeBox* SizeWrapper; // 0x568(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x570(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x580(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x590(0x10)
	struct UAkAudioEvent* ClickStandardBtnInnerSFX; // 0x5a0(0x08)
	struct FText DefaultButtonText; // 0x5a8(0x18)
	float DefaultWidth; // 0x5c0(0x04)
	bool ShowPromptOnFocus; // 0x5c4(0x01)
	char UnknownData_5C5[0x3]; // 0x5c5(0x03)
	struct FName GamepadAction; // 0x5c8(0x08)
	float DefaultHeight; // 0x5d0(0x04)
	char UnknownData_5D4[0x4]; // 0x5d4(0x04)
	struct UAkAudioEvent* HoverStandardBtnInnerSFX; // 0x5d8(0x08)

	void SetDefaultValues(float Height, float Width, struct FText ButtonText, struct FName Action, bool ShowPromptOnFocus); // Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetDefaultValues
	void SetHeight(float InHeight); // Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetHeight
	void HasGamepadAction(bool HasGamepadAction); // Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.HasGamepadAction
	void SetGamepadPromptForAction(struct FName Action); // Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetGamepadPromptForAction
	void SetDefaultDisplay(); // Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetDefaultDisplay
	void SetWidth(float InWidth); // Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetWidth
	void SetButtonText(struct FText ButtonText); // Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetButtonText
	bool NavigateConfirm(); // Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.NavigateConfirm
	void PreConstruct(bool IsDesignTime); // Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.PreConstruct
	void Construct(); // Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.Construct
	void BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void GamepadHover(); // Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.GamepadHover
	void GamepadUnhover(); // Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.GamepadUnhover
	void GamepadConfirm(); // Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.GamepadConfirm
	void Do Hover(); // Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.Do Hover
	void Do Unhover(); // Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.Do Unhover
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.InitializeWidget
	void HandleInputStateChanged(char InputState); // Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.HandleInputStateChanged
	void ExecuteUbergraph_WBP_StandardButtonInner(int32_t EntryPoint); // Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.ExecuteUbergraph_WBP_StandardButtonInner
	void OnUnhovered__DelegateSignature(struct UWidget* Widget); // Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.OnUnhovered__DelegateSignature
	void OnHovered__DelegateSignature(struct UWidget* Widget); // Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.OnHovered__DelegateSignature
	void OnClicked__DelegateSignature(struct UWidget* Widget); // Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.OnClicked__DelegateSignature
};

