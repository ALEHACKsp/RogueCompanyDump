// WidgetBlueprintGeneratedClass WBP_Social_Search_bar.WBP_Social_Search_bar_C
// Size: 0x560 (Inherited: 0x4e0)
struct UWBP_Social_Search_bar_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* Hover; // 0x4e8(0x08)
	struct UImage* background; // 0x4f0(0x08)
	struct UImage* BottomBorder; // 0x4f8(0x08)
	struct UKSEditableTextBox* InputText; // 0x500(0x08)
	struct UImage* LeftBorder; // 0x508(0x08)
	struct UImage* RightBorder; // 0x510(0x08)
	struct UWBP_StandardButtonInner_C* SubmitButton; // 0x518(0x08)
	struct UImage* TopBorder; // 0x520(0x08)
	struct FMulticastInlineDelegate OnSearchTermChange; // 0x528(0x10)
	bool TextIsDirty; // 0x538(0x01)
	char UnknownData_539[0x7]; // 0x539(0x07)
	struct FMulticastInlineDelegate OnHovered; // 0x540(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x550(0x10)

	bool NavigateConfirm(); // Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.NavigateConfirm
	void ShowVirtualKeyboard(); // Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.ShowVirtualKeyboard
	void Clear(); // Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.Clear
	void DoSearch(); // Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.DoSearch
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.InitializeWidget
	void UninitializeWidget(); // Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.UninitializeWidget
	void OnSearchTextChange(struct FText Text); // Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.OnSearchTextChange
	void BndEvt__InputText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, char CommitMethod); // Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.BndEvt__InputText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
	void BndEvt__InputText_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.BndEvt__InputText_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
	void BndEvt__SubmitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct UWidget* Widget); // Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.BndEvt__SubmitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	void GamepadHover(); // Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.GamepadHover
	void GamepadUnhover(); // Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.GamepadUnhover
	void ExecuteUbergraph_WBP_Social_Search_bar(int32_t EntryPoint); // Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.ExecuteUbergraph_WBP_Social_Search_bar
	void OnUnhovered__DelegateSignature(); // Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.OnUnhovered__DelegateSignature
	void OnHovered__DelegateSignature(); // Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.OnHovered__DelegateSignature
	void OnSearchTermChange__DelegateSignature(struct FText SearchTerm); // Function WBP_Social_Search_bar.WBP_Social_Search_bar_C.OnSearchTermChange__DelegateSignature
};

