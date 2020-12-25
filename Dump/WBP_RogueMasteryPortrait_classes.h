// WidgetBlueprintGeneratedClass WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C
// Size: 0x278 (Inherited: 0x238)
struct UWBP_RogueMasteryPortrait_C : public UUserWidget {
	struct UKSAsyncImage* JobIcon; // 0x238(0x08)
	struct UImage* MasteryBorder_1to4; // 0x240(0x08)
	struct UImage* MasteryBorder_5to9; // 0x248(0x08)
	struct UImage* MasteryBorder_Max; // 0x250(0x08)
	struct UWidgetSwitcher* MasteryFrameSwitcher; // 0x258(0x08)
	struct UWBP_RogueMasteryIcon_C* MasteryIcon; // 0x260(0x08)
	struct AKSPlayerState* PlayerOwner; // 0x268(0x08)
	struct UKSJobItem* JobItem; // 0x270(0x08)

	void SetMasteryLevelExplicit(int32_t MasteryLevel); // Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.SetMasteryLevelExplicit
	void SetMasteryFrameToLevel(int32_t MasteryLevel); // Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.SetMasteryFrameToLevel
	void OnJobMasteryLevelUpdated(); // Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.OnJobMasteryLevelUpdated
	void SetJobPortraitFromSoftTexture(struct TSoftObjectPtr<struct UTexture2D> SoftTexture); // Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.SetJobPortraitFromSoftTexture
	void Set Mastery Frame(); // Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.Set Mastery Frame
	void SetPlayerOwner(struct AKSPlayerState* PlayerState); // Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.SetPlayerOwner
	void SetJobInformation(struct UKSJobItem* JobItem); // Function WBP_RogueMasteryPortrait.WBP_RogueMasteryPortrait_C.SetJobInformation
};

