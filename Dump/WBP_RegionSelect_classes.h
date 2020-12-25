// WidgetBlueprintGeneratedClass WBP_RegionSelect.WBP_RegionSelect_C
// Size: 0x55c (Inherited: 0x4e0)
struct UWBP_RegionSelect_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* OnShow; // 0x4e8(0x08)
	struct UImage* Decro; // 0x4f0(0x08)
	struct UScrollBox* RegionScrollBox; // 0x4f8(0x08)
	struct UTextBlock* Title; // 0x500(0x08)
	struct UTextBlock* Title_3; // 0x508(0x08)
	struct UWBP_ModalPopupContainer_C* WBP_ModalPopupContainer; // 0x510(0x08)
	struct FMulticastInlineDelegate OnRegionSelected; // 0x518(0x10)
	struct FMulticastInlineDelegate OnRegionSelectEntriesCreated; // 0x528(0x10)
	struct TArray<struct UWBP_RegionSelect_Entry_C*> Region Select Array; // 0x538(0x10)
	bool bForceSelection; // 0x548(0x01)
	char UnknownData_549[0x7]; // 0x549(0x07)
	struct UAkAudioEvent* ShowSFX; // 0x550(0x08)
	int32_t NewVar_1; // 0x558(0x04)

	void GetRegionSelectEntries(struct TArray<struct UWBP_RegionSelect_Entry_C*> RegionSelectEntries); // Function WBP_RegionSelect.WBP_RegionSelect_C.GetRegionSelectEntries
	void PreConstruct(bool IsDesignTime); // Function WBP_RegionSelect.WBP_RegionSelect_C.PreConstruct
	void Construct(); // Function WBP_RegionSelect.WBP_RegionSelect_C.Construct
	void LoginState(enum class EPUMG_LoginState LoginState); // Function WBP_RegionSelect.WBP_RegionSelect_C.LoginState
	void Populate Regions(); // Function WBP_RegionSelect.WBP_RegionSelect_C.Populate Regions
	void OnChildButtonSelectedRegion(); // Function WBP_RegionSelect.WBP_RegionSelect_C.OnChildButtonSelectedRegion
	void BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_0_CloseButtonClicked__DelegateSignature(); // Function WBP_RegionSelect.WBP_RegionSelect_C.BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_0_CloseButtonClicked__DelegateSignature
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_RegionSelect.WBP_RegionSelect_C.InitializeWidget
	void OnShown(); // Function WBP_RegionSelect.WBP_RegionSelect_C.OnShown
	void ExecuteUbergraph_WBP_RegionSelect(int32_t EntryPoint); // Function WBP_RegionSelect.WBP_RegionSelect_C.ExecuteUbergraph_WBP_RegionSelect
	void OnRegionSelectEntriesCreated__DelegateSignature(); // Function WBP_RegionSelect.WBP_RegionSelect_C.OnRegionSelectEntriesCreated__DelegateSignature
	void OnRegionSelected__DelegateSignature(); // Function WBP_RegionSelect.WBP_RegionSelect_C.OnRegionSelected__DelegateSignature
};

