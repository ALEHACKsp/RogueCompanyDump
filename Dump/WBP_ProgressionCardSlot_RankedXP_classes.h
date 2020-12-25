// WidgetBlueprintGeneratedClass WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C
// Size: 0x350 (Inherited: 0x238)
struct UWBP_ProgressionCardSlot_RankedXP_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UWidgetAnimation* RankDownAnim; // 0x240(0x08)
	struct UWidgetAnimation* RankUpAnim; // 0x248(0x08)
	struct UImage* BadgeMaterialize; // 0x250(0x08)
	struct UImage* Block01; // 0x258(0x08)
	struct UImage* Block02; // 0x260(0x08)
	struct UImage* Block03; // 0x268(0x08)
	struct UImage* Block04; // 0x270(0x08)
	struct UImage* Block05; // 0x278(0x08)
	struct UImage* Block06; // 0x280(0x08)
	struct UImage* Block07; // 0x288(0x08)
	struct UImage* Block08; // 0x290(0x08)
	struct UTextBlock* Category; // 0x298(0x08)
	struct UWBP_AdditiveImage_C* Chevron1; // 0x2a0(0x08)
	struct UWBP_AdditiveImage_C* Chevron2; // 0x2a8(0x08)
	struct UWBP_AdditiveImage_C* Chevron3; // 0x2b0(0x08)
	struct UImage* Flare01; // 0x2b8(0x08)
	struct UImage* Flare02; // 0x2c0(0x08)
	struct UImage* Flare03; // 0x2c8(0x08)
	struct UImage* Flare04; // 0x2d0(0x08)
	struct UImage* Flare05; // 0x2d8(0x08)
	struct UImage* Flare06; // 0x2e0(0x08)
	struct UImage* Glow01; // 0x2e8(0x08)
	struct UImage* Glow02; // 0x2f0(0x08)
	struct UWBP_LerpingNumberWidget_C* GrandMasterPoints; // 0x2f8(0x08)
	struct UCanvasPanel* GrandMasterPointsWrapper; // 0x300(0x08)
	struct UImage* Particles01; // 0x308(0x08)
	struct UTextBlock* PointsEarned; // 0x310(0x08)
	struct UWBP_RankedIcon_C* RankBadge; // 0x318(0x08)
	struct UTextBlock* RankChangeText; // 0x320(0x08)
	struct UWidgetSwitcher* RankedProgressSwitcher; // 0x328(0x08)
	struct UImage* Scanlines01; // 0x330(0x08)
	struct UImage* TextGlow01; // 0x338(0x08)
	struct UWBP_ProgressionTally_C* WBP_ProgressionTally_C_1; // 0x340(0x08)
	struct UWBP_ProgressEarnedBar_C* XPProgressEarnedBar; // 0x348(0x08)

	void SetPromotionColor(int32_t RankedLevel); // Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.SetPromotionColor
	void OnLevelDown(int32_t NewLevel); // Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.OnLevelDown
	void OnLevelUp(int32_t Completed Level); // Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.OnLevelUp
	void ProcessPlayerProgression(struct FPlayerProgression PlayerProgress); // Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.ProcessPlayerProgression
	void PreConstruct(bool IsDesignTime); // Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.PreConstruct
	void Construct(); // Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.Construct
	void ExecuteUbergraph_WBP_ProgressionCardSlot_RankedXP(int32_t EntryPoint); // Function WBP_ProgressionCardSlot_RankedXP.WBP_ProgressionCardSlot_RankedXP_C.ExecuteUbergraph_WBP_ProgressionCardSlot_RankedXP
};

