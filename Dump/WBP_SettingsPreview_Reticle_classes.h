// WidgetBlueprintGeneratedClass WBP_SettingsPreview_Reticle.WBP_SettingsPreview_Reticle_C
// Size: 0x520 (Inherited: 0x4f8)
struct UWBP_SettingsPreview_Reticle_C : public UKSSettingsPreview {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f8(0x08)
	struct UImage* Image_42; // 0x500(0x08)
	struct UImage* Image_305; // 0x508(0x08)
	struct URifleReticle_C* RifleReticle; // 0x510(0x08)
	struct UKSSettingsDataFactory* SettingsDataFactory; // 0x518(0x08)

	void GetPreviewValue(int32_t Value); // Function WBP_SettingsPreview_Reticle.WBP_SettingsPreview_Reticle_C.GetPreviewValue
	void PreConstruct(bool IsDesignTime); // Function WBP_SettingsPreview_Reticle.WBP_SettingsPreview_Reticle_C.PreConstruct
	void OnInitialized(); // Function WBP_SettingsPreview_Reticle.WBP_SettingsPreview_Reticle_C.OnInitialized
	void OnCrosshairColorChanged(int32_t SettingValue); // Function WBP_SettingsPreview_Reticle.WBP_SettingsPreview_Reticle_C.OnCrosshairColorChanged
	void HandlePreviewValueChanged(); // Function WBP_SettingsPreview_Reticle.WBP_SettingsPreview_Reticle_C.HandlePreviewValueChanged
	void ExecuteUbergraph_WBP_SettingsPreview_Reticle(int32_t EntryPoint); // Function WBP_SettingsPreview_Reticle.WBP_SettingsPreview_Reticle_C.ExecuteUbergraph_WBP_SettingsPreview_Reticle
};

