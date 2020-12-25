// WidgetBlueprintGeneratedClass LoginEula.LoginEula_C
// Size: 0x5b0 (Inherited: 0x4e0)
struct ULoginEula_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UImage* ArrowDown; // 0x4e8(0x08)
	struct UImage* ArrowUp; // 0x4f0(0x08)
	struct UImage* bkg; // 0x4f8(0x08)
	struct UCheckbox_C* CheckBox; // 0x500(0x08)
	struct UWBP_error_report_C* Checkboxerrorreport; // 0x508(0x08)
	struct UImage* Divider; // 0x510(0x08)
	struct UImage* EulaBg; // 0x518(0x08)
	struct UScrollBox* EulaContainer; // 0x520(0x08)
	struct UTextBlock* EulaText; // 0x528(0x08)
	struct UPopupButton_C* FormBackButton; // 0x530(0x08)
	struct UPopupButton_C* FormNextButton; // 0x538(0x08)
	struct UImage* highlight_stroke; // 0x540(0x08)
	struct UImage* highlightstroke; // 0x548(0x08)
	struct UImage* Image_295; // 0x550(0x08)
	struct UImage* Image_297; // 0x558(0x08)
	struct UInvalidationBox* InvalidationBox_1; // 0x560(0x08)
	struct UWidgetSwitcher* NextSwitcher; // 0x568(0x08)
	struct UImage* ScrollCalloutDown; // 0x570(0x08)
	struct UWidgetSwitcher* ScrollCalloutSwitcher; // 0x578(0x08)
	struct UImage* ScrollCalloutUp; // 0x580(0x08)
	struct UImage* StudioLogo; // 0x588(0x08)
	struct UImage* TitleLogo; // 0x590(0x08)
	struct UVerticalBox* VerticalBox_1; // 0x598(0x08)
	struct UWBP_check_box_C* WBP_check_box; // 0x5a0(0x08)
	struct FTimerHandle CalloutTimer; // 0x5a8(0x08)

	void ShowArrows(float Value, float MaxValue); // Function LoginEula.LoginEula_C.ShowArrows
	void ChangeFontSizeText(); // Function LoginEula.LoginEula_C.ChangeFontSizeText
	void HandleCalloutSwitcher(); // Function LoginEula.LoginEula_C.HandleCalloutSwitcher
	void Construct(); // Function LoginEula.LoginEula_C.Construct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function LoginEula.LoginEula_C.Tick
	void InitializeWidget(struct APUMG_HUD* HUD); // Function LoginEula.LoginEula_C.InitializeWidget
	void InitializeWidgetNavigation(); // Function LoginEula.LoginEula_C.InitializeWidgetNavigation
	void InitializeWidgetButtonListeners(); // Function LoginEula.LoginEula_C.InitializeWidgetButtonListeners
	void ScrollUpPressed(); // Function LoginEula.LoginEula_C.ScrollUpPressed
	void ScrollDownPressed(); // Function LoginEula.LoginEula_C.ScrollDownPressed
	void ScrollUpReleased(); // Function LoginEula.LoginEula_C.ScrollUpReleased
	void ScrollDownReleased(); // Function LoginEula.LoginEula_C.ScrollDownReleased
	void Handle Input State Changed(char InputState); // Function LoginEula.LoginEula_C.Handle Input State Changed
	void SetActiveScrollCallout(); // Function LoginEula.LoginEula_C.SetActiveScrollCallout
	void BndEvt__FormBackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(int32_t Index); // Function LoginEula.LoginEula_C.BndEvt__FormBackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void BndEvt__FormNextButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(int32_t Index); // Function LoginEula.LoginEula_C.BndEvt__FormNextButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	void BndEvt__Checkbox_K2Node_ComponentBoundEvent_0_OnCheckChanged__DelegateSignature(bool Checked); // Function LoginEula.LoginEula_C.BndEvt__Checkbox_K2Node_ComponentBoundEvent_0_OnCheckChanged__DelegateSignature
	void Destruct(); // Function LoginEula.LoginEula_C.Destruct
	void OnHide(); // Function LoginEula.LoginEula_C.OnHide
	void OnShown(); // Function LoginEula.LoginEula_C.OnShown
	void ExecuteUbergraph_LoginEula(int32_t EntryPoint); // Function LoginEula.LoginEula_C.ExecuteUbergraph_LoginEula
};

