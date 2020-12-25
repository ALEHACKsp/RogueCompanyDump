// WidgetBlueprintGeneratedClass DebugBaseCommandHeader.DebugBaseCommandHeader_C
// Size: 0x258 (Inherited: 0x238)
struct UDebugBaseCommandHeader_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UTextBlock* HeaderText; // 0x240(0x08)
	struct FString HeaderString; // 0x248(0x10)

	void Construct(); // Function DebugBaseCommandHeader.DebugBaseCommandHeader_C.Construct
	void EstablishIndex(int32_t Index); // Function DebugBaseCommandHeader.DebugBaseCommandHeader_C.EstablishIndex
	void ExecuteUbergraph_DebugBaseCommandHeader(int32_t EntryPoint); // Function DebugBaseCommandHeader.DebugBaseCommandHeader_C.ExecuteUbergraph_DebugBaseCommandHeader
};

