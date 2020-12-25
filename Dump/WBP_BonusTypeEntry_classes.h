// WidgetBlueprintGeneratedClass WBP_BonusTypeEntry.WBP_BonusTypeEntry_C
// Size: 0x2b8 (Inherited: 0x238)
struct UWBP_BonusTypeEntry_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UTextBlock* EventName; // 0x240(0x08)
	struct UImage* Image_154; // 0x248(0x08)
	struct UWBP_AsyncIcon_C* WBP_AsyncIcon; // 0x250(0x08)
	struct FKSLimitedTimeEventMetadataRow EventDetails; // 0x258(0x60)

	void DisplayEventDetails(); // Function WBP_BonusTypeEntry.WBP_BonusTypeEntry_C.DisplayEventDetails
	void Construct(); // Function WBP_BonusTypeEntry.WBP_BonusTypeEntry_C.Construct
	void ExecuteUbergraph_WBP_BonusTypeEntry(int32_t EntryPoint); // Function WBP_BonusTypeEntry.WBP_BonusTypeEntry_C.ExecuteUbergraph_WBP_BonusTypeEntry
};

