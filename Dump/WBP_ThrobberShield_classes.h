// WidgetBlueprintGeneratedClass WBP_ThrobberShield.WBP_ThrobberShield_C
// Size: 0x278 (Inherited: 0x238)
struct UWBP_ThrobberShield_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UWidgetAnimation* Cycle; // 0x240(0x08)
	struct UImage* Section1; // 0x248(0x08)
	struct UImage* Section2; // 0x250(0x08)
	struct UImage* Section3; // 0x258(0x08)
	struct UImage* Section4; // 0x260(0x08)
	struct UImage* Section5; // 0x268(0x08)
	struct UImage* Section6; // 0x270(0x08)

	void ResetThrobberAnim(); // Function WBP_ThrobberShield.WBP_ThrobberShield_C.ResetThrobberAnim
	void PlayThrobberAnim(); // Function WBP_ThrobberShield.WBP_ThrobberShield_C.PlayThrobberAnim
	void PreConstruct(bool IsDesignTime); // Function WBP_ThrobberShield.WBP_ThrobberShield_C.PreConstruct
	void Construct(); // Function WBP_ThrobberShield.WBP_ThrobberShield_C.Construct
	void ExecuteUbergraph_WBP_ThrobberShield(int32_t EntryPoint); // Function WBP_ThrobberShield.WBP_ThrobberShield_C.ExecuteUbergraph_WBP_ThrobberShield
};

