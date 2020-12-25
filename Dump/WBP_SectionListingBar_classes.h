// WidgetBlueprintGeneratedClass WBP_SectionListingBar.WBP_SectionListingBar_C
// Size: 0x520 (Inherited: 0x4e0)
struct UWBP_SectionListingBar_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UKSAsyncImage* LeftGamepadTrigger; // 0x4e8(0x08)
	struct UKSAsyncImage* RightGamepadTrigger; // 0x4f0(0x08)
	struct UHorizontalBox* SectionButtons; // 0x4f8(0x08)
	struct UOverlay* TriggerContainer; // 0x500(0x08)
	struct UOverlay* TriggerContainer1; // 0x508(0x08)
	struct FMulticastInlineDelegate OnSectionSelected; // 0x510(0x10)

	void SetActiveButton(int32_t ActiveIndex); // Function WBP_SectionListingBar.WBP_SectionListingBar_C.SetActiveButton
	void OnInputStateChanged(char InputState); // Function WBP_SectionListingBar.WBP_SectionListingBar_C.OnInputStateChanged
	void OnSectionButton(int32_t Index); // Function WBP_SectionListingBar.WBP_SectionListingBar_C.OnSectionButton
	void SetSections(struct TArray<struct UKSStoreSection*> Sections); // Function WBP_SectionListingBar.WBP_SectionListingBar_C.SetSections
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_SectionListingBar.WBP_SectionListingBar_C.InitializeWidget
	void ExecuteUbergraph_WBP_SectionListingBar(int32_t EntryPoint); // Function WBP_SectionListingBar.WBP_SectionListingBar_C.ExecuteUbergraph_WBP_SectionListingBar
	void OnSectionSelected__DelegateSignature(int32_t Index); // Function WBP_SectionListingBar.WBP_SectionListingBar_C.OnSectionSelected__DelegateSignature
};

