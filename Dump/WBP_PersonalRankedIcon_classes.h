// WidgetBlueprintGeneratedClass WBP_PersonalRankedIcon.WBP_PersonalRankedIcon_C
// Size: 0x4f0 (Inherited: 0x4e0)
struct UWBP_PersonalRankedIcon_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWBP_RankedIcon_C* RankIcon; // 0x4e8(0x08)

	void UpdatePlayerRankInfo(); // Function WBP_PersonalRankedIcon.WBP_PersonalRankedIcon_C.UpdatePlayerRankInfo
	void Construct(); // Function WBP_PersonalRankedIcon.WBP_PersonalRankedIcon_C.Construct
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_PersonalRankedIcon.WBP_PersonalRankedIcon_C.InitializeWidget
	void ExecuteUbergraph_WBP_PersonalRankedIcon(int32_t EntryPoint); // Function WBP_PersonalRankedIcon.WBP_PersonalRankedIcon_C.ExecuteUbergraph_WBP_PersonalRankedIcon
};

