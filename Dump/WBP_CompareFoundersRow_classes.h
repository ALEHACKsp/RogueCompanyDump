// WidgetBlueprintGeneratedClass WBP_CompareFoundersRow.WBP_CompareFoundersRow_C
// Size: 0x25a (Inherited: 0x238)
struct UWBP_CompareFoundersRow_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UOverlay* StandardCheck; // 0x240(0x08)
	struct UOverlay* StarterCheck; // 0x248(0x08)
	struct UNamedSlot* TextSlot; // 0x250(0x08)
	bool InStarter; // 0x258(0x01)
	bool InStandard; // 0x259(0x01)

	void PreConstruct(bool IsDesignTime); // Function WBP_CompareFoundersRow.WBP_CompareFoundersRow_C.PreConstruct
	void Construct(); // Function WBP_CompareFoundersRow.WBP_CompareFoundersRow_C.Construct
	void ExecuteUbergraph_WBP_CompareFoundersRow(int32_t EntryPoint); // Function WBP_CompareFoundersRow.WBP_CompareFoundersRow_C.ExecuteUbergraph_WBP_CompareFoundersRow
};

