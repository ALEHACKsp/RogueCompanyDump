// WidgetBlueprintGeneratedClass WBP_MatchCardSlot.WBP_MatchCardSlot_C
// Size: 0x2c4 (Inherited: 0x238)
struct UWBP_MatchCardSlot_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UTextBlock* Category; // 0x240(0x08)
	struct UImage* Decro; // 0x248(0x08)
	struct UImage* Gradient; // 0x250(0x08)
	struct UImage* Image_125; // 0x258(0x08)
	struct UWBP_OrdinalNumberText_C* OrdinalNumberText; // 0x260(0x08)
	struct UTextBlock* PointsEarned; // 0x268(0x08)
	struct UWBP_PanelDefault_C* WBP_PanelDefault; // 0x270(0x08)
	struct FPlayerMatchStatInfo PlayerStat; // 0x278(0x10)
	struct APUMG_HUD* MyHud; // 0x288(0x08)
	int32_t NewCurrencyXP; // 0x290(0x04)
	int32_t CurrencyEarned; // 0x294(0x04)
	int32_t CurrentCurrency; // 0x298(0x04)
	float DeltaTime; // 0x29c(0x04)
	struct FMulticastInlineDelegate StartAnimation; // 0x2a0(0x10)
	bool CanStartAnimation; // 0x2b0(0x01)
	char UnknownData_2B1[0x3]; // 0x2b1(0x03)
	struct FLinearColor GoldFontColor; // 0x2b4(0x10)

	void PopulateWithPlayerStats(); // Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.PopulateWithPlayerStats
	void Construct(); // Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.Construct
	void AnimateIn(float Delay); // Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.AnimateIn
	void PreConstruct(bool IsDesignTime); // Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.PreConstruct
	void ExecuteUbergraph_WBP_MatchCardSlot(int32_t EntryPoint); // Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.ExecuteUbergraph_WBP_MatchCardSlot
	void StartAnimation__DelegateSignature(int32_t CurrencyEarned); // Function WBP_MatchCardSlot.WBP_MatchCardSlot_C.StartAnimation__DelegateSignature
};

