// WidgetBlueprintGeneratedClass WBP_Store.WBP_Store_C
// Size: 0x550 (Inherited: 0x4e0)
struct UWBP_Store_C : public UKSStoreWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* SectionShown; // 0x4e8(0x08)
	struct UWidgetSwitcher* DisplayMode; // 0x4f0(0x08)
	struct UWBP_SectionListingBar_C* SectionsListingBar; // 0x4f8(0x08)
	struct UScrollBox* StoreSections; // 0x500(0x08)
	struct UWBP_ThrobberHorizontal_C* WBP_ThrobberHorizontal; // 0x508(0x08)
	struct UWBP_ThrobberShield_C* WBP_ThrobberShield; // 0x510(0x08)
	struct AKSLobbyCharacter* PurchaseConfirmationModel; // 0x518(0x08)
	int32_t CurrentSectionIndex; // 0x520(0x04)
	char UnknownData_524[0x4]; // 0x524(0x04)
	struct TArray<struct UKSStoreSection*> StoreSectionData; // 0x528(0x10)
	struct UWBP_StoreSection_C* CurrentStoreSection; // 0x538(0x08)
	struct TArray<struct UWBP_StoreSection_C*> StoreSectionWidgets; // 0x540(0x10)

	void GetKSStoreItemHelper(struct UKSStoreItemHelper* StoreItemHelper); // Function WBP_Store.WBP_Store_C.GetKSStoreItemHelper
	void GotoPendingSection(); // Function WBP_Store.WBP_Store_C.GotoPendingSection
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_Store.WBP_Store_C.OnKeyDown
	void OnPrevSection(); // Function WBP_Store.WBP_Store_C.OnPrevSection
	void OnNextSection(); // Function WBP_Store.WBP_Store_C.OnNextSection
	void OnStoreSectionSelected(int32_t Index); // Function WBP_Store.WBP_Store_C.OnStoreSectionSelected
	void AddSectionsToStore(struct TArray<struct UKSStoreSection*> StoreSection); // Function WBP_Store.WBP_Store_C.AddSectionsToStore
	bool NavigateBack(); // Function WBP_Store.WBP_Store_C.NavigateBack
	void PopulateStore(); // Function WBP_Store.WBP_Store_C.PopulateStore
	void OnVendorsReceived(int32_t GroupId, struct TArray<int32_t> VendorIds); // Function WBP_Store.WBP_Store_C.OnVendorsReceived
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_Store.WBP_Store_C.InitializeWidget
	void OnBackPrompt(); // Function WBP_Store.WBP_Store_C.OnBackPrompt
	void InitializeWidgetNavigation(); // Function WBP_Store.WBP_Store_C.InitializeWidgetNavigation
	void OnShown(); // Function WBP_Store.WBP_Store_C.OnShown
	void OnHide(); // Function WBP_Store.WBP_Store_C.OnHide
	void OnOpenCodeRedeem(); // Function WBP_Store.WBP_Store_C.OnOpenCodeRedeem
	void FocusGroupNavigateLeftFailure(int32_t FocusGroup); // Function WBP_Store.WBP_Store_C.FocusGroupNavigateLeftFailure
	void FocusGroupNavigateRightFailure(int32_t FocusGroup); // Function WBP_Store.WBP_Store_C.FocusGroupNavigateRightFailure
	void OnPortalOffersReceived(); // Function WBP_Store.WBP_Store_C.OnPortalOffersReceived
	void ExecuteUbergraph_WBP_Store(int32_t EntryPoint); // Function WBP_Store.WBP_Store_C.ExecuteUbergraph_WBP_Store
};

