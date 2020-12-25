// WidgetBlueprintGeneratedClass DropdownList.DropdownList_C
// Size: 0x558 (Inherited: 0x4e0)
struct UDropdownList_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UScrollBox* DropdownScroll; // 0x4e8(0x08)
	struct USizeBox* SizeBox_1; // 0x4f0(0x08)
	struct TArray<struct FText> Options; // 0x4f8(0x10)
	struct FMulticastInlineDelegate OnSelection; // 0x508(0x10)
	struct FMulticastInlineDelegate OnCancel; // 0x518(0x10)
	struct TArray<struct UDropdownEntry_C*> DropdownEntries; // 0x528(0x10)
	struct UDropdownEntry_C* SelectedEntry; // 0x538(0x08)
	float SizeBoxMaxHeight; // 0x540(0x04)
	char UnknownData_544[0x4]; // 0x544(0x04)
	struct FMulticastInlineDelegate OnHoverPreview; // 0x548(0x10)

	bool NavigateBack(); // Function DropdownList.DropdownList_C.NavigateBack
	void InitializeWidget(struct APUMG_HUD* HUD); // Function DropdownList.DropdownList_C.InitializeWidget
	void Selection(int32_t Index, struct FText Text); // Function DropdownList.DropdownList_C.Selection
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function DropdownList.DropdownList_C.OnMouseLeave
	void InitializeWidgetNavigation(); // Function DropdownList.DropdownList_C.InitializeWidgetNavigation
	void HandleOnHover(struct UWidget* Widget, int32_t Index); // Function DropdownList.DropdownList_C.HandleOnHover
	void SetSelectedEntryByIndex(int32_t Index); // Function DropdownList.DropdownList_C.SetSelectedEntryByIndex
	void ExecuteUbergraph_DropdownList(int32_t EntryPoint); // Function DropdownList.DropdownList_C.ExecuteUbergraph_DropdownList
	void OnHoverPreview__DelegateSignature(int32_t Index); // Function DropdownList.DropdownList_C.OnHoverPreview__DelegateSignature
	void OnCancel__DelegateSignature(); // Function DropdownList.DropdownList_C.OnCancel__DelegateSignature
	void OnSelection__DelegateSignature(int32_t Index, struct FText Text); // Function DropdownList.DropdownList_C.OnSelection__DelegateSignature
};

