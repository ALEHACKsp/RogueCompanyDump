// WidgetBlueprintGeneratedClass WBP_PlayerIdentity_Title.WBP_PlayerIdentity_Title_C
// Size: 0x4f8 (Inherited: 0x4e0)
struct UWBP_PlayerIdentity_Title_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UTextBlock* PlayerTitleText; // 0x4e8(0x08)
	struct UBorder* RarityBackground; // 0x4f0(0x08)

	void SetTitle(struct UKSTitle* Title); // Function WBP_PlayerIdentity_Title.WBP_PlayerIdentity_Title_C.SetTitle
	void Construct(); // Function WBP_PlayerIdentity_Title.WBP_PlayerIdentity_Title_C.Construct
	void ExecuteUbergraph_WBP_PlayerIdentity_Title(int32_t EntryPoint); // Function WBP_PlayerIdentity_Title.WBP_PlayerIdentity_Title_C.ExecuteUbergraph_WBP_PlayerIdentity_Title
};

