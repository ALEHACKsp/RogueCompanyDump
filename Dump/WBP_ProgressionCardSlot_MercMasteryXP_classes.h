// WidgetBlueprintGeneratedClass WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C
// Size: 0x408 (Inherited: 0x238)
struct UWBP_ProgressionCardSlot_MercMasteryXP_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UWidgetAnimation* OnLevelUp_Enhanced_2; // 0x240(0x08)
	struct UWidgetAnimation* OnLevelUp_Enhanced; // 0x248(0x08)
	struct UWidgetAnimation* OnLevelUp_2; // 0x250(0x08)
	struct UWidgetAnimation* OnLevelUp; // 0x258(0x08)
	struct UImage* Block01; // 0x260(0x08)
	struct UImage* Block02; // 0x268(0x08)
	struct UImage* Block03; // 0x270(0x08)
	struct UImage* Block04; // 0x278(0x08)
	struct UImage* Block05; // 0x280(0x08)
	struct UImage* Block06; // 0x288(0x08)
	struct UImage* Block07; // 0x290(0x08)
	struct UImage* Block08; // 0x298(0x08)
	struct UTextBlock* Category; // 0x2a0(0x08)
	struct UImage* Flare01; // 0x2a8(0x08)
	struct UImage* Flare02; // 0x2b0(0x08)
	struct UImage* Flare03; // 0x2b8(0x08)
	struct UImage* Flare04; // 0x2c0(0x08)
	struct UImage* Flare05; // 0x2c8(0x08)
	struct UImage* Flare06; // 0x2d0(0x08)
	struct UImage* Glow01; // 0x2d8(0x08)
	struct UImage* Glow02; // 0x2e0(0x08)
	struct UImage* Glow02_2; // 0x2e8(0x08)
	struct UImage* Particles01; // 0x2f0(0x08)
	struct UTextBlock* PointsEarned; // 0x2f8(0x08)
	struct UTextBlock* RankChangeText; // 0x300(0x08)
	struct UWBP_RogueMasteryPortrait_C* RogueMasteryFrame; // 0x308(0x08)
	struct UImage* Scanlines01; // 0x310(0x08)
	struct UImage* TextGlow01; // 0x318(0x08)
	struct UWBP_ProgressionTally_C* WBP_ProgressionTally_C_1; // 0x320(0x08)
	struct UWBP_ProgressEarnedBar_C* XPProgressEarnedBar; // 0x328(0x08)
	struct FMulticastInlineDelegate OnMercLevelUp; // 0x330(0x10)
	struct FPlayerProgression PlayerProgress; // 0x340(0xc8)

	void SetColor(); // Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.SetColor
	void ProcessPlayerProgression(struct FPlayerProgression PlayerProgress); // Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.ProcessPlayerProgression
	void PreConstruct(bool IsDesignTime); // Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.PreConstruct
	void Construct(); // Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.Construct
	void Event On Level Up(int32_t NewLevel); // Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.Event On Level Up
	void ExecuteUbergraph_WBP_ProgressionCardSlot_MercMasteryXP(int32_t EntryPoint); // Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.ExecuteUbergraph_WBP_ProgressionCardSlot_MercMasteryXP
	void OnMercLevelUp__DelegateSignature(struct UKSActivityInstance* ActivityInstance, struct FActivityTier NewTier); // Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.OnMercLevelUp__DelegateSignature
};

