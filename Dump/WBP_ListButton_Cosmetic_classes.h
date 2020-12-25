// WidgetBlueprintGeneratedClass WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C
// Size: 0x568 (Inherited: 0x4e0)
struct UWBP_ListButton_Cosmetic_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* OnSelect; // 0x4e8(0x08)
	struct UWidgetAnimation* OnHover; // 0x4f0(0x08)
	struct UWBP_KSCosmeticItemDisplay_C* CosmeticIcon; // 0x4f8(0x08)
	struct UButton* HitTarget; // 0x500(0x08)
	struct UOverlay* HoveredState; // 0x508(0x08)
	struct UTextBlock* ItemName; // 0x510(0x08)
	struct URichTextBlock* RarityRichText; // 0x518(0x08)
	struct UOverlay* SelectedState; // 0x520(0x08)
	struct UWBP_RogueMasteryIcon_C* WBP_MercMasteryIcon; // 0x528(0x08)
	bool IsSelected; // 0x530(0x01)
	char UnknownData_531[0x7]; // 0x531(0x07)
	struct FMulticastInlineDelegate OnRewardSelected; // 0x538(0x10)
	struct FMasteryRewardData RewardItem; // 0x548(0x10)
	struct UAkAudioEvent* ClickStandardBtnInnerSFX; // 0x558(0x08)
	struct UAkAudioEvent* HoverStandardBtnInnerSFX; // 0x560(0x08)

	void SetRewardItem(struct FMasteryRewardData RewardItem); // Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.SetRewardItem
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void GamepadHover(); // Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.GamepadHover
	void GamepadUnhover(); // Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.GamepadUnhover
	void SetIsSelected(bool IsSelected); // Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.SetIsSelected
	void ExecuteUbergraph_WBP_ListButton_Cosmetic(int32_t EntryPoint); // Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.ExecuteUbergraph_WBP_ListButton_Cosmetic
	void OnRewardSelected__DelegateSignature(struct FMasteryRewardData RewardItem, struct UWidget* WidgetObject); // Function WBP_ListButton_Cosmetic.WBP_ListButton_Cosmetic_C.OnRewardSelected__DelegateSignature
};

