// WidgetBlueprintGeneratedClass NewStartMenu.NewStartMenu_C
// Size: 0x540 (Inherited: 0x4e0)
struct UNewStartMenu_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UVerticalBox* ButtonBox; // 0x4e8(0x08)
	struct UWBP_StandardButton_02_C* ButtonNews; // 0x4f0(0x08)
	struct UWBP_StandardButton_02_C* ButtonQuit; // 0x4f8(0x08)
	struct UWBP_StandardButton_02_C* ButtonSettings; // 0x500(0x08)
	struct UImage* logo; // 0x508(0x08)
	struct UOverlay* MenuContainer; // 0x510(0x08)
	struct UTextBlock* VersionDisplay; // 0x518(0x08)
	struct UWBP_panel_bevel_C* WBP_panel_bevel; // 0x520(0x08)
	struct UWBP_panel_bevel_C* WBP_panel_bevel_C_1; // 0x528(0x08)
	struct FName CachedLastRoute; // 0x530(0x08)
	struct UAkAudioEvent* BackClickNewStartMenuSFX; // 0x538(0x08)

	void Set Version Text(); // Function NewStartMenu.NewStartMenu_C.Set Version Text
	bool NavigateBack(); // Function NewStartMenu.NewStartMenu_C.NavigateBack
	void ShowMenuAnim(float ElapsedTime, float ElapsedAlpha); // Function NewStartMenu.NewStartMenu_C.ShowMenuAnim
	void ShowMenuFinished(); // Function NewStartMenu.NewStartMenu_C.ShowMenuFinished
	void InitHideAnimation(); // Function NewStartMenu.NewStartMenu_C.InitHideAnimation
	void HideMenuFinished(); // Function NewStartMenu.NewStartMenu_C.HideMenuFinished
	void HideMenuAnim(float ElapsedTime, float ElapsedAlpha); // Function NewStartMenu.NewStartMenu_C.HideMenuAnim
	void StartHideAnim(); // Function NewStartMenu.NewStartMenu_C.StartHideAnim
	void InitializeWidget(struct APUMG_HUD* HUD); // Function NewStartMenu.NewStartMenu_C.InitializeWidget
	void InitializeWidgetNavigation(); // Function NewStartMenu.NewStartMenu_C.InitializeWidgetNavigation
	void BackToLastScreen(); // Function NewStartMenu.NewStartMenu_C.BackToLastScreen
	void StartShowSequence(struct FName FromRoute, struct FName ToRoute); // Function NewStartMenu.NewStartMenu_C.StartShowSequence
	void StartHideSequence(struct FName FromRoute, struct FName ToRoute); // Function NewStartMenu.NewStartMenu_C.StartHideSequence
	void InitializeTickAnimations(); // Function NewStartMenu.NewStartMenu_C.InitializeTickAnimations
	void StartShowAnim(); // Function NewStartMenu.NewStartMenu_C.StartShowAnim
	void Construct(); // Function NewStartMenu.NewStartMenu_C.Construct
	void BndEvt__ButtonNews_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWidget* Widget); // Function NewStartMenu.NewStartMenu_C.BndEvt__ButtonNews_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void BndEvt__ButtonQuit_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(struct UWidget* Widget); // Function NewStartMenu.NewStartMenu_C.BndEvt__ButtonQuit_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	void BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(struct UWidget* Widget); // Function NewStartMenu.NewStartMenu_C.BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	void OnBackButton(); // Function NewStartMenu.NewStartMenu_C.OnBackButton
	void ExecuteUbergraph_NewStartMenu(int32_t EntryPoint); // Function NewStartMenu.NewStartMenu_C.ExecuteUbergraph_NewStartMenu
};

