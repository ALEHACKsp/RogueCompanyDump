// WidgetBlueprintGeneratedClass WBP_MatchSummary.WBP_MatchSummary_C
// Size: 0x530 (Inherited: 0x4e0)
struct UWBP_MatchSummary_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UHorizontalBox* BestStatsContainer; // 0x4e8(0x08)
	struct UVerticalBox* StatContainer; // 0x4f0(0x08)
	struct UWBP_MatchSummary_StatEntry_C* StatDamage; // 0x4f8(0x08)
	struct UWBP_MatchSummary_StatEntry_C* StatDeaths; // 0x500(0x08)
	struct UWBP_MatchSummary_StatEntry_C* StatDowns; // 0x508(0x08)
	struct UWBP_MatchSummary_StatEntry_C* StatEliminations; // 0x510(0x08)
	struct UWBP_MatchSummary_StatEntry_C* StatObjectives; // 0x518(0x08)
	struct UWBP_MatchSummary_StatEntry_C* StatRevives; // 0x520(0x08)
	struct UKSEMODataFactory* EMODataFactory; // 0x528(0x08)

	void PopulatePlayerStats(struct FPlayerEntryStats PlayerEntryStats); // Function WBP_MatchSummary.WBP_MatchSummary_C.PopulatePlayerStats
	void PopulateMatchSummary(struct FPlayerRewardsSummary PlayerRewards, struct FScoreboardStats ScoreboardStats); // Function WBP_MatchSummary.WBP_MatchSummary_C.PopulateMatchSummary
	void PopulateBestStats(struct TArray<struct FPlayerMatchStatInfo> BestStats); // Function WBP_MatchSummary.WBP_MatchSummary_C.PopulateBestStats
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_MatchSummary.WBP_MatchSummary_C.InitializeWidget
	void ExecuteUbergraph_WBP_MatchSummary(int32_t EntryPoint); // Function WBP_MatchSummary.WBP_MatchSummary_C.ExecuteUbergraph_WBP_MatchSummary
};

