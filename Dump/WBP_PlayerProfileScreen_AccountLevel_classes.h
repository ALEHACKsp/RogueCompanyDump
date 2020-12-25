// WidgetBlueprintGeneratedClass WBP_PlayerProfileScreen_AccountLevel.WBP_PlayerProfileScreen_AccountLevel_C
// Size: 0x290 (Inherited: 0x238)
struct UWBP_PlayerProfileScreen_AccountLevel_C : public UUserWidget {
	struct UImage* background; // 0x238(0x08)
	struct UImage* DiamondProgress; // 0x240(0x08)
	struct UImage* Image_498; // 0x248(0x08)
	struct UTextBlock* TextBlock_92; // 0x250(0x08)
	struct UTextBlock* TxtCurrentXP; // 0x258(0x08)
	struct UTextBlock* TxtNoRecentProgress; // 0x260(0x08)
	struct UTextBlock* TxtPlayerLevel; // 0x268(0x08)
	struct UTextBlock* TxtTargetXp; // 0x270(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x278(0x08)
	struct FMulticastInlineDelegate OnActivityInstanceChanged; // 0x280(0x10)

	void UpdateProgressBar(float Perc); // Function WBP_PlayerProfileScreen_AccountLevel.WBP_PlayerProfileScreen_AccountLevel_C.UpdateProgressBar
	void RefreshStats(); // Function WBP_PlayerProfileScreen_AccountLevel.WBP_PlayerProfileScreen_AccountLevel_C.RefreshStats
	void OnActivityInstanceChanged__DelegateSignature(bool IsLoaded); // Function WBP_PlayerProfileScreen_AccountLevel.WBP_PlayerProfileScreen_AccountLevel_C.OnActivityInstanceChanged__DelegateSignature
};

