// WidgetBlueprintGeneratedClass WBP_KeyCallout.WBP_KeyCallout_C
// Size: 0x260 (Inherited: 0x238)
struct UWBP_KeyCallout_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UWBP_AsyncIcon_C* CalloutIcon; // 0x240(0x08)
	struct FKey Key; // 0x248(0x18)

	void UpdateKeyDisplay(); // Function WBP_KeyCallout.WBP_KeyCallout_C.UpdateKeyDisplay
	void SetKey(struct FKey Key); // Function WBP_KeyCallout.WBP_KeyCallout_C.SetKey
	void PreConstruct(bool IsDesignTime); // Function WBP_KeyCallout.WBP_KeyCallout_C.PreConstruct
	void ExecuteUbergraph_WBP_KeyCallout(int32_t EntryPoint); // Function WBP_KeyCallout.WBP_KeyCallout_C.ExecuteUbergraph_WBP_KeyCallout
};

