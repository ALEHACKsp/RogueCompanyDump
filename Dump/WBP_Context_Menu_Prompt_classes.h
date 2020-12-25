// WidgetBlueprintGeneratedClass WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C
// Size: 0x2b8 (Inherited: 0x238)
struct UWBP_Context_Menu_Prompt_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UCanvasPanel* GamepadContainer; // 0x240(0x08)
	struct UTextBlock* GamepadContextText; // 0x248(0x08)
	struct UImage* GamepadIcon; // 0x250(0x08)
	struct UWBP_StandardButton_02_C* KBMButton; // 0x258(0x08)
	struct UTextBlock* KBMButtonText; // 0x260(0x08)
	struct UButton* KBMButtonWrapper; // 0x268(0x08)
	struct UTextBlock* KBMContextText; // 0x270(0x08)
	struct UWBP_StandardButton_02_C* KBMWithKeyButton; // 0x278(0x08)
	struct UButton* KBMWithKeyWrapper; // 0x280(0x08)
	struct UTextBlock* KeyText; // 0x288(0x08)
	struct UContextActionData* Data; // 0x290(0x08)
	char CurrentInputState; // 0x298(0x01)
	char UnknownData_299[0x7]; // 0x299(0x07)
	struct FMulticastInlineDelegate OnPromptClicked; // 0x2a0(0x10)
	struct UAkAudioEvent* IsBackBtnOverrideSFX; // 0x2b0(0x08)

	void SetInputState(char InputState); // Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.SetInputState
	void Populate(); // Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.Populate
	void PreConstruct(bool IsDesignTime); // Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.PreConstruct
	void Construct(); // Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.Construct
	void BndEvt__WBP_StandardButton_02_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct UWidget* Widget); // Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__WBP_StandardButton_02_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	void BndEvt__WBP_StandardButton_02_C_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(struct UWidget* Widget); // Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__WBP_StandardButton_02_C_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	void ExecuteUbergraph_WBP_Context_Menu_Prompt(int32_t EntryPoint); // Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.ExecuteUbergraph_WBP_Context_Menu_Prompt
	void OnPromptClicked__DelegateSignature(); // Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.OnPromptClicked__DelegateSignature
};

