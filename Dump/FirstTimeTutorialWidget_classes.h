// WidgetBlueprintGeneratedClass FirstTimeTutorialWidget.FirstTimeTutorialWidget_C
// Size: 0x4f0 (Inherited: 0x4a0)
struct UFirstTimeTutorialWidget_C : public UPUMG_Widget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a0(0x08)
	struct UWidgetAnimation* Show; // 0x4a8(0x08)
	struct UImage* Blocker; // 0x4b0(0x08)
	struct UImage* Decro; // 0x4b8(0x08)
	struct UImage* Image_134; // 0x4c0(0x08)
	struct UTextBlock* TextBlock_295; // 0x4c8(0x08)
	struct UWBP_ModalPopupContainer_C* WBP_ModalPopupContainer; // 0x4d0(0x08)
	struct UWBP_StandardButtonLarge_C* WBP_StandardButtonLarge; // 0x4d8(0x08)
	struct UWBP_StandardButtonMedium_C* WBP_StandardButtonMedium; // 0x4e0(0x08)
	struct UAkAudioEvent* ShowTutorialWidgetSFX; // 0x4e8(0x08)

	void InitializeWidgetNavigation(); // Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.InitializeWidgetNavigation
	void OnShown(); // Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.OnShown
	void PreConstruct(bool IsDesignTime); // Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.PreConstruct
	void BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWidget* Widget); // Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(struct UWidget* Widget); // Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	void BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_9_CloseButtonClicked__DelegateSignature(); // Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_9_CloseButtonClicked__DelegateSignature
	void OnHide(); // Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.OnHide
	void ExecuteUbergraph_FirstTimeTutorialWidget(int32_t EntryPoint); // Function FirstTimeTutorialWidget.FirstTimeTutorialWidget_C.ExecuteUbergraph_FirstTimeTutorialWidget
};

