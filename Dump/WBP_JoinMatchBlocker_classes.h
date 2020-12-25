// WidgetBlueprintGeneratedClass WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C
// Size: 0x510 (Inherited: 0x4e0)
struct UWBP_JoinMatchBlocker_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* OnShow; // 0x4e8(0x08)
	struct UImage* BlockerBkg; // 0x4f0(0x08)
	struct UCanvasPanel* MainWrapper; // 0x4f8(0x08)
	struct UWBP_ThrobberShield_C* WBP_LoadingThrobber; // 0x500(0x08)
	struct UWBP_ModalPopupContainer_C* WBP_ModalPopupContainer; // 0x508(0x08)

	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.OnKeyUp
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.OnKeyDown
	void InitializeWidgetNavigation(); // Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.InitializeWidgetNavigation
	void StartShowSequence(struct FName FromRoute, struct FName ToRoute); // Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.StartShowSequence
	void StartHideSequence(struct FName FromRoute, struct FName ToRoute); // Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.StartHideSequence
	void OnInitialized(); // Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.OnInitialized
	void OnShowAnimFinish(); // Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.OnShowAnimFinish
	void OnShowAnimStart(); // Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.OnShowAnimStart
	void ExecuteUbergraph_WBP_JoinMatchBlocker(int32_t EntryPoint); // Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.ExecuteUbergraph_WBP_JoinMatchBlocker
};

