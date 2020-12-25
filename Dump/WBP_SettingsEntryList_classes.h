// WidgetBlueprintGeneratedClass WBP_SettingsEntryList.WBP_SettingsEntryList_C
// Size: 0x560 (Inherited: 0x538)
struct UWBP_SettingsEntryList_C : public UKSSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x538(0x08)
	struct UOverlay* Overlay_56; // 0x540(0x08)
	struct UDropdownList_C* DropdownList; // 0x548(0x08)
	struct FMulticastInlineDelegate OnSelection; // 0x550(0x10)

	void SetDesiredIndex(int32_t Index, bool Success); // Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.SetDesiredIndex
	bool NavigateBack(); // Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.NavigateBack
	bool NavigateConfirmPressed(); // Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.NavigateConfirmPressed
	bool NavigateConfirm(); // Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.NavigateConfirm
	void GetDirtyIndex(int32_t Index); // Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.GetDirtyIndex
	void OnWidgetSettingsInfoSet(); // Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.OnWidgetSettingsInfoSet
	void Selection Made(int32_t Index, struct FText Text); // Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.Selection Made
	void ExecuteUbergraph_WBP_SettingsEntryList(int32_t EntryPoint); // Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.ExecuteUbergraph_WBP_SettingsEntryList
	void OnSelection__DelegateSignature(); // Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.OnSelection__DelegateSignature
};

