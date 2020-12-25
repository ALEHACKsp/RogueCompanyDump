// WidgetBlueprintGeneratedClass WBP_StoreSectionTab.WBP_StoreSectionTab_C
// Size: 0x570 (Inherited: 0x4e0)
struct UWBP_StoreSectionTab_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* Hover; // 0x4e8(0x08)
	struct UImage* ActiveIndicator; // 0x4f0(0x08)
	struct UTextBlock* ButtonText; // 0x4f8(0x08)
	struct UCanvasPanel* CTAWrapper; // 0x500(0x08)
	struct UKSAsyncImage* GamepadPrompt; // 0x508(0x08)
	struct UCanvasPanel* GamepadPromptContainer; // 0x510(0x08)
	struct UButton* TabButton; // 0x518(0x08)
	struct UWBP_CallToAction_C* WBP_CallToAction; // 0x520(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x528(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x538(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x548(0x10)
	bool IsActive; // 0x558(0x01)
	char UnknownData_559[0x3]; // 0x559(0x03)
	int32_t Index; // 0x55c(0x04)
	struct UAkAudioEvent* HoverStoreSectionTabSFX; // 0x560(0x08)
	struct UAkAudioEvent* ClickStoreSectionTabSFX; // 0x568(0x08)

	void ShowCTA(bool ShowCTA); // Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.ShowCTA
	void SetPromptButton(struct FKey PromptKey); // Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.SetPromptButton
	void OnInputStateChanged(char InputState); // Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.OnInputStateChanged
	bool NavigateConfirm(); // Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.NavigateConfirm
	void Construct(); // Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.Construct
	void BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void GamepadConfirm(); // Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.GamepadConfirm
	void BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__TabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void SetActive(); // Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.SetActive
	void SetInactive(); // Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.SetInactive
	void PreConstruct(bool IsDesignTime); // Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.PreConstruct
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.InitializeWidget
	void ExecuteUbergraph_WBP_StoreSectionTab(int32_t EntryPoint); // Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.ExecuteUbergraph_WBP_StoreSectionTab
	void OnUnhovered__DelegateSignature(); // Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.OnUnhovered__DelegateSignature
	void OnHovered__DelegateSignature(); // Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.OnHovered__DelegateSignature
	void OnClicked__DelegateSignature(int32_t Index); // Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.OnClicked__DelegateSignature
};

