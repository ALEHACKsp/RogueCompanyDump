// WidgetBlueprintGeneratedClass WBP_StoreSection.WBP_StoreSection_C
// Size: 0x554 (Inherited: 0x4e0)
struct UWBP_StoreSection_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct USizeBox* CTAWrapper; // 0x4e8(0x08)
	struct UImage* Image_147; // 0x4f0(0x08)
	struct UHorizontalBox* RemainingContainer; // 0x4f8(0x08)
	struct UGridPanel* SectionContents; // 0x500(0x08)
	struct UTextBlock* SectionName; // 0x508(0x08)
	struct UScaleBox* TaxContainer; // 0x510(0x08)
	struct UTextBlock* TaxSub; // 0x518(0x08)
	struct UTextBlock* TimeRemaining; // 0x520(0x08)
	struct UWBP_CallToAction_C* WBP_CallToAction; // 0x528(0x08)
	struct UWBP_Store_C* OwningStore; // 0x530(0x08)
	struct UKSStoreSection* SectionMetaData; // 0x538(0x08)
	float SectionRemainingTime; // 0x540(0x04)
	float Overflow; // 0x544(0x04)
	struct FTimerHandle TickTimer; // 0x548(0x08)
	float STORE_TIMER_INTERVAL; // 0x550(0x04)

	void OnStoreTimerTick(); // Function WBP_StoreSection.WBP_StoreSection_C.OnStoreTimerTick
	void ShowCTA(bool ShowCTA); // Function WBP_StoreSection.WBP_StoreSection_C.ShowCTA
	void UpdateSectionTimer(); // Function WBP_StoreSection.WBP_StoreSection_C.UpdateSectionTimer
	void FindTaxInfo(struct UKSStoreSection* StoreSection); // Function WBP_StoreSection.WBP_StoreSection_C.FindTaxInfo
	void SetItemSelected(int32_t SectionIndex, int32_t ItemIndex); // Function WBP_StoreSection.WBP_StoreSection_C.SetItemSelected
	void SetupSectionNavigation(bool SelectLast); // Function WBP_StoreSection.WBP_StoreSection_C.SetupSectionNavigation
	void SetSectionData(struct UKSStoreSection* SectionData); // Function WBP_StoreSection.WBP_StoreSection_C.SetSectionData
	void ClearContents(); // Function WBP_StoreSection.WBP_StoreSection_C.ClearContents
	void AddItemToSection(struct UKSStoreSectionItem* StoreItem, struct UGridSlot* NewSlot); // Function WBP_StoreSection.WBP_StoreSection_C.AddItemToSection
	void Construct(); // Function WBP_StoreSection.WBP_StoreSection_C.Construct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_StoreSection.WBP_StoreSection_C.Tick
	void ExecuteUbergraph_WBP_StoreSection(int32_t EntryPoint); // Function WBP_StoreSection.WBP_StoreSection_C.ExecuteUbergraph_WBP_StoreSection
};

