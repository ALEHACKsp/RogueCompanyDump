// WidgetBlueprintGeneratedClass WBP_Challenge_Renderer.WBP_Challenge_Renderer_C
// Size: 0x5a8 (Inherited: 0x4e0)
struct UWBP_Challenge_Renderer_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* ShowHover; // 0x4e8(0x08)
	struct UWidgetAnimation* rotating_arrows; // 0x4f0(0x08)
	struct UImage* btnStroke1px; // 0x4f8(0x08)
	struct UTextBlock* ChallengeDescription; // 0x500(0x08)
	struct UWidgetSwitcher* ChallengeDisplayMode; // 0x508(0x08)
	struct UTextBlock* ChallengeProgress; // 0x510(0x08)
	struct UImage* CheckMark; // 0x518(0x08)
	struct UButton* HitTarget; // 0x520(0x08)
	struct UButton* HoverButton; // 0x528(0x08)
	struct UWBP_ProgressBar_C* ProgressBar; // 0x530(0x08)
	struct UImage* RerollArrows; // 0x538(0x08)
	struct UButton* RerollButton; // 0x540(0x08)
	struct UCanvasPanel* RerollIndicator; // 0x548(0x08)
	struct UWidgetSwitcher* RewardImageSwitcher; // 0x550(0x08)
	struct UKSAsyncImage* RewardImageWithoutQty; // 0x558(0x08)
	struct UKSAsyncImage* RewardImageWithQty; // 0x560(0x08)
	struct UTextBlock* RewardQty; // 0x568(0x08)
	struct UImage* SelectionFrame; // 0x570(0x08)
	struct UImage* Stroke1px_2; // 0x578(0x08)
	struct UKSChallengeActivityInstance* ChallengeActivityInstance; // 0x580(0x08)
	struct FMulticastInlineDelegate DisplayRerollPrompt; // 0x588(0x10)
	struct UAkAudioEvent* HoverChallegeRendererSFX; // 0x598(0x08)
	struct UAkAudioEvent* ClickRefreshChallegeRendererSFX; // 0x5a0(0x08)

	bool NavigateConfirmPressed(); // Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.NavigateConfirmPressed
	void SetRewardDisplay(struct FActivityTier ActivityTier); // Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.SetRewardDisplay
	void SetChallengeInformation(struct UKSChallengeActivityInstance* ChallengeActivity); // Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.SetChallengeInformation
	void PreConstruct(bool IsDesignTime); // Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.PreConstruct
	void BndEvt__RerollButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__RerollButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void BndEvt__RerollButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__RerollButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	void BndEvt__RerollButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__RerollButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	void BndEvt__HoverButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	void GamepadHover(); // Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.GamepadHover
	void GamepadUnhover(); // Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.GamepadUnhover
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.InitializeWidget
	void BndEvt__HoverButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__HoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.BndEvt__HoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void ExecuteUbergraph_WBP_Challenge_Renderer(int32_t EntryPoint); // Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.ExecuteUbergraph_WBP_Challenge_Renderer
	void DisplayRerollPrompt__DelegateSignature(bool Show); // Function WBP_Challenge_Renderer.WBP_Challenge_Renderer_C.DisplayRerollPrompt__DelegateSignature
};

