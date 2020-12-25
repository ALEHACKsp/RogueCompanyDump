// WidgetBlueprintGeneratedClass WBP_StandardButton_02.WBP_StandardButton_02_C
// Size: 0x588 (Inherited: 0x4e0)
struct UWBP_StandardButton_02_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* OnClick; // 0x4e8(0x08)
	struct UWidgetAnimation* Highlight; // 0x4f0(0x08)
	struct UImage* BackgroundImage; // 0x4f8(0x08)
	struct UTextBlock* ButtonText; // 0x500(0x08)
	struct UImage* Click; // 0x508(0x08)
	struct UImage* Image_1; // 0x510(0x08)
	struct UButton* LoadoutButton; // 0x518(0x08)
	struct USizeBox* TextSizeWrapper; // 0x520(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x528(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x538(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x548(0x10)
	struct UAkAudioEvent* ClickStandardButton_02SFX; // 0x558(0x08)
	struct FText DefaultButtonText; // 0x560(0x18)
	float DefaultWidth; // 0x578(0x04)
	char UnknownData_57C[0x4]; // 0x57c(0x04)
	struct UAkAudioEvent* HoverStandardButton_02SFX; // 0x580(0x08)

	void SetDefaultDisplay(); // Function WBP_StandardButton_02.WBP_StandardButton_02_C.SetDefaultDisplay
	void SetWidth(float InWidth); // Function WBP_StandardButton_02.WBP_StandardButton_02_C.SetWidth
	void SetButtonText(struct FText ButtonText); // Function WBP_StandardButton_02.WBP_StandardButton_02_C.SetButtonText
	bool NavigateConfirm(); // Function WBP_StandardButton_02.WBP_StandardButton_02_C.NavigateConfirm
	void PreConstruct(bool IsDesignTime); // Function WBP_StandardButton_02.WBP_StandardButton_02_C.PreConstruct
	void Construct(); // Function WBP_StandardButton_02.WBP_StandardButton_02_C.Construct
	void BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_StandardButton_02.WBP_StandardButton_02_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_StandardButton_02.WBP_StandardButton_02_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_StandardButton_02.WBP_StandardButton_02_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void GamepadHover(); // Function WBP_StandardButton_02.WBP_StandardButton_02_C.GamepadHover
	void GamepadUnhover(); // Function WBP_StandardButton_02.WBP_StandardButton_02_C.GamepadUnhover
	void GamepadConfirm(); // Function WBP_StandardButton_02.WBP_StandardButton_02_C.GamepadConfirm
	void Do Hover(); // Function WBP_StandardButton_02.WBP_StandardButton_02_C.Do Hover
	void Do Unhover(); // Function WBP_StandardButton_02.WBP_StandardButton_02_C.Do Unhover
	void ExecuteUbergraph_WBP_StandardButton_02(int32_t EntryPoint); // Function WBP_StandardButton_02.WBP_StandardButton_02_C.ExecuteUbergraph_WBP_StandardButton_02
	void OnUnhovered__DelegateSignature(struct UWidget* Widget); // Function WBP_StandardButton_02.WBP_StandardButton_02_C.OnUnhovered__DelegateSignature
	void OnHovered__DelegateSignature(struct UWidget* Widget); // Function WBP_StandardButton_02.WBP_StandardButton_02_C.OnHovered__DelegateSignature
	void OnClicked__DelegateSignature(struct UWidget* Widget); // Function WBP_StandardButton_02.WBP_StandardButton_02_C.OnClicked__DelegateSignature
};

