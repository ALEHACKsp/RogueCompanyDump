// WidgetBlueprintGeneratedClass WBP_StandardButtonLarge.WBP_StandardButtonLarge_C
// Size: 0x5f0 (Inherited: 0x4e0)
struct UWBP_StandardButtonLarge_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* OnClick; // 0x4e8(0x08)
	struct UWidgetAnimation* Highlight; // 0x4f0(0x08)
	struct UImage* BtnBkg; // 0x4f8(0x08)
	struct UImage* BtnBkgHover; // 0x500(0x08)
	struct UImage* BtnBkgRedButton; // 0x508(0x08)
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
	struct UCanvasPanel* KeyPromptContainer; // 0x560(0x08)
	struct USizeBox* SizeWrapper; // 0x568(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x570(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x580(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x590(0x10)
	struct UAkAudioEvent* ClickLrgBtnSFX; // 0x5a0(0x08)
	struct FText DefaultButtonText; // 0x5a8(0x18)
	float DefaultWidth; // 0x5c0(0x04)
	bool ShowPromptOnFocus; // 0x5c4(0x01)
	char UnknownData_5C5[0x3]; // 0x5c5(0x03)
	struct FKey PromptKey; // 0x5c8(0x18)
	bool IsRedButton; // 0x5e0(0x01)
	bool IsConfirm; // 0x5e1(0x01)
	bool IsCancel; // 0x5e2(0x01)
	char UnknownData_5E3[0x1]; // 0x5e3(0x01)
	float DefaultHeight; // 0x5e4(0x04)
	struct UAkAudioEvent* HoverLrgBtnSFX; // 0x5e8(0x08)

	void SetHeight(float InHeight); // Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetHeight
	void GetGamepadPromptKey(bool HasValidKeyPrompt, struct FKey GamepadKey); // Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GetGamepadPromptKey
	void Set Key Prompt(struct FKey Prompt); // Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Set Key Prompt
	void SetGamepadPromptForAction(struct FName Action); // Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetGamepadPromptForAction
	void SetDefaultDisplay(); // Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetDefaultDisplay
	void SetWidth(float InWidth); // Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetWidth
	void SetButtonText(struct FText ButtonText); // Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetButtonText
	bool NavigateConfirm(); // Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.NavigateConfirm
	void PreConstruct(bool IsDesignTime); // Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.PreConstruct
	void Construct(); // Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Construct
	void BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void GamepadHover(); // Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GamepadHover
	void GamepadUnhover(); // Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GamepadUnhover
	void GamepadConfirm(); // Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GamepadConfirm
	void Do Hover(); // Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Do Hover
	void Do Unhover(); // Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Do Unhover
	void HandleInputStateChanged(char InputState); // Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.HandleInputStateChanged
	void OnInitialized(); // Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnInitialized
	void ExecuteUbergraph_WBP_StandardButtonLarge(int32_t EntryPoint); // Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.ExecuteUbergraph_WBP_StandardButtonLarge
	void OnUnhovered__DelegateSignature(struct UWidget* Widget); // Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnUnhovered__DelegateSignature
	void OnHovered__DelegateSignature(struct UWidget* Widget); // Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnHovered__DelegateSignature
	void OnClicked__DelegateSignature(struct UWidget* Widget); // Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnClicked__DelegateSignature
};

