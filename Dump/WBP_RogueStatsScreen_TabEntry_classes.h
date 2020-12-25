// WidgetBlueprintGeneratedClass WBP_RogueStatsScreen_TabEntry.WBP_RogueStatsScreen_TabEntry_C
// Size: 0x568 (Inherited: 0x4e0)
struct UWBP_RogueStatsScreen_TabEntry_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* Hover; // 0x4e8(0x08)
	struct UImage* ActiveIconOverlay; // 0x4f0(0x08)
	struct UButton* BtnSelect; // 0x4f8(0x08)
	struct UImage* Highlight; // 0x500(0x08)
	struct UKSAsyncImage* KSAsyncImage_1; // 0x508(0x08)
	struct UImage* Selected; // 0x510(0x08)
	struct UWBP_AsyncIcon_C* StatIcon; // 0x518(0x08)
	struct UTextBlock* StatName; // 0x520(0x08)
	struct UTextBlock* StatValue; // 0x528(0x08)
	struct UKSAsyncImage* TopDivider; // 0x530(0x08)
	enum class EKSMercMasteryActivityType ActivityType; // 0x538(0x01)
	char UnknownData_539[0x3]; // 0x539(0x03)
	int32_t TotalCount; // 0x53c(0x04)
	struct FMulticastInlineDelegate OnSelected; // 0x540(0x10)
	bool IsSelected; // 0x550(0x01)
	bool NewVar_1; // 0x551(0x01)
	char UnknownData_552[0x6]; // 0x552(0x06)
	struct UAkAudioEvent* ClickRogueStatsScreenTabEntrySFX; // 0x558(0x08)
	struct UAkAudioEvent* HoverRogueStatsScreenTabEntrySFX_1; // 0x560(0x08)

	void SetSelected(bool Selected); // Function WBP_RogueStatsScreen_TabEntry.WBP_RogueStatsScreen_TabEntry_C.SetSelected
	void UpdateTotalCount(); // Function WBP_RogueStatsScreen_TabEntry.WBP_RogueStatsScreen_TabEntry_C.UpdateTotalCount
	void BndEvt__Button_92_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_RogueStatsScreen_TabEntry.WBP_RogueStatsScreen_TabEntry_C.BndEvt__Button_92_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__BtnSelect_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RogueStatsScreen_TabEntry.WBP_RogueStatsScreen_TabEntry_C.BndEvt__BtnSelect_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__BtnSelect_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RogueStatsScreen_TabEntry.WBP_RogueStatsScreen_TabEntry_C.BndEvt__BtnSelect_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void GamepadHover(); // Function WBP_RogueStatsScreen_TabEntry.WBP_RogueStatsScreen_TabEntry_C.GamepadHover
	void Construct(); // Function WBP_RogueStatsScreen_TabEntry.WBP_RogueStatsScreen_TabEntry_C.Construct
	void ExecuteUbergraph_WBP_RogueStatsScreen_TabEntry(int32_t EntryPoint); // Function WBP_RogueStatsScreen_TabEntry.WBP_RogueStatsScreen_TabEntry_C.ExecuteUbergraph_WBP_RogueStatsScreen_TabEntry
	void OnSelected__DelegateSignature(enum class EKSMercMasteryActivityType ActivityType); // Function WBP_RogueStatsScreen_TabEntry.WBP_RogueStatsScreen_TabEntry_C.OnSelected__DelegateSignature
};

