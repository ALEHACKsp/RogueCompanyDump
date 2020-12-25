// DynamicClass MainCharacter.MainCharacter_C
// Size: 0x4db0 (Inherited: 0x33d0)
struct AMainCharacter_C : public AKSCharacter {
	struct UCharacterHeatSourceComponent_C* CharacterHeatSourceComponent; // 0x33c8(0x08)
	struct UKSCharacterSocketComponent* PerformanceAimOrigin; // 0x33d0(0x08)
	struct UCharacterEmotionComponent_C* CharacterEmotionComponent; // 0x33d8(0x08)
	struct USpringArmComponent* SkyDiveCameraBoom; // 0x33e0(0x08)
	struct UWidgetComponent* Nameplate; // 0x33e8(0x08)
	struct UMainCharacterThreatComponent_C* MainCharacterThreatComponent; // 0x33f0(0x08)
	struct UKSTabletMeshComponent* NewTablet; // 0x33f8(0x08)
	struct UMainEnvironmentTracker_C* MainEnvironmentTracker; // 0x3400(0x08)
	struct UKSAimAssistAnchorComponent* BodyAimAssistAnchor; // 0x3408(0x08)
	struct UKSAimAssistAnchorComponent* HeadAimAssistAnchor; // 0x3410(0x08)
	struct UParticleSystemComponent* Free Fall Particle Component; // 0x3418(0x08)
	struct UCameraComponent* SkyDiveCamera; // 0x3420(0x08)
	float EnterFreeFallFOVTimeline_FOV_214483C64B8EF94ABEE010ACC0C82B47; // 0x3428(0x04)
	char EnterFreeFallFOVTimeline__Direction_214483C64B8EF94ABEE010ACC0C82B47; // 0x342c(0x01)
	struct UTimelineComponent* EnterFreeFallFOVTimeline; // 0x3430(0x08)
	float NoseDiveFOVTimeline_FOV_B4B28FE84FD9F70D4702AD94CD02429F; // 0x3438(0x04)
	char NoseDiveFOVTimeline__Direction_B4B28FE84FD9F70D4702AD94CD02429F; // 0x343c(0x01)
	struct UTimelineComponent* NoseDiveFOVTimeline; // 0x3440(0x08)
	struct FVector Martial_Artist_Target_Front_Camera_Offset_2353812C44E84070E58EA28AC0C39A7A; // 0x3448(0x0c)
	struct FVector Martial_Artist_Target_Front_Camera_Rotation_2353812C44E84070E58EA28AC0C39A7A; // 0x3454(0x0c)
	char Martial_Artist_Target_Front__Direction_2353812C44E84070E58EA28AC0C39A7A; // 0x3460(0x01)
	char UnknownData_3463[0x5]; // 0x3463(0x05)
	struct UTimelineComponent* Martial Artist Target Front; // 0x3468(0x08)
	struct FVector Martial_Artist_Target_Back_Camera_Offset_1BFA9A6E4FC29401CE8D43B8AAD4581C; // 0x3470(0x0c)
	struct FVector Martial_Artist_Target_Back_Camera_Rotation_1BFA9A6E4FC29401CE8D43B8AAD4581C; // 0x347c(0x0c)
	char Martial_Artist_Target_Back__Direction_1BFA9A6E4FC29401CE8D43B8AAD4581C; // 0x3488(0x01)
	char UnknownData_3489[0x7]; // 0x3489(0x07)
	struct UTimelineComponent* Martial Artist Target Back; // 0x3490(0x08)
	struct FVector Martial_Artist_Instigator_Front_Camera_Offset_F70AEBFB4CDEF611144DE3BBA0C06E0C; // 0x3498(0x0c)
	struct FVector Martial_Artist_Instigator_Front_Camera_Rotation_F70AEBFB4CDEF611144DE3BBA0C06E0C; // 0x34a4(0x0c)
	char Martial_Artist_Instigator_Front__Direction_F70AEBFB4CDEF611144DE3BBA0C06E0C; // 0x34b0(0x01)
	char UnknownData_34B1[0x7]; // 0x34b1(0x07)
	struct UTimelineComponent* Martial Artist Instigator Front; // 0x34b8(0x08)
	struct FVector Martial_Artist_Instigator_Back_Camera_Offset_28F092594C0CD50C0A3EA1BF17E2C5E1; // 0x34c0(0x0c)
	struct FVector Martial_Artist_Instigator_Back_Camera_Rotation_28F092594C0CD50C0A3EA1BF17E2C5E1; // 0x34cc(0x0c)
	char Martial_Artist_Instigator_Back__Direction_28F092594C0CD50C0A3EA1BF17E2C5E1; // 0x34d8(0x01)
	char UnknownData_34D9[0x7]; // 0x34d9(0x07)
	struct UTimelineComponent* Martial Artist Instigator Back; // 0x34e0(0x08)
	struct FVector CameraDodgeRoll_Relative_Position_4B7EB20A461034BB0B80418AE71BD9F4; // 0x34e8(0x0c)
	float CameraDodgeRoll_Camera_Boom_Length_4B7EB20A461034BB0B80418AE71BD9F4; // 0x34f4(0x04)
	char CameraDodgeRoll__Direction_4B7EB20A461034BB0B80418AE71BD9F4; // 0x34f8(0x01)
	char UnknownData_34F9[0x7]; // 0x34f9(0x07)
	struct UTimelineComponent* CameraDodgeRoll; // 0x3500(0x08)
	float SprintFOVTimeline_FOVAlpha_F9A879E74FD1B4D844684CBEE4230863; // 0x3508(0x04)
	char SprintFOVTimeline__Direction_F9A879E74FD1B4D844684CBEE4230863; // 0x350c(0x01)
	char UnknownData_350D[0x3]; // 0x350d(0x03)
	struct UTimelineComponent* SprintFOVTimeline; // 0x3510(0x08)
	float EndImmunity_Invulnerable_4A69979040C00E80AB6D5687355E98EA; // 0x3518(0x04)
	char EndImmunity__Direction_4A69979040C00E80AB6D5687355E98EA; // 0x351c(0x01)
	char UnknownData_351D[0x3]; // 0x351d(0x03)
	struct UTimelineComponent* EndImmunity; // 0x3520(0x08)
	float StartImmunity_Invulnerable_F2F49BA44D30D2903638919AFE6C1704; // 0x3528(0x04)
	char StartImmunity__Direction_F2F49BA44D30D2903638919AFE6C1704; // 0x352c(0x01)
	char UnknownData_352D[0x3]; // 0x352d(0x03)
	struct UTimelineComponent* StartImmunity; // 0x3530(0x08)
	float Camera_Boom_Timeline_Player_Mesh_ADS_Weight_Reverse_7F7960E24E458B7FB9796A9428D9E3C5; // 0x3538(0x04)
	float Camera_Boom_Timeline_Player_Mesh_ADS_Weight_Forward_7F7960E24E458B7FB9796A9428D9E3C5; // 0x353c(0x04)
	float Camera_Boom_Timeline_FOV_Weight_7F7960E24E458B7FB9796A9428D9E3C5; // 0x3540(0x04)
	float Camera_Boom_Timeline_Camera_Boom_Length_7F7960E24E458B7FB9796A9428D9E3C5; // 0x3544(0x04)
	char Camera_Boom_Timeline__Direction_7F7960E24E458B7FB9796A9428D9E3C5; // 0x3548(0x01)
	char UnknownData_3549[0x7]; // 0x3549(0x07)
	struct UTimelineComponent* Camera Boom Timeline; // 0x3550(0x08)
	float Elapsed; // 0x3558(0x04)
	bool StopwatchOn; // 0x355c(0x01)
	char UnknownData_355D[0x3]; // 0x355d(0x03)
	struct FVector PlayerLocation; // 0x3560(0x0c)
	char UnknownData_356C[0x4]; // 0x356c(0x04)
	struct UAkAudioEvent* Successful Hit AkEvent; // 0x3570(0x08)
	bool ADS Test; // 0x3578(0x01)
	char UnknownData_3579[0x3]; // 0x3579(0x03)
	float Camera Boom Arm Max; // 0x357c(0x04)
	float Cached 1p Field of View; // 0x3580(0x04)
	float Test Alpha; // 0x3584(0x04)
	bool InFreeFall; // 0x3588(0x01)
	bool Turn Right; // 0x3589(0x01)
	bool Turn Left; // 0x358a(0x01)
	char UnknownData_358B[0x1]; // 0x358b(0x01)
	float Pitch; // 0x358c(0x04)
	struct UParticleSystem* Friendly Free Fall; // 0x3590(0x08)
	struct UParticleSystem* Enemy Free Fall; // 0x3598(0x08)
	float Yaw; // 0x35a0(0x04)
	float Main Camera Cached FOV; // 0x35a4(0x04)
	int32_t HitDirs; // 0x35a8(0x04)
	enum class HitEnum HitEnum; // 0x35ac(0x01)
	char UnknownData_35AD[0x3]; // 0x35ad(0x03)
	struct FKSSpecialEffect DownedPPEffect; // 0x35b0(0x50)
	float Downed PP Transition Duration; // 0x3600(0x04)
	bool IsTrailActive; // 0x3604(0x01)
	char UnknownData_3605[0x3]; // 0x3605(0x03)
	struct UMaterialInterface* FlashBang PP Material; // 0x3608(0x08)
	struct UMaterialInstanceDynamic* FlashBang PP Material Instance; // 0x3610(0x08)
	float Max Flash Bang Effect Distance; // 0x3618(0x04)
	float Half Flash Bang Effect Distance; // 0x361c(0x04)
	struct TArray<struct UObject*> SFX Grenade Damage Type; // 0x3620(0x10)
	struct TArray<struct UObject*> SFX Blade Damage Type; // 0x3630(0x10)
	struct AActor* SFX Damage Target; // 0x3640(0x08)
	struct FVector LeftTempLoc; // 0x3648(0x0c)
	float AffectRange; // 0x3654(0x04)
	struct FVector RightTempLoc; // 0x3658(0x0c)
	char UnknownData_3664[0x4]; // 0x3664(0x04)
	struct UMaterialInterface* Out Of Bounds PP Material; // 0x3668(0x08)
	struct UMaterialInstanceDynamic* Out Of Bounds PP Material Instance; // 0x3670(0x08)
	float CachedFOV; // 0x3678(0x04)
	char UnknownData_367C[0x4]; // 0x367c(0x04)
	struct FLastHitImpulse LastHitInfo; // 0x3680(0x40)
	struct FRotator KnockbackRotation; // 0x36c0(0x0c)
	float DeltaTime; // 0x36cc(0x04)
	bool bIsRagdoll; // 0x36d0(0x01)
	bool bIsLaunchedOnDown; // 0x36d1(0x01)
	bool bSnapshotPoseFacingUp; // 0x36d2(0x01)
	char UnknownData_36D3[0x5]; // 0x36d3(0x05)
	struct UAnimMontage* GetUpMontage; // 0x36d8(0x08)
	bool bIsRagdollOnGround; // 0x36e0(0x01)
	char UnknownData_36E1[0x3]; // 0x36e1(0x03)
	struct FVector RagdollPelvisLocation; // 0x36e4(0x0c)
	struct FVector RagdollCapsuleLocation; // 0x36f0(0x0c)
	float TimeInRagdoll; // 0x36fc(0x04)
	float MaxTimeInRagdoll; // 0x3700(0x04)
	char UnknownData_3704[0x4]; // 0x3704(0x04)
	struct UParticleSystemComponent* FireParticle; // 0x3708(0x08)
	struct UMaterialInstanceDynamic* GrenadeImpactPointMID; // 0x3710(0x08)
	bool ZiplineActive1; // 0x3718(0x01)
	char UnknownData_3719[0x3]; // 0x3719(0x03)
	float SprintFov; // 0x371c(0x04)
	float SprintFOVChangeDuration; // 0x3720(0x04)
	float ZiplineFov; // 0x3724(0x04)
	float PreviousFov; // 0x3728(0x04)
	char UnknownData_372C[0x4]; // 0x372c(0x04)
	struct FDebugFloatHistory InterpLengthHist; // 0x3730(0x20)
	struct UKSFXCurveComponent* AppliedDownedCurveComponent; // 0x3750(0x08)
	struct FDamageEffect Effect; // 0x3758(0x50)
	struct FKSSpecialEffect BloodPPEffect; // 0x37a8(0x50)
	struct UMaterial* HealthPostProcess; // 0x37f8(0x08)
	struct UMaterialInstanceDynamic* Health PP MID; // 0x3800(0x08)
	float HealthPPInterpSpeed; // 0x3808(0x04)
	char UnknownData_380C[0x4]; // 0x380c(0x04)
	struct FKSSpecialEffect SonarPPEffect; // 0x3810(0x50)
	struct FKSSpecialEffect EMPPPEffect; // 0x3860(0x50)
	bool bEnableDirectionalDowns; // 0x38b0(0x01)
	bool bEnableComplexDirectionalDowns; // 0x38b1(0x01)
	char UnknownData_38B2[0x2]; // 0x38b2(0x02)
	float FreeFallParticleDetachTime; // 0x38b4(0x04)
	struct FKSSpecialEffect OutOfBoundsPPEffect; // 0x38b8(0x50)
	struct UKSFXCurveComponent* OutOfBoundsEffectCurve; // 0x3908(0x08)
	struct FKSSpecialEffect ConfirmHitPPEffect; // 0x3910(0x50)
	struct FKSSpecialEffect NearMissPPEffect; // 0x3960(0x50)
	int32_t Active Index; // 0x39b0(0x04)
	char UnknownData_39B4[0x4]; // 0x39b4(0x04)
	struct FKSSpecialEffect FirePostProcess; // 0x39b8(0x50)
	struct TArray<struct FDamageEffect> QueuedDamageEffects; // 0x3a08(0x10)
	bool InLowTreshold; // 0x3a18(0x01)
	char UnknownData_3A19[0x3]; // 0x3a19(0x03)
	float LowHealthTreshold; // 0x3a1c(0x04)
	struct FKSSpecialEffect PP_SkyDive; // 0x3a20(0x50)
	struct TArray<struct FKSFlashBangRecord> FlashBangRecords; // 0x3a70(0x10)
	bool FlashBang PP Active; // 0x3a80(0x01)
	char UnknownData_3A81[0x7]; // 0x3a81(0x07)
	struct UAkAudioEvent* GadgetSwapSound; // 0x3a88(0x08)
	bool ConfirmHitPPEffectEnabled; // 0x3a90(0x01)
	char UnknownData_3A91[0x7]; // 0x3a91(0x07)
	struct FKSSpecialEffect ConfirmPickupPPEffect; // 0x3a98(0x50)
	struct FDelegate Temp_delegate_Variable; // 0x3ae8(0x10)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable; // 0x3af8(0x10)
	struct FDelegate Temp_delegate_Variable_2; // 0x3b08(0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate; // 0x3b18(0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2; // 0x3b28(0x10)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_2; // 0x3b38(0x10)
	struct FDelegate Temp_delegate_Variable_3; // 0x3b48(0x10)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_3; // 0x3b58(0x10)
	struct FDelegate Temp_delegate_Variable_4; // 0x3b68(0x10)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_4; // 0x3b78(0x10)
	struct FDelegate Temp_delegate_Variable_5; // 0x3b88(0x10)
	struct FName Temp_name_Variable; // 0x3b98(0x08)
	struct FName Temp_name_Variable_2; // 0x3ba0(0x08)
	struct FName Temp_name_Variable_3; // 0x3ba8(0x08)
	struct FName Temp_name_Variable_4; // 0x3bb0(0x08)
	struct FName Temp_name_Variable_5; // 0x3bb8(0x08)
	struct FName Temp_name_Variable_6; // 0x3bc0(0x08)
	struct FName Temp_name_Variable_7; // 0x3bc8(0x08)
	struct FName Temp_name_Variable_8; // 0x3bd0(0x08)
	struct FName Temp_name_Variable_9; // 0x3bd8(0x08)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_5; // 0x3be0(0x10)
	struct FDelegate Temp_delegate_Variable_6; // 0x3bf0(0x10)
	bool CallFunc_GetRagdollFacingDirection_IsUp; // 0x3c00(0x01)
	char UnknownData_3C01[0x3]; // 0x3c01(0x03)
	float K2Node_Event_Damage; // 0x3c04(0x04)
	struct UObject* K2Node_Event_DamageTypeClass_2; // 0x3c08(0x08)
	float K2Node_Event_DamageImpulse; // 0x3c10(0x04)
	struct FVector K2Node_Event_RelativeImpactLocation; // 0x3c14(0x0c)
	struct FName K2Node_Event_BoneName; // 0x3c20(0x08)
	struct AActor* K2Node_Event_DamageCauser_2; // 0x3c28(0x08)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_6; // 0x3c30(0x10)
	bool K2Node_CustomEvent_IsGrounded; // 0x3c40(0x01)
	char UnknownData_3C41[0x3]; // 0x3c41(0x03)
	struct FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult; // 0x3c44(0x88)
	struct FDelegate Temp_delegate_Variable_7; // 0x3ccc(0x10)
	char UnknownData_3CDC[0x4]; // 0x3cdc(0x04)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_7; // 0x3ce0(0x10)
	struct FDelegate Temp_delegate_Variable_8; // 0x3cf0(0x10)
	struct FVector CallFunc_GetPhysicsLinearVelocity_ReturnValue; // 0x3d00(0x0c)
	char UnknownData_3D0C[0x4]; // 0x3d0c(0x04)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_8; // 0x3d10(0x10)
	struct FDelegate Temp_delegate_Variable_9; // 0x3d20(0x10)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_9; // 0x3d30(0x10)
	struct FDelegate Temp_delegate_Variable_10; // 0x3d40(0x10)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_10; // 0x3d50(0x10)
	struct FDelegate Temp_delegate_Variable_11; // 0x3d60(0x10)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_11; // 0x3d70(0x10)
	struct FDelegate Temp_delegate_Variable_12; // 0x3d80(0x10)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_12; // 0x3d90(0x10)
	struct FDelegate Temp_delegate_Variable_13; // 0x3da0(0x10)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_13; // 0x3db0(0x10)
	bool CallFunc_ShouldLastHitLaunchIntoRagdoll_bShouldRagdoll; // 0x3dc0(0x01)
	char UnknownData_3DC1[0x3]; // 0x3dc1(0x03)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3; // 0x3dc4(0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4; // 0x3dd4(0x10)
	float K2Node_CustomEvent_DeltaSeconds; // 0x3de4(0x04)
	struct FName Temp_name_Variable_10; // 0x3de8(0x08)
	struct FVector CallFunc_ProcessTakePointHitDamage_WorldHitLocation; // 0x3df0(0x0c)
	struct FVector CallFunc_ProcessTakePointHitDamage_WorldHitNormal; // 0x3dfc(0x0c)
	struct FVector CallFunc_ProcessTakePointHitDamage_VectorToHitSource; // 0x3e08(0x0c)
	enum class EKSMovementDirection CallFunc_ProcessTakePointHitDamage_HitDirection; // 0x3e14(0x01)
	char UnknownData_3E15[0x3]; // 0x3e15(0x03)
	struct FName Temp_name_Variable_11; // 0x3e18(0x08)
	struct FName K2Node_Event_SequenceName; // 0x3e20(0x08)
	bool K2Node_SwitchName_CmpSuccess; // 0x3e28(0x01)
	char UnknownData_3E29[0x3]; // 0x3e29(0x03)
	struct FVector K2Node_CustomEvent_Camera_Rotation; // 0x3e2c(0x0c)
	bool K2Node_CustomEvent_Uses_Rotation; // 0x3e38(0x01)
	char UnknownData_3E39[0x3]; // 0x3e39(0x03)
	struct FVector K2Node_CustomEvent_Camera_Offset; // 0x3e3c(0x0c)
	float CallFunc_BreakVector_X; // 0x3e48(0x04)
	float CallFunc_BreakVector_Y; // 0x3e4c(0x04)
	float CallFunc_BreakVector_Z; // 0x3e50(0x04)
	float CallFunc_BreakVector_X_2; // 0x3e54(0x04)
	float CallFunc_BreakVector_Y_2; // 0x3e58(0x04)
	float CallFunc_BreakVector_Z_2; // 0x3e5c(0x04)
	struct FDelegate Temp_delegate_Variable_14; // 0x3e60(0x10)
	struct FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult; // 0x3e70(0x88)
	struct FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult; // 0x3ef8(0x88)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_14; // 0x3f80(0x10)
	struct FDelegate Temp_delegate_Variable_15; // 0x3f90(0x10)
	struct USkinnableSkeletalMeshComponent* K2Node_DynamicCast_AsSkinnable_Skeletal_Mesh_Component; // 0x3fa0(0x08)
	bool K2Node_DynamicCast_bSuccess; // 0x3fa8(0x01)
	char UnknownData_3FA9[0x7]; // 0x3fa9(0x07)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_15; // 0x3fb0(0x10)
	struct USkinnableSkeletalMeshComponent* K2Node_DynamicCast_AsSkinnable_Skeletal_Mesh_Component_2; // 0x3fc0(0x08)
	bool K2Node_DynamicCast_bSuccess_2; // 0x3fc8(0x01)
	char UnknownData_3FC9[0x7]; // 0x3fc9(0x07)
	struct FDamageEffect K2Node_CustomEvent_Effect_4; // 0x3fd0(0x50)
	struct FDelegate Temp_delegate_Variable_16; // 0x4020(0x10)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_16; // 0x4030(0x10)
	struct FDelegate Temp_delegate_Variable_17; // 0x4040(0x10)
	struct FKSFlashBangRecord K2Node_MakeStruct_KSFlashBangRecord; // 0x4050(0x08)
	struct FKSFlashBangRecord K2Node_MakeStruct_KSFlashBangRecord_2; // 0x4058(0x08)
	struct FKSFlashBangRecord K2Node_MakeStruct_KSFlashBangRecord_3; // 0x4060(0x08)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_17; // 0x4068(0x10)
	bool Temp_bool_Has_Been_Initd_Variable; // 0x4078(0x01)
	char UnknownData_4079[0x3]; // 0x4079(0x03)
	struct FDelegate Temp_delegate_Variable_18; // 0x407c(0x10)
	char UnknownData_408C[0x4]; // 0x408c(0x04)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_18; // 0x4090(0x10)
	struct FDelegate Temp_delegate_Variable_19; // 0x40a0(0x10)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_19; // 0x40b0(0x10)
	bool Temp_bool_IsClosed_Variable; // 0x40c0(0x01)
	bool K2Node_Event_bVisible; // 0x40c1(0x01)
	char UnknownData_40C2[0x2]; // 0x40c2(0x02)
	struct FDelegate Temp_delegate_Variable_20; // 0x40c4(0x10)
	char UnknownData_40D4[0x4]; // 0x40d4(0x04)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_20; // 0x40d8(0x10)
	bool Temp_bool_Has_Been_Initd_Variable_2; // 0x40e8(0x01)
	char UnknownData_40E9[0x7]; // 0x40e9(0x07)
	struct FDamageEffect K2Node_CustomEvent_Effect_3; // 0x40f0(0x50)
	struct UObject* K2Node_ClassDynamicCast_AsKSDamage_Type_Base; // 0x4140(0x08)
	bool K2Node_ClassDynamicCast_bSuccess; // 0x4148(0x01)
	char UnknownData_4149[0x3]; // 0x4149(0x03)
	struct FDelegate Temp_delegate_Variable_21; // 0x414c(0x10)
	char UnknownData_415C[0x4]; // 0x415c(0x04)
	struct UKSBloodSplatterComponent* K2Node_DynamicCast_AsKSBlood_Splatter_Component; // 0x4160(0x08)
	bool K2Node_DynamicCast_bSuccess_3; // 0x4168(0x01)
	char UnknownData_4169[0x7]; // 0x4169(0x07)
	struct FDamageEffect K2Node_CustomEvent_Effect_2; // 0x4170(0x50)
	struct UObject* K2Node_ClassDynamicCast_AsKSDamage_Type_Base_2; // 0x41c0(0x08)
	bool K2Node_ClassDynamicCast_bSuccess_2; // 0x41c8(0x01)
	char UnknownData_41C9[0x7]; // 0x41c9(0x07)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_21; // 0x41d0(0x10)
	bool Temp_bool_IsClosed_Variable_2; // 0x41e0(0x01)
	enum class EKSPowerSlideEndReason K2Node_Event_EndReason; // 0x41e1(0x01)
	char UnknownData_41E2[0x6]; // 0x41e2(0x06)
	struct AKSHUDCommon* K2Node_DynamicCast_AsKSHUDCommon; // 0x41e8(0x08)
	bool K2Node_DynamicCast_bSuccess_4; // 0x41f0(0x01)
	char UnknownData_41F1[0x7]; // 0x41f1(0x07)
	struct AKSHUDCommon* K2Node_DynamicCast_AsKSHUDCommon_2; // 0x41f8(0x08)
	bool K2Node_DynamicCast_bSuccess_5; // 0x4200(0x01)
	char UnknownData_4201[0x7]; // 0x4201(0x07)
	struct FDamageEffect K2Node_CustomEvent_Effect; // 0x4208(0x50)
	bool CallFunc_GetSettingAsBool_OutBool; // 0x4258(0x01)
	char UnknownData_4259[0x7]; // 0x4259(0x07)
	struct UObject* K2Node_ClassDynamicCast_AsKSDamage_Type_Base_3; // 0x4260(0x08)
	bool K2Node_ClassDynamicCast_bSuccess_3; // 0x4268(0x01)
	char UnknownData_4269[0x7]; // 0x4269(0x07)
	struct FCombatEventInfo K2Node_Event_DamageInfo_2; // 0x4270(0x60)
	float K2Node_Event_DamageAmount; // 0x42d0(0x04)
	char UnknownData_42D4[0x4]; // 0x42d4(0x04)
	struct UObject* K2Node_Event_DamageTypeClass; // 0x42d8(0x08)
	struct AActor* K2Node_Event_DamageCauser; // 0x42e0(0x08)
	struct FVector K2Node_Event_DamageOrigin; // 0x42e8(0x0c)
	char UnknownData_42F4[0x4]; // 0x42f4(0x04)
	struct FCombatEventInfo K2Node_Event_DamageInfo; // 0x42f8(0x60)
	struct FDelegate Temp_delegate_Variable_22; // 0x4358(0x10)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_22; // 0x4368(0x10)
	struct FDelegate Temp_delegate_Variable_23; // 0x4378(0x10)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_23; // 0x4388(0x10)
	struct FDelegate Temp_delegate_Variable_24; // 0x4398(0x10)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_24; // 0x43a8(0x10)
	struct FDelegate Temp_delegate_Variable_25; // 0x43b8(0x10)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_25; // 0x43c8(0x10)
	struct UParticleSystem* CallFunc_GetHitPawnEffectOverride_ParticleSystem; // 0x43d8(0x08)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_5; // 0x43e0(0x10)
	struct FDamageEffect K2Node_Event_Effect_2; // 0x43f0(0x50)
	struct FDamageEffect K2Node_Event_Effect; // 0x4440(0x50)
	struct FVector CallFunc_ProcessTakePointHitDamage_WorldHitLocation_2; // 0x4490(0x0c)
	struct FVector CallFunc_ProcessTakePointHitDamage_WorldHitNormal_2; // 0x449c(0x0c)
	struct FVector CallFunc_ProcessTakePointHitDamage_VectorToHitSource_2; // 0x44a8(0x0c)
	enum class EKSMovementDirection CallFunc_ProcessTakePointHitDamage_HitDirection_2; // 0x44b4(0x01)
	char UnknownData_44B5[0x3]; // 0x44b5(0x03)
	struct UObject* K2Node_ClassDynamicCast_AsKSDamage_Type_Base_4; // 0x44b8(0x08)
	bool K2Node_ClassDynamicCast_bSuccess_4; // 0x44c0(0x01)
	char UnknownData_44C1[0x3]; // 0x44c1(0x03)
	struct FDelegate Temp_delegate_Variable_26; // 0x44c4(0x10)
	char UnknownData_44D4[0x4]; // 0x44d4(0x04)
	struct AKSCharacterBase* K2Node_CustomEvent_Character_3; // 0x44d8(0x08)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_26; // 0x44e0(0x10)
	bool Temp_bool_Has_Been_Initd_Variable_3; // 0x44f0(0x01)
	char UnknownData_44F1[0x3]; // 0x44f1(0x03)
	struct FDelegate Temp_delegate_Variable_27; // 0x44f4(0x10)
	char UnknownData_4504[0x4]; // 0x4504(0x04)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_27; // 0x4508(0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_6; // 0x4518(0x10)
	struct FDelegate Temp_delegate_Variable_28; // 0x4528(0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_7; // 0x4538(0x10)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_28; // 0x4548(0x10)
	struct FDelegate Temp_delegate_Variable_29; // 0x4558(0x10)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_29; // 0x4568(0x10)
	struct FDelegate Temp_delegate_Variable_30; // 0x4578(0x10)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_30; // 0x4588(0x10)
	struct APlayerState* K2Node_CustomEvent_Player; // 0x4598(0x08)
	struct FDelegate Temp_delegate_Variable_31; // 0x45a0(0x10)
	struct TScriptInterface<None> K2Node_DynamicCast_AsINameplate_Widget; // 0x45b0(0x10)
	bool K2Node_DynamicCast_bSuccess_6; // 0x45c0(0x01)
	char UnknownData_45C1[0x7]; // 0x45c1(0x07)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_31; // 0x45c8(0x10)
	float K2Node_Event_ExtraTime; // 0x45d8(0x04)
	char UnknownData_45DC[0x4]; // 0x45dc(0x04)
	struct TScriptInterface<None> K2Node_DynamicCast_AsINameplate_Widget_2; // 0x45e0(0x10)
	bool K2Node_DynamicCast_bSuccess_7; // 0x45f0(0x01)
	char UnknownData_45F1[0x7]; // 0x45f1(0x07)
	struct TScriptInterface<None> K2Node_DynamicCast_AsINameplate_Widget_3; // 0x45f8(0x10)
	bool K2Node_DynamicCast_bSuccess_8; // 0x4608(0x01)
	char K2Node_Event_PrevMovementMode; // 0x4609(0x01)
	char K2Node_Event_NewMovementMode; // 0x460a(0x01)
	char K2Node_Event_PrevCustomMode; // 0x460b(0x01)
	char K2Node_Event_NewCustomMode; // 0x460c(0x01)
	char UnknownData_460D[0x3]; // 0x460d(0x03)
	struct UKSCharacterMovementComponent* K2Node_DynamicCast_AsKSCharacter_Movement_Component; // 0x4610(0x08)
	bool K2Node_DynamicCast_bSuccess_9; // 0x4618(0x01)
	char UnknownData_4619[0x7]; // 0x4619(0x07)
	struct FCombatEventInfo K2Node_CustomEvent_EventInfo_2; // 0x4620(0x60)
	int32_t K2Node_CustomEvent_ExpBonus_2; // 0x4680(0x04)
	char UnknownData_4684[0x4]; // 0x4684(0x04)
	struct AKSPlayerState* K2Node_CustomEvent_Revivee; // 0x4688(0x08)
	struct AKSPlayerState* K2Node_CustomEvent_Reviver; // 0x4690(0x08)
	int32_t K2Node_CustomEvent_ExpBonus; // 0x4698(0x04)
	char UnknownData_469C[0x4]; // 0x469c(0x04)
	struct AKSPlayerState* K2Node_DynamicCast_AsKSPlayer_State; // 0x46a0(0x08)
	bool K2Node_DynamicCast_bSuccess_10; // 0x46a8(0x01)
	char UnknownData_46A9[0x7]; // 0x46a9(0x07)
	struct AKSPlayerState* K2Node_DynamicCast_AsKSPlayer_State_2; // 0x46b0(0x08)
	bool K2Node_DynamicCast_bSuccess_11; // 0x46b8(0x01)
	char UnknownData_46B9[0x3]; // 0x46b9(0x03)
	struct FDelegate Temp_delegate_Variable_32; // 0x46bc(0x10)
	char UnknownData_46CC[0x4]; // 0x46cc(0x04)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_32; // 0x46d0(0x10)
	struct FCombatEventInfo K2Node_CustomEvent_EventInfo; // 0x46e0(0x60)
	struct AKSPlayerState* K2Node_DynamicCast_AsKSPlayer_State_3; // 0x4740(0x08)
	bool K2Node_DynamicCast_bSuccess_12; // 0x4748(0x01)
	char UnknownData_4749[0x7]; // 0x4749(0x07)
	struct AKSPlayerState* K2Node_DynamicCast_AsKSPlayer_State_4; // 0x4750(0x08)
	bool K2Node_DynamicCast_bSuccess_13; // 0x4758(0x01)
	bool Temp_bool_IsClosed_Variable_3; // 0x4759(0x01)
	bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x475a(0x01)
	bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2; // 0x475b(0x01)
	bool K2Node_Event_Enabled; // 0x475c(0x01)
	char UnknownData_475D[0x3]; // 0x475d(0x03)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_8; // 0x4760(0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_9; // 0x4770(0x10)
	bool Temp_bool_Has_Been_Initd_Variable_4; // 0x4780(0x01)
	char UnknownData_4781[0x7]; // 0x4781(0x07)
	struct AKSCharacter* K2Node_Event_Reviver_3; // 0x4788(0x08)
	float K2Node_Event_ReviveTime; // 0x4790(0x04)
	bool K2Node_Event_Remote; // 0x4794(0x01)
	char UnknownData_4795[0x3]; // 0x4795(0x03)
	struct AKSCharacter* K2Node_Event_Reviver_2; // 0x4798(0x08)
	struct AKSCharacter* K2Node_Event_Reviver; // 0x47a0(0x08)
	bool Temp_bool_IsClosed_Variable_4; // 0x47a8(0x01)
	bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3; // 0x47a9(0x01)
	bool Temp_bool_Has_Been_Initd_Variable_5; // 0x47aa(0x01)
	bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_4; // 0x47ab(0x01)
	bool Temp_bool_IsClosed_Variable_5; // 0x47ac(0x01)
	char UnknownData_47AD[0x3]; // 0x47ad(0x03)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_10; // 0x47b0(0x10)
	bool K2Node_CustomEvent_IsSprinting; // 0x47c0(0x01)
	bool K2Node_CustomEvent_IsDodgeRolling_2; // 0x47c1(0x01)
	char UnknownData_47C2[0x2]; // 0x47c2(0x02)
	struct FVector CallFunc_KeepActionCameraAboveWater_OutBoomPosition; // 0x47c4(0x0c)
	struct FKey K2Node_InputKeyEvent_Key; // 0x47d0(0x18)
	struct FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_2; // 0x47e8(0x88)
	float K2Node_Event_DeltaSeconds; // 0x4870(0x04)
	char UnknownData_4874[0x4]; // 0x4874(0x04)
	struct UParticleSystem* Temp_object_Variable; // 0x4878(0x08)
	bool Temp_bool_Variable; // 0x4880(0x01)
	char UnknownData_4881[0x3]; // 0x4881(0x03)
	struct FVector K2Node_Event_BreakingLocation; // 0x4884(0x0c)
	struct FVector K2Node_Event_BreakingDirection; // 0x4890(0x0c)
	struct FVector K2Node_Event_BreakingNormal; // 0x489c(0x0c)
	bool K2Node_CustomEvent_IsPowerSliding; // 0x48a8(0x01)
	char UnknownData_48A9[0x3]; // 0x48a9(0x03)
	float CallFunc_GetTargetFov_TargetFov; // 0x48ac(0x04)
	bool K2Node_CustomEvent_IsZiplining; // 0x48b0(0x01)
	char UnknownData_48B1[0x7]; // 0x48b1(0x07)
	struct UMaster_WeaponComponent_C* K2Node_DynamicCast_AsMaster_Weapon_Component; // 0x48b8(0x08)
	bool K2Node_DynamicCast_bSuccess_14; // 0x48c0(0x01)
	char UnknownData_48C1[0x3]; // 0x48c1(0x03)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_11; // 0x48c4(0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_12; // 0x48d4(0x10)
	bool Temp_bool_Has_Been_Initd_Variable_6; // 0x48e4(0x01)
	bool K2Node_Event_bEnterNoseDive; // 0x48e5(0x01)
	char UnknownData_48E6[0x2]; // 0x48e6(0x02)
	float K2Node_Event_AnimLength; // 0x48e8(0x04)
	char UnknownData_48EC[0x4]; // 0x48ec(0x04)
	struct FString K2Node_Event_SwingMontageSectionName; // 0x48f0(0x10)
	struct UMaster_WeaponComponent_C* K2Node_DynamicCast_AsMaster_Weapon_Component_2; // 0x4900(0x08)
	bool K2Node_DynamicCast_bSuccess_15; // 0x4908(0x01)
	char UnknownData_4909[0x3]; // 0x4909(0x03)
	struct FDelegate Temp_delegate_Variable_33; // 0x490c(0x10)
	char UnknownData_491C[0x4]; // 0x491c(0x04)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_33; // 0x4920(0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_13; // 0x4930(0x10)
	bool Temp_bool_Has_Been_Initd_Variable_7; // 0x4940(0x01)
	bool Temp_bool_IsClosed_Variable_6; // 0x4941(0x01)
	char UnknownData_4942[0x6]; // 0x4942(0x06)
	struct APlayerController* K2Node_Event_PC_2; // 0x4948(0x08)
	struct APlayerController* K2Node_Event_PC; // 0x4950(0x08)
	struct FDelegate Temp_delegate_Variable_34; // 0x4958(0x10)
	bool K2Node_Event_UpdateTargetRotation; // 0x4968(0x01)
	bool K2Node_Event_AffectCapsule; // 0x4969(0x01)
	char UnknownData_496A[0x2]; // 0x496a(0x02)
	struct FRotator CallFunc_DetermineKnockbackFacing_ActorRotation; // 0x496c(0x0c)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_34; // 0x4978(0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_14; // 0x4988(0x10)
	enum class HitEnum Temp_byte_Variable; // 0x4998(0x01)
	enum class HitEnum Temp_byte_Variable_2; // 0x4999(0x01)
	enum class HitEnum Temp_byte_Variable_3; // 0x499a(0x01)
	enum class HitEnum Temp_byte_Variable_4; // 0x499b(0x01)
	enum class EKSMovementDirection Temp_byte_Variable_5; // 0x499c(0x01)
	enum class HitEnum K2Node_Select_Default; // 0x499d(0x01)
	bool Temp_bool_IsClosed_Variable_7; // 0x499e(0x01)
	char UnknownData_499F[0x1]; // 0x499f(0x01)
	struct FVector Temp_struct_Variable_35; // 0x49a0(0x0c)
	struct FHitResult K2Node_Event_Hit; // 0x49ac(0x88)
	bool Temp_bool_Variable_2; // 0x4a34(0x01)
	char UnknownData_4A35[0x3]; // 0x4a35(0x03)
	struct FVector K2Node_Select_Default_2; // 0x4a38(0x0c)
	bool Temp_bool_Variable_3; // 0x4a44(0x01)
	char UnknownData_4A45[0x3]; // 0x4a45(0x03)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_15; // 0x4a48(0x10)
	struct UParticleSystem* K2Node_Select_Default_3; // 0x4a58(0x08)
	struct FSettingDelegateStruct K2Node_MakeStruct_SettingDelegateStruct; // 0x4a60(0x20)
	struct UParticleSystem* K2Node_Select_Default_4; // 0x4a80(0x08)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_16; // 0x4a88(0x10)
	struct FDelegate Temp_delegate_Variable_35; // 0x4a98(0x10)
	struct FLastHitImpulse K2Node_MakeStruct_LastHitImpulse; // 0x4aa8(0x40)
	bool K2Node_CustomEvent_IsDodgeRolling; // 0x4ae8(0x01)
	char UnknownData_4AE9[0x7]; // 0x4ae9(0x07)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_36; // 0x4af0(0x10)
	struct FDelegate Temp_delegate_Variable_36; // 0x4b00(0x10)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_37; // 0x4b10(0x10)
	struct FDelegate Temp_delegate_Variable_37; // 0x4b20(0x10)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_38; // 0x4b30(0x10)
	struct FDelegate Temp_delegate_Variable_38; // 0x4b40(0x10)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_39; // 0x4b50(0x10)
	struct FDelegate Temp_delegate_Variable_39; // 0x4b60(0x10)
	struct AKSCharacter* K2Node_CustomEvent_Character_2; // 0x4b70(0x08)
	struct UMaster_WeaponComponent_C* K2Node_DynamicCast_AsMaster_Weapon_Component_3; // 0x4b78(0x08)
	bool K2Node_DynamicCast_bSuccess_16; // 0x4b80(0x01)
	char UnknownData_4B81[0x7]; // 0x4b81(0x07)
	struct UMaster_WeaponComponent_C* K2Node_DynamicCast_AsMaster_Weapon_Component_4; // 0x4b88(0x08)
	bool K2Node_DynamicCast_bSuccess_17; // 0x4b90(0x01)
	char UnknownData_4B91[0x7]; // 0x4b91(0x07)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_40; // 0x4b98(0x10)
	struct FDelegate Temp_delegate_Variable_40; // 0x4ba8(0x10)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_41; // 0x4bb8(0x10)
	struct FDelegate Temp_delegate_Variable_41; // 0x4bc8(0x10)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_42; // 0x4bd8(0x10)
	struct FDelegate Temp_delegate_Variable_42; // 0x4be8(0x10)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_43; // 0x4bf8(0x10)
	struct FDelegate Temp_delegate_Variable_43; // 0x4c08(0x10)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_44; // 0x4c18(0x10)
	struct FDelegate Temp_delegate_Variable_44; // 0x4c28(0x10)
	struct TArray<struct FAkExternalSourceInfo> Temp_struct_Variable_45; // 0x4c38(0x10)
	bool K2Node_Event_bFullyHealed; // 0x4c48(0x01)
	bool Temp_bool_Variable_4; // 0x4c49(0x01)
	enum class HitEnum Temp_byte_Variable_6; // 0x4c4a(0x01)
	enum class HitEnum Temp_byte_Variable_7; // 0x4c4b(0x01)
	enum class HitEnum Temp_byte_Variable_8; // 0x4c4c(0x01)
	bool Temp_bool_Has_Been_Initd_Variable_8; // 0x4c4d(0x01)
	enum class HitEnum Temp_byte_Variable_9; // 0x4c4e(0x01)
	enum class EKSMovementDirection Temp_byte_Variable_10; // 0x4c4f(0x01)
	enum class HitEnum K2Node_Select_Default_5; // 0x4c50(0x01)
	char UnknownData_4C51[0x7]; // 0x4c51(0x07)
	struct UKSZiplineMeshComponent* K2Node_DynamicCast_AsKSZipline_Mesh_Component; // 0x4c58(0x08)
	bool K2Node_DynamicCast_bSuccess_18; // 0x4c60(0x01)
	char UnknownData_4C61[0x7]; // 0x4c61(0x07)
	struct UKSZiplineMeshComponent* K2Node_DynamicCast_AsKSZipline_Mesh_Component_2; // 0x4c68(0x08)
	bool K2Node_DynamicCast_bSuccess_19; // 0x4c70(0x01)
	char UnknownData_4C71[0x3]; // 0x4c71(0x03)
	float K2Node_InputAxisKeyEvent_AxisValue_2; // 0x4c74(0x04)
	float K2Node_InputAxisKeyEvent_AxisValue; // 0x4c78(0x04)
	char UnknownData_4C7C[0x4]; // 0x4c7c(0x04)
	struct UAnimMontage* Temp_object_Variable_2; // 0x4c80(0x08)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_17; // 0x4c88(0x10)
	struct UAnimMontage* Temp_object_Variable_3; // 0x4c98(0x08)
	bool Temp_bool_Variable_5; // 0x4ca0(0x01)
	bool Temp_bool_IsClosed_Variable_8; // 0x4ca1(0x01)
	char UnknownData_4CA2[0x6]; // 0x4ca2(0x06)
	struct UAnimMontage* K2Node_Select_Default_6; // 0x4ca8(0x08)
	struct UKSZiplineMeshComponent* K2Node_DynamicCast_AsKSZipline_Mesh_Component_3; // 0x4cb0(0x08)
	bool K2Node_DynamicCast_bSuccess_20; // 0x4cb8(0x01)
	char UnknownData_4CB9[0x7]; // 0x4cb9(0x07)
	struct UKSZiplineMeshComponent* K2Node_DynamicCast_AsKSZipline_Mesh_Component_4; // 0x4cc0(0x08)
	bool K2Node_DynamicCast_bSuccess_21; // 0x4cc8(0x01)
	char UnknownData_4CC9[0x7]; // 0x4cc9(0x07)
	struct AKSCharacter* K2Node_CustomEvent_Character; // 0x4cd0(0x08)
	struct AKSItemDrop* K2Node_CustomEvent_ItemDrop; // 0x4cd8(0x08)
	struct UKSItem* K2Node_CustomEvent_Item; // 0x4ce0(0x08)
	float K2Node_Event_InteractTime; // 0x4ce8(0x04)
	float CallFunc_BreakVector_X_3; // 0x4cec(0x04)
	float CallFunc_BreakVector_Y_3; // 0x4cf0(0x04)
	float CallFunc_BreakVector_Z_3; // 0x4cf4(0x04)
	struct AKSPlayerController* K2Node_DynamicCast_AsKSPlayer_Controller; // 0x4cf8(0x08)
	bool K2Node_DynamicCast_bSuccess_22; // 0x4d00(0x01)
	char UnknownData_4D01[0x3]; // 0x4d01(0x03)
	struct FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_3; // 0x4d04(0x88)
	char UnknownData_4D8C[0x4]; // 0x4d8c(0x04)
	struct AKSPlayerController* K2Node_DynamicCast_AsKSPlayer_Controller_2; // 0x4d90(0x08)
	bool K2Node_DynamicCast_bSuccess_23; // 0x4d98(0x01)
	bool K2Node_SwitchEnum_CmpSuccess; // 0x4d99(0x01)
	char UnknownData_4D9A[0x6]; // 0x4d9a(0x06)
	struct AKSPlayerController* K2Node_DynamicCast_AsKSPlayer_Controller_3; // 0x4da0(0x08)
	bool K2Node_DynamicCast_bSuccess_24; // 0x4da8(0x01)
	bool K2Node_SwitchEnum_CmpSuccess_2; // 0x4da9(0x01)
	bool K2Node_SwitchEnum_CmpSuccess_3; // 0x4daa(0x01)
	char UnknownData_4DAB[0x5]; // 0x4dab(0x05)

	void Zipline Pulley Unhide(); // Function MainCharacter.MainCharacter_C.Zipline Pulley Unhide
	void Zipline Pulley Hide(); // Function MainCharacter.MainCharacter_C.Zipline Pulley Hide
	void WasLastHitHeadshot(bool bpp__bHeadshot__pf); // Function MainCharacter.MainCharacter_C.WasLastHitHeadshot
	void VO_Player_Revived(); // Function MainCharacter.MainCharacter_C.VO_Player_Revived
	void VO_Player_Death(); // Function MainCharacter.MainCharacter_C.VO_Player_Death
	void VerifyLastHitDamageType(struct UObject* bpp__DamageType__pf, bool bpp__IsRelatedToThisType__pf); // Function MainCharacter.MainCharacter_C.VerifyLastHitDamageType
	void VerifyLastHitBone(struct FName bpp__ParentBoneName__pf, bool bpp__IsRelatedToThisBone__pf); // Function MainCharacter.MainCharacter_C.VerifyLastHitBone
	void UserConstructionScript(); // Function MainCharacter.MainCharacter_C.UserConstructionScript
	void Update Action Camera(struct FVector bpp__CameraxRotation__pfT, bool bpp__UsesxRotation__pfT, struct FVector bpp__CameraxOffset__pfT); // Function MainCharacter.MainCharacter_C.Update Action Camera
	void UpdateRagdollOnGround(bool bpp__IsGrounded__pf); // Function MainCharacter.MainCharacter_C.UpdateRagdollOnGround
	void UpdateRagdollMeshLocation(); // Function MainCharacter.MainCharacter_C.UpdateRagdollMeshLocation
	void UpdateRagdoll(float bpp__DeltaSeconds__pf); // Function MainCharacter.MainCharacter_C.UpdateRagdoll
	void UpdatePlayerState(struct APlayerState* bpp__Player__pf); // Function MainCharacter.MainCharacter_C.UpdatePlayerState
	void UpdateHealthPP(); // Function MainCharacter.MainCharacter_C.UpdateHealthPP
	void UpdateFlashBangPP(); // Function MainCharacter.MainCharacter_C.UpdateFlashBangPP
	void UpdateDebugHealthVisibility(); // Function MainCharacter.MainCharacter_C.UpdateDebugHealthVisibility
	void UnhideZiplinePulley(); // Function MainCharacter.MainCharacter_C.UnhideZiplinePulley
	void UnhideUplineDevice(); // Function MainCharacter.MainCharacter_C.UnhideUplineDevice
	void TurnOffCapsulePhysics_Server(); // Function MainCharacter.MainCharacter_C.TurnOffCapsulePhysics_Server
	void TurnOffCapsulePhysics(); // Function MainCharacter.MainCharacter_C.TurnOffCapsulePhysics
	void Transition To Main Camera(); // Function MainCharacter.MainCharacter_C.Transition To Main Camera
	void Transition To ADS Camera(); // Function MainCharacter.MainCharacter_C.Transition To ADS Camera
	void SwitchToSnapshotPose(); // Function MainCharacter.MainCharacter_C.SwitchToSnapshotPose
	void Stop Playing Emote Music(); // Function MainCharacter.MainCharacter_C.Stop Playing Emote Music
	void StopLowHealthSFX(); // Function MainCharacter.MainCharacter_C.StopLowHealthSFX
	void Start Viewed Down Hit(); // Function MainCharacter.MainCharacter_C.Start Viewed Down Hit
	void Start Playing Emote Music(); // Function MainCharacter.MainCharacter_C.Start Playing Emote Music
	void StartImmunity__UpdateFunc(); // Function MainCharacter.MainCharacter_C.StartImmunity__UpdateFunc
	void StartImmunity__FinishedFunc(); // Function MainCharacter.MainCharacter_C.StartImmunity__FinishedFunc
	void StartHacking(); // Function MainCharacter.MainCharacter_C.StartHacking
	void SprintFOVTimeline__UpdateFunc(); // Function MainCharacter.MainCharacter_C.SprintFOVTimeline__UpdateFunc
	void SprintFOVTimeline__FinishedFunc(); // Function MainCharacter.MainCharacter_C.SprintFOVTimeline__FinishedFunc
	void ShowDebugLocation(bool bpp__bVisible__pf); // Function MainCharacter.MainCharacter_C.ShowDebugLocation
	void ShouldLastHitLaunchIntoRagdoll(bool bpp__bShouldRagdoll__pf); // Function MainCharacter.MainCharacter_C.ShouldLastHitLaunchIntoRagdoll
	void SFXStateChangeReset(); // Function MainCharacter.MainCharacter_C.SFXStateChangeReset
	void SFXStateChangeMax(); // Function MainCharacter.MainCharacter_C.SFXStateChangeMax
	void SFXStateChangeHalf(); // Function MainCharacter.MainCharacter_C.SFXStateChangeHalf
	void SFXRingHalfSTOP(); // Function MainCharacter.MainCharacter_C.SFXRingHalfSTOP
	void SFXRingHalfPlay(); // Function MainCharacter.MainCharacter_C.SFXRingHalfPlay
	void SFXRingFullSTOP(); // Function MainCharacter.MainCharacter_C.SFXRingFullSTOP
	void SFXRingFullPlay(); // Function MainCharacter.MainCharacter_C.SFXRingFullPlay
	void Set up ADS Blur Dynamic Material(); // Function MainCharacter.MainCharacter_C.Set up ADS Blur Dynamic Material
	void Set Health SFX RTPC(); // Function MainCharacter.MainCharacter_C.Set Health SFX RTPC
	void Setup Debug Info Widget(); // Function MainCharacter.MainCharacter_C.Setup Debug Info Widget
	void SetPostProcessHealthValue(float bpp__Health__pf); // Function MainCharacter.MainCharacter_C.SetPostProcessHealthValue
	void SetHitTargetArmorLevelRTPC(struct AActor* bpp__HitxTarget__pfT, struct AActor* bpp__RTPCxActor__pfT); // Function MainCharacter.MainCharacter_C.SetHitTargetArmorLevelRTPC
	void RestoreNormalCamera(); // Function MainCharacter.MainCharacter_C.RestoreNormalCamera
	void ReevaluateDebugWidgetAttachment(); // Function MainCharacter.MainCharacter_C.ReevaluateDebugWidgetAttachment
	void ReceiveTick(float bpp__DeltaSeconds__pf); // Function MainCharacter.MainCharacter_C.ReceiveTick
	void ReceiveBeginPlay(); // Function MainCharacter.MainCharacter_C.ReceiveBeginPlay
	void Play Viewed Sonar Hit(struct FDamageEffect bpp__Effect__pf); // Function MainCharacter.MainCharacter_C.Play Viewed Sonar Hit
	void Play Viewed EMP Hit(struct FDamageEffect bpp__Effect__pf); // Function MainCharacter.MainCharacter_C.Play Viewed EMP Hit
	void Play Viewed Blood Hit(struct FDamageEffect bpp__Effect__pf); // Function MainCharacter.MainCharacter_C.Play Viewed Blood Hit
	void Play Martial Artist Target Front(); // Function MainCharacter.MainCharacter_C.Play Martial Artist Target Front
	void Play Martial Artist Target Back(); // Function MainCharacter.MainCharacter_C.Play Martial Artist Target Back
	void Play Martial Artist Instigator Front(); // Function MainCharacter.MainCharacter_C.Play Martial Artist Instigator Front
	void Play Martial Artist Instigator Back(); // Function MainCharacter.MainCharacter_C.Play Martial Artist Instigator Back
	void PlayViewFlashBangHit(struct FDamageEffect bpp__Effect__pf); // Function MainCharacter.MainCharacter_C.PlayViewFlashBangHit
	void PlayPickupFX(struct AActor* bpp__ItemActor__pf); // Function MainCharacter.MainCharacter_C.PlayPickupFX
	void PlayHitMarkerSFX(struct FCombatEventInfo bpp__CombatEventInfo__pf); // Function MainCharacter.MainCharacter_C.PlayHitMarkerSFX
	void PlayHitFromRadialDamage(struct FDamageEffect bpp__Effect__pf__const); // Function MainCharacter.MainCharacter_C.PlayHitFromRadialDamage
	void PlayHitFromPointDamage(struct FDamageEffect bpp__Effect__pf__const); // Function MainCharacter.MainCharacter_C.PlayHitFromPointDamage
	void PlayHitBySFX(struct FDamageEffect bpp__DamageEffect__pf); // Function MainCharacter.MainCharacter_C.PlayHitBySFX
	void PlayerRevived(struct AKSPlayerState* bpp__Revivee__pf, struct AKSPlayerState* bpp__Reviver__pf, int32_t bpp__ExpBonus__pf); // Function MainCharacter.MainCharacter_C.PlayerRevived
	void PlayerDown(struct FCombatEventInfo bpp__EventInfo__pf, int32_t bpp__ExpBonus__pf); // Function MainCharacter.MainCharacter_C.PlayerDown
	void PlayerDeath(struct FCombatEventInfo bpp__EventInfo__pf); // Function MainCharacter.MainCharacter_C.PlayerDeath
	void PlayDownPPOnce(); // Function MainCharacter.MainCharacter_C.PlayDownPPOnce
	void PlayActionCameraSequence(struct FName bpp__SequenceName__pf); // Function MainCharacter.MainCharacter_C.PlayActionCameraSequence
	void OnZiplineChangeForFov(bool bpp__IsZiplining__pf); // Function MainCharacter.MainCharacter_C.OnZiplineChangeForFov
	void On Shoulder Swap Changed Event(struct AKSCharacter* bpp__Character__pf); // Function MainCharacter.MainCharacter_C.On Shoulder Swap Changed Event
	void On Anim Initialized(); // Function MainCharacter.MainCharacter_C.On Anim Initialized
	void OnUnhovered(float bpp__ExtraTime__pf); // Function MainCharacter.MainCharacter_C.OnUnhovered
	void OnStartSkydive(); // Function MainCharacter.MainCharacter_C.OnStartSkydive
	void OnSprintChangedCallback(bool bpp__IsSprinting__pf); // Function MainCharacter.MainCharacter_C.OnSprintChangedCallback
	void OnReviveStart(struct AKSCharacter* bpp__Reviver__pf, float bpp__ReviveTime__pf, bool bpp__Remote__pf); // Function MainCharacter.MainCharacter_C.OnReviveStart
	void OnReviveInterrupt(struct AKSCharacter* bpp__Reviver__pf); // Function MainCharacter.MainCharacter_C.OnReviveInterrupt
	void OnReviveComplete(struct AKSCharacter* bpp__Reviver__pf); // Function MainCharacter.MainCharacter_C.OnReviveComplete
	void OnPowerSlideChangedCallback(bool bpp__IsPowerSliding__pf); // Function MainCharacter.MainCharacter_C.OnPowerSlideChangedCallback
	void OnLanded(struct FHitResult bpp__Hit__pf__const); // Function MainCharacter.MainCharacter_C.OnLanded
	void OnItemPickedUp_Event_1(struct AKSCharacter* bpp__Character__pf, struct AKSItemDrop* bpp__ItemDrop__pf, struct UKSItem* bpp__Item__pf); // Function MainCharacter.MainCharacter_C.OnItemPickedUp_Event_1
	void OnImmuneStart(); // Function MainCharacter.MainCharacter_C.OnImmuneStart
	void OnImmuneEnd(); // Function MainCharacter.MainCharacter_C.OnImmuneEnd
	void OnHovered(); // Function MainCharacter.MainCharacter_C.OnHovered
	void OnHealthChanged(struct AKSCharacterBase* bpp__Character__pf__const); // Function MainCharacter.MainCharacter_C.OnHealthChanged
	void OnGadgetSwapped(); // Function MainCharacter.MainCharacter_C.OnGadgetSwapped
	void OnFieldOfViewModChange(); // Function MainCharacter.MainCharacter_C.OnFieldOfViewModChange
	void OnEndZiplineRagdoll(); // Function MainCharacter.MainCharacter_C.OnEndZiplineRagdoll
	void OnEndSkydive(); // Function MainCharacter.MainCharacter_C.OnEndSkydive
	void OnEndPowerSlide(enum class EKSPowerSlideEndReason bpp__EndReason__pf); // Function MainCharacter.MainCharacter_C.OnEndPowerSlide
	void OnEndOutOfBounds(); // Function MainCharacter.MainCharacter_C.OnEndOutOfBounds
	void OnDodgeRollChangedEvent(bool bpp__IsDodgeRolling__pf); // Function MainCharacter.MainCharacter_C.OnDodgeRollChangedEvent
	void OnBeginZiplineRagdoll(); // Function MainCharacter.MainCharacter_C.OnBeginZiplineRagdoll
	void OnBeginPowerSlide(); // Function MainCharacter.MainCharacter_C.OnBeginPowerSlide
	void OnBeginOutOfBounds(); // Function MainCharacter.MainCharacter_C.OnBeginOutOfBounds
	void OnArmorInteractStart(float bpp__InteractTime__pf); // Function MainCharacter.MainCharacter_C.OnArmorInteractStart
	void OnArmorInteractInterrupt(); // Function MainCharacter.MainCharacter_C.OnArmorInteractInterrupt
	void OnArmorInteractComplete(); // Function MainCharacter.MainCharacter_C.OnArmorInteractComplete
	void OnADSBlurSettingChanged(); // Function MainCharacter.MainCharacter_C.OnADSBlurSettingChanged
	void NoseDiveFOVTimeline__UpdateFunc(); // Function MainCharacter.MainCharacter_C.NoseDiveFOVTimeline__UpdateFunc
	void NoseDiveFOVTimeline__FinishedFunc(); // Function MainCharacter.MainCharacter_C.NoseDiveFOVTimeline__FinishedFunc
	void NoseDiveCameraTransition(bool bpp__bEnterNoseDive__pf, float bpp__AnimLength__pf); // Function MainCharacter.MainCharacter_C.NoseDiveCameraTransition
	void Martial Artist Target Front__UpdateFunc(); // Function MainCharacter.MainCharacter_C.Martial Artist Target Front__UpdateFunc
	void Martial Artist Target Front__FinishedFunc(); // Function MainCharacter.MainCharacter_C.Martial Artist Target Front__FinishedFunc
	void Martial Artist Target Back__UpdateFunc(); // Function MainCharacter.MainCharacter_C.Martial Artist Target Back__UpdateFunc
	void Martial Artist Target Back__FinishedFunc(); // Function MainCharacter.MainCharacter_C.Martial Artist Target Back__FinishedFunc
	void Martial Artist Instigator Front__UpdateFunc(); // Function MainCharacter.MainCharacter_C.Martial Artist Instigator Front__UpdateFunc
	void Martial Artist Instigator Front__FinishedFunc(); // Function MainCharacter.MainCharacter_C.Martial Artist Instigator Front__FinishedFunc
	void Martial Artist Instigator Back__UpdateFunc(); // Function MainCharacter.MainCharacter_C.Martial Artist Instigator Back__UpdateFunc
	void Martial Artist Instigator Back__FinishedFunc(); // Function MainCharacter.MainCharacter_C.Martial Artist Instigator Back__FinishedFunc
	void LandingRollEvent(bool bpp__IsDodgeRolling__pf); // Function MainCharacter.MainCharacter_C.LandingRollEvent
	void KeepActionCameraAboveWater(struct FVector bpp__InBoomPosition__pf, struct FVector bpp__OutBoomPosition__pf); // Function MainCharacter.MainCharacter_C.KeepActionCameraAboveWater
	void K2_OnMovementModeChanged(char bpp__PrevMovementMode__pf, char bpp__NewMovementMode__pf, char bpp__PrevCustomMode__pf, char bpp__NewCustomMode__pf); // Function MainCharacter.MainCharacter_C.K2_OnMovementModeChanged
	void K2_OnEndViewTarget(struct APlayerController* bpp__PC__pf); // Function MainCharacter.MainCharacter_C.K2_OnEndViewTarget
	void K2_OnBecomeViewTarget(struct APlayerController* bpp__PC__pf); // Function MainCharacter.MainCharacter_C.K2_OnBecomeViewTarget
	void InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_1(float bpp__AxisValue__pf); // Function MainCharacter.MainCharacter_C.InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_1
	void InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_2(float bpp__AxisValue__pf); // Function MainCharacter.MainCharacter_C.InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_2
	void InpActEvt_T_K2Node_InputKeyEvent_1(struct FKey bpp__Key__pf); // Function MainCharacter.MainCharacter_C.InpActEvt_T_K2Node_InputKeyEvent_1
	void InitializeHealthPP(); // Function MainCharacter.MainCharacter_C.InitializeHealthPP
	void HideZiplinePulley(); // Function MainCharacter.MainCharacter_C.HideZiplinePulley
	void HideUplineDevice(); // Function MainCharacter.MainCharacter_C.HideUplineDevice
	void HealthRegenerationStopped(bool bpp__bFullyHealed__pf); // Function MainCharacter.MainCharacter_C.HealthRegenerationStopped
	void HealthRegenerationStarted(); // Function MainCharacter.MainCharacter_C.HealthRegenerationStarted
	void Handle Downed Ragdoll(); // Function MainCharacter.MainCharacter_C.Handle Downed Ragdoll
	void Get Max FlashBang Intensity(float bpp__MaxxFlashxBangxIntensity__pfTTT); // Function MainCharacter.MainCharacter_C.Get Max FlashBang Intensity
	void Get FlashBang Intensity(float bpp__FlashxBangxIntensity__pfTT); // Function MainCharacter.MainCharacter_C.Get FlashBang Intensity
	void Get ADS Camera By Tag(struct FName bpp__Tag__pf, struct UCameraComponent* bpp__CameraxComponent__pfT); // Function MainCharacter.MainCharacter_C.Get ADS Camera By Tag
	void Get ADS Bend Target Camera Component(struct UCameraComponent* bpp__CameraxComponent__pfT); // Function MainCharacter.MainCharacter_C.Get ADS Bend Target Camera Component
	void GetTargetFov(float bpp__TargetFov__pf); // Function MainCharacter.MainCharacter_C.GetTargetFov
	void GetTargetArmorLevel(struct AActor* bpp__HitxTarget__pfT, int32_t bpp__ArmorxLevel__pfT); // Function MainCharacter.MainCharacter_C.GetTargetArmorLevel
	void GetRagdollFacingDirection(bool bpp__IsUp__pf); // Function MainCharacter.MainCharacter_C.GetRagdollFacingDirection
	void GetLastHitDistance(float bpp__OutDistance__pf); // Function MainCharacter.MainCharacter_C.GetLastHitDistance
	float GetFlashBangEffectDurationFromDistance(float bpp__Distance__pf); // Function MainCharacter.MainCharacter_C.GetFlashBangEffectDurationFromDistance
	void GetDownedTransitionMontage(struct UAnimMontage* bpp__OutAnimMontage__pf); // Function MainCharacter.MainCharacter_C.GetDownedTransitionMontage
	void GetDeathTransitionAnimation(struct UAnimSequence* bpp__OutAnimSequence__pf); // Function MainCharacter.MainCharacter_C.GetDeathTransitionAnimation
	void FreeFall Camera Burst(); // Function MainCharacter.MainCharacter_C.FreeFall Camera Burst
	void Finish Action Camera Update(); // Function MainCharacter.MainCharacter_C.Finish Action Camera Update
	void FinishHacking(); // Function MainCharacter.MainCharacter_C.FinishHacking
	void ExitDownedRagdoll(); // Function MainCharacter.MainCharacter_C.ExitDownedRagdoll
	void ExecuteUbergraph_MainCharacter_76(int32_t bpp__EntryPoint__pf); // Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_76
	void ExecuteUbergraph_MainCharacter_75(int32_t bpp__EntryPoint__pf); // Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_75
	void ExecuteUbergraph_MainCharacter_59(int32_t bpp__EntryPoint__pf); // Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_59
	void ExecuteUbergraph_MainCharacter_43(int32_t bpp__EntryPoint__pf); // Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_43
	void ExecuteUbergraph_MainCharacter_41(int32_t bpp__EntryPoint__pf); // Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_41
	void ExecuteUbergraph_MainCharacter_31(int32_t bpp__EntryPoint__pf); // Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_31
	void ExecuteUbergraph_MainCharacter_29(int32_t bpp__EntryPoint__pf); // Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_29
	void ExecuteUbergraph_MainCharacter_21(int32_t bpp__EntryPoint__pf); // Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_21
	void EventSetupCamerasForSpectator(bool bpp__Enabled__pf); // Function MainCharacter.MainCharacter_C.EventSetupCamerasForSpectator
	void EnterFreeFallFOVTimeline__UpdateFunc(); // Function MainCharacter.MainCharacter_C.EnterFreeFallFOVTimeline__UpdateFunc
	void EnterFreeFallFOVTimeline__FinishedFunc(); // Function MainCharacter.MainCharacter_C.EnterFreeFallFOVTimeline__FinishedFunc
	void EnterDownedRagdoll(); // Function MainCharacter.MainCharacter_C.EnterDownedRagdoll
	void End Down PP(); // Function MainCharacter.MainCharacter_C.End Down PP
	void EndImmunity__UpdateFunc(); // Function MainCharacter.MainCharacter_C.EndImmunity__UpdateFunc
	void EndImmunity__FinishedFunc(); // Function MainCharacter.MainCharacter_C.EndImmunity__FinishedFunc
	void DoSetOnFire(); // Function MainCharacter.MainCharacter_C.DoSetOnFire
	void DoExtinguishFire(); // Function MainCharacter.MainCharacter_C.DoExtinguishFire
	void DoBindZiplineEvents(); // Function MainCharacter.MainCharacter_C.DoBindZiplineEvents
	void DoBindSprintEvents(); // Function MainCharacter.MainCharacter_C.DoBindSprintEvents
	void DoBindDodgeRollEvents(); // Function MainCharacter.MainCharacter_C.DoBindDodgeRollEvents
	void DetermineKnockbackFacing(struct FVector bpp__HitDirection__pf, enum class HitEnum bpp__SideHit__pf, struct FRotator bpp__ActorRotation__pf); // Function MainCharacter.MainCharacter_C.DetermineKnockbackFacing
	void DetachSkydiveParticle(); // Function MainCharacter.MainCharacter_C.DetachSkydiveParticle
	void DestructibleSpeedGateOverlappedEvent(struct FVector bpp__BreakingLocation__pf, struct FVector bpp__BreakingDirection__pf, struct FVector bpp__BreakingNormal__pf); // Function MainCharacter.MainCharacter_C.DestructibleSpeedGateOverlappedEvent
	void DeathStateChange(); // Function MainCharacter.MainCharacter_C.DeathStateChange
	void Check Low Health(); // Function MainCharacter.MainCharacter_C.Check Low Health
	void CheckFlashBangOnViewTargetChange(); // Function MainCharacter.MainCharacter_C.CheckFlashBangOnViewTargetChange
	void Camera Boom Timeline__UpdateFunc(); // Function MainCharacter.MainCharacter_C.Camera Boom Timeline__UpdateFunc
	void Camera Boom Timeline__Switch To Main Camera__EventFunc(); // Function MainCharacter.MainCharacter_C.Camera Boom Timeline__Switch To Main Camera__EventFunc
	void Camera Boom Timeline__Switch To ADS Camera__EventFunc(); // Function MainCharacter.MainCharacter_C.Camera Boom Timeline__Switch To ADS Camera__EventFunc
	void Camera Boom Timeline__FinishedFunc(); // Function MainCharacter.MainCharacter_C.Camera Boom Timeline__FinishedFunc
	void CameraDodgeRoll__UpdateFunc(); // Function MainCharacter.MainCharacter_C.CameraDodgeRoll__UpdateFunc
	void CameraDodgeRoll__FinishedFunc(); // Function MainCharacter.MainCharacter_C.CameraDodgeRoll__FinishedFunc
	void CacheRagdollPelvisLocation(); // Function MainCharacter.MainCharacter_C.CacheRagdollPelvisLocation
	void BlueprintOnStopSwimming(); // Function MainCharacter.MainCharacter_C.BlueprintOnStopSwimming
	void BlueprintOnStartSwimming(); // Function MainCharacter.MainCharacter_C.BlueprintOnStartSwimming
	bool BlueprintHandleDeath(); // Function MainCharacter.MainCharacter_C.BlueprintHandleDeath
	void BindADSBlurSetting(); // Function MainCharacter.MainCharacter_C.BindADSBlurSetting
	void Audio_Init(); // Function MainCharacter.MainCharacter_C.Audio_Init
	void ApplyLastHitImpulse(bool bpp__UpdateTargetRotation__pf, bool bpp__AffectCapsule__pf); // Function MainCharacter.MainCharacter_C.ApplyLastHitImpulse
	void PlayerReviveDelegate__DelegateSignature(struct AKSPlayerState* bpp__Revivee__pf, struct AKSPlayerState* bpp__Reviver__pf, int32_t bpp__ExpBonus__pf); // DelegateFunction MainCharacter.MainCharacter_C.PlayerReviveDelegate__DelegateSignature
	void PlayerDownInfo__DelegateSignature(struct FCombatEventInfo bpp__EventInfo__pf, int32_t bpp__ExpBonus__pf); // DelegateFunction MainCharacter.MainCharacter_C.PlayerDownInfo__DelegateSignature
	void PlayerDeathInfo__DelegateSignature(struct FCombatEventInfo bpp__EventInfo__pf); // DelegateFunction MainCharacter.MainCharacter_C.PlayerDeathInfo__DelegateSignature
	void OnSprintChanged__DelegateSignature(bool bpp__IsSprinting__pf); // DelegateFunction MainCharacter.MainCharacter_C.OnSprintChanged__DelegateSignature
	void OnShoulderSwapChanged__DelegateSignature(struct AKSCharacter* bpp__Character__pf); // DelegateFunction MainCharacter.MainCharacter_C.OnShoulderSwapChanged__DelegateSignature
	void OnPowerSlideChanged__DelegateSignature(bool bpp__IsPowerSliding__pf); // DelegateFunction MainCharacter.MainCharacter_C.OnPowerSlideChanged__DelegateSignature
	void OnPlayerStateChanged__DelegateSignature(struct APlayerState* bpp__PlayerState__pf); // DelegateFunction MainCharacter.MainCharacter_C.OnPlayerStateChanged__DelegateSignature
	void OnItemPickedUp__DelegateSignature(struct AKSCharacter* bpp__Character__pf, struct AKSItemDrop* bpp__ItemDrop__pf, struct UKSItem* bpp__Item__pf); // DelegateFunction MainCharacter.MainCharacter_C.OnItemPickedUp__DelegateSignature
	void OnHealthChanged__DelegateSignature(struct AKSCharacterBase* bpp__Character__pf); // DelegateFunction MainCharacter.MainCharacter_C.OnHealthChanged__DelegateSignature
	void OnGoDown__DelegateSignature(); // DelegateFunction MainCharacter.MainCharacter_C.OnGoDown__DelegateSignature
	void OnEndZipline__DelegateSignature(); // DelegateFunction MainCharacter.MainCharacter_C.OnEndZipline__DelegateSignature
	void OnDodgeRollChanged__DelegateSignature(bool bpp__IsDodgeRolling__pf); // DelegateFunction MainCharacter.MainCharacter_C.OnDodgeRollChanged__DelegateSignature
	void OnDeathStateChanged__DelegateSignature(); // DelegateFunction MainCharacter.MainCharacter_C.OnDeathStateChanged__DelegateSignature
	void OnBeginZipline__DelegateSignature(); // DelegateFunction MainCharacter.MainCharacter_C.OnBeginZipline__DelegateSignature
	void OnAnimInitialized__DelegateSignature(); // DelegateFunction MainCharacter.MainCharacter_C.OnAnimInitialized__DelegateSignature
};

