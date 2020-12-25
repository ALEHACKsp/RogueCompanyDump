// WidgetBlueprintGeneratedClass WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C
// Size: 0x522 (Inherited: 0x4e0)
struct UWBP_CustomMassInviteEntry_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* Selected; // 0x4e8(0x08)
	struct UWidgetAnimation* Hover; // 0x4f0(0x08)
	struct UButton* HitArea; // 0x4f8(0x08)
	struct UOverlay* InviteSentBg; // 0x500(0x08)
	struct UWBP_PlayerInfoDisplay_C* WBP_PlayerInfoDisplay; // 0x508(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x510(0x10)
	bool IsToggled; // 0x520(0x01)
	bool DisplayHovered; // 0x521(0x01)

	void GetPlayerInfo(struct UKSPlayerInfo* playerinfo); // Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.GetPlayerInfo
	void BndEvt__HitArea_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BndEvt__HitArea_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__HitArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BndEvt__HitArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__HitArea_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BndEvt__HitArea_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BP_OnItemSelectionChanged
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BP_OnItemExpansionChanged
	void BP_OnEntryReleased(); // Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BP_OnEntryReleased
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.OnListItemObjectSet
	void ForceHovered(); // Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.ForceHovered
	void ForceUnhovered(); // Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.ForceUnhovered
	void PlaySelection(); // Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.PlaySelection
	void PlayDeselection(); // Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.PlayDeselection
	void SetSelected(bool Selected); // Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.SetSelected
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.OnMouseEnter
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.OnMouseLeave
	void ExecuteUbergraph_WBP_CustomMassInviteEntry(int32_t EntryPoint); // Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.ExecuteUbergraph_WBP_CustomMassInviteEntry
	void OnClicked__DelegateSignature(struct UWidget* Widget); // Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.OnClicked__DelegateSignature
};

