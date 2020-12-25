// WidgetBlueprintGeneratedClass WBP_AbilityDurationBar.WBP_AbilityDurationBar_C
// Size: 0x278 (Inherited: 0x238)
struct UWBP_AbilityDurationBar_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UImage* AbilityIcon; // 0x240(0x08)
	struct UProgressBar* DurationRemaining; // 0x248(0x08)
	struct UProgressBar* DurationRemaining_2; // 0x250(0x08)
	struct UTextBlock* Timer; // 0x258(0x08)
	float RemainingTime; // 0x260(0x04)
	float DeltaSeconds; // 0x264(0x04)
	float TotalDuration; // 0x268(0x04)
	char UnknownData_26C[0x4]; // 0x26c(0x04)
	struct UKSPlayerModInstance* ModInstance; // 0x270(0x08)

	void SetDurationBar(float Duration, struct UKSItem* KSItem); // Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.SetDurationBar
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.Tick
	void OpenUpdateGate(); // Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.OpenUpdateGate
	void CloseUpdateGate(); // Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.CloseUpdateGate
	void UpdateDurationDisplay(); // Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.UpdateDurationDisplay
	void HideDurationBar(); // Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.HideDurationBar
	void HandleModActivated(bool Activated); // Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.HandleModActivated
	void SetupDurationBar(struct UKSModInst_Activated* ModInstance); // Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.SetupDurationBar
	void ExecuteUbergraph_WBP_AbilityDurationBar(int32_t EntryPoint); // Function WBP_AbilityDurationBar.WBP_AbilityDurationBar_C.ExecuteUbergraph_WBP_AbilityDurationBar
};

