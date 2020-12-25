// WidgetBlueprintGeneratedClass WBP_ModalPopupContainer.WBP_ModalPopupContainer_C
// Size: 0x530 (Inherited: 0x4e0)
struct UWBP_ModalPopupContainer_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UButton* CloseButton; // 0x4e8(0x08)
	struct UImage* Image_53; // 0x4f0(0x08)
	struct UImage* Image_197; // 0x4f8(0x08)
	struct UNamedSlot* PopupContent; // 0x500(0x08)
	bool useCloseButton; // 0x508(0x01)
	char UnknownData_509[0x7]; // 0x509(0x07)
	struct FMulticastInlineDelegate CloseButtonClicked; // 0x510(0x10)
	struct UAkAudioEvent* ClickCloseBtnModalPopupContainerSFX; // 0x520(0x08)
	struct UAkAudioEvent* HoverCloseBtnModalPopupContainerSFX; // 0x528(0x08)

	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ModalPopupContainer.WBP_ModalPopupContainer_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ModalPopupContainer.WBP_ModalPopupContainer_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function WBP_ModalPopupContainer.WBP_ModalPopupContainer_C.PreConstruct
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_ModalPopupContainer.WBP_ModalPopupContainer_C.InitializeWidget
	void Handle Input State Changed(char InputState); // Function WBP_ModalPopupContainer.WBP_ModalPopupContainer_C.Handle Input State Changed
	void ExecuteUbergraph_WBP_ModalPopupContainer(int32_t EntryPoint); // Function WBP_ModalPopupContainer.WBP_ModalPopupContainer_C.ExecuteUbergraph_WBP_ModalPopupContainer
	void CloseButtonClicked__DelegateSignature(); // Function WBP_ModalPopupContainer.WBP_ModalPopupContainer_C.CloseButtonClicked__DelegateSignature
};

