// WidgetBlueprintGeneratedClass NamePromptTempClone.NamePromptTempClone_C
// Size: 0x518 (Inherited: 0x4e0)
struct UNamePromptTempClone_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UTextBlock* ErrorMessageDisplay; // 0x4e8(0x08)
	struct UImage* Image_144; // 0x4f0(0x08)
	struct UEditableTextBox* PlayerName; // 0x4f8(0x08)
	struct UPopupButton_C* PopupButton_C_371; // 0x500(0x08)
	struct UImage* WarningIcon; // 0x508(0x08)
	struct UPUMG_LoginDataFactory* LoginDataFac; // 0x510(0x08)

	void BndEvt__PlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, char CommitMethod); // Function NamePromptTempClone.NamePromptTempClone_C.BndEvt__PlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
	void BndEvt__PopupButton_C_370_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature(int32_t Index); // Function NamePromptTempClone.NamePromptTempClone_C.BndEvt__PopupButton_C_370_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature
	void HandleErrorMessage(struct FText MessageText); // Function NamePromptTempClone.NamePromptTempClone_C.HandleErrorMessage
	void InitializeWidget(struct APUMG_HUD* HUD); // Function NamePromptTempClone.NamePromptTempClone_C.InitializeWidget
	void ExecuteUbergraph_NamePromptTempClone(int32_t EntryPoint); // Function NamePromptTempClone.NamePromptTempClone_C.ExecuteUbergraph_NamePromptTempClone
};

