// WidgetBlueprintGeneratedClass WBP_RogueListing.WBP_RogueListing_C
// Size: 0x591 (Inherited: 0x4e0)
struct UWBP_RogueListing_C : public UKSJobSelectionWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UGridPanel* JobSelectionGrid; // 0x4e8(0x08)
	struct UOverlay* JobSelectionGridOverlay; // 0x4f0(0x08)
	struct UWBP_ThrobberHorizontal_C* Loading; // 0x4f8(0x08)
	struct UVerticalBox* LoadingWrapper; // 0x500(0x08)
	struct URetainerBox* Mask; // 0x508(0x08)
	struct UHorizontalBox* RoleFilters; // 0x510(0x08)
	struct UScrollBox* ScrollBox_1; // 0x518(0x08)
	struct TArray<struct UWBP_JobGeneralButton_C*> JobButtons; // 0x520(0x10)
	struct FMulticastInlineDelegate OnJobSelected; // 0x530(0x10)
	struct FMulticastInlineDelegate OnJobListReady; // 0x540(0x10)
	struct AKSLobbyCharacter* MercSelectionCharacter; // 0x550(0x08)
	int32_t ValidJobs; // 0x558(0x04)
	char UnknownData_55C[0x4]; // 0x55c(0x04)
	struct TArray<struct UKSJobRole*> JobRoles; // 0x560(0x10)
	struct UKSItem* CurrentlyHoveredJob; // 0x570(0x08)
	struct UKSMercManager* MercManager; // 0x578(0x08)
	bool bCurrentlyHoveredRogueOwned; // 0x580(0x01)
	char UnknownData_581[0x3]; // 0x581(0x03)
	int32_t GRID WIDTH; // 0x584(0x04)
	struct UKSJobItem* SelectedJob; // 0x588(0x08)
	bool PreserveSelectedJobOnHide; // 0x590(0x01)

	void SetRogueOwned(struct UPUMG_StoreItem* StoreItem); // Function WBP_RogueListing.WBP_RogueListing_C.SetRogueOwned
	void ResetFavoriteIcons(); // Function WBP_RogueListing.WBP_RogueListing_C.ResetFavoriteIcons
	void OnJobHovered(struct UKSJobItem* JobItem, struct UPUMG_StoreItem* StoreItem); // Function WBP_RogueListing.WBP_RogueListing_C.OnJobHovered
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_RogueListing.WBP_RogueListing_C.OnKeyUp
	bool NavigateBack(); // Function WBP_RogueListing.WBP_RogueListing_C.NavigateBack
	void PopulateRoleFilters(); // Function WBP_RogueListing.WBP_RogueListing_C.PopulateRoleFilters
	void GetJobButtons(struct TArray<struct UWBP_JobGeneralButton_C*> JobButtons); // Function WBP_RogueListing.WBP_RogueListing_C.GetJobButtons
	void SetRowAndColumn(struct UGridSlot* GridSlot, int32_t Index, int32_t MaxRowCount); // Function WBP_RogueListing.WBP_RogueListing_C.SetRowAndColumn
	void ResetButtonState(); // Function WBP_RogueListing.WBP_RogueListing_C.ResetButtonState
	void ResetJobList(); // Function WBP_RogueListing.WBP_RogueListing_C.ResetJobList
	void PopulateJobList(struct TArray<struct UPUMG_StoreItem*> LoadoutOptions); // Function WBP_RogueListing.WBP_RogueListing_C.PopulateJobList
	void InitializeTickAnimations(); // Function WBP_RogueListing.WBP_RogueListing_C.InitializeTickAnimations
	void OnShowScreenAnimUpdate(float ElapsedTime, float ElapsedAlpha); // Function WBP_RogueListing.WBP_RogueListing_C.OnShowScreenAnimUpdate
	void OnShowScreenAnimFinished(); // Function WBP_RogueListing.WBP_RogueListing_C.OnShowScreenAnimFinished
	void StartShowScreenAnim(); // Function WBP_RogueListing.WBP_RogueListing_C.StartShowScreenAnim
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_RogueListing.WBP_RogueListing_C.InitializeWidget
	void HandleOnJobSelected(struct UKSJobItem* SelectedJob); // Function WBP_RogueListing.WBP_RogueListing_C.HandleOnJobSelected
	void OnShown(); // Function WBP_RogueListing.WBP_RogueListing_C.OnShown
	void ExternalOnShown(); // Function WBP_RogueListing.WBP_RogueListing_C.ExternalOnShown
	void InitializeWidgetNavigation(); // Function WBP_RogueListing.WBP_RogueListing_C.InitializeWidgetNavigation
	void OnBackPrompt(); // Function WBP_RogueListing.WBP_RogueListing_C.OnBackPrompt
	void RefreshJobItems(); // Function WBP_RogueListing.WBP_RogueListing_C.RefreshJobItems
	void HandleOnPurchasedItem(struct UPUMG_StoreItem* Item, struct UPUMG_StoreItemPrice* Price); // Function WBP_RogueListing.WBP_RogueListing_C.HandleOnPurchasedItem
	void OnItemGamepadHovered(struct UPUMG_Widget* Widget, bool bHovered); // Function WBP_RogueListing.WBP_RogueListing_C.OnItemGamepadHovered
	void OnHide(); // Function WBP_RogueListing.WBP_RogueListing_C.OnHide
	void ExecuteUbergraph_WBP_RogueListing(int32_t EntryPoint); // Function WBP_RogueListing.WBP_RogueListing_C.ExecuteUbergraph_WBP_RogueListing
	void OnJobListReady__DelegateSignature(struct TArray<struct UWBP_JobGeneralButton_C*> JobButtons); // Function WBP_RogueListing.WBP_RogueListing_C.OnJobListReady__DelegateSignature
	void OnJobSelected__DelegateSignature(struct UKSJobItem* JobItem); // Function WBP_RogueListing.WBP_RogueListing_C.OnJobSelected__DelegateSignature
};

