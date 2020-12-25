// WidgetBlueprintGeneratedClass WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C
// Size: 0x4f8 (Inherited: 0x4e0)
struct UWBP_RegionSelectRedirect_C : public UKSRegionSelectModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWBP_RegionSelect_C* WBP_RegionSelect; // 0x4e8(0x08)
	struct UAkAudioEvent* ShowSFX; // 0x4f0(0x08)

	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.InitializeWidget
	void Handle Region Selected(); // Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.Handle Region Selected
	void Handle Region Select Entries Created(); // Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.Handle Region Select Entries Created
	void InitializeWidgetNavigation(); // Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.InitializeWidgetNavigation
	void OnShown(); // Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.OnShown
	void ExecuteUbergraph_WBP_RegionSelectRedirect(int32_t EntryPoint); // Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.ExecuteUbergraph_WBP_RegionSelectRedirect
};

