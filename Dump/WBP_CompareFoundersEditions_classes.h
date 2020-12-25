// WidgetBlueprintGeneratedClass WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C
// Size: 0x548 (Inherited: 0x4e0)
struct UWBP_CompareFoundersEditions_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* OnShow; // 0x4e8(0x08)
	struct UWBP_StandardButton_02_C* ConfirmButton; // 0x4f0(0x08)
	struct UImage* Image; // 0x4f8(0x08)
	struct UImage* Image_2; // 0x500(0x08)
	struct UImage* Image_3; // 0x508(0x08)
	struct UImage* Image_4; // 0x510(0x08)
	struct UImage* Image_156; // 0x518(0x08)
	struct UImage* Image_525; // 0x520(0x08)
	struct UImage* Image_947; // 0x528(0x08)
	struct UImage* Image_1104; // 0x530(0x08)
	struct UWBP_ModalPopupContainer_C* PopupContainer; // 0x538(0x08)
	struct UImage* RBIcon_2; // 0x540(0x08)

	void OnClickedOtherClosed(struct UWidget* Widget); // Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.OnClickedOtherClosed
	bool NavigateBack(); // Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.NavigateBack
	void OnCloseClicked(); // Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.OnCloseClicked
	void OnShown(); // Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.OnShown
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.InitializeWidget
	void InitializeWidgetNavigation(); // Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.InitializeWidgetNavigation
	void ExecuteUbergraph_WBP_CompareFoundersEditions(int32_t EntryPoint); // Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.ExecuteUbergraph_WBP_CompareFoundersEditions
};

