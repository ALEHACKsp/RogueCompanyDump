// WidgetBlueprintGeneratedClass WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C
// Size: 0x2b8 (Inherited: 0x238)
struct UWBP_RogueStatsScreen_RogueEntry_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UWidgetAnimation* FadeIn; // 0x240(0x08)
	struct UOverlay* BarWrapper; // 0x248(0x08)
	struct UKSAsyncImage* BottomDivider; // 0x250(0x08)
	struct USizeBox* GlowTip; // 0x258(0x08)
	struct UImage* Image_426; // 0x260(0x08)
	struct UWBP_AsyncIcon_C* MercIcon; // 0x268(0x08)
	struct UTextBlock* MercName; // 0x270(0x08)
	struct UCanvasPanel* PnlMain; // 0x278(0x08)
	struct UTextBlock* StatValue; // 0x280(0x08)
	struct UKSAsyncImage* TopDivider; // 0x288(0x08)
	struct UKSActivityInstance* ActivityInstance; // 0x290(0x08)
	struct UKSMercMasteryActivity* MercActivity; // 0x298(0x08)
	int32_t MaxStatValue; // 0x2a0(0x04)
	float TargetMaxXAnchor; // 0x2a4(0x04)
	float AnchorAnimTimer; // 0x2a8(0x04)
	float AnchorAnimDuration; // 0x2ac(0x04)
	float AnchorAnimStartPerc; // 0x2b0(0x04)
	int32_t MyStatValue; // 0x2b4(0x04)

	void TickAnchorAnim(float DeltaTime); // Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.TickAnchorAnim
	void ResetState(); // Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.ResetState
	void PlayShowAnimInternal(); // Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.PlayShowAnimInternal
	void PlayShowAnim(float Delay); // Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.PlayShowAnim
	void UpdateValueText(int32_t Value); // Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.UpdateValueText
	void UpdateIcon(); // Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.UpdateIcon
	void SetActivityInstance(struct UKSActivityInstance* Instance, int32_t MaxValue); // Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.SetActivityInstance
	void Construct(); // Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.Construct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.Tick
	void ExecuteUbergraph_WBP_RogueStatsScreen_RogueEntry(int32_t EntryPoint); // Function WBP_RogueStatsScreen_RogueEntry.WBP_RogueStatsScreen_RogueEntry_C.ExecuteUbergraph_WBP_RogueStatsScreen_RogueEntry
};

