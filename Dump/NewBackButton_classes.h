// WidgetBlueprintGeneratedClass NewBackButton.NewBackButton_C
// Size: 0x508 (Inherited: 0x4e0)
struct UNewBackButton_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWBP_ShearedButton_C* WBP_ShearedButton; // 0x4e8(0x08)
	struct FMulticastInlineDelegate BackButtonClicked; // 0x4f0(0x10)
	struct FName PreviousViewRoute; // 0x500(0x08)

	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function NewBackButton.NewBackButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature(); // Function NewBackButton.NewBackButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
	void BndEvt__WBP_ShearedButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct UWidget* Widget); // Function NewBackButton.NewBackButton_C.BndEvt__WBP_ShearedButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	void OnViewChanged(struct FName LastRoute); // Function NewBackButton.NewBackButton_C.OnViewChanged
	void InitializeWidget(struct APUMG_HUD* HUD); // Function NewBackButton.NewBackButton_C.InitializeWidget
	void ExecuteUbergraph_NewBackButton(int32_t EntryPoint); // Function NewBackButton.NewBackButton_C.ExecuteUbergraph_NewBackButton
	void BackButtonClicked__DelegateSignature(); // Function NewBackButton.NewBackButton_C.BackButtonClicked__DelegateSignature
};

