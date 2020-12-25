// WidgetBlueprintGeneratedClass WBP_Challenge_Panel.WBP_Challenge_Panel_C
// Size: 0x538 (Inherited: 0x4e0)
struct UWBP_Challenge_Panel_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UHorizontalBox* AllCompleteBox; // 0x4e8(0x08)
	struct UWBP_Challenge_Renderer_C* Challenge0; // 0x4f0(0x08)
	struct UWBP_Challenge_Renderer_C* Challenge1; // 0x4f8(0x08)
	struct UWBP_Challenge_Renderer_C* Challenge2; // 0x500(0x08)
	struct UVerticalBox* ContractsDisplay; // 0x508(0x08)
	struct UImage* Image_112; // 0x510(0x08)
	struct UCanvasPanel* WaitingForChallenges; // 0x518(0x08)
	struct TArray<struct UWBP_Challenge_Renderer_C*> ChallengeRenderers; // 0x520(0x10)
	struct FName SceneOwner; // 0x530(0x08)

	void DisplayRerollPrompt(bool Show); // Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.DisplayRerollPrompt
	void GetNavigationWidgets(struct TArray<struct UPUMG_Widget*> Widgets); // Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.GetNavigationWidgets
	void PopulateChallenges(); // Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.PopulateChallenges
	void PreConstruct(bool IsDesignTime); // Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.PreConstruct
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.InitializeWidget
	void ExecuteUbergraph_WBP_Challenge_Panel(int32_t EntryPoint); // Function WBP_Challenge_Panel.WBP_Challenge_Panel_C.ExecuteUbergraph_WBP_Challenge_Panel
};

