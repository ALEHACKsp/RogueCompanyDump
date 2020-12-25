// WidgetBlueprintGeneratedClass WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C
// Size: 0x530 (Inherited: 0x4e0)
struct UWBP_QueueSelection_RegionSelectButton_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UImage* Image_229; // 0x4e8(0x08)
	struct UImage* PromptImage; // 0x4f0(0x08)
	struct USizeBox* PromptImageWrapper; // 0x4f8(0x08)
	struct UTextBlock* SelectedRegion; // 0x500(0x08)
	struct UWBP_StandardButtonMedium_C* WBP_StandardButtonMedium; // 0x508(0x08)
	struct FMulticastInlineDelegate RegionSelectRequested; // 0x510(0x10)
	bool ActiveAsButton; // 0x520(0x01)
	char CachedInputState; // 0x521(0x01)
	char UnknownData_522[0x6]; // 0x522(0x06)
	struct UAkAudioEvent* ClickInputChangeRegionSelBtnSFX; // 0x528(0x08)

	void HandleInputStateChange(char NewInputState); // Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.HandleInputStateChange
	void SetupPromptImageHandling(); // Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.SetupPromptImageHandling
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.InitializeWidget
	void Update Region(); // Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.Update Region
	void OnHide(); // Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.OnHide
	void LoginState(enum class EPUMG_LoginState LoginState); // Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.LoginState
	void EnableAsButton(); // Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.EnableAsButton
	void DisableAsButton(); // Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.DisableAsButton
	void UpdateCrossplay(); // Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.UpdateCrossplay
	void BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWidget* Widget); // Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.PreConstruct
	void ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton(int32_t EntryPoint); // Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton
	void RegionSelectRequested__DelegateSignature(); // Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.RegionSelectRequested__DelegateSignature
};

