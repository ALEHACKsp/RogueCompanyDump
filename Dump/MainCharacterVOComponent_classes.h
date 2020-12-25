// BlueprintGeneratedClass MainCharacterVOComponent.MainCharacterVOComponent_C
// Size: 0x990 (Inherited: 0x150)
struct UMainCharacterVOComponent_C : public UKSVOComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct FKSVoicelineEvent UnderFire; // 0x158(0x30)
	struct FKSVoicelineEvent TakingDamage; // 0x188(0x30)
	float AngleThresholdForShotFromBehind; // 0x1b8(0x04)
	char UnknownData_1BC[0x4]; // 0x1bc(0x04)
	struct FKSVoicelineEvent ShotFromBehind; // 0x1c0(0x30)
	struct FKSVoicelineEvent AbilityOnCooldown; // 0x1f0(0x30)
	struct FKSVoicelineEvent PrimaryPickedUp; // 0x220(0x30)
	struct FKSVoicelineEvent GadgetPickedUp; // 0x250(0x30)
	struct FKSVoicelineEvent MeleePickedUp; // 0x280(0x30)
	struct FKSVoicelineEvent MedPackPickedUp; // 0x2b0(0x30)
	struct FKSVoicelineEvent Revived; // 0x2e0(0x30)
	struct FKSVoicelineEvent RevivedOther; // 0x310(0x30)
	struct FKSVoicelineEvent RevivedOtherRemote; // 0x340(0x30)
	struct FKSVoicelineEvent LastManStanding; // 0x370(0x30)
	struct FKSVoicelineEvent Zipline; // 0x3a0(0x30)
	struct FKSVoicelineEvent Upline; // 0x3d0(0x30)
	struct FKSVoicelineEvent Landed; // 0x400(0x30)
	struct FKSVoicelineEvent Mantle; // 0x430(0x30)
	struct FKSVoicelineEvent Jumped; // 0x460(0x30)
	struct FKSVoicelineEvent DodgeRoll; // 0x490(0x30)
	struct FKSVoicelineEvent GetObjective; // 0x4c0(0x30)
	struct FKSVoicelineEvent Victory; // 0x4f0(0x30)
	struct FKSVoicelineEvent Skydive; // 0x520(0x30)
	struct FKSVoicelineEvent LethalGadget; // 0x550(0x30)
	struct FKSVoicelineEvent UtilityGadget; // 0x580(0x30)
	struct FKSVoicelineEvent UtilityDeployable; // 0x5b0(0x30)
	struct FKSVoicelineEvent LethalDeployable; // 0x5e0(0x30)
	struct FKSVoicelineEvent InteractObjective; // 0x610(0x30)
	struct FKSVoicelineEvent Select; // 0x640(0x30)
	struct FKSVoicelineEvent ShopPurchase; // 0x670(0x30)
	struct UKSShopRuleComponent* ShopRuleComponent; // 0x6a0(0x08)
	struct FKSVoicelineEvent Intro; // 0x6a8(0x30)
	struct FKSVoicelineEvent ReviveMe; // 0x6d8(0x30)
	struct FKSVoicelineEvent Acknowledged; // 0x708(0x30)
	struct FKSVoicelineEvent CancelThat; // 0x738(0x30)
	struct FKSVoicelineEvent SuddenDeath; // 0x768(0x30)
	struct TMap<enum class EPingMessage, struct FKSVoicelineEvent> PingVOMap; // 0x798(0x50)
	struct FKSVoicelineEvent BombPickedUp; // 0x7e8(0x30)
	struct FKSVoicelineEvent BombPlant; // 0x818(0x30)
	struct FKSVoicelineEvent BombSpottedArmed; // 0x848(0x30)
	struct FKSVoicelineEvent BombSpottedUnarmed; // 0x878(0x30)
	struct FKSVoicelineEvent BombDefusing; // 0x8a8(0x30)
	struct AKSPlayerState* PlayerState; // 0x8d8(0x08)
	struct FKSVoicelineEvent SprintStart; // 0x8e0(0x30)
	struct FKSVoicelineEvent SprintEnd; // 0x910(0x30)
	bool SprintStarted; // 0x940(0x01)
	char UnknownData_941[0x7]; // 0x941(0x07)
	struct FKSVoicelineEvent SprintEndStop; // 0x948(0x30)
	bool SprintPlaying; // 0x978(0x01)
	char UnknownData_979[0x3]; // 0x979(0x03)
	float SprintingTimer; // 0x97c(0x04)
	bool SprintTimerExhale; // 0x980(0x01)
	char UnknownData_981[0x7]; // 0x981(0x07)
	struct FTimerHandle SprintTimerHandle; // 0x988(0x08)

	void EnemyBehind(struct AActor* EnemyActor, bool Behind); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.EnemyBehind
	void BindToGameStateEvents(struct AKSGameState* GameState); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToGameStateEvents
	void OnLastManStanding(struct AKSPlayerState* LastPlayer); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnLastManStanding
	void OnWinnerSet(int32_t TeamNumber); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnWinnerSet
	void OnRoundSetup(struct FRoundInitState RoundInitState); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnRoundSetup
	void OnPhaseChange(struct FName NewPhaseName, struct FName PreviousPhaseName); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnPhaseChange
	void BindToPingManagerEvents(struct UKSPingManager* PingManager); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToPingManagerEvents
	void PingAdded(struct FPingInfo PingInfo); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.PingAdded
	void PingAcknowledged(int32_t PingId, struct AKSPlayerState* PingingPlayer, struct AKSPlayerState* AcknowledgingPlayer); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.PingAcknowledged
	void SentVoiceLineOnly(enum class EPingMessage PingMessage, struct AKSPlayerState* SendingPlayer); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.SentVoiceLineOnly
	void OnTakeDamage(struct AActor* DamagedActor, float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnTakeDamage
	void OnItemPickedUp(struct AKSCharacter* Character, struct AKSItemDrop* ItemDrop, struct UKSItem* Item); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnItemPickedUp
	void OnReviveCompleted(struct AKSCharacter* Reviver, struct AKSCharacter* Revivee); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnReviveCompleted
	void BindToCharacterEvents(struct AKSCharacter* Character); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToCharacterEvents
	void OnInteractStart(struct AActor* Target, float Duration); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnInteractStart
	void OnLanded(struct FVector Velocity); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnLanded
	void OnMantleChanged(bool IsMantling); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnMantleChanged
	void OnDOdgeRollChanged(bool IsDodgeRolling); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnDOdgeRollChanged
	void OnJumped(); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnJumped
	void OnCharacterFreeFallStarted(); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnCharacterFreeFallStarted
	void OnWeaponInventoryChanged(); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnWeaponInventoryChanged
	void BuildWeaponStateChanged(struct AKSWeapon* Weapon, enum class EWeaponStateNew OldState, enum class EWeaponStateNew NewState); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.BuildWeaponStateChanged
	void GadgetWeaponStateChanged(struct AKSWeapon* Weapon, enum class EWeaponStateNew OldState, enum class EWeaponStateNew NewState); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.GadgetWeaponStateChanged
	void ResetObjectiveVO(); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.ResetObjectiveVO
	void OnStartReviveOther(struct AKSCharacter* Reviver, struct AKSCharacter* Revivee, float ReviveTime, bool bRemote); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnStartReviveOther
	void AnnounceBombSpotted(bool Armed); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.AnnounceBombSpotted
	void OnDeathStateChanged(); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnDeathStateChanged
	void OnSprintChanged(bool IsSprinting); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnSprintChanged
	void FinalExhaleTimerSet(); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.FinalExhaleTimerSet
	void ModFailedToActivate(struct UKSModInst_Activated* AttemptedMod, enum class EKSAbilityUsageFailureType AbilityFailureType); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.ModFailedToActivate
	void BindToPlayerStateEvents(struct AKSPlayerState* PlayerState); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToPlayerStateEvents
	void BindToActivatableModEvents(struct UKSModInst_Activated* ActivatableMod); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToActivatableModEvents
	void BindToEvents(); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToEvents
	void BindToTeamStateEvents(struct AKSTeamState* TeamState); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToTeamStateEvents
	void BindToPlayerControllerEvents(struct AKSPlayerController* PlayerController); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToPlayerControllerEvents
	void OnJobChanged(); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnJobChanged
	void ShopItemChanged(struct FShopItem ShopItem); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.ShopItemChanged
	void OnPlayerDownedChanged(struct AKSPlayerState* PlayerState); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnPlayerDownedChanged
	void ModTriggered(); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.ModTriggered
	void ModSetup(); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.ModSetup
	void ModActivated(bool bActive); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.ModActivated
	void ExecuteUbergraph_MainCharacterVOComponent(int32_t EntryPoint); // Function MainCharacterVOComponent.MainCharacterVOComponent_C.ExecuteUbergraph_MainCharacterVOComponent
};

