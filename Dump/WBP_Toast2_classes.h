// WidgetBlueprintGeneratedClass WBP_Toast2.WBP_Toast2_C
// Size: 0x600 (Inherited: 0x4e0)
struct UWBP_Toast2_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* Waiting; // 0x4e8(0x08)
	struct UWidgetAnimation* Outro; // 0x4f0(0x08)
	struct UWidgetAnimation* Intro; // 0x4f8(0x08)
	struct USizeBox* 1pxBar; // 0x500(0x08)
	struct USizeBox* 1pxBar_2; // 0x508(0x08)
	struct UTextBlock* AchievementDetails; // 0x510(0x08)
	struct UTextBlock* AchievementName; // 0x518(0x08)
	struct UTextBlock* AchievementType; // 0x520(0x08)
	struct UImage* Back; // 0x528(0x08)
	struct UImage* BottomBar; // 0x530(0x08)
	struct UImage* EdgeGlowBottom; // 0x538(0x08)
	struct UImage* EdgeGlowTop; // 0x540(0x08)
	struct UImage* Gradient; // 0x548(0x08)
	struct UImage* HeaderBar; // 0x550(0x08)
	struct UImage* IconBack; // 0x558(0x08)
	struct UWidgetSwitcher* IconSwitcher; // 0x560(0x08)
	struct UWBP_RogueMasteryPortrait_C* MasteryPortrait; // 0x568(0x08)
	struct UWBP_AsyncIcon_C* ToastIcon; // 0x570(0x08)
	struct UImage* TopBar; // 0x578(0x08)
	struct FMulticastInlineDelegate OnRemoveToastNotification; // 0x580(0x10)
	struct FMulticastInlineDelegate FinishedOutroAnimation; // 0x590(0x10)
	struct FToastData ToastData; // 0x5a0(0x58)
	struct UWidgetAnimation* NewVar_1; // 0x5f8(0x08)

	void DisplayBattlePassUnlock(); // Function WBP_Toast2.WBP_Toast2_C.DisplayBattlePassUnlock
	void DisplayAwardUnlock(); // Function WBP_Toast2.WBP_Toast2_C.DisplayAwardUnlock
	void DisplayItemUnlock(); // Function WBP_Toast2.WBP_Toast2_C.DisplayItemUnlock
	void DisplayMercMasteryLevelUp(); // Function WBP_Toast2.WBP_Toast2_C.DisplayMercMasteryLevelUp
	void DisplayChallengeAchievement(); // Function WBP_Toast2.WBP_Toast2_C.DisplayChallengeAchievement
	void OnOutroFinished(); // Function WBP_Toast2.WBP_Toast2_C.OnOutroFinished
	void OnWaitingFinished(); // Function WBP_Toast2.WBP_Toast2_C.OnWaitingFinished
	void OnIntroFinished(); // Function WBP_Toast2.WBP_Toast2_C.OnIntroFinished
	void SetRarityTint(struct FLinearColor RarityBase, struct FLinearColor RarityHighlight); // Function WBP_Toast2.WBP_Toast2_C.SetRarityTint
	void Construct(); // Function WBP_Toast2.WBP_Toast2_C.Construct
	void PreConstruct(bool IsDesignTime); // Function WBP_Toast2.WBP_Toast2_C.PreConstruct
	void ExecuteUbergraph_WBP_Toast2(int32_t EntryPoint); // Function WBP_Toast2.WBP_Toast2_C.ExecuteUbergraph_WBP_Toast2
	void FinishedOutroAnimation__DelegateSignature(); // Function WBP_Toast2.WBP_Toast2_C.FinishedOutroAnimation__DelegateSignature
	void OnRemoveToastNotification__DelegateSignature(struct UKSWidget* ToastWidget); // Function WBP_Toast2.WBP_Toast2_C.OnRemoveToastNotification__DelegateSignature
};

