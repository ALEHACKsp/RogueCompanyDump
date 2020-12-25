// WidgetBlueprintGeneratedClass WBP_RedeemCodeField.WBP_RedeemCodeField_C
// Size: 0x510 (Inherited: 0x4e0)
struct UWBP_RedeemCodeField_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UEditableTextBox* CodeEntry; // 0x4e8(0x08)
	struct FMulticastInlineDelegate OnTextChanged; // 0x4f0(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x500(0x10)

	void SetText(struct FText Text); // Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.SetText
	void GetText(struct FText NewParam); // Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.GetText
	bool NavigateConfirm(); // Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.NavigateConfirm
	void Set Up Keyboard Focus(); // Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.Set Up Keyboard Focus
	void BndEvt__CodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.BndEvt__CodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
	void BndEvt__CodeEntry_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, char CommitMethod); // Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.BndEvt__CodeEntry_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
	void ExecuteUbergraph_WBP_RedeemCodeField(int32_t EntryPoint); // Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.ExecuteUbergraph_WBP_RedeemCodeField
	void OnTextCommitted__DelegateSignature(struct FText Text, char CommitMethod); // Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.OnTextCommitted__DelegateSignature
	void OnTextChanged__DelegateSignature(struct FText Text); // Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.OnTextChanged__DelegateSignature
};

