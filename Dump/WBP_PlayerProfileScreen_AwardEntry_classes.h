// WidgetBlueprintGeneratedClass WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C
// Size: 0x340 (Inherited: 0x238)
struct UWBP_PlayerProfileScreen_AwardEntry_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UWidgetAnimation* OnHover; // 0x240(0x08)
	struct UWidgetAnimation* FadeIn; // 0x248(0x08)
	struct UOverlay* AwardPanelWrapper; // 0x250(0x08)
	struct USizeBox* AwardSizeControl; // 0x258(0x08)
	struct UOverlay* BarWrapper; // 0x260(0x08)
	struct UWBP_KSCosmeticItemDisplay_C* BundleItem1; // 0x268(0x08)
	struct UImage* Fill; // 0x270(0x08)
	struct UWBP_AdditiveImage_C* Glow; // 0x278(0x08)
	struct UImage* GlowFIll; // 0x280(0x08)
	struct UButton* HitTarget; // 0x288(0x08)
	struct USizeBox* IconSizeBox; // 0x290(0x08)
	struct UImage* Image_232; // 0x298(0x08)
	struct UImage* Image_825; // 0x2a0(0x08)
	struct UWBP_AsyncIcon_C* ImgIcon; // 0x2a8(0x08)
	struct UImage* PanelBG; // 0x2b0(0x08)
	struct UImage* PanelHighlight; // 0x2b8(0x08)
	struct USizeBox* PercentComplete; // 0x2c0(0x08)
	struct UCanvasPanel* PnlMain; // 0x2c8(0x08)
	struct UOverlay* RewardItemWrapper; // 0x2d0(0x08)
	struct UHorizontalBox* RewardNameWrapper; // 0x2d8(0x08)
	struct UTextBlock* TextBlock_160; // 0x2e0(0x08)
	struct UWidgetSwitcher* TextSwitcher; // 0x2e8(0x08)
	struct UTextBlock* TxtActivityDesc; // 0x2f0(0x08)
	struct UTextBlock* TxtActivityName; // 0x2f8(0x08)
	struct UTextBlock* TxtDate; // 0x300(0x08)
	struct UTextBlock* TxtProgress; // 0x308(0x08)
	struct UWBP_ProgressEarnedBar_C* WBP_ProgressEarnedBar; // 0x310(0x08)
	struct FPlayerAwardsPanelData ActivityInstance; // 0x318(0x10)
	struct UKSActivity* Activity; // 0x328(0x08)
	bool CompactMode; // 0x330(0x01)
	char UnknownData_331[0x7]; // 0x331(0x07)
	struct UAkAudioEvent* HoverAwardEntrySFX; // 0x338(0x08)

	struct FText GetName(); // Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.GetName
	void GetCompletionTime(struct FText CompletionTimer); // Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.GetCompletionTime
	void UpdateTitle(); // Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.UpdateTitle
	void GetProgressPercentage(float Percentage, bool ShowBar); // Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.GetProgressPercentage
	void GetProgressDisplayText(struct FText Text); // Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.GetProgressDisplayText
	void IsFinished(bool IsFinished); // Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.IsFinished
	void GetActiveTier(struct FActivityTierStructure ActivityTier, bool IsValid); // Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.GetActiveTier
	void UpdateDescription(); // Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.UpdateDescription
	void GetRewardInfo(bool HasReward, struct FText ItemName, struct FText ItemDescription, struct UKSItem* CosmeticItem); // Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.GetRewardInfo
	void UpdateBar(float BarPerc, bool Visible); // Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.UpdateBar
	void ResetState(); // Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.ResetState
	void PlayShowAnimInternal(); // Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.PlayShowAnimInternal
	void PlayShowAnim(float Delay); // Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.PlayShowAnim
	void UpdateValue(); // Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.UpdateValue
	void UpdateIcon(); // Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.UpdateIcon
	void SetActivityInstance(struct FPlayerAwardsPanelData Instance); // Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.SetActivityInstance
	void Construct(); // Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.Construct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.Tick
	void PreConstruct(bool IsDesignTime); // Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.PreConstruct
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void ExecuteUbergraph_WBP_PlayerProfileScreen_AwardEntry(int32_t EntryPoint); // Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.ExecuteUbergraph_WBP_PlayerProfileScreen_AwardEntry
};

