// WidgetBlueprintGeneratedClass WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C
// Size: 0x5a3 (Inherited: 0x4e0)
struct UWBP_Social_Accordian_Header_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* Hover; // 0x4e8(0x08)
	struct UImage* Arrow; // 0x4f0(0x08)
	struct UImage* ArrowBg_Default; // 0x4f8(0x08)
	struct UImage* ArrowBG_Over; // 0x500(0x08)
	struct UOverlay* ArrowContainer; // 0x508(0x08)
	struct UImage* Background_Default; // 0x510(0x08)
	struct UImage* Background_Over; // 0x518(0x08)
	struct USizeBox* CallToActionWrapper; // 0x520(0x08)
	struct UTextBlock* CountLabel; // 0x528(0x08)
	struct UButton* HitArea; // 0x530(0x08)
	struct UTextBlock* Label; // 0x538(0x08)
	struct USizeBox* MessageContainer; // 0x540(0x08)
	struct UTextBlock* MessageText; // 0x548(0x08)
	struct USizeBox* ProcessingIndicator; // 0x550(0x08)
	struct UWBP_ControllerPrompt_C* Prompt; // 0x558(0x08)
	struct USizeBox* PromptContainer; // 0x560(0x08)
	struct UHorizontalBox* ToggleActionGroup; // 0x568(0x08)
	struct UWBP_CallToAction_C* WBP_CallToAction; // 0x570(0x08)
	struct UWBP_ThrobberHorizontal_C* WBP_ThrobberHorizontal; // 0x578(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x580(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x588(0x10)
	struct UKSDataSocialCategory* DataItem; // 0x598(0x08)
	bool IsExpanded; // 0x5a0(0x01)
	bool IsHoverState; // 0x5a1(0x01)
	bool HasPlayerData; // 0x5a2(0x01)

	void OnHeaderUpdated(struct UKSDataSocialCategory* Category, struct FText Header); // Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnHeaderUpdated
	void OnPlayersUpdated(struct UKSDataSocialCategory* Category, struct TArray<struct UKSDataSocialPlayer*> Players); // Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnPlayersUpdated
	void UpdateMessage(struct UKSDataSocialCategory* Category, bool Processing, struct FText Message); // Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.UpdateMessage
	void GetIsExpanded(bool Expanded); // Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.GetIsExpanded
	void GetData(struct UKSDataSocialCategory* NewParam); // Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.GetData
	void SetExpanded(bool Expanded); // Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.SetExpanded
	void GetOuterHud(struct AKSHUDCommon* HUD); // Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.GetOuterHud
	void SetListItemObject(struct UObject* Object); // Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.SetListItemObject
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.InitializeWidget
	void UninitializeWidget(); // Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.UninitializeWidget
	void HandleClicked(); // Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.HandleClicked
	void OnUnhovered(); // Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnUnhovered
	void OnHovered(); // Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnHovered
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnListItemObjectSet
	void BP_OnEntryReleased(); // Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BP_OnEntryReleased
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BP_OnItemExpansionChanged
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BP_OnItemSelectionChanged
	void Construct(); // Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.Construct
	void UnbindCategoryEvents(); // Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.UnbindCategoryEvents
	void BindCategoryEvents(); // Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BindCategoryEvents
	void OnInputStateChange(char InputState); // Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnInputStateChange
	void ForceUnhover(); // Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.ForceUnhover
	void ExecuteUbergraph_WBP_Social_Accordian_Header(int32_t EntryPoint); // Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.ExecuteUbergraph_WBP_Social_Accordian_Header
	void OnClicked__DelegateSignature(struct UUserWidget* Widget); // Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnClicked__DelegateSignature
};

