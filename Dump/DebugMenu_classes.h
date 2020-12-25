// WidgetBlueprintGeneratedClass DebugMenu.DebugMenu_C
// Size: 0x528 (Inherited: 0x4f0)
struct UDebugMenu_C : public UKSDebugMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f0(0x08)
	struct UImage* BackImage; // 0x4f8(0x08)
	struct UVerticalBox* BaseCommandBox; // 0x500(0x08)
	struct UScrollBox* CommandScroll; // 0x508(0x08)
	struct UImage* ConfirmImage; // 0x510(0x08)
	struct TArray<struct FDebugMenuCommandInfo> CommandStack; // 0x518(0x10)

	enum class EConsoleCommandParamType GetParamTypeForSubCommand(struct FString BaseCommandString); // Function DebugMenu.DebugMenu_C.GetParamTypeForSubCommand
	void AddBaseCommandHeader(struct FString BaseCommand); // Function DebugMenu.DebugMenu_C.AddBaseCommandHeader
	bool NavigateBack(); // Function DebugMenu.DebugMenu_C.NavigateBack
	void CommandSelected(struct FDebugMenuCommandInfo Command); // Function DebugMenu.DebugMenu_C.CommandSelected
	void MakeBoolSubmenu(struct TArray<struct FDebugMenuCommandInfo> Array); // Function DebugMenu.DebugMenu_C.MakeBoolSubmenu
	void InternalPopulate(struct TArray<struct FDebugMenuCommandInfo> Commands); // Function DebugMenu.DebugMenu_C.InternalPopulate
	void PopulateList(int32_t Depth); // Function DebugMenu.DebugMenu_C.PopulateList
	void Construct(); // Function DebugMenu.DebugMenu_C.Construct
	void OnShown(); // Function DebugMenu.DebugMenu_C.OnShown
	void OnHide(); // Function DebugMenu.DebugMenu_C.OnHide
	void InitializeWidgetNavigation(); // Function DebugMenu.DebugMenu_C.InitializeWidgetNavigation
	void ExecuteUbergraph_DebugMenu(int32_t EntryPoint); // Function DebugMenu.DebugMenu_C.ExecuteUbergraph_DebugMenu
};

