// WidgetBlueprintGeneratedClass WBP_ControllerPrompt.WBP_ControllerPrompt_C
// Size: 0x518 (Inherited: 0x4e0)
struct UWBP_ControllerPrompt_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UImage* Prompt; // 0x4e8(0x08)
	char PromptType; // 0x4f0(0x01)
	char UnknownData_4F1[0x3]; // 0x4f1(0x03)
	struct FName ActionName; // 0x4f4(0x08)
	char UnknownData_4FC[0x4]; // 0x4fc(0x04)
	struct FKey Button; // 0x500(0x18)

	void SetButtonPrompt(struct FKey Button); // Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetButtonPrompt
	void SetIsCancel(); // Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetIsCancel
	void SetIsConfirm(); // Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetIsConfirm
	void SetPromptFromButton(struct FKey Button); // Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetPromptFromButton
	void UpdateFromSetValues(); // Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.UpdateFromSetValues
	void SetInputAction(struct FName ActionName); // Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetInputAction
	void PreConstruct(bool IsDesignTime); // Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.PreConstruct
	void Construct(); // Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.Construct
	void ExecuteUbergraph_WBP_ControllerPrompt(int32_t EntryPoint); // Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.ExecuteUbergraph_WBP_ControllerPrompt
};

