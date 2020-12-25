// WidgetBlueprintGeneratedClass DebugMenuItem.DebugMenuItem_C
// Size: 0x528 (Inherited: 0x4e0)
struct UDebugMenuItem_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UImage* Arrow; // 0x4e8(0x08)
	struct UBorder* ColorBkg; // 0x4f0(0x08)
	struct UTextBlock* CommandText; // 0x4f8(0x08)
	struct FMulticastInlineDelegate ItemSelected; // 0x500(0x10)
	struct FDebugMenuCommandInfo DebugCommand; // 0x510(0x18)

	bool NavigateConfirm(); // Function DebugMenuItem.DebugMenuItem_C.NavigateConfirm
	void Construct(); // Function DebugMenuItem.DebugMenuItem_C.Construct
	void GamepadHover(); // Function DebugMenuItem.DebugMenuItem_C.GamepadHover
	void GamepadUnhover(); // Function DebugMenuItem.DebugMenuItem_C.GamepadUnhover
	void ExecuteUbergraph_DebugMenuItem(int32_t EntryPoint); // Function DebugMenuItem.DebugMenuItem_C.ExecuteUbergraph_DebugMenuItem
	void ItemSelected__DelegateSignature(struct FDebugMenuCommandInfo Command); // Function DebugMenuItem.DebugMenuItem_C.ItemSelected__DelegateSignature
};

