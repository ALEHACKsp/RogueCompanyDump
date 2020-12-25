// WidgetBlueprintGeneratedClass WBP_Context_Bar.WBP_Context_Bar_C
// Size: 0x580 (Inherited: 0x548)
struct UWBP_Context_Bar_C : public UKSContextBarWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x548(0x08)
	struct UHorizontalBox* CenterPromptsContainer; // 0x550(0x08)
	struct UImage* FooterBG; // 0x558(0x08)
	struct UHorizontalBox* LeftPromptsContainer; // 0x560(0x08)
	struct UHorizontalBox* RightPromptsContainer; // 0x568(0x08)
	char CurrentInputState; // 0x570(0x01)
	char UnknownData_571[0x7]; // 0x571(0x07)
	struct UDataTable* ViewTable; // 0x578(0x08)

	void RefreshContextButtons(struct TArray<struct UContextActionData*> ContextActions, bool AlwaysShow); // Function WBP_Context_Bar.WBP_Context_Bar_C.RefreshContextButtons
	void HandleInputStateChange(char CurrentInputState); // Function WBP_Context_Bar.WBP_Context_Bar_C.HandleInputStateChange
	bool CanCloseOnLogout(); // Function WBP_Context_Bar.WBP_Context_Bar_C.CanCloseOnLogout
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_Context_Bar.WBP_Context_Bar_C.InitializeWidget
	void UpdateContextActions(struct TArray<struct UContextActionData*> ContextActions, struct FName CurrentRoute); // Function WBP_Context_Bar.WBP_Context_Bar_C.UpdateContextActions
	void ExecuteUbergraph_WBP_Context_Bar(int32_t EntryPoint); // Function WBP_Context_Bar.WBP_Context_Bar_C.ExecuteUbergraph_WBP_Context_Bar
};

