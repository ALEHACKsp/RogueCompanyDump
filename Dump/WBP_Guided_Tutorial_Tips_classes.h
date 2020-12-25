// WidgetBlueprintGeneratedClass WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C
// Size: 0x560 (Inherited: 0x4e0)
struct UWBP_Guided_Tutorial_Tips_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* OnHidden; // 0x4e8(0x08)
	struct UWidgetAnimation* OnShow; // 0x4f0(0x08)
	struct UWidgetAnimation* hover_anim; // 0x4f8(0x08)
	struct UWBP_StandardButtonLarge_C* GotItButton; // 0x500(0x08)
	struct UImage* Image_1; // 0x508(0x08)
	struct UImage* Image_3; // 0x510(0x08)
	struct UWBP_Guided_Tutorial_Card_C* WBP_Guided_Tutorial_Card; // 0x518(0x08)
	struct UWBP_Guided_Tutorial_Card_C* WBP_Guided_Tutorial_Card_2; // 0x520(0x08)
	struct UWBP_Guided_Tutorial_Card_C* WBP_Guided_Tutorial_Card_3; // 0x528(0x08)
	struct UWBP_Header1_C* WBP_Header1; // 0x530(0x08)
	struct UWBP_panel_bevel_C* WBP_panel_bevel; // 0x538(0x08)
	struct UWBP_panel_bevel_C* WBP_panel_bevel_C_1; // 0x540(0x08)
	enum class EPUMG_LoginState LoginState; // 0x548(0x01)
	enum class EConfigPropertyGuidedCalloutScenes CurrentTipScreen; // 0x549(0x01)
	char UnknownData_54A[0x6]; // 0x54a(0x06)
	struct UAkAudioEvent* ShowGuidedTutorialTipsSFX; // 0x550(0x08)
	struct UAkAudioEvent* NavBackGuidedTutorialTipsSFX; // 0x558(0x08)

	bool NavigateBack(); // Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.NavigateBack
	void GuidedTutorialShown(); // Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.GuidedTutorialShown
	void SetTipMode(struct UGuidedMenuCalloutData* CalloutData); // Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.SetTipMode
	void Construct(); // Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.Construct
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.InitializeWidget
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	void HandleCloseHovered(struct UWidget* Widget); // Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.HandleCloseHovered
	void HandleCLoseUnhovered(struct UWidget* Widget); // Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.HandleCLoseUnhovered
	void InitializeWidgetNavigation(); // Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.InitializeWidgetNavigation
	void OnShown(); // Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.OnShown
	void PreConstruct(bool IsDesignTime); // Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.PreConstruct
	void CloseScene(); // Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.CloseScene
	void BndEvt__GotItButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWidget* Widget); // Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.BndEvt__GotItButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void OnBackPrompt(); // Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.OnBackPrompt
	void ExecuteUbergraph_WBP_Guided_Tutorial_Tips(int32_t EntryPoint); // Function WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C.ExecuteUbergraph_WBP_Guided_Tutorial_Tips
};

