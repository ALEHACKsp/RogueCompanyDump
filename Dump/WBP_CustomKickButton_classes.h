// WidgetBlueprintGeneratedClass WBP_CustomKickButton.WBP_CustomKickButton_C
// Size: 0x260 (Inherited: 0x238)
struct UWBP_CustomKickButton_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UWidgetAnimation* Hovered; // 0x240(0x08)
	struct UButton* KickButton; // 0x248(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x250(0x10)

	void BndEvt__KickButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_CustomKickButton.WBP_CustomKickButton_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__KickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_CustomKickButton.WBP_CustomKickButton_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__KickButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_CustomKickButton.WBP_CustomKickButton_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void ForceClick(); // Function WBP_CustomKickButton.WBP_CustomKickButton_C.ForceClick
	void ExecuteUbergraph_WBP_CustomKickButton(int32_t EntryPoint); // Function WBP_CustomKickButton.WBP_CustomKickButton_C.ExecuteUbergraph_WBP_CustomKickButton
	void OnClicked__DelegateSignature(); // Function WBP_CustomKickButton.WBP_CustomKickButton_C.OnClicked__DelegateSignature
};

