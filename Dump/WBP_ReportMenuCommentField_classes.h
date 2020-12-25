// WidgetBlueprintGeneratedClass WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C
// Size: 0x510 (Inherited: 0x4e0)
struct UWBP_ReportMenuCommentField_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* Hover; // 0x4e8(0x08)
	struct UImage* bg_fill; // 0x4f0(0x08)
	struct UImage* bg_stroke; // 0x4f8(0x08)
	struct UMultiLineEditableText* EditableText; // 0x500(0x08)
	struct UAkAudioEvent* HoverReportMenuCommentFieldSFX; // 0x508(0x08)

	bool NavigateConfirm(); // Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.NavigateConfirm
	void ClearText(); // Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.ClearText
	void GetText(struct FText Return Value); // Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.GetText
	void GamepadHover(); // Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.GamepadHover
	void GamepadUnhover(); // Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.GamepadUnhover
	void ExecuteUbergraph_WBP_ReportMenuCommentField(int32_t EntryPoint); // Function WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C.ExecuteUbergraph_WBP_ReportMenuCommentField
};

