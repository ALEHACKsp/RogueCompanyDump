// WidgetBlueprintGeneratedClass BackButton.BackButton_C
// Size: 0x278 (Inherited: 0x238)
struct UBackButton_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UWidgetAnimation* Hover; // 0x240(0x08)
	struct UImage* bkg; // 0x248(0x08)
	struct UImage* DropShadow; // 0x250(0x08)
	struct UButton* HitTarget; // 0x258(0x08)
	struct UImage* Image_3; // 0x260(0x08)
	struct FMulticastInlineDelegate BackButtonClicked; // 0x268(0x10)

	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature(); // Function BackButton.BackButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function BackButton.BackButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature(); // Function BackButton.BackButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
	void ExecuteUbergraph_BackButton(int32_t EntryPoint); // Function BackButton.BackButton_C.ExecuteUbergraph_BackButton
	void BackButtonClicked__DelegateSignature(); // Function BackButton.BackButton_C.BackButtonClicked__DelegateSignature
};

