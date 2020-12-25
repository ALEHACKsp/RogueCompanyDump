// WidgetBlueprintGeneratedClass WBP_CurrencySummary.WBP_CurrencySummary_C
// Size: 0x500 (Inherited: 0x4e0)
struct UWBP_CurrencySummary_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UTextBlock* ReputationCount; // 0x4e8(0x08)
	struct UTextBlock* RogueBucksCount; // 0x4f0(0x08)
	struct UKSPlayerDataFactory* PlayerDataFactory; // 0x4f8(0x08)

	void UpdateCurrencyDisplay(); // Function WBP_CurrencySummary.WBP_CurrencySummary_C.UpdateCurrencyDisplay
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_CurrencySummary.WBP_CurrencySummary_C.InitializeWidget
	void ExecuteUbergraph_WBP_CurrencySummary(int32_t EntryPoint); // Function WBP_CurrencySummary.WBP_CurrencySummary_C.ExecuteUbergraph_WBP_CurrencySummary
};

