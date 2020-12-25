// WidgetBlueprintGeneratedClass RifleReticle.RifleReticle_C
// Size: 0x338 (Inherited: 0x248)
struct URifleReticle_C : public UReticleBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UWidgetAnimation* AmmoGaugeCriticallyLowAmmo; // 0x250(0x08)
	struct UWidgetAnimation* AmmoGaugeLowAmmo; // 0x258(0x08)
	struct UWidgetAnimation* GaugeFade; // 0x260(0x08)
	struct UWidgetAnimation* GrenadeAnim; // 0x268(0x08)
	struct UWidgetAnimation* KillAnim; // 0x270(0x08)
	struct UWidgetAnimation* HeadshotAnim; // 0x278(0x08)
	struct UWidgetAnimation* HitAnim; // 0x280(0x08)
	struct UWidgetAnimation* ADSFade; // 0x288(0x08)
	struct UOverlay* AmmoProgress; // 0x290(0x08)
	struct USizeBox* BarBottom; // 0x298(0x08)
	struct UImage* BarBottom_Image; // 0x2a0(0x08)
	struct USizeBox* BarLeft; // 0x2a8(0x08)
	struct UImage* BarLeft_Image; // 0x2b0(0x08)
	struct USizeBox* BarRight; // 0x2b8(0x08)
	struct UImage* BarRight_Image; // 0x2c0(0x08)
	struct USizeBox* BarTop; // 0x2c8(0x08)
	struct UImage* BarTop_Image; // 0x2d0(0x08)
	struct USizeBox* CenterDot; // 0x2d8(0x08)
	struct UImage* CenterDot_Image; // 0x2e0(0x08)
	struct UImage* circle_progress; // 0x2e8(0x08)
	struct UImage* cirlce_progress_bg; // 0x2f0(0x08)
	struct UImage* HeadshotMarker; // 0x2f8(0x08)
	struct UImage* HitMarker; // 0x300(0x08)
	struct UImage* KillMarker; // 0x308(0x08)
	struct UImage* reddot; // 0x310(0x08)
	struct FTimerHandle GrenadeTickTimer; // 0x318(0x08)
	float OffsetScaleThreshold; // 0x320(0x04)
	struct FVector2D MagazineOffset; // 0x324(0x08)
	float LowAmmoThreshold_0_1; // 0x32c(0x04)
	enum class EReticleType ReticleType; // 0x330(0x01)
	char UnknownData_331[0x3]; // 0x331(0x03)
	float MinOffset; // 0x334(0x04)

	void HideAmmoProgressCircle(bool IsADS); // Function RifleReticle.RifleReticle_C.HideAmmoProgressCircle
	void IsValidWeaponType(struct UKSWeaponComponent* NewParam1, bool IsValidWeaponType); // Function RifleReticle.RifleReticle_C.IsValidWeaponType
	void ShouldHideAmmoGauge(struct UKSWeaponComponent* Weapon, bool bShouldHideAmmoGauge); // Function RifleReticle.RifleReticle_C.ShouldHideAmmoGauge
	void ColorSet(struct FLinearColor NewColor); // Function RifleReticle.RifleReticle_C.ColorSet
	void UpdateReticleDisplay(float InOffset); // Function RifleReticle.RifleReticle_C.UpdateReticleDisplay
	void Construct(); // Function RifleReticle.RifleReticle_C.Construct
	void UpdateOffset(float Offset); // Function RifleReticle.RifleReticle_C.UpdateOffset
	void ChangeADS(bool Active); // Function RifleReticle.RifleReticle_C.ChangeADS
	void HitConfirm(); // Function RifleReticle.RifleReticle_C.HitConfirm
	void Headshot(); // Function RifleReticle.RifleReticle_C.Headshot
	void KillConfirm(); // Function RifleReticle.RifleReticle_C.KillConfirm
	void GrenadeCook(bool Active, float TickPeriod); // Function RifleReticle.RifleReticle_C.GrenadeCook
	void GrenadeTick(); // Function RifleReticle.RifleReticle_C.GrenadeTick
	void UpdateAmmoGauge(struct UKSWeaponComponent* Weapon); // Function RifleReticle.RifleReticle_C.UpdateAmmoGauge
	void UpdateMagazineOffset(struct FVector2D NewOffset); // Function RifleReticle.RifleReticle_C.UpdateMagazineOffset
	void ExecuteUbergraph_RifleReticle(int32_t EntryPoint); // Function RifleReticle.RifleReticle_C.ExecuteUbergraph_RifleReticle
};

