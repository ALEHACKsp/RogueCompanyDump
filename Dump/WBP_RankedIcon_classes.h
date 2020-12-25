// WidgetBlueprintGeneratedClass WBP_RankedIcon.WBP_RankedIcon_C
// Size: 0x270 (Inherited: 0x238)
struct UWBP_RankedIcon_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UWBP_AsyncIcon_C* RankedIcon; // 0x240(0x08)
	struct UTextBlock* RankedLabel; // 0x248(0x08)
	struct UTextBlock* RankedLevel; // 0x250(0x08)
	bool bDisplayRankName; // 0x258(0x01)
	bool bHideRankLevel; // 0x259(0x01)
	char UnknownData_25A[0x6]; // 0x25a(0x06)
	struct FMulticastInlineDelegate OnRankTierSet; // 0x260(0x10)

	void SetRankedTierTextByTier(char RankTier); // Function WBP_RankedIcon.WBP_RankedIcon_C.SetRankedTierTextByTier
	void SetRankedIconByTier(char RankTier); // Function WBP_RankedIcon.WBP_RankedIcon_C.SetRankedIconByTier
	void SetRankedLevel(int32_t Level); // Function WBP_RankedIcon.WBP_RankedIcon_C.SetRankedLevel
	void PreConstruct(bool IsDesignTime); // Function WBP_RankedIcon.WBP_RankedIcon_C.PreConstruct
	void Construct(); // Function WBP_RankedIcon.WBP_RankedIcon_C.Construct
	void ExecuteUbergraph_WBP_RankedIcon(int32_t EntryPoint); // Function WBP_RankedIcon.WBP_RankedIcon_C.ExecuteUbergraph_WBP_RankedIcon
	void OnRankTierSet__DelegateSignature(char RankTier); // Function WBP_RankedIcon.WBP_RankedIcon_C.OnRankTierSet__DelegateSignature
};

