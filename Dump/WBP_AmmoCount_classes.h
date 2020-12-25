// WidgetBlueprintGeneratedClass WBP_AmmoCount.WBP_AmmoCount_C
// Size: 0x260 (Inherited: 0x238)
struct UWBP_AmmoCount_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UImage* AmmoActive; // 0x240(0x08)
	struct UImage* AmmoInactive; // 0x248(0x08)
	struct UTexture2D* AmmoTexture; // 0x250(0x08)
	struct UTexture2D* InactiveAmmoTexture; // 0x258(0x08)

	void Construct(); // Function WBP_AmmoCount.WBP_AmmoCount_C.Construct
	void SetAmmoActive(bool IsActive); // Function WBP_AmmoCount.WBP_AmmoCount_C.SetAmmoActive
	void SetAmmoColor(bool IsActive); // Function WBP_AmmoCount.WBP_AmmoCount_C.SetAmmoColor
	void ExecuteUbergraph_WBP_AmmoCount(int32_t EntryPoint); // Function WBP_AmmoCount.WBP_AmmoCount_C.ExecuteUbergraph_WBP_AmmoCount
};

