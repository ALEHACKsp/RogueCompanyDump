// WidgetBlueprintGeneratedClass WBP_RoundRecap_Entry.WBP_RoundRecap_Entry_C
// Size: 0x2d1 (Inherited: 0x238)
struct UWBP_RoundRecap_Entry_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UImage* BG_Enemy; // 0x240(0x08)
	struct UImage* BG_Friendly; // 0x248(0x08)
	struct UImage* Eliminated_Enemy; // 0x250(0x08)
	struct UImage* Eliminated_Friendly; // 0x258(0x08)
	struct UWidgetSwitcher* IconSwitcher_Enemy; // 0x260(0x08)
	struct UWidgetSwitcher* IconSwitcher_Friendly; // 0x268(0x08)
	struct UImage* Objective_Enemy; // 0x270(0x08)
	struct UImage* Objective_Friendly; // 0x278(0x08)
	struct UTextBlock* RoundLabelText_Enemy; // 0x280(0x08)
	struct UTextBlock* RoundLabelText_Friendly; // 0x288(0x08)
	struct UImage* TimeExpired_Enemy; // 0x290(0x08)
	struct UImage* TimeExpired_Friendly; // 0x298(0x08)
	struct UWBP_BoxStroke_C* WinStroke_Enemy; // 0x2a0(0x08)
	struct UWBP_BoxStroke_C* WinStroke_Friendly; // 0x2a8(0x08)
	bool FriendlyTeamWin; // 0x2b0(0x01)
	char UnknownData_2B1[0x7]; // 0x2b1(0x07)
	struct FText RoundName; // 0x2b8(0x18)
	char RoundEndReason; // 0x2d0(0x01)

	void SetVisualState(); // Function WBP_RoundRecap_Entry.WBP_RoundRecap_Entry_C.SetVisualState
	void RoundDataSet(); // Function WBP_RoundRecap_Entry.WBP_RoundRecap_Entry_C.RoundDataSet
	void ExecuteUbergraph_WBP_RoundRecap_Entry(int32_t EntryPoint); // Function WBP_RoundRecap_Entry.WBP_RoundRecap_Entry_C.ExecuteUbergraph_WBP_RoundRecap_Entry
};

