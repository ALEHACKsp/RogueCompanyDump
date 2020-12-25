// WidgetBlueprintGeneratedClass WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C
// Size: 0x570 (Inherited: 0x4e0)
struct UWBP_WelcomeToRankedPopup_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWBP_RankedIcon_C* Bronze; // 0x4e8(0x08)
	struct UWBP_RankedIcon_C* Diamond; // 0x4f0(0x08)
	struct UWBP_StandardButtonMedium_C* DismissButton; // 0x4f8(0x08)
	struct UWBP_RankedIcon_C* Gold; // 0x500(0x08)
	struct UTextBlock* LevelRogue; // 0x508(0x08)
	struct UTextBlock* LevelsBronze; // 0x510(0x08)
	struct UTextBlock* LevelsDiamond; // 0x518(0x08)
	struct UTextBlock* LevelsGold; // 0x520(0x08)
	struct UTextBlock* LevelsMaster; // 0x528(0x08)
	struct UTextBlock* LevelsPlatinum; // 0x530(0x08)
	struct UTextBlock* LevelsSilver; // 0x538(0x08)
	struct UWBP_RankedIcon_C* Master; // 0x540(0x08)
	struct UWBP_RankedIcon_C* Platinum; // 0x548(0x08)
	struct URichTextBlock* RichTextBlock_80; // 0x550(0x08)
	struct UWBP_RankedIcon_C* Rogue; // 0x558(0x08)
	struct UWBP_RankedIcon_C* Silver; // 0x560(0x08)
	struct UWBP_ModalPopupContainer_C* WBP_ModalPopupContainer; // 0x568(0x08)

	void SetUpRankedDisplay(); // Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.SetUpRankedDisplay
	bool NavigateBack(); // Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.NavigateBack
	void PreConstruct(bool IsDesignTime); // Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.PreConstruct
	void Construct(); // Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.Construct
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.InitializeWidget
	void BndEvt__DismissButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWidget* Widget); // Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.BndEvt__DismissButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void InitializeWidgetNavigation(); // Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.InitializeWidgetNavigation
	void OnClose(); // Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.OnClose
	void ExecuteUbergraph_WBP_WelcomeToRankedPopup(int32_t EntryPoint); // Function WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C.ExecuteUbergraph_WBP_WelcomeToRankedPopup
};

