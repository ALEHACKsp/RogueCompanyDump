// WidgetBlueprintGeneratedClass LoggedInInventoryCheck.LoggedInInventoryCheck_C
// Size: 0x530 (Inherited: 0x4f0)
struct ULoggedInInventoryCheck_C : public UKSLoginInventoryCheck {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f0(0x08)
	struct UImage* background; // 0x4f8(0x08)
	struct UWBP_StandardButtonMedium_C* DisconnectButton; // 0x500(0x08)
	struct UGamepadPromptBasic_C* DisconnectPrompt; // 0x508(0x08)
	struct UProgressBar* LoadingBar; // 0x510(0x08)
	struct UWidgetSwitcher* PromptSwitcher; // 0x518(0x08)
	struct UWBP_ThrobberShield_C* WBP_ThrobberShield; // 0x520(0x08)
	float CurrentProgress; // 0x528(0x04)
	float CurrentSeconds; // 0x52c(0x04)

	void OnInputStateChanged(char InputState); // Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.OnInputStateChanged
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.OnKeyUp
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.Tick
	void Construct(); // Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.Construct
	void PreConstruct(bool IsDesignTime); // Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.PreConstruct
	void OpenGate(); // Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.OpenGate
	void CloseGate(); // Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.CloseGate
	void OnShown(); // Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.OnShown
	void InitializeWidget(struct APUMG_HUD* HUD); // Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.InitializeWidget
	void BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWidget* Widget); // Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void InitializeWidgetNavigation(); // Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.InitializeWidgetNavigation
	void ExecuteUbergraph_LoggedInInventoryCheck(int32_t EntryPoint); // Function LoggedInInventoryCheck.LoggedInInventoryCheck_C.ExecuteUbergraph_LoggedInInventoryCheck
};

