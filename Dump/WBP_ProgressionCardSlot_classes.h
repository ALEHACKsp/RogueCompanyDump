// WidgetBlueprintGeneratedClass WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C
// Size: 0x558 (Inherited: 0x4e0)
struct UWBP_ProgressionCardSlot_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* LevelUp; // 0x4e8(0x08)
	struct UWidgetAnimation* AnimateCard; // 0x4f0(0x08)
	struct UOverlay* CardContent; // 0x4f8(0x08)
	struct UImage* Glow; // 0x500(0x08)
	struct UImage* Gradient; // 0x508(0x08)
	struct UImage* LeftSideDecro; // 0x510(0x08)
	struct UNamedSlot* ProgressionCardContent; // 0x518(0x08)
	struct UImage* RightSideDecro; // 0x520(0x08)
	struct UWBP_PanelDefault_C* WBP_PanelDefault; // 0x528(0x08)
	struct FMulticastInlineDelegate StartAnimation; // 0x530(0x10)
	struct UAkAudioEvent* ProgressionCardLvlUpSFX; // 0x540(0x08)
	struct UAkAudioEvent* ShowProgressionCardSFX; // 0x548(0x08)
	struct FTimerHandle StartAnimTimer; // 0x550(0x08)

	void SetRankedVisualDisplay(char RankTier); // Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.SetRankedVisualDisplay
	void SetInitialState(); // Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.SetInitialState
	void Construct(); // Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.Construct
	void AnimateIn(float Delay); // Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.AnimateIn
	void PreConstruct(bool IsDesignTime); // Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.PreConstruct
	void OnMercMasteryLevelUp(struct UKSActivityInstance* ActivityInstance, struct FActivityTier NewTier); // Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.OnMercMasteryLevelUp
	void OnRankTierSet(char RankTier); // Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.OnRankTierSet
	void StartAnimTimerComplete(); // Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.StartAnimTimerComplete
	void ExecuteUbergraph_WBP_ProgressionCardSlot(int32_t EntryPoint); // Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.ExecuteUbergraph_WBP_ProgressionCardSlot
	void StartAnimation__DelegateSignature(int32_t CurrencyEarned); // Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.StartAnimation__DelegateSignature
};

