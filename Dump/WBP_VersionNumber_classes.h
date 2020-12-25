// WidgetBlueprintGeneratedClass WBP_VersionNumber.WBP_VersionNumber_C
// Size: 0x4f0 (Inherited: 0x4e0)
struct UWBP_VersionNumber_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UTextBlock* VersionDisplay; // 0x4e8(0x08)

	void Set Version Text(); // Function WBP_VersionNumber.WBP_VersionNumber_C.Set Version Text
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_VersionNumber.WBP_VersionNumber_C.InitializeWidget
	void ExecuteUbergraph_WBP_VersionNumber(int32_t EntryPoint); // Function WBP_VersionNumber.WBP_VersionNumber_C.ExecuteUbergraph_WBP_VersionNumber
};

