// Enum Killstreak.EItemSourceType
enum class EItemSourceType : uint8_t {
	Unknown,
	AbilityUse,
	Cheat,
	InitialInventory,
	LobbyAnimation,
	PickupInteraction,
	Refund,
	RestoreInventory,
	StorePurchase,
	WeaponSwap,
	EItemSourceType_MAX,
};

// Enum Killstreak.EKSCharacterAimMode
enum class EKSCharacterAimMode : uint8_t {
	Default,
	TransitionToDefault,
	Shoulder,
	TransitionToShoulder,
	AimDownSights,
	TransitionToAimDownSights,
	Alternate,
	TransitionToAlternate,
	EKSCharacterAimMode_MAX,
};

// Enum Killstreak.EKSEmotion
enum class EKSEmotion : uint8_t {
	Neutral,
	Focused,
	Pain,
	Wounded,
	Dead,
	MAX,
};

// Enum Killstreak.EAmmoType
enum class EAmmoType : uint8_t {
	NINE_MM,
	SEVEN_63,
	FIVE_57,
	TWELVE_G,
	FORTY_FIVE,
	THREE_HUND,
	TWENTY_TWO,
	FIFTY,
	NONE,
	EAmmoType_MAX,
};

// Enum Killstreak.ECharacterBehaviorState
enum class ECharacterBehaviorState : uint8_t {
	Combat,
	Idle,
	Skydive,
	ECharacterBehaviorState_MAX,
};

// Enum Killstreak.EKSAbilityUsageFailureType
enum class EKSAbilityUsageFailureType : uint8_t {
	Unknown,
	Dead,
	Downed,
	EMP,
	NoFireZone,
	AlreadyActivating,
	Driving,
	Stunned,
	BlockingMovement,
	HardLanding,
	OutOfBounds,
	Locked,
	AltLocked,
	NotEnoughCharge,
	NoBountyTarget,
	NoLinkTarget,
	AlreadyHasWeapon,
	WeaponBusy,
	RoundNotInProgress,
	EKSAbilityUsageFailureType_MAX,
};

// Enum Killstreak.EKSItemUsageFailureType
enum class EKSItemUsageFailureType : uint8_t {
	Unknown,
	NotEnoughQuantity,
	BlockingAction,
	NoEffect,
	EMP,
	EKSItemUsageFailureType_MAX,
};

// Enum Killstreak.EShotgunHitResult
enum class EShotgunHitResult : uint8_t {
	Miss,
	Hit,
	Headshot,
	EShotgunHitResult_MAX,
};

// Enum Killstreak.EWeaponStateNew
enum class EWeaponStateNew : uint8_t {
	Idle,
	Buildup,
	PreFire,
	PostFire,
	Cooldown,
	PreReload,
	PostReload,
	ReloadCooldown,
	Retrieve,
	Holster,
	Inactive,
	NotValid,
	EWeaponStateNew_MAX,
};

// Enum Killstreak.ELootSiteRarity
enum class ELootSiteRarity : uint8_t {
	Personal,
	Normal,
	Uncommon,
	Epic,
	Rare,
	Legendary,
	NonWeapons,
	ChildSpawner,
	CarePackage,
	MedPack,
	StartingDrop,
	GameMode,
	PowerUp,
	ELootSiteRarity_MAX,
};

// Enum Killstreak.ECombatEventFriendlyFireType
enum class ECombatEventFriendlyFireType : uint8_t {
	Enemy,
	Friendly,
	ReverseFriendly,
	Self,
	ECombatEventFriendlyFireType_MAX,
};

// Enum Killstreak.EProjectileExplosionType
enum class EProjectileExplosionType : uint8_t {
	Impact,
	Fizzle,
	FuseExpired,
	EProjectileExplosionType_MAX,
};

// Enum Killstreak.EModViewModeStateChangeReason
enum class EModViewModeStateChangeReason : uint8_t {
	Activated,
	SpectatorChange,
	Timeout,
	Death,
	EModViewModeStateChangeReason_MAX,
};

// Enum Killstreak.EModViewModeState
enum class EModViewModeState : uint8_t {
	Off,
	OnButUnviewed,
	OnAndViewed,
	EModViewModeState_MAX,
};

// Enum Killstreak.EHitLocationType
enum class EHitLocationType : uint8_t {
	Body,
	Head,
	Limb,
	None,
	EHitLocationType_MAX,
};

// Enum Killstreak.EKSVoicelineAudience
enum class EKSVoicelineAudience : uint8_t {
	Self,
	Nearby,
	NearbyFriendlies,
	AllFriendlies,
	Enemies,
	EKSVoicelineAudience_MAX,
};

// Enum Killstreak.EAccoladeEventType
enum class EAccoladeEventType : uint8_t {
	AccoladeEvent_Unknown,
	AccoladeEvent_Elim,
	AccoladeEvent_Downed,
	AccoladeEvent_Revived,
	AccoladeEvent_DownAssist,
	AccoladeEvent_CombatEvent,
	AccoladeEvent_MAX,
};

// Enum Killstreak.EAccoladeCategory
enum class EAccoladeCategory : uint8_t {
	AccoladeCategory_DownsElims,
	AccoladeCategory_MultiKill,
	AccoladeCategory_Support,
	AccoladeCategory_MAX,
};

// Enum Killstreak.EDisplayType
enum class EDisplayType : uint8_t {
	Mini,
	Full,
	Overlay,
	EDisplayType_MAX,
};

// Enum Killstreak.ECombatState
enum class ECombatState : uint8_t {
	Combat,
	Engaged,
	NonCombat,
	ECombatState_MAX,
};

// Enum Killstreak.EKSNeutralBombState
enum class EKSNeutralBombState : uint8_t {
	Spawned,
	Reset,
	Held,
	Dropped,
	Arming,
	Armed,
	Disarming,
	Disarmed,
	Deactivated,
	EKSNeutralBombState_MAX,
};

// Enum Killstreak.EPingFailedType
enum class EPingFailedType : uint8_t {
	None,
	Throttled,
	NoTarget,
	InvalidPingType,
	EPingFailedType_MAX,
};

// Enum Killstreak.EPingMessage
enum class EPingMessage : uint8_t {
	None,
	GoHere,
	EnemyHere,
	DefendHere,
	HoldPosition,
	FallBack,
	PushForward,
	GroupUp,
	HelpMe,
	EnemiesMoving,
	Understood,
	AllClear,
	CancelThat,
	ReviveMe,
	Task1,
	Task2,
	Task3,
	Task4,
	Task5,
	WatchOut,
	EPingMessage_MAX,
};

// Enum Killstreak.EPingType
enum class EPingType : uint8_t {
	None,
	PointAlly,
	PointEnemy,
	Self,
	SelfEmergency,
	Target,
	Cancel,
	Task,
	NoPing,
	EPingType_MAX,
};

// Enum Killstreak.ESplineBehaviourType
enum class ESplineBehaviourType : uint8_t {
	OneShot,
	OneShot_Reverse,
	Loop_Reset,
	PingPong,
	ESplineBehaviourType_MAX,
};

// Enum Killstreak.EShopItemType
enum class EShopItemType : uint8_t {
	None,
	PrimaryOne,
	PrimaryTwo,
	SecondaryOne,
	SecondaryTwo,
	GadgetOne,
	GadgetTwo,
	Melee,
	PerkOne,
	PerkTwo,
	PerkThree,
	PerkFour,
	PerkFive,
	PerkSix,
	GambitOne,
	GambitTwo,
	GambitThree,
	GlobalPerk1,
	GlobalPerk2,
	GlobalPerk3,
	GlobalPerk4,
	GlobalPerk5,
	GlobalPerk6,
	GlobalPerk7,
	GlobalPerk8,
	GlobalPerk9,
	GlobalPerk10,
	GlobalPerk11,
	GlobalPerk12,
	GlobalPerk13,
	GlobalPerk14,
	GlobalPerk15,
	MAX,
};

// Enum Killstreak.ETrackedActorType
enum class ETrackedActorType : uint8_t {
	Unknown,
	ShieldWeapon,
	MagGloveTarget,
	CoopEscapePoint,
	BountyTarget,
	BombDrop,
	CashDrop,
	Projectile,
	HackTablet,
	ETrackedActorType_MAX,
};

// Enum Killstreak.EJobSelectionState
enum class EJobSelectionState : uint8_t {
	Available,
	Selected,
	LockedIn,
	Unavailable,
	EJobSelectionState_MAX,
};

// Enum Killstreak.EKSJobSelectPreviewLoadState
enum class EKSJobSelectPreviewLoadState : uint8_t {
	NoPreview,
	PreviewActive,
	PreviewLoadingNoVisible,
	PreviewLoadingActiveVisible,
	EKSJobSelectPreviewLoadState_MAX,
};

// Enum Killstreak.ETeamAlignment
enum class ETeamAlignment : uint8_t {
	TMAL_Neutral,
	TMAL_Enemy,
	TMAL_Friendly,
	TMAL_MAX,
};

// Enum Killstreak.EAnnouncementType
enum class EAnnouncementType : uint8_t {
	ANMT_Uknown,
	ANMT_ObjectiveMilestone,
	ANMT_PlayersLeft,
	ANMT_LastPlayerStanding,
	ANMT_RoyalePhase,
	ANMT_MAX,
};

// Enum Killstreak.EGameResult
enum class EGameResult : uint8_t {
	Victory,
	Defeat,
	Draw,
	EGameResult_MAX,
};

// Enum Killstreak.EKSInteractionResult
enum class EKSInteractionResult : uint8_t {
	None,
	Success,
	Interrupted,
	Failed,
	EKSInteractionResult_MAX,
};

// Enum Killstreak.EMercCosmeticSlot
enum class EMercCosmeticSlot : uint8_t {
	EMOTE_SLOT,
	SKIN_BUNDLE_SLOT,
	WINGSUIT_SLOT,
	WEAPON_WRAP_SLOT,
	QUIP_SLOT,
	COMMUNICATION_SLOT,
	SPRAY_SLOT,
	EMercCosmeticSlot_MAX,
};

// Enum Killstreak.EKSReviveDroneAbilityState
enum class EKSReviveDroneAbilityState : uint8_t {
	Unavailable,
	Available,
	Deployed,
	Reviving,
	Success,
	Refunded,
	Destroyed,
	EKSReviveDroneAbilityState_MAX,
};

// Enum Killstreak.EKSPingType
enum class EKSPingType : uint8_t {
	PING_DEFAULT,
	PING_RADAR,
	PING_INTEL,
	PING_TRACKER,
	PING_BOMB_HOLDER,
	PING_MAX,
};

// Enum Killstreak.ESurfaceTargetErrorReason
enum class ESurfaceTargetErrorReason : uint8_t {
	None,
	TooFar,
	TooHigh,
	NoRoomAtOrigin,
	InvalidSurface,
	TooClose,
	AimBlocked,
	ESurfaceTargetErrorReason_MAX,
};

// Enum Killstreak.EAimDataMode
enum class EAimDataMode : uint8_t {
	NoEndTrace,
	EndTraceFromStartTrace,
	EndTraceFromViewPoint,
	Shotgun,
	EAimDataMode_MAX,
};

// Enum Killstreak.EKSActivityClientNotifyFrequency
enum class EKSActivityClientNotifyFrequency : uint8_t {
	None,
	OnProgressCompleted,
	OnProgressTierReached,
	OnProgressIncremented,
	EKSActivityClientNotifyFrequency_MAX,
};

// Enum Killstreak.EKSActivityProgressDisplayType
enum class EKSActivityProgressDisplayType : uint8_t {
	Default,
	RawProgress,
	PercentToNextTier,
	PercentToMaxTier,
	MinutesAsDuration,
	CurrentTier,
	None,
	EKSActivityProgressDisplayType_MAX,
};

// Enum Killstreak.EKSActivityTimeQueryType
enum class EKSActivityTimeQueryType : uint8_t {
	All,
	OnlyFinished,
	OnlyUnfinished,
	EKSActivityTimeQueryType_MAX,
};

// Enum Killstreak.EKSActivityManagerSetupPhase
enum class EKSActivityManagerSetupPhase : uint8_t {
	None,
	InitialAssetScan,
	RequestStoreVendors,
	RequestXpTables,
	LoadActivities,
	WaitForSelectionPhaseFinished,
	AttemptInitialActivityCreation,
	Done,
	EKSActivityManagerSetupPhase_MAX,
};

// Enum Killstreak.EKSActivityInstanceQueryType
enum class EKSActivityInstanceQueryType : uint8_t {
	LowestProgress,
	HighestProgress,
	LowestTier,
	HighestTier,
	EKSActivityInstanceQueryType_MAX,
};

// Enum Killstreak.EReviveDroneFlightPath
enum class EReviveDroneFlightPath : uint8_t {
	Drop,
	Left,
	Right,
	EReviveDroneFlightPath_MAX,
};

// Enum Killstreak.EReviveDroneState
enum class EReviveDroneState : uint8_t {
	Release,
	Transit,
	Arrival,
	Hover,
	Leave,
	EReviveDroneState_MAX,
};

// Enum Killstreak.EAgentRefundMethod
enum class EAgentRefundMethod : uint8_t {
	GiveWeaponAsset,
	BroadcastDelegate,
	EAgentRefundMethod_MAX,
};

// Enum Killstreak.EKSAimAssistInputFlag
enum class EKSAimAssistInputFlag : uint8_t {
	GamepadOnly,
	GamepadAndTouch,
	AllInputModes,
	EKSAimAssistInputFlag_MAX,
};

// Enum Killstreak.EKSAimAssistActivationType
enum class EKSAimAssistActivationType : uint8_t {
	AIMASSIST_DEFAULT,
	AIMASSIST_ALWAYSON,
	AIMASSIST_ALWAYSOFF,
	AIMASSIST_MAX,
};

// Enum Killstreak.EKSAnalogStickType
enum class EKSAnalogStickType : uint8_t {
	Unknown,
	Left,
	Right,
	EKSAnalogStickType_MAX,
};

// Enum Killstreak.EGameplayAudioEvent
enum class EGameplayAudioEvent : uint8_t {
	Unknown,
	GameStarted,
	LoggedIn,
	QueueingStarted,
	QueueingCanceled,
	MatchFound,
	LoadingScreenStarted,
	EndOfMatchLobbyStarted,
	EndOfMatchLobbyEnded,
	EndOfMatchLobbySkipped,
	EnteredMatch,
	RogueSelectionStarted,
	RogueSelectionEnded,
	RogueSelectionFadeOut,
	TeamCinematicStarted,
	EstablishingShotStarted,
	HoldingPenStarted,
	DropshipDoorOpened,
	SkydiveStarted,
	SkydiveEnded,
	ObjectiveArmed,
	ObjectiveTime_30SecondsLeft,
	ObjectiveCaptured,
	LastManStanding,
	SuddenDeath,
	KillcamStarted,
	RoundReset,
	RoundWon,
	RoundLost,
	MatchWon,
	MatchLost,
	ReturnToLobby,
	Max,
};

// Enum Killstreak.EKSBattlePassProgressionActivityType
enum class EKSBattlePassProgressionActivityType : uint8_t {
	None,
	MiniBattlePass1,
	MAX,
};

// Enum Killstreak.EPlayerBehaviorChangeReact
enum class EPlayerBehaviorChangeReact : uint8_t {
	SkipReact,
	SendNewOnly,
	SendFullSetIfChanged,
	SendFullSetRegardless,
	EPlayerBehaviorChangeReact_MAX,
};

// Enum Killstreak.EAbilityExecutionType
enum class EAbilityExecutionType : uint8_t {
	InstantActivate,
	RandomActivate,
	AimFireActivate,
	IngressPointActivate,
	UniqueActivation,
	EAbilityExecutionType_MAX,
};

// Enum Killstreak.EActorFocalPoint
enum class EActorFocalPoint : uint8_t {
	ActorFocalPoint_None,
	ActorFocalPoint_Head,
	ActorFocalPoint_Body,
	ActorFocalPoint_LeftShoulder,
	ActorFocalPoint_RightShoulder,
	ActorFocalPoint_MAX,
};

// Enum Killstreak.EKSArmVisibilityType
enum class EKSArmVisibilityType : uint8_t {
	HideNothing,
	ArmAndWeapon,
	WeaponOnly,
	EKSArmVisibilityType_MAX,
};

// Enum Killstreak.EKSRevealType
enum class EKSRevealType : uint8_t {
	NotRevealed,
	Normal,
	Permanent,
	EKSRevealType_MAX,
};

// Enum Killstreak.EKSPlayerHand
enum class EKSPlayerHand : uint8_t {
	LeftHand,
	RightHand,
	EKSPlayerHand_MAX,
};

// Enum Killstreak.EKSMaterialHideType
enum class EKSMaterialHideType : uint8_t {
	CastsShadowWhenHidden,
	DoesNotCastShadowWhenHidden,
	EKSMaterialHideType_MAX,
};

// Enum Killstreak.EKSVehicleState
enum class EKSVehicleState : uint8_t {
	Outside,
	Entering,
	Driver,
	Passenger,
	Exiting,
	EKSVehicleState_MAX,
};

// Enum Killstreak.EAimDownSightsMode
enum class EAimDownSightsMode : uint8_t {
	Toggle,
	PressAndHold,
	EAimDownSightsMode_MAX,
};

// Enum Killstreak.EKSQualitySwitch
enum class EKSQualitySwitch : uint8_t {
	LocomotionCached,
	SecondLocomotionCached,
	PreAimArray,
	PostWingSuit,
	Finalized3p,
	PreFacialAnimation,
	PostFacialAnimation,
	PrePowSlide_SklController,
	PreHitReactions,
	PostFootIK,
	PostZiplinePullyLocks,
	PostZiplineSkeletalControllers,
	PreRecoil,
	PostRecoil,
	PreCounterRotate,
	SkeletalControllersPostIK,
	PreVaulting_SKLController,
	PostVaulting_SKLController,
	EKSQualitySwitch_MAX,
};

// Enum Killstreak.EKSTurnInPlaceAnimationVariant
enum class EKSTurnInPlaceAnimationVariant : uint8_t {
	Left90,
	Left180,
	Right90,
	Right180,
	EKSTurnInPlaceAnimationVariant_MAX,
};

// Enum Killstreak.EKSLocomotionState
enum class EKSLocomotionState : uint8_t {
	Idle,
	InMotion,
	Stopping,
	Pivoting,
	EKSLocomotionState_MAX,
};

// Enum Killstreak.EKSQueuedMovement
enum class EKSQueuedMovement : uint8_t {
	Jump,
	DodgeRoll,
	None,
	EKSQueuedMovement_MAX,
};

// Enum Killstreak.EKSDeathState
enum class EKSDeathState : uint8_t {
	NotDead,
	NormalDeath,
	EKSDeathState_MAX,
};

// Enum Killstreak.EFlashBangIntensity
enum class EFlashBangIntensity : uint8_t {
	Min,
	Half,
	Max,
};

// Enum Killstreak.EKSBotNameGeneration
enum class EKSBotNameGeneration : uint8_t {
	None,
	RandomNames,
	DefaultClassNames,
	EKSBotNameGeneration_MAX,
};

// Enum Killstreak.EKSLootRespawnMode
enum class EKSLootRespawnMode : uint8_t {
	RespawnActiveSites,
	RespawnRandomSites,
	EKSLootRespawnMode_MAX,
};

// Enum Killstreak.EKSRewardType
enum class EKSRewardType : uint8_t {
	MatchInProgress,
	Winner,
	Loser,
	Draw,
	EKSRewardType_MAX,
};

// Enum Killstreak.EKSControlTieBreakerMode
enum class EKSControlTieBreakerMode : uint8_t {
	Overtime,
	SuddenDeath,
	AllowTie,
	EKSControlTieBreakerMode_MAX,
};

// Enum Killstreak.EChangeAdditionalActionCondition
enum class EChangeAdditionalActionCondition : uint8_t {
	NeverDo,
	DoIfChanged,
	AlwaysDo,
	EChangeAdditionalActionCondition_MAX,
};

// Enum Killstreak.EPlayerInfoInventoryRestoreType
enum class EPlayerInfoInventoryRestoreType : uint8_t {
	ResetToStartingInventory,
	KeepInventory,
	KeepInventoryIfNotDead,
	KeepGunsOnly,
	UseNewMethod,
	EPlayerInfoInventoryRestoreType_MAX,
};

// Enum Killstreak.EKillCamStatus
enum class EKillCamStatus : uint8_t {
	KillCamEnabled,
	KillCamDisabled,
	EKillCamStatus_MAX,
};

// Enum Killstreak.EKSGamepadIcons
enum class EKSGamepadIcons : uint8_t {
	XboxOne,
	PlayStation4,
	NintendoSwitch,
	EKSGamepadIcons_MAX,
};

// Enum Killstreak.ERadialWheelMode
enum class ERadialWheelMode : uint8_t {
	Hold,
	Toggle,
	ERadialWheelMode_MAX,
};

// Enum Killstreak.EGyroMode
enum class EGyroMode : uint8_t {
	None,
	AimOnly,
	Always,
	EGyroMode_MAX,
};

// Enum Killstreak.EADSMode
enum class EADSMode : uint8_t {
	Hold,
	Toggle,
	Both,
	EADSMode_MAX,
};

// Enum Killstreak.EInMatchStoreError
enum class EInMatchStoreError : uint8_t {
	NotEnoughMoney,
	NullItem,
	DeadCharacter,
	InvalidPlayer,
	BuyingSameItem,
	CantEquip,
	BadSlot,
	EquipFailed,
	InvalidGameMode,
	PurchasesLocked,
	ItemDidNotReplicate,
	EInMatchStoreError_MAX,
};

// Enum Killstreak.EKSInteractableGroup
enum class EKSInteractableGroup : uint8_t {
	Generic,
	Bomb,
	Objective,
	DropOffZone,
	Vehicle,
	Projectile,
	ZipLine,
	Pawn,
	EKSInteractableGroup_MAX,
};

// Enum Killstreak.EKSLabelAndHighlightState
enum class EKSLabelAndHighlightState : uint8_t {
	NotTargeted,
	Targeted,
	EKSLabelAndHighlightState_MAX,
};

// Enum Killstreak.EJobLoadoutSlot
enum class EJobLoadoutSlot : uint8_t {
	JobSlot_Unknown,
	JobSlot_JobItem,
	JobSlot_UniqueItem,
	JobSlot_PrimaryWeapon,
	JobSlot_PrimaryWeaponAttachment,
	JobSlot_SecondaryWeapon,
	JobSlot_SecondaryWeaponAttachment,
	JobSlot_Gadget,
	JobSlot_PerkOne,
	JobSlot_PerkTwo,
	JobSlot_PrimaryWeapon_Alt,
	JobSlot_SecondaryWeapon_Alt,
	JobSlot_Gadget_Alt,
	JobSlot_Melee,
	JobSlot_QuickMelee,
	JobSlot_MAX,
};

// Enum Killstreak.EAllowUnownedJobsState
enum class EAllowUnownedJobsState : uint8_t {
	Unknown,
	AllowUnowned,
	DoNotAllowUnowned,
	EAllowUnownedJobsState_MAX,
};

// Enum Killstreak.EPlayerAccountSlot
enum class EPlayerAccountSlot : uint8_t {
	AVATAR_SLOT,
	BANNER_SLOT,
	PREFERRED_MERC_SLOT,
	BORDER_SLOT,
	TITLE_SLOT,
	EPlayerAccountSlot_MAX,
};

// Enum Killstreak.EKSLobbyCharacterAnimationPose
enum class EKSLobbyCharacterAnimationPose : uint8_t {
	Lobby_Idle,
	Lobby_Fidget_01,
	Lobby_Fidget_02,
	Lobby_Fidget_03,
	Lobby_Fidget_04,
	Lobby_Fidget_05,
	Lobby_MAX,
};

// Enum Killstreak.ELobbyCharacterIndex
enum class ELobbyCharacterIndex : uint8_t {
	LobbyCharacter_Unknown,
	LobbyCharacter_LocalPlayer,
	LobbyCharacter_PartyMemberOne,
	LobbyCharacter_PartyMemberTwo,
	LobbyCharacter_PartyMemberThree,
	LobbyCharacter_RogueScreen,
	LobbyCharacter_PurchaseConfirmation,
	LobbyCharacter_EventScreen,
	LobbyCharacter_MAX,
};

// Enum Killstreak.ELobbyCharacterAnimState
enum class ELobbyCharacterAnimState : uint8_t {
	LobbyAnim_Unknown,
	LobbyAnim_Login,
	LobbyAnim_Default,
	LobbyAnim_Hidden,
	LobbyAnim_Idle,
	LobbyAnim_IntroWalk,
	LobbyAnim_EmoteOne,
	LobbyAnim_EmoteTwo,
	LobbyAnim_EmoteThree,
	LobbyAnim_EmoteFour,
	LobbyAnim_EmoteFive,
	LobbyAnim_PreMatchWalk,
	LobbyAnim_EOMBackground,
	LobbyAnim_PostMatchWalk,
	LobbyAnim_MidSequence,
	LobbyAnim_MAX,
};

// Enum Killstreak.ELobbyPresenceState
enum class ELobbyPresenceState : uint8_t {
	ELobbyPresence_Unknown,
	ELobbyPresence_NotPresent,
	ELobbyPresence_PendingInvite,
	ELobbyPresence_Idle,
	ELobbyPresence_MAX,
};

// Enum Killstreak.ELobbyLevelSequenceTag
enum class ELobbyLevelSequenceTag : uint8_t {
	ELobbyLvlSeqTag_Login,
	ELobbyLvlSeqTag_MAX,
};

// Enum Killstreak.ELobbyCameraActorTag
enum class ELobbyCameraActorTag : uint8_t {
	ELobbyCamTag_Home,
	ELobbyCamTag_CustomizeLoadout,
	ELobbyCamTag_LobbyMain,
	ELobbyCamTag_MAX,
};

// Enum Killstreak.ELootSiteAlignment
enum class ELootSiteAlignment : uint8_t {
	Attack,
	Defend,
	Contested,
	ELootSiteAlignment_MAX,
};

// Enum Killstreak.EKSMantleScaleType
enum class EKSMantleScaleType : uint8_t {
	ScaleDistOnly,
	ScaleDistAndTime,
	ShaveIntro,
	EKSMantleScaleType_MAX,
};

// Enum Killstreak.ETeamRole
enum class ETeamRole : uint8_t {
	Roleless,
	Attacker,
	Defender,
	ETeamRole_MAX,
};

// Enum Killstreak.EKSMercMasteryActivityType
enum class EKSMercMasteryActivityType : uint8_t {
	None,
	MercXp,
	Kills,
	Deaths,
	Damage,
	Downs,
	GamesPlayed,
	GamesWon,
	MinutesPlayed,
	Headshots,
	Revives,
	MAX,
};

// Enum Killstreak.EKSRelativeMinimapHeight
enum class EKSRelativeMinimapHeight : uint8_t {
	Below,
	SameLevel,
	Above,
	EKSRelativeMinimapHeight_MAX,
};

// Enum Killstreak.EThrowDirection
enum class EThrowDirection : uint8_t {
	Back,
	Front,
	Left,
	Right,
	EThrowDirection_MAX,
};

// Enum Killstreak.EKSReviveDroneEvent
enum class EKSReviveDroneEvent : uint8_t {
	ReviveStarted,
	ReviveFinished,
	TargetRevived,
	TargetDied,
	DroneDestroyed,
	EKSReviveDroneEvent_MAX,
};

// Enum Killstreak.EKSNPEActivityType
enum class EKSNPEActivityType : uint8_t {
	None,
	TutorialCompleted,
	TutorialSkipped,
	RegionSelected,
	RankedPlayed,
	RankedPopupDisplayed,
	MAX,
};

// Enum Killstreak.EObjectiveIconType
enum class EObjectiveIconType : uint8_t {
	Hack,
	Pickup,
	EObjectiveIconType_MAX,
};

// Enum Killstreak.EObjectiveType
enum class EObjectiveType : uint8_t {
	None,
	ExtractionPC,
	BombZone,
	ControlPoint,
	EObjectiveType_MAX,
};

// Enum Killstreak.EKSNavAreaType
enum class EKSNavAreaType : uint8_t {
	UnusedDefault,
	Jump,
	Hazard,
	StartZipline,
	TravelZipline,
	Swim,
	InteractiveObstacle,
	EKSNavAreaType_MAX,
};

// Enum Killstreak.EKSPlatformType
enum class EKSPlatformType : uint8_t {
	PC,
	XboxOne,
	Playstation4,
	Switch,
	ConsoleGeneric,
	Epic,
	Steam,
	IOS,
	Android,
	MobileGeneric,
	EKSPlatformType_MAX,
};

// Enum Killstreak.EKSPlayerInputType
enum class EKSPlayerInputType : uint8_t {
	PIT_Unknown,
	PIT_KeyboardMouse,
	PIT_Gamepad,
	PIT_Touch,
	PIT_MAX,
};

// Enum Killstreak.EKSPlayerOnlineStatus
enum class EKSPlayerOnlineStatus : uint8_t {
	FGS_InParty,
	FGS_PendingParty,
	FGS_InGame,
	FGS_InMatch,
	FGS_InQueue,
	FGS_Online,
	FGS_DND,
	FGS_Offline,
	FGS_FriendRequest,
	FGS_PendingInvite,
	FGS_MAX,
};

// Enum Killstreak.EKSInputType
enum class EKSInputType : uint8_t {
	KBM,
	GP,
	Touch,
	EKSInputType_MAX,
};

// Enum Killstreak.EKSKeyBindType
enum class EKSKeyBindType : uint8_t {
	ActionMapping,
	AxisMapping,
	EKSKeyBindType_MAX,
};

// Enum Killstreak.EModPriorityResolution
enum class EModPriorityResolution : uint8_t {
	TakeValue1,
	TakeValue2,
	Stack,
	EModPriorityResolution_MAX,
};

// Enum Killstreak.EPlayerModType
enum class EPlayerModType : uint8_t {
	Perk,
	GlobalPerk,
	Activated,
	Passive,
	TemporaryBuff,
	TemporaryDebuff,
	Hidden,
	Unknown,
	EPlayerModType_MAX,
};

// Enum Killstreak.EModInterferenceType
enum class EModInterferenceType : uint8_t {
	Defer,
	Stack,
	WeakestWins,
	StrongestWins,
	BonusWins,
	PenaltyWins,
	EModInterferenceType_MAX,
};

// Enum Killstreak.EEliminationState
enum class EEliminationState : uint8_t {
	NotInPlay,
	Playing,
	Eliminated,
	EEliminationState_MAX,
};

// Enum Killstreak.EIsPlayer
enum class EIsPlayer : uint8_t {
	Unknown,
	Player,
	NotPlayer,
	EIsPlayer_MAX,
};

// Enum Killstreak.EKSPlayerStatsActivityType
enum class EKSPlayerStatsActivityType : uint8_t {
	None,
	PlayerXp,
	Kills,
	Deaths,
	Damage,
	Downs,
	GamesPlayed,
	GamesWon,
	MinutesPlayed,
	Headshots,
	Revives,
	RoguesMastered,
	MAX,
};

// Enum Killstreak.EPollAudience
enum class EPollAudience : uint8_t {
	AllPlayerPoll,
	TeamPoll,
	EPollAudience_MAX,
};

// Enum Killstreak.EProjectileReclaimPermission
enum class EProjectileReclaimPermission : uint8_t {
	OwnerOnly,
	TeammatesOnly,
	Anyone,
	EProjectileReclaimPermission_MAX,
};

// Enum Killstreak.EProjectilePredictionType
enum class EProjectilePredictionType : uint8_t {
	PassThrough,
	Bounce,
	Stop,
	EProjectilePredictionType_MAX,
};

// Enum Killstreak.EProjectileVisibilityType
enum class EProjectileVisibilityType : uint8_t {
	Owner,
	Ally,
	All,
	EProjectileVisibilityType_MAX,
};

// Enum Killstreak.EBadBehaviorType
enum class EBadBehaviorType : uint8_t {
	None,
	QuitEarly,
	Disconnected,
	AFK,
	EBadBehaviorType_MAX,
};

// Enum Killstreak.ERadialMenuItemInterruptNotifyBehaviorType
enum class ERadialMenuItemInterruptNotifyBehaviorType : uint8_t {
	NoNotify,
	OnlyIfMarkedPlaying,
	ERadialMenuItemInterruptNotifyBehaviorType_MAX,
};

// Enum Killstreak.EKSRadialMenuItemInterruptReason
enum class EKSRadialMenuItemInterruptReason : uint8_t {
	Unknown,
	NoCharacter,
	Walking,
	Sprinting,
	Crouching,
	Downed,
	Dead,
	Interacting,
	Zipline,
	SkyDiving,
	DodgeRolling,
	Falling,
	NonRadialMenuItemEquipment,
	RadialMenuItemActivated,
	RadialMenuItemCooldown,
	InvalidTargeting,
	DistFromOrigin,
	Throttled,
	EKSRadialMenuItemInterruptReason_MAX,
};

// Enum Killstreak.ERecoilStart2
enum class ERecoilStart2 : uint8_t {
	ERS_Zero2,
	ERS_Random2,
	ERS_MAX,
};

// Enum Killstreak.ERewardSource
enum class ERewardSource : uint8_t {
	UNKNOWN,
	Base,
	MatchWin,
	ActiveBooster,
	QueueBonusProgression,
	LTMBonusProgression,
	ERewardSource_MAX,
};

// Enum Killstreak.EPlayerStatType
enum class EPlayerStatType : uint8_t {
	UNKNOWN,
	Kills,
	Deaths,
	Assists,
	Downs,
	Revives,
	Eliminations,
	RoundsPlayed,
	Hacks,
	Dehacks,
	RawDamageDealt,
	MitigatedDamageDealt,
	RawDamageReceived,
	MitigatedDamageReceived,
	TimeAlive,
	Rank,
	TimePlayed,
	Score,
	Cash,
	Headshots,
	EPlayerStatType_MAX,
};

// Enum Killstreak.ELimitPerRound
enum class ELimitPerRound : uint8_t {
	None,
	OneActive,
	OnePerRound,
	ELimitPerRound_MAX,
};

// Enum Killstreak.ELocalRequirements
enum class ELocalRequirements : uint8_t {
	None,
	Controlled,
	Viewed,
	ControlledOrViewed,
	ELocalRequirements_MAX,
};

// Enum Killstreak.EPlayerShopTransactionType
enum class EPlayerShopTransactionType : uint8_t {
	Purchase,
	SetActive,
	Refund,
	EPlayerShopTransactionType_MAX,
};

// Enum Killstreak.ESpecialtyRoleType
enum class ESpecialtyRoleType : uint8_t {
	Unknown,
	Attack,
	Defense,
	Support,
	Movement,
	ESpecialtyRoleType_MAX,
};

// Enum Killstreak.EStoreSectionTypes
enum class EStoreSectionTypes : uint8_t {
	NewSection,
	DLCSection,
	FeaturedSection,
	RogueBucksSection,
	DailySection,
	BoostsSection,
	LimitedTimeOfferSection,
	SpecialPromotionsSection,
	DLCSectionOnSale,
	EStoreSectionTypes_MAX,
};

// Enum Killstreak.EWeaponSlot
enum class EWeaponSlot : uint8_t {
	NONE,
	PRIMARY_ONE_SLOT,
	PRIMARY_TWO_SLOT,
	SECONDARY_SLOT,
	MELEE_SLOT,
	EWeaponSlot_MAX,
};

// Enum Killstreak.ECharacterRole
enum class ECharacterRole : uint8_t {
	None,
	Attacker,
	Defender,
	Max,
};

// Enum Killstreak.EKSSocketCrouchHandling
enum class EKSSocketCrouchHandling : uint8_t {
	MaintainCapsuleBottomOffset,
	MaintainCapsuleCenterOffset,
	ApplyCustomOffset,
	EKSSocketCrouchHandling_MAX,
};

// Enum Killstreak.EKSSocketOffsetType
enum class EKSSocketOffsetType : uint8_t {
	KeepRelativeToParent,
	KeepRelativeToMesh,
	KeepRelativeToCylinder,
	EKSSocketOffsetType_MAX,
};

// Enum Killstreak.ECameraShoulder
enum class ECameraShoulder : uint8_t {
	Right,
	Left,
	ECameraShoulder_MAX,
};

// Enum Killstreak.EInputReleaseType
enum class EInputReleaseType : uint8_t {
	All,
	RadialMenu,
	EscapeMenu,
	Scoreboard,
	Map,
	RadialMenuClose,
	EInputReleaseType_MAX,
};

// Enum Killstreak.EKSContextualActionButtonMode
enum class EKSContextualActionButtonMode : uint8_t {
	HoldUse,
	HoldReload,
	HoldNone,
	EKSContextualActionButtonMode_MAX,
};

// Enum Killstreak.EKSInputActionType
enum class EKSInputActionType : uint8_t {
	Press,
	Hold,
	Repeat,
	EKSInputActionType_MAX,
};

// Enum Killstreak.EControllerInputType
enum class EControllerInputType : uint8_t {
	None,
	ADSBit,
	KeyboardMouse,
	KeyboardMouseADS,
	Gamepad,
	GamepadADS,
	JoyCon,
	JoyConADS,
	Touch,
	TouchADS,
	PCGamepad,
	PCGamepadADS,
	EControllerInputType_MAX,
};

// Enum Killstreak.EOcclusionType
enum class EOcclusionType : uint8_t {
	None,
	Simple,
	Advanced,
	EOcclusionType_MAX,
};

// Enum Killstreak.EKSPowerSlideEndReason
enum class EKSPowerSlideEndReason : uint8_t {
	Expired,
	Collide,
	Fall,
	Action,
	Interrupted,
	FaceAway,
	Unknown,
	EKSPowerSlideEndReason_MAX,
};

// Enum Killstreak.EKSGame_CustomMovement
enum class EKSGame_CustomMovement : uint8_t {
	KSMOVE_Vaulting,
	KSMOVE_DiveFreeFall,
	KSMOVE_DiveParachute,
	KSMOVE_DodgeRoll,
	KSMOVE_ZipLine,
	KSMOVE_FlightRecovery,
	KSMOVE_Ability,
	KSMOVE_PowerSlide,
	KSMOVE_Kick,
	KSMOVE_MAX,
};

// Enum Killstreak.EScreenLogType
enum class EScreenLogType : uint8_t {
	CombatLog,
	RadialMenuItemLog,
	EScreenLogType_MAX,
};

// Enum Killstreak.EEmoteCameraPositionType
enum class EEmoteCameraPositionType : uint8_t {
	None,
	Stand,
	Crouch,
	Prone,
	EEmoteCameraPositionType_MAX,
};

// Enum Killstreak.EExtractionTeamType
enum class EExtractionTeamType : uint8_t {
	NotSet,
	Attacker,
	Defender,
	EExtractionTeamType_MAX,
};

// Enum Killstreak.EKSRespawnMode
enum class EKSRespawnMode : uint8_t {
	NoRespawn,
	TicketRespawn,
	AlwaysRespawn,
	EKSRespawnMode_MAX,
};

// Enum Killstreak.EKSGameTicketDisplayType
enum class EKSGameTicketDisplayType : uint8_t {
	Respawns,
	BombPoints,
	EKSGameTicketDisplayType_MAX,
};

// Enum Killstreak.EKSPerSecondChargeMode
enum class EKSPerSecondChargeMode : uint8_t {
	OverrideNone,
	OverrideChargeable,
	OverrideUnchargeable,
	OverrideAll,
	EKSPerSecondChargeMode_MAX,
};

// Enum Killstreak.EKSMovementDirection
enum class EKSMovementDirection : uint8_t {
	Forward,
	Right,
	Back,
	Left,
	EKSMovementDirection_MAX,
};

// Enum Killstreak.EKSApparelGender
enum class EKSApparelGender : uint8_t {
	Unisex,
	Male,
	Female,
	EKSApparelGender_MAX,
};

// Enum Killstreak.EKSCharacterGender
enum class EKSCharacterGender : uint8_t {
	Unknown,
	Male,
	Female,
	EKSCharacterGender_MAX,
};

// Enum Killstreak.EPerceivedAlignmentType
enum class EPerceivedAlignmentType : uint8_t {
	Neutral,
	Friendly,
	Enemy,
	EPerceivedAlignmentType_MAX,
};

// Enum Killstreak.EPlayerSilhouetteType
enum class EPlayerSilhouetteType : uint8_t {
	None,
	Neutral,
	Selected,
	Friendly,
	Enemy,
	EPlayerSilhouetteType_MAX,
};

// Enum Killstreak.EDamageCategory
enum class EDamageCategory : uint8_t {
	Default,
	NonDamage,
	Firearm,
	Impact,
	Explosion,
	Melee,
	ThrownMelee,
	InstantDeath,
	Environmental,
	Bleed,
	Fire,
	EDamageCategory_MAX,
};

// Enum Killstreak.ELoadoutSlot
enum class ELoadoutSlot : uint8_t {
	LoadoutSlot_None,
	LoadoutSlot_SpecialtyOne,
	LoadoutSlot_SpecialtyTwo,
	LoadoutSlot_PerkOne,
	LoadoutSlot_PerkTwo,
	LoadoutSlot_PerkFour,
	LoadoutSlot_KillstreakOne,
	LoadoutSlot_KillstreakTwo,
	LoadoutSlot_Pistol,
	LoadoutSlot_PistolAttachOne,
	LoadoutSlot_PistolAttachTwo,
	LoadoutSlot_PistolAttachThree,
	LoadoutSlot_PrimaryWeapon,
	LoadoutSlot_PerkThree,
	LoadoutSlot_GadgetOne,
	LoadoutSlot_PassiveOne,
	LoadoutSlot_PassiveTwo,
	LoadoutSlot_SecondaryAbilityOne,
	LoadoutSlot_SecondaryAbilityTwo,
	LoadoutSlot_LoadoutBundleId,
	LoadoutSlot_MAX,
};

// Enum Killstreak.TG_EQUIP_POINT
enum class TG_EQUIP_POINT : uint8_t {
	EQP_NONE,
	EQP_AUTO,
	EQP_OFFHAND_2,
	EQP_OFFHAND_3,
	EQP_OFFHAND_4,
	EQP_OFFHAND_5,
	EQP_RECALL,
	EQP_PASSIVE,
	EQP_ACTIVE_2,
	EQP_ACTIVE_3,
	EQP_ACTIVE_4,
	EQP_CONSUMABLE_2,
	EQP_CONSUMABLE_3,
	EQP_UNUSED_4,
	EQP_UNUSED_5,
	EQP_UNUSED_6,
	EQP_UNUSED_7,
	EQP_UNUSED_8,
	EQP_UNUSED_9,
	EQP_ITEM_STORE_2,
	EQP_ITEM_STORE_3,
	EQP_ITEM_STORE_4,
	EQP_ITEM_STORE_5,
	EQP_ITEM_STORE_6,
	EQP_OVER_DRAW,
	EQP_MAX,
};

// Enum Killstreak.EKSWeaponDestroyReason
enum class EKSWeaponDestroyReason : uint8_t {
	None,
	RemoveNoReplace,
	RemoveWithReplace,
	DropNoReplace,
	DropWithReplace,
	EKSWeaponDestroyReason_MAX,
};

// Enum Killstreak.EReloadReplicationFlags
enum class EReloadReplicationFlags : uint8_t {
	MinimumReplication,
	ReplicateAmmo,
	EReloadReplicationFlags_MAX,
};

// Enum Killstreak.EFiredReplicationFlags
enum class EFiredReplicationFlags : uint8_t {
	MinimumReplication,
	ReplicateAmmo,
	ReplicateAim,
	ReplicateAimAndAmmo,
	ReplicateAllFireParameters,
	EFiredReplicationFlags_MAX,
};

// Enum Killstreak.EKSBuildState
enum class EKSBuildState : uint8_t {
	BUILD_PENDING_VALID,
	BUILD_PENDING_INVALID,
	BUILD_SUCCEEDED,
	BUILD_FAILED,
	BUILD_MAX,
};

// Enum Killstreak.EThirdPersonAimOriginType
enum class EThirdPersonAimOriginType : uint8_t {
	ActorEyes,
	FixedRelativeLocation,
	ComponentByTag,
	SocketOnCharacterMesh,
	EThirdPersonAimOriginType_MAX,
};

// Enum Killstreak.EReticleType
enum class EReticleType : uint8_t {
	Pistol,
	Rifle,
	Shotgun,
	DualAR,
	None,
	EReticleType_MAX,
};

// Enum Killstreak.EReloadType
enum class EReloadType : uint8_t {
	Clip,
	SingleShot,
	EReloadType_MAX,
};

// Enum Killstreak.EWeaponCastType
enum class EWeaponCastType : uint8_t {
	UseSettings,
	AlwaysQuickCast,
	AlwaysNormalCast,
	EWeaponCastType_MAX,
};

// Enum Killstreak.EFireModeType
enum class EFireModeType : uint8_t {
	Single,
	Burst,
	SemiAuto,
	EFireModeType_MAX,
};

// Enum Killstreak.EKSWeaponEquipType
enum class EKSWeaponEquipType : uint8_t {
	Normal,
	Special,
	GameMode,
	EKSWeaponEquipType_MAX,
};

// Enum Killstreak.EExtendedMagazineRounding
enum class EExtendedMagazineRounding : uint8_t {
	NearestInteger,
	RoundUp,
	RoundDown,
	EExtendedMagazineRounding_MAX,
};

// Enum Killstreak.EKSVariableScopeType
enum class EKSVariableScopeType : uint8_t {
	FixedFOV,
	ScopeMultiplier,
	EKSVariableScopeType_MAX,
};

// Enum Killstreak.EBundledAmmoType
enum class EBundledAmmoType : uint8_t {
	FullClip,
	DefaultAmmoFromAsset,
	Override,
	EBundledAmmoType_MAX,
};

// Enum Killstreak.EWeaponComponentAttachmentType
enum class EWeaponComponentAttachmentType : uint8_t {
	AttachToCharacter,
	AttachToMesh,
	EWeaponComponentAttachmentType_MAX,
};

// Enum Killstreak.ESkinObjectParentingType
enum class ESkinObjectParentingType : uint8_t {
	Never,
	ActiveAndMainHand,
	Active,
	InAction,
	Always,
	ESkinObjectParentingType_MAX,
};

// Enum Killstreak.EWeaponComponentTickType
enum class EWeaponComponentTickType : uint8_t {
	NeverTick,
	TickWhenPrimary,
	TickWhenActive,
	AlwaysTick,
	EWeaponComponentTickType_MAX,
};

// Enum Killstreak.EKSWeaponMasteryActivityType
enum class EKSWeaponMasteryActivityType : uint8_t {
	None,
	Shots,
	Hits,
	Damage,
	Downs,
	Kills,
	Headshots,
	Deaths,
	MAX,
};

// ScriptStruct Killstreak.GiveItemParameters
// Size: 0x0c (Inherited: 0x00)
struct FGiveItemParameters {
	enum class EItemSourceType ItemSource; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	int32_t OriginalOwnerId; // 0x04(0x04)
	bool bActivate; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Killstreak.DropItemParameters
// Size: 0x08 (Inherited: 0x00)
struct FDropItemParameters {
	int32_t OriginalOwnerId; // 0x00(0x04)
	bool bIsPlayerDrop; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Killstreak.DamageEffect
// Size: 0x50 (Inherited: 0x00)
struct FDamageEffect {
	float Damage; // 0x00(0x04)
	float AttemptedDamage; // 0x04(0x04)
	struct UDamageType* DamageTypeClass; // 0x08(0x08)
	struct AActor* DamageCauser; // 0x10(0x08)
	struct FVector DamageOrigin; // 0x18(0x0c)
	bool bArmorBroke; // 0x24(0x01)
	bool bDamageResisted; // 0x25(0x01)
	bool bDamageReduced; // 0x26(0x01)
	bool bDamageShielded; // 0x27(0x01)
	struct FVector RelativeImpactLocation; // 0x28(0x0c)
	struct FVector_NetQuantizeNormal RelativeImpactNormal; // 0x34(0x0c)
	struct FName BoneName; // 0x40(0x08)
	bool IsHeadshot; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Killstreak.ShotgunHitData
// Size: 0x18 (Inherited: 0x00)
struct FShotgunHitData {
	struct UKSWeaponAsset_Shotgun* ShotgunAsset; // 0x00(0x08)
	struct TArray<enum class EShotgunHitResult> HitResults; // 0x08(0x10)
};

// ScriptStruct Killstreak.LootSiteState
// Size: 0x02 (Inherited: 0x00)
struct FLootSiteState {
	bool bActive; // 0x00(0x01)
	bool bLooted; // 0x01(0x01)
};

// ScriptStruct Killstreak.AdvancedCombatEvent
// Size: 0xa8 (Inherited: 0x00)
struct FAdvancedCombatEvent {
	struct FWeakObjectPtr<struct APlayerState> DamageInstigator; // 0x00(0x08)
	struct FWeakObjectPtr<struct APawn> DamageInstigatorPawn; // 0x08(0x08)
	struct FWeakObjectPtr<struct AActor> DamageCauser; // 0x10(0x08)
	float Damage; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct UDamageType* DamageType; // 0x20(0x08)
	struct UKSWeaponAsset* WeaponAsset; // 0x28(0x08)
	int32_t VictimId; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
	struct FString Victim; // 0x38(0x10)
	struct FVector_NetQuantize VictimLocation; // 0x48(0x0c)
	int32_t VictimTeamNum; // 0x54(0x04)
	int32_t InstigatorId; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
	struct FString Instigator; // 0x60(0x10)
	enum class ECombatEventFriendlyFireType FriendlyFireType; // 0x70(0x01)
	char UnknownData_71[0x3]; // 0x71(0x03)
	float GameTimeStamp; // 0x74(0x04)
	struct FVector_NetQuantize HitLocation; // 0x78(0x0c)
	struct FName HitBone; // 0x84(0x08)
	bool Headshot; // 0x8c(0x01)
	bool DowningHit; // 0x8d(0x01)
	bool FatalHit; // 0x8e(0x01)
	bool bResisted; // 0x8f(0x01)
	bool bReduced; // 0x90(0x01)
	bool bShielded; // 0x91(0x01)
	char UnknownData_92[0x16]; // 0x92(0x16)
};

// ScriptStruct Killstreak.AdvancedCombatSummary
// Size: 0x20 (Inherited: 0x00)
struct FAdvancedCombatSummary {
	struct APawn* DamageInstigatorPawn; // 0x00(0x08)
	struct AActor* DamageCauser; // 0x08(0x08)
	struct TArray<struct FAdvancedCombatEvent> CombatEvents; // 0x10(0x10)
};

// ScriptStruct Killstreak.ProjectileExplosionInfo
// Size: 0x1c (Inherited: 0x00)
struct FProjectileExplosionInfo {
	enum class EProjectileExplosionType ExplosionType; // 0x00(0x01)
	char SurfaceType; // 0x01(0x01)
	char UnknownData_2[0x2]; // 0x02(0x02)
	struct FVector_NetQuantize ImpactPoint; // 0x04(0x0c)
	struct FVector_NetQuantizeNormal ImpactNormal; // 0x10(0x0c)
};

// ScriptStruct Killstreak.KSPollResults
// Size: 0x28 (Inherited: 0x00)
struct FKSPollResults {
	struct FKSPollData PollFinalData; // 0x00(0x10)
	struct FString PollName; // 0x10(0x10)
	int32_t TeamNum; // 0x20(0x04)
	bool bPollPassed; // 0x24(0x01)
	char UnknownData_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Killstreak.KSPollData
// Size: 0x10 (Inherited: 0x00)
struct FKSPollData {
	int32_t VoterCount; // 0x00(0x04)
	int32_t VotesInFavor; // 0x04(0x04)
	int32_t VotesAgainst; // 0x08(0x04)
	float TimeElapsed; // 0x0c(0x04)
};

// ScriptStruct Killstreak.CombatEventInfo
// Size: 0x60 (Inherited: 0x00)
struct FCombatEventInfo {
	struct FWeakObjectPtr<struct APlayerState> EventVictim; // 0x00(0x08)
	struct FWeakObjectPtr<struct APlayerState> EventInstigator; // 0x08(0x08)
	struct FWeakObjectPtr<struct AController> InstigatorController; // 0x10(0x08)
	struct TArray<struct FWeakObjectPtr<struct APlayerState>> EventAssistants; // 0x18(0x10)
	struct FWeakObjectPtr<struct AActor> DamagedActor; // 0x28(0x08)
	struct FWeakObjectPtr<struct AActor> DamageCauser; // 0x30(0x08)
	struct UDamageType* DamageType; // 0x38(0x08)
	struct UKSWeaponAsset* WeaponAsset; // 0x40(0x08)
	bool DownEvent; // 0x48(0x01)
	bool KillEvent; // 0x49(0x01)
	enum class EHitLocationType HitLocationType; // 0x4a(0x01)
	char UnknownData_4B[0x1]; // 0x4b(0x01)
	float DamageDealt; // 0x4c(0x04)
	float OverkillDamageDealt; // 0x50(0x04)
	float OriginalDamageDealt; // 0x54(0x04)
	bool IsArmorHit; // 0x58(0x01)
	bool bDamageResisted; // 0x59(0x01)
	bool bDamageReduced; // 0x5a(0x01)
	bool bDamageShielded; // 0x5b(0x01)
	bool IsRadialDamage; // 0x5c(0x01)
	bool WasCharacterAlreadyDown; // 0x5d(0x01)
	char UnknownData_5E[0x2]; // 0x5e(0x02)
};

// ScriptStruct Killstreak.RadialMenuItemEventInfo
// Size: 0x10 (Inherited: 0x00)
struct FRadialMenuItemEventInfo {
	struct FWeakObjectPtr<struct APlayerState> EventInstigator; // 0x00(0x08)
	struct FWeakObjectPtr<struct UKSRadialMenuItem> RadialMenuItem; // 0x08(0x08)
};

// ScriptStruct Killstreak.AssistInfo
// Size: 0x28 (Inherited: 0x00)
struct FAssistInfo {
	struct FWeakObjectPtr<struct AKSPlayerState> Assistant; // 0x00(0x08)
	float DamageContributed; // 0x08(0x04)
	float ContributionPercent; // 0x0c(0x04)
	int32_t PointsAwarded; // 0x10(0x04)
	struct FWeakObjectPtr<struct AKSPlayerState> Victim; // 0x14(0x08)
	struct FWeakObjectPtr<struct AKSPlayerState> DownInstigator; // 0x1c(0x08)
	bool bLethal; // 0x24(0x01)
	char UnknownData_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Killstreak.AccoladeEventEntry
// Size: 0x70 (Inherited: 0x00)
struct FAccoladeEventEntry {
	struct FWeakObjectPtr<struct AKSPlayerState> RelevantPlayer; // 0x00(0x08)
	struct FAccoladeDisplayInfo AccoladeDisplayInfo; // 0x08(0x60)
	bool IgnoreRelevantPlayerId; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
};

// ScriptStruct Killstreak.AccoladeDisplayInfo
// Size: 0x60 (Inherited: 0x00)
struct FAccoladeDisplayInfo {
	enum class EAccoladeCategory Category; // 0x00(0x01)
	enum class EAccoladeEventType Type; // 0x01(0x01)
	char UnknownData_2[0x6]; // 0x02(0x06)
	struct UTexture2D* DisplayIcon; // 0x08(0x08)
	struct FText DisplayTitle; // 0x10(0x18)
	float DisplayDuration; // 0x28(0x04)
	int32_t Multiplier; // 0x2c(0x04)
	struct FKSVoicelineEvent AccoladeVoiceLine; // 0x30(0x30)
};

// ScriptStruct Killstreak.KSVoicelineEvent
// Size: 0x30 (Inherited: 0x00)
struct FKSVoicelineEvent {
	struct FName EventName; // 0x00(0x08)
	enum class EKSVoicelineAudience Audience; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	float ActivationChance; // 0x0c(0x04)
	bool bAffectedByGlobalCooldown; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	int32_t CooldownGroup; // 0x14(0x04)
	float CooldownDuration; // 0x18(0x04)
	float VoicelineChangeValue; // 0x1c(0x04)
	bool bPlayedByOwnerAlready; // 0x20(0x01)
	bool bPlaySpecificVoiceLine; // 0x21(0x01)
	char UnknownData_22[0x6]; // 0x22(0x06)
	struct UAkAudioEvent* SpecificAkAudioEvent; // 0x28(0x08)
};

// ScriptStruct Killstreak.DisplayInfo
// Size: 0x88 (Inherited: 0x00)
struct FDisplayInfo {
	struct TMap<enum class EDisplayType, SoftClassProperty> DisplayWidgetMap; // 0x00(0x50)
	int32_t UniqueId; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
	struct AKSPlayerState* CreatingPlayer; // 0x58(0x08)
	struct AActor* AssociatedActor; // 0x60(0x08)
	struct UObject* AssociatedObject; // 0x68(0x08)
	struct FVector DefaultLocation; // 0x70(0x0c)
	float Lifespan; // 0x7c(0x04)
	struct FTimerHandle TimerHandle; // 0x80(0x08)
};

// ScriptStruct Killstreak.RoundInitState
// Size: 0x10 (Inherited: 0x00)
struct FRoundInitState {
	char RoundNumber; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	int32_t AttackingTeam; // 0x04(0x04)
	int32_t DefendingTeam; // 0x08(0x04)
	char LastPrepareTriggered; // 0x0c(0x01)
	char LastRoundStartTriggered; // 0x0d(0x01)
	char UnknownData_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct Killstreak.RoundResult
// Size: 0x20 (Inherited: 0x00)
struct FRoundResult {
	char RoundNumber; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct AKSTeamState* WinningTeam; // 0x08(0x08)
	int32_t WinnerScore; // 0x10(0x04)
	bool WinByElimination; // 0x14(0x01)
	char LastTriggeredRound; // 0x15(0x01)
	char UnknownData_16[0x2]; // 0x16(0x02)
	struct AKSObjectiveBase* ObjectiveChosen; // 0x18(0x08)
};

// ScriptStruct Killstreak.KSNeutralBombState
// Size: 0x18 (Inherited: 0x00)
struct FKSNeutralBombState {
	enum class EKSNeutralBombState CurrentState; // 0x00(0x01)
	enum class EKSNeutralBombState OldState; // 0x01(0x01)
	char UnknownData_2[0x2]; // 0x02(0x02)
	int32_t BombTeam; // 0x04(0x04)
	struct AKSPlayerState* BombHolder; // 0x08(0x08)
	struct AKSNeutralBombZone* BombZone; // 0x10(0x08)
};

// ScriptStruct Killstreak.PingInfo
// Size: 0x50 (Inherited: 0x00)
struct FPingInfo {
	enum class EPingType PingType; // 0x00(0x01)
	enum class EPingMessage PingMessage; // 0x01(0x01)
	char UnknownData_2[0x2]; // 0x02(0x02)
	struct FVector_NetQuantize Location; // 0x04(0x0c)
	struct FVector_NetQuantize PingIconOffset; // 0x10(0x0c)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct AActor* PingedActor; // 0x20(0x08)
	struct AKSPlayerState* PingingPlayer; // 0x28(0x08)
	struct TArray<struct AKSPlayerState*> AcknowledgedPlayers; // 0x30(0x10)
	struct FTimerHandle ExpirationHandle; // 0x40(0x08)
	int32_t PingId; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Killstreak.KSActorProximityInfo
// Size: 0x18 (Inherited: 0x00)
struct FKSActorProximityInfo {
	bool bInLOS; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float LastTimeUpdated; // 0x04(0x04)
	struct TArray<struct UPrimitiveComponent*> OverlappedComponents; // 0x08(0x10)
};

// ScriptStruct Killstreak.ShopItem
// Size: 0xa0 (Inherited: 0x0c)
struct FShopItem : public FFastArraySerializerItem {
	enum class EShopItemType Type; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
	struct TArray<struct FShopSubItem> SubItemList; // 0x10(0x10)
	bool bResetable; // 0x20(0x01)
	char UnknownData_21[0x3]; // 0x21(0x03)
	struct FGameplayTag EquipPoint; // 0x24(0x08)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct TArray<enum class EShopItemType> ItemsToDeactivate; // 0x30(0x10)
	char UnknownData_40[0x10]; // 0x40(0x10)
	struct TArray<enum class EShopItemType> Prerequisites; // 0x50(0x10)
	struct TArray<enum class EShopItemType> Restrictions; // 0x60(0x10)
	int32_t NextSubItemIndex; // 0x70(0x04)
	int32_t CurrentSubItemIndex; // 0x74(0x04)
	bool bIsActive; // 0x78(0x01)
	bool bStartInactive; // 0x79(0x01)
	bool bOneTimePurchase; // 0x7a(0x01)
	bool bAuthorityIsActive; // 0x7b(0x01)
	int32_t AuthorityPurchaseIndex; // 0x7c(0x04)
	int32_t AuthorityLatestTransactionId; // 0x80(0x04)
	bool bSimulatedIsActive; // 0x84(0x01)
	char UnknownData_85[0x3]; // 0x85(0x03)
	int32_t SimulatedPurchaseIndex; // 0x88(0x04)
	int32_t SimulatedLatestTransactionId; // 0x8c(0x04)
	char UnknownData_90[0x10]; // 0x90(0x10)
};

// ScriptStruct Killstreak.ShopSubItem
// Size: 0x10 (Inherited: 0x00)
struct FShopSubItem {
	struct UKSItem* Item; // 0x00(0x08)
	int32_t Price; // 0x08(0x04)
	bool bPurchased; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Killstreak.KSScoreChangeEvent
// Size: 0x30 (Inherited: 0x00)
struct FKSScoreChangeEvent {
	int32_t Delta; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FText Reason; // 0x08(0x18)
	bool bBonus; // 0x20(0x01)
	char UnknownData_21[0x3]; // 0x21(0x03)
	struct FWeakObjectPtr<struct AKSPlayerState> Instigator; // 0x24(0x08)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Killstreak.JobSelectionEntry
// Size: 0x30 (Inherited: 0x0c)
struct FJobSelectionEntry : public FFastArraySerializerItem {
	int32_t JobId; // 0x0c(0x04)
	struct FWeakObjectPtr<struct AKSPlayerState> CurrentPlayerState; // 0x10(0x08)
	struct FSerializedMctsNetId NetId; // 0x18(0x08)
	int32_t SkinId; // 0x20(0x04)
	int32_t JobMasteryXp; // 0x24(0x04)
	bool bSelectedByBot; // 0x28(0x01)
	enum class EJobSelectionState SelectionState; // 0x29(0x01)
	char UnknownData_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct Killstreak.AnnouncementData
// Size: 0x38 (Inherited: 0x00)
struct FAnnouncementData {
	enum class EAnnouncementType Type; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FText MessageText; // 0x08(0x18)
	enum class ETeamAlignment TeamAlignment; // 0x20(0x01)
	char UnknownData_21[0x3]; // 0x21(0x03)
	int32_t TeamAlignmentNum; // 0x24(0x04)
	int32_t FriendlyTeamAlive; // 0x28(0x04)
	int32_t EnemyTeamAlive; // 0x2c(0x04)
	float Seconds; // 0x30(0x04)
	float DisplayDuration; // 0x34(0x04)
};

// ScriptStruct Killstreak.InMatchPurchaseInfo
// Size: 0x20 (Inherited: 0x00)
struct FInMatchPurchaseInfo {
	struct FInMatchStoreItem RequestedItem; // 0x00(0x10)
	struct FGameplayTag Slot; // 0x10(0x08)
	struct UObject* PurchasedItem; // 0x18(0x08)
};

// ScriptStruct Killstreak.InMatchStoreItem
// Size: 0x10 (Inherited: 0x00)
struct FInMatchStoreItem {
	struct UKSItem* RepresentedItem; // 0x00(0x08)
	int32_t Price; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Killstreak.TelemetrySettings
// Size: 0x04 (Inherited: 0x00)
struct FTelemetrySettings {
	bool bPingEnabled; // 0x00(0x01)
	bool bPacketLossEnabled; // 0x01(0x01)
	bool bFPSEnabled; // 0x02(0x01)
	bool bTelemetryFeatureActive; // 0x03(0x01)
};

// ScriptStruct Killstreak.KSGlobalShotInfo
// Size: 0x18 (Inherited: 0x00)
struct FKSGlobalShotInfo {
	struct APlayerState* FiringPlayer; // 0x00(0x08)
	struct FVector FiringLocation; // 0x08(0x0c)
	float AudibleRange; // 0x14(0x04)
};

// ScriptStruct Killstreak.KSClientShotInfo
// Size: 0x18 (Inherited: 0x00)
struct FKSClientShotInfo {
	struct FVector FiringLocation; // 0x00(0x0c)
	int32_t UniqueId; // 0x0c(0x04)
	float FadeTime; // 0x10(0x04)
	enum class EKSPingType PingType; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Killstreak.CongregatedShotgunHit
// Size: 0xb0 (Inherited: 0x00)
struct FCongregatedShotgunHit {
	struct FHitResult FirstHit; // 0x00(0x88)
	struct AActor* HitActor; // 0x88(0x08)
	int32_t TimesHit; // 0x90(0x04)
	float AccumulatedDamage; // 0x94(0x04)
	int32_t TimesHitHead; // 0x98(0x04)
	bool HeadshotRegistered; // 0x9c(0x01)
	char UnknownData_9D[0x3]; // 0x9d(0x03)
	struct FName BackupBodyBone; // 0xa0(0x08)
	struct FName BackupHeadBone; // 0xa8(0x08)
};

// ScriptStruct Killstreak.AimData
// Size: 0x50 (Inherited: 0x00)
struct FAimData {
	struct FVector StartTrace; // 0x00(0x0c)
	struct FVector Direction; // 0x0c(0x0c)
	struct FVector ViewPoint; // 0x18(0x0c)
	enum class EAimDataMode AimDataMode; // 0x24(0x01)
	char UnknownData_25[0x3]; // 0x25(0x03)
	struct FVector EndTrace; // 0x28(0x0c)
	struct FVector_NetQuantizeNormal ImpactNormal; // 0x34(0x0c)
	struct TArray<struct FVector> SpreadDirections; // 0x40(0x10)
};

// ScriptStruct Killstreak.ScoreboardStats
// Size: 0x40 (Inherited: 0x00)
struct FScoreboardStats {
	int32_t userPlayerID; // 0x00(0x04)
	int32_t winTeamNum; // 0x04(0x04)
	struct FString mapName; // 0x08(0x10)
	int32_t matchInstanceId; // 0x18(0x04)
	int32_t GameMode; // 0x1c(0x04)
	struct TArray<struct FTeamStats> teams; // 0x20(0x10)
	struct TArray<struct FPlayerEntryStats> playerStats; // 0x30(0x10)
};

// ScriptStruct Killstreak.PlayerEntryStats
// Size: 0xc8 (Inherited: 0x00)
struct FPlayerEntryStats {
	int32_t PlayerId; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	int64_t netPlayerID; // 0x08(0x08)
	struct FString PlayerName; // 0x10(0x10)
	int32_t TeamNum; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
	struct UKSJobItem* PlayerJob; // 0x28(0x08)
	bool IsBot; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	struct FPlayerMatchStatInfo elimCount; // 0x34(0x10)
	struct FPlayerMatchStatInfo DownCount; // 0x44(0x10)
	struct FPlayerMatchStatInfo deathCount; // 0x54(0x10)
	struct FPlayerMatchStatInfo reviveCount; // 0x64(0x10)
	struct FPlayerMatchStatInfo DamageDealt; // 0x74(0x10)
	struct FPlayerMatchStatInfo hackCount; // 0x84(0x10)
	struct FPlayerMatchStatInfo dehackCount; // 0x94(0x10)
	struct FPlayerMatchStatInfo pointCount; // 0xa4(0x10)
	struct FPlayerMatchStatInfo timePlayed; // 0xb4(0x10)
	char UnknownData_C4[0x4]; // 0xc4(0x04)
};

// ScriptStruct Killstreak.PlayerMatchStatInfo
// Size: 0x10 (Inherited: 0x00)
struct FPlayerMatchStatInfo {
	enum class EPlayerStatType StatType; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float StatValue; // 0x04(0x04)
	int32_t StatPlaceTeam; // 0x08(0x04)
	int32_t StatPlaceAll; // 0x0c(0x04)
};

// ScriptStruct Killstreak.TeamStats
// Size: 0x20 (Inherited: 0x00)
struct FTeamStats {
	int32_t TeamNum; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FString teamName; // 0x08(0x10)
	int32_t teamScore; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Killstreak.PlayerRewardsSummary
// Size: 0x60 (Inherited: 0x00)
struct FPlayerRewardsSummary {
	struct TMap<int64_t, struct FRewardProgress> ActivityRewards; // 0x00(0x50)
	struct TArray<struct FPlayerMatchStatInfo> BestStats; // 0x50(0x10)
};

// ScriptStruct Killstreak.RewardProgress
// Size: 0x48 (Inherited: 0x00)
struct FRewardProgress {
	int32_t Quantity; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<enum class ERewardSource> Sources; // 0x08(0x10)
	struct TArray<float> SourceValues; // 0x18(0x10)
	struct TArray<struct FString> Events; // 0x28(0x10)
	struct TArray<float> EventValues; // 0x38(0x10)
};

// ScriptStruct Killstreak.ActivityTier
// Size: 0x40 (Inherited: 0x00)
struct FActivityTier {
	int32_t Tier; // 0x00(0x04)
	int32_t StartingCount; // 0x04(0x04)
	int32_t Count; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct TArray<struct UPUMG_StoreItem*> RewardItems; // 0x10(0x10)
	char UnknownData_20[0x20]; // 0x20(0x20)
};

// ScriptStruct Killstreak.AttachmentData
// Size: 0x48 (Inherited: 0x00)
struct FAttachmentData {
	struct TSoftObjectPtr<struct UKSWeaponAttachment> SoftObjectPtr; // 0x00(0x28)
	struct FGameplayTagContainer CachedCompatibleWeaponTypes; // 0x28(0x20)
};

// ScriptStruct Killstreak.AccoladeEventList
// Size: 0x88 (Inherited: 0x70)
struct FAccoladeEventList : public FSizedArraySerializer {
	struct TArray<struct FAccoladeEventItem> Items; // 0x70(0x10)
	char UnknownData_80[0x8]; // 0x80(0x08)
};

// ScriptStruct Killstreak.AccoladeEventItem
// Size: 0x70 (Inherited: 0x01)
struct FAccoladeEventItem : public FReplicatedLogItem {
	struct FAccoladeEventEntry AccoladeEventEntry; // 0x00(0x70)
};

// ScriptStruct Killstreak.AccoladeTrackerTableRow
// Size: 0x30 (Inherited: 0x08)
struct FAccoladeTrackerTableRow : public FTableRowBase {
	SoftClassProperty AccoladeTrackerObject; // 0x08(0x28)
};

// ScriptStruct Killstreak.AccoladePlayerTrackers
// Size: 0x20 (Inherited: 0x00)
struct FAccoladePlayerTrackers {
	int32_t PlayerId; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct AKSPlayerState* PlayerState; // 0x08(0x08)
	int32_t DownCount; // 0x10(0x04)
	int32_t elimCount; // 0x14(0x04)
	float TimeLeft; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Killstreak.ActivityReference
// Size: 0x30 (Inherited: 0x00)
struct FActivityReference {
	int64_t ReferenceValue1; // 0x00(0x08)
	int64_t ReferenceValue2; // 0x08(0x08)
	int64_t ReferenceValue3; // 0x10(0x08)
	char UnknownData_18[0x18]; // 0x18(0x18)
};

// ScriptStruct Killstreak.ActivityTierStructure
// Size: 0xb8 (Inherited: 0x00)
struct FActivityTierStructure {
	int32_t ProgressRequired; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FText Name; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct TSoftObjectPtr<struct UTexture2D> Image; // 0x38(0x28)
	struct FActivityAchievementInfo PlatformAchievement; // 0x60(0x58)
};

// ScriptStruct Killstreak.ActivityAchievementInfo
// Size: 0x58 (Inherited: 0x00)
struct FActivityAchievementInfo {
	bool bIsAchievement; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct TMap<struct FName, struct FString> AchievementIdByOSSName; // 0x08(0x50)
};

// ScriptStruct Killstreak.PlayerActivityInstances
// Size: 0x58 (Inherited: 0x00)
struct FPlayerActivityInstances {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct TMap<struct FInventoryId, struct UKSActivityInstance*> ActivityInstances; // 0x08(0x50)
};

// ScriptStruct Killstreak.KSInitialLoadoutRow
// Size: 0x18 (Inherited: 0x08)
struct FKSInitialLoadoutRow : public FTableRowBase {
	struct TArray<struct TSoftObjectPtr<struct UKSItem>> LoadoutItems; // 0x08(0x10)
};

// ScriptStruct Killstreak.AimAssistActorHealthInfo
// Size: 0x08 (Inherited: 0x00)
struct FAimAssistActorHealthInfo {
	float CurrentHealth; // 0x00(0x04)
	bool bKilled; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Killstreak.RankedAimAssistTarget
// Size: 0x48 (Inherited: 0x00)
struct FRankedAimAssistTarget {
	struct UKSAimAssistAnchorComponent* Anchor; // 0x00(0x08)
	struct TScriptInterface<None> Target; // 0x08(0x10)
	float HeadWeight; // 0x18(0x04)
	struct FVector2D BodyLocation; // 0x1c(0x08)
	struct FVector2D HeadLocation; // 0x24(0x08)
	struct FBox2D ScaledProjectionBounds; // 0x2c(0x14)
	float DistanceFromCamera; // 0x40(0x04)
	int32_t UpdateCount; // 0x44(0x04)
};

// ScriptStruct Killstreak.KSPerceptionFilter
// Size: 0x158 (Inherited: 0x00)
struct FKSPerceptionFilter {
	struct FName PerceptionEvent; // 0x00(0x08)
	struct FKSAffiliationFilter AffiliationFilter; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FKSCharacterStateFilter CharacterStateFilter; // 0x10(0x98)
	struct FKSInteractableStateFilter InteractableStateFilter; // 0xa8(0x18)
	struct FKSDestructibleStateFilter DestructibleStateFilter; // 0xc0(0x02)
	char UnknownData_C2[0x2]; // 0xc2(0x02)
	struct FKSItemDropStateFilter ItemDropStateFilter; // 0xc4(0x10)
	struct FKSLootSiteFilter LootSiteFilter; // 0xd4(0x02)
	struct FKSDestroyableHazardStateFilter DestroyableHazardStateFilter; // 0xd6(0x07)
	char UnknownData_DD[0x3]; // 0xdd(0x03)
	struct FKSMapPointStateFilter MapPointStateFilter; // 0xe0(0x30)
	bool bCheckDistance; // 0x110(0x01)
	char DistanceOperation; // 0x111(0x01)
	char UnknownData_112[0x2]; // 0x112(0x02)
	float Distance; // 0x114(0x04)
	bool bCheckDistanceRange; // 0x118(0x01)
	char UnknownData_119[0x3]; // 0x119(0x03)
	float MinDistance; // 0x11c(0x04)
	float MaxDistance; // 0x120(0x04)
	bool bCheckActorClass; // 0x124(0x01)
	char UnknownData_125[0x3]; // 0x125(0x03)
	struct AActor* ActorClass; // 0x128(0x08)
	bool bCheckActorClassArray; // 0x130(0x01)
	char UnknownData_131[0x7]; // 0x131(0x07)
	struct TArray<struct AActor*> ActorClassArray; // 0x138(0x10)
	bool bCheckLOS; // 0x148(0x01)
	bool bCheckForward; // 0x149(0x01)
	char UnknownData_14A[0x2]; // 0x14a(0x02)
	float MaxForwardAngle; // 0x14c(0x04)
	bool bCheckIntersectsNavMeshPath; // 0x150(0x01)
	char UnknownData_151[0x7]; // 0x151(0x07)
};

// ScriptStruct Killstreak.KSMapPointStateFilter
// Size: 0x30 (Inherited: 0x00)
struct FKSMapPointStateFilter {
	bool bCheckMapPointType; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FGameplayTagContainer RequiredMapPointTypes; // 0x08(0x20)
	bool bCheckIsPointActive; // 0x28(0x01)
	char IsPointActive; // 0x29(0x01)
	bool bCheckIsPointAvailable; // 0x2a(0x01)
	char IsPointAvailable; // 0x2b(0x01)
	bool bCheckIsPointFriendly; // 0x2c(0x01)
	char IsPointFriendly; // 0x2d(0x01)
	char UnknownData_2E[0x2]; // 0x2e(0x02)
};

// ScriptStruct Killstreak.KSDestroyableHazardStateFilter
// Size: 0x07 (Inherited: 0x00)
struct FKSDestroyableHazardStateFilter {
	bool bReturnTrueIfNotDestroyableHazard; // 0x00(0x01)
	bool bCheckCanBotDetect; // 0x01(0x01)
	char CanBotDetect; // 0x02(0x01)
	bool bCheckShouldDestroyWithGunfire; // 0x03(0x01)
	char ShouldDestroyWithGunfire; // 0x04(0x01)
	bool bCheckShouldDestroyWithEMP; // 0x05(0x01)
	char ShouldDestroyWithEMP; // 0x06(0x01)
};

// ScriptStruct Killstreak.KSLootSiteFilter
// Size: 0x02 (Inherited: 0x00)
struct FKSLootSiteFilter {
	bool bCheckHasBeenSeen; // 0x00(0x01)
	char HasBeenSeen; // 0x01(0x01)
};

// ScriptStruct Killstreak.KSItemDropStateFilter
// Size: 0x10 (Inherited: 0x00)
struct FKSItemDropStateFilter {
	bool bCheckEquipPoint; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FGameplayTag EquipPoint; // 0x04(0x08)
	bool bCheckHasBeenSeen; // 0x0c(0x01)
	char HasBeenSeen; // 0x0d(0x01)
	bool bCheckIsInActiveState; // 0x0e(0x01)
	char IsInActiveState; // 0x0f(0x01)
};

// ScriptStruct Killstreak.KSDestructibleStateFilter
// Size: 0x02 (Inherited: 0x00)
struct FKSDestructibleStateFilter {
	bool bCheckIsDestroyed; // 0x00(0x01)
	char Destroyed; // 0x01(0x01)
};

// ScriptStruct Killstreak.KSInteractableStateFilter
// Size: 0x18 (Inherited: 0x00)
struct FKSInteractableStateFilter {
	bool bCheckIsInteracting; // 0x00(0x01)
	char IsInteracting; // 0x01(0x01)
	bool bCheckInteractorAffiliation; // 0x02(0x01)
	struct FKSAffiliationFilter InteractorAffiliation; // 0x03(0x04)
	bool bCheckCanInteract; // 0x07(0x01)
	char CanInteract; // 0x08(0x01)
	bool bCheckInteractableClass; // 0x09(0x01)
	char UnknownData_A[0x6]; // 0x0a(0x06)
	struct AActor* InteractableClass; // 0x10(0x08)
};

// ScriptStruct Killstreak.KSAffiliationFilter
// Size: 0x04 (Inherited: 0x00)
struct FKSAffiliationFilter {
	bool bCountEnemies; // 0x00(0x01)
	bool bCountAllies; // 0x01(0x01)
	bool bCountSelf; // 0x02(0x01)
	bool bCountUnaffiliated; // 0x03(0x01)
};

// ScriptStruct Killstreak.KSCharacterStateFilter
// Size: 0x98 (Inherited: 0x00)
struct FKSCharacterStateFilter {
	bool bCheckHealth; // 0x00(0x01)
	char HealthOperation; // 0x01(0x01)
	char UnknownData_2[0x2]; // 0x02(0x02)
	float HealthPercent; // 0x04(0x04)
	bool bCheckDowned; // 0x08(0x01)
	char Downed; // 0x09(0x01)
	bool bCheckDead; // 0x0a(0x01)
	char Dead; // 0x0b(0x01)
	bool bCheckCrouched; // 0x0c(0x01)
	char Crouched; // 0x0d(0x01)
	bool bCheckFalling; // 0x0e(0x01)
	char Falling; // 0x0f(0x01)
	bool bCheckSprinting; // 0x10(0x01)
	char Sprinting; // 0x11(0x01)
	bool bCheckSwimming; // 0x12(0x01)
	char Swimming; // 0x13(0x01)
	bool bCheckRidingZipline; // 0x14(0x01)
	char RidingZipline; // 0x15(0x01)
	bool bCheckIsBot; // 0x16(0x01)
	char IsBot; // 0x17(0x01)
	bool bCheckBehaviorState; // 0x18(0x01)
	char BehaviorOperation; // 0x19(0x01)
	enum class ECharacterBehaviorState BehaviorState; // 0x1a(0x01)
	bool bCheckInteracting; // 0x1b(0x01)
	char Interacting; // 0x1c(0x01)
	bool bCheckInteractableClass; // 0x1d(0x01)
	char UnknownData_1E[0x2]; // 0x1e(0x02)
	struct AActor* InteractableClass; // 0x20(0x08)
	float MinInteractTimeRemaining; // 0x28(0x04)
	float MaxInteractTimeRemaining; // 0x2c(0x04)
	bool bCheckADS; // 0x30(0x01)
	char ADS; // 0x31(0x01)
	bool bCheckHasReviver; // 0x32(0x01)
	char HasReviver; // 0x33(0x01)
	bool bCheckReviverAffiliation; // 0x34(0x01)
	struct FKSAffiliationFilter ReviverAffiliation; // 0x35(0x04)
	bool bCheckIsOnFire; // 0x39(0x01)
	char IsOnFire; // 0x3a(0x01)
	bool bCheckIsWeaponEquipped; // 0x3b(0x01)
	char IsWeaponEquipped; // 0x3c(0x01)
	char UnknownData_3D[0x3]; // 0x3d(0x03)
	struct AKSWeapon* EquippedWeaponClass; // 0x40(0x08)
	bool bCheckIsWeaponAssetEquipped; // 0x48(0x01)
	char IsWeaponAssetEquipped; // 0x49(0x01)
	char UnknownData_4A[0x6]; // 0x4a(0x06)
	struct TSoftObjectPtr<struct UKSWeaponAsset> EquippedWeaponAsset; // 0x50(0x28)
	bool bCheckRoles; // 0x78(0x01)
	char UnknownData_79[0x7]; // 0x79(0x07)
	struct TArray<enum class ECharacterRole> RolesToCheck; // 0x80(0x10)
	bool bRequireAllRoles; // 0x90(0x01)
	char UnknownData_91[0x7]; // 0x91(0x07)
};

// ScriptStruct Killstreak.KSStimulusEvent
// Size: 0x48 (Inherited: 0x00)
struct FKSStimulusEvent {
	struct AActor* Actor; // 0x00(0x08)
	struct FAIStimulus Stimulus; // 0x08(0x3c)
	char UnknownData_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Killstreak.KSAIMapPointStimulusEvent
// Size: 0x10 (Inherited: 0x00)
struct FKSAIMapPointStimulusEvent {
	struct AActor* Broadcaster; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Killstreak.AIObjectiveEvent
// Size: 0x30 (Inherited: 0x00)
struct FAIObjectiveEvent {
	char UnknownData_0[0x4]; // 0x00(0x04)
	struct FVector ObjectiveLocation; // 0x04(0x0c)
	float Loudness; // 0x10(0x04)
	float MaxRange; // 0x14(0x04)
	struct AActor* Instigator; // 0x18(0x08)
	struct FName Tag; // 0x20(0x08)
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Killstreak.KSAIPlayerStimulusEvent
// Size: 0x38 (Inherited: 0x00)
struct FKSAIPlayerStimulusEvent {
	char UnknownData_0[0x28]; // 0x00(0x28)
	struct AActor* Broadcaster; // 0x28(0x08)
	struct AActor* Enemy; // 0x30(0x08)
};

// ScriptStruct Killstreak.KSAITeamStimulusEvent
// Size: 0x38 (Inherited: 0x00)
struct FKSAITeamStimulusEvent {
	char UnknownData_0[0x28]; // 0x00(0x28)
	struct AActor* Broadcaster; // 0x28(0x08)
	struct AActor* Enemy; // 0x30(0x08)
};

// ScriptStruct Killstreak.KSAmmoManager
// Size: 0x130 (Inherited: 0x108)
struct FKSAmmoManager : public FFastArraySerializer {
	struct FWeakObjectPtr<struct AActor> Owner; // 0x108(0x08)
	struct TArray<struct FKSAmmoManagerEntry> AmmoSupply; // 0x110(0x10)
	struct TArray<struct FKSAmmoTransactions> UnverifiedAmmoTransactions; // 0x120(0x10)
};

// ScriptStruct Killstreak.KSAmmoTransactions
// Size: 0x18 (Inherited: 0x00)
struct FKSAmmoTransactions {
	uint64_t TransactionId; // 0x00(0x08)
	uint32_t UpdateIdAtTimeOfTransaction; // 0x08(0x04)
	enum class EAmmoType AmmoType; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
	int32_t AmmoDelta; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Killstreak.KSAmmoManagerEntry
// Size: 0x1c (Inherited: 0x0c)
struct FKSAmmoManagerEntry : public FFastArraySerializerItem {
	enum class EAmmoType AmmoType; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
	uint32_t UpdateId; // 0x10(0x04)
	int32_t AmmoCount; // 0x14(0x04)
	char UnknownData_18[0x4]; // 0x18(0x04)
};

// ScriptStruct Killstreak.KSAnimInstanceProxy
// Size: 0x790 (Inherited: 0x730)
struct FKSAnimInstanceProxy : public FSkinnedAnimInstanceProxy {
	char UnknownData_730[0x60]; // 0x730(0x60)
};

// ScriptStruct Killstreak.KSAnimStats
// Size: 0x08 (Inherited: 0x00)
struct FKSAnimStats {
	float PlayTime; // 0x00(0x04)
	float PlayTimeWeighted; // 0x04(0x04)
};

// ScriptStruct Killstreak.TimeAnnouncementList
// Size: 0x10 (Inherited: 0x00)
struct FTimeAnnouncementList {
	struct TArray<struct FTimeAnnouncement> TimeAnnouncements; // 0x00(0x10)
};

// ScriptStruct Killstreak.TimeAnnouncement
// Size: 0x60 (Inherited: 0x00)
struct FTimeAnnouncement {
	float Time; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FAnnouncement Announcement; // 0x08(0x40)
	struct TArray<struct FName> AnnouncementGroups; // 0x48(0x10)
	bool Block; // 0x58(0x01)
	char UnknownData_59[0x7]; // 0x59(0x07)
};

// ScriptStruct Killstreak.Announcement
// Size: 0x40 (Inherited: 0x00)
struct FAnnouncement {
	struct UAkAudioEvent* AkEvent; // 0x00(0x08)
	struct UAkAudioEvent* AltAkEvent; // 0x08(0x08)
	float Priority; // 0x10(0x04)
	float Lifetime; // 0x14(0x04)
	float ValidUntil; // 0x18(0x04)
	float Delay; // 0x1c(0x04)
	float Lockout; // 0x20(0x04)
	float RTPC; // 0x24(0x04)
	int32_t TeamNum; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct FSerializedMctsNetId PlayerId; // 0x30(0x08)
	struct UAkAudioEvent* TargetPlayerAkEvent; // 0x38(0x08)
};

// ScriptStruct Killstreak.AnnouncementList
// Size: 0x88 (Inherited: 0x70)
struct FAnnouncementList : public FSizedArraySerializer {
	struct TArray<struct FAnnouncementItem> Items; // 0x70(0x10)
	char UnknownData_80[0x8]; // 0x80(0x08)
};

// ScriptStruct Killstreak.AnnouncementItem
// Size: 0x40 (Inherited: 0x01)
struct FAnnouncementItem : public FReplicatedLogItem {
	struct FAnnouncement Announcement; // 0x00(0x40)
};

// ScriptStruct Killstreak.AppliedApparelKey
// Size: 0x04 (Inherited: 0x00)
struct FAppliedApparelKey {
	int32_t ID; // 0x00(0x04)
};

// ScriptStruct Killstreak.KSAudioEventTableRow
// Size: 0x10 (Inherited: 0x08)
struct FKSAudioEventTableRow : public FTableRowBase {
	struct UAkAudioEvent* AkEvent; // 0x08(0x08)
};

// ScriptStruct Killstreak.ArrayAsMapValue
// Size: 0x10 (Inherited: 0x00)
struct FArrayAsMapValue {
	struct TArray<struct FString> StringArray; // 0x00(0x10)
};

// ScriptStruct Killstreak.PlayerCombatInfo
// Size: 0x20 (Inherited: 0x00)
struct FPlayerCombatInfo {
	int32_t PlayerId; // 0x00(0x04)
	int32_t PlayerTeamNum; // 0x04(0x04)
	struct AKSPlayerState* PlayerState; // 0x08(0x08)
	struct AKSPlayerState* PlayerVictim; // 0x10(0x08)
	float TimeLeft; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Killstreak.KSBotAbilityTableRow
// Size: 0x40 (Inherited: 0x08)
struct FKSBotAbilityTableRow : public FTableRowBase {
	struct TSoftObjectPtr<struct UKSPlayerMod> Ability; // 0x08(0x28)
	struct TArray<struct UKSBTAction*> RequiredActions; // 0x30(0x10)
};

// ScriptStruct Killstreak.KSBotJobConfig
// Size: 0x58 (Inherited: 0x00)
struct FKSBotJobConfig {
	bool bAllowJob; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct TMap<struct TSoftObjectPtr<struct UKSSkinBundle>, int32_t> AllowedAlternateSkins; // 0x08(0x50)
};

// ScriptStruct Killstreak.KSBotEquipmentSkinTableRow
// Size: 0x18 (Inherited: 0x08)
struct FKSBotEquipmentSkinTableRow : public FTableRowBase {
	struct FGameplayTag EquipPointTag; // 0x08(0x08)
	struct UDataTable* SkinTable; // 0x10(0x08)
};

// ScriptStruct Killstreak.KSBotCharacterSkinTableRow
// Size: 0x38 (Inherited: 0x08)
struct FKSBotCharacterSkinTableRow : public FTableRowBase {
	struct TSoftObjectPtr<struct UKSJobItem> JobItem; // 0x08(0x28)
	struct UDataTable* SkinTable; // 0x30(0x08)
};

// ScriptStruct Killstreak.KSBotSkinTableRow
// Size: 0x38 (Inherited: 0x08)
struct FKSBotSkinTableRow : public FTableRowBase {
	struct TSoftObjectPtr<struct UKSItem> Skin; // 0x08(0x28)
	int32_t Weight; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Killstreak.BotSpawnTableRow
// Size: 0x198 (Inherited: 0x08)
struct FBotSpawnTableRow : public FTableRowBase {
	SoftClassProperty Character; // 0x08(0x28)
	SoftClassProperty Controller; // 0x30(0x28)
	struct TSoftObjectPtr<struct UBehaviorTree> BehaviorTree1; // 0x58(0x28)
	struct UKSBTDifficulty* InitialDifficulty; // 0x80(0x08)
	struct UDataTable* DifficultyTable; // 0x88(0x08)
	bool AllowDynamicDifficulty; // 0x90(0x01)
	char UnknownData_91[0x7]; // 0x91(0x07)
	struct FKSBTDifficultyConfig SpawnDifficultyConfig; // 0x98(0x78)
	struct TArray<struct TSoftObjectPtr<struct UDataTable>> ItemLoadoutTables; // 0x110(0x10)
	struct UDataTable* ObjectivePriorityTable; // 0x120(0x08)
	struct UDataTable* ItemPriorityTable; // 0x128(0x08)
	struct FGameplayTagQuery AllowedJobQuery; // 0x130(0x48)
	struct UDataTable* AbilityTable; // 0x178(0x08)
	struct UDataTable* RandomCharacterSkinTable; // 0x180(0x08)
	struct UDataTable* RandomEquipmentSkinTable; // 0x188(0x08)
	bool bIsPlayer; // 0x190(0x01)
	bool bUseGameModeInventory; // 0x191(0x01)
	bool bDelayPawnUntilLoadoutComplete; // 0x192(0x01)
	char UnknownData_193[0x5]; // 0x193(0x05)
};

// ScriptStruct Killstreak.KSBTDifficultyConfig
// Size: 0x78 (Inherited: 0x00)
struct FKSBTDifficultyConfig {
	float AccuracyMultiplierStandard; // 0x00(0x04)
	float AccuracyMultiplierThrownMelee; // 0x04(0x04)
	float AccuracyMultiplierWhenBlinded; // 0x08(0x04)
	float AccuracyMultiplierWhenCrosshairHidden; // 0x0c(0x04)
	float NewTargetAccuracyMultiplier; // 0x10(0x04)
	float NewTargetTime; // 0x14(0x04)
	float SpeedMultiplier; // 0x18(0x04)
	float AttackDelayClipPercentMin; // 0x1c(0x04)
	float AttackDelayClipPercentMax; // 0x20(0x04)
	float AttackDelay; // 0x24(0x04)
	float DamageDealtMultiplier; // 0x28(0x04)
	float HeadshotDamageDealtMultiplier; // 0x2c(0x04)
	float DamageTakenMultiplier; // 0x30(0x04)
	float HeadshotDamageTakenMultiplier; // 0x34(0x04)
	float AimForHeadshotProbability; // 0x38(0x04)
	float DodgeRollProbability; // 0x3c(0x04)
	float StrafeProbability; // 0x40(0x04)
	float ThrowGrenadeProbability; // 0x44(0x04)
	float ThrowMeleeProbability; // 0x48(0x04)
	float PerceptionStrengthMin; // 0x4c(0x04)
	float PerceptionStrengthMax; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
	struct TArray<struct UKSBTAction*> AllowedActions; // 0x58(0x10)
	struct TArray<struct UKSBTAction*> DisallowedActions; // 0x68(0x10)
};

// ScriptStruct Killstreak.KSBTAbilityConditionTableRow
// Size: 0x40 (Inherited: 0x08)
struct FKSBTAbilityConditionTableRow : public FTableRowBase {
	struct TSoftObjectPtr<struct UKSPlayerMod> AbilityItem; // 0x08(0x28)
	struct UKSBTAbilityConditionValidator* AbilityConditionValidator; // 0x30(0x08)
	enum class EAbilityExecutionType AbilityExecutionType; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Killstreak.KSBTDifficultyTableRow
// Size: 0x90 (Inherited: 0x08)
struct FKSBTDifficultyTableRow : public FTableRowBase {
	struct UKSBTDifficulty* Difficulty; // 0x08(0x08)
	struct FKSBTDifficultyConfig DifficultyModifierConfig; // 0x10(0x78)
	struct UDataTable* ObjectivePriorityTable; // 0x88(0x08)
};

// ScriptStruct Killstreak.KSBTItemPriorityTableRow
// Size: 0x40 (Inherited: 0x08)
struct FKSBTItemPriorityTableRow : public FTableRowBase {
	struct TSoftObjectPtr<struct UKSItem> ItemAsset; // 0x08(0x28)
	float Weight; // 0x30(0x04)
	float ShopPurchaseWeight; // 0x34(0x04)
	float ShopPriorityGroup; // 0x38(0x04)
	float Multiplier; // 0x3c(0x04)
};

// ScriptStruct Killstreak.KSBTObjectivePriorityTableRow
// Size: 0x60 (Inherited: 0x08)
struct FKSBTObjectivePriorityTableRow : public FTableRowBase {
	struct UKSBTObjective* Objective; // 0x08(0x08)
	float MinDistance; // 0x10(0x04)
	float MaxDistance; // 0x14(0x04)
	float MaxSecondsElapsed; // 0x18(0x04)
	float MinSecondsElapsed; // 0x1c(0x04)
	float MaxSecondsRemaining; // 0x20(0x04)
	float MinSecondsRemaining; // 0x24(0x04)
	float Priority; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct TSoftObjectPtr<struct UKSPlayerMod>> RequiredAbilities; // 0x30(0x10)
	struct TArray<struct UKSBTTargetSelector*> ObjectiveValidationArray; // 0x40(0x10)
	struct UDataTable* TargetSelectionTable; // 0x50(0x08)
	struct UDataTable* OverrideDataTable; // 0x58(0x08)
};

// ScriptStruct Killstreak.KSBTTargetSelectionTableRow
// Size: 0x10 (Inherited: 0x08)
struct FKSBTTargetSelectionTableRow : public FTableRowBase {
	struct UKSBTTargetSelector* TargetSelector; // 0x08(0x08)
};

// ScriptStruct Killstreak.KSBTWeaponRangeTableRow
// Size: 0x58 (Inherited: 0x08)
struct FKSBTWeaponRangeTableRow : public FTableRowBase {
	struct FGameplayTagContainer WeaponTypes; // 0x08(0x20)
	SoftClassProperty WeaponClassOverride; // 0x28(0x28)
	float IdealAttackRange; // 0x50(0x04)
	float StartAttackRange; // 0x54(0x04)
};

// ScriptStruct Killstreak.KSInputAction
// Size: 0xc0 (Inherited: 0x00)
struct FKSInputAction {
	char UnknownData_0[0xc0]; // 0x00(0xc0)
};

// ScriptStruct Killstreak.KSInputActionMapping
// Size: 0x30 (Inherited: 0x00)
struct FKSInputActionMapping {
	char UnknownData_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Killstreak.KSShotgunHitChangeList
// Size: 0x88 (Inherited: 0x70)
struct FKSShotgunHitChangeList : public FReplicatedLog {
	struct TArray<struct FKSShotgunHitChangeItem> Items; // 0x70(0x10)
	char UnknownData_80[0x8]; // 0x80(0x08)
};

// ScriptStruct Killstreak.KSShotgunHitChangeItem
// Size: 0x10 (Inherited: 0x01)
struct FKSShotgunHitChangeItem : public FReplicatedLogItem {
	struct FCompressedShotgunHitData ShotgunHitData; // 0x00(0x10)
};

// ScriptStruct Killstreak.CompressedShotgunHitData
// Size: 0x10 (Inherited: 0x00)
struct FCompressedShotgunHitData {
	struct UKSWeaponAsset_Shotgun* ShotgunAsset; // 0x00(0x08)
	uint64_t CompressedHitResults; // 0x08(0x08)
};

// ScriptStruct Killstreak.AssistTag
// Size: 0x10 (Inherited: 0x00)
struct FAssistTag {
	float ExpirationTime; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct AKSPlayerState* Assistant; // 0x08(0x08)
};

// ScriptStruct Killstreak.VOTableRow
// Size: 0x38 (Inherited: 0x08)
struct FVOTableRow : public FTableRowBase {
	struct FGameplayTag VOEvent; // 0x08(0x08)
	struct TSoftObjectPtr<struct UAkAudioEvent> AudioEvent; // 0x10(0x28)
};

// ScriptStruct Killstreak.KSOutOfBoundsInfo
// Size: 0x08 (Inherited: 0x00)
struct FKSOutOfBoundsInfo {
	bool bOutOfBounds; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float WarningLength; // 0x04(0x04)
};

// ScriptStruct Killstreak.SmoothedComponentInfo
// Size: 0x30 (Inherited: 0x00)
struct FSmoothedComponentInfo {
	struct USceneComponent* Component; // 0x00(0x08)
	struct FVector InitialTranslationOffset; // 0x08(0x0c)
	char UnknownData_14[0xc]; // 0x14(0x0c)
	struct FQuat InitialRotationOffset; // 0x20(0x10)
};

// ScriptStruct Killstreak.CarriedInfo
// Size: 0x10 (Inherited: 0x00)
struct FCarriedInfo {
	bool bCarryInProgress; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct AKSCharacter* Hauler; // 0x08(0x08)
};

// ScriptStruct Killstreak.HaulingInfo
// Size: 0x10 (Inherited: 0x00)
struct FHaulingInfo {
	bool bHaulInProgress; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct AActor* CarriedActor; // 0x08(0x08)
};

// ScriptStruct Killstreak.ReviveInfo
// Size: 0x30 (Inherited: 0x00)
struct FReviveInfo {
	bool bIsBeingRevived; // 0x00(0x01)
	bool bRemoteRevive; // 0x01(0x01)
	bool bSelectedToRevive; // 0x02(0x01)
	bool bReviveGuaranteed; // 0x03(0x01)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct AKSPlayerState* Reviver; // 0x08(0x08)
	struct AKSCharacter* ReviverCharacter; // 0x10(0x08)
	struct FName ReviveeOverrideMontage; // 0x18(0x08)
	float ReviveProgress; // 0x20(0x04)
	float ReviveRate; // 0x24(0x04)
	float LocalReviveProgress; // 0x28(0x04)
	char RequestID; // 0x2c(0x01)
	char UnknownData_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct Killstreak.KSPendingWeaponStateUpdates
// Size: 0x0c (Inherited: 0x00)
struct FKSPendingWeaponStateUpdates {
	uint32_t BroadcastId; // 0x00(0x04)
	uint16_t nEquipmentId; // 0x04(0x02)
	struct FKSWeaponDataUpdateContainer UpdateData; // 0x06(0x04)
	char UnknownData_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct Killstreak.KSWeaponDataUpdateContainer
// Size: 0x04 (Inherited: 0x00)
struct FKSWeaponDataUpdateContainer {
	bool bChangeWeaponState; // 0x00(0x01)
	enum class EWeaponStateNew WeaponState; // 0x01(0x01)
	bool bChangeAimMode; // 0x02(0x01)
	enum class EKSCharacterAimMode AimMode; // 0x03(0x01)
};

// ScriptStruct Killstreak.KSInitialAmmo
// Size: 0x08 (Inherited: 0x00)
struct FKSInitialAmmo {
	enum class EAmmoType AmmoType; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	int32_t AmmoCount; // 0x04(0x04)
};

// ScriptStruct Killstreak.KSLootLockerItem
// Size: 0x20 (Inherited: 0x00)
struct FKSLootLockerItem {
	struct UKSWeaponAsset* WeaponAsset; // 0x00(0x08)
	struct UKSWeaponAttachment* Attachment1; // 0x08(0x08)
	struct UKSWeaponAttachment* Attachment2; // 0x10(0x08)
	struct UKSWeaponAttachment* Attachment3; // 0x18(0x08)
};

// ScriptStruct Killstreak.HitReaction
// Size: 0x14 (Inherited: 0x00)
struct FHitReaction {
	struct FVector WorldHitDirection; // 0x00(0x0c)
	float Damage; // 0x0c(0x04)
	float HitTime; // 0x10(0x04)
};

// ScriptStruct Killstreak.FloatHitSpringState
// Size: 0x08 (Inherited: 0x00)
struct FFloatHitSpringState {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Killstreak.KSCharacterSocketInfo
// Size: 0x70 (Inherited: 0x00)
struct FKSCharacterSocketInfo {
	struct FName SocketName; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
	struct FTransform RelativeTM; // 0x10(0x30)
	struct UKSCharacterSocketComponent* SocketComponent; // 0x40(0x08)
	struct USceneComponent* ParentComponent; // 0x48(0x08)
	struct FName ParentSocketName; // 0x50(0x08)
	enum class EKSSocketCrouchHandling CrouchHandlingType; // 0x58(0x01)
	char UnknownData_59[0x3]; // 0x59(0x03)
	struct FVector AdditiveCrouchOffset; // 0x5c(0x0c)
	char UnknownData_68[0x8]; // 0x68(0x08)
};

// ScriptStruct Killstreak.KSPowerSlideInfo
// Size: 0x02 (Inherited: 0x00)
struct FKSPowerSlideInfo {
	bool bIsInPowerSlide; // 0x00(0x01)
	enum class EKSPowerSlideEndReason EndReason; // 0x01(0x01)
};

// ScriptStruct Killstreak.KSLungeInfo
// Size: 0x10 (Inherited: 0x00)
struct FKSLungeInfo {
	struct AActor* LungeTarget; // 0x00(0x08)
	float MaxLungeDistance; // 0x08(0x04)
	float MaxLungeDuration; // 0x0c(0x04)
};

// ScriptStruct Killstreak.KSZipLineInfo
// Size: 0x10 (Inherited: 0x00)
struct FKSZipLineInfo {
	struct AKSZipLine* Zipline; // 0x00(0x08)
	bool bZipLineReverse; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Killstreak.KSMantleInfo
// Size: 0x44 (Inherited: 0x00)
struct FKSMantleInfo {
	bool bIsMantling; // 0x00(0x01)
	bool bVaultingOver; // 0x01(0x01)
	char UnknownData_2[0x2]; // 0x02(0x02)
	float ApproachDist; // 0x04(0x04)
	float MantleHeight; // 0x08(0x04)
	float ForwardDist; // 0x0c(0x04)
	float VaultDrop; // 0x10(0x04)
	float MantleUpDuration; // 0x14(0x04)
	float VaultAcrossDuration; // 0x18(0x04)
	float VaultDownDuration; // 0x1c(0x04)
	struct FName MantleName; // 0x20(0x08)
	struct FVector WorldSpaceGrabLocation; // 0x28(0x0c)
	struct FVector WorldTowardsWallDir; // 0x34(0x0c)
	bool bFromStanding; // 0x40(0x01)
	char UnknownData_41[0x3]; // 0x41(0x03)
};

// ScriptStruct Killstreak.KSDeathInfo
// Size: 0x28 (Inherited: 0x00)
struct FKSDeathInfo {
	enum class EKSDeathState DeathState; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct UDamageType* DamageType; // 0x08(0x08)
	struct FVector DamageDirection; // 0x10(0x0c)
	float FinalBlowDamage; // 0x1c(0x04)
	bool bImmediateRagdoll; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Killstreak.ChildBodyCollisionProfileCache
// Size: 0x0c (Inherited: 0x00)
struct FChildBodyCollisionProfileCache {
	int32_t BodyIndex; // 0x00(0x04)
	struct FName CollisionProfileName; // 0x04(0x08)
};

// ScriptStruct Killstreak.KSChildPhysicsAssetKeywords
// Size: 0x18 (Inherited: 0x00)
struct FKSChildPhysicsAssetKeywords {
	struct FName AssetKeyword; // 0x00(0x08)
	struct FName CollisionProfileKeyword; // 0x08(0x08)
	struct FName SimulatePhysicsKeyword; // 0x10(0x08)
};

// ScriptStruct Killstreak.ItemTableElement
// Size: 0x30 (Inherited: 0x08)
struct FItemTableElement : public FTableRowBase {
	struct TSoftObjectPtr<struct UKSItem> Item; // 0x08(0x28)
};

// ScriptStruct Killstreak.CharacterArray
// Size: 0x50 (Inherited: 0x00)
struct FCharacterArray {
	struct TArray<struct FVector> Positions; // 0x00(0x10)
	struct TArray<struct FCombatEvent> CombatEvents; // 0x10(0x10)
	struct TArray<struct Frevive> Revives; // 0x20(0x10)
	struct TArray<struct Fassist> Assists; // 0x30(0x10)
	struct TArray<struct Fadvcombat> AdvCombats; // 0x40(0x10)
};

// ScriptStruct Killstreak.advcombat
// Size: 0x0c (Inherited: 0x00)
struct Fadvcombat {
	struct FVector Location; // 0x00(0x0c)
};

// ScriptStruct Killstreak.assist
// Size: 0x0c (Inherited: 0x00)
struct Fassist {
	struct FVector Location; // 0x00(0x0c)
};

// ScriptStruct Killstreak.revive
// Size: 0x0c (Inherited: 0x00)
struct Frevive {
	struct FVector Location; // 0x00(0x0c)
};

// ScriptStruct Killstreak.CombatEvent
// Size: 0x14 (Inherited: 0x00)
struct FCombatEvent {
	struct FVector Location; // 0x00(0x0c)
	bool Fatal; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
	float Damage; // 0x10(0x04)
};

// ScriptStruct Killstreak.CurrencyImageRow
// Size: 0x60 (Inherited: 0x08)
struct FCurrencyImageRow : public FTableRowBase {
	int32_t Quantity; // 0x08(0x04)
	int32_t BonusQuantity; // 0x0c(0x04)
	struct TSoftObjectPtr<struct UTexture2D> Image; // 0x10(0x28)
	struct TSoftObjectPtr<struct UTexture2D> FullSplashImage; // 0x38(0x28)
};

// ScriptStruct Killstreak.KSFlashBangRecord
// Size: 0x08 (Inherited: 0x00)
struct FKSFlashBangRecord {
	enum class EFlashBangIntensity FlashBangIntensity; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float Timestamp; // 0x04(0x04)
};

// ScriptStruct Killstreak.WeaponTypeToAntiCheatId
// Size: 0x0c (Inherited: 0x00)
struct FWeaponTypeToAntiCheatId {
	struct FGameplayTag WeaponType; // 0x00(0x08)
	uint16_t AntiCheatId; // 0x08(0x02)
	char UnknownData_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct Killstreak.KSEmoteInterruptTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FKSEmoteInterruptTickFunction : public FTickFunction {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Killstreak.KSEmoteConversionEntry
// Size: 0x0c (Inherited: 0x00)
struct FKSEmoteConversionEntry {
	struct FName EmotionName; // 0x00(0x08)
	enum class EKSEmotion EmotionEnum; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Killstreak.EncounterManagedBotInstance
// Size: 0x48 (Inherited: 0x00)
struct FEncounterManagedBotInstance {
	char UnknownData_0[0x48]; // 0x00(0x48)
};

// ScriptStruct Killstreak.KSEquipmentCommonDummyStruct
// Size: 0x01 (Inherited: 0x00)
struct FKSEquipmentCommonDummyStruct {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Killstreak.KSEquipmentContainer
// Size: 0x1f0 (Inherited: 0x108)
struct FKSEquipmentContainer : public FFastArraySerializer {
	struct AActor* Owner; // 0x108(0x08)
	struct TMap<uint16_t, struct FKSEquipmentContainerEntry> PendingEquipment; // 0x110(0x50)
	struct TArray<struct FKSEquipmentContainerEntry> Equipment; // 0x160(0x10)
	uint16_t NextEquipmentId; // 0x170(0x02)
	char UnknownData_172[0x6]; // 0x172(0x06)
	struct TArray<struct FKSEquipmentContainerEntry> StaleEquipment; // 0x178(0x10)
	char UnknownData_188[0x68]; // 0x188(0x68)
};

// ScriptStruct Killstreak.KSEquipmentContainerEntry
// Size: 0xb8 (Inherited: 0x0c)
struct FKSEquipmentContainerEntry : public FFastArraySerializerItem {
	uint16_t EquipmentId; // 0x0c(0x02)
	char UnknownData_E[0x2]; // 0x0e(0x02)
	uint16_t ParentEquipmentId; // 0x10(0x02)
	char UnknownData_12[0x2]; // 0x12(0x02)
	struct FGameplayTag EquipPoint; // 0x14(0x08)
	char UnknownData_1C[0x8]; // 0x1c(0x08)
	bool bAlwaysReplicateExtraInfo; // 0x24(0x01)
	char UnknownData_25[0x1]; // 0x25(0x01)
	uint16_t ExtraInfo; // 0x26(0x02)
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct UKSItem* Item; // 0x30(0x08)
	struct UKSItem* LocalItem; // 0x38(0x08)
	bool bWeaponComponentIsReplicated; // 0x40(0x01)
	char UnknownData_41[0x3]; // 0x41(0x03)
	struct FWeakObjectPtr<struct UKSEquipmentCosmeticComponent> CosmeticComponent; // 0x44(0x08)
	struct FWeakObjectPtr<struct UKSWeaponAttachmentCosmeticInst> AttachmentCosmeticComponent; // 0x4c(0x08)
	bool bMarkedStale; // 0x54(0x01)
	char UnknownData_55[0x3b]; // 0x55(0x3b)
	struct TSoftObjectPtr<struct UKSItem> ParentAsset; // 0x90(0x28)
};

// ScriptStruct Killstreak.KSGameHUDSettings
// Size: 0x18 (Inherited: 0x00)
struct FKSGameHUDSettings {
	bool ShouldShowEnemyCaptureProgress; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct UUserWidget* GameModeWidget; // 0x08(0x08)
	bool ShowRoundEndResults; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Killstreak.LoadingScreenImageRow
// Size: 0x90 (Inherited: 0x08)
struct FLoadingScreenImageRow : public FTableRowBase {
	struct FSoftObjectPath Map; // 0x08(0x18)
	struct TSoftObjectPtr<struct UTexture2D> LoadingScreenImage; // 0x20(0x28)
	struct FText MapDisplayName; // 0x48(0x18)
	struct FText MapRegion; // 0x60(0x18)
	struct FText MapDescription; // 0x78(0x18)
};

// ScriptStruct Killstreak.LoadingScreenTipTextRow
// Size: 0x28 (Inherited: 0x08)
struct FLoadingScreenTipTextRow : public FTableRowBase {
	struct FText TipText; // 0x08(0x18)
	bool IsStaticTip; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Killstreak.KSEventAssistants
// Size: 0x10 (Inherited: 0x00)
struct FKSEventAssistants {
	struct TArray<struct APlayerState*> Assistants; // 0x00(0x10)
};

// ScriptStruct Killstreak.KSPlayerProfile
// Size: 0x28 (Inherited: 0x20)
struct FKSPlayerProfile : public FPGame_PlayerProfile {
	int32_t TeamNumber; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Killstreak.KSLootRaritySwapInfo
// Size: 0x0c (Inherited: 0x00)
struct FKSLootRaritySwapInfo {
	float Chance; // 0x00(0x04)
	int32_t Amount; // 0x04(0x04)
	enum class ELootSiteRarity OldRarity; // 0x08(0x01)
	enum class ELootSiteRarity NewRarity; // 0x09(0x01)
	char UnknownData_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct Killstreak.KSLootGroupGuaranteeMap
// Size: 0x58 (Inherited: 0x00)
struct FKSLootGroupGuaranteeMap {
	int32_t TotalLootSitesActive; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TMap<char, struct FKSLootGroupGuarantee> GuaranteeMap; // 0x08(0x50)
};

// ScriptStruct Killstreak.KSLootGroupGuarantee
// Size: 0x18 (Inherited: 0x00)
struct FKSLootGroupGuarantee {
	int32_t Quantity; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<int32_t> ObjectiveLootGroups; // 0x08(0x10)
};

// ScriptStruct Killstreak.RoyaleZoneData
// Size: 0x14 (Inherited: 0x00)
struct FRoyaleZoneData {
	float ZoneRadius; // 0x00(0x04)
	float TimeToShrink; // 0x04(0x04)
	float TimeAfterShrink; // 0x08(0x04)
	float DamagePerTick; // 0x0c(0x04)
	float DamageTickPeriod; // 0x10(0x04)
};

// ScriptStruct Killstreak.KSPlayerIdentitiesContainer
// Size: 0x120 (Inherited: 0x108)
struct FKSPlayerIdentitiesContainer : public FFastArraySerializer {
	struct TArray<struct FKSPlayerIdentityData> ReplicatedData; // 0x108(0x10)
	char UnknownData_118[0x8]; // 0x118(0x08)
};

// ScriptStruct Killstreak.KSPlayerIdentityData
// Size: 0xc0 (Inherited: 0x0c)
struct FKSPlayerIdentityData : public FFastArraySerializerItem {
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FKSPersistentPlayerId ID; // 0x10(0x10)
	struct TSoftObjectPtr<struct UKSItem> avatar; // 0x20(0x28)
	struct TSoftObjectPtr<struct UKSItem> Banner; // 0x48(0x28)
	struct TSoftObjectPtr<struct UKSItem> Border; // 0x70(0x28)
	struct TSoftObjectPtr<struct UKSItem> Title; // 0x98(0x28)
};

// ScriptStruct Killstreak.KSPersistentPlayerId
// Size: 0x10 (Inherited: 0x00)
struct FKSPersistentPlayerId {
	struct FSerializedMctsNetId NetId; // 0x00(0x08)
	int32_t EngineId; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Killstreak.KSLootRarityTimerPair
// Size: 0x10 (Inherited: 0x00)
struct FKSLootRarityTimerPair {
	enum class ELootSiteRarity Rarity; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct UKSTimerComponent* Timer; // 0x08(0x08)
};

// ScriptStruct Killstreak.AssistEventList
// Size: 0x88 (Inherited: 0x70)
struct FAssistEventList : public FSizedArraySerializer {
	struct TArray<struct FAssistEventItem> Items; // 0x70(0x10)
	char UnknownData_80[0x8]; // 0x80(0x08)
};

// ScriptStruct Killstreak.AssistEventItem
// Size: 0x28 (Inherited: 0x01)
struct FAssistEventItem : public FReplicatedLogItem {
	struct FAssistInfo AssistInfo; // 0x00(0x28)
};

// ScriptStruct Killstreak.RadialMenuItemEventList
// Size: 0x88 (Inherited: 0x70)
struct FRadialMenuItemEventList : public FSizedArraySerializer {
	struct TArray<struct FRadialMenuItemEventItem> Items; // 0x70(0x10)
	char UnknownData_80[0x8]; // 0x80(0x08)
};

// ScriptStruct Killstreak.RadialMenuItemEventItem
// Size: 0x10 (Inherited: 0x01)
struct FRadialMenuItemEventItem : public FReplicatedLogItem {
	struct FRadialMenuItemEventInfo RadialMenuItemEvent; // 0x00(0x10)
};

// ScriptStruct Killstreak.CombatEventList
// Size: 0x88 (Inherited: 0x70)
struct FCombatEventList : public FSizedArraySerializer {
	struct TArray<struct FCombatEventItem> Items; // 0x70(0x10)
	char UnknownData_80[0x8]; // 0x80(0x08)
};

// ScriptStruct Killstreak.CombatEventItem
// Size: 0x60 (Inherited: 0x01)
struct FCombatEventItem : public FReplicatedLogItem {
	struct FCombatEventInfo CombatEvent; // 0x00(0x60)
};

// ScriptStruct Killstreak.ReviveEventList
// Size: 0x88 (Inherited: 0x70)
struct FReviveEventList : public FSizedArraySerializer {
	struct TArray<struct FReviveEventItem> Items; // 0x70(0x10)
	char UnknownData_80[0x8]; // 0x80(0x08)
};

// ScriptStruct Killstreak.ReviveEventItem
// Size: 0x14 (Inherited: 0x01)
struct FReviveEventItem : public FReplicatedLogItem {
	struct FReviveEvent ReviveEvent; // 0x00(0x14)
};

// ScriptStruct Killstreak.ReviveEvent
// Size: 0x14 (Inherited: 0x00)
struct FReviveEvent {
	struct FWeakObjectPtr<struct AKSPlayerState> Reviver; // 0x00(0x08)
	struct FWeakObjectPtr<struct AKSPlayerState> Revivee; // 0x08(0x08)
	int32_t ExpBonus; // 0x10(0x04)
};

// ScriptStruct Killstreak.KSTeamCashPair
// Size: 0x08 (Inherited: 0x00)
struct FKSTeamCashPair {
	int32_t TeamNum; // 0x00(0x04)
	int32_t Cash; // 0x04(0x04)
};

// ScriptStruct Killstreak.ReplicatedRoundInfo
// Size: 0x0c (Inherited: 0x00)
struct FReplicatedRoundInfo {
	struct FName RoundState; // 0x00(0x08)
	char RoundNumber; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Killstreak.PlayerHealthMeterState
// Size: 0x18 (Inherited: 0x00)
struct FPlayerHealthMeterState {
	int32_t HealthValue; // 0x00(0x04)
	int32_t MaxHealth; // 0x04(0x04)
	int32_t MaxHealthBonus; // 0x08(0x04)
	int32_t ArmorValue; // 0x0c(0x04)
	int32_t OverhealValue; // 0x10(0x04)
	bool IsDowned; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Killstreak.KSWidgetInfoParams
// Size: 0x48 (Inherited: 0x00)
struct FKSWidgetInfoParams {
	SoftClassProperty Widget; // 0x00(0x28)
	bool bPreloadWidget; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct FString WidgetParentTarget; // 0x30(0x10)
	struct AKSWidgetInfoActor* InfoActor; // 0x40(0x08)
};

// ScriptStruct Killstreak.InMatchStoreFilterInfo
// Size: 0x30 (Inherited: 0x00)
struct FInMatchStoreFilterInfo {
	bool LookingForAttachment; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct AKSWeapon* WeaponToAttach; // 0x08(0x08)
	int32_t AttachmentIndex; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct UKSItem* ItemAlreadyInSlot; // 0x18(0x08)
	struct FGameplayTag SlotTag; // 0x20(0x08)
	struct FName ItemCategory; // 0x28(0x08)
};

// ScriptStruct Killstreak.KSInteractionBlocker
// Size: 0x08 (Inherited: 0x00)
struct FKSInteractionBlocker {
	struct FName BlockReason; // 0x00(0x08)
};

// ScriptStruct Killstreak.KSInteractableCameraTransition
// Size: 0x30 (Inherited: 0x00)
struct FKSInteractableCameraTransition {
	struct FName CameraName; // 0x00(0x08)
	float TransitionInTime; // 0x08(0x04)
	char TransitionInFunction; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
	float TransitionInExp; // 0x10(0x04)
	float TransitionOutTime; // 0x14(0x04)
	bool bForceCameraShoulder; // 0x18(0x01)
	enum class ECameraShoulder CameraShoulder; // 0x19(0x01)
	char UnknownData_1A[0x2]; // 0x1a(0x02)
	float RotationLockAngle; // 0x1c(0x04)
	bool RotationLockout; // 0x20(0x01)
	bool bLockPitch; // 0x21(0x01)
	bool bLockYaw; // 0x22(0x01)
	bool bCameraShake; // 0x23(0x01)
	char UnknownData_24[0x4]; // 0x24(0x04)
	struct UCameraShake* CameraShake; // 0x28(0x08)
};

// ScriptStruct Killstreak.SkinnableAudioEvent
// Size: 0x10 (Inherited: 0x00)
struct FSkinnableAudioEvent {
	struct FName SoundRowName; // 0x00(0x08)
	struct UAkAudioEvent* DefaultSound; // 0x08(0x08)
};

// ScriptStruct Killstreak.ItemDisplayStat
// Size: 0x38 (Inherited: 0x00)
struct FItemDisplayStat {
	struct FText DisplayText; // 0x00(0x18)
	float Value; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FItemDisplayStatParams StatProperties; // 0x20(0x18)
};

// ScriptStruct Killstreak.ItemDisplayStatParams
// Size: 0x18 (Inherited: 0x08)
struct FItemDisplayStatParams : public FTableRowBase {
	float RangeMin; // 0x08(0x04)
	float RangeMax; // 0x0c(0x04)
	bool ShowsBar; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Killstreak.KSItemMasterTableRow
// Size: 0x48 (Inherited: 0x08)
struct FKSItemMasterTableRow : public FTableRowBase {
	struct FString ItemDisplayName; // 0x08(0x10)
	int32_t ItemId; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct TSoftObjectPtr<struct UKSItem> KSItemSoftObject; // 0x20(0x28)
};

// ScriptStruct Killstreak.KSJobSelectionAllowUnownedJobs
// Size: 0x20 (Inherited: 0x00)
struct FKSJobSelectionAllowUnownedJobs {
	enum class EAllowUnownedJobsState AllowUnownedJobsState; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct TArray<int32_t> AllowedUnownedJobIds; // 0x08(0x10)
	bool IsInitializationFinished; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Killstreak.JobSelectionList
// Size: 0x120 (Inherited: 0x108)
struct FJobSelectionList : public FFastArraySerializer {
	struct TArray<struct FJobSelectionEntry> EntryMap; // 0x108(0x10)
	struct UKSJobSelectionComponent* Owner; // 0x118(0x08)
};

// ScriptStruct Killstreak.PreviewActorPropSkinInfo
// Size: 0x48 (Inherited: 0x00)
struct FPreviewActorPropSkinInfo {
	struct UKSItem* Prop; // 0x00(0x08)
	bool bIsSet; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct UKSItem* LastSetSkin; // 0x10(0x08)
	struct UKSItem* ActiveSkin; // 0x18(0x08)
	char UnknownData_20[0x10]; // 0x20(0x10)
	struct UKSItem* PendingSkin; // 0x30(0x08)
	char UnknownData_38[0x10]; // 0x38(0x10)
};

// ScriptStruct Killstreak.WeaponWrapTestPairs
// Size: 0x30 (Inherited: 0x00)
struct FWeaponWrapTestPairs {
	struct FSoftObjectPath Weapon; // 0x00(0x18)
	struct FSoftObjectPath Attachment; // 0x18(0x18)
};

// ScriptStruct Killstreak.TrackedPlayers
// Size: 0x18 (Inherited: 0x00)
struct FTrackedPlayers {
	int32_t PlayerId; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct AKSPlayerState* PlayerState; // 0x08(0x08)
	int32_t KillCount; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Killstreak.ActiveWeaponPropBase
// Size: 0x68 (Inherited: 0x00)
struct FActiveWeaponPropBase {
	char UnknownData_0[0x10]; // 0x00(0x10)
	struct USkinnableSkeletalMeshComponent* SkelMeshComp; // 0x10(0x08)
	char UnknownData_18[0x50]; // 0x18(0x50)
};

// ScriptStruct Killstreak.LegacyWeaponProp
// Size: 0xf0 (Inherited: 0x68)
struct FLegacyWeaponProp : public FActiveWeaponPropBase {
	char UnknownData_68[0x8]; // 0x68(0x08)
	struct FLobbySkeletalPropInfo LegacyInfo; // 0x70(0x80)
};

// ScriptStruct Killstreak.LobbySkeletalPropInfo
// Size: 0x80 (Inherited: 0x00)
struct FLobbySkeletalPropInfo {
	bool Enable; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FSoftObjectPath WeaponAsset; // 0x08(0x18)
	struct FName AttachPoint; // 0x20(0x08)
	struct UAnimInstance* AnimInstance; // 0x28(0x08)
	struct UAnimMontage* Montage; // 0x30(0x08)
	int32_t TargetLOD; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct FTransform TransformOffset; // 0x40(0x30)
	int32_t WeaponAnimIndex; // 0x70(0x04)
	char UnknownData_74[0xc]; // 0x74(0x0c)
};

// ScriptStruct Killstreak.ActiveWeaponProp
// Size: 0x88 (Inherited: 0x68)
struct FActiveWeaponProp : public FActiveWeaponPropBase {
	char UnknownData_68[0x20]; // 0x68(0x20)
};

// ScriptStruct Killstreak.PropIdentifier
// Size: 0x10 (Inherited: 0x00)
struct FPropIdentifier {
	struct FName PropIdentifierName; // 0x00(0x08)
	struct FWeakObjectPtr<struct USkeletalMeshComponent> SkelMeshComp; // 0x08(0x08)
};

// ScriptStruct Killstreak.LootSiteTableRow
// Size: 0xb0 (Inherited: 0x08)
struct FLootSiteTableRow : public FTableRowBase {
	struct TSoftObjectPtr<struct UKSItem> Item; // 0x08(0x28)
	struct TSoftObjectPtr<struct UKSWeaponAttachment> Attachment1; // 0x30(0x28)
	struct TSoftObjectPtr<struct UKSWeaponAttachment> Attachment2; // 0x58(0x28)
	struct TSoftObjectPtr<struct UKSWeaponAttachment> Attachment3; // 0x80(0x28)
	float Weight; // 0xa8(0x04)
	float ChanceToSkipAttachment; // 0xac(0x04)
};

// ScriptStruct Killstreak.LootSiteDropInfo
// Size: 0x30 (Inherited: 0x00)
struct FLootSiteDropInfo {
	struct UKSItem* Item; // 0x00(0x08)
	struct UKSWeaponAttachment* Attachment1; // 0x08(0x08)
	struct UKSWeaponAttachment* Attachment2; // 0x10(0x08)
	struct UKSWeaponAttachment* Attachment3; // 0x18(0x08)
	float Weight; // 0x20(0x04)
	float ChanceToSkipAttachment; // 0x24(0x04)
	bool bRandomizeAttachments; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Killstreak.MantleConfig
// Size: 0xa8 (Inherited: 0x00)
struct FMantleConfig {
	struct FName MantleSequenceName; // 0x00(0x08)
	struct UAnimSequence* DefaultMantleSequence; // 0x08(0x08)
	enum class EKSMantleScaleType DistanceScaleMethod; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	float IdealHeight; // 0x14(0x04)
	float MaxHeight; // 0x18(0x04)
	float DefaultMinHeight; // 0x1c(0x04)
	float ShaveCutoffTime; // 0x20(0x04)
	bool bHasDropSegment; // 0x24(0x01)
	bool bUseOnJump; // 0x25(0x01)
	bool bCanStartWhileFalling; // 0x26(0x01)
	char UnknownData_27[0x1]; // 0x27(0x01)
	float EarlyOutTime; // 0x28(0x04)
	bool bCanEndWithStand; // 0x2c(0x01)
	bool bCanEndWithSlide; // 0x2d(0x01)
	bool bCanEndWithFall; // 0x2e(0x01)
	char UnknownData_2F[0x49]; // 0x2f(0x49)
	struct UAnimSequence* CachedSequence; // 0x78(0x08)
	char UnknownData_80[0x28]; // 0x80(0x28)
};

// ScriptStruct Killstreak.MatchRecord
// Size: 0x150 (Inherited: 0x00)
struct FMatchRecord {
	int32_t version_major; // 0x00(0x04)
	int32_t version_minor; // 0x04(0x04)
	int32_t instance_id; // 0x08(0x04)
	int32_t match_id; // 0x0c(0x04)
	struct FString map_name; // 0x10(0x10)
	struct FString mode_name; // 0x20(0x10)
	int32_t map_game_id; // 0x30(0x04)
	int32_t queue_id; // 0x34(0x04)
	int32_t team_size; // 0x38(0x04)
	int32_t winning_team; // 0x3c(0x04)
	struct FString match_start_time; // 0x40(0x10)
	struct FString match_end_time; // 0x50(0x10)
	int32_t Duration; // 0x60(0x04)
	int32_t total_rounds; // 0x64(0x04)
	int32_t total_players; // 0x68(0x04)
	int32_t total_bots; // 0x6c(0x04)
	int32_t total_earned; // 0x70(0x04)
	int32_t total_spent; // 0x74(0x04)
	int32_t total_on_time; // 0x78(0x04)
	int32_t total_deserters; // 0x7c(0x04)
	int32_t total_deserter_rounds; // 0x80(0x04)
	int32_t total_surrender_polls; // 0x84(0x04)
	bool ended_in_surrender; // 0x88(0x01)
	char UnknownData_89[0x3]; // 0x89(0x03)
	int32_t total_penalized_players; // 0x8c(0x04)
	struct FMinimapData Minimap; // 0x90(0x20)
	struct TArray<struct FPlayerRecord> Players; // 0xb0(0x10)
	struct TArray<struct FJobSelectionRecord> job_selection_records; // 0xc0(0x10)
	struct TMap<int32_t, struct FClientContextRecord> client_context_records; // 0xd0(0x50)
	struct TArray<struct FRoundEventRecord> rounds; // 0x120(0x10)
	struct TArray<struct FPlayerConnectionEventRecord> player_connections; // 0x130(0x10)
	struct TArray<struct FObjectiveCaptureEventRecord> objective_capture_events; // 0x140(0x10)
};

// ScriptStruct Killstreak.ObjectiveCaptureEventRecord
// Size: 0x60 (Inherited: 0x00)
struct FObjectiveCaptureEventRecord {
	int32_t hz_player_id; // 0x00(0x04)
	int32_t ue_player_id; // 0x04(0x04)
	int32_t team_id; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString mode_name; // 0x10(0x10)
	int32_t round_id; // 0x20(0x04)
	int32_t objective_type; // 0x24(0x04)
	struct FString capture_action; // 0x28(0x10)
	struct FLocationRecord Location; // 0x38(0x0c)
	struct FRotationRecord Rotation; // 0x44(0x08)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
	struct FString Timestamp; // 0x50(0x10)
};

// ScriptStruct Killstreak.RotationRecord
// Size: 0x08 (Inherited: 0x00)
struct FRotationRecord {
	float Yaw; // 0x00(0x04)
	float Pitch; // 0x04(0x04)
};

// ScriptStruct Killstreak.LocationRecord
// Size: 0x0c (Inherited: 0x00)
struct FLocationRecord {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
	float Z; // 0x08(0x04)
};

// ScriptStruct Killstreak.PlayerConnectionEventRecord
// Size: 0x20 (Inherited: 0x00)
struct FPlayerConnectionEventRecord {
	int32_t hz_player_id; // 0x00(0x04)
	int32_t ue_player_id; // 0x04(0x04)
	int32_t round_id; // 0x08(0x04)
	int8_t is_connected; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
	struct FString Timestamp; // 0x10(0x10)
};

// ScriptStruct Killstreak.RoundEventRecord
// Size: 0x1b8 (Inherited: 0x00)
struct FRoundEventRecord {
	int32_t round_id; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FString round_start_time; // 0x08(0x10)
	int32_t Duration; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FTeamSideRecord> team_sides; // 0x20(0x10)
	int32_t winning_team; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
	struct FString win_condition; // 0x38(0x10)
	struct TArray<struct FMirrorMatchupRecord> mirror_matchup_records; // 0x48(0x10)
	struct TArray<struct FPlayerStartingCashRecord> round_starting_cash; // 0x58(0x10)
	struct TArray<struct FPurchasedItemEventRecord> purchased_item_events; // 0x68(0x10)
	struct TArray<struct FCashCollectionEventRecord> cash_collection_events; // 0x78(0x10)
	struct TArray<struct FDownEventRecord> down_events; // 0x88(0x10)
	struct TArray<struct FExecuteEventRecord> execute_events; // 0x98(0x10)
	struct TArray<struct FReviveEventRecord> revive_events; // 0xa8(0x10)
	struct TArray<struct FWeaponUseSummaryRecord> weapon_use_summaries; // 0xb8(0x10)
	struct TArray<struct FAbilityUseEventRecord> ability_use_events; // 0xc8(0x10)
	struct TArray<struct FRadialMenuItemUseEventRecord> radial_menu_item_use_events; // 0xd8(0x10)
	struct TArray<struct FCommunicationUseEventRecord> communication_use_events; // 0xe8(0x10)
	struct TArray<struct FGadgetUseEventRecord> gadget_use_events; // 0xf8(0x10)
	struct TArray<struct FEliminationStreakEventRecord> elimination_streak_events; // 0x108(0x10)
	struct TArray<struct FMultipleKillEventRecord> multiple_kill_events; // 0x118(0x10)
	struct TArray<struct FBotStartingDifficultyRecord> round_starting_bot_difficulties; // 0x128(0x10)
	struct TArray<struct FBotDifficultyChangeEventRecord> bot_difficulty_change_events; // 0x138(0x10)
	struct TArray<struct FOrientationEventRecord> orientation_events; // 0x148(0x10)
	struct TArray<struct FPollEndEventRecord> poll_end_events; // 0x158(0x10)
	struct TMap<int32_t, struct FRoundClientInputTypeUse> client_input_use; // 0x168(0x50)
};

// ScriptStruct Killstreak.RoundClientInputTypeUse
// Size: 0x08 (Inherited: 0x00)
struct FRoundClientInputTypeUse {
	int16_t input_type_kbm; // 0x00(0x02)
	int16_t input_type_gpad; // 0x02(0x02)
	int16_t input_type_touch; // 0x04(0x02)
	int16_t input_type_other; // 0x06(0x02)
};

// ScriptStruct Killstreak.PollEndEventRecord
// Size: 0x60 (Inherited: 0x00)
struct FPollEndEventRecord {
	int32_t round_id; // 0x00(0x04)
	bool poll_passed; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
	struct FString poll_name; // 0x08(0x10)
	int32_t team_id; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct TArray<int32_t> hz_player_ids_for; // 0x20(0x10)
	struct TArray<int32_t> hz_player_ids_against; // 0x30(0x10)
	struct FString game_phase; // 0x40(0x10)
	struct FString Timestamp; // 0x50(0x10)
};

// ScriptStruct Killstreak.OrientationEventRecord
// Size: 0x88 (Inherited: 0x00)
struct FOrientationEventRecord {
	int32_t ue_player_id; // 0x00(0x04)
	struct FLocationRecord Location; // 0x04(0x0c)
	struct FRotationRecord Rotation; // 0x10(0x08)
	int32_t movement_state; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FString Timestamp; // 0x20(0x10)
	int32_t ping_ms; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
	struct TMap<struct FString, struct FClientStatisticsRecord> client_statistics; // 0x38(0x50)
};

// ScriptStruct Killstreak.ClientStatisticsRecord
// Size: 0x14 (Inherited: 0x00)
struct FClientStatisticsRecord {
	float smoothed; // 0x00(0x04)
	float Maximum; // 0x04(0x04)
	float Minimum; // 0x08(0x04)
	float average; // 0x0c(0x04)
	int32_t sample_count; // 0x10(0x04)
};

// ScriptStruct Killstreak.BotDifficultyChangeEventRecord
// Size: 0x18 (Inherited: 0x00)
struct FBotDifficultyChangeEventRecord {
	int32_t ue_player_id; // 0x00(0x04)
	int32_t difficulty_index; // 0x04(0x04)
	struct FString Timestamp; // 0x08(0x10)
};

// ScriptStruct Killstreak.BotStartingDifficultyRecord
// Size: 0x08 (Inherited: 0x00)
struct FBotStartingDifficultyRecord {
	int32_t ue_player_id; // 0x00(0x04)
	int32_t difficulty_index; // 0x04(0x04)
};

// ScriptStruct Killstreak.MultipleKillEventRecord
// Size: 0x08 (Inherited: 0x00)
struct FMultipleKillEventRecord {
	int32_t ue_player_id; // 0x00(0x04)
	int32_t Count; // 0x04(0x04)
};

// ScriptStruct Killstreak.EliminationStreakEventRecord
// Size: 0x08 (Inherited: 0x00)
struct FEliminationStreakEventRecord {
	int32_t ue_player_id; // 0x00(0x04)
	int32_t Count; // 0x04(0x04)
};

// ScriptStruct Killstreak.GadgetUseEventRecord
// Size: 0x50 (Inherited: 0x00)
struct FGadgetUseEventRecord {
	int32_t ue_player_id; // 0x00(0x04)
	struct FLocationRecord Location; // 0x04(0x0c)
	int32_t gadget_id; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct FString Timestamp; // 0x18(0x10)
	int32_t accumulated_damage; // 0x28(0x04)
	int32_t accumulated_self_damage; // 0x2c(0x04)
	int32_t accumulated_friendly_damage; // 0x30(0x04)
	int32_t accumulated_reverse_friendly_damage; // 0x34(0x04)
	float AccumulatingDamage; // 0x38(0x04)
	float AccumulatingSelfDamage; // 0x3c(0x04)
	float AccumulatingFriendlyDamage; // 0x40(0x04)
	float AccumulatingReverseFriendlyDamage; // 0x44(0x04)
	float FireGameTime; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Killstreak.CommunicationUseEventRecord
// Size: 0x70 (Inherited: 0x00)
struct FCommunicationUseEventRecord {
	int32_t hz_player_id; // 0x00(0x04)
	int32_t ue_player_id; // 0x04(0x04)
	int32_t round_id; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString cosmetic_type; // 0x10(0x10)
	int32_t item_id; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
	struct FString item_name; // 0x28(0x10)
	struct FLocationRecord Location; // 0x38(0x0c)
	struct FRotationRecord Rotation; // 0x44(0x08)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
	struct FString game_phase; // 0x50(0x10)
	struct FString Timestamp; // 0x60(0x10)
};

// ScriptStruct Killstreak.RadialMenuItemUseEventRecord
// Size: 0x70 (Inherited: 0x00)
struct FRadialMenuItemUseEventRecord {
	int32_t hz_player_id; // 0x00(0x04)
	int32_t ue_player_id; // 0x04(0x04)
	int32_t round_id; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString cosmetic_type; // 0x10(0x10)
	int32_t item_id; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
	struct FString item_name; // 0x28(0x10)
	struct FLocationRecord Location; // 0x38(0x0c)
	struct FRotationRecord Rotation; // 0x44(0x08)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
	struct FString game_phase; // 0x50(0x10)
	struct FString Timestamp; // 0x60(0x10)
};

// ScriptStruct Killstreak.AbilityUseEventRecord
// Size: 0x50 (Inherited: 0x00)
struct FAbilityUseEventRecord {
	int32_t ue_player_id; // 0x00(0x04)
	struct FLocationRecord Location; // 0x04(0x0c)
	int32_t ability_id; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct FString Timestamp; // 0x18(0x10)
	int32_t accumulated_damage; // 0x28(0x04)
	int32_t accumulated_self_damage; // 0x2c(0x04)
	int32_t accumulated_friendly_damage; // 0x30(0x04)
	int32_t accumulated_reverse_friendly_damage; // 0x34(0x04)
	float AccumulatingDamage; // 0x38(0x04)
	float AccumulatingSelfDamage; // 0x3c(0x04)
	float AccumulatingFriendlyDamage; // 0x40(0x04)
	float AccumulatingReverseFriendlyDamage; // 0x44(0x04)
	float FireGameTime; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Killstreak.WeaponUseSummaryRecord
// Size: 0x34 (Inherited: 0x00)
struct FWeaponUseSummaryRecord {
	int32_t ue_player_id; // 0x00(0x04)
	int32_t weapon_id; // 0x04(0x04)
	int32_t shots_fired; // 0x08(0x04)
	int32_t shots_hit; // 0x0c(0x04)
	int32_t head_shots; // 0x10(0x04)
	int32_t accumulated_damage; // 0x14(0x04)
	int32_t accumulated_self_damage; // 0x18(0x04)
	int32_t accumulated_friendly_damage; // 0x1c(0x04)
	int32_t accumulated_reverse_friendly_damage; // 0x20(0x04)
	float AccumulatingDamage; // 0x24(0x04)
	float AccumulatingSelfDamage; // 0x28(0x04)
	float AccumulatingFriendlyDamage; // 0x2c(0x04)
	float AccumulatingReverseFriendlyDamage; // 0x30(0x04)
};

// ScriptStruct Killstreak.ReviveEventRecord
// Size: 0x30 (Inherited: 0x00)
struct FReviveEventRecord {
	int32_t reviver_ue_player_id; // 0x00(0x04)
	struct FLocationRecord reviver_location; // 0x04(0x0c)
	int32_t revivee_ue_player_id; // 0x10(0x04)
	struct FLocationRecord revivee_location; // 0x14(0x0c)
	struct FString Timestamp; // 0x20(0x10)
};

// ScriptStruct Killstreak.ExecuteEventRecord
// Size: 0x38 (Inherited: 0x00)
struct FExecuteEventRecord {
	int32_t instigator_ue_player_id; // 0x00(0x04)
	struct FLocationRecord instigator_location; // 0x04(0x0c)
	int32_t victim_ue_player_id; // 0x10(0x04)
	struct FLocationRecord victim_location; // 0x14(0x0c)
	int32_t weapon_id; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
	struct FString Timestamp; // 0x28(0x10)
};

// ScriptStruct Killstreak.DownEventRecord
// Size: 0x38 (Inherited: 0x00)
struct FDownEventRecord {
	int32_t instigator_ue_player_id; // 0x00(0x04)
	struct FLocationRecord instigator_location; // 0x04(0x0c)
	int32_t victim_ue_player_id; // 0x10(0x04)
	struct FLocationRecord victim_location; // 0x14(0x0c)
	int32_t weapon_id; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
	struct FString Timestamp; // 0x28(0x10)
};

// ScriptStruct Killstreak.CashCollectionEventRecord
// Size: 0x28 (Inherited: 0x00)
struct FCashCollectionEventRecord {
	int32_t ue_player_id; // 0x00(0x04)
	struct FLocationRecord Location; // 0x04(0x0c)
	struct FString Timestamp; // 0x10(0x10)
	int32_t Amount; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Killstreak.PurchasedItemEventRecord
// Size: 0x0c (Inherited: 0x00)
struct FPurchasedItemEventRecord {
	int32_t ue_player_id; // 0x00(0x04)
	int32_t item_id; // 0x04(0x04)
	int32_t cost; // 0x08(0x04)
};

// ScriptStruct Killstreak.PlayerStartingCashRecord
// Size: 0x08 (Inherited: 0x00)
struct FPlayerStartingCashRecord {
	int32_t ue_player_id; // 0x00(0x04)
	int32_t Cash; // 0x04(0x04)
};

// ScriptStruct Killstreak.MirrorMatchupRecord
// Size: 0x14 (Inherited: 0x00)
struct FMirrorMatchupRecord {
	int32_t hz_player_id; // 0x00(0x04)
	int32_t ue_player_id; // 0x04(0x04)
	int32_t team_id; // 0x08(0x04)
	int32_t class_id; // 0x0c(0x04)
	int32_t has_mirror_match; // 0x10(0x04)
};

// ScriptStruct Killstreak.TeamSideRecord
// Size: 0x0c (Inherited: 0x00)
struct FTeamSideRecord {
	int32_t team_id; // 0x00(0x04)
	int32_t side_id; // 0x04(0x04)
	int32_t team_role; // 0x08(0x04)
};

// ScriptStruct Killstreak.ClientContextRecord
// Size: 0x148 (Inherited: 0x00)
struct FClientContextRecord {
	int32_t ue_player_id; // 0x00(0x04)
	int32_t hz_player_id; // 0x04(0x04)
	struct TMap<struct FString, struct FString> strings; // 0x08(0x50)
	struct TMap<struct FString, uint64_t> uint64_values; // 0x58(0x50)
	struct TMap<struct FString, float> float_values; // 0xa8(0x50)
	struct TMap<struct FString, int32_t> int32_values; // 0xf8(0x50)
};

// ScriptStruct Killstreak.JobSelectionRecord
// Size: 0x68 (Inherited: 0x00)
struct FJobSelectionRecord {
	int32_t ue_player_id; // 0x00(0x04)
	int32_t hz_player_id; // 0x04(0x04)
	int32_t round_id; // 0x08(0x04)
	int32_t class_id; // 0x0c(0x04)
	struct FString Timestamp; // 0x10(0x10)
	int32_t skin_id; // 0x20(0x04)
	int32_t wingsuit_id; // 0x24(0x04)
	int32_t primary_weapon_1_wrap_id; // 0x28(0x04)
	int32_t primary_weapon_2_wrap_id; // 0x2c(0x04)
	int32_t secondary_weapon_wrap_id; // 0x30(0x04)
	int32_t melee_weapon_wrap_id; // 0x34(0x04)
	struct TArray<int32_t> emotes_and_sprays; // 0x38(0x10)
	struct TArray<int32_t> quips; // 0x48(0x10)
	struct TArray<int32_t> communications; // 0x58(0x10)
};

// ScriptStruct Killstreak.PlayerRecord
// Size: 0xd8 (Inherited: 0x00)
struct FPlayerRecord {
	int32_t ue_player_id; // 0x00(0x04)
	int32_t hz_player_id; // 0x04(0x04)
	struct FString player_name; // 0x08(0x10)
	int32_t team_id; // 0x18(0x04)
	int32_t class_id; // 0x1c(0x04)
	int32_t player_type; // 0x20(0x04)
	int32_t portal_id; // 0x24(0x04)
	int32_t input_type; // 0x28(0x04)
	int32_t platform_type; // 0x2c(0x04)
	int32_t ranking_id; // 0x30(0x04)
	float ranking; // 0x34(0x04)
	float ranking_variance; // 0x38(0x04)
	int32_t task_force_id; // 0x3c(0x04)
	struct FGuid group_id; // 0x40(0x10)
	int32_t party_id; // 0x50(0x04)
	int32_t party_size; // 0x54(0x04)
	int32_t skin_id; // 0x58(0x04)
	int32_t account_level; // 0x5c(0x04)
	int32_t ranked_level; // 0x60(0x04)
	int32_t class_level; // 0x64(0x04)
	float time_played; // 0x68(0x04)
	float time_alive; // 0x6c(0x04)
	int32_t kills_single; // 0x70(0x04)
	int32_t kills_double; // 0x74(0x04)
	int32_t kills_triple; // 0x78(0x04)
	int32_t kills_quadra; // 0x7c(0x04)
	int32_t kills_penta; // 0x80(0x04)
	int32_t deaths; // 0x84(0x04)
	int32_t executes; // 0x88(0x04)
	int32_t downs; // 0x8c(0x04)
	int32_t Revives; // 0x90(0x04)
	int32_t shots_fired; // 0x94(0x04)
	int32_t shots_hit; // 0x98(0x04)
	int32_t head_shots; // 0x9c(0x04)
	int32_t accumulated_damage; // 0xa0(0x04)
	int32_t accumulated_self_damage; // 0xa4(0x04)
	int32_t accumulated_friendly_damage; // 0xa8(0x04)
	int32_t accumulated_reverse_friendly_damage; // 0xac(0x04)
	int32_t gadget_uses; // 0xb0(0x04)
	int32_t ability_uses; // 0xb4(0x04)
	int32_t total_earned; // 0xb8(0x04)
	int32_t total_spent; // 0xbc(0x04)
	int32_t on_time; // 0xc0(0x04)
	int32_t connect_count; // 0xc4(0x04)
	int32_t disconnect_round; // 0xc8(0x04)
	int32_t deserter_rounds; // 0xcc(0x04)
	int32_t penalties; // 0xd0(0x04)
	char UnknownData_D4[0x4]; // 0xd4(0x04)
};

// ScriptStruct Killstreak.MinimapData
// Size: 0x20 (Inherited: 0x00)
struct FMinimapData {
	struct FLocationRecord northwest_corner; // 0x00(0x0c)
	float Width; // 0x0c(0x04)
	struct TArray<struct FObjectiveRecord> objectives; // 0x10(0x10)
};

// ScriptStruct Killstreak.ObjectiveRecord
// Size: 0x10 (Inherited: 0x00)
struct FObjectiveRecord {
	int32_t Type; // 0x00(0x04)
	struct FLocationRecord Location; // 0x04(0x0c)
};

// ScriptStruct Killstreak.StateMachineObjectEntry
// Size: 0x18 (Inherited: 0x00)
struct FStateMachineObjectEntry {
	struct FName Key; // 0x00(0x08)
	struct UObject* Entry; // 0x08(0x08)
	int64_t IntEntry; // 0x10(0x08)
};

// ScriptStruct Killstreak.StateMachineModEntry
// Size: 0x10 (Inherited: 0x00)
struct FStateMachineModEntry {
	struct FName Key; // 0x00(0x08)
	struct UKSModInst_Activated* ModInst; // 0x08(0x08)
};

// ScriptStruct Killstreak.DownedEnemyPingHandle
// Size: 0x18 (Inherited: 0x00)
struct FDownedEnemyPingHandle {
	struct FWeakObjectPtr<struct AKSPlayerState> DownedEnemyPlayer; // 0x00(0x08)
	struct FTimerHandle PingTimerHandle; // 0x08(0x08)
	int32_t PingsSent; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Killstreak.KSModZoneModInfo
// Size: 0x10 (Inherited: 0x00)
struct FKSModZoneModInfo {
	struct UKSPlayerMod* PlayerMod; // 0x00(0x08)
	bool bUnique; // 0x08(0x01)
	bool bRemove; // 0x09(0x01)
	bool bRemoveAll; // 0x0a(0x01)
	char UnknownData_B[0x5]; // 0x0b(0x05)
};

// ScriptStruct Killstreak.AccoladeMultiDownTracker
// Size: 0x68 (Inherited: 0x00)
struct FAccoladeMultiDownTracker {
	int32_t DownReqAmount; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FAccoladeDisplayInfo AccoladeReward; // 0x08(0x60)
};

// ScriptStruct Killstreak.AccoladeMultiElimTracker
// Size: 0x68 (Inherited: 0x00)
struct FAccoladeMultiElimTracker {
	int32_t ElimReqAmount; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FAccoladeDisplayInfo AccoladeReward; // 0x08(0x60)
};

// ScriptStruct Killstreak.AirElimTracker
// Size: 0x08 (Inherited: 0x00)
struct FAirElimTracker {
	int32_t InstigatorId; // 0x00(0x04)
	int32_t DownCount; // 0x04(0x04)
};

// ScriptStruct Killstreak.TrackPlayerElim
// Size: 0x08 (Inherited: 0x00)
struct FTrackPlayerElim {
	int32_t PlayerInstigatorId; // 0x00(0x04)
	int32_t PlayerVictimId; // 0x04(0x04)
};

// ScriptStruct Killstreak.KSPersistentMinPlayerDataContainer
// Size: 0x210 (Inherited: 0x108)
struct FKSPersistentMinPlayerDataContainer : public FFastArraySerializer {
	struct TArray<struct FKSPersistentMinPlayerData> ReplicatedPlayerData; // 0x108(0x10)
	struct TMap<struct FKSPersistentPlayerId, struct UKSPersistentPlayerData*> LocalPlayerData; // 0x118(0x50)
	struct TSet<struct UKSPersistentPlayerData*> AllLocalPlayerData; // 0x168(0x50)
	struct TSet<int32_t> KnownDeadEnginePlayerIds; // 0x1b8(0x50)
	char UnknownData_208[0x8]; // 0x208(0x08)
};

// ScriptStruct Killstreak.KSPersistentMinPlayerData
// Size: 0x38 (Inherited: 0x0c)
struct FKSPersistentMinPlayerData : public FFastArraySerializerItem {
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FKSPersistentPlayerId ID; // 0x10(0x10)
	int32_t TeamNum; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
	struct FString PlayerName; // 0x28(0x10)
};

// ScriptStruct Killstreak.PingInfoChangeList
// Size: 0x120 (Inherited: 0x108)
struct FPingInfoChangeList : public FFastArraySerializer {
	struct TArray<struct FPingInfoChangeItem> Items; // 0x108(0x10)
	char UnknownData_118[0x8]; // 0x118(0x08)
};

// ScriptStruct Killstreak.PingInfoChangeItem
// Size: 0x60 (Inherited: 0x0c)
struct FPingInfoChangeItem : public FFastArraySerializerItem {
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FPingInfo PingInfo; // 0x10(0x50)
};

// ScriptStruct Killstreak.PingCacher
// Size: 0x10 (Inherited: 0x00)
struct FPingCacher {
	struct AKSPlayerState* PingingPlayer; // 0x00(0x08)
	int32_t PingId; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Killstreak.InternalPingInfo
// Size: 0x10 (Inherited: 0x00)
struct FInternalPingInfo {
	int32_t PingId; // 0x00(0x04)
	int32_t DisplayId; // 0x04(0x04)
	struct AKSPlayerState* CreatingPlayer; // 0x08(0x08)
};

// ScriptStruct Killstreak.ClientStatistics
// Size: 0x18 (Inherited: 0x00)
struct FClientStatistics {
	float smoothed; // 0x00(0x04)
	float Maximum; // 0x04(0x04)
	float Minimum; // 0x08(0x04)
	float average; // 0x0c(0x04)
	int32_t SampleCount; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Killstreak.ClientInputTypeUse
// Size: 0x08 (Inherited: 0x00)
struct FClientInputTypeUse {
	int16_t InputTypeKbm; // 0x00(0x02)
	int16_t InputTypeGpad; // 0x02(0x02)
	int16_t InputTypeTouch; // 0x04(0x02)
	int16_t InputTypeOther; // 0x06(0x02)
};

// ScriptStruct Killstreak.ClientContext
// Size: 0x110 (Inherited: 0x00)
struct FClientContext {
	struct FString BuildVersion; // 0x00(0x10)
	struct FString EngineVersionCurrent; // 0x10(0x10)
	struct FString EngineVersionCompatible; // 0x20(0x10)
	struct FString OSVersionLabel; // 0x30(0x10)
	struct FString OSSubVersionLabel; // 0x40(0x10)
	struct FString OSVersion; // 0x50(0x10)
	struct FString CPUBrand; // 0x60(0x10)
	struct FString DeviceMakeAndModel; // 0x70(0x10)
	struct FString PrimaryGPUBrand; // 0x80(0x10)
	struct FString BuildConfiguration; // 0x90(0x10)
	struct FString BranchName; // 0xa0(0x10)
	struct FString CompiledWith; // 0xb0(0x10)
	uint64_t AvailablePhysicalMemory; // 0xc0(0x08)
	uint64_t TotalPhysicalMemory; // 0xc8(0x08)
	uint64_t AvailableVirtualMemory; // 0xd0(0x08)
	uint64_t TotalVirtualMemory; // 0xd8(0x08)
	float CPUBenchmarkResults; // 0xe0(0x04)
	float GPUBenchmarkResults; // 0xe4(0x04)
	float ResolutionQuality; // 0xe8(0x04)
	int32_t GlobalQuality; // 0xec(0x04)
	int32_t ViewDistanceQuality; // 0xf0(0x04)
	int32_t AntiAliasingQuality; // 0xf4(0x04)
	int32_t ShadowQuality; // 0xf8(0x04)
	int32_t PostProcessQuality; // 0xfc(0x04)
	int32_t TextureQuality; // 0x100(0x04)
	int32_t EffectsQuality; // 0x104(0x04)
	int32_t FoliageQuality; // 0x108(0x04)
	int32_t ShadingQuality; // 0x10c(0x04)
};

// ScriptStruct Killstreak.DeferredViewTargetChangeInfo
// Size: 0x10 (Inherited: 0x00)
struct FDeferredViewTargetChangeInfo {
	struct AActor* OldTarget; // 0x00(0x08)
	struct AActor* NewTarget; // 0x08(0x08)
};

// ScriptStruct Killstreak.KickbackPlayback
// Size: 0x20 (Inherited: 0x00)
struct FKickbackPlayback {
	float AccumulatedTime; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FInterpCurveVector2D KickbackCurve; // 0x08(0x18)
};

// ScriptStruct Killstreak.PlayerAlias
// Size: 0x20 (Inherited: 0x00)
struct FPlayerAlias {
	char UnknownData_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Killstreak.KSCustomInputAxisKeyMappings
// Size: 0xf0 (Inherited: 0x00)
struct FKSCustomInputAxisKeyMappings {
	struct TMap<float, struct FKSInputAxisKeyMappings> KBM_Mappings; // 0x00(0x50)
	struct TMap<float, struct FKSInputAxisKeyMappings> GP_Mappings; // 0x50(0x50)
	struct TMap<float, struct FKSInputAxisKeyMappings> Touch_Mappings; // 0xa0(0x50)
};

// ScriptStruct Killstreak.KSInputAxisKeyMappings
// Size: 0x10 (Inherited: 0x00)
struct FKSInputAxisKeyMappings {
	struct TArray<struct FInputAxisKeyMapping> InputAxisKeyMappings; // 0x00(0x10)
};

// ScriptStruct Killstreak.KSCustomInputActionKeyMappings
// Size: 0x30 (Inherited: 0x00)
struct FKSCustomInputActionKeyMappings {
	struct TArray<struct FKSInputActionKeyMapping> KBM_Mappings; // 0x00(0x10)
	struct TArray<struct FKSInputActionKeyMapping> GP_Mappings; // 0x10(0x10)
	struct TArray<struct FKSInputActionKeyMapping> Touch_Mappings; // 0x20(0x10)
};

// ScriptStruct Killstreak.KSInputActionKeyMapping
// Size: 0x30 (Inherited: 0x00)
struct FKSInputActionKeyMapping {
	struct FInputActionKeyMapping Mapping; // 0x00(0x28)
	enum class EKSInputActionType Type; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Killstreak.KSInputActionKey
// Size: 0x20 (Inherited: 0x00)
struct FKSInputActionKey {
	struct FKey Key; // 0x00(0x18)
	enum class EKSInputActionType Type; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Killstreak.KSCustomInputAxisKey
// Size: 0x1c (Inherited: 0x00)
struct FKSCustomInputAxisKey {
	int32_t propId; // 0x00(0x04)
	struct FName KeyboardName; // 0x04(0x08)
	float KeyboardScale; // 0x0c(0x04)
	struct FName GamepadName; // 0x10(0x08)
	float GamepadScale; // 0x18(0x04)
};

// ScriptStruct Killstreak.KSCustomInputActionKey
// Size: 0x14 (Inherited: 0x00)
struct FKSCustomInputActionKey {
	int32_t propId; // 0x00(0x04)
	struct FName KeyboardName; // 0x04(0x08)
	struct FName GamepadName; // 0x0c(0x08)
};

// ScriptStruct Killstreak.KSInputActionTiedNames
// Size: 0x18 (Inherited: 0x00)
struct FKSInputActionTiedNames {
	struct FName Press; // 0x00(0x08)
	struct FName Hold; // 0x08(0x08)
	struct FName Repeat; // 0x10(0x08)
};

// ScriptStruct Killstreak.KSInputActionNameTypePair
// Size: 0x0c (Inherited: 0x00)
struct FKSInputActionNameTypePair {
	struct FName Name; // 0x00(0x08)
	enum class EKSInputActionType Type; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Killstreak.ShopManifest
// Size: 0x120 (Inherited: 0x108)
struct FShopManifest : public FFastArraySerializer {
	struct TArray<struct FShopItem> Manifest; // 0x108(0x10)
	struct AKSPlayerShop* Owner; // 0x118(0x08)
};

// ScriptStruct Killstreak.KSScoreChangeList
// Size: 0x90 (Inherited: 0x70)
struct FKSScoreChangeList : public FSizedArraySerializer {
	char UnknownData_70[0x8]; // 0x70(0x08)
	struct TArray<struct FKSScoreChangeItem> Items; // 0x78(0x10)
	char UnknownData_88[0x8]; // 0x88(0x08)
};

// ScriptStruct Killstreak.KSScoreChangeItem
// Size: 0x30 (Inherited: 0x01)
struct FKSScoreChangeItem : public FReplicatedLogItem {
	struct FKSScoreChangeEvent ScoreChange; // 0x00(0x30)
};

// ScriptStruct Killstreak.LaggedProjectileHit
// Size: 0x94 (Inherited: 0x00)
struct FLaggedProjectileHit {
	struct FHitResult HitResult; // 0x00(0x88)
	float ClientHitTimeStamp; // 0x88(0x04)
	float AdditionalPredictionTime; // 0x8c(0x04)
	enum class EProjectilePredictionType PredictionType; // 0x90(0x01)
	char UnknownData_91[0x3]; // 0x91(0x03)
};

// ScriptStruct Killstreak.ProjectileWidgetInfo
// Size: 0x30 (Inherited: 0x00)
struct FProjectileWidgetInfo {
	char UnknownData_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Killstreak.KSSpreadList
// Size: 0x120 (Inherited: 0x108)
struct FKSSpreadList : public FFastArraySerializer {
	struct TArray<struct FKSSpreadEntry> List; // 0x108(0x10)
	struct AKSProjectile_GrenadeSpread* Owner; // 0x118(0x08)
};

// ScriptStruct Killstreak.KSSpreadEntry
// Size: 0x70 (Inherited: 0x0c)
struct FKSSpreadEntry : public FFastArraySerializerItem {
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FKSSpreadTransform Entry; // 0x10(0x60)
};

// ScriptStruct Killstreak.KSSpreadTransform
// Size: 0x60 (Inherited: 0x00)
struct FKSSpreadTransform {
	int32_t ID; // 0x00(0x04)
	char UnknownData_4[0xc]; // 0x04(0x0c)
	struct FTransform Transform; // 0x10(0x30)
	struct UParticleSystemComponent* ParticleSystem; // 0x40(0x08)
	struct USphereComponent* Sphere; // 0x48(0x08)
	struct UMeshComponent* Mesh; // 0x50(0x08)
	float CurrentHealth; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Killstreak.KSProjectileClusterSegment
// Size: 0x20 (Inherited: 0x00)
struct FKSProjectileClusterSegment {
	struct AKSProjectile* ProjectileClass; // 0x00(0x08)
	struct UKSWeaponAsset* WeaponAsset; // 0x08(0x08)
	struct FVector Direction; // 0x10(0x0c)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Killstreak.KSProjectileTargetingStateValidator
// Size: 0x04 (Inherited: 0x00)
struct FKSProjectileTargetingStateValidator {
	bool bAnyWeaponState; // 0x00(0x01)
	bool bAnyCharacterAimMode; // 0x01(0x01)
	enum class EWeaponStateNew WeaponState; // 0x02(0x01)
	enum class EKSCharacterAimMode CharacterAimMode; // 0x03(0x01)
};

// ScriptStruct Killstreak.KSProximityFilter
// Size: 0x20 (Inherited: 0x00)
struct FKSProximityFilter {
	struct TArray<struct AActor*> ValidActorClasses; // 0x00(0x10)
	bool bCountAllies; // 0x10(0x01)
	bool bCountEnemies; // 0x11(0x01)
	bool bCountUnaffiliated; // 0x12(0x01)
	bool bCheckLOS; // 0x13(0x01)
	struct FVector LOSTraceStartOffset; // 0x14(0x0c)
};

// ScriptStruct Killstreak.EndMatchPunishConfigEntry
// Size: 0x18 (Inherited: 0x00)
struct FEndMatchPunishConfigEntry {
	int32_t PointsRequired; // 0x00(0x04)
	bool PassThresholdOnDecrease; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
	struct TArray<struct FPunishmentConfigEntry> Punishments; // 0x08(0x10)
};

// ScriptStruct Killstreak.PunishmentConfigEntry
// Size: 0x08 (Inherited: 0x00)
struct FPunishmentConfigEntry {
	int32_t PunishmentLootTableId; // 0x00(0x04)
	int32_t PunishmentQuantity; // 0x04(0x04)
};

// ScriptStruct Killstreak.BadBehaviorConfigEntry
// Size: 0x20 (Inherited: 0x00)
struct FBadBehaviorConfigEntry {
	enum class EBadBehaviorType BehaviorType; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	int32_t TimeRequired; // 0x04(0x04)
	bool IsRepeatable; // 0x08(0x01)
	bool IsImmediate; // 0x09(0x01)
	bool AppliesDeserterPenalty; // 0x0a(0x01)
	char UnknownData_B[0x5]; // 0x0b(0x05)
	struct TArray<struct FPunishmentConfigEntry> Punishments; // 0x10(0x10)
};

// ScriptStruct Killstreak.PlayerPunishmentTracker
// Size: 0x28 (Inherited: 0x00)
struct FPlayerPunishmentTracker {
	char UnknownData_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Killstreak.BadBehaviorTracker
// Size: 0x0c (Inherited: 0x00)
struct FBadBehaviorTracker {
	char UnknownData_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Killstreak.KSQueueSectionSort
// Size: 0x0c (Inherited: 0x00)
struct FKSQueueSectionSort {
	struct FName QueueType; // 0x00(0x08)
	int32_t SortOrder; // 0x08(0x04)
};

// ScriptStruct Killstreak.KSLimitedTimeEventMetadataRow
// Size: 0x60 (Inherited: 0x08)
struct FKSLimitedTimeEventMetadataRow : public FTableRowBase {
	struct FText EventName; // 0x08(0x18)
	struct FText EventDescription; // 0x20(0x18)
	struct TSoftObjectPtr<struct UTexture2D> EventIcon; // 0x38(0x28)
};

// ScriptStruct Killstreak.KSLimitedTimeEventRow
// Size: 0x30 (Inherited: 0x00)
struct FKSLimitedTimeEventRow {
	struct FString LimitedTimeEventKey; // 0x00(0x10)
	struct TArray<struct FString> BonusProgressionKeys; // 0x10(0x10)
	struct TArray<struct FString> AllowedQueueGroups; // 0x20(0x10)
};

// ScriptStruct Killstreak.KSRankedProgressionRow
// Size: 0x38 (Inherited: 0x00)
struct FKSRankedProgressionRow {
	struct FString RankedProgressionKey; // 0x00(0x10)
	float WinBaseValue; // 0x10(0x04)
	float LossBaseValue; // 0x14(0x04)
	float MaxBonusClamp; // 0x18(0x04)
	float MinBonusClamp; // 0x1c(0x04)
	float RankDifferenceMultiplier; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
	struct TArray<float> MMRZoneList; // 0x28(0x10)
};

// ScriptStruct Killstreak.KSQueueGroupRow
// Size: 0x20 (Inherited: 0x00)
struct FKSQueueGroupRow {
	struct FString GroupKey; // 0x00(0x10)
	struct TArray<struct FString> BonusProgressionKeys; // 0x10(0x10)
};

// ScriptStruct Killstreak.KSBonusProgressionRow
// Size: 0x60 (Inherited: 0x00)
struct FKSBonusProgressionRow {
	struct FString BonusProgressionKey; // 0x00(0x10)
	struct TMap<struct FString, float> BonusProgressionList; // 0x10(0x50)
};

// ScriptStruct Killstreak.KSMapRow
// Size: 0x40 (Inherited: 0x00)
struct FKSMapRow {
	struct FString MapKey; // 0x00(0x10)
	int32_t MapId; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct FText mapName; // 0x18(0x18)
	struct FString MapThumbnailPath; // 0x30(0x10)
};

// ScriptStruct Killstreak.KSMapListRow
// Size: 0x20 (Inherited: 0x00)
struct FKSMapListRow {
	struct FString MapListKey; // 0x00(0x10)
	struct TArray<struct FString> MapKeys; // 0x10(0x10)
};

// ScriptStruct Killstreak.KSQueueRow
// Size: 0xb0 (Inherited: 0x00)
struct FKSQueueRow {
	struct FText Name; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	int32_t ID; // 0x30(0x04)
	int32_t LevelLock; // 0x34(0x04)
	int32_t MinPartySize; // 0x38(0x04)
	int32_t MaxPartySize; // 0x3c(0x04)
	int32_t SortOrder; // 0x40(0x04)
	int32_t MaxPlayerPerSide; // 0x44(0x04)
	bool IsCustom; // 0x48(0x01)
	char UnknownData_49[0x3]; // 0x49(0x03)
	struct FName QueueType; // 0x4c(0x08)
	char UnknownData_54[0x4]; // 0x54(0x04)
	struct FString MapListKey; // 0x58(0x10)
	struct FString RankedProgressionKey; // 0x68(0x10)
	struct FString QueueThumbnail; // 0x78(0x10)
	struct TArray<struct FString> QueueGroupKeys; // 0x88(0x10)
	bool AllowAllUnownedJobs; // 0x98(0x01)
	char UnknownData_99[0x7]; // 0x99(0x07)
	struct TArray<int32_t> AllowedUnownedJobIds; // 0xa0(0x10)
};

// ScriptStruct Killstreak.KSRadialMenuItemInterruptRules
// Size: 0x04 (Inherited: 0x00)
struct FKSRadialMenuItemInterruptRules {
	char UnknownData_0_0 : 2; // 0x00(0x01)
	char Walking : 1; // 0x00(0x01)
	char Sprinting : 1; // 0x00(0x01)
	char Crouching : 1; // 0x00(0x01)
	char Downed : 1; // 0x00(0x01)
	char Dead : 1; // 0x00(0x01)
	char Interacting : 1; // 0x00(0x01)
	char Zipline : 1; // 0x01(0x01)
	char SkyDiving : 1; // 0x01(0x01)
	char DodgeRolling : 1; // 0x01(0x01)
	char Falling : 1; // 0x01(0x01)
	char NonRadialMenuItemEquipment : 1; // 0x01(0x01)
	char RadialMenuItemActivated : 1; // 0x01(0x01)
	char Cooldown : 1; // 0x01(0x01)
	char DistFromOrigin : 1; // 0x01(0x01)
	char Throttled : 1; // 0x02(0x01)
	char UnknownData_2_1 : 7; // 0x02(0x01)
	char UnknownData_3[0x1]; // 0x03(0x01)
};

// ScriptStruct Killstreak.RecoilProfile2
// Size: 0x1c0 (Inherited: 0x00)
struct FRecoilProfile2 {
	struct FRecoilInfo2 PelvisRecoil; // 0x00(0x70)
	struct FRecoilInfo2 SpineRecoil; // 0x70(0x70)
	struct FRecoilInfo2 NeckRecoil; // 0xe0(0x70)
	struct FRecoilInfo2 HandRecoil; // 0x150(0x70)
};

// ScriptStruct Killstreak.RecoilInfo2
// Size: 0x70 (Inherited: 0x00)
struct FRecoilInfo2 {
	float TimeToGo; // 0x00(0x04)
	float TimeDuration; // 0x04(0x04)
	struct FVector RotAmplitude; // 0x08(0x0c)
	struct FVector RotFrequency; // 0x14(0x0c)
	char UnknownData_20[0xc]; // 0x20(0x0c)
	struct FRecoilParams2 RotParams; // 0x2c(0x03)
	char UnknownData_2F[0x1]; // 0x2f(0x01)
	struct FRotator RotOffset; // 0x30(0x0c)
	struct FVector LocAmplitude; // 0x3c(0x0c)
	struct FVector LocFrequency; // 0x48(0x0c)
	char UnknownData_54[0xc]; // 0x54(0x0c)
	struct FRecoilParams2 LocParams; // 0x60(0x03)
	char UnknownData_63[0x1]; // 0x63(0x01)
	struct FVector LocOffset; // 0x64(0x0c)
};

// ScriptStruct Killstreak.RecoilParams2
// Size: 0x03 (Inherited: 0x00)
struct FRecoilParams2 {
	char UnknownData_0[0x3]; // 0x00(0x03)
};

// ScriptStruct Killstreak.PlayerDamageInfo
// Size: 0x30 (Inherited: 0x00)
struct FPlayerDamageInfo {
	int32_t InstigatorPlayerId; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FString InstigatorPlayerName; // 0x08(0x10)
	int32_t VictimPlayerId; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FString VictimPlayerName; // 0x20(0x10)
};

// ScriptStruct Killstreak.PlayerRewardsSummaryReplicated
// Size: 0x30 (Inherited: 0x00)
struct FPlayerRewardsSummaryReplicated {
	struct TArray<int64_t> ActivityKeys; // 0x00(0x10)
	struct TArray<struct FRewardProgress> ActivityValues; // 0x10(0x10)
	struct TArray<struct FPlayerMatchStatInfo> BestStats; // 0x20(0x10)
};

// ScriptStruct Killstreak.SafeZoneParams
// Size: 0x10 (Inherited: 0x00)
struct FSafeZoneParams {
	struct FVector CenterPosition; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
};

// ScriptStruct Killstreak.PlayerShopTransaction
// Size: 0x08 (Inherited: 0x00)
struct FPlayerShopTransaction {
	enum class EPlayerShopTransactionType TransactionType; // 0x00(0x01)
	enum class EShopItemType ItemType; // 0x01(0x01)
	char UnknownData_2[0x2]; // 0x02(0x02)
	uint32_t TransactionRequestId; // 0x04(0x04)
};

// ScriptStruct Killstreak.KSPlayerEventRecord
// Size: 0x18 (Inherited: 0x00)
struct FKSPlayerEventRecord {
	int32_t PlayerId; // 0x00(0x04)
	int32_t PlayerSide; // 0x04(0x04)
	struct FVector EventLocation; // 0x08(0x0c)
	float Timestamp; // 0x14(0x04)
};

// ScriptStruct Killstreak.KSSpawnSelectorTier
// Size: 0x18 (Inherited: 0x00)
struct FKSSpawnSelectorTier {
	float Tolerance; // 0x00(0x04)
	bool AllowsNegativeScores; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
	struct TArray<struct FKSSpawnSelectorTierRule> KSSpawnSelectorTierRules; // 0x08(0x10)
};

// ScriptStruct Killstreak.KSSpawnSelectorTierRule
// Size: 0x18 (Inherited: 0x00)
struct FKSSpawnSelectorTierRule {
	struct UKSSpawnRule* KSSpawnRuleClass; // 0x00(0x08)
	struct UKSSpawnRule* KSSpawnRule; // 0x08(0x08)
	float Multiplier; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Killstreak.EquipPointDefinition
// Size: 0x60 (Inherited: 0x00)
struct FEquipPointDefinition {
	struct FGameplayTag EquipPoint; // 0x00(0x08)
	struct FGameplayTagQuery WeaponTypeQuery; // 0x08(0x48)
	bool bCanSwapToManually; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	struct FName HandlerSubType; // 0x54(0x08)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Killstreak.KSTargeterConfig
// Size: 0x0c (Inherited: 0x00)
struct FKSTargeterConfig {
	float MaxTargetingRange; // 0x00(0x04)
	float TargetingConeHalfAngle; // 0x04(0x04)
	bool bUseNearestTarget; // 0x08(0x01)
	bool bRequiresVisibility; // 0x09(0x01)
	char UnknownData_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct Killstreak.PlayerTeamTracker
// Size: 0x18 (Inherited: 0x00)
struct FPlayerTeamTracker {
	int32_t PlayerId; // 0x00(0x04)
	int32_t PlayerTeamNum; // 0x04(0x04)
	struct TArray<int32_t> PlayerElimIds; // 0x08(0x10)
};

// ScriptStruct Killstreak.KSTimerState
// Size: 0x02 (Inherited: 0x00)
struct FKSTimerState {
	bool bIsTimerActive; // 0x00(0x01)
	bool bIsTimerComplete; // 0x01(0x01)
};

// ScriptStruct Killstreak.KSSettingsState
// Size: 0x04 (Inherited: 0x00)
struct FKSSettingsState {
	bool bIsGamepadAttached; // 0x00(0x01)
	bool bIsMouseAttached; // 0x01(0x01)
	bool bIsDockedMode; // 0x02(0x01)
	bool bIsHandheldMode; // 0x03(0x01)
};

// ScriptStruct Killstreak.SettingConfigPair
// Size: 0x20 (Inherited: 0x00)
struct FSettingConfigPair {
	struct FString Name; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct Killstreak.KSActionRestrictor
// Size: 0x0c (Inherited: 0x00)
struct FKSActionRestrictor {
	char UnknownData_0[0x4]; // 0x00(0x04)
	bool bRestrictMove; // 0x04(0x01)
	bool bRestrictFire; // 0x05(0x01)
	bool bRestrictAltFire; // 0x06(0x01)
	bool bRestrictRoll; // 0x07(0x01)
	bool bRestrictWeaponSwaps; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Killstreak.KSCSVRow
// Size: 0x10 (Inherited: 0x00)
struct FKSCSVRow {
	struct TArray<struct FString> CSVColumn; // 0x00(0x10)
};

// ScriptStruct Killstreak.ContextualPingMessagesRow
// Size: 0x38 (Inherited: 0x08)
struct FContextualPingMessagesRow : public FTableRowBase {
	enum class EPingMessage PingMessage; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct TSoftObjectPtr<struct UTexture2D> PingMessageIcon; // 0x10(0x28)
};

// ScriptStruct Killstreak.ContextualPingTypesRow
// Size: 0x48 (Inherited: 0x08)
struct FContextualPingTypesRow : public FTableRowBase {
	enum class EPingType PingType; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	struct FLinearColor PingColor; // 0x0c(0x10)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct TSoftObjectPtr<struct UTexture2D> PingIcon; // 0x20(0x28)
};

// ScriptStruct Killstreak.KSParticleSystemAttachment
// Size: 0x38 (Inherited: 0x00)
struct FKSParticleSystemAttachment {
	struct UParticleSystem* ParticleSystem; // 0x00(0x08)
	struct FName SocketName; // 0x08(0x08)
	struct FVector Scale; // 0x10(0x0c)
	struct FVector AttachmentOffset; // 0x1c(0x0c)
	struct FRotator AttachmentRotationOffset; // 0x28(0x0c)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Killstreak.KSSpecialEffect
// Size: 0x50 (Inherited: 0x00)
struct FKSSpecialEffect {
	struct FName FXID; // 0x00(0x08)
	float EffectEndTime; // 0x08(0x04)
	bool bLoop; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
	float LoopStartTime; // 0x10(0x04)
	float LoopEndTime; // 0x14(0x04)
	bool bRemoveOnForwardComplete; // 0x18(0x01)
	bool bRemoveOnReverseComplete; // 0x19(0x01)
	char UnknownData_1A[0x6]; // 0x1a(0x06)
	struct TArray<struct FKSPostProcessFloatCurve> FloatCurves; // 0x20(0x10)
	struct TArray<struct FKSPostProcessColorCurve> ColorCurves; // 0x30(0x10)
	struct UKSFXCurveComponent* FXCurveClass; // 0x40(0x08)
	struct UObject* EffectAsset; // 0x48(0x08)
};

// ScriptStruct Killstreak.KSPostProcessColorCurve
// Size: 0x10 (Inherited: 0x00)
struct FKSPostProcessColorCurve {
	struct UCurveLinearColor* ColorCurve; // 0x00(0x08)
	struct FName ColorParameterName; // 0x08(0x08)
};

// ScriptStruct Killstreak.KSPostProcessFloatCurve
// Size: 0x10 (Inherited: 0x00)
struct FKSPostProcessFloatCurve {
	struct UCurveFloat* FloatCurve; // 0x00(0x08)
	struct FName FloatParameterName; // 0x08(0x08)
};

// ScriptStruct Killstreak.ScreenLogData
// Size: 0x30 (Inherited: 0x00)
struct FScreenLogData {
	enum class EScreenLogType ScreenLogData; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct APlayerState* Instigator; // 0x08(0x08)
	struct APlayerState* Victim; // 0x10(0x08)
	struct UKSItem* Weapon; // 0x18(0x08)
	bool bDowned; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
	struct UKSRadialMenuItem* RadialMenuItem; // 0x28(0x08)
};

// ScriptStruct Killstreak.KSRespawnConfig
// Size: 0x18 (Inherited: 0x00)
struct FKSRespawnConfig {
	enum class EKSRespawnMode RespawnMode; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	int32_t TotalRespawns; // 0x04(0x04)
	int32_t PersonalRespawns; // 0x08(0x04)
	float RespawnTime; // 0x0c(0x04)
	bool WaveRespawn; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	int32_t CostPerRespawn; // 0x14(0x04)
};

// ScriptStruct Killstreak.KSOutlineParameters
// Size: 0x38 (Inherited: 0x00)
struct FKSOutlineParameters {
	enum class EPlayerSilhouetteType ColorType; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FLinearColor OutlineColor; // 0x04(0x10)
	struct FLinearColor FillColor; // 0x14(0x10)
	float OutlineThickness; // 0x24(0x04)
	bool bShouldFill; // 0x28(0x01)
	bool bHideWhenOccluded; // 0x29(0x01)
	bool bIsHot; // 0x2a(0x01)
	bool bIsFriendly; // 0x2b(0x01)
	bool bCutoutOtherOutlines; // 0x2c(0x01)
	char UnknownData_2D[0x3]; // 0x2d(0x03)
	float OutlineZFadeMin; // 0x30(0x04)
	float OutlineZFadeMax; // 0x34(0x04)
};

// ScriptStruct Killstreak.KSInitialLoadout
// Size: 0x10 (Inherited: 0x00)
struct FKSInitialLoadout {
	struct TArray<struct UKSItem*> LoadoutItems; // 0x00(0x10)
};

// ScriptStruct Killstreak.KSInitialInventoryItem
// Size: 0x20 (Inherited: 0x00)
struct FKSInitialInventoryItem {
	struct FGameplayTag EquipPoint; // 0x00(0x08)
	struct UKSItem* ItemAsset; // 0x08(0x08)
	struct TArray<struct UKSWeaponAttachment*> Attachments; // 0x10(0x10)
};

// ScriptStruct Killstreak.KSInitialInventoryTableEntry
// Size: 0x40 (Inherited: 0x00)
struct FKSInitialInventoryTableEntry {
	struct FGameplayTag EquipPoint; // 0x00(0x08)
	struct TSoftObjectPtr<struct UKSItem> ItemAsset; // 0x08(0x28)
	struct TArray<struct TSoftObjectPtr<struct UKSWeaponAttachment>> Attachments; // 0x30(0x10)
};

// ScriptStruct Killstreak.ReplicatedViewInfo
// Size: 0x08 (Inherited: 0x00)
struct FReplicatedViewInfo {
	float Pitch; // 0x00(0x04)
	float Yaw; // 0x04(0x04)
};

// ScriptStruct Killstreak.ObjectiveState
// Size: 0x14 (Inherited: 0x00)
struct FObjectiveState {
	struct FName CurrentState; // 0x00(0x08)
	struct FName PreviousState; // 0x08(0x08)
	int32_t Owner; // 0x10(0x04)
};

// ScriptStruct Killstreak.SkeletalMeshMaterialToReductionGroup
// Size: 0x18 (Inherited: 0x00)
struct FSkeletalMeshMaterialToReductionGroup {
	struct FString NameToMatch; // 0x00(0x10)
	int32_t ReductionGroup; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Killstreak.KSRiderSeatPair
// Size: 0x10 (Inherited: 0x00)
struct FKSRiderSeatPair {
	struct AKSCharacter* Rider; // 0x00(0x08)
	struct UKSVehicleSeatComponent* Seat; // 0x08(0x08)
};

// ScriptStruct Killstreak.KSVehicleDestructionStage
// Size: 0x60 (Inherited: 0x00)
struct FKSVehicleDestructionStage {
	struct UParticleSystem* StageVFX; // 0x00(0x08)
	struct UAkAudioEvent* StageSFX; // 0x08(0x08)
	struct UAkAudioEvent* StageEcho; // 0x10(0x08)
	char UnknownData_18[0x8]; // 0x18(0x08)
	struct FTransform StageEffectTransform; // 0x20(0x30)
	float StageDeteriorationRate; // 0x50(0x04)
	char UnknownData_54[0xc]; // 0x54(0x0c)
};

// ScriptStruct Killstreak.ViewModelInfo
// Size: 0x10 (Inherited: 0x00)
struct FViewModelInfo {
	struct UKSItem* Item; // 0x00(0x08)
	enum class EWeaponStateNew DefaultWeaponState; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Killstreak.AttachmentInfo
// Size: 0x10 (Inherited: 0x00)
struct FAttachmentInfo {
	struct UKSWeaponAttachment* Attachment; // 0x00(0x08)
	char Slot; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Killstreak.WaveBotTableRow
// Size: 0x1a8 (Inherited: 0x198)
struct FWaveBotTableRow : public FBotSpawnTableRow {
	float fSelectionWeight; // 0x198(0x04)
	float fAutoSpawnCostMultiplier; // 0x19c(0x04)
	int32_t nMaxInstancesPerWave; // 0x1a0(0x04)
	enum class ECharacterBehaviorState InitialBehaviorState; // 0x1a4(0x01)
	bool bPermanentlyRevealed; // 0x1a5(0x01)
	char UnknownData_1A6[0x2]; // 0x1a6(0x02)
};

// ScriptStruct Killstreak.KSWayPointLink
// Size: 0x20 (Inherited: 0x00)
struct FKSWayPointLink {
	struct TArray<struct AKSWayPoint*> NextWayPoints; // 0x00(0x10)
	struct TArray<struct AKSWayPoint*> PrevWayPoints; // 0x10(0x10)
};

// ScriptStruct Killstreak.AuxiliaryWeaponInfo
// Size: 0x10 (Inherited: 0x00)
struct FAuxiliaryWeaponInfo {
	struct FName AuxiliarySlot; // 0x00(0x08)
	struct AKSWeapon* ParentWeapon; // 0x08(0x08)
};

// ScriptStruct Killstreak.HitValidationRecoveryInfo
// Size: 0x60 (Inherited: 0x00)
struct FHitValidationRecoveryInfo {
	struct TArray<struct FHitResult> Hits; // 0x00(0x10)
	struct FAimData AimData; // 0x10(0x50)
};

// ScriptStruct Killstreak.WeaponLeadingInfo
// Size: 0x10 (Inherited: 0x00)
struct FWeaponLeadingInfo {
	float fMaxWeaponLeading; // 0x00(0x04)
	float fWeaponLeadingSmoothingFactor; // 0x04(0x04)
	float fWeaponLeadingInterpSpeed; // 0x08(0x04)
	float fWeaponLeadingRecoverInterpSpeed; // 0x0c(0x04)
};

// ScriptStruct Killstreak.ADSBlurValues
// Size: 0x30 (Inherited: 0x00)
struct FADSBlurValues {
	bool AdsBlurDisabled; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float BlurDistance; // 0x04(0x04)
	float MaskExponential; // 0x08(0x04)
	float HardnessOfMask; // 0x0c(0x04)
	float SphereMaskRadius; // 0x10(0x04)
	float SphereMaskScaleX; // 0x14(0x04)
	float SphereMaskScaleY; // 0x18(0x04)
	bool EnableCubeMask; // 0x1c(0x01)
	char UnknownData_1D[0x3]; // 0x1d(0x03)
	float CubeMaskPosX; // 0x20(0x04)
	float CubeMaskPosY; // 0x24(0x04)
	float CubeMaskScaleX; // 0x28(0x04)
	float CubeMaskScaleY; // 0x2c(0x04)
};

// ScriptStruct Killstreak.KSWeaponDropAttachmentContainer
// Size: 0x128 (Inherited: 0x108)
struct FKSWeaponDropAttachmentContainer : public FFastArraySerializer {
	struct TArray<struct FKSWeaponDropAttachmentContainerEntry> Attachments; // 0x108(0x10)
	char UnknownData_118[0x8]; // 0x118(0x08)
	struct AKSWeaponAssetDrop* Owner; // 0x120(0x08)
};

// ScriptStruct Killstreak.KSWeaponDropAttachmentContainerEntry
// Size: 0x38 (Inherited: 0x0c)
struct FKSWeaponDropAttachmentContainerEntry : public FFastArraySerializerItem {
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UKSWeaponAttachment* Attachment; // 0x10(0x08)
	char UnknownData_18[0x8]; // 0x18(0x08)
	struct FGameplayTag ReplicatedAttachPoint; // 0x20(0x08)
	char UnknownData_28[0x10]; // 0x28(0x10)
};

// ScriptStruct Killstreak.LoadedWeaponAttachmentAnimationData
// Size: 0xb0 (Inherited: 0x00)
struct FLoadedWeaponAttachmentAnimationData {
	struct USkeletalMesh* WeaponAttachmentMesh; // 0x00(0x08)
	struct UAnimSequence* WeaponAttachmentSequence; // 0x08(0x08)
	struct UAnimMontage* Player3PHolsterMontage; // 0x10(0x08)
	struct UAnimMontage* Player3PRetrieveMontage; // 0x18(0x08)
	struct UAnimMontage* Player3PFireMontage; // 0x20(0x08)
	struct UAnimMontage* Player3PReloadMontage; // 0x28(0x08)
	struct UAimOffsetBlendSpace* Player3PStandingAimOffset; // 0x30(0x08)
	struct UAimOffsetBlendSpace* Player3PCrouchedAimOffset; // 0x38(0x08)
	struct UBlendSpace* Player3PStandingBlendSpace; // 0x40(0x08)
	struct UBlendSpace* Player3PCrouchedBlendSpace; // 0x48(0x08)
	struct UAnimSequence* Player3PStandingIdleSequence; // 0x50(0x08)
	struct UAnimSequence* Player3PCrouchedIdleSequence; // 0x58(0x08)
	struct UAnimMontage* Player1PFireMontage; // 0x60(0x08)
	struct UBlendSpace* Player1PStandingBlendSpace; // 0x68(0x08)
	struct UBlendSpace* Player1PCrouchedBlendSpace; // 0x70(0x08)
	struct UAimOffsetBlendSpace* Player1PStandingAimOffset; // 0x78(0x08)
	struct UAnimMontage* Player1PRetrieveMontage; // 0x80(0x08)
	struct UAnimMontage* Player1PReloadMontage; // 0x88(0x08)
	struct UCameraShake* Player1PCameraShake; // 0x90(0x08)
	struct UCameraShake* Player1PADSCameraShake; // 0x98(0x08)
	struct UAnimSequence* Player1PAdditiveStandGunPose; // 0xa0(0x08)
	struct UAnimSequence* Player1PAdditiveCrouchGunPose; // 0xa8(0x08)
};

// ScriptStruct Killstreak.WeaponAttachmentAnimationData
// Size: 0x3a8 (Inherited: 0x08)
struct FWeaponAttachmentAnimationData : public FTableRowBase {
	bool bUseDefaultIfNone; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct TSoftObjectPtr<struct UKSWeaponAsset> WeaponAsset; // 0x10(0x28)
	struct TSoftObjectPtr<struct USkeletalMesh> WeaponAttachmentMesh; // 0x38(0x28)
	struct TSoftObjectPtr<struct UAnimSequence> WeaponAttachmentSequence; // 0x60(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> Player3PHolsterMontage; // 0x88(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> Player3PRetrieveMontage; // 0xb0(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> Player3PFireMontage; // 0xd8(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> Player3PReloadMontage; // 0x100(0x28)
	struct TSoftObjectPtr<struct UAimOffsetBlendSpace> Player3PStandingAimOffset; // 0x128(0x28)
	struct TSoftObjectPtr<struct UAimOffsetBlendSpace> Player3PCrouchedAimOffset; // 0x150(0x28)
	struct TSoftObjectPtr<struct UBlendSpace> Player3PStandingBlendSpace; // 0x178(0x28)
	struct TSoftObjectPtr<struct UBlendSpace> Player3PCrouchedBlendSpace; // 0x1a0(0x28)
	struct TSoftObjectPtr<struct UAnimSequence> Player3PStandingIdleSequence; // 0x1c8(0x28)
	struct TSoftObjectPtr<struct UAnimSequence> Player3PCrouchedIdleSequence; // 0x1f0(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> Player1PFireMontage; // 0x218(0x28)
	struct TSoftObjectPtr<struct UBlendSpace> Player1PStandingBlendSpace; // 0x240(0x28)
	struct TSoftObjectPtr<struct UBlendSpace> Player1PCrouchedBlendSpace; // 0x268(0x28)
	struct TSoftObjectPtr<struct UAimOffsetBlendSpace> Player1PStandingAimOffset; // 0x290(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> Player1PRetrieveMontage; // 0x2b8(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> Player1PReloadMontage; // 0x2e0(0x28)
	SoftClassProperty Player1PCameraShake; // 0x308(0x28)
	SoftClassProperty Player1PADSCameraShake; // 0x330(0x28)
	struct TSoftObjectPtr<struct UAnimSequence> Player1PAdditiveStandGunPose; // 0x358(0x28)
	struct TSoftObjectPtr<struct UAnimSequence> Player1PAdditiveCrouchGunPose; // 0x380(0x28)
};

// ScriptStruct Killstreak.KSAssetOverrideTable_TableRow
// Size: 0xa8 (Inherited: 0x08)
struct FKSAssetOverrideTable_TableRow : public FTableRowBase {
	struct TSoftObjectPtr<struct UKSWeaponAsset> WeaponAsset; // 0x08(0x28)
	struct TSoftObjectPtr<struct UDataTable> WeaponSpecificOverrideTable; // 0x30(0x28)
	int32_t TablePriority; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
	struct FGameplayTagQuery SkinTagQuery; // 0x60(0x48)
};

// ScriptStruct Killstreak.PrefireSkipWindow
// Size: 0x28 (Inherited: 0x00)
struct FPrefireSkipWindow {
	float WindowDuration; // 0x00(0x04)
	float WindowExpiration; // 0x04(0x04)
	struct FString LungeMontageSequence; // 0x08(0x10)
	struct FString TargetMontageSequence; // 0x18(0x10)
};

// ScriptStruct Killstreak.BundledAmmoInfo
// Size: 0x0c (Inherited: 0x00)
struct FBundledAmmoInfo {
	enum class EBundledAmmoType BundleType; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	int32_t ReserveAmmo; // 0x04(0x04)
	int32_t AmmoInClip; // 0x08(0x04)
};

// ScriptStruct Killstreak.KSEquipRepInfo
// Size: 0x14 (Inherited: 0x00)
struct FKSEquipRepInfo {
	bool NoEquipPoint; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FGameplayTag EquipPoint; // 0x04(0x08)
	uint32_t UpdateId; // 0x0c(0x04)
	char UnknownData_10[0x4]; // 0x10(0x04)
};

// ScriptStruct Killstreak.InventoryRestoreInfo
// Size: 0x10 (Inherited: 0x00)
struct FInventoryRestoreInfo {
	struct FGameplayTag EquipPoint; // 0x00(0x08)
	struct UKSItem* Item; // 0x08(0x08)
};

// ScriptStruct Killstreak.WeaponStateGraph
// Size: 0x140 (Inherited: 0x00)
struct FWeaponStateGraph {
	char UnknownData_0[0x140]; // 0x00(0x140)
};

// ScriptStruct Killstreak.WeaponGraphEdge
// Size: 0x02 (Inherited: 0x00)
struct FWeaponGraphEdge {
	enum class EWeaponStateNew OldState; // 0x00(0x01)
	enum class EWeaponStateNew NewState; // 0x01(0x01)
};

// ScriptStruct Killstreak.FullFireRepData
// Size: 0x68 (Inherited: 0x00)
struct FFullFireRepData {
	struct FAimData Aim; // 0x00(0x50)
	bool bIgnoreExtraData; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	struct FRandomStream RandomStream; // 0x54(0x08)
	float Accuracy; // 0x5c(0x04)
	char AmmoAfterThisShot; // 0x60(0x01)
	bool bIgnoreAmmo; // 0x61(0x01)
	char UnknownData_62[0x6]; // 0x62(0x06)
};

// ScriptStruct Killstreak.AncillaryWeaponMeshInfo
// Size: 0x18 (Inherited: 0x00)
struct FAncillaryWeaponMeshInfo {
	struct USkeletalMesh* Mesh; // 0x00(0x08)
	struct FName DefaultAttachSocket; // 0x08(0x08)
	struct FName DefaultDetachSocket; // 0x10(0x08)
};

// ScriptStruct Killstreak.HitDecalInfo
// Size: 0x28 (Inherited: 0x00)
struct FHitDecalInfo {
	struct UMaterialInterface* DecalMaterial; // 0x00(0x08)
	struct FVector Size; // 0x08(0x0c)
	float MinimumScaling; // 0x14(0x04)
	float MaximumScaling; // 0x18(0x04)
	float MinimumAngle; // 0x1c(0x04)
	float MaximumAngle; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Killstreak.WeaponStateChangeRequest
// Size: 0x10 (Inherited: 0x00)
struct FWeaponStateChangeRequest {
	uint16_t RequestID; // 0x00(0x02)
	bool bChangeWeaponState; // 0x02(0x01)
	enum class EWeaponStateNew PreviousState; // 0x03(0x01)
	enum class EWeaponStateNew NextState; // 0x04(0x01)
	bool bChangeWeaponAimMode; // 0x05(0x01)
	enum class EKSCharacterAimMode AimMode; // 0x06(0x01)
	char UnknownData_7[0x1]; // 0x07(0x01)
	struct FRandomStream RandomStream; // 0x08(0x08)
};

// ScriptStruct Killstreak.TargetingModuleTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FTargetingModuleTickFunction : public FTickFunction {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Killstreak.LoadingScreenImageInfo
// Size: 0x70 (Inherited: 0x00)
struct FLoadingScreenImageInfo {
	struct TSoftObjectPtr<struct UTexture2D> LoadingScreenImage; // 0x00(0x28)
	struct FText MapDisplayName; // 0x28(0x18)
	struct FText MapRegion; // 0x40(0x18)
	struct FText MapDescription; // 0x58(0x18)
};

// ScriptStruct Killstreak.LobbyStaticPropInfo
// Size: 0x50 (Inherited: 0x00)
struct FLobbyStaticPropInfo {
	bool Enable; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FName AttachPoint; // 0x04(0x08)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UStaticMesh* StaticMesh; // 0x10(0x08)
	char UnknownData_18[0x8]; // 0x18(0x08)
	struct FTransform TransformOffset; // 0x20(0x30)
};

// ScriptStruct Killstreak.RevealManager
// Size: 0x168 (Inherited: 0x108)
struct FRevealManager : public FFastArraySerializer {
	char UnknownData_108[0x20]; // 0x108(0x20)
	struct TArray<struct FRevealManagerEntry> Reveals; // 0x128(0x10)
	char UnknownData_138[0x10]; // 0x138(0x10)
	struct TArray<struct AKSCharacter*> RequestedLocalReveals; // 0x148(0x10)
	struct AKSCharacter* Owner; // 0x158(0x08)
	char UnknownData_160[0x8]; // 0x160(0x08)
};

// ScriptStruct Killstreak.RevealManagerEntry
// Size: 0x28 (Inherited: 0x0c)
struct FRevealManagerEntry : public FFastArraySerializerItem {
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct AKSCharacter* Target; // 0x10(0x08)
	enum class EPlayerSilhouetteType Type; // 0x18(0x01)
	bool bFill; // 0x19(0x01)
	bool bMark; // 0x1a(0x01)
	char UnknownData_1B[0xd]; // 0x1b(0x0d)
};

// ScriptStruct Killstreak.RevealInfo
// Size: 0x14 (Inherited: 0x00)
struct FRevealInfo {
	char UnknownData_0[0x4]; // 0x00(0x04)
	struct FWeakObjectPtr<struct AKSCharacter> Target; // 0x04(0x08)
	struct FWeakObjectPtr<struct AKSCharacter> Revealer; // 0x0c(0x08)
};

// ScriptStruct Killstreak.TimelineSimulationHandler
// Size: 0x14 (Inherited: 0x00)
struct FTimelineSimulationHandler {
	float ServerTimeStamp; // 0x00(0x04)
	float ErrorTolerance; // 0x04(0x04)
	char bLooping : 1; // 0x08(0x01)
	char bReversePlayback : 1; // 0x08(0x01)
	char bPlaying : 1; // 0x08(0x01)
	char UnknownData_8_3 : 5; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	float PlayRate; // 0x0c(0x04)
	float Position; // 0x10(0x04)
};

// ScriptStruct Killstreak.SoftDataTableInfo
// Size: 0x78 (Inherited: 0x00)
struct FSoftDataTableInfo {
	struct TSoftObjectPtr<struct UDataTable> DataTable; // 0x00(0x28)
	int32_t TablePriority; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct FGameplayTagQuery SkinTagQuery; // 0x30(0x48)
};

// ScriptStruct Killstreak.ActiveThermalPPComponentInfo
// Size: 0x10 (Inherited: 0x00)
struct FActiveThermalPPComponentInfo {
	struct UThermalScopePPComponent* ThermalPPComponent; // 0x00(0x08)
	struct AKSPlayerCameraManager* PlayerCameraManager; // 0x08(0x08)
};

// ScriptStruct Killstreak.TraceCommonEmpty
// Size: 0x01 (Inherited: 0x00)
struct FTraceCommonEmpty {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

