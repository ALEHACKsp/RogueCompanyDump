// WidgetBlueprintGeneratedClass WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C
// Size: 0x6f8 (Inherited: 0x500)
struct UWBP_ProgressEarnedBar_C : public UKSProgressMeterWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x500(0x08)
	struct UWidgetAnimation* OnLevelDown; // 0x508(0x08)
	struct UWidgetAnimation* OnLevelUp; // 0x510(0x08)
	struct UHorizontalBox* BarBackground; // 0x518(0x08)
	struct UImage* BarBackgroundImage; // 0x520(0x08)
	struct UImage* LevelUpAnimBar; // 0x528(0x08)
	struct UOverlay* ProgressBarBase; // 0x530(0x08)
	struct UHorizontalBox* ProgressBarFill; // 0x538(0x08)
	struct UImage* xp_base; // 0x540(0x08)
	struct UImage* xp_progress; // 0x548(0x08)
	struct FPlayerProgression Progression; // 0x550(0xc8)
	int32_t CurrentTierIndex; // 0x618(0x04)
	char UnknownData_61C[0x4]; // 0x61c(0x04)
	struct FMulticastInlineDelegate OnLevelUpEvent; // 0x620(0x10)
	struct FMulticastInlineDelegate OnLevelDownEvent; // 0x630(0x10)
	struct FSlateColor BaseColor; // 0x640(0x28)
	struct FSlateColor IncreaseColor; // 0x668(0x28)
	struct FSlateColor DecreaseColor; // 0x690(0x28)
	struct UAkAudioEvent* PlayRankProgressionSFX; // 0x6b8(0x08)
	struct UAkAudioEvent* StopRankProgressionSFX; // 0x6c0(0x08)
	struct FSlateColor BackgroundColor; // 0x6c8(0x28)
	float Clamped Base Pct; // 0x6f0(0x04)
	float Clamped Delta Pct; // 0x6f4(0x04)

	void GetProgressionFinalTier(int32_t Final Tier Index); // Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.GetProgressionFinalTier
	void IsProgressionIncreasing(bool Return Value); // Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.IsProgressionIncreasing
	void IsOnFirstTier(bool FinalTier); // Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.IsOnFirstTier
	void OnLevelDownAnimCompleted(); // Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnLevelDownAnimCompleted
	void IsOnFinalTier(bool FinalTier); // Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.IsOnFinalTier
	void Set Fill Colors(); // Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.Set Fill Colors
	void OnLevelUpAnimCompleted(); // Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnLevelUpAnimCompleted
	void InitializeAnimForTier(int32_t Tier Index, bool IsValid); // Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.InitializeAnimForTier
	void SetProgressionData(struct FPlayerProgression Progression); // Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.SetProgressionData
	void PreConstruct(bool IsDesignTime); // Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.PreConstruct
	void Construct(); // Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.Construct
	void ApplyMeterPercentages(float BasePercent, float DeltaPercent); // Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.ApplyMeterPercentages
	void OnDeltaAnimationStarted(); // Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnDeltaAnimationStarted
	void OnDeltaAnimationTicked(); // Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnDeltaAnimationTicked
	void OnDeltaAnimationFinished(bool bLevelChange); // Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnDeltaAnimationFinished
	void ExecuteUbergraph_WBP_ProgressEarnedBar(int32_t EntryPoint); // Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.ExecuteUbergraph_WBP_ProgressEarnedBar
	void OnLevelDownEvent__DelegateSignature(int32_t NewLevel); // Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnLevelDownEvent__DelegateSignature
	void OnLevelUpEvent__DelegateSignature(int32_t NewLevel); // Function WBP_ProgressEarnedBar.WBP_ProgressEarnedBar_C.OnLevelUpEvent__DelegateSignature
};

