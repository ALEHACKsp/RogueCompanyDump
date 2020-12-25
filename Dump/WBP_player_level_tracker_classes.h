// WidgetBlueprintGeneratedClass WBP_player_level_tracker.WBP_player_level_tracker_C
// Size: 0x664 (Inherited: 0x4e0)
struct UWBP_player_level_tracker_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* LevelUpReward; // 0x4e8(0x08)
	struct UWidgetAnimation* FadeIn; // 0x4f0(0x08)
	struct UWidgetAnimation* OnPlayerLevelUp; // 0x4f8(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x500(0x08)
	struct UTextBlock* Category; // 0x508(0x08)
	struct UImage* LevelUpAnimBar; // 0x510(0x08)
	struct UCanvasPanel* LevelUpRewardWrapper; // 0x518(0x08)
	struct UTextBlock* PlayerCurrentLevel; // 0x520(0x08)
	struct UTextBlock* PlayerNextLevel; // 0x528(0x08)
	struct UTextBlock* PointsEarned; // 0x530(0x08)
	struct UTextBlock* RequiredXPForLevel; // 0x538(0x08)
	struct UOverlay* ThumbWrapper; // 0x540(0x08)
	struct UWBP_AdditiveImage_C* WBP_AdditiveImage; // 0x548(0x08)
	struct UWBP_ProgressEarnedBar_C* XPBar; // 0x550(0x08)
	struct UHorizontalBox* XPEarned; // 0x558(0x08)
	struct UTextBlock* XPProgressInLevel; // 0x560(0x08)
	struct FPlayerProgression Progression; // 0x568(0xc8)
	bool CanAnimate; // 0x630(0x01)
	char UnknownData_631[0x3]; // 0x631(0x03)
	float BaseFillPercentage; // 0x634(0x04)
	float LerpTimeframe; // 0x638(0x04)
	int32_t CurrentTierIndex; // 0x63c(0x04)
	float CurrentLerpIncrement; // 0x640(0x04)
	char UnknownData_644[0x4]; // 0x644(0x04)
	struct UAkAudioEvent* PlayLevelUpRewardSFX; // 0x648(0x08)
	struct UAkAudioEvent* PlayLevelProgressionSFX; // 0x650(0x08)
	struct UAkAudioEvent* StopLevelProgressionSFX; // 0x658(0x08)
	int32_t XPProgressNumber; // 0x660(0x04)

	void TriggerLevelUpEvent(); // Function WBP_player_level_tracker.WBP_player_level_tracker_C.TriggerLevelUpEvent
	void GetXpProgressPercentageInLevel(float PercentProgress, int32_t XpNumber); // Function WBP_player_level_tracker.WBP_player_level_tracker_C.GetXpProgressPercentageInLevel
	void SetNewLerpTimeframe(); // Function WBP_player_level_tracker.WBP_player_level_tracker_C.SetNewLerpTimeframe
	void UpdateLevelDisplay(); // Function WBP_player_level_tracker.WBP_player_level_tracker_C.UpdateLevelDisplay
	struct FText GetXPRequiredForLevel(); // Function WBP_player_level_tracker.WBP_player_level_tracker_C.GetXPRequiredForLevel
	struct FText GetNextLevel(); // Function WBP_player_level_tracker.WBP_player_level_tracker_C.GetNextLevel
	struct FText GetCurrentLevel(); // Function WBP_player_level_tracker.WBP_player_level_tracker_C.GetCurrentLevel
	void DisplayXPAnimationState(); // Function WBP_player_level_tracker.WBP_player_level_tracker_C.DisplayXPAnimationState
	void OnLevelUpAnimCompleted(); // Function WBP_player_level_tracker.WBP_player_level_tracker_C.OnLevelUpAnimCompleted
	void SetPalette(); // Function WBP_player_level_tracker.WBP_player_level_tracker_C.SetPalette
	void ProcessPlayerProgression(struct FPlayerProgression PlayerProgression); // Function WBP_player_level_tracker.WBP_player_level_tracker_C.ProcessPlayerProgression
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_player_level_tracker.WBP_player_level_tracker_C.InitializeWidget
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_player_level_tracker.WBP_player_level_tracker_C.Tick
	void PlayProgressionAnim(float Delay); // Function WBP_player_level_tracker.WBP_player_level_tracker_C.PlayProgressionAnim
	void PreConstruct(bool IsDesignTime); // Function WBP_player_level_tracker.WBP_player_level_tracker_C.PreConstruct
	void Construct(); // Function WBP_player_level_tracker.WBP_player_level_tracker_C.Construct
	void ExecuteUbergraph_WBP_player_level_tracker(int32_t EntryPoint); // Function WBP_player_level_tracker.WBP_player_level_tracker_C.ExecuteUbergraph_WBP_player_level_tracker
};

