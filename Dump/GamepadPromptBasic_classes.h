// WidgetBlueprintGeneratedClass GamepadPromptBasic.GamepadPromptBasic_C
// Size: 0x281 (Inherited: 0x238)
struct UGamepadPromptBasic_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UTextBlock* ActionText; // 0x240(0x08)
	struct UImage* ButtonIcon; // 0x248(0x08)
	struct FButtonPromptData Data; // 0x250(0x30)
	bool IsSet; // 0x280(0x01)

	void SetPrompt(struct FButtonPromptData Data); // Function GamepadPromptBasic.GamepadPromptBasic_C.SetPrompt
	void Populate(); // Function GamepadPromptBasic.GamepadPromptBasic_C.Populate
	void Construct(); // Function GamepadPromptBasic.GamepadPromptBasic_C.Construct
	void ExecuteUbergraph_GamepadPromptBasic(int32_t EntryPoint); // Function GamepadPromptBasic.GamepadPromptBasic_C.ExecuteUbergraph_GamepadPromptBasic
};

