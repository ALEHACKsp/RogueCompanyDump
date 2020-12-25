// WidgetBlueprintGeneratedClass WBP_ThrobberHorizontal.WBP_ThrobberHorizontal_C
// Size: 0x268 (Inherited: 0x238)
struct UWBP_ThrobberHorizontal_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UWidgetAnimation* Cycle; // 0x240(0x08)
	struct UImage* Diamond; // 0x248(0x08)
	struct UImage* Diamond_2; // 0x250(0x08)
	struct UImage* Diamond_3; // 0x258(0x08)
	struct UHorizontalBox* ThrobberBox; // 0x260(0x08)

	void PreConstruct(bool IsDesignTime); // Function WBP_ThrobberHorizontal.WBP_ThrobberHorizontal_C.PreConstruct
	void Construct(); // Function WBP_ThrobberHorizontal.WBP_ThrobberHorizontal_C.Construct
	void ExecuteUbergraph_WBP_ThrobberHorizontal(int32_t EntryPoint); // Function WBP_ThrobberHorizontal.WBP_ThrobberHorizontal_C.ExecuteUbergraph_WBP_ThrobberHorizontal
};

