// WidgetBlueprintGeneratedClass WBP_StandardButtonMedium.WBP_StandardButtonMedium_C
// Size: 0x5e2 (Inherited: 0x4e0)
struct UWBP_StandardButtonMedium_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* OnClick; // 0x4e8(0x08)
	struct UWidgetAnimation* Highlight; // 0x4f0(0x08)
	struct UImage* BtnBkg; // 0x4f8(0x08)
	struct UImage* BtnBkgHover; // 0x500(0x08)
	struct UImage* BtnClickImage; // 0x508(0x08)
	struct UImage* BtnEdge; // 0x510(0x08)
	struct UImage* BtnEdgeHover; // 0x518(0x08)
	struct UImage* BtnFrame; // 0x520(0x08)
	struct UImage* BtnFrameHover; // 0x528(0x08)
	struct UOverlay* BtnStandardWrapper; // 0x530(0x08)
	struct UTextBlock* ButtonText; // 0x538(0x08)
	struct UButton* HitTarget; // 0x540(0x08)
	struct UOverlay* HoverWrapper; // 0x548(0x08)
	struct UImage* KeyPrompt; // 0x550(0x08)
	struct UCanvasPanel* KeyPromptContainer; // 0x558(0x08)
	struct USizeBox* SizeWrapper; // 0x560(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x568(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x578(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x588(0x10)
	struct UAkAudioEvent* ClickMedBtnSFX; // 0x598(0x08)
	struct FText DefaultButtonText; // 0x5a0(0x18)
	float DefaultWidth; // 0x5b8(0x04)
	bool ShowPromptOnFocus; // 0x5bc(0x01)
	char UnknownData_5BD[0x3]; // 0x5bd(0x03)
	struct FKey PromptKey; // 0x5c0(0x18)
	struct UAkAudioEvent* HoverMedBtnSFX; // 0x5d8(0x08)
	bool IsConfirm; // 0x5e0(0x01)
	bool IsCancel; // 0x5e1(0x01)

	void GetGamepadPromptKey(bool HasValidKeyPrompt, struct FKey GamepadKey); // Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.GetGamepadPromptKey
	void SetKeyPrompt(struct FKey GamepadButton); // Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.SetKeyPrompt
	void SetDefaultDisplay(); // Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.SetDefaultDisplay
	void SetWidth(float InWidth); // Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.SetWidth
	void SetButtonText(struct FText ButtonText); // Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.SetButtonText
	bool NavigateConfirm(); // Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.NavigateConfirm
	void PreConstruct(bool IsDesignTime); // Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.PreConstruct
	void Construct(); // Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.Construct
	void BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void GamepadHover(); // Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.GamepadHover
	void GamepadUnhover(); // Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.GamepadUnhover
	void GamepadConfirm(); // Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.GamepadConfirm
	void Do Hover(); // Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.Do Hover
	void Do Unhover(); // Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.Do Unhover
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.InitializeWidget
	void HandleInputStateChanged(char InputState); // Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.HandleInputStateChanged
	void OnInitialized(); // Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.OnInitialized
	void ExecuteUbergraph_WBP_StandardButtonMedium(int32_t EntryPoint); // Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.ExecuteUbergraph_WBP_StandardButtonMedium
	void OnUnhovered__DelegateSignature(struct UWidget* Widget); // Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.OnUnhovered__DelegateSignature
	void OnHovered__DelegateSignature(struct UWidget* Widget); // Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.OnHovered__DelegateSignature
	void OnClicked__DelegateSignature(struct UWidget* Widget); // Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.OnClicked__DelegateSignature
};

