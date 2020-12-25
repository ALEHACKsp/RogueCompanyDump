// BlueprintGeneratedClass SettingsInfo_Language.SettingsInfo_Language_C
// Size: 0x118 (Inherited: 0x108)
struct USettingsInfo_Language_C : public UKSSettingsInfoBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x108(0x08)
	struct UDataTable* CultureFriendlyNames; // 0x110(0x08)

	int32_t FixupInvalidInt(int32_t inInt); // Function SettingsInfo_Language.SettingsInfo_Language_C.FixupInvalidInt
	bool IsValidValueInt(int32_t inInt); // Function SettingsInfo_Language.SettingsInfo_Language_C.IsValidValueInt
	void GetCultureStringFromTextOptionIndex(int32_t TextOptionIndex, bool Success, struct FString CultureString); // Function SettingsInfo_Language.SettingsInfo_Language_C.GetCultureStringFromTextOptionIndex
	void GetLanguageTextOptionIndex(struct FString Language, int32_t TextOptionIndex); // Function SettingsInfo_Language.SettingsInfo_Language_C.GetLanguageTextOptionIndex
	void SetUpLanguageOptions(); // Function SettingsInfo_Language.SettingsInfo_Language_C.SetUpLanguageOptions
	bool SaveIntValue(int32_t inInt); // Function SettingsInfo_Language.SettingsInfo_Language_C.SaveIntValue
	bool ApplyIntValue(int32_t inInt); // Function SettingsInfo_Language.SettingsInfo_Language_C.ApplyIntValue
	void InitializeValue(); // Function SettingsInfo_Language.SettingsInfo_Language_C.InitializeValue
	void HandleOnDisplayLanguageApplied(struct FString StringValue); // Function SettingsInfo_Language.SettingsInfo_Language_C.HandleOnDisplayLanguageApplied
	void HandleOnDisplayLanguageSaved(struct FString StringValue); // Function SettingsInfo_Language.SettingsInfo_Language_C.HandleOnDisplayLanguageSaved
	void RevertSettingToDefault(); // Function SettingsInfo_Language.SettingsInfo_Language_C.RevertSettingToDefault
	void ExecuteUbergraph_SettingsInfo_Language(int32_t EntryPoint); // Function SettingsInfo_Language.SettingsInfo_Language_C.ExecuteUbergraph_SettingsInfo_Language
};

