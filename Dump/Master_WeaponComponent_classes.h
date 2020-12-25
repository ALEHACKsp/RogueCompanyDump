// DynamicClass Master_WeaponComponent.Master_WeaponComponent_C
// Size: 0x1180 (Inherited: 0x5d0)
struct UMaster_WeaponComponent_C : public UKSWeaponComponent {
	bool Is ADS; // 0x5d0(0x01)
	char UnknownData_5D1[0x3]; // 0x5d1(0x03)
	struct FName Owner Fire Section; // 0x5d4(0x08)
	char UnknownData_5DC[0x4]; // 0x5dc(0x04)
	struct TArray<struct FName> Owner 1p ADS Fire Section; // 0x5e0(0x10)
	struct FName Deattach Slot Name; // 0x5f0(0x08)
	struct FName Attach Slot Name; // 0x5f8(0x08)
	struct FName MIrror Attach Slot Name; // 0x600(0x08)
	int32_t Weapon Fire Sound ID; // 0x608(0x04)
	bool Weapon Fire Sound Interrupts; // 0x60c(0x01)
	char UnknownData_60D[0x3]; // 0x60d(0x03)
	struct UAkAudioEvent* Weapon Casing Sound; // 0x610(0x08)
	struct UAkAudioEvent* Equip Sound; // 0x618(0x08)
	float Speed of Sound; // 0x620(0x04)
	float Echo Max Distance; // 0x624(0x04)
	struct TArray<struct FRotator> Echo Directions; // 0x628(0x10)
	struct FVector Echo Sound Location; // 0x638(0x0c)
	char UnknownData_644[0x4]; // 0x644(0x04)
	struct UParticleSystem* Muzzle Flash 3p; // 0x648(0x08)
	struct UParticleSystem* Muzzle Flash 1p; // 0x650(0x08)
	struct FName Muzzle Flash Attach Name; // 0x658(0x08)
	struct FName Cartridge Ejection Attach Name; // 0x660(0x08)
	struct FHitDecalInfo Default Decal Info; // 0x668(0x28)
	struct TMap<char, struct FHitDecalInfo> Physical Decal Materials; // 0x690(0x50)
	struct UParticleSystem* Tracer Template; // 0x6e0(0x08)
	float Next Tracer Time; // 0x6e8(0x04)
	float Minimum Tracer Delay; // 0x6ec(0x04)
	float Maximum Tracer Delay; // 0x6f0(0x04)
	int32_t Shot Count; // 0x6f4(0x04)
	struct UStaticMesh* Tracer Mesh; // 0x6f8(0x08)
	int32_t Tracer Frequency; // 0x700(0x04)
	char Decal Physical Surface; // 0x704(0x01)
	char UnknownData_705[0x3]; // 0x705(0x03)
	struct FVector Decal Location; // 0x708(0x0c)
	char UnknownData_714[0x4]; // 0x714(0x04)
	struct UMaterialInterface* Temp Mesh Material Override; // 0x718(0x08)
	int32_t CountedShotsLeft; // 0x720(0x04)
	char UnknownData_724[0x4]; // 0x724(0x04)
	struct UObject* 1P ADS Camera Shake; // 0x728(0x08)
	struct TArray<struct FName> Owner 3p Fire Section; // 0x730(0x10)
	int32_t Counter; // 0x740(0x04)
	char UnknownData_744[0x4]; // 0x744(0x04)
	struct UObject* AOS Camera Shake; // 0x748(0x08)
	struct UObject* 3P Camera Shake; // 0x750(0x08)
	int32_t CountedMagSize; // 0x758(0x04)
	bool bIsSecondaryWeapon; // 0x75c(0x01)
	bool Is Pistol; // 0x75d(0x01)
	bool Is Dual Guns; // 0x75e(0x01)
	bool ShouldSpawnTracers; // 0x75f(0x01)
	bool ShouldHaveBulletFX; // 0x760(0x01)
	bool ShouldHaveBulletSpangs; // 0x761(0x01)
	bool bWasFiredByOwner; // 0x762(0x01)
	char UnknownData_763[0x1]; // 0x763(0x01)
	float NearMissDistance; // 0x764(0x04)
	struct FName MagazineDropBone; // 0x768(0x08)
	bool DropMagazineMirror Enabled; // 0x770(0x01)
	char UnknownData_771[0x3]; // 0x771(0x03)
	struct FName Mirror_MagazineDropBone; // 0x774(0x08)
	bool DropBoneOnWeapon; // 0x77c(0x01)
	bool TrackingMagDropBone; // 0x77d(0x01)
	char UnknownData_77E[0x2]; // 0x77e(0x02)
	struct FTransform DropMagSpawnTransformOveride; // 0x780(0x30)
	struct FVector DropBonePreviousPosition; // 0x7b0(0x0c)
	struct FVector DropBoneVelocity; // 0x7bc(0x0c)
	struct FVector DropVelocityOverride; // 0x7c8(0x0c)
	bool Is Gun Holstered; // 0x7d4(0x01)
	bool DropMultipleMags; // 0x7d5(0x01)
	bool Drop Multiple Mags Velocity Inheritance Override; // 0x7d6(0x01)
	char UnknownData_7D7[0x1]; // 0x7d7(0x01)
	struct TArray<struct FMultiMagDropInfo> MultiMagArray; // 0x7d8(0x10)
	bool Is Multi Stage Reload; // 0x7e8(0x01)
	bool Maintain Holster; // 0x7e9(0x01)
	char UnknownData_7EA[0x2]; // 0x7ea(0x02)
	struct FName Target BackSlot; // 0x7ec(0x08)
	bool Is Shotgun; // 0x7f4(0x01)
	char UnknownData_7F5[0x3]; // 0x7f5(0x03)
	struct FRotator Target Shell Housing Spin; // 0x7f8(0x0c)
	int32_t Missing Shell Count; // 0x804(0x04)
	bool Is Revolver; // 0x808(0x01)
	char UnknownData_809[0x3]; // 0x809(0x03)
	float Interp Speed; // 0x80c(0x04)
	float VsWorldAlphaDiff; // 0x810(0x04)
	float LastUpdatedAlpha; // 0x814(0x04)
	bool Prevent Vs World Active; // 0x818(0x01)
	bool Is Vs World Force Reset Delay; // 0x819(0x01)
	char UnknownData_81A[0x2]; // 0x81a(0x02)
	float Vs World Reset Delay Time; // 0x81c(0x04)
	bool Able to Magdrop?; // 0x820(0x01)
	bool Force Holster Mantle; // 0x821(0x01)
	bool Force Holster Zipline; // 0x822(0x01)
	bool Scope Mesh Scale; // 0x823(0x01)
	float Scope Scale Alpha; // 0x824(0x04)
	struct TArray<struct UMaterialInterface*> Hide Materials Array; // 0x828(0x10)
	bool Is Vcol Hide Needed; // 0x838(0x01)
	char UnknownData_839[0x7]; // 0x839(0x07)
	struct FMulticastInlineDelegate OnSetScopeScaleAlpha; // 0x840(0x10)
	struct FMulticastInlineDelegate OnSetRevolverChamberRotate; // 0x850(0x10)
	float CosmeticShotTraceDist; // 0x860(0x04)
	char UnknownData_864[0x4]; // 0x864(0x04)
	struct TArray<struct UParticleSystemComponent*> CartridgeEjectParticles; // 0x868(0x10)
	struct TArray<struct UParticleSystemComponent*> 1PMuzzleFlashParticles; // 0x878(0x10)
	struct TArray<struct UParticleSystemComponent*> 3pMuzzleFlashParticles; // 0x888(0x10)
	bool bShouldPlayADSFire; // 0x898(0x01)
	char UnknownData_899[0x3]; // 0x899(0x03)
	float ADSFirePlayPosition; // 0x89c(0x04)
	float AOSFirePlayPosition; // 0x8a0(0x04)
	float ADSFireDelay; // 0x8a4(0x04)
	struct FMulticastInlineDelegate OnSetLobbyState; // 0x8a8(0x10)
	bool DropMagazineLockout; // 0x8b8(0x01)
	char UnknownData_8B9[0x7]; // 0x8b9(0x07)
	struct UObject* 3P Camera Shake Hi; // 0x8c0(0x08)
	struct UObject* Bullet Near Miss Camera Shake; // 0x8c8(0x08)
	float Bullet Near Miss Camera Shake Distance; // 0x8d0(0x04)
	char UnknownData_8D4[0x4]; // 0x8d4(0x04)
	struct UObject* FireCameraModifier; // 0x8d8(0x08)
	struct TArray<struct FFullFireRepData> QueuedAimData; // 0x8e0(0x10)
	struct TArray<struct FHitResult> ValidHits_Event; // 0x8f0(0x10)
	bool Should Play Impact Sound; // 0x900(0x01)
	bool Should Hide On Holster; // 0x901(0x01)
	enum class EFireAudioMode FireAudioMode; // 0x902(0x01)
	bool AllowNewShotAudio; // 0x903(0x01)
	float Post Reload Delay Period; // 0x904(0x04)
	bool Folded Stock; // 0x908(0x01)
	char UnknownData_909[0x3]; // 0x909(0x03)
	struct FRotator Stock Rotation; // 0x90c(0x0c)
	struct FRotator Stock alt Rotation; // 0x918(0x0c)
	bool Multi Stage Reload Lockout; // 0x924(0x01)
	char UnknownData_925[0x3]; // 0x925(0x03)
	struct FVector ViewPawnForwardDir; // 0x928(0x0c)
	struct FVector ViewPawnLeftDir; // 0x934(0x0c)
	float LastBulletMissTime; // 0x940(0x04)
	float LoopingFireAudioCheckTriggerDelay; // 0x944(0x04)
	int32_t LoopingFireAudioFadeOutDuration; // 0x948(0x04)
	bool IsFirstShot; // 0x94c(0x01)
	bool IsPlayerControlled; // 0x94d(0x01)
	bool Lunging Active; // 0x94e(0x01)
	char UnknownData_94F[0x1]; // 0x94f(0x01)
	struct TArray<struct UParticleSystemComponent*> 1PAuxMuzzleFlashParticles; // 0x950(0x10)
	struct TArray<struct UParticleSystemComponent*> 3pAuxMuzzleFlashParticles; // 0x960(0x10)
	bool ShouldPlayBlockedImpactSound; // 0x970(0x01)
	char UnknownData_971[0x7]; // 0x971(0x07)
	struct FTimerHandle Revolving timer; // 0x978(0x08)
	struct FRotator Eval Target Shell Housing Spin; // 0x980(0x0c)
	bool ShouldComputeCosmeticHits; // 0x98c(0x01)
	bool On Init Hide Magazine; // 0x98d(0x01)
	bool Use laser sight; // 0x98e(0x01)
	char UnknownData_98F[0x1]; // 0x98f(0x01)
	struct UMaterialInstanceDynamic* Reticle Material; // 0x990(0x08)
	enum class ECombatState RetrieveCombatState; // 0x998(0x01)
	char UnknownData_999[0x7]; // 0x999(0x07)
	struct FTimerHandle Post Reload Timer; // 0x9a0(0x08)
	enum class EWeaponStateNew Old State; // 0x9a8(0x01)
	char UnknownData_9A9[0x3]; // 0x9a9(0x03)
	struct FVector TracerStartPointLocalToOwner; // 0x9ac(0x0c)
	float TracerMinimumOffsetLocallyViewed; // 0x9b8(0x04)
	float TracerMaximumOffsetLocallyViewed; // 0x9bc(0x04)
	float TracerMinimumOffsetNPC; // 0x9c0(0x04)
	float TracerMaximumOffsetNPC; // 0x9c4(0x04)
	float Combat State Change Time; // 0x9c8(0x04)
	bool Mirror Deattach Slot Active; // 0x9cc(0x01)
	char UnknownData_9CD[0x3]; // 0x9cd(0x03)
	struct FName Mirror Deattach Slot Name; // 0x9d0(0x08)
	struct UObject* ScopeWidgetClass; // 0x9d8(0x08)
	struct AActor* ScopeWidgetActor; // 0x9e0(0x08)
	struct FMulticastInlineDelegate OnSetShieldActive; // 0x9e8(0x10)
	struct FHitResult K2Node_CustomEvent_Hit; // 0x9f8(0x88)
	bool CallFunc_BreakHitResult_bBlockingHit; // 0xa80(0x01)
	bool CallFunc_BreakHitResult_bInitialOverlap; // 0xa81(0x01)
	char UnknownData_A82[0x2]; // 0xa82(0x02)
	float CallFunc_BreakHitResult_Time; // 0xa84(0x04)
	float CallFunc_BreakHitResult_Distance; // 0xa88(0x04)
	struct FVector CallFunc_BreakHitResult_Location; // 0xa8c(0x0c)
	struct FVector CallFunc_BreakHitResult_ImpactPoint; // 0xa98(0x0c)
	struct FVector CallFunc_BreakHitResult_Normal; // 0xaa4(0x0c)
	struct FVector CallFunc_BreakHitResult_ImpactNormal; // 0xab0(0x0c)
	char UnknownData_ABC[0x4]; // 0xabc(0x04)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat; // 0xac0(0x08)
	struct AActor* CallFunc_BreakHitResult_HitActor; // 0xac8(0x08)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent; // 0xad0(0x08)
	struct FName CallFunc_BreakHitResult_HitBoneName; // 0xad8(0x08)
	int32_t CallFunc_BreakHitResult_HitItem; // 0xae0(0x04)
	int32_t CallFunc_BreakHitResult_FaceIndex; // 0xae4(0x04)
	struct FVector CallFunc_BreakHitResult_TraceStart; // 0xae8(0x0c)
	struct FVector CallFunc_BreakHitResult_TraceEnd; // 0xaf4(0x0c)
	bool CallFunc_BreakHitResult_bBlockingHit_2; // 0xb00(0x01)
	bool CallFunc_BreakHitResult_bInitialOverlap_2; // 0xb01(0x01)
	char UnknownData_B02[0x2]; // 0xb02(0x02)
	float CallFunc_BreakHitResult_Time_2; // 0xb04(0x04)
	float CallFunc_BreakHitResult_Distance_2; // 0xb08(0x04)
	struct FVector CallFunc_BreakHitResult_Location_2; // 0xb0c(0x0c)
	struct FVector CallFunc_BreakHitResult_ImpactPoint_2; // 0xb18(0x0c)
	struct FVector CallFunc_BreakHitResult_Normal_2; // 0xb24(0x0c)
	struct FVector CallFunc_BreakHitResult_ImpactNormal_2; // 0xb30(0x0c)
	char UnknownData_B3C[0x4]; // 0xb3c(0x04)
	struct UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_2; // 0xb40(0x08)
	struct AActor* CallFunc_BreakHitResult_HitActor_2; // 0xb48(0x08)
	struct UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_2; // 0xb50(0x08)
	struct FName CallFunc_BreakHitResult_HitBoneName_2; // 0xb58(0x08)
	int32_t CallFunc_BreakHitResult_HitItem_2; // 0xb60(0x04)
	int32_t CallFunc_BreakHitResult_FaceIndex_2; // 0xb64(0x04)
	struct FVector CallFunc_BreakHitResult_TraceStart_2; // 0xb68(0x0c)
	struct FVector CallFunc_BreakHitResult_TraceEnd_2; // 0xb74(0x0c)
	struct FHitDecalInfo CallFunc_Get_Decal_Material_Decal_Info; // 0xb80(0x28)
	bool K2Node_CustomEvent_bBlockingHit; // 0xba8(0x01)
	char UnknownData_BA9[0x7]; // 0xba9(0x07)
	struct TArray<struct FHitResult> K2Node_CustomEvent_OutHits; // 0xbb0(0x10)
	struct FVector K2Node_CustomEvent_Start; // 0xbc0(0x0c)
	struct FVector K2Node_CustomEvent_End; // 0xbcc(0x0c)
	struct FFullFireRepData K2Node_CustomEvent_Data; // 0xbd8(0x68)
	bool K2Node_CustomEvent_bBlockingHit_2; // 0xc40(0x01)
	char UnknownData_C41[0x7]; // 0xc41(0x07)
	struct TArray<struct FHitResult> K2Node_CustomEvent_OutHits_2; // 0xc48(0x10)
	struct FVector K2Node_CustomEvent_Start_2; // 0xc58(0x0c)
	struct FVector K2Node_CustomEvent_End_2; // 0xc64(0x0c)
	struct APlayerController* K2Node_DynamicCast_AsPlayer_Controller; // 0xc70(0x08)
	bool K2Node_DynamicCast_bSuccess; // 0xc78(0x01)
	char UnknownData_C79[0x3]; // 0xc79(0x03)
	struct FName Temp_name_Variable; // 0xc7c(0x08)
	bool K2Node_CustomEvent_bBlockingHit_3; // 0xc84(0x01)
	char UnknownData_C85[0x3]; // 0xc85(0x03)
	struct TArray<struct FHitResult> K2Node_CustomEvent_OutHits_3; // 0xc88(0x10)
	struct FVector K2Node_CustomEvent_Start_3; // 0xc98(0x0c)
	struct FVector K2Node_CustomEvent_End_3; // 0xca4(0x0c)
	struct UKSDefaultAimTargetingModule* K2Node_DynamicCast_AsKSDefault_Aim_Targeting_Module; // 0xcb0(0x08)
	bool K2Node_DynamicCast_bSuccess_2; // 0xcb8(0x01)
	char UnknownData_CB9[0x3]; // 0xcb9(0x03)
	struct FVector CallFunc_IsWallMarkerActive_WallLocation; // 0xcbc(0x0c)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate; // 0xcc8(0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2; // 0xcd8(0x10)
	float K2Node_Event_DeltaSeconds; // 0xce8(0x04)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3; // 0xcec(0x10)
	enum class EWeaponStateNew K2Node_Event_OldState; // 0xcfc(0x01)
	enum class EWeaponStateNew K2Node_Event_NewState; // 0xcfd(0x01)
	bool K2Node_SwitchEnum_CmpSuccess; // 0xcfe(0x01)
	char UnknownData_CFF[0x1]; // 0xcff(0x01)
	struct FFullFireRepData K2Node_Event_Data; // 0xd00(0x68)
	bool K2Node_SwitchEnum_CmpSuccess_2; // 0xd68(0x01)
	bool K2Node_CustomEvent_Blocking_Hit; // 0xd69(0x01)
	char UnknownData_D6A[0x6]; // 0xd6a(0x06)
	struct TArray<struct FHitResult> K2Node_CustomEvent_Out_Hits; // 0xd70(0x10)
	struct FVector K2Node_CustomEvent_Start_4; // 0xd80(0x0c)
	struct FVector K2Node_CustomEvent_End_4; // 0xd8c(0x0c)
	bool K2Node_CustomEvent_Allow_Spangs; // 0xd98(0x01)
	bool K2Node_CustomEvent_Allow_Tracers; // 0xd99(0x01)
	bool K2Node_CustomEvent_Allow_Decals; // 0xd9a(0x01)
	char UnknownData_D9B[0x1]; // 0xd9b(0x01)
	int32_t Temp_int_Array_Index_Variable; // 0xd9c(0x04)
	struct UParticleSystemComponent* CallFunc_Array_Get_Item; // 0xda0(0x08)
	struct TArray<struct FHitResult> CallFunc_Filter_Cosmetic_Hit_Results_Filtered_Hit_Results; // 0xda8(0x10)
	int32_t CallFunc_GetAnimMontage_Priority; // 0xdb8(0x04)
	int32_t CallFunc_GetAnimMontage_Priority_2; // 0xdbc(0x04)
	int32_t Temp_int_Loop_Counter_Variable; // 0xdc0(0x04)
	int32_t Temp_int_Array_Index_Variable_2; // 0xdc4(0x04)
	struct UParticleSystemComponent* CallFunc_Array_Get_Item_2; // 0xdc8(0x08)
	int32_t CallFunc_GetBool_Priority; // 0xdd0(0x04)
	char UnknownData_DD4[0x4]; // 0xdd4(0x04)
	struct TArray<struct FHitResult> K2Node_CustomEvent_Hits; // 0xdd8(0x10)
	struct FVector K2Node_CustomEvent_Start_5; // 0xde8(0x0c)
	struct FVector K2Node_CustomEvent_End_5; // 0xdf4(0x0c)
	struct UKSCharacterAnimInst* CallFunc_Get_Character_Anim_Instance_Anim_Inst; // 0xe00(0x08)
	int32_t CallFunc_GetBool_Priority_2; // 0xe08(0x04)
	char UnknownData_E0C[0x4]; // 0xe0c(0x04)
	struct TArray<struct FHitResult> K2Node_CustomEvent_Hits_2; // 0xe10(0x10)
	struct FVector K2Node_CustomEvent_Trace_End; // 0xe20(0x0c)
	char UnknownData_E2C[0x4]; // 0xe2c(0x04)
	struct APawn* K2Node_CustomEvent_ViewPawn; // 0xe30(0x08)
	enum class ECombatState K2Node_CustomEvent_NewState; // 0xe38(0x01)
	char UnknownData_E39[0x7]; // 0xe39(0x07)
	struct UKSCharacterAnimInst* CallFunc_Get_Character_Anim_Instance_Anim_Inst_2; // 0xe40(0x08)
	struct UKSCharacterAnimInst* CallFunc_Get_Character_Anim_Instance_Anim_Inst_3; // 0xe48(0x08)
	struct UKSCharacterAnimInst* CallFunc_Get_Character_Anim_Instance_Anim_Inst_4; // 0xe50(0x08)
	struct TArray<struct FHitResult> K2Node_CustomEvent_Hits_3; // 0xe58(0x10)
	bool K2Node_CustomEvent_bBlockingHit_4; // 0xe68(0x01)
	char UnknownData_E69[0x7]; // 0xe69(0x07)
	struct TArray<struct FHitResult> K2Node_CustomEvent_OutHits_4; // 0xe70(0x10)
	struct FVector K2Node_CustomEvent_Start_6; // 0xe80(0x0c)
	struct FVector K2Node_CustomEvent_End_6; // 0xe8c(0x0c)
	struct FFullFireRepData K2Node_CustomEvent_Fire_Data; // 0xe98(0x68)
	int32_t CallFunc_GetAudioEvent_Priority; // 0xf00(0x04)
	int32_t CallFunc_GetAudioEvent_Priority_2; // 0xf04(0x04)
	int32_t CallFunc_GetAudioEvent_Priority_3; // 0xf08(0x04)
	int32_t CallFunc_GetAnimMontage_Priority_3; // 0xf0c(0x04)
	struct UAnimMontage* CallFunc_Get_Player_1P_Fire_Montage_Montage; // 0xf10(0x08)
	int32_t CallFunc_GetAnimMontage_Priority_4; // 0xf18(0x04)
	int32_t CallFunc_GetAnimMontage_Priority_5; // 0xf1c(0x04)
	struct USkinnableSkeletalMeshComponent* K2Node_Event_SkinnableSkelComp; // 0xf20(0x08)
	int32_t Temp_int_Variable; // 0xf28(0x04)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4; // 0xf2c(0x10)
	int32_t Temp_int_Loop_Counter_Variable_2; // 0xf3c(0x04)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_5; // 0xf40(0x10)
	int32_t Temp_int_Array_Index_Variable_3; // 0xf50(0x04)
	char UnknownData_F54[0x4]; // 0xf54(0x04)
	struct UParticleSystemComponent* CallFunc_Array_Get_Item_3; // 0xf58(0x08)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable; // 0xf60(0x10)
	struct FDelegate Temp_delegate_Variable; // 0xf70(0x10)
	bool K2Node_SwitchEnum_CmpSuccess_3; // 0xf80(0x01)
	char UnknownData_F81[0x3]; // 0xf81(0x03)
	int32_t Temp_int_Loop_Counter_Variable_3; // 0xf84(0x04)
	struct TArray<struct AActor*> Temp_object_Variable; // 0xf88(0x10)
	int32_t Temp_int_Array_Index_Variable_4; // 0xf98(0x04)
	char K2Node_Event_EndPlayReason; // 0xf9c(0x01)
	char UnknownData_F9D[0x3]; // 0xf9d(0x03)
	int32_t Temp_int_Array_Index_Variable_5; // 0xfa0(0x04)
	char UnknownData_FA4[0x4]; // 0xfa4(0x04)
	struct UParticleSystemComponent* CallFunc_Array_Get_Item_4; // 0xfa8(0x08)
	struct AKSCharacterBase* K2Node_CustomEvent_KillerCharacter; // 0xfb0(0x08)
	struct AKSCharacterBase* K2Node_CustomEvent_KilledCharacter; // 0xfb8(0x08)
	bool K2Node_SwitchEnum_CmpSuccess_4; // 0xfc0(0x01)
	char UnknownData_FC1[0x7]; // 0xfc1(0x07)
	struct AController* K2Node_CustomEvent_NewController; // 0xfc8(0x08)
	struct AKSPlayerController* K2Node_DynamicCast_AsKSPlayer_Controller; // 0xfd0(0x08)
	bool K2Node_DynamicCast_bSuccess_3; // 0xfd8(0x01)
	char UnknownData_FD9[0x3]; // 0xfd9(0x03)
	int32_t Temp_int_Loop_Counter_Variable_4; // 0xfdc(0x04)
	int32_t CallFunc_GetBool_Priority_3; // 0xfe0(0x04)
	int32_t CallFunc_GetAnimMontage_Priority_6; // 0xfe4(0x04)
	int32_t CallFunc_GetAnimMontage_Priority_7; // 0xfe8(0x04)
	char UnknownData_FEC[0x4]; // 0xfec(0x04)
	struct UKSCharacterAnimInst* CallFunc_Get_Character_Anim_Instance_Anim_Inst_5; // 0xff0(0x08)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_2; // 0xff8(0x10)
	struct FDelegate Temp_delegate_Variable_2; // 0x1008(0x10)
	struct UKSCharacterAnimInst* CallFunc_Get_Character_Anim_Instance_Anim_Inst_6; // 0x1018(0x08)
	int32_t CallFunc_GetAnimMontage_Priority_8; // 0x1020(0x04)
	int32_t CallFunc_GetAnimMontage_Priority_9; // 0x1024(0x04)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_3; // 0x1028(0x10)
	struct FDelegate Temp_delegate_Variable_3; // 0x1038(0x10)
	int32_t CallFunc_GetBool_Priority_4; // 0x1048(0x04)
	int32_t CallFunc_GetAnimMontage_Priority_10; // 0x104c(0x04)
	int32_t CallFunc_GetAnimMontage_Priority_11; // 0x1050(0x04)
	int32_t CallFunc_GetAnimMontage_Priority_12; // 0x1054(0x04)
	struct UKSCharacterAnimInst* CallFunc_Get_Character_Anim_Instance_Anim_Inst_7; // 0x1058(0x08)
	struct UKSCharacterAnimInst* CallFunc_Get_Character_Anim_Instance_Anim_Inst_8; // 0x1060(0x08)
	int32_t CallFunc_GetAnimMontage_Priority_13; // 0x1068(0x04)
	char UnknownData_106C[0x4]; // 0x106c(0x04)
	struct TArray<struct UMaterialInterface*> CallFunc_GetMaterials_ReturnValue; // 0x1070(0x10)
	int32_t CallFunc_GetAnimMontage_Priority_14; // 0x1080(0x04)
	char UnknownData_1084[0x4]; // 0x1084(0x04)
	struct UMaterialInterface* CallFunc_Array_Get_Item_5; // 0x1088(0x08)
	struct UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic; // 0x1090(0x08)
	bool K2Node_DynamicCast_bSuccess_4; // 0x1098(0x01)
	char UnknownData_1099[0x7]; // 0x1099(0x07)
	struct UKSCharacterAnimInst* CallFunc_Get_Character_Anim_Instance_Anim_Inst_9; // 0x10a0(0x08)
	int32_t Temp_int_Loop_Counter_Variable_5; // 0x10a8(0x04)
	bool CallFunc_End_Reload_Weapon_Cancelled_A_Reload; // 0x10ac(0x01)
	char UnknownData_10AD[0x3]; // 0x10ad(0x03)
	struct UKSCharacterAnimInst* CallFunc_Get_Character_Anim_Instance_Anim_Inst_10; // 0x10b0(0x08)
	bool Temp_bool_Variable; // 0x10b8(0x01)
	char UnknownData_10B9[0x7]; // 0x10b9(0x07)
	struct UAnimMontage* K2Node_Select_Default; // 0x10c0(0x08)
	int32_t Temp_int_Loop_Counter_Variable_6; // 0x10c8(0x04)
	int32_t CallFunc_GetAudioEvent_Priority_4; // 0x10cc(0x04)
	int32_t CallFunc_GetAnimMontage_Priority_15; // 0x10d0(0x04)
	int32_t Temp_int_Variable_2; // 0x10d4(0x04)
	int32_t Temp_int_Variable_3; // 0x10d8(0x04)
	char UnknownData_10DC[0x4]; // 0x10dc(0x04)
	struct UTexture2D* Temp_object_Variable_2; // 0x10e0(0x08)
	enum class ECombatState K2Node_CustomEvent_OldCombatState; // 0x10e8(0x01)
	enum class ECombatState K2Node_CustomEvent_NewCombatState; // 0x10e9(0x01)
	char UnknownData_10EA[0x2]; // 0x10ea(0x02)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_6; // 0x10ec(0x10)
	bool Temp_bool_Variable_2; // 0x10fc(0x01)
	char UnknownData_10FD[0x3]; // 0x10fd(0x03)
	struct UTexture2D* K2Node_Select_Default_2; // 0x1100(0x08)
	struct UKSCharacterAnimInst* CallFunc_Get_Character_Anim_Instance_Anim_Inst_11; // 0x1108(0x08)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_7; // 0x1110(0x10)
	struct UKSCharacterAnimInst* CallFunc_Get_Character_Anim_Instance_Anim_Inst_12; // 0x1120(0x08)
	int32_t Temp_int_Array_Index_Variable_6; // 0x1128(0x04)
	char UnknownData_112C[0x4]; // 0x112c(0x04)
	struct UParticleSystemComponent* CallFunc_Array_Get_Item_6; // 0x1130(0x08)
	struct FDelegate Temp_delegate_Variable_4; // 0x1138(0x10)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_4; // 0x1148(0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_8; // 0x1158(0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_9; // 0x1168(0x10)
	char UnknownData_1178[0x8]; // 0x1178(0x08)

	void OnSetShieldActive__DelegateSignature(bool bpp__ShieldIsActive__pf); // DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnSetShieldActive__DelegateSignature
	void OnSetScopeScaleAlpha__DelegateSignature(float bpp__NewxAlpha__pfT); // DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnSetScopeScaleAlpha__DelegateSignature
	void OnSetRevolverChamberRotate__DelegateSignature(struct FRotator bpp__NewxRevolverxChamberxRotator__pfTTT); // DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnSetRevolverChamberRotate__DelegateSignature
	void OnSetLobbyState__DelegateSignature(bool bpp__LobbyxState__pfT); // DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnSetLobbyState__DelegateSignature
	void Update Tracer Start Point(); // Function Master_WeaponComponent.Master_WeaponComponent_C.Update Tracer Start Point
	void Update Combat State(enum class ECombatState bpp__NewState__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.Update Combat State
	void UpdateMagDropBoneVelocity(float bpp__DeltaTime__pf, int32_t bpp__Index__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.UpdateMagDropBoneVelocity
	void UpdateAimDownSightsBlurValues(); // Function Master_WeaponComponent.Master_WeaponComponent_C.UpdateAimDownSightsBlurValues
	void TryDisableCameraModifier(struct UObject* bpp__CameraxModifier__pfT, int32_t bpp__PlayerxIndex__pfT, bool bpp__Found__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.TryDisableCameraModifier
	void SyncComputeCosmeticHits(struct FFullFireRepData bpp__FireData__pf, struct TArray<struct FHitResult> bpp__Hits__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.SyncComputeCosmeticHits
	void Spawn Tracers Simple(struct TArray<struct FHitResult> bpp__Hits__pf, struct FVector bpp__TracexEnd__pfT); // Function Master_WeaponComponent.Master_WeaponComponent_C.Spawn Tracers Simple
	void Spawn Tracer(struct FVector bpp__EndPoint__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.Spawn Tracer
	void Spawn Spangs and Decals(struct FFullFireRepData bpp__Data__pf__const, struct TArray<struct FHitResult> bpp__Hits__pf, struct FFullFireRepData bpp__OutxData__pfT); // Function Master_WeaponComponent.Master_WeaponComponent_C.Spawn Spangs and Decals
	void SpawnTracers(struct TArray<struct FHitResult> bpp__Hits__pf, struct TArray<struct FFullFireRepData> bpp__AimData__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.SpawnTracers
	void SpawnSpangs(struct TArray<struct FHitResult> bpp__Hits__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.SpawnSpangs
	void SpawnDecals(struct TArray<struct FHitResult> bpp__Hits__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.SpawnDecals
	void ShouldPlayFireAnim1P(bool bpp__Playx1PxFire__pfTT); // Function Master_WeaponComponent.Master_WeaponComponent_C.ShouldPlayFireAnim1P
	void Set Scope Scale Alpha(float bpp__NewxAlpha__pfT); // Function Master_WeaponComponent.Master_WeaponComponent_C.Set Scope Scale Alpha
	void Set Revolver Chamber Rotate(struct FRotator bpp__TargetxRotator__pfT, bool bpp__ResetxRotation__pfT); // Function Master_WeaponComponent.Master_WeaponComponent_C.Set Revolver Chamber Rotate
	void Set Muzzle Flash Emitter and Offset(); // Function Master_WeaponComponent.Master_WeaponComponent_C.Set Muzzle Flash Emitter and Offset
	void Setup Character Anim Init Callback(); // Function Master_WeaponComponent.Master_WeaponComponent_C.Setup Character Anim Init Callback
	void SetUIWidget(); // Function Master_WeaponComponent.Master_WeaponComponent_C.SetUIWidget
	struct UAnimMontage* Select Weapon Reload Montage(bool bpp__IsxQuickxReload__pfTT); // Function Master_WeaponComponent.Master_WeaponComponent_C.Select Weapon Reload Montage
	void Select Reload Montage(struct UAnimMontage* bpp__ReloadMontage__pf, struct UAnimMontage* bpp__QuickReloadMontage__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.Select Reload Montage
	void Retrieve Weapon(); // Function Master_WeaponComponent.Master_WeaponComponent_C.Retrieve Weapon
	void Reticle Rotate(); // Function Master_WeaponComponent.Master_WeaponComponent_C.Reticle Rotate
	void Reset Variables at Start of Firing Instance(); // Function Master_WeaponComponent.Master_WeaponComponent_C.Reset Variables at Start of Firing Instance
	void Reload Weapon(); // Function Master_WeaponComponent.Master_WeaponComponent_C.Reload Weapon
	void Reload Mirror Delay End(); // Function Master_WeaponComponent.Master_WeaponComponent_C.Reload Mirror Delay End
	void Reload Cooldown Weapon(); // Function Master_WeaponComponent.Master_WeaponComponent_C.Reload Cooldown Weapon
	void ReceiveTick(float bpp__DeltaSeconds__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.ReceiveTick
	void ReceiveEndPlay(char bpp__EndPlayReason__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.ReceiveEndPlay
	void ReceiveBeginPlay(); // Function Master_WeaponComponent.Master_WeaponComponent_C.ReceiveBeginPlay
	void Pre Fire Weapon(); // Function Master_WeaponComponent.Master_WeaponComponent_C.Pre Fire Weapon
	void Prepare Next Tracer Spawn(); // Function Master_WeaponComponent.Master_WeaponComponent_C.Prepare Next Tracer Spawn
	void Post Fire Weapon(); // Function Master_WeaponComponent.Master_WeaponComponent_C.Post Fire Weapon
	void Play Weapon Reload animation(float bpp__PlayRate__pf, bool bpp__IsxQuickxReload__pfTT); // Function Master_WeaponComponent.Master_WeaponComponent_C.Play Weapon Reload animation
	void Play Reload MultiStage(float bpp__PlayxRate__pfT, struct UAnimMontage* bpp__SelectedxMontage__pfT); // Function Master_WeaponComponent.Master_WeaponComponent_C.Play Reload MultiStage
	void Play Reload Logic(struct UAnimMontage* bpp__ReloadxMontage__pfT, struct UAnimMontage* bpp__QuickReloadxMontage__pfT, bool bpp__IsxMultixStagexReloadx__pfTTTzy); // Function Master_WeaponComponent.Master_WeaponComponent_C.Play Reload Logic
	void Play Reload Base(float bpp__PlayxRate__pfT, struct UAnimMontage* bpp__SelectedxMontage__pfT); // Function Master_WeaponComponent.Master_WeaponComponent_C.Play Reload Base
	void Play Post Reload(); // Function Master_WeaponComponent.Master_WeaponComponent_C.Play Post Reload
	void Play Fire Tail Sound(enum class EAkCallbackType bpp__CallbackxType__pfT, struct UAkCallbackInfo* bpp__CallbackxInfo__pfT); // Function Master_WeaponComponent.Master_WeaponComponent_C.Play Fire Tail Sound
	void Play Fire Camera Shakes(bool bpp__LocalOnly__pf, struct UObject* bpp__PrimaryxShake__pfT, struct UObject* bpp__HiFreqxShake__pfT); // Function Master_WeaponComponent.Master_WeaponComponent_C.Play Fire Camera Shakes
	void Play Casing Sound(); // Function Master_WeaponComponent.Master_WeaponComponent_C.Play Casing Sound
	void Play Bullet Impact SFX(struct FHitResult bpp__HitResult__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.Play Bullet Impact SFX
	void PlayInvalidFireSound(); // Function Master_WeaponComponent.Master_WeaponComponent_C.PlayInvalidFireSound
	void PlayFireSound(struct FAimData bpp__InputPin__pf__const); // Function Master_WeaponComponent.Master_WeaponComponent_C.PlayFireSound
	void PlayEmptyFireAudio(); // Function Master_WeaponComponent.Master_WeaponComponent_C.PlayEmptyFireAudio
	void PlayBulletNearMissSound(struct FVector bpp__InxTracexStart__pfTT, struct FVector bpp__InxTracexEnd__pfTT, struct TArray<struct FHitResult> bpp__Hits__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.PlayBulletNearMissSound
	void On Cosmetic Trace Complete Internal(bool bpp__BlockingxHit__pfT__const, struct TArray<struct FHitResult> bpp__OutxHits__pfT, struct FVector bpp__Start__pf__const, struct FVector bpp__End__pf__const, bool bpp__AllowxSpangs__pfT, bool bpp__AllowxTracers__pfT, bool bpp__AllowxDecals__pfT); // Function Master_WeaponComponent.Master_WeaponComponent_C.On Cosmetic Trace Complete Internal
	void On Comestic Trace Complete(bool bpp__bBlockingHit__pf, struct TArray<struct FHitResult> bpp__OutHits__pf__const, struct FVector bpp__Start__pf__const, struct FVector bpp__End__pf__const); // Function Master_WeaponComponent.Master_WeaponComponent_C.On Comestic Trace Complete
	void On Character Anim Initialized(); // Function Master_WeaponComponent.Master_WeaponComponent_C.On Character Anim Initialized
	void OnPossessedBy_Event_1(struct AController* bpp__NewController__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.OnPossessedBy_Event_1
	void OnKilled_Event_1(struct AKSCharacterBase* bpp__KillerCharacter__pf__const, struct AKSCharacterBase* bpp__KilledCharacter__pf__const); // Function Master_WeaponComponent.Master_WeaponComponent_C.OnKilled_Event_1
	void NotifyStopFireReceived(); // Function Master_WeaponComponent.Master_WeaponComponent_C.NotifyStopFireReceived
	bool IsDropMeshValid(int32_t bpp__Index__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.IsDropMeshValid
	void IdleWeapon(enum class EWeaponStateNew bpp__OldState__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.IdleWeapon
	void Holster Weapon(); // Function Master_WeaponComponent.Master_WeaponComponent_C.Holster Weapon
	void Hide Magazine(); // Function Master_WeaponComponent.Master_WeaponComponent_C.Hide Magazine
	void HasUIWidget(bool bpp__HasUIWidget__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.HasUIWidget
	void HandleWeaponFiringClientEffects(struct FFullFireRepData bpp__Data__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.HandleWeaponFiringClientEffects
	void Get Tracer Offset(float bpp__Offset__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.Get Tracer Offset
	void Get Spang Particle System(struct FHitResult bpp__Hit__pf, struct UParticleSystem* bpp__SpangxToxUse__pfTT, bool bpp__PlayOnHitCharacter__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.Get Spang Particle System
	void Get Scaled Reload Playrate(struct UAnimMontage* bpp__AnimxMontage__pfT, float bpp__ScaledxPlayrate__pfT); // Function Master_WeaponComponent.Master_WeaponComponent_C.Get Scaled Reload Playrate
	void Get Scaled Post Reload Playrate(struct UAnimMontage* bpp__AnimxMontage__pfT, float bpp__ScaledxPlayrate__pfT); // Function Master_WeaponComponent.Master_WeaponComponent_C.Get Scaled Post Reload Playrate
	void Get Scaled Multistage Reload Playrate(struct UAnimMontage* bpp__AnimxMontage__pfT, float bpp__ScaledxPlayrate__pfT); // Function Master_WeaponComponent.Master_WeaponComponent_C.Get Scaled Multistage Reload Playrate
	void Get Reticle Material(); // Function Master_WeaponComponent.Master_WeaponComponent_C.Get Reticle Material
	void Get Post Reload Weapon Section Time(struct UAnimMontage* bpp__AnimxMontage__pfT, float bpp__PostxReloadxPosition__pfTT); // Function Master_WeaponComponent.Master_WeaponComponent_C.Get Post Reload Weapon Section Time
	void Get Player 3P Lunge Montage(struct UAnimMontage* bpp__Montage__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.Get Player 3P Lunge Montage
	void Get Player 3P Fire Montage(struct UAnimMontage* bpp__Montage__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.Get Player 3P Fire Montage
	void Get Player 1P Fire Montage(struct UAnimMontage* bpp__Montage__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.Get Player 1P Fire Montage
	void Get Expected Aim Data(struct FAimData bpp__AimData__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.Get Expected Aim Data
	void Get Decal Material(struct FHitResult bpp__Hit__pf, struct FHitDecalInfo bpp__DecalxInfo__pfT); // Function Master_WeaponComponent.Master_WeaponComponent_C.Get Decal Material
	void Get Deattach Slot Name(struct AKSCharacter* bpp__KSCharacter__pf, struct FName bpp__SlotxName__pfT); // Function Master_WeaponComponent.Master_WeaponComponent_C.Get Deattach Slot Name
	void Get Character Anim Instance(struct UKSCharacterAnimInst* bpp__AnimxInst__pfT); // Function Master_WeaponComponent.Master_WeaponComponent_C.Get Character Anim Instance
	void Get Character 3p Fire Section(struct FName bpp__3pxFirexSection__pfTT); // Function Master_WeaponComponent.Master_WeaponComponent_C.Get Character 3p Fire Section
	void Get Character 1p Fire Section(struct FName bpp__1pxFirexSection__pfTT); // Function Master_WeaponComponent.Master_WeaponComponent_C.Get Character 1p Fire Section
	void Get Attach Slot Name(struct AKSCharacter* bpp__KSCharacter__pf, struct FName bpp__SlotxName__pfT); // Function Master_WeaponComponent.Master_WeaponComponent_C.Get Attach Slot Name
	void GetTracerStartPoint(struct FVector bpp__TracerStartLocation__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.GetTracerStartPoint
	void GetTableRowNameForHit(struct FHitResult bpp__Hit__pf, struct FName bpp__RowNamePrefix__pf, struct FName bpp__RowName__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.GetTableRowNameForHit
	void GetPercentRemainingAmmo(float bpp__Percent__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.GetPercentRemainingAmmo
	void GetMagDropBoneRotation(int32_t bpp__Index__pf, struct FRotator bpp__WorldRotation__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.GetMagDropBoneRotation
	void GetMagDropBoneLocation(int32_t bpp__Index__pf, struct FVector bpp__WorldLocation__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.GetMagDropBoneLocation
	void GetMagazineDropBoneName(struct FName bpp__Name__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.GetMagazineDropBoneName
	void GetDropVelocity(int32_t bpp__Index__pf, struct FVector bpp__WorldVelocity__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.GetDropVelocity
	void GetDropMesh(int32_t bpp__Index__pf, struct USkeletalMesh* bpp__SkelMesh__pf, struct UStaticMesh* bpp__StaticMesh__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.GetDropMesh
	void Force Exit ADS Pose(); // Function Master_WeaponComponent.Master_WeaponComponent_C.Force Exit ADS Pose
	void Force ADS Scope(); // Function Master_WeaponComponent.Master_WeaponComponent_C.Force ADS Scope
	void ForceRetrieveWeapon(); // Function Master_WeaponComponent.Master_WeaponComponent_C.ForceRetrieveWeapon
	void ForceRetrieveState(); // Function Master_WeaponComponent.Master_WeaponComponent_C.ForceRetrieveState
	void ForceHolsterWeapon(); // Function Master_WeaponComponent.Master_WeaponComponent_C.ForceHolsterWeapon
	void ForceAttachWeaponToHolsterSocket(); // Function Master_WeaponComponent.Master_WeaponComponent_C.ForceAttachWeaponToHolsterSocket
	void ForceAttachWeaponToActiveSocket(); // Function Master_WeaponComponent.Master_WeaponComponent_C.ForceAttachWeaponToActiveSocket
	void Fixup Laser Sight(struct USkinnableSkeletalMeshComponent* bpp__MeshComponent__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.Fixup Laser Sight
	void Fixup Attach Point(); // Function Master_WeaponComponent.Master_WeaponComponent_C.Fixup Attach Point
	void Fire Weapon(struct FFullFireRepData bpp__Data__pf, bool bpp__PlayNoChainFireMontage__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.Fire Weapon
	void Fire Montage Jump To Section(struct FString bpp__Section__pf__const); // Function Master_WeaponComponent.Master_WeaponComponent_C.Fire Montage Jump To Section
	void Filter Cosmetic Hit Results(struct TArray<struct FHitResult> bpp__TracexHitxResults__pfTT, struct TArray<struct FHitResult> bpp__FilteredxHitxResults__pfTT); // Function Master_WeaponComponent.Master_WeaponComponent_C.Filter Cosmetic Hit Results
	void ExecuteUbergraph_Master_WeaponComponent_10(int32_t bpp__EntryPoint__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_10
	void ExecuteUbergraph_Master_WeaponComponent_5(int32_t bpp__EntryPoint__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_5
	void ExecuteUbergraph_Master_WeaponComponent_40(int32_t bpp__EntryPoint__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_40
	void ExecuteUbergraph_Master_WeaponComponent_39(int32_t bpp__EntryPoint__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_39
	void ExecuteUbergraph_Master_WeaponComponent_35(int32_t bpp__EntryPoint__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_35
	void ExecuteUbergraph_Master_WeaponComponent_32(int32_t bpp__EntryPoint__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent_32
	void Evaluate Shield Mesh Anim State(bool bpp__ShieldxState__pfT); // Function Master_WeaponComponent.Master_WeaponComponent_C.Evaluate Shield Mesh Anim State
	void Evaluate Revolver Chamber Rotate(); // Function Master_WeaponComponent.Master_WeaponComponent_C.Evaluate Revolver Chamber Rotate
	void End Reload Weapon(bool bpp__AbortxReloadxAnimation__pfTT, bool bpp__CancelledxAxReload__pfTT); // Function Master_WeaponComponent.Master_WeaponComponent_C.End Reload Weapon
	void EnableOrAddCameraModifier(struct UObject* bpp__Modifier__pf, int32_t bpp__PlayerIndex__pf, struct UCameraModifier* bpp__ModifierxObject__pfT); // Function Master_WeaponComponent.Master_WeaponComponent_C.EnableOrAddCameraModifier
	void DropMagInternal(int32_t bpp__Index__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.DropMagInternal
	void DropMagazine(); // Function Master_WeaponComponent.Master_WeaponComponent_C.DropMagazine
	void DetermineMagSize(); // Function Master_WeaponComponent.Master_WeaponComponent_C.DetermineMagSize
	void Delay Spawn Tracers(struct TArray<struct FHitResult> bpp__Hits__pf__const, struct FVector bpp__TracexEnd__pfT__const); // Function Master_WeaponComponent.Master_WeaponComponent_C.Delay Spawn Tracers
	void Delay Spawn Spangs(struct TArray<struct FHitResult> bpp__Hits__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.Delay Spawn Spangs
	void Delay Spawn Decals(struct TArray<struct FHitResult> bpp__Hits__pf__const, struct FVector bpp__Start__pf, struct FVector bpp__End__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.Delay Spawn Decals
	void CheckKillCamScope(struct APawn* bpp__ViewPawn__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.CheckKillCamScope
	void Character Combat State Changed(enum class ECombatState bpp__OldCombatState__pf, enum class ECombatState bpp__NewCombatState__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.Character Combat State Changed
	void Can Spawn Tracer Now(bool bpp__CanxSpawnxxTracer__pfTTT); // Function Master_WeaponComponent.Master_WeaponComponent_C.Can Spawn Tracer Now
	void CancelReloadCosmetic(); // Function Master_WeaponComponent.Master_WeaponComponent_C.CancelReloadCosmetic
	void Calculate Reload Time(struct UAnimMontage* bpp__ReloadxMontage__pfT, struct UAnimMontage* bpp__QuickxReloadxMontage__pfTT, float bpp__PlayRate__pf, struct UAnimMontage* bpp__SelectedxMontage__pfT, bool bpp__IsxQuickReload__pfT); // Function Master_WeaponComponent.Master_WeaponComponent_C.Calculate Reload Time
	void Calculate Multistage Reload Time(struct UAnimMontage* bpp__ReloadxMontage__pfT, struct UAnimMontage* bpp__QuickxReloadxMontage__pfTT, float bpp__PlayRate__pf, struct UAnimMontage* bpp__SelectedxMontage__pfT, bool bpp__IsxQuickReload__pfT); // Function Master_WeaponComponent.Master_WeaponComponent_C.Calculate Multistage Reload Time
	void BuildupWeapon(); // Function Master_WeaponComponent.Master_WeaponComponent_C.BuildupWeapon
	void BlueprintPrepareKillCamPlayback(); // Function Master_WeaponComponent.Master_WeaponComponent_C.BlueprintPrepareKillCamPlayback
	void BlueprintPersistentCosmeticsUpdate(); // Function Master_WeaponComponent.Master_WeaponComponent_C.BlueprintPersistentCosmeticsUpdate
	void AudioOnCooldown(); // Function Master_WeaponComponent.Master_WeaponComponent_C.AudioOnCooldown
	void Attach Weapon To Holster Socket(); // Function Master_WeaponComponent.Master_WeaponComponent_C.Attach Weapon To Holster Socket
	void Attach Weapon To Active Socket(); // Function Master_WeaponComponent.Master_WeaponComponent_C.Attach Weapon To Active Socket
	void AsyncComputeCosmeticHitsAndPlay(struct FFullFireRepData bpp__FirexData__pfT__const); // Function Master_WeaponComponent.Master_WeaponComponent_C.AsyncComputeCosmeticHitsAndPlay
	void Apply Spang From Hit Result(struct FHitResult bpp__Hit__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.Apply Spang From Hit Result
	void ApplyDecalFromHit(struct FHitResult bpp__Hit__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.ApplyDecalFromHit
	void Anim Init Set Weapon State(struct UMasterWeapon_ABP_C* bpp__MasterxWeaponxABP__pfTT); // Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Weapon State
	void Anim Init Set Use Weapon Additive(struct UMasterWeapon_ABP_C* bpp__MasterxWeaponxABP__pfTT); // Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Use Weapon Additive
	void Anim Init Set Shield Is Active(struct UMasterWeapon_ABP_C* bpp__MasterxWeaponxABP__pfTT); // Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Shield Is Active
	void Anim Init Set Scope Mesh Scale(struct UMasterWeapon_ABP_C* bpp__MasterxWeaponxABP__pfTT); // Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Scope Mesh Scale
	void Anim Init Set Lobby State(struct UMasterWeapon_ABP_C* bpp__MasterxWeaponxABP__pfTT, struct UAnimInstance* bpp__BackupxAnimxInst__pfTT); // Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Lobby State
	void Anim Init Set Hide Magazine(struct UMasterWeapon_ABP_C* bpp__MasterxWeaponxABP__pfTT); // Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Hide Magazine
	void Anim Init Set Folding Stock(struct UMasterWeapon_ABP_C* bpp__MasterxWeaponxABP__pfTT); // Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init Set Folding Stock
	void Anim Init On Weapon Mesh(struct USkinnableSkeletalMeshComponent* bpp__SkelComp__pf, struct UAnimInstance* bpp__AnimInstance__pf); // Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init On Weapon Mesh
	void Ancillary Mesh Scale Set(); // Function Master_WeaponComponent.Master_WeaponComponent_C.Ancillary Mesh Scale Set
	void After Spawn Tracers Delay(bool bpp__bBlockingHit__pf, struct TArray<struct FHitResult> bpp__OutHits__pf__const, struct FVector bpp__Start__pf__const, struct FVector bpp__End__pf__const); // Function Master_WeaponComponent.Master_WeaponComponent_C.After Spawn Tracers Delay
	void After Spawn Spangs Delay(bool bpp__bBlockingHit__pf, struct TArray<struct FHitResult> bpp__OutHits__pf__const, struct FVector bpp__Start__pf__const, struct FVector bpp__End__pf__const); // Function Master_WeaponComponent.Master_WeaponComponent_C.After Spawn Spangs Delay
	void After Spawn Decals Delay(bool bpp__bBlockingHit__pf, struct TArray<struct FHitResult> bpp__OutHits__pf__const, struct FVector bpp__Start__pf__const, struct FVector bpp__End__pf__const); // Function Master_WeaponComponent.Master_WeaponComponent_C.After Spawn Decals Delay
	void OnWeaponComponentStateChanged__DelegateSignature(struct UKSWeaponComponent* bpp__WeaponComponent__pf, enum class EWeaponStateNew bpp__OldState__pf, enum class EWeaponStateNew bpp__NewState__pf); // DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnWeaponComponentStateChanged__DelegateSignature
	void OnPossessedBy__DelegateSignature(struct AController* bpp__NewController__pf); // DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnPossessedBy__DelegateSignature
	void OnKilled__DelegateSignature(struct AKSCharacterBase* bpp__KillerCharacter__pf, struct AKSCharacterBase* bpp__KilledCharacter__pf); // DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnKilled__DelegateSignature
	void OnCombatStateChanged__DelegateSignature(enum class ECombatState bpp__OldCombatState__pf, enum class ECombatState bpp__NewCombatState__pf); // DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnCombatStateChanged__DelegateSignature
	void OnAnimInitializedOnSkinnableMesh__DelegateSignature(struct USkinnableSkeletalMeshComponent* bpp__SkinnableSkelComp__pf, struct UAnimInstance* bpp__AnimInstance__pf); // DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnAnimInitializedOnSkinnableMesh__DelegateSignature
	void OnAnimInitialized__DelegateSignature(); // DelegateFunction Master_WeaponComponent.Master_WeaponComponent_C.OnAnimInitialized__DelegateSignature
};

