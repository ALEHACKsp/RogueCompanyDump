// WidgetBlueprintGeneratedClass WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C
// Size: 0x558 (Inherited: 0x4e0)
struct UWBP_RegionSelect_Entry_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* hoveranim; // 0x4e8(0x08)
	struct UButton* Button; // 0x4f0(0x08)
	struct UImage* HoverImage; // 0x4f8(0x08)
	struct UImage* Image_1; // 0x500(0x08)
	struct UImage* PreferredSiteIcon; // 0x508(0x08)
	struct UTextBlock* RegionName; // 0x510(0x08)
	int32_t SiteId; // 0x518(0x04)
	char UnknownData_51C[0x4]; // 0x51c(0x04)
	struct FText SiteName; // 0x520(0x18)
	struct FMulticastInlineDelegate OnRegionSelected; // 0x538(0x10)
	struct UAkAudioEvent* HoverRegionSelectEntrySFX; // 0x548(0x08)
	struct UAkAudioEvent* ClickRegionSelectEntrySFX; // 0x550(0x08)

	void ShowPreferredSiteIcon(bool IsPreferredSite); // Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.ShowPreferredSiteIcon
	bool NavigateConfirm(); // Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.NavigateConfirm
	void PreConstruct(bool IsDesignTime); // Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.PreConstruct
	void Construct(); // Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.Construct
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	void GamepadHover(); // Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.GamepadHover
	void GamepadUnhover(); // Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.GamepadUnhover
	void OnGamepadConfirm(); // Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.OnGamepadConfirm
	void ExecuteUbergraph_WBP_RegionSelect_Entry(int32_t EntryPoint); // Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.ExecuteUbergraph_WBP_RegionSelect_Entry
	void OnRegionSelected__DelegateSignature(); // Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.OnRegionSelected__DelegateSignature
};

