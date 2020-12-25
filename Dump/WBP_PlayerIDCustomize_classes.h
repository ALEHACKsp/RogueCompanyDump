// WidgetBlueprintGeneratedClass WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C
// Size: 0x528 (Inherited: 0x4e0)
struct UWBP_PlayerIDCustomize_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UImage* Bg; // 0x4e8(0x08)
	struct UNamedSlot* CosmeticGridSlot; // 0x4f0(0x08)
	struct UWBP_Header3_C* WBP_Header3; // 0x4f8(0x08)
	struct UWBP_ItemInfoPanel_C* WBP_ItemInfoPanel; // 0x500(0x08)
	struct UWBP_NavBar_C* WBP_NavBar; // 0x508(0x08)
	struct UWBP_PanelDefault_C* WBP_PanelDefault; // 0x510(0x08)
	struct UWBP_PlayerIdentity_Full_C* WBP_PlayerIdentity_Full; // 0x518(0x08)
	int32_t CurrentTabIndex; // 0x520(0x04)
	int32_t TabCount; // 0x524(0x04)

	void OnPreviousTab(); // Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.OnPreviousTab
	void OnNextTab(); // Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.OnNextTab
	void SetInfoFieldData(struct UPlatformInventoryItem* CosmeticItem, enum class EPlayerAccountSlot ItemSlot); // Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.SetInfoFieldData
	void PreConstruct(bool IsDesignTime); // Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.PreConstruct
	void Construct(); // Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.Construct
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.InitializeWidget
	void Update Player Identity(); // Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.Update Player Identity
	void OnButtonsCreated(); // Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.OnButtonsCreated
	void ExecuteUbergraph_WBP_PlayerIDCustomize(int32_t EntryPoint); // Function WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C.ExecuteUbergraph_WBP_PlayerIDCustomize
};

