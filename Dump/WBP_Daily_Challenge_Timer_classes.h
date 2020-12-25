// WidgetBlueprintGeneratedClass WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C
// Size: 0x4fc (Inherited: 0x4e0)
struct UWBP_Daily_Challenge_Timer_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UTextBlock* ContractTimer; // 0x4e8(0x08)
	struct UWidgetSwitcher* NextChallengeSwitcher; // 0x4f0(0x08)
	float SecondsTillNew; // 0x4f8(0x04)

	void CheckForNewChallenge(); // Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.CheckForNewChallenge
	void UpdateContractTimer(); // Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.UpdateContractTimer
	void SetRemainingTime(); // Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.SetRemainingTime
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.Tick
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.InitializeWidget
	void ExecuteUbergraph_WBP_Daily_Challenge_Timer(int32_t EntryPoint); // Function WBP_Daily_Challenge_Timer.WBP_Daily_Challenge_Timer_C.ExecuteUbergraph_WBP_Daily_Challenge_Timer
};

