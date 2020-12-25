// WidgetBlueprintGeneratedClass WBP_Progression.WBP_Progression_C
// Size: 0x58d (Inherited: 0x4e0)
struct UWBP_Progression_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UHorizontalBox* ProgressionCards; // 0x4e8(0x08)
	struct UHorizontalBox* ProgressionRow; // 0x4f0(0x08)
	struct UWBP_ProgressionCardSlot_Reputation_C* ProgressReputation; // 0x4f8(0x08)
	struct UWBP_ProgressionCardSlot_PlayerXP_C* ProgressXP; // 0x500(0x08)
	struct UVerticalBox* Quests; // 0x508(0x08)
	struct UWBP_ProgressionCardSlot_RankedXP_C* RankedXPCard; // 0x510(0x08)
	struct UWBP_ProgressionCardSlot_C* RankedXPPanel; // 0x518(0x08)
	struct UWBP_ProgressionCardSlot_C* RepPanel; // 0x520(0x08)
	struct UWBP_ProgressionCardSlot_C* RogueMastery0Panel; // 0x528(0x08)
	struct UWBP_ProgressionCardSlot_C* RogueMastery1Panel; // 0x530(0x08)
	struct UWBP_ProgressionCardSlot_MercMasteryXP_C* RogueMasteryCard0; // 0x538(0x08)
	struct UWBP_ProgressionCardSlot_MercMasteryXP_C* RogueMasteryCard1; // 0x540(0x08)
	struct UWBP_player_level_tracker_C* WBP_player_level_tracker; // 0x548(0x08)
	struct UWBP_ProgressionCardSlot_C* XPPanel; // 0x550(0x08)
	struct APUMG_HUD* MyHud_1; // 0x558(0x08)
	struct FLinearColor FontBaseColor; // 0x560(0x10)
	struct UKSEMODataFactory* EMODataFactory; // 0x570(0x08)
	bool ShowXp; // 0x578(0x01)
	char UnknownData_579[0x3]; // 0x579(0x03)
	int32_t RogueMasteryIndex; // 0x57c(0x04)
	float CurrentDelay; // 0x580(0x04)
	float BASE_DELAY; // 0x584(0x04)
	float DELAY_INCREMENT; // 0x588(0x04)
	bool ShowRankedXP; // 0x58c(0x01)

	void HandleMiniBattlePassProgressRecieved(struct FPlayerProgression PlayerProgression); // Function WBP_Progression.WBP_Progression_C.HandleMiniBattlePassProgressRecieved
	void HandleRankedProgression(struct FPlayerProgression PlayerProgression); // Function WBP_Progression.WBP_Progression_C.HandleRankedProgression
	void OnMercLevelUp(struct UKSActivityInstance* ActivityInstance, struct FActivityTier NewTier); // Function WBP_Progression.WBP_Progression_C.OnMercLevelUp
	void ResetVisualState(); // Function WBP_Progression.WBP_Progression_C.ResetVisualState
	void HandleRogueMasteryProgression(struct FPlayerProgression PlayerProgression); // Function WBP_Progression.WBP_Progression_C.HandleRogueMasteryProgression
	void HandleReputationProgression(struct FPlayerProgression PlayerProgression); // Function WBP_Progression.WBP_Progression_C.HandleReputationProgression
	void HandlePlayerXpProgression(struct FPlayerProgression Progression); // Function WBP_Progression.WBP_Progression_C.HandlePlayerXpProgression
	void Construct(); // Function WBP_Progression.WBP_Progression_C.Construct
	void StartAnimation(); // Function WBP_Progression.WBP_Progression_C.StartAnimation
	void PreConstruct(bool IsDesignTime); // Function WBP_Progression.WBP_Progression_C.PreConstruct
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_Progression.WBP_Progression_C.InitializeWidget
	void IncrementDelay(); // Function WBP_Progression.WBP_Progression_C.IncrementDelay
	void ExecuteUbergraph_WBP_Progression(int32_t EntryPoint); // Function WBP_Progression.WBP_Progression_C.ExecuteUbergraph_WBP_Progression
};

