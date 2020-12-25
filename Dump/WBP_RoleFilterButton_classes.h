// WidgetBlueprintGeneratedClass WBP_RoleFilterButton.WBP_RoleFilterButton_C
// Size: 0x500 (Inherited: 0x4e0)
struct UWBP_RoleFilterButton_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UButton* FilterButton; // 0x4e8(0x08)
	struct UKSAsyncImage* RoleIcon; // 0x4f0(0x08)
	struct UKSJobRole* Role; // 0x4f8(0x08)

	void Construct(); // Function WBP_RoleFilterButton.WBP_RoleFilterButton_C.Construct
	void ExecuteUbergraph_WBP_RoleFilterButton(int32_t EntryPoint); // Function WBP_RoleFilterButton.WBP_RoleFilterButton_C.ExecuteUbergraph_WBP_RoleFilterButton
};

