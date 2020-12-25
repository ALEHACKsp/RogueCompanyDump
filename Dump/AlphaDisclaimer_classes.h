// WidgetBlueprintGeneratedClass AlphaDisclaimer.AlphaDisclaimer_C
// Size: 0x569 (Inherited: 0x4e0)
struct UAlphaDisclaimer_C : public UKSAlphaDisclaimer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UImage* ArrowDown; // 0x4e8(0x08)
	struct UImage* ArrowUp; // 0x4f0(0x08)
	struct UImage* Divider; // 0x4f8(0x08)
	struct UImage* EulaBg; // 0x500(0x08)
	struct UScrollBox* EulaContainer; // 0x508(0x08)
	struct UTextBlock* EulaText; // 0x510(0x08)
	struct UImage* Image_62; // 0x518(0x08)
	struct UWidgetSwitcher* NextSwitcher; // 0x520(0x08)
	struct UPopupButton_C* PopupButton; // 0x528(0x08)
	struct UImage* ScrollCalloutDown; // 0x530(0x08)
	struct UWidgetSwitcher* ScrollCalloutSwitcher; // 0x538(0x08)
	struct UImage* ScrollCalloutUp; // 0x540(0x08)
	struct UImage* StudioLogo; // 0x548(0x08)
	struct UImage* TitleLogo; // 0x550(0x08)
	struct UVerticalBox* VerticalBox_1; // 0x558(0x08)
	struct FTimerHandle CalloutTimer; // 0x560(0x08)
	bool CalloutHidden; // 0x568(0x01)

	void HideScrollCallout(); // Function AlphaDisclaimer.AlphaDisclaimer_C.HideScrollCallout
	void ShowArrows(float Value, float MaxValue); // Function AlphaDisclaimer.AlphaDisclaimer_C.ShowArrows
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function AlphaDisclaimer.AlphaDisclaimer_C.Tick
	void InitializeWidget(struct APUMG_HUD* HUD); // Function AlphaDisclaimer.AlphaDisclaimer_C.InitializeWidget
	void InitializeWidgetNavigation(); // Function AlphaDisclaimer.AlphaDisclaimer_C.InitializeWidgetNavigation
	void InitializeWidgetButtonListeners(); // Function AlphaDisclaimer.AlphaDisclaimer_C.InitializeWidgetButtonListeners
	void ScrollUpPressed(); // Function AlphaDisclaimer.AlphaDisclaimer_C.ScrollUpPressed
	void ScrollDownPressed(); // Function AlphaDisclaimer.AlphaDisclaimer_C.ScrollDownPressed
	void ScrollUpReleased(); // Function AlphaDisclaimer.AlphaDisclaimer_C.ScrollUpReleased
	void ScrollDownReleased(); // Function AlphaDisclaimer.AlphaDisclaimer_C.ScrollDownReleased
	void Handle Input State Changed(char InputState); // Function AlphaDisclaimer.AlphaDisclaimer_C.Handle Input State Changed
	void CalloutTimerFunction(); // Function AlphaDisclaimer.AlphaDisclaimer_C.CalloutTimerFunction
	void BndEvt__PopupButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int32_t Index); // Function AlphaDisclaimer.AlphaDisclaimer_C.BndEvt__PopupButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void OnHide(); // Function AlphaDisclaimer.AlphaDisclaimer_C.OnHide
	void OnShown(); // Function AlphaDisclaimer.AlphaDisclaimer_C.OnShown
	void Destruct(); // Function AlphaDisclaimer.AlphaDisclaimer_C.Destruct
	void ExecuteUbergraph_AlphaDisclaimer(int32_t EntryPoint); // Function AlphaDisclaimer.AlphaDisclaimer_C.ExecuteUbergraph_AlphaDisclaimer
};

