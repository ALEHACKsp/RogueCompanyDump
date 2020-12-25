// WidgetBlueprintGeneratedClass WBP_PlayerIdentity_PlayerLevel.WBP_PlayerIdentity_PlayerLevel_C
// Size: 0x508 (Inherited: 0x4e0)
struct UWBP_PlayerIdentity_PlayerLevel_C : public UKSWidget {
	struct UImage* Image_166; // 0x4e0(0x08)
	struct UWidgetSwitcher* LevelLoadingSwitcher; // 0x4e8(0x08)
	struct UTextBlock* PlayerLevelText; // 0x4f0(0x08)
	struct UThrobber* PlayerLevelThrobber; // 0x4f8(0x08)
	struct UWBP_BoxStroke_C* WBP_BoxStroke; // 0x500(0x08)

	void SetThrobber(); // Function WBP_PlayerIdentity_PlayerLevel.WBP_PlayerIdentity_PlayerLevel_C.SetThrobber
	void SetPlayerLevelExplicit(int32_t NewLevel); // Function WBP_PlayerIdentity_PlayerLevel.WBP_PlayerIdentity_PlayerLevel_C.SetPlayerLevelExplicit
};

