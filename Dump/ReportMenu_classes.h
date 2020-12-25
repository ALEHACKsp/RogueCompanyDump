// WidgetBlueprintGeneratedClass ReportMenu.ReportMenu_C
// Size: 0x5f9 (Inherited: 0x4e0)
struct UReportMenu_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWBP_ButtonStacked_C* CheatingButton; // 0x4e8(0x08)
	struct UWBP_ReportMenuCommentField_C* CommentField; // 0x4f0(0x08)
	struct UImage* DarkBanner; // 0x4f8(0x08)
	struct UWBP_ButtonStacked_C* HarassmentButton; // 0x500(0x08)
	struct UWBP_ButtonStacked_C* IntentionalFeedingButton; // 0x508(0x08)
	struct UWBP_ButtonStacked_C* LeavingButton; // 0x510(0x08)
	struct UTextBlock* MuteText; // 0x518(0x08)
	struct UTextBlock* MuteText_2; // 0x520(0x08)
	struct UTextBlock* MuteText_3; // 0x528(0x08)
	struct UTextBlock* MuteText_4; // 0x530(0x08)
	struct UTextBlock* MuteText_5; // 0x538(0x08)
	struct UTextBlock* MuteText_6; // 0x540(0x08)
	struct UWBP_ButtonStacked_C* OtherButton; // 0x548(0x08)
	struct UTextBlock* ReasonLabelSelected; // 0x550(0x08)
	struct UWidgetSwitcher* ReasonLabelSwitcher; // 0x558(0x08)
	struct UWBP_ButtonStacked_C* StreamSnipingButton; // 0x560(0x08)
	struct UWBP_StandardButtonLarge_C* SubmitNew; // 0x568(0x08)
	struct UWBP_Header1_C* WBP_Header1; // 0x570(0x08)
	struct UWBP_ModalPopupContainer_C* WBP_ModalPopupContainer; // 0x578(0x08)
	struct FMulticastInlineDelegate OnCloseTabScreen; // 0x580(0x10)
	struct FMulticastInlineDelegate OnPlayerReported; // 0x590(0x10)
	struct FReportPlayerParams CachedReport; // 0x5a0(0x48)
	struct FMulticastInlineDelegate OnTabPressed; // 0x5e8(0x10)
	enum class EReportPlayerReason LastSelectedReason; // 0x5f8(0x01)

	void GetNavigationWidgets(struct TArray<struct UPUMG_Widget*> Return Value); // Function ReportMenu.ReportMenu_C.GetNavigationWidgets
	void SelectReason(enum class EReportPlayerReason ReportReason); // Function ReportMenu.ReportMenu_C.SelectReason
	void ReportPlayer(enum class EReportPlayerReason ReportReason); // Function ReportMenu.ReportMenu_C.ReportPlayer
	void OnOpenReportScreen(struct FReportPlayerParams Report); // Function ReportMenu.ReportMenu_C.OnOpenReportScreen
	void InitializeWidget(struct APUMG_HUD* HUD); // Function ReportMenu.ReportMenu_C.InitializeWidget
	void OnShown(); // Function ReportMenu.ReportMenu_C.OnShown
	void OnHide(); // Function ReportMenu.ReportMenu_C.OnHide
	void BndEvt__SubmitNew_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWidget* Widget); // Function ReportMenu.ReportMenu_C.BndEvt__SubmitNew_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void BndEvt__HarassmentButton_K2Node_ComponentBoundEvent_1_OnBtnStackedClicked__DelegateSignature(); // Function ReportMenu.ReportMenu_C.BndEvt__HarassmentButton_K2Node_ComponentBoundEvent_1_OnBtnStackedClicked__DelegateSignature
	void BndEvt__CheatingButton_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature(); // Function ReportMenu.ReportMenu_C.BndEvt__CheatingButton_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature
	void BndEvt__IntentionalFeedingButton_K2Node_ComponentBoundEvent_5_OnBtnStackedClicked__DelegateSignature(); // Function ReportMenu.ReportMenu_C.BndEvt__IntentionalFeedingButton_K2Node_ComponentBoundEvent_5_OnBtnStackedClicked__DelegateSignature
	void BndEvt__StreamSnipingButton_K2Node_ComponentBoundEvent_8_OnBtnStackedClicked__DelegateSignature(); // Function ReportMenu.ReportMenu_C.BndEvt__StreamSnipingButton_K2Node_ComponentBoundEvent_8_OnBtnStackedClicked__DelegateSignature
	void BndEvt__LeavingButton_K2Node_ComponentBoundEvent_12_OnBtnStackedClicked__DelegateSignature(); // Function ReportMenu.ReportMenu_C.BndEvt__LeavingButton_K2Node_ComponentBoundEvent_12_OnBtnStackedClicked__DelegateSignature
	void BndEvt__OtherButton_K2Node_ComponentBoundEvent_16_OnBtnStackedClicked__DelegateSignature(); // Function ReportMenu.ReportMenu_C.BndEvt__OtherButton_K2Node_ComponentBoundEvent_16_OnBtnStackedClicked__DelegateSignature
	void ExecuteUbergraph_ReportMenu(int32_t EntryPoint); // Function ReportMenu.ReportMenu_C.ExecuteUbergraph_ReportMenu
	void OnTabPressed__DelegateSignature(); // Function ReportMenu.ReportMenu_C.OnTabPressed__DelegateSignature
	void OnPlayerReported__DelegateSignature(int64_t PlayerId, bool Success); // Function ReportMenu.ReportMenu_C.OnPlayerReported__DelegateSignature
	void OnCloseTabScreen__DelegateSignature(); // Function ReportMenu.ReportMenu_C.OnCloseTabScreen__DelegateSignature
};

