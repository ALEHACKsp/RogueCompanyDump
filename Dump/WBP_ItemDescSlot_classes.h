// WidgetBlueprintGeneratedClass WBP_ItemDescSlot.WBP_ItemDescSlot_C
// Size: 0x290 (Inherited: 0x238)
struct UWBP_ItemDescSlot_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UOverlay* IconWrapper; // 0x240(0x08)
	struct UTextBlock* ItemDesc; // 0x248(0x08)
	struct UWBP_AsyncIcon_C* ItemIcon; // 0x250(0x08)
	struct UImage* ItemIconBorder; // 0x258(0x08)
	struct UTextBlock* ItemName; // 0x260(0x08)
	struct UTextBlock* ItemType; // 0x268(0x08)
	bool HideIconBorder; // 0x270(0x01)
	char UnknownData_271[0x7]; // 0x271(0x07)
	struct FText ItemTypeText; // 0x278(0x18)

	void Construct(); // Function WBP_ItemDescSlot.WBP_ItemDescSlot_C.Construct
	void PopulateItemDescSlot(struct UKSItem* KSItem); // Function WBP_ItemDescSlot.WBP_ItemDescSlot_C.PopulateItemDescSlot
	void SetTextColors(struct FLinearColor HeaderColor, struct FLinearColor HeadingColor, struct FLinearColor TextColor); // Function WBP_ItemDescSlot.WBP_ItemDescSlot_C.SetTextColors
	void PreConstruct(bool IsDesignTime); // Function WBP_ItemDescSlot.WBP_ItemDescSlot_C.PreConstruct
	void ExecuteUbergraph_WBP_ItemDescSlot(int32_t EntryPoint); // Function WBP_ItemDescSlot.WBP_ItemDescSlot_C.ExecuteUbergraph_WBP_ItemDescSlot
};

