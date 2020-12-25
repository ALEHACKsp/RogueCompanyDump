// WidgetBlueprintGeneratedClass WBP_CallToAction.WBP_CallToAction_C
// Size: 0x278 (Inherited: 0x238)
struct UWBP_CallToAction_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UWidgetAnimation* CTAAnim_2; // 0x240(0x08)
	struct UWidgetAnimation* CTAAnim; // 0x248(0x08)
	struct UImage* Base; // 0x250(0x08)
	struct UImage* Flash; // 0x258(0x08)
	struct UImage* Pulse; // 0x260(0x08)
	struct UImage* Pulse_2; // 0x268(0x08)
	struct UImage* Pulse_3; // 0x270(0x08)

	void StopCTAAnim(); // Function WBP_CallToAction.WBP_CallToAction_C.StopCTAAnim
	void PlayCTAAnim(); // Function WBP_CallToAction.WBP_CallToAction_C.PlayCTAAnim
	void Construct(); // Function WBP_CallToAction.WBP_CallToAction_C.Construct
	void ExecuteUbergraph_WBP_CallToAction(int32_t EntryPoint); // Function WBP_CallToAction.WBP_CallToAction_C.ExecuteUbergraph_WBP_CallToAction
};

