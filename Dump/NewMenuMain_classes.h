// WidgetBlueprintGeneratedClass NewMenuMain.NewMenuMain_C
// Size: 0x548 (Inherited: 0x4e0)
struct UNewMenuMain_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* Hover; // 0x4e8(0x08)
	struct UImage* btnStroke1px_2; // 0x4f0(0x08)
	struct UOverlay* Button; // 0x4f8(0x08)
	struct UImage* GamepadCallout; // 0x500(0x08)
	struct USizeBox* GamepadCalloutWrapper; // 0x508(0x08)
	struct UButton* HitTarget; // 0x510(0x08)
	struct UImage* Icon; // 0x518(0x08)
	struct UImage* SelectionFrame; // 0x520(0x08)
	struct FName LastRoute; // 0x528(0x08)
	struct FName CurrentRoute; // 0x530(0x08)
	struct UAkAudioEvent* HoveredNewMenuMainSFX; // 0x538(0x08)
	struct UAkAudioEvent* ClickNewMenuMainSFX; // 0x540(0x08)

	void SetupGamepadCallout(); // Function NewMenuMain.NewMenuMain_C.SetupGamepadCallout
	void HandleInputStateChanged(char InputState); // Function NewMenuMain.NewMenuMain_C.HandleInputStateChanged
	void StartHideAnim(); // Function NewMenuMain.NewMenuMain_C.StartHideAnim
	void HideMenuButtonFinished(); // Function NewMenuMain.NewMenuMain_C.HideMenuButtonFinished
	void InitializeWidget(struct APUMG_HUD* HUD); // Function NewMenuMain.NewMenuMain_C.InitializeWidget
	void InitializeWidgetNavigation(); // Function NewMenuMain.NewMenuMain_C.InitializeWidgetNavigation
	void Construct(); // Function NewMenuMain.NewMenuMain_C.Construct
	void InitHideAnimation(); // Function NewMenuMain.NewMenuMain_C.InitHideAnimation
	void OpenStartMenu(); // Function NewMenuMain.NewMenuMain_C.OpenStartMenu
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function NewMenuMain.NewMenuMain_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function NewMenuMain.NewMenuMain_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function NewMenuMain.NewMenuMain_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	void StartShowAnim(); // Function NewMenuMain.NewMenuMain_C.StartShowAnim
	void InitializeTickAnimations(); // Function NewMenuMain.NewMenuMain_C.InitializeTickAnimations
	void ShowMenuButtonFinished(); // Function NewMenuMain.NewMenuMain_C.ShowMenuButtonFinished
	void HideMenuButtonAnim(float ElapsedTime, float ElapsedAlpha); // Function NewMenuMain.NewMenuMain_C.HideMenuButtonAnim
	void ShowMenuButtonAnim(float ElapsedTime, float ElapsedAlpha); // Function NewMenuMain.NewMenuMain_C.ShowMenuButtonAnim
	void ExecuteUbergraph_NewMenuMain(int32_t EntryPoint); // Function NewMenuMain.NewMenuMain_C.ExecuteUbergraph_NewMenuMain
};

