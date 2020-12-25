// WidgetBlueprintGeneratedClass WBP_SettingsContainer.WBP_SettingsContainer_C
// Size: 0x548 (Inherited: 0x500)
struct UWBP_SettingsContainer_C : public UKSSettingsContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x500(0x08)
	struct UWidgetAnimation* RowFocus; // 0x508(0x08)
	struct UImage* Image_160; // 0x510(0x08)
	struct UTextBlock* SettingDisplayName; // 0x518(0x08)
	struct UHorizontalBox* SettingWidgetBox; // 0x520(0x08)
	struct UAkAudioEvent* HoverSettingsContainerSFX; // 0x528(0x08)
	struct UKSWidget* PreviewWidget; // 0x530(0x08)
	struct FMulticastInlineDelegate OnAddToPreview; // 0x538(0x10)

	void GetPreviewWidget(struct UKSWidget* PreviewWidget); // Function WBP_SettingsContainer.WBP_SettingsContainer_C.GetPreviewWidget
	void Add Setting Widget To Box(struct UKSSettingsWidget* Setting Widget); // Function WBP_SettingsContainer.WBP_SettingsContainer_C.Add Setting Widget To Box
	void SettingsContainerHoverSFX(); // Function WBP_SettingsContainer.WBP_SettingsContainer_C.SettingsContainerHoverSFX
	void OnContainerConfigSet(); // Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnContainerConfigSet
	void AddSettingsWidget(struct UKSSettingsWidget* SettingsWidget); // Function WBP_SettingsContainer.WBP_SettingsContainer_C.AddSettingsWidget
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnMouseEnter
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnMouseLeave
	void PlayHoverAnim(); // Function WBP_SettingsContainer.WBP_SettingsContainer_C.PlayHoverAnim
	void PlayUnhoverAnim(); // Function WBP_SettingsContainer.WBP_SettingsContainer_C.PlayUnhoverAnim
	void AddPreviewWidget(struct UKSSettingsPreview* PreviewWidget); // Function WBP_SettingsContainer.WBP_SettingsContainer_C.AddPreviewWidget
	void ExecuteUbergraph_WBP_SettingsContainer(int32_t EntryPoint); // Function WBP_SettingsContainer.WBP_SettingsContainer_C.ExecuteUbergraph_WBP_SettingsContainer
	void OnAddToPreview__DelegateSignature(struct UKSWidget* PreviewWidget); // Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnAddToPreview__DelegateSignature
};

