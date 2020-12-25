// WidgetBlueprintGeneratedClass WBP_InWorld_Reticle.WBP_InWorld_Reticle_C
// Size: 0x2d8 (Inherited: 0x238)
struct UWBP_InWorld_Reticle_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UImage* BatteryImage; // 0x240(0x08)
	struct UImage* HR_LeftReticle_L; // 0x248(0x08)
	struct UImage* HR_RightReticle_R; // 0x250(0x08)
	struct UInvalidationBox* InvalidationBox_1; // 0x258(0x08)
	struct UImage* MiddleReticle; // 0x260(0x08)
	struct UImage* Reticle_Brackets; // 0x268(0x08)
	struct UImage* ReticleBorder_Bottom; // 0x270(0x08)
	struct UImage* ReticleBorder_Left; // 0x278(0x08)
	struct UImage* ReticleBorder_Right; // 0x280(0x08)
	struct UImage* ReticleBorder_Top; // 0x288(0x08)
	struct UImage* VR_BottomReticle_B; // 0x290(0x08)
	struct UImage* VR_BottomReticle_M; // 0x298(0x08)
	struct UImage* VR_BottomReticle_T; // 0x2a0(0x08)
	struct UImage* VR_TopReticle; // 0x2a8(0x08)
	struct UWBP_InWorld_ReticleComponents_C* WBP_InWorld_ReticleComponents; // 0x2b0(0x08)
	struct UImage* ZoomImage; // 0x2b8(0x08)
	struct TArray<struct UImage*> ReticleImages; // 0x2c0(0x10)
	struct UKSModInst_Activated* ModInstance; // 0x2d0(0x08)

	void SetPlayerState(struct APlayerState* PlayerState); // Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.SetPlayerState
	void SetReticleImageColor(bool Active); // Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.SetReticleImageColor
	void OnWeaponSet(struct UKSWeaponComponent* WeaponComponent); // Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.OnWeaponSet
	void Construct(); // Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.Construct
	void OnPossession(struct APlayerState* PlayerState); // Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.OnPossession
	void OnModActivated(bool bActive); // Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.OnModActivated
	void Destruct(); // Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.Destruct
	void SetWeaponComponent(struct UKSWeaponComponent* WeaponComponent); // Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.SetWeaponComponent
	void ExecuteUbergraph_WBP_InWorld_Reticle(int32_t EntryPoint); // Function WBP_InWorld_Reticle.WBP_InWorld_Reticle_C.ExecuteUbergraph_WBP_InWorld_Reticle
};

