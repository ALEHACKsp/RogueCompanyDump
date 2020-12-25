// WidgetBlueprintGeneratedClass LoginTwoFactor.LoginTwoFactor_C
// Size: 0x538 (Inherited: 0x4e0)
struct ULoginTwoFactor_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UStandardButton_C* BackButton; // 0x4e8(0x08)
	struct UImage* Bg; // 0x4f0(0x08)
	struct UEditableText* CodeField; // 0x4f8(0x08)
	struct UStandardButton_C* NextButton; // 0x500(0x08)
	struct UWidgetSwitcher* NextSwitcher; // 0x508(0x08)
	struct UOutlineContainer_C* OutlineContainer; // 0x510(0x08)
	struct UImage* TitleLogo_2; // 0x518(0x08)
	struct UImage* WarningIcon; // 0x520(0x08)
	struct UTextBlock* WarningText; // 0x528(0x08)
	struct UWBP_ModalPopupContainer_C* WBP_ModalPopupContainer; // 0x530(0x08)

	void InitializeWidget(struct APUMG_HUD* HUD); // Function LoginTwoFactor.LoginTwoFactor_C.InitializeWidget
	void Handle Text Committed(struct FText Text, char CommitMethod); // Function LoginTwoFactor.LoginTwoFactor_C.Handle Text Committed
	void BndEvt__NextButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(struct UWidget* Widget); // Function LoginTwoFactor.LoginTwoFactor_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	void Handle Text Changed(struct FText Text); // Function LoginTwoFactor.LoginTwoFactor_C.Handle Text Changed
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature(struct UWidget* Widget); // Function LoginTwoFactor.LoginTwoFactor_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature
	void Submit Code(); // Function LoginTwoFactor.LoginTwoFactor_C.Submit Code
	void InitializeWidgetNavigation(); // Function LoginTwoFactor.LoginTwoFactor_C.InitializeWidgetNavigation
	void Handle CodeField Gamepad Confirm(); // Function LoginTwoFactor.LoginTwoFactor_C.Handle CodeField Gamepad Confirm
	void Handle Login Error(struct FText MessageText); // Function LoginTwoFactor.LoginTwoFactor_C.Handle Login Error
	void ExecuteUbergraph_LoginTwoFactor(int32_t EntryPoint); // Function LoginTwoFactor.LoginTwoFactor_C.ExecuteUbergraph_LoginTwoFactor
};

