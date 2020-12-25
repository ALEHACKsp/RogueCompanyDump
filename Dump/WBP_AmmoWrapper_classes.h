// WidgetBlueprintGeneratedClass WBP_AmmoWrapper.WBP_AmmoWrapper_C
// Size: 0x260 (Inherited: 0x238)
struct UWBP_AmmoWrapper_C : public UUserWidget {
	struct UHorizontalBox* AmmoWrapper; // 0x238(0x08)
	struct UWBP_AmmoCount_C* WBP_AmmoCount; // 0x240(0x08)
	struct UWBP_AmmoCount_C* WBP_AmmoCount_95; // 0x248(0x08)
	struct TArray<struct UWBP_AmmoCount_C*> AmmoWidgets; // 0x250(0x10)

	void GetAmmoWidgets(struct TArray<struct UWBP_AmmoCount_C*> AmmoWidgtes); // Function WBP_AmmoWrapper.WBP_AmmoWrapper_C.GetAmmoWidgets
	void OnAmmoChanged(struct UKSWeaponComponent* Weapon); // Function WBP_AmmoWrapper.WBP_AmmoWrapper_C.OnAmmoChanged
	void SetInitialAmmoCount(struct UKSWeaponComponent* Weapon); // Function WBP_AmmoWrapper.WBP_AmmoWrapper_C.SetInitialAmmoCount
	void AddAmmoCount(); // Function WBP_AmmoWrapper.WBP_AmmoWrapper_C.AddAmmoCount
};

