// WidgetBlueprintGeneratedClass WBP_RogueMasteryProgress.WBP_RogueMasteryProgress_C
// Size: 0x558 (Inherited: 0x4e0)
struct UWBP_RogueMasteryProgress_C : public UKSWidget {
	struct UTextBlock* CurrentLevel; // 0x4e0(0x08)
	struct UTextBlock* CurrentXp; // 0x4e8(0x08)
	struct UImage* empty_bar; // 0x4f0(0x08)
	struct UHorizontalBox* HorizontalBox_3; // 0x4f8(0x08)
	struct UImage* LevelUpAnimBar; // 0x500(0x08)
	struct UTextBlock* NextRewardLabel; // 0x508(0x08)
	struct UHorizontalBox* NextRewardLabelWrapper; // 0x510(0x08)
	struct UWBP_RogueMasteryIcon_C* NextRewardLevelBadge; // 0x518(0x08)
	struct UWBP_KSCosmeticItemDisplay_C* RewardItem; // 0x520(0x08)
	struct USizeBox* RewardWrapper; // 0x528(0x08)
	struct UWBP_RogueMasteryPortrait_C* WBP_MercMasteryFrame; // 0x530(0x08)
	struct UOverlay* xp_baseWrapper; // 0x538(0x08)
	struct UProgressBar* xp_earned; // 0x540(0x08)
	struct UOverlay* xp_earned_slot; // 0x548(0x08)
	struct UTextBlock* XPToNextLevel; // 0x550(0x08)

	void GetNextMasteryRewardTier(struct TArray<struct FActivityTier> ActivityTiers, int32_t CurrentProgressCount, struct FActivityTier NextRewardTier, bool RewardFound); // Function WBP_RogueMasteryProgress.WBP_RogueMasteryProgress_C.GetNextMasteryRewardTier
	void SetMasteryLevelForJob(struct UKSJobItem* JobItem); // Function WBP_RogueMasteryProgress.WBP_RogueMasteryProgress_C.SetMasteryLevelForJob
};

