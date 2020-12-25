// WidgetBlueprintGeneratedClass WBP_RewardsTrack.WBP_RewardsTrack_C
// Size: 0x5a0 (Inherited: 0x500)
struct UWBP_RewardsTrack_C : public UKSRewardsTrackWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x500(0x08)
	struct UKSAsyncImage* GamepadScrollLeft; // 0x508(0x08)
	struct UKSAsyncImage* GamepadScrollRight; // 0x510(0x08)
	struct UTextBlock* PageLabel; // 0x518(0x08)
	struct UWBP_ButtonArrow_C* ScrollLeftButton; // 0x520(0x08)
	struct UHorizontalBox* ScrollLeftIndicator; // 0x528(0x08)
	struct UWBP_ButtonArrow_C* ScrollRightButton; // 0x530(0x08)
	struct UHorizontalBox* ScrollRightIndicator; // 0x538(0x08)
	struct UImage* SelectedGradientBack; // 0x540(0x08)
	struct UImage* SideGlow; // 0x548(0x08)
	struct UImage* SideGlow_2; // 0x550(0x08)
	struct UWBP_RewardListEntry_C* WBP_RewardListEntrySTUB; // 0x558(0x08)
	struct UWBP_RewardListEntry_C* WBP_RewardListEntrySTUB_2; // 0x560(0x08)
	struct UWBP_RewardListEntry_C* WBP_RewardListEntrySTUB_3; // 0x568(0x08)
	struct UWBP_RewardListEntry_C* WBP_RewardListEntrySTUB_4; // 0x570(0x08)
	struct UWBP_RewardListEntry_C* WBP_RewardListEntrySTUB_5; // 0x578(0x08)
	struct UWBP_RewardListEntry_C* WBP_RewardListEntrySTUB_6; // 0x580(0x08)
	struct UWBP_RewardListEntry_C* SelectedReward; // 0x588(0x08)
	struct FMulticastInlineDelegate OnPageNavigated; // 0x590(0x10)

	void OnInputStateChanged(char InputState); // Function WBP_RewardsTrack.WBP_RewardsTrack_C.OnInputStateChanged
	void NavigatePageWithDirection(int32_t Direction, bool DidNavigate); // Function WBP_RewardsTrack.WBP_RewardsTrack_C.NavigatePageWithDirection
	void DisplayPage(int32_t Page); // Function WBP_RewardsTrack.WBP_RewardsTrack_C.DisplayPage
	void GetNavigationWidgets(struct TArray<struct UWBP_RewardListEntry_C*> Widgets); // Function WBP_RewardsTrack.WBP_RewardsTrack_C.GetNavigationWidgets
	void InitializeWithActivityInstance(struct UKSActivityInstance* ActivityInstance); // Function WBP_RewardsTrack.WBP_RewardsTrack_C.InitializeWithActivityInstance
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_RewardsTrack.WBP_RewardsTrack_C.InitializeWidget
	void OnEntryClicked(struct UWBP_RewardListEntry_C* Widget, struct FCosmeticSlotDetails RewardSlotDetails, struct UPUMG_StoreItem* StoreItem); // Function WBP_RewardsTrack.WBP_RewardsTrack_C.OnEntryClicked
	void OnClickedPageLeft(); // Function WBP_RewardsTrack.WBP_RewardsTrack_C.OnClickedPageLeft
	void OnClickedPageRight(); // Function WBP_RewardsTrack.WBP_RewardsTrack_C.OnClickedPageRight
	void Construct(); // Function WBP_RewardsTrack.WBP_RewardsTrack_C.Construct
	void ExecuteUbergraph_WBP_RewardsTrack(int32_t EntryPoint); // Function WBP_RewardsTrack.WBP_RewardsTrack_C.ExecuteUbergraph_WBP_RewardsTrack
	void OnPageNavigated__DelegateSignature(int32_t Direction); // Function WBP_RewardsTrack.WBP_RewardsTrack_C.OnPageNavigated__DelegateSignature
};

