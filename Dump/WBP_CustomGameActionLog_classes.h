// WidgetBlueprintGeneratedClass WBP_CustomGameActionLog.WBP_CustomGameActionLog_C
// Size: 0x251 (Inherited: 0x238)
struct UWBP_CustomGameActionLog_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UVerticalBox* Container; // 0x240(0x08)
	struct UScrollBox* ScrollContainer; // 0x248(0x08)
	bool ScrolledToBottom; // 0x250(0x01)

	void ClearLog(); // Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.ClearLog
	void AddLog(struct FText Text); // Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.AddLog
	void PreConstruct(bool IsDesignTime); // Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.PreConstruct
	void Construct(); // Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.Construct
	void HandleScrollBottom(); // Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.HandleScrollBottom
	void BndEvt__ScrollContainer_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.BndEvt__ScrollContainer_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
	void ExecuteUbergraph_WBP_CustomGameActionLog(int32_t EntryPoint); // Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.ExecuteUbergraph_WBP_CustomGameActionLog
};

