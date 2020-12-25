// WidgetBlueprintGeneratedClass WBP_LoadoutTierButton.WBP_LoadoutTierButton_C
// Size: 0x2b8 (Inherited: 0x238)
struct UWBP_LoadoutTierButton_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UWidgetAnimation* Hover; // 0x240(0x08)
	struct UImage* background; // 0x248(0x08)
	struct UImage* CapExtended; // 0x250(0x08)
	struct UTextBlock* Price; // 0x258(0x08)
	struct UImage* Selected; // 0x260(0x08)
	struct UButton* TierButton; // 0x268(0x08)
	struct UTextBlock* TierName; // 0x270(0x08)
	int32_t TierIndex; // 0x278(0x04)
	char UnknownData_27C[0x4]; // 0x27c(0x04)
	struct FMulticastInlineDelegate OnHover; // 0x280(0x10)
	struct FMulticastInlineDelegate OnClick; // 0x290(0x10)
	bool IsActive; // 0x2a0(0x01)
	char UnknownData_2A1[0x7]; // 0x2a1(0x07)
	struct UAkAudioEvent* HoverLoadoutTierBtnSFX; // 0x2a8(0x08)
	struct UAkAudioEvent* ClickLoadoutTierBtnSFX; // 0x2b0(0x08)

	void SetIsActive(bool ShowPrice, bool SetActive); // Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.SetIsActive
	void SetTierPrice(struct FText PriceText); // Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.SetTierPrice
	void Set Button Text(struct FText Text); // Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.Set Button Text
	void PreConstruct(bool IsDesignTime); // Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.PreConstruct
	void Construct(); // Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.Construct
	void BndEvt__TierButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.BndEvt__TierButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__TierButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.BndEvt__TierButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__TierButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.BndEvt__TierButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void ExecuteUbergraph_WBP_LoadoutTierButton(int32_t EntryPoint); // Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.ExecuteUbergraph_WBP_LoadoutTierButton
	void OnClick__DelegateSignature(int32_t TierIndex); // Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.OnClick__DelegateSignature
	void OnHover__DelegateSignature(int32_t TierIndex); // Function WBP_LoadoutTierButton.WBP_LoadoutTierButton_C.OnHover__DelegateSignature
};

