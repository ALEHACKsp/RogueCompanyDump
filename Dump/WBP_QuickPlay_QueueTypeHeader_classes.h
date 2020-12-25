// WidgetBlueprintGeneratedClass WBP_QuickPlay_QueueTypeHeader.WBP_QuickPlay_QueueTypeHeader_C
// Size: 0x260 (Inherited: 0x238)
struct UWBP_QuickPlay_QueueTypeHeader_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UTextBlock* QueueType; // 0x240(0x08)
	struct FText QueueTypeTxt; // 0x248(0x18)

	void Construct(); // Function WBP_QuickPlay_QueueTypeHeader.WBP_QuickPlay_QueueTypeHeader_C.Construct
	void PreConstruct(bool IsDesignTime); // Function WBP_QuickPlay_QueueTypeHeader.WBP_QuickPlay_QueueTypeHeader_C.PreConstruct
	void SetHeaderText(struct FText QueueType); // Function WBP_QuickPlay_QueueTypeHeader.WBP_QuickPlay_QueueTypeHeader_C.SetHeaderText
	void ExecuteUbergraph_WBP_QuickPlay_QueueTypeHeader(int32_t EntryPoint); // Function WBP_QuickPlay_QueueTypeHeader.WBP_QuickPlay_QueueTypeHeader_C.ExecuteUbergraph_WBP_QuickPlay_QueueTypeHeader
};

