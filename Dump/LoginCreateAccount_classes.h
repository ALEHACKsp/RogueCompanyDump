// WidgetBlueprintGeneratedClass LoginCreateAccount.LoginCreateAccount_C
// Size: 0x5c0 (Inherited: 0x4e0)
struct ULoginCreateAccount_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UPopupButton_C* BackButton; // 0x4e8(0x08)
	struct UImage* bkg; // 0x4f0(0x08)
	struct UCheckbox_C* CheckBox; // 0x4f8(0x08)
	struct UWBP_error_report_C* CheckboxError; // 0x500(0x08)
	struct UOutlineContainer_C* EmailContainer; // 0x508(0x08)
	struct UWBP_error_report_C* EmailError; // 0x510(0x08)
	struct UEditableText* EmailField; // 0x518(0x08)
	struct UImage* highlightborder; // 0x520(0x08)
	struct UImage* Image_531; // 0x528(0x08)
	struct UImage* Image_607; // 0x530(0x08)
	struct UTextBlock* LoginPrompt; // 0x538(0x08)
	struct UOutlineContainer_C* PasswordContainer; // 0x540(0x08)
	struct UWBP_error_report_C* PasswordError; // 0x548(0x08)
	struct UEditableText* PasswordField; // 0x550(0x08)
	struct UTextBlock* PasswordMismatchText; // 0x558(0x08)
	struct UOutlineContainer_C* RepeatPasswordContainer; // 0x560(0x08)
	struct UWBP_error_report_C* RepeatPasswordError; // 0x568(0x08)
	struct UEditableText* RepeatPasswordField; // 0x570(0x08)
	struct UPopupButton_C* SubmitButton; // 0x578(0x08)
	struct UImage* TitleLogo; // 0x580(0x08)
	struct UOutlineContainer_C* UsernameContainer; // 0x588(0x08)
	struct UWBP_error_report_C* UsernameError; // 0x590(0x08)
	struct UEditableText* UsernameField; // 0x598(0x08)
	struct UImage* WarningIcon; // 0x5a0(0x08)
	struct UTextBlock* WarningText; // 0x5a8(0x08)
	struct UWBP_check_box_C* WBP_check_box; // 0x5b0(0x08)
	struct UWBP_text_button_C* WBP_text_button; // 0x5b8(0x08)

	void InitializeWidget(struct APUMG_HUD* HUD); // Function LoginCreateAccount.LoginCreateAccount_C.InitializeWidget
	void Handle Text Committed(struct FText Text, char CommitMethod); // Function LoginCreateAccount.LoginCreateAccount_C.Handle Text Committed
	void BndEvt__NextButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(struct UWidget* Widget); // Function LoginCreateAccount.LoginCreateAccount_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	void Handle Text Changed(struct FText Text); // Function LoginCreateAccount.LoginCreateAccount_C.Handle Text Changed
	void InitializeWidgetNavigation(); // Function LoginCreateAccount.LoginCreateAccount_C.InitializeWidgetNavigation
	void Handle Login Error(struct FText MessageText); // Function LoginCreateAccount.LoginCreateAccount_C.Handle Login Error
	void Submit New Account(); // Function LoginCreateAccount.LoginCreateAccount_C.Submit New Account
	void Handle Checkbox Changed(bool Checked); // Function LoginCreateAccount.LoginCreateAccount_C.Handle Checkbox Changed
	void OnShown(); // Function LoginCreateAccount.LoginCreateAccount_C.OnShown
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int32_t Index); // Function LoginCreateAccount.LoginCreateAccount_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void Gamepad Select Email(); // Function LoginCreateAccount.LoginCreateAccount_C.Gamepad Select Email
	void Gamepad Select Repeat Password(); // Function LoginCreateAccount.LoginCreateAccount_C.Gamepad Select Repeat Password
	void Gamepad Select Password(); // Function LoginCreateAccount.LoginCreateAccount_C.Gamepad Select Password
	void Gamepad Select Username(); // Function LoginCreateAccount.LoginCreateAccount_C.Gamepad Select Username
	void ExecuteUbergraph_LoginCreateAccount(int32_t EntryPoint); // Function LoginCreateAccount.LoginCreateAccount_C.ExecuteUbergraph_LoginCreateAccount
};

