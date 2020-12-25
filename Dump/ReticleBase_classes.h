// WidgetBlueprintGeneratedClass ReticleBase.ReticleBase_C
// Size: 0x248 (Inherited: 0x238)
struct UReticleBase_C : public UUserWidget {
	struct UImage* LoneDot; // 0x238(0x08)
	float LowAmmoThreshold; // 0x240(0x04)
	float CriticallyLowAmmoThreshold; // 0x244(0x04)

	void GetAmmoState(struct UKSWeaponComponent* NewParam, enum class EAmmoState Return Value); // Function ReticleBase.ReticleBase_C.GetAmmoState
	void HitConfirm(); // Function ReticleBase.ReticleBase_C.HitConfirm
	void ForceADS(bool Active); // Function ReticleBase.ReticleBase_C.ForceADS
	void GrenadeCook(bool Active, float TickPeriod); // Function ReticleBase.ReticleBase_C.GrenadeCook
	void ChangeADS(bool Active); // Function ReticleBase.ReticleBase_C.ChangeADS
	void KillConfirm(); // Function ReticleBase.ReticleBase_C.KillConfirm
	void Headshot(); // Function ReticleBase.ReticleBase_C.Headshot
	void UpdateOffset(float Offset); // Function ReticleBase.ReticleBase_C.UpdateOffset
};

