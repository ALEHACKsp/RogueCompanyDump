// WidgetBlueprintGeneratedClass WBP_PlayerProfileScreen_StatEntry.WBP_PlayerProfileScreen_StatEntry_C
// Size: 0x260 (Inherited: 0x238)
struct UWBP_PlayerProfileScreen_StatEntry_C : public UUserWidget {
	struct UImage* Image_498; // 0x238(0x08)
	struct UWBP_AsyncIcon_C* ImgIcon; // 0x240(0x08)
	struct UTextBlock* TxtName; // 0x248(0x08)
	struct UTextBlock* TxtValue; // 0x250(0x08)
	struct UKSActivityInstance* ActivityInstance; // 0x258(0x08)

	void SetActivityInstance(struct UKSActivityInstance* Instance, enum class EKSActivityProgressDisplayType DisplayType); // Function WBP_PlayerProfileScreen_StatEntry.WBP_PlayerProfileScreen_StatEntry_C.SetActivityInstance
};

