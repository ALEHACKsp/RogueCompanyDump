// Class KillstreakUINew.GuidedMenuCalloutData
// Size: 0x50 (Inherited: 0x28)
struct UGuidedMenuCalloutData : public UObject {
	struct FText HeaderText; // 0x28(0x18)
	struct TArray<struct FGuidedCalloutCardData> CalloutCards; // 0x40(0x10)
};

// Class KillstreakUINew.GuidedMenuCalloutsViewRedirector
// Size: 0x38 (Inherited: 0x28)
struct UGuidedMenuCalloutsViewRedirector : public UPUMG_ViewRedirecter {
	struct UDataTable* GuidedCalloutsTable; // 0x28(0x08)
	char UnknownData_30[0x8]; // 0x30(0x08)

	void SetNPEGuidedCalloutSeen(enum class EConfigPropertyGuidedCalloutScenes GuidedCalloutScene); // Function KillstreakUINew.GuidedMenuCalloutsViewRedirector.SetNPEGuidedCalloutSeen
	bool HasSeenNPEGuidedCallout(enum class EConfigPropertyGuidedCalloutScenes GuidedCalloutScene); // Function KillstreakUINew.GuidedMenuCalloutsViewRedirector.HasSeenNPEGuidedCallout
};

// Class KillstreakUINew.KSWidget
// Size: 0x4e0 (Inherited: 0x4a0)
struct UKSWidget : public UPUMG_Widget {
	bool bIsUIOnlyWidget; // 0x4a0(0x01)
	bool bIsExclusiveMenuWidget; // 0x4a1(0x01)
	char UnknownData_4A2[0x6]; // 0x4a2(0x06)
	struct UTickAnimationManager* TickAnimations; // 0x4a8(0x08)
	struct FDelegate ViewportEvent; // 0x4b0(0x10)
	bool bSubstituteKillCamWorld; // 0x4c0(0x01)
	bool bSubstituteKillCamOwningPlayer; // 0x4c1(0x01)
	bool bWantsKillCamCallbacks; // 0x4c2(0x01)
	char UnknownData_4C3[0x1d]; // 0x4c3(0x1d)

	void UnbindFromViewportSizeChange(); // Function KillstreakUINew.KSWidget.UnbindFromViewportSizeChange
	void TriggerGlobalInvalidate(); // Function KillstreakUINew.KSWidget.TriggerGlobalInvalidate
	void StopTickAnimation(struct FName AnimName); // Function KillstreakUINew.KSWidget.StopTickAnimation
	void SkipToEndTickAnimation(struct FName AnimName); // Function KillstreakUINew.KSWidget.SkipToEndTickAnimation
	void SetAllAnimationsPlaybackSpeed(float PlaybackSpeed); // Function KillstreakUINew.KSWidget.SetAllAnimationsPlaybackSpeed
	void ResumeTickAnimation(struct FName AnimName); // Function KillstreakUINew.KSWidget.ResumeTickAnimation
	void RemoveTickAnimation(struct FName AnimName); // Function KillstreakUINew.KSWidget.RemoveTickAnimation
	void PlayTickAnimation(struct FName AnimName); // Function KillstreakUINew.KSWidget.PlayTickAnimation
	void PauseTickAnimation(struct FName AnimName); // Function KillstreakUINew.KSWidget.PauseTickAnimation
	bool IsInKillCamPlayback(); // Function KillstreakUINew.KSWidget.IsInKillCamPlayback
	void InitializeTickAnimations(); // Function KillstreakUINew.KSWidget.InitializeTickAnimations
	bool GetTickAnimationInfo(struct FName AnimName, struct FTickAnimationParams OutAnimParams); // Function KillstreakUINew.KSWidget.GetTickAnimationInfo
	struct APlayerController* GetNormalOwningPlayer(); // Function KillstreakUINew.KSWidget.GetNormalOwningPlayer
	struct APlayerController* GetKillCamSpectatorController(); // Function KillstreakUINew.KSWidget.GetKillCamSpectatorController
	struct APlayerController* GetActivePlayerController(); // Function KillstreakUINew.KSWidget.GetActivePlayerController
	void BlueprintPrepareKillCamPlayback(); // Function KillstreakUINew.KSWidget.BlueprintPrepareKillCamPlayback
	void BlueprintFinishKillCamPlayback(); // Function KillstreakUINew.KSWidget.BlueprintFinishKillCamPlayback
	void BindToViewportSizeChange(struct FDelegate InViewportEvent); // Function KillstreakUINew.KSWidget.BindToViewportSizeChange
	void AddTickAnimation(struct FName AnimName, float Duration, struct FDelegate UpdateEvent, struct FDelegate FinishedEvent); // Function KillstreakUINew.KSWidget.AddTickAnimation
};

// Class KillstreakUINew.KSAccoladeQueueWidget
// Size: 0x530 (Inherited: 0x4e0)
struct UKSAccoladeQueueWidget : public UKSWidget {
	bool IsBusy; // 0x4e0(0x01)
	char UnknownData_4E1[0x3]; // 0x4e1(0x03)
	int32_t NumInQueue; // 0x4e4(0x04)
	struct FMulticastInlineDelegate OnAccoladeReceived; // 0x4e8(0x10)
	struct FMulticastInlineDelegate OnAccoladeUpdateMultiplier; // 0x4f8(0x10)
	char UnknownData_508[0x28]; // 0x508(0x28)

	void Queue(struct TArray<struct FAccoladeEventEntry> Accolades); // Function KillstreakUINew.KSAccoladeQueueWidget.Queue
	void OnAccoladeRemovedFromScreen(struct FAccoladeDisplayInfo AccoladeRemoved); // Function KillstreakUINew.KSAccoladeQueueWidget.OnAccoladeRemovedFromScreen
	bool GetNext(struct FAccoladeDisplayInfo Accolade); // Function KillstreakUINew.KSAccoladeQueueWidget.GetNext
	void ClearAccoladeQueue(); // Function KillstreakUINew.KSAccoladeQueueWidget.ClearAccoladeQueue
};

// Class KillstreakUINew.KSActiveBonusesWidget
// Size: 0x4e8 (Inherited: 0x4e0)
struct UKSActiveBonusesWidget : public UKSWidget {
	struct UDataTable* EventLookupTable; // 0x4e0(0x08)

	void GetBonusAppliedToLastMatch(struct TArray<struct FKSLimitedTimeEventMetadataRow> ActiveEvents); // Function KillstreakUINew.KSActiveBonusesWidget.GetBonusAppliedToLastMatch
};

// Class KillstreakUINew.KSPawnWidget
// Size: 0x500 (Inherited: 0x4e0)
struct UKSPawnWidget : public UKSWidget {
	char UnknownData_4E0[0x20]; // 0x4e0(0x20)

	void SetPlayerStateUIRelevanceChanged(); // Function KillstreakUINew.KSPawnWidget.SetPlayerStateUIRelevanceChanged
	void SetPawn(struct AKSCharacter* NewPawn); // Function KillstreakUINew.KSPawnWidget.SetPawn
	void PreClearPlayerState(); // Function KillstreakUINew.KSPawnWidget.PreClearPlayerState
	void PreClearPawn(); // Function KillstreakUINew.KSPawnWidget.PreClearPawn
	void PostSetPlayerState(); // Function KillstreakUINew.KSPawnWidget.PostSetPlayerState
	void PostSetPawn(); // Function KillstreakUINew.KSPawnWidget.PostSetPawn
	void OnBoundPlayerStateDestroyed(struct AActor* DestroyedActor); // Function KillstreakUINew.KSPawnWidget.OnBoundPlayerStateDestroyed
	void OnBoundPawnDestroyed(struct AActor* DestroyedActor); // Function KillstreakUINew.KSPawnWidget.OnBoundPawnDestroyed
	struct AKSPlayerState* GetPlayerState(); // Function KillstreakUINew.KSPawnWidget.GetPlayerState
	struct AKSCharacterBase* GetPawnBase(); // Function KillstreakUINew.KSPawnWidget.GetPawnBase
	struct AKSCharacter* GetPawn(); // Function KillstreakUINew.KSPawnWidget.GetPawn
};

// Class KillstreakUINew.KSPawnInventoryWidget
// Size: 0x570 (Inherited: 0x500)
struct UKSPawnInventoryWidget : public UKSPawnWidget {
	struct TMap<uint16_t, struct UKSWeaponComponentWidget*> EquipmentWidgets; // 0x500(0x50)
	char UnknownData_550[0x20]; // 0x550(0x20)

	bool RemoveWidgetFor(struct UKSWeaponComponent* InWeaponComponent); // Function KillstreakUINew.KSPawnInventoryWidget.RemoveWidgetFor
	struct UKSWeaponComponentWidget* GetWidgetForWeaponComponent(struct UKSWeaponComponent* InWeaponComponent); // Function KillstreakUINew.KSPawnInventoryWidget.GetWidgetForWeaponComponent
	void EquipmentRemoved(struct UKSWeaponComponent* RemovedEquipment); // Function KillstreakUINew.KSPawnInventoryWidget.EquipmentRemoved
	void EquipmentEndActive(struct UKSWeaponComponent* InactiveEquipment); // Function KillstreakUINew.KSPawnInventoryWidget.EquipmentEndActive
	void EquipmentBecomeActive(struct UKSWeaponComponent* ActiveEquipment); // Function KillstreakUINew.KSPawnInventoryWidget.EquipmentBecomeActive
	void EquipmentAdded(struct UKSWeaponComponent* AddedEquipment); // Function KillstreakUINew.KSPawnInventoryWidget.EquipmentAdded
	struct UKSWeaponComponentWidget* CreateWeaponComponentWidgetFor(struct UObject* WorldContextObject, struct UKSWeaponComponent* InWeaponComponent, struct UKSWeaponComponentWidget* WidgetClass, struct APlayerController* OwningPlayer); // Function KillstreakUINew.KSPawnInventoryWidget.CreateWeaponComponentWidgetFor
};

// Class KillstreakUINew.KSActiveWeaponComponentWidget
// Size: 0x5a8 (Inherited: 0x570)
struct UKSActiveWeaponComponentWidget : public UKSPawnInventoryWidget {
	int32_t ActiveWeaponSlot; // 0x570(0x04)
	char UnknownData_574[0x4]; // 0x574(0x04)
	struct FGameplayTagContainer EquipPointsToIgnore; // 0x578(0x20)
	bool bDelayClearUntilNextTick; // 0x598(0x01)
	char UnknownData_599[0x3]; // 0x599(0x03)
	struct FWeakObjectPtr<struct UKSWeaponComponent> WeakActiveWeaponComponentPtr; // 0x59c(0x08)
	char UnknownData_5A4[0x4]; // 0x5a4(0x04)

	void PreClearActiveWeaponComponent(); // Function KillstreakUINew.KSActiveWeaponComponentWidget.PreClearActiveWeaponComponent
	void PostSetActiveWeaponComponent(); // Function KillstreakUINew.KSActiveWeaponComponentWidget.PostSetActiveWeaponComponent
	struct UKSWeaponComponent* GetActiveWeaponComponent(); // Function KillstreakUINew.KSActiveWeaponComponentWidget.GetActiveWeaponComponent
};

// Class KillstreakUINew.KSActivity_ViewRedirector
// Size: 0x38 (Inherited: 0x28)
struct UKSActivity_ViewRedirector : public UPUMG_ViewRedirecter {
	struct TArray<struct TSoftObjectPtr<struct UKSActivity>> ActivitiesToCheck; // 0x28(0x10)

	struct UKSActivityManagerBase* GetRelevantActivityManager(struct UKSGameInstance* GameInstance); // Function KillstreakUINew.KSActivity_ViewRedirector.GetRelevantActivityManager
};

// Class KillstreakUINew.KSAimAssistDebugWidget
// Size: 0x240 (Inherited: 0x238)
struct UKSAimAssistDebugWidget : public UUserWidget {
	bool bDrawAimAssistBoundary; // 0x238(0x01)
	bool bDrawHeadAimCorrectionBoundary; // 0x239(0x01)
	bool bDrawMagnetismDebug; // 0x23a(0x01)
	bool bDrawTargetInfo; // 0x23b(0x01)
	char UnknownData_23C[0x4]; // 0x23c(0x04)

	struct AKSPlayerController* GetOwningKSPlayer(); // Function KillstreakUINew.KSAimAssistDebugWidget.GetOwningKSPlayer
	struct UKSAimAssistComponent* GetAimAssistComponent(); // Function KillstreakUINew.KSAimAssistDebugWidget.GetAimAssistComponent
};

// Class KillstreakUINew.KSMapIconWidgetBase
// Size: 0x2c0 (Inherited: 0x238)
struct UKSMapIconWidgetBase : public UUserWidget {
	bool bDoesIconRotate; // 0x238(0x01)
	char UnknownData_239[0x3]; // 0x239(0x03)
	float MarkerAnchorHeight; // 0x23c(0x04)
	float HeightThreshold; // 0x240(0x04)
	char UnknownData_244[0x4]; // 0x244(0x04)
	float CachedRawMetersAway; // 0x248(0x04)
	int32_t UniqueId; // 0x24c(0x04)
	struct FWeakObjectPtr<struct AKSPlayerState> CreatingPlayer; // 0x250(0x08)
	enum class EDisplayType ParentMapDisplayType; // 0x258(0x01)
	char UnknownData_259[0x3]; // 0x259(0x03)
	struct FWeakObjectPtr<struct AActor> AssociatedActor; // 0x25c(0x08)
	struct FWeakObjectPtr<struct UObject> AssociatedObject; // 0x264(0x08)
	struct FVector DefaultLocation; // 0x26c(0x0c)
	float Lifespan; // 0x278(0x04)
	struct FWeakObjectPtr<struct UKSMapWidgetBase> ParentMapWidget; // 0x27c(0x08)
	struct FVector2D ScreenMargins; // 0x284(0x08)
	float CenterPercentageWidth; // 0x28c(0x04)
	float CenterPercentageHeight; // 0x290(0x04)
	char UnknownData_294[0x10]; // 0x294(0x10)
	float HoverDelaySeconds; // 0x2a4(0x04)
	char UnknownData_2A8[0x18]; // 0x2a8(0x18)

	void UpdateScreenRegion(); // Function KillstreakUINew.KSMapIconWidgetBase.UpdateScreenRegion
	void UpdateMetersAway(int32_t Meters); // Function KillstreakUINew.KSMapIconWidgetBase.UpdateMetersAway
	void UpdateMeetsHeightThreshold(bool bHeight, bool bDepth); // Function KillstreakUINew.KSMapIconWidgetBase.UpdateMeetsHeightThreshold
	enum class ESlateVisibility Update(); // Function KillstreakUINew.KSMapIconWidgetBase.Update
	bool ShouldUpdateHover(); // Function KillstreakUINew.KSMapIconWidgetBase.ShouldUpdateHover
	bool ShouldUpdate(); // Function KillstreakUINew.KSMapIconWidgetBase.ShouldUpdate
	void SetScreenRegion(enum class EIconMarkerScreenRegion ScreenRegion); // Function KillstreakUINew.KSMapIconWidgetBase.SetScreenRegion
	void SetLifeSpan(float InLifespan); // Function KillstreakUINew.KSMapIconWidgetBase.SetLifeSpan
	void SetArrowAngle(float Angle); // Function KillstreakUINew.KSMapIconWidgetBase.SetArrowAngle
	void OnUnhoverTimerComplete(); // Function KillstreakUINew.KSMapIconWidgetBase.OnUnhoverTimerComplete
	void OnHoverTimerComplete(); // Function KillstreakUINew.KSMapIconWidgetBase.OnHoverTimerComplete
	void OnHoverStateChanged(enum class EIconHoverState NewHoverState); // Function KillstreakUINew.KSMapIconWidgetBase.OnHoverStateChanged
	void OnAssociatedActorDestroyed(struct AActor* Actor); // Function KillstreakUINew.KSMapIconWidgetBase.OnAssociatedActorDestroyed
	void IsScreenRegion(bool InsideCenter, bool InsideMargins); // Function KillstreakUINew.KSMapIconWidgetBase.IsScreenRegion
	bool IsInCenteredScreenRect(float PositionX, float PositionY, float XMargin, float YMargin); // Function KillstreakUINew.KSMapIconWidgetBase.IsInCenteredScreenRect
	bool IsHovering(); // Function KillstreakUINew.KSMapIconWidgetBase.IsHovering
	float GetWorldYaw(); // Function KillstreakUINew.KSMapIconWidgetBase.GetWorldYaw
	struct FVector GetWorldPosition(); // Function KillstreakUINew.KSMapIconWidgetBase.GetWorldPosition
	enum class EIconHoverState GetHoverState(); // Function KillstreakUINew.KSMapIconWidgetBase.GetHoverState
	float GetEdgeArrowAngleBase(float Angle); // Function KillstreakUINew.KSMapIconWidgetBase.GetEdgeArrowAngleBase
	float GetDistanceToIcon(); // Function KillstreakUINew.KSMapIconWidgetBase.GetDistanceToIcon
	void GetArrowPosition(bool IsIconVisible, float Angle, struct FVector2D ArrowPosition); // Function KillstreakUINew.KSMapIconWidgetBase.GetArrowPosition
};

// Class KillstreakUINew.KSAllyMarkerWidget
// Size: 0x308 (Inherited: 0x2c0)
struct UKSAllyMarkerWidget : public UKSMapIconWidgetBase {
	struct UWidget* ArrowWidget; // 0x2c0(0x08)
	struct UWidget* NameOrStatusWidget; // 0x2c8(0x08)
	struct UWidget* DownedSectionWidget; // 0x2d0(0x08)
	struct UDataTable* ContextualPingTypesDT; // 0x2d8(0x08)
	struct UDataTable* ContextualPingMessagesDT; // 0x2e0(0x08)
	char UnknownData_2E8[0x20]; // 0x2e8(0x20)

	void View_SetSelfPingIcon(enum class EPingType PingType, enum class EPingMessage PingMessage); // Function KillstreakUINew.KSAllyMarkerWidget.View_SetSelfPingIcon
	void View_SetRevivePercent(float PercentValue); // Function KillstreakUINew.KSAllyMarkerWidget.View_SetRevivePercent
	void View_SetNameText(struct FText NameText); // Function KillstreakUINew.KSAllyMarkerWidget.View_SetNameText
	void View_SetMode(enum class EAllyMarkerState AllyMarkerState, bool HasBomb, bool HasSelfPing); // Function KillstreakUINew.KSAllyMarkerWidget.View_SetMode
	void View_SetJob(struct UKSJobItem* Job); // Function KillstreakUINew.KSAllyMarkerWidget.View_SetJob
	void View_SetHealthPercent(float PercentValue); // Function KillstreakUINew.KSAllyMarkerWidget.View_SetHealthPercent
	void View_AcknowledgeSelfPing(struct AKSPlayerState* AcknowledingPlayer); // Function KillstreakUINew.KSAllyMarkerWidget.View_AcknowledgeSelfPing
	void SetPlayerName(); // Function KillstreakUINew.KSAllyMarkerWidget.SetPlayerName
	bool IsOwningPlayer(); // Function KillstreakUINew.KSAllyMarkerWidget.IsOwningPlayer
	void HandleUIRelevantChanged(struct AKSPlayerState* InPlayerState); // Function KillstreakUINew.KSAllyMarkerWidget.HandleUIRelevantChanged
	void HandleRemoveSelfPing(struct AKSPlayerState* PingingPlayer); // Function KillstreakUINew.KSAllyMarkerWidget.HandleRemoveSelfPing
	void HandlePlayerDown(struct FCombatEventInfo CombatEventInfo, int32_t ExpBonus); // Function KillstreakUINew.KSAllyMarkerWidget.HandlePlayerDown
	void HandlePlayerDeath(struct FCombatEventInfo DeathInfo); // Function KillstreakUINew.KSAllyMarkerWidget.HandlePlayerDeath
	void HandleOnJobChanged(); // Function KillstreakUINew.KSAllyMarkerWidget.HandleOnJobChanged
	void HandleChangeSelfPing(struct AKSPlayerState* PingingPlayer, struct AKSPlayerState* AcknowledgingPlayer); // Function KillstreakUINew.KSAllyMarkerWidget.HandleChangeSelfPing
	void HandleBombStateChanged(struct FKSNeutralBombState BombState); // Function KillstreakUINew.KSAllyMarkerWidget.HandleBombStateChanged
	void HandleAddSelfPing(struct AKSPlayerState* PingingPlayer, enum class EPingType PingType, enum class EPingMessage PingMessage); // Function KillstreakUINew.KSAllyMarkerWidget.HandleAddSelfPing
	bool GetPingIconByType(enum class EPingType PingType, struct TSoftObjectPtr<struct UTexture2D> PingIcon); // Function KillstreakUINew.KSAllyMarkerWidget.GetPingIconByType
	bool GetPingIconByMessage(enum class EPingMessage PingMessage, struct TSoftObjectPtr<struct UTexture2D> PingIcon); // Function KillstreakUINew.KSAllyMarkerWidget.GetPingIconByMessage
	bool GetPingColorByType(enum class EPingType PingType, struct FLinearColor PingColor); // Function KillstreakUINew.KSAllyMarkerWidget.GetPingColorByType
	struct FVector2D GetArrowPositionFromAngleBlueprint(float Angle); // Function KillstreakUINew.KSAllyMarkerWidget.GetArrowPositionFromAngleBlueprint
	bool FindRowByType(enum class EPingType PingType, struct FContextualPingTypesRow ContextualPingTypesRow); // Function KillstreakUINew.KSAllyMarkerWidget.FindRowByType
	bool FindRowByMessage(enum class EPingMessage PingMessage, struct FContextualPingMessagesRow ContextualPingMessagesRow); // Function KillstreakUINew.KSAllyMarkerWidget.FindRowByMessage
	void ChangeOwnerContentVisibility(bool bVisible); // Function KillstreakUINew.KSAllyMarkerWidget.ChangeOwnerContentVisibility
};

// Class KillstreakUINew.KSWeaponWidget
// Size: 0x4e8 (Inherited: 0x4e0)
struct UKSWeaponWidget : public UKSWidget {
	char UnknownData_4E0[0x8]; // 0x4e0(0x08)

	void SetOwningWeapon(struct AKSWeapon* InWeapon); // Function KillstreakUINew.KSWeaponWidget.SetOwningWeapon
	void PreClearWeapon(); // Function KillstreakUINew.KSWeaponWidget.PreClearWeapon
	void PostSetWeapon(); // Function KillstreakUINew.KSWeaponWidget.PostSetWeapon
	void OtherWeaponUpdate(); // Function KillstreakUINew.KSWeaponWidget.OtherWeaponUpdate
	void OnOwningWeaponDestroyed(struct AActor* DestroyedWeapon); // Function KillstreakUINew.KSWeaponWidget.OnOwningWeaponDestroyed
	struct AKSWeapon* GetOwningWeapon(); // Function KillstreakUINew.KSWeaponWidget.GetOwningWeapon
};

// Class KillstreakUINew.KSAmmoWidget
// Size: 0x508 (Inherited: 0x4e8)
struct UKSAmmoWidget : public UKSWeaponWidget {
	int32_t CachedAmmoInClip; // 0x4e8(0x04)
	int32_t CachedClipSize; // 0x4ec(0x04)
	int32_t CachedInReserve; // 0x4f0(0x04)
	bool CachedIsReloading; // 0x4f4(0x01)
	char UnknownData_4F5[0x13]; // 0x4f5(0x13)

	void StopReloading(); // Function KillstreakUINew.KSAmmoWidget.StopReloading
	void StartReloading(); // Function KillstreakUINew.KSAmmoWidget.StartReloading
	void OnAmmoChanged(int32_t OldInClip, int32_t OldClipSize, int32_t OldReserve, int32_t NewInClip, int32_t NewClipSize, int32_t NewReserve); // Function KillstreakUINew.KSAmmoWidget.OnAmmoChanged
};

// Class KillstreakUINew.KSAnnouncementQueuedMessageWidget
// Size: 0x528 (Inherited: 0x4e0)
struct UKSAnnouncementQueuedMessageWidget : public UKSWidget {
	struct FMulticastInlineDelegate OnEndDisplay; // 0x4e0(0x10)
	struct FAnnouncementData AnnouncementData; // 0x4f0(0x38)

	void DisplayAnnouncement(); // Function KillstreakUINew.KSAnnouncementQueuedMessageWidget.DisplayAnnouncement
};

// Class KillstreakUINew.KSAnnouncementQueueWidget
// Size: 0x510 (Inherited: 0x4e0)
struct UKSAnnouncementQueueWidget : public UKSWidget {
	bool IsBusy; // 0x4e0(0x01)
	char UnknownData_4E1[0x7]; // 0x4e1(0x07)
	struct FMulticastInlineDelegate OnReadyForNextAnnouncement; // 0x4e8(0x10)
	char UnknownData_4F8[0x18]; // 0x4f8(0x18)

	void Queue(struct FAnnouncementData Announcement); // Function KillstreakUINew.KSAnnouncementQueueWidget.Queue
	bool GetNext(struct FAnnouncementData Announcement); // Function KillstreakUINew.KSAnnouncementQueueWidget.GetNext
	void ClearAnnoucementQueue(); // Function KillstreakUINew.KSAnnouncementQueueWidget.ClearAnnoucementQueue
};

// Class KillstreakUINew.KSAsyncImage
// Size: 0x270 (Inherited: 0x260)
struct UKSAsyncImage : public UPUMG_AsyncImage {
	struct UMaterialInstanceDynamic* MaterialToUse; // 0x260(0x08)
	struct FName MaterialParameter; // 0x268(0x08)

	void SetMaterialToUse(struct UMaterialInstanceDynamic* InMID); // Function KillstreakUINew.KSAsyncImage.SetMaterialToUse
	void SetBrushFromTextureOnItem(struct UPlatformInventoryItem* Item, struct TSoftObjectPtr<struct UTexture2D> Texture, bool bMatchSize); // Function KillstreakUINew.KSAsyncImage.SetBrushFromTextureOnItem
	void SetBrushFromItemIcon(struct UPlatformInventoryItem* Item, bool bMatchSize); // Function KillstreakUINew.KSAsyncImage.SetBrushFromItemIcon
};

// Class KillstreakUINew.KSComponentReticleWidgetBase
// Size: 0x5c8 (Inherited: 0x5a8)
struct UKSComponentReticleWidgetBase : public UKSActiveWeaponComponentWidget {
	float ShrinkAnimationTime; // 0x5a8(0x04)
	float BlockedShotIconMaxScale; // 0x5ac(0x04)
	float BlockedShotIconMinScale; // 0x5b0(0x04)
	float BlockedShotMinScaleSqDist; // 0x5b4(0x04)
	bool bGrenadeCooking; // 0x5b8(0x01)
	bool bInADS; // 0x5b9(0x01)
	bool bCachedBlockIconVisible; // 0x5ba(0x01)
	char UnknownData_5BB[0x1]; // 0x5bb(0x01)
	float CachedWeaponAccuracy; // 0x5bc(0x04)
	float CachedReticleOffset; // 0x5c0(0x04)
	char UnknownData_5C4[0x4]; // 0x5c4(0x04)

	void ViewedPawnInstigatedDamageNotify(struct FCombatEventInfo DamageInfo); // Function KillstreakUINew.KSComponentReticleWidgetBase.ViewedPawnInstigatedDamageNotify
	void UpdateReticleOffset(float OffsetFromCenterScreen); // Function KillstreakUINew.KSComponentReticleWidgetBase.UpdateReticleOffset
	void UpdateBlockedShotIcon(bool IconVisible, struct FVector2D Translation, struct FVector2D IconScale); // Function KillstreakUINew.KSComponentReticleWidgetBase.UpdateBlockedShotIcon
	void CalculateReticleOffset(float DeltaTime); // Function KillstreakUINew.KSComponentReticleWidgetBase.CalculateReticleOffset
	void CalculateBlockedShotIcon(); // Function KillstreakUINew.KSComponentReticleWidgetBase.CalculateBlockedShotIcon
};

// Class KillstreakUINew.ContextActionData
// Size: 0x88 (Inherited: 0x28)
struct UContextActionData : public UObject {
	struct FName RowName; // 0x28(0x08)
	struct FContextAction RowData; // 0x30(0x48)
	struct FDelegate OnContextAction; // 0x78(0x10)

	void TriggerContextAction(); // Function KillstreakUINew.ContextActionData.TriggerContextAction
};

// Class KillstreakUINew.KSContextBarWidget
// Size: 0x548 (Inherited: 0x4e0)
struct UKSContextBarWidget : public UKSWidget {
	struct UDataTable* ContextActionDT; // 0x4e0(0x08)
	struct TMap<struct FName, struct FRouteContextInfo> RouteContextInfoMap; // 0x4e8(0x50)
	struct FName ActiveRoute; // 0x538(0x08)
	struct FName OverrideRoute; // 0x540(0x08)

	void UpdateContextActions(struct TArray<struct UContextActionData*> ContextActions, struct FName CurrentRoute); // Function KillstreakUINew.KSContextBarWidget.UpdateContextActions
	void SetPrompts(struct FName Route, struct TArray<struct FName> ContextNames); // Function KillstreakUINew.KSContextBarWidget.SetPrompts
	void SetPromptAction(struct FName Route, struct FName ContextName, struct FDelegate EventCallback); // Function KillstreakUINew.KSContextBarWidget.SetPromptAction
	void SetPrompt(struct FName Route, struct FName ContextName); // Function KillstreakUINew.KSContextBarWidget.SetPrompt
	void SetOverrideRoute(struct FName Route); // Function KillstreakUINew.KSContextBarWidget.SetOverrideRoute
	void SetActiveRoute(struct FName Route); // Function KillstreakUINew.KSContextBarWidget.SetActiveRoute
	void RefreshContextBar(); // Function KillstreakUINew.KSContextBarWidget.RefreshContextBar
	void OverrideKeyButtons(); // Function KillstreakUINew.KSContextBarWidget.OverrideKeyButtons
	struct FName GetCurrentContextRoute(); // Function KillstreakUINew.KSContextBarWidget.GetCurrentContextRoute
	void ClearPromptByKey(struct FName Route, struct FKey Key); // Function KillstreakUINew.KSContextBarWidget.ClearPromptByKey
	void ClearPrompt(struct FName Route, struct FName ContextName); // Function KillstreakUINew.KSContextBarWidget.ClearPrompt
	void ClearOverrideRoute(); // Function KillstreakUINew.KSContextBarWidget.ClearOverrideRoute
	void ClearAllPrompts(struct FName Route); // Function KillstreakUINew.KSContextBarWidget.ClearAllPrompts
};

// Class KillstreakUINew.KSContextualPingMarkerWidget
// Size: 0x348 (Inherited: 0x2c0)
struct UKSContextualPingMarkerWidget : public UKSMapIconWidgetBase {
	struct FMulticastInlineDelegate OnPingRemovedCalled; // 0x2c0(0x10)
	struct FMulticastInlineDelegate OnPingChangedCalled; // 0x2d0(0x10)
	struct FPingInfo CurrentPingInfo; // 0x2e0(0x50)
	struct UKSPingManager* PingManager; // 0x330(0x08)
	struct UDataTable* ContextualPingTypesDT; // 0x338(0x08)
	struct UDataTable* ContextualPingMessagesDT; // 0x340(0x08)

	void SetupPingOnReady(); // Function KillstreakUINew.KSContextualPingMarkerWidget.SetupPingOnReady
	void SetPingInfo(struct FPingInfo PingInfoVal); // Function KillstreakUINew.KSContextualPingMarkerWidget.SetPingInfo
	void OnPingUnhovered(int32_t PingId, struct AKSPlayerState* PingingPlayer); // Function KillstreakUINew.KSContextualPingMarkerWidget.OnPingUnhovered
	void OnPingHovered(int32_t PingId, struct AKSPlayerState* PingingPlayer); // Function KillstreakUINew.KSContextualPingMarkerWidget.OnPingHovered
	void OnInitializePing(); // Function KillstreakUINew.KSContextualPingMarkerWidget.OnInitializePing
	bool IsInvisiblePingType(enum class EPingType PingType); // Function KillstreakUINew.KSContextualPingMarkerWidget.IsInvisiblePingType
	void HandleOnContextualPingRemoved(int32_t PingId, struct AKSPlayerState* PingingPlayer); // Function KillstreakUINew.KSContextualPingMarkerWidget.HandleOnContextualPingRemoved
	void HandleOnContextualPingChanged(int32_t PingId, struct AKSPlayerState* PingingPlayer, struct AKSPlayerState* AcknowledgingPlayer); // Function KillstreakUINew.KSContextualPingMarkerWidget.HandleOnContextualPingChanged
	float GetPingLifeSpan(enum class EPingType PingType); // Function KillstreakUINew.KSContextualPingMarkerWidget.GetPingLifeSpan
	bool GetPingIconByType(enum class EPingType PingType, struct TSoftObjectPtr<struct UTexture2D> PingIcon); // Function KillstreakUINew.KSContextualPingMarkerWidget.GetPingIconByType
	bool GetPingIconByMessage(enum class EPingMessage PingMessage, struct TSoftObjectPtr<struct UTexture2D> PingIcon); // Function KillstreakUINew.KSContextualPingMarkerWidget.GetPingIconByMessage
	bool GetPingColorByType(enum class EPingType PingType, struct FLinearColor PingColor); // Function KillstreakUINew.KSContextualPingMarkerWidget.GetPingColorByType
	bool FindRowByType(enum class EPingType PingType, struct FContextualPingTypesRow ContextualPingTypesRow); // Function KillstreakUINew.KSContextualPingMarkerWidget.FindRowByType
	bool FindRowByMessage(enum class EPingMessage PingMessage, struct FContextualPingMessagesRow ContextualPingMessagesRow); // Function KillstreakUINew.KSContextualPingMarkerWidget.FindRowByMessage
};

// Class KillstreakUINew.KSCustomizationSelection
// Size: 0x4e8 (Inherited: 0x4e0)
struct UKSCustomizationSelection : public UKSWidget {
	char UnknownData_4E0[0x8]; // 0x4e0(0x08)

	void SetWingSuitAsset(struct UKSWeaponAsset* WingSuit); // Function KillstreakUINew.KSCustomizationSelection.SetWingSuitAsset
	void OnVendorLoaded(int32_t GroupId, struct TArray<int32_t> VendorIds); // Function KillstreakUINew.KSCustomizationSelection.OnVendorLoaded
	bool GetWingSuitItems(struct TArray<struct UPUMG_StoreItem*> WingSuitSkinItems); // Function KillstreakUINew.KSCustomizationSelection.GetWingSuitItems
	struct UKSWeaponAsset* GetWingSuitAsset(); // Function KillstreakUINew.KSCustomizationSelection.GetWingSuitAsset
	bool GetWeaponSlotItems(enum class EWeaponSlot WeaponSlotType, struct UKSJobItem* JobItem, struct TArray<struct UPUMG_StoreItem*> WeaponSkinItems); // Function KillstreakUINew.KSCustomizationSelection.GetWeaponSlotItems
	bool GetWeaponItem(enum class EWeaponSlot WeaponSlotType, struct UKSJobItem* JobItem, struct UKSWeaponAsset* Weapon); // Function KillstreakUINew.KSCustomizationSelection.GetWeaponItem
	bool GetSkinItemsForJobItem(struct UKSJobItem* JobItem, struct TArray<struct UPUMG_StoreItem*> JobSkinItems); // Function KillstreakUINew.KSCustomizationSelection.GetSkinItemsForJobItem
	bool GetRadialMenuItems(struct TSoftObjectPtr<struct UKSJobItem> ForJobItem, struct TArray<struct UPUMG_StoreItem*> RadialMenuItems, int32_t LootTableId); // Function KillstreakUINew.KSCustomizationSelection.GetRadialMenuItems
	struct TArray<struct UPUMG_StoreItem*> GetItemsForSlot(enum class EMercCosmeticSlot SlotType, enum class EWeaponSlot WeaponSlotType, struct UKSJobItem* JobItem); // Function KillstreakUINew.KSCustomizationSelection.GetItemsForSlot
	struct UKSStoreItemHelper* GetItemHelper(); // Function KillstreakUINew.KSCustomizationSelection.GetItemHelper
};

// Class KillstreakUINew.KSDataSocialCategory
// Size: 0xe0 (Inherited: 0x28)
struct UKSDataSocialCategory : public UObject {
	struct FMulticastInlineDelegate OnPlayersUpdated; // 0x28(0x10)
	struct FMulticastInlineDelegate OnHeaderUpdated; // 0x38(0x10)
	struct FMulticastInlineDelegate OnMessageUpdated; // 0x48(0x10)
	char UnknownData_58[0x78]; // 0x58(0x78)
	struct TArray<struct UKSDataSocialPlayer*> SortedPlayerList; // 0xd0(0x10)

	bool TryConsumeOpenOnUpdate(); // Function KillstreakUINew.KSDataSocialCategory.TryConsumeOpenOnUpdate
	void SetOpenOnUpdate(bool Value); // Function KillstreakUINew.KSDataSocialCategory.SetOpenOnUpdate
	void SetMessageText(bool bProcessing, struct FText MessageText); // Function KillstreakUINew.KSDataSocialCategory.SetMessageText
	void SetHeaderText(struct FText Header); // Function KillstreakUINew.KSDataSocialCategory.SetHeaderText
	int32_t Num(); // Function KillstreakUINew.KSDataSocialCategory.Num
	bool IsProcessing(); // Function KillstreakUINew.KSDataSocialCategory.IsProcessing
	struct TArray<struct UKSDataSocialPlayer*> GetPlayerList(); // Function KillstreakUINew.KSDataSocialCategory.GetPlayerList
	struct FText GetMessageText(); // Function KillstreakUINew.KSDataSocialCategory.GetMessageText
	struct FText GetHeaderText(); // Function KillstreakUINew.KSDataSocialCategory.GetHeaderText
	char BP_GetSectionValue(); // Function KillstreakUINew.KSDataSocialCategory.BP_GetSectionValue
};

// Class KillstreakUINew.KSDataSocialPlayer
// Size: 0x40 (Inherited: 0x28)
struct UKSDataSocialPlayer : public UObject {
	struct FMulticastInlineDelegate OnDataUpdate; // 0x28(0x10)
	struct UKSPlayerInfo* Info; // 0x38(0x08)

	void KSSocialPlayerUpdate__DelegateSignature(struct UKSPlayerInfo* playerinfo); // DelegateFunction KillstreakUINew.KSDataSocialPlayer.KSSocialPlayerUpdate__DelegateSignature
	bool IsValid(); // Function KillstreakUINew.KSDataSocialPlayer.IsValid
	struct UKSPlayerInfo* GetPlayerInfo(); // Function KillstreakUINew.KSDataSocialPlayer.GetPlayerInfo
};

// Class KillstreakUINew.KSDebugMenu
// Size: 0x4f0 (Inherited: 0x4e0)
struct UKSDebugMenu : public UKSWidget {
	struct TArray<struct FDebugMenuCommandInfo> DebugCommands; // 0x4e0(0x10)

	bool GetSubmenu(struct FDebugMenuCommandInfo BaseCommand, struct TArray<struct FDebugMenuCommandInfo> Submenu); // Function KillstreakUINew.KSDebugMenu.GetSubmenu
	void GetSortedBaseDebugCommands(struct TArray<struct FDebugMenuCommandInfo> SortedCommands); // Function KillstreakUINew.KSDebugMenu.GetSortedBaseDebugCommands
	enum class EConsoleCommandParamType GetParamTypeForSubCommand(struct FString BaseCommandString); // Function KillstreakUINew.KSDebugMenu.GetParamTypeForSubCommand
};

// Class KillstreakUINew.KSEditableTextBox
// Size: 0xa40 (Inherited: 0xa30)
struct UKSEditableTextBox : public UEditableTextBox {
	struct FDelegate OnKeyDown; // 0xa30(0x10)
};

// Class KillstreakUINew.KSViewedPawnWidget
// Size: 0x510 (Inherited: 0x500)
struct UKSViewedPawnWidget : public UKSPawnWidget {
	char UnknownData_500[0x10]; // 0x500(0x10)
};

// Class KillstreakUINew.KSEMODataFactory
// Size: 0x148 (Inherited: 0x38)
struct UKSEMODataFactory : public UPUMG_DataFactory {
	char UnknownData_38[0xc]; // 0x38(0x0c)
	bool haveRecieveMatchReport; // 0x44(0x01)
	char UnknownData_45[0xa3]; // 0x45(0xa3)
	struct FMulticastInlineDelegate OnRewardsRecieved; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnPlayerXpProgressRecieved; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnPlayerReputationProgressRecieved; // 0x108(0x10)
	struct FMulticastInlineDelegate OnRogueMasteryProgressReceived; // 0x118(0x10)
	struct FMulticastInlineDelegate OnRankedProgressReceived; // 0x128(0x10)
	struct FMulticastInlineDelegate OnMiniBattlePassProgressReceived; // 0x138(0x10)

	void SetupTestData(int32_t PlayerXp, int32_t RankedXp, int32_t RogueXp, int32_t ReputationEarned); // Function KillstreakUINew.KSEMODataFactory.SetupTestData
	bool IsLocalPlayer(int64_t PlayerId); // Function KillstreakUINew.KSEMODataFactory.IsLocalPlayer
	void HandlePlayerRewards(struct FPlayerRewardsSummary PlayerRewardSummary, bool bFakeTestData); // Function KillstreakUINew.KSEMODataFactory.HandlePlayerRewards
	void HandleEOMDetail(); // Function KillstreakUINew.KSEMODataFactory.HandleEOMDetail
	struct FScoreboardStats GetScoreboardStats(); // Function KillstreakUINew.KSEMODataFactory.GetScoreboardStats
	struct FPlayerRewardsSummary GetPlayerRewardsSummary(); // Function KillstreakUINew.KSEMODataFactory.GetPlayerRewardsSummary
	int32_t GetLastMatchQueueId(); // Function KillstreakUINew.KSEMODataFactory.GetLastMatchQueueId
	bool FindReputationProgressionActivity(struct UKSActivityInstance* ReputationProgressionActivity); // Function KillstreakUINew.KSEMODataFactory.FindReputationProgressionActivity
	bool FindRankedProgressionActivity(struct UKSActivityInstance* RankedProgressionActivity); // Function KillstreakUINew.KSEMODataFactory.FindRankedProgressionActivity
	bool FindPlayerXpProgressionActivity(struct UKSActivityInstance* PlayerXpProgressionActivity); // Function KillstreakUINew.KSEMODataFactory.FindPlayerXpProgressionActivity
	bool FindMiniBattlePassProgressionActivity(struct UKSActivityInstance* MiniBattlePassProgressionActivity); // Function KillstreakUINew.KSEMODataFactory.FindMiniBattlePassProgressionActivity
	void ComputeEOMResults(); // Function KillstreakUINew.KSEMODataFactory.ComputeEOMResults
};

// Class KillstreakUINew.KSExpDisplayWidget
// Size: 0x530 (Inherited: 0x510)
struct UKSExpDisplayWidget : public UKSViewedPawnWidget {
	bool bIsWaitingForNextQueue; // 0x510(0x01)
	char UnknownData_511[0x1f]; // 0x511(0x1f)

	void QueueExpDisplays(struct FExpDisplayInfo ExpInfo); // Function KillstreakUINew.KSExpDisplayWidget.QueueExpDisplays
	void NativeHandleDisplayExpInfo(); // Function KillstreakUINew.KSExpDisplayWidget.NativeHandleDisplayExpInfo
	bool GetNextExpDisplay(struct FExpDisplayInfo ExpInfo); // Function KillstreakUINew.KSExpDisplayWidget.GetNextExpDisplay
	void DisplayExpInfo(); // Function KillstreakUINew.KSExpDisplayWidget.DisplayExpInfo
};

// Class KillstreakUINew.KSFloatTickLerpWidgetBase
// Size: 0x250 (Inherited: 0x238)
struct UKSFloatTickLerpWidgetBase : public UUserWidget {
	float LerpTime; // 0x238(0x04)
	float LerpPower; // 0x23c(0x04)
	char UnknownData_240[0x10]; // 0x240(0x10)

	void SetTargetValue(float Value); // Function KillstreakUINew.KSFloatTickLerpWidgetBase.SetTargetValue
	void SetLerpTime(float Time); // Function KillstreakUINew.KSFloatTickLerpWidgetBase.SetLerpTime
	void SetLerpPower(float Power); // Function KillstreakUINew.KSFloatTickLerpWidgetBase.SetLerpPower
	bool IsLerping(); // Function KillstreakUINew.KSFloatTickLerpWidgetBase.IsLerping
	float GetCurrentValue(); // Function KillstreakUINew.KSFloatTickLerpWidgetBase.GetCurrentValue
	void ForceCurrentValue(float Value); // Function KillstreakUINew.KSFloatTickLerpWidgetBase.ForceCurrentValue
	void DisplayForValue(float Value); // Function KillstreakUINew.KSFloatTickLerpWidgetBase.DisplayForValue
};

// Class KillstreakUINew.KSFriendDataFactory
// Size: 0x118 (Inherited: 0x108)
struct UKSFriendDataFactory : public UPUMG_FriendDataFactory {
	struct FMulticastInlineDelegate OnUpdateRecentlyPlayedPlayers; // 0x108(0x10)

	void UIX_ShowExternalProfile(struct UKSPlayerInfo* playerinfo); // Function KillstreakUINew.KSFriendDataFactory.UIX_ShowExternalProfile
	void OnEOMRewardsReceived(struct FPlayerRewardsSummary PlayerRewardsSummary, struct FScoreboardStats ScoreboardStats); // Function KillstreakUINew.KSFriendDataFactory.OnEOMRewardsReceived
	void KSUpdateRecentlyPlayedPlayers__DelegateSignature(struct UKSFriendDataFactory* Source); // DelegateFunction KillstreakUINew.KSFriendDataFactory.KSUpdateRecentlyPlayedPlayers__DelegateSignature
	struct TArray<struct UPUMG_PlayerInfo*> GetSuggestedFriends_Info(); // Function KillstreakUINew.KSFriendDataFactory.GetSuggestedFriends_Info
	struct TArray<struct UKSPlayerInfo*> GetPlayersPlayedWithThisClientSession_Info(); // Function KillstreakUINew.KSFriendDataFactory.GetPlayersPlayedWithThisClientSession_Info
	struct TArray<struct UPUMG_PlayerInfo*> GetPendingFriends_Info(); // Function KillstreakUINew.KSFriendDataFactory.GetPendingFriends_Info
	struct TArray<struct UPUMG_PlayerInfo*> GetOnlineFriends_Info(); // Function KillstreakUINew.KSFriendDataFactory.GetOnlineFriends_Info
	struct TArray<struct UPUMG_PlayerInfo*> GetFriends_Info(); // Function KillstreakUINew.KSFriendDataFactory.GetFriends_Info
	struct TArray<struct UPUMG_PlayerInfo*> GetFriendRequests_Info(); // Function KillstreakUINew.KSFriendDataFactory.GetFriendRequests_Info
};

// Class KillstreakUINew.KSMapWidgetBase
// Size: 0x5d0 (Inherited: 0x4e0)
struct UKSMapWidgetBase : public UKSWidget {
	enum class EDisplayType MapDisplayType; // 0x4e0(0x01)
	char UnknownData_4E1[0x57]; // 0x4e1(0x57)
	struct TMap<struct AKSPlayerState*, struct UKSMapIconWidgetBase*> PlayerIconMap; // 0x538(0x50)
	char UnknownData_588[0x38]; // 0x588(0x38)
	bool AbsoluteRotation; // 0x5c0(0x01)
	bool CanBeScrambled; // 0x5c1(0x01)
	bool IsScrambled; // 0x5c2(0x01)
	bool bAffectedByScramble; // 0x5c3(0x01)
	char UnknownData_5C4[0xc]; // 0x5c4(0x0c)

	void UpdateIcon(struct UKSMapIconWidgetBase* Icon); // Function KillstreakUINew.KSMapWidgetBase.UpdateIcon
	struct FVector2D ToIconRenderCoords(struct FVector2D MapCoords); // Function KillstreakUINew.KSMapWidgetBase.ToIconRenderCoords
	float ToIconRenderAngle(float PlayerAngle); // Function KillstreakUINew.KSMapWidgetBase.ToIconRenderAngle
	void TickCachedTransform(); // Function KillstreakUINew.KSMapWidgetBase.TickCachedTransform
	void SetScrambleState(bool Scrambled); // Function KillstreakUINew.KSMapWidgetBase.SetScrambleState
	void RemoveWidgetFromLoaderById(int32_t InId); // Function KillstreakUINew.KSMapWidgetBase.RemoveWidgetFromLoaderById
	void OnScrambleStateChanged(bool Scrambled); // Function KillstreakUINew.KSMapWidgetBase.OnScrambleStateChanged
	void OnReceiveDisplayWidgetInfo(struct FDisplayInfo DisplayInfo); // Function KillstreakUINew.KSMapWidgetBase.OnReceiveDisplayWidgetInfo
	void OnGameStateSet(struct AGameStateBase* GameStateBase); // Function KillstreakUINew.KSMapWidgetBase.OnGameStateSet
	bool IsOnMap(struct FVector2D MapCoords); // Function KillstreakUINew.KSMapWidgetBase.IsOnMap
	float GetDistanceToIcon(struct UKSMapIconWidgetBase* Icon); // Function KillstreakUINew.KSMapWidgetBase.GetDistanceToIcon
	struct APawn* GetCachedViewedPawn(); // Function KillstreakUINew.KSMapWidgetBase.GetCachedViewedPawn
	struct FTransform GetCachedTransform(); // Function KillstreakUINew.KSMapWidgetBase.GetCachedTransform
	struct UKSMapIconWidgetBase* CreateNewIconWidget(struct UKSMapIconWidgetBase* WidgetClass, int32_t UniqueId, struct AKSPlayerState* CreatingPlayer, enum class EDisplayType ParentMapDisplayType, struct AActor* AssociatedActor, struct UObject* AssociatedObject, struct FVector DefaultLocation, float Lifespan); // Function KillstreakUINew.KSMapWidgetBase.CreateNewIconWidget
};

// Class KillstreakUINew.KSFullMapWidget
// Size: 0x5e0 (Inherited: 0x5d0)
struct UKSFullMapWidget : public UKSMapWidgetBase {
	struct AActor* MinimapRendererActor; // 0x5c8(0x08)
	float MinimapWidth; // 0x5d0(0x04)
	char UnknownData_5DC[0x4]; // 0x5dc(0x04)
};

// Class KillstreakUINew.KSHUDCommon
// Size: 0x5d0 (Inherited: 0x550)
struct AKSHUDCommon : public APUMG_HUD {
	struct FMulticastInlineDelegate OnPreferredSiteUpdated; // 0x550(0x10)
	struct UPUMG_LoginDataFactory* LoginDataFactory; // 0x560(0x08)
	struct UKSSettingsDataFactory* SettingsFactory; // 0x568(0x08)
	struct UKSChatDataFactory* ChatDataFactory; // 0x570(0x08)
	struct UKSPartyDataFactory* PartyDataFactory; // 0x578(0x08)
	struct UKSMercManager* MercManager; // 0x580(0x08)
	struct UKSNPEDataFactory* NPEDataFactory; // 0x588(0x08)
	struct UKSPlayerDataFactory* PlayerDataFactory; // 0x590(0x08)
	bool bDisplayWatermark; // 0x598(0x01)
	char UnknownData_599[0x3]; // 0x599(0x03)
	float WatermarkAlpha; // 0x59c(0x04)
	float WatermarkOffsetLeft; // 0x5a0(0x04)
	float WatermarkOffsetTop; // 0x5a4(0x04)
	float WatermarkOffsetRight; // 0x5a8(0x04)
	float WatermarkOffsetBottom; // 0x5ac(0x04)
	float WatermarkChangePositionTime; // 0x5b0(0x04)
	char UnknownData_5B4[0x4]; // 0x5b4(0x04)
	struct UDataTable* ColorPaletteDT; // 0x5b8(0x08)
	struct UDataTable* FontPaletteDT; // 0x5c0(0x08)
	struct UKSSettingsColorOptionsAsset* CrosshairColorOptions; // 0x5c8(0x08)

	void TestChallengeNotification(); // Function KillstreakUINew.KSHUDCommon.TestChallengeNotification
	void ShowErrorPopup(struct FText ErrorMsg); // Function KillstreakUINew.KSHUDCommon.ShowErrorPopup
	bool ShouldShowCrossplayIconForPlayerState(struct AKSPlayerState* PlayerState); // Function KillstreakUINew.KSHUDCommon.ShouldShowCrossplayIconForPlayerState
	bool ShouldShowCrossplayIconForPlayer(int64_t PlayerId); // Function KillstreakUINew.KSHUDCommon.ShouldShowCrossplayIconForPlayer
	void SetPreferredSiteId(int32_t SiteId); // Function KillstreakUINew.KSHUDCommon.SetPreferredSiteId
	void PrintToLog(struct FText InText); // Function KillstreakUINew.KSHUDCommon.PrintToLog
	void OpenTextChatToPlayer(struct UPUMG_PlayerInfo* Player); // Function KillstreakUINew.KSHUDCommon.OpenTextChatToPlayer
	void LogErrorMessage(struct FText ErrorMsg); // Function KillstreakUINew.KSHUDCommon.LogErrorMessage
	bool IsSamePortalAsLocalPlayer(int64_t PlayerId); // Function KillstreakUINew.KSHUDCommon.IsSamePortalAsLocalPlayer
	void HandleOpenTextChat(bool BeginChatCommand); // Function KillstreakUINew.KSHUDCommon.HandleOpenTextChat
	void HandleControllerDisconnect(); // Function KillstreakUINew.KSHUDCommon.HandleControllerDisconnect
	struct UKSUISessionManager* GetUISessionManager(); // Function KillstreakUINew.KSHUDCommon.GetUISessionManager
	void GetSiteList(struct TMap<int32_t, struct FText> OutSiteIdToNameMap); // Function KillstreakUINew.KSHUDCommon.GetSiteList
	struct UKSSettingsDataFactory* GetSettingsDataFactory(); // Function KillstreakUINew.KSHUDCommon.GetSettingsDataFactory
	bool GetPreferredSiteId(int32_t OutSiteId); // Function KillstreakUINew.KSHUDCommon.GetPreferredSiteId
	struct UKSPlayerDataFactory* GetPlayerDataFactory(); // Function KillstreakUINew.KSHUDCommon.GetPlayerDataFactory
	struct UKSPartyDataFactory* GetPartyDataFactory(); // Function KillstreakUINew.KSHUDCommon.GetPartyDataFactory
	struct UKSNPEDataFactory* GetNPEDataFactory(); // Function KillstreakUINew.KSHUDCommon.GetNPEDataFactory
	struct UKSMercManager* GetMercManager(); // Function KillstreakUINew.KSHUDCommon.GetMercManager
	struct UPUMG_LoginDataFactory* GetLoginDataFactory(); // Function KillstreakUINew.KSHUDCommon.GetLoginDataFactory
	struct UKSLoadoutDataFactory* GetLoadoutDataFactory(); // Function KillstreakUINew.KSHUDCommon.GetLoadoutDataFactory
	struct UKSStoreItemHelper* GetItemHelper(); // Function KillstreakUINew.KSHUDCommon.GetItemHelper
	bool GetFont(struct FName FontName, struct FSlateFontInfo ReturnFont); // Function KillstreakUINew.KSHUDCommon.GetFont
	struct TArray<struct UPanelWidget*> GetFocusableWidgetContainers(); // Function KillstreakUINew.KSHUDCommon.GetFocusableWidgetContainers
	struct UKSContextBarWidget* GetContextBarWidget(); // Function KillstreakUINew.KSHUDCommon.GetContextBarWidget
	bool GetColor(struct FName ColorName, struct FLinearColor ReturnColor); // Function KillstreakUINew.KSHUDCommon.GetColor
	struct UKSChatDataFactory* GetChatDataFactory(); // Function KillstreakUINew.KSHUDCommon.GetChatDataFactory
	struct UKSAcquisitionManager* GetAcquisitionManager(); // Function KillstreakUINew.KSHUDCommon.GetAcquisitionManager
	void EvaluateFocus(); // Function KillstreakUINew.KSHUDCommon.EvaluateFocus
	void DisplayWatermark(); // Function KillstreakUINew.KSHUDCommon.DisplayWatermark
	void ApplySafeFrameScale(float SafeFrameScale); // Function KillstreakUINew.KSHUDCommon.ApplySafeFrameScale
};

// Class KillstreakUINew.KSGameHUDNew
// Size: 0x668 (Inherited: 0x5d0)
struct AKSGameHUDNew : public AKSHUDCommon {
	char UnknownData_5D0[0x8]; // 0x5d0(0x08)
	struct UUserWidget* AimAssistDebugWidgetClass; // 0x5d8(0x08)
	struct FWeakObjectPtr<struct UUserWidget> AimAssistDebugWidget; // 0x5e0(0x08)
	struct TArray<struct FDataTableInfo> BaseAssetDataTables; // 0x5e8(0x10)
	struct UDynamicSkinTable* AssetDataTableManager; // 0x5f8(0x08)
	struct UMultiSkinObject* SkinObject; // 0x600(0x08)
	struct UKSHUDStateTracker* HUDStateTracker; // 0x608(0x08)
	char UnknownData_610[0x58]; // 0x610(0x58)

	void UIX_ReturnLobby(); // Function KillstreakUINew.KSGameHUDNew.UIX_ReturnLobby
	bool UIX_MutePlayer(struct AKSPlayerState* KSPlayerState, bool Mute); // Function KillstreakUINew.KSGameHUDNew.UIX_MutePlayer
	void ToggleAimAssistDebug(); // Function KillstreakUINew.KSGameHUDNew.ToggleAimAssistDebug
	void SetHUDVisible(bool bVisible); // Function KillstreakUINew.KSGameHUDNew.SetHUDVisible
	void ReturnToHome(); // Function KillstreakUINew.KSGameHUDNew.ReturnToHome
	void OnViewedPlayerStateModRemoved(struct UKSPlayerMod* PlayerMod, struct UKSPlayerModInstance* ModInstance); // Function KillstreakUINew.KSGameHUDNew.OnViewedPlayerStateModRemoved
	void OnViewedPlayerStateModAdded(struct UKSPlayerMod* PlayerMod, struct UKSPlayerModInstance* ModInstance); // Function KillstreakUINew.KSGameHUDNew.OnViewedPlayerStateModAdded
	void OnViewedPawnChanged(struct AKSPlayerController* Controller, struct AActor* OldViewTarget, struct AActor* NewViewTarget); // Function KillstreakUINew.KSGameHUDNew.OnViewedPawnChanged
	void OnToggleHUD(); // Function KillstreakUINew.KSGameHUDNew.OnToggleHUD
	void OnAssetDataTableManagerChanged(struct TSet<struct FName> UpdatedKeywords); // Function KillstreakUINew.KSGameHUDNew.OnAssetDataTableManagerChanged
	void NetworkLagStateChanged(struct UWorld* World, struct UNetDriver* NetDriver, char LagType); // Function KillstreakUINew.KSGameHUDNew.NetworkLagStateChanged
	bool IsPlayerMuted(struct AKSPlayerState* KSPlayerState); // Function KillstreakUINew.KSGameHUDNew.IsPlayerMuted
	bool IsPlayerInVoiceChannel(struct AKSPlayerState* KSPlayerState); // Function KillstreakUINew.KSGameHUDNew.IsPlayerInVoiceChannel
	void HandleLoginStateChange(enum class EPUMG_LoginState LoginState); // Function KillstreakUINew.KSGameHUDNew.HandleLoginStateChange
	void HandleFubar(); // Function KillstreakUINew.KSGameHUDNew.HandleFubar
	struct UKSHUDStateTracker* GetHUDStateTracker(); // Function KillstreakUINew.KSGameHUDNew.GetHUDStateTracker
};

// Class KillstreakUINew.KSGameInfoOverlayBase
// Size: 0x500 (Inherited: 0x4e0)
struct UKSGameInfoOverlayBase : public UKSWidget {
	char UnknownData_4E0[0x20]; // 0x4e0(0x20)

	void HandlePlayerStateReady(struct AKSPlayerState* PlayerState); // Function KillstreakUINew.KSGameInfoOverlayBase.HandlePlayerStateReady
};

// Class KillstreakUINew.KSGamepadPromptWidget
// Size: 0x4f0 (Inherited: 0x4e0)
struct UKSGamepadPromptWidget : public UKSWidget {
	char UnknownData_4E0[0x10]; // 0x4e0(0x10)

	void SetContext(struct FButtonPromptContext PromptContext); // Function KillstreakUINew.KSGamepadPromptWidget.SetContext
	void PushContext(struct FButtonPromptContext PromptContext); // Function KillstreakUINew.KSGamepadPromptWidget.PushContext
	bool PopContext(struct FButtonPromptContext OutContext); // Function KillstreakUINew.KSGamepadPromptWidget.PopContext
	void ClearAllContext(); // Function KillstreakUINew.KSGamepadPromptWidget.ClearAllContext
	void ApplyContext(struct FButtonPromptContext Context); // Function KillstreakUINew.KSGamepadPromptWidget.ApplyContext
};

// Class KillstreakUINew.KSHealthWidget
// Size: 0x520 (Inherited: 0x500)
struct UKSHealthWidget : public UKSPawnWidget {
	float CachedHealth; // 0x500(0x04)
	float CachedArmor; // 0x504(0x04)
	float CachedMaxHealth; // 0x508(0x04)
	float CachedOverheal; // 0x50c(0x04)
	char UnknownData_510[0x10]; // 0x510(0x10)

	void OverhealChangeFromChar(struct AKSCharacterBase* Character, bool bAnimatedChange); // Function KillstreakUINew.KSHealthWidget.OverhealChangeFromChar
	void OnOverhealChanged(float OldOverheal, float NewOverheal, bool bAnimatedChange); // Function KillstreakUINew.KSHealthWidget.OnOverhealChanged
	void OnHealthChanged(float OldHealth, float OldMaxHealth, float NewHealth, float NewMaxHealth, bool bAnimatedChange); // Function KillstreakUINew.KSHealthWidget.OnHealthChanged
	void OnArmorChanged(float OldArmor, float NewArmor); // Function KillstreakUINew.KSHealthWidget.OnArmorChanged
	void HealthChangeFromChar(struct AKSCharacterBase* Character, bool bAnimatedChange); // Function KillstreakUINew.KSHealthWidget.HealthChangeFromChar
	void HandlePawnOverhealChange(struct AKSCharacterBase* Character); // Function KillstreakUINew.KSHealthWidget.HandlePawnOverhealChange
	void HandlePawnHealthChange(struct AKSCharacterBase* Character); // Function KillstreakUINew.KSHealthWidget.HandlePawnHealthChange
};

// Class KillstreakUINew.KSHUDStateTracker
// Size: 0x50 (Inherited: 0x28)
struct UKSHUDStateTracker : public UObject {
	struct FMulticastInlineDelegate OnHUDMatchPhaseChanged; // 0x28(0x10)
	float PhaseTime; // 0x38(0x04)
	struct FName TrackedCurrentMatchPhase; // 0x3c(0x08)
	char UnknownData_44[0xc]; // 0x44(0x0c)

	void PollMatchPhase(); // Function KillstreakUINew.KSHUDStateTracker.PollMatchPhase
	void HandleUpdatedMatchPhase(struct FName NewPhaseName, struct FName PreviousPhaseName); // Function KillstreakUINew.KSHUDStateTracker.HandleUpdatedMatchPhase
	void HandleGameStateBeginPlay(struct AKSGameState* GameState); // Function KillstreakUINew.KSHUDStateTracker.HandleGameStateBeginPlay
};

// Class KillstreakUINew.KSKillCardWidget
// Size: 0x4e8 (Inherited: 0x4e0)
struct UKSKillCardWidget : public UKSWidget {
	float DisplayDuration; // 0x4e0(0x04)
	char UnknownData_4E4[0x4]; // 0x4e4(0x04)

	void ShowPlayerAndMessage(struct AKSPlayerState* PlayerState, struct FText Message); // Function KillstreakUINew.KSKillCardWidget.ShowPlayerAndMessage
	void ClearMessage(bool UseAnimations); // Function KillstreakUINew.KSKillCardWidget.ClearMessage
};

// Class KillstreakUINew.KSLobbyHUDNew
// Size: 0x6a8 (Inherited: 0x5d0)
struct AKSLobbyHUDNew : public AKSHUDCommon {
	char UnknownData_5D0[0x18]; // 0x5d0(0x18)
	struct UKSQueueDataFactory* QueueDataFactory; // 0x5e8(0x08)
	struct UKSFriendDataFactory* FriendDataFactory; // 0x5f0(0x08)
	struct UKSPlayerQueryDataFactory* PlayerQueryDataFactory; // 0x5f8(0x08)
	struct UKSEMODataFactory* EMODataFactory; // 0x600(0x08)
	struct UKSPlayerWhoDataFactory* PlayerWhoDataFactory; // 0x608(0x08)
	struct FWeakObjectPtr<struct UKSMediaPlayerWidget> CurrentMediaPlayerWidget; // 0x610(0x08)
	char UnknownData_618[0x8]; // 0x618(0x08)
	struct FMulticastInlineDelegate OnTriggerBlockerChange; // 0x620(0x10)
	bool EnablePreMatchAnimation; // 0x630(0x01)
	bool EnablePostMatchAnimation; // 0x631(0x01)
	bool EnableEOMIdleAnimation; // 0x632(0x01)
	char UnknownData_633[0x5]; // 0x633(0x05)
	struct FMulticastInlineDelegate LobbyWidgetReady; // 0x638(0x10)
	struct FMulticastInlineDelegate MainLobbyCameraSet; // 0x648(0x10)
	struct FMulticastInlineDelegate LoginCameraSet; // 0x658(0x10)
	struct FMulticastInlineDelegate BeginPlayingPreMatchAnim; // 0x668(0x10)
	struct FMulticastInlineDelegate EndPlayingPreMatchAnim; // 0x678(0x10)
	struct FMulticastInlineDelegate EndPlayingPostMatchAnim; // 0x688(0x10)
	enum class ELobbyCharacterAnimState CurrentLobbyCharacterAnimState; // 0x698(0x01)
	enum class EPUMG_MatchStatus CurrentMatchStatus; // 0x699(0x01)
	char UnknownData_69A[0x6]; // 0x69a(0x06)
	float LoadingScreenFadeInDelay; // 0x6a0(0x04)
	float LoadingScreenFadeInDuration; // 0x6a4(0x04)

	bool UIX_MutePlayer(struct UPUMG_PlayerInfo* PlayerData, bool Mute); // Function KillstreakUINew.KSLobbyHUDNew.UIX_MutePlayer
	void TransitionCamera(struct FName CameraTag, float BlendTime); // Function KillstreakUINew.KSLobbyHUDNew.TransitionCamera
	void ToggleDisablePartyLobbyCharacters(bool Disable); // Function KillstreakUINew.KSLobbyHUDNew.ToggleDisablePartyLobbyCharacters
	void TestPostMatchLobby(int32_t PlayerXp, int32_t RankedXp, int32_t RogueXp, int32_t ReputationEarned); // Function KillstreakUINew.KSLobbyHUDNew.TestPostMatchLobby
	void ShowPopupConfirmation(struct FText Message, enum class ESocialMessageType MessageType); // Function KillstreakUINew.KSLobbyHUDNew.ShowPopupConfirmation
	void SetNewLobbyAnimState(enum class ELobbyCharacterAnimState TargetState); // Function KillstreakUINew.KSLobbyHUDNew.SetNewLobbyAnimState
	void ResetLobbyCharactersByIndex(struct TArray<enum class ELobbyCharacterIndex> IndicesToReset); // Function KillstreakUINew.KSLobbyHUDNew.ResetLobbyCharactersByIndex
	void ResetLobbyCharacters(); // Function KillstreakUINew.KSLobbyHUDNew.ResetLobbyCharacters
	void PlayLoopingLevelSequence(struct FName LvlSeqTag); // Function KillstreakUINew.KSLobbyHUDNew.PlayLoopingLevelSequence
	void OnStoreVendorsLoaded(int32_t GroupId, struct TArray<int32_t> VendorIds); // Function KillstreakUINew.KSLobbyHUDNew.OnStoreVendorsLoaded
	void OnNotEnoughCurreny(struct UPUMG_StorePurchaseRequest* PurchaseRequest); // Function KillstreakUINew.KSLobbyHUDNew.OnNotEnoughCurreny
	void NotifyViewStateChange(struct FName NewRoute, struct FName PreviousRoute); // Function KillstreakUINew.KSLobbyHUDNew.NotifyViewStateChange
	bool IsPlayerMuted(struct UPUMG_PlayerInfo* PlayerData); // Function KillstreakUINew.KSLobbyHUDNew.IsPlayerMuted
	void HandleSpecificPartyIdDataUpdated(int64_t PlayerId); // Function KillstreakUINew.KSLobbyHUDNew.HandleSpecificPartyIdDataUpdated
	void HandleSpecificPartyDataUpdated(struct FPUMG_PartyMemberData PartyMember); // Function KillstreakUINew.KSLobbyHUDNew.HandleSpecificPartyDataUpdated
	void HandleSpecificPartyDataAdded(struct FPUMG_PartyMemberData PartyMember); // Function KillstreakUINew.KSLobbyHUDNew.HandleSpecificPartyDataAdded
	void HandleReturnFromBattleLevelSeqStopped(); // Function KillstreakUINew.KSLobbyHUDNew.HandleReturnFromBattleLevelSeqStopped
	void HandlePlayerLoadoutsUpdated(); // Function KillstreakUINew.KSLobbyHUDNew.HandlePlayerLoadoutsUpdated
	void HandlePartyMemberDataUpdated(struct FPUMG_PartyMemberData PartyMember, int32_t MemberIndex); // Function KillstreakUINew.KSLobbyHUDNew.HandlePartyMemberDataUpdated
	void HandlePartyDataUpdated(); // Function KillstreakUINew.KSLobbyHUDNew.HandlePartyDataUpdated
	void HandleMatchStatusUpdated(enum class EPUMG_MatchStatus MatchStatus); // Function KillstreakUINew.KSLobbyHUDNew.HandleMatchStatusUpdated
	void HandleLoginUserChange(); // Function KillstreakUINew.KSLobbyHUDNew.HandleLoginUserChange
	void HandleLoginStateChange(enum class EPUMG_LoginState LoginState); // Function KillstreakUINew.KSLobbyHUDNew.HandleLoginStateChange
	void HandleExitToGameLevelSeqStopped(); // Function KillstreakUINew.KSLobbyHUDNew.HandleExitToGameLevelSeqStopped
	void HandleDenyPartyInvitation(); // Function KillstreakUINew.KSLobbyHUDNew.HandleDenyPartyInvitation
	void HandleAcceptPartyInvitation(); // Function KillstreakUINew.KSLobbyHUDNew.HandleAcceptPartyInvitation
	struct UKSPlayerWhoDataFactory* GetPlayerWhoDataFactory(); // Function KillstreakUINew.KSLobbyHUDNew.GetPlayerWhoDataFactory
	struct UKSPlayerQueryDataFactory* GetPlayerQueryDataFactory(); // Function KillstreakUINew.KSLobbyHUDNew.GetPlayerQueryDataFactory
	struct UKSLobbyWidget* GetLobbyWidget(); // Function KillstreakUINew.KSLobbyHUDNew.GetLobbyWidget
	bool GetLobbyCharacterByPosition(enum class ELobbyCharacterIndex CharacterIndex, struct AKSLobbyCharacter* LobbyCharacter); // Function KillstreakUINew.KSLobbyHUDNew.GetLobbyCharacterByPosition
	struct UKSQueueDataFactory* GetKSQueueDataFactory(); // Function KillstreakUINew.KSLobbyHUDNew.GetKSQueueDataFactory
	struct UKSJsonDataFactory* GetJsonDataFactory(); // Function KillstreakUINew.KSLobbyHUDNew.GetJsonDataFactory
	bool GetJobSelectPreviewActorByPosition(enum class ELobbyCharacterIndex CharacterIndex, struct AKSJobSelectPreviewActor_Lobby* PreviewActor); // Function KillstreakUINew.KSLobbyHUDNew.GetJobSelectPreviewActorByPosition
	struct UKSFriendDataFactory* GetFriendDataFactory(); // Function KillstreakUINew.KSLobbyHUDNew.GetFriendDataFactory
	struct UKSEMODataFactory* GetEMODataFactory(); // Function KillstreakUINew.KSLobbyHUDNew.GetEMODataFactory
	struct UKSItem* GetDefaultPlayerAccountItem(enum class EPlayerAccountSlot ItemSlot); // Function KillstreakUINew.KSLobbyHUDNew.GetDefaultPlayerAccountItem
	void ForceEulaAccept(); // Function KillstreakUINew.KSLobbyHUDNew.ForceEulaAccept
	void CreateInitialPlayerLoadout(); // Function KillstreakUINew.KSLobbyHUDNew.CreateInitialPlayerLoadout
	void CheckForVoucherRedemption(); // Function KillstreakUINew.KSLobbyHUDNew.CheckForVoucherRedemption
	void CheckForExistingPenaltyTime(); // Function KillstreakUINew.KSLobbyHUDNew.CheckForExistingPenaltyTime
	void CancelExitToGameLevelAnimStoppedHandling(); // Function KillstreakUINew.KSLobbyHUDNew.CancelExitToGameLevelAnimStoppedHandling
};

// Class KillstreakUINew.KSLoginInventoryCheck
// Size: 0x4f0 (Inherited: 0x4e0)
struct UKSLoginInventoryCheck : public UKSWidget {
	char UnknownData_4E0[0x10]; // 0x4e0(0x10)

	void CancelLogin(); // Function KillstreakUINew.KSLoginInventoryCheck.CancelLogin
};

// Class KillstreakUINew.KSLootSiteIconWidget
// Size: 0x2c8 (Inherited: 0x2c0)
struct UKSLootSiteIconWidget : public UKSMapIconWidgetBase {
	struct AKSLootSiteBase* MarkedLootSite; // 0x2c0(0x08)
};

// Class KillstreakUINew.KSLootSiteMarkerWidget
// Size: 0x2e0 (Inherited: 0x2c0)
struct UKSLootSiteMarkerWidget : public UKSMapIconWidgetBase {
	struct AKSLootSiteBase* MarkedLootSite; // 0x2c0(0x08)
	float MaxDisplayDistance; // 0x2c8(0x04)
	bool bViewedPawnHasEndedFreeFall; // 0x2cc(0x01)
	char UnknownData_2CD[0x3]; // 0x2cd(0x03)
	struct TArray<enum class ELootSiteRarity> TagsToHide; // 0x2d0(0x10)
};

// Class KillstreakUINew.KSLowAmmoAlertWidget
// Size: 0x5c8 (Inherited: 0x5a8)
struct UKSLowAmmoAlertWidget : public UKSActiveWeaponComponentWidget {
	float LowAmmoThreshold; // 0x5a8(0x04)
	enum class ELowAmmoState CachedLowAmmoState; // 0x5ac(0x01)
	char UnknownData_5AD[0x3]; // 0x5ad(0x03)
	struct FMulticastInlineDelegate OnAmmoStateChangedDel; // 0x5b0(0x10)
	char UnknownData_5C0[0x8]; // 0x5c0(0x08)

	enum class ELowAmmoState GetAmmoState(); // Function KillstreakUINew.KSLowAmmoAlertWidget.GetAmmoState
	enum class ELowAmmoState CalcAmmoState(); // Function KillstreakUINew.KSLowAmmoAlertWidget.CalcAmmoState
	void AmmoStateChanged(); // Function KillstreakUINew.KSLowAmmoAlertWidget.AmmoStateChanged
};

// Class KillstreakUINew.KSMarkerDisplayBase
// Size: 0x650 (Inherited: 0x5d0)
struct UKSMarkerDisplayBase : public UKSMapWidgetBase {
	char UnknownData_5D0[0x80]; // 0x5d0(0x80)

	bool GetScreenPositionForMarker(struct FVector TargetLocation, float AnchorHeight, float MarginX, float MarginY, struct FVector2D ScreenLocation); // Function KillstreakUINew.KSMarkerDisplayBase.GetScreenPositionForMarker
};

// Class KillstreakUINew.KSDataMassInviteBase
// Size: 0x78 (Inherited: 0x28)
struct UKSDataMassInviteBase : public UObject {
	struct FText Title; // 0x28(0x18)
	struct FText ButtonLabel; // 0x40(0x18)
	struct FDelegate OnShouldShow; // 0x58(0x10)
	struct FDelegate OnClose; // 0x68(0x10)
};

// Class KillstreakUINew.KSDataIndividualInviteSetup
// Size: 0x98 (Inherited: 0x78)
struct UKSDataIndividualInviteSetup : public UKSDataMassInviteBase {
	struct FDelegate OnGetIsSelected; // 0x78(0x10)
	struct FDelegate OnSelect; // 0x88(0x10)

	struct UKSDataIndividualInviteSetup* SetCallbacks(struct FDelegate GetIsSelected, struct FDelegate Select, struct FDelegate ShouldShowPlayer, struct FDelegate Close); // Function KillstreakUINew.KSDataIndividualInviteSetup.SetCallbacks
	enum class EKSInviteSelectResult KSInviteSelect__DelegateSignature(struct UKSPlayerInfo* playerinfo); // DelegateFunction KillstreakUINew.KSDataIndividualInviteSetup.KSInviteSelect__DelegateSignature
	bool KSInviteGetIsSelected__DelegateSignature(struct UKSPlayerInfo* playerinfo); // DelegateFunction KillstreakUINew.KSDataIndividualInviteSetup.KSInviteGetIsSelected__DelegateSignature
};

// Class KillstreakUINew.KSDataBatchInviteSetup
// Size: 0x88 (Inherited: 0x78)
struct UKSDataBatchInviteSetup : public UKSDataMassInviteBase {
	struct FDelegate OnSelect; // 0x78(0x10)

	struct UKSDataBatchInviteSetup* SetCallbacks(struct FDelegate Select, struct FDelegate ShouldShowPlayer, struct FDelegate Cancel); // Function KillstreakUINew.KSDataBatchInviteSetup.SetCallbacks
	void KSBatchSelect__DelegateSignature(struct TArray<struct UKSPlayerInfo*> playerinfo); // DelegateFunction KillstreakUINew.KSDataBatchInviteSetup.KSBatchSelect__DelegateSignature
};

// Class KillstreakUINew.KSMassInviteModal
// Size: 0x4f8 (Inherited: 0x4e0)
struct UKSMassInviteModal : public UKSWidget {
	struct TArray<struct UKSPlayerInfo*> SelectedPlayers; // 0x4e0(0x10)
	struct UKSDataMassInviteBase* RouteData; // 0x4f0(0x08)

	bool UpdateRouteData(); // Function KillstreakUINew.KSMassInviteModal.UpdateRouteData
	enum class EKSInviteSelectResult SelectPlayer(struct UKSPlayerInfo* Player); // Function KillstreakUINew.KSMassInviteModal.SelectPlayer
	void RequestFriends(struct FDelegate OnReceivePlayers); // Function KillstreakUINew.KSMassInviteModal.RequestFriends
	void KSInviteReceivePlayers__DelegateSignature(struct TArray<struct UKSPlayerInfo*> Players); // DelegateFunction KillstreakUINew.KSMassInviteModal.KSInviteReceivePlayers__DelegateSignature
	bool GetShouldSelect(struct UKSPlayerInfo* Player); // Function KillstreakUINew.KSMassInviteModal.GetShouldSelect
	void CloseScreen(enum class EKSInviteCloseAction CloseAction); // Function KillstreakUINew.KSMassInviteModal.CloseScreen
};

// Class KillstreakUINew.KSMatchInvitationModal
// Size: 0x4f8 (Inherited: 0x4e0)
struct UKSMatchInvitationModal : public UKSWidget {
	struct FName RouteName; // 0x4e0(0x08)
	char UnknownData_4E8[0x8]; // 0x4e8(0x08)
	struct FTimerHandle InvitationExpireTimeout; // 0x4f0(0x08)

	void ShowInvitation(struct UKSPlayerInfo* playerinfo, struct FClientQueueInfo QueueInfo); // Function KillstreakUINew.KSMatchInvitationModal.ShowInvitation
	void ShowError(struct FText ErrorMessage); // Function KillstreakUINew.KSMatchInvitationModal.ShowError
	void OnInvitationExpired(); // Function KillstreakUINew.KSMatchInvitationModal.OnInvitationExpired
	void HandleReceivePlayerName(struct UPUMG_PlayerInfo* playerinfo); // Function KillstreakUINew.KSMatchInvitationModal.HandleReceivePlayerName
	struct UKSQueueDataFactory* GetQueueDataFactory(); // Function KillstreakUINew.KSMatchInvitationModal.GetQueueDataFactory
	float GetInvitationTotalTimeToExpire(); // Function KillstreakUINew.KSMatchInvitationModal.GetInvitationTotalTimeToExpire
	float GetInvitationTimeRemaining(); // Function KillstreakUINew.KSMatchInvitationModal.GetInvitationTimeRemaining
	void DeclineInvite(); // Function KillstreakUINew.KSMatchInvitationModal.DeclineInvite
	void CloseScreen(); // Function KillstreakUINew.KSMatchInvitationModal.CloseScreen
	void AcceptInvite(int32_t MapId); // Function KillstreakUINew.KSMatchInvitationModal.AcceptInvite
};

// Class KillstreakUINew.KSMatchResult
// Size: 0x528 (Inherited: 0x4e0)
struct UKSMatchResult : public UKSWidget {
	char UnknownData_4E0[0xc]; // 0x4e0(0x0c)
	float FinalResultEndTime; // 0x4ec(0x04)
	struct FRoundResultAnnoucement RoundResultAnnoucement; // 0x4f0(0x20)
	int32_t pTeamNum; // 0x510(0x04)
	int32_t pOpposeTeamNum; // 0x514(0x04)
	int32_t pTeamScore; // 0x518(0x04)
	int32_t pOpposeTeamScore; // 0x51c(0x04)
	bool bIsEndOfMatch; // 0x520(0x01)
	bool bMatchEndedInSurrender; // 0x521(0x01)
	char UnknownData_522[0x6]; // 0x522(0x06)

	void UpdateRoundBaseScore(struct AKSGameState_RoundGame* pGameState); // Function KillstreakUINew.KSMatchResult.UpdateRoundBaseScore
	void UpdateResultStatus(enum class EGameResult Result, struct FText Status); // Function KillstreakUINew.KSMatchResult.UpdateResultStatus
	void ProcessResultAnnoucement(enum class EGameResult Result); // Function KillstreakUINew.KSMatchResult.ProcessResultAnnoucement
	void HandleResultReceived(struct FRoundResultAnnoucement ResultAnnoucement); // Function KillstreakUINew.KSMatchResult.HandleResultReceived
	void HandleEndOfMatch(); // Function KillstreakUINew.KSMatchResult.HandleEndOfMatch
	void GetTeamNames(struct FText pTeamName, struct FText pOpposingTeamName); // Function KillstreakUINew.KSMatchResult.GetTeamNames
	void GetSurrenderText(struct FText pSurrenderText); // Function KillstreakUINew.KSMatchResult.GetSurrenderText
};

// Class KillstreakUINew.KSMediaPlayerWidget
// Size: 0x538 (Inherited: 0x4e0)
struct UKSMediaPlayerWidget : public UKSWidget {
	struct TSoftObjectPtr<struct UDataTable> MediaPlayerPlaylistEntries; // 0x4e0(0x28)
	char UnknownData_508[0x30]; // 0x508(0x30)

	void UIX_SkipEntry(); // Function KillstreakUINew.KSMediaPlayerWidget.UIX_SkipEntry
	void OnShouldShowPromptChanged(bool bCanSkipEntry); // Function KillstreakUINew.KSMediaPlayerWidget.OnShouldShowPromptChanged
	void OnReadyForPlayback(struct UPlatformMediaSource* PlatformMediaSource, struct UAkAudioEvent* PlayEvent, struct UAkAudioEvent* StopEvent); // Function KillstreakUINew.KSMediaPlayerWidget.OnReadyForPlayback
	void OnEndLoadingPlaylist(); // Function KillstreakUINew.KSMediaPlayerWidget.OnEndLoadingPlaylist
	void OnBeginLoadingPlaylist(); // Function KillstreakUINew.KSMediaPlayerWidget.OnBeginLoadingPlaylist
	bool IsCurrentEntrySkippable(); // Function KillstreakUINew.KSMediaPlayerWidget.IsCurrentEntrySkippable
};

// Class KillstreakUINew.KSMercManager
// Size: 0x30 (Inherited: 0x28)
struct UKSMercManager : public UObject {
	struct APUMG_HUD* MyHud; // 0x28(0x08)

	void Uninitialize(); // Function KillstreakUINew.KSMercManager.Uninitialize
	bool IsItemEquippedInSlot(struct UKSItem* CosmeticItem, enum class EMercCosmeticSlot eSlot, int32_t SlotPosition, struct UKSJobItem* JobItem); // Function KillstreakUINew.KSMercManager.IsItemEquippedInSlot
	bool IsItemEquippedInAnySlot(struct UKSItem* CosmeticItem, enum class EMercCosmeticSlot eSlot, struct TArray<int32_t> SlotPosition, struct UKSJobItem* JobItem); // Function KillstreakUINew.KSMercManager.IsItemEquippedInAnySlot
	void Initialize(struct APUMG_HUD* InHud); // Function KillstreakUINew.KSMercManager.Initialize
	struct UKSLoadoutDataFactory* GetLoadoutDataFactory(); // Function KillstreakUINew.KSMercManager.GetLoadoutDataFactory
	bool GetEquippedCosmeticItemBySlot(enum class EMercCosmeticSlot eSlot, int32_t SlotPosition, struct UKSJobItem* JobItem, struct UKSItem* CosmeticItem); // Function KillstreakUINew.KSMercManager.GetEquippedCosmeticItemBySlot
	bool EquipCosmeticItemToSlot(enum class EMercCosmeticSlot eSlot, int32_t SlotPosition, struct UKSJobItem* JobItem, struct UKSItem* CosmeticItem, bool bGlobal); // Function KillstreakUINew.KSMercManager.EquipCosmeticItemToSlot
	void ClearCosmeticItemOnSlot(enum class EMercCosmeticSlot eSlot, int32_t SlotPosition, struct UKSJobItem* JobItem); // Function KillstreakUINew.KSMercManager.ClearCosmeticItemOnSlot
};

// Class KillstreakUINew.KSMinimapWidgetBase
// Size: 0x5e0 (Inherited: 0x5d0)
struct UKSMinimapWidgetBase : public UKSMapWidgetBase {
	float MinimapRepresentedWidth; // 0x5c8(0x04)
	float BackgroundWidth; // 0x5cc(0x04)
	enum class EMinimapWidgetClampStyle ClampStyle; // 0x5d0(0x01)
	char UnknownData_5D9[0x7]; // 0x5d9(0x07)

	void UpdateMapMaterialTransform(struct UMaterialInstanceDynamic* MapMaterial, float NormalizedX, float NormalizedY, float Rotation, float Scale); // Function KillstreakUINew.KSMinimapWidgetBase.UpdateMapMaterialTransform
};

// Class KillstreakUINew.KSModWidget_DetectEnemy
// Size: 0x4f8 (Inherited: 0x4e0)
struct UKSModWidget_DetectEnemy : public UKSWidget {
	char UnknownData_4E0[0x18]; // 0x4e0(0x18)

	void OnDetectChanged(struct UKSModInst_DetectEnemy* DetectEnemyModInst, bool bIsDetectingEnemy); // Function KillstreakUINew.KSModWidget_DetectEnemy.OnDetectChanged
	struct UHorizontalBox* GetIconBox(); // Function KillstreakUINew.KSModWidget_DetectEnemy.GetIconBox
};

// Class KillstreakUINew.KSNewsRotatorData
// Size: 0x68 (Inherited: 0x48)
struct UKSNewsRotatorData : public UKSJsonData {
	struct UTexture2DDynamic* Image; // 0x48(0x08)
	enum class ENewsActions PanelAction; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
	struct FString ActionDetails; // 0x58(0x10)
};

// Class KillstreakUINew.KSNewsRotatorWidget
// Size: 0x4f8 (Inherited: 0x4e0)
struct UKSNewsRotatorWidget : public UKSWidget {
	struct FString JsonSection; // 0x4e0(0x10)
	float TimePerSection; // 0x4f0(0x04)
	char UnknownData_4F4[0x4]; // 0x4f4(0x04)

	bool ShouldShowPanel(struct UKSNewsRotatorData* Panel); // Function KillstreakUINew.KSNewsRotatorWidget.ShouldShowPanel
	void OnJsonChanged(); // Function KillstreakUINew.KSNewsRotatorWidget.OnJsonChanged
	struct TArray<struct UKSNewsRotatorData*> GetPanelData(); // Function KillstreakUINew.KSNewsRotatorWidget.GetPanelData
	struct UKSJsonDataFactory* GetJsonDataFactory(); // Function KillstreakUINew.KSNewsRotatorWidget.GetJsonDataFactory
};

// Class KillstreakUINew.KSPerkTreeBase
// Size: 0x520 (Inherited: 0x4e0)
struct UKSPerkTreeBase : public UKSWidget {
	struct FMulticastInlineDelegate OnPerkHovered; // 0x4e0(0x10)
	struct FMulticastInlineDelegate OnPerkSelected; // 0x4f0(0x10)
	struct FMulticastInlineDelegate OnPerkUnlockRequest; // 0x500(0x10)
	struct UWidget* HoverTarget; // 0x510(0x08)
	char UnknownData_518[0x8]; // 0x518(0x08)

	void SetCursorLerping(bool bLerping); // Function KillstreakUINew.KSPerkTreeBase.SetCursorLerping
	void RefreshEdge(struct UKSPerkTreeEdgeBase* Edge, int32_t column, int32_t Row, struct TMap<struct FIntPoint, struct UKSPerkTreeNodeBase*> NodesMap); // Function KillstreakUINew.KSPerkTreeBase.RefreshEdge
	struct TMap<struct FIntPoint, struct UKSPerkTreeNodeBase*> InitializeNodes(); // Function KillstreakUINew.KSPerkTreeBase.InitializeNodes
	void HandleTreeNodeSelected(struct UKSPerkTreeNodeBase* SelectedNode, struct FCustomLoadoutItem SelectedPerk, bool bAlreadyEquipped); // Function KillstreakUINew.KSPerkTreeBase.HandleTreeNodeSelected
	void HandleTreeNodeHovered(struct UKSPerkTreeNodeBase* HoveredNode, struct FCustomLoadoutItem HoveredPerk); // Function KillstreakUINew.KSPerkTreeBase.HandleTreeNodeHovered
	struct UWidget* GetHoverCursor(); // Function KillstreakUINew.KSPerkTreeBase.GetHoverCursor
	struct UKSPerkTreeNodeBase* GetDefaultFocusNode(); // Function KillstreakUINew.KSPerkTreeBase.GetDefaultFocusNode
	void BindNode(struct UKSPerkTreeNodeBase* TreeNode); // Function KillstreakUINew.KSPerkTreeBase.BindNode
};

// Class KillstreakUINew.KSPerkTreeEdgeBase
// Size: 0x4f8 (Inherited: 0x4e0)
struct UKSPerkTreeEdgeBase : public UKSWidget {
	bool bTopEnabled; // 0x4e0(0x01)
	bool bLeftEnabled; // 0x4e1(0x01)
	bool bDiagonalEnabled; // 0x4e2(0x01)
	bool bBackDiagonalEnabled; // 0x4e3(0x01)
	struct FLinearColor AccentColor; // 0x4e4(0x10)
	char UnknownData_4F4[0x4]; // 0x4f4(0x04)

	void SetViewByState(struct FKSPerkTreeEdgeInfo EdgeInfo); // Function KillstreakUINew.KSPerkTreeEdgeBase.SetViewByState
};

// Class KillstreakUINew.KSPerkTreeNodeBase
// Size: 0x540 (Inherited: 0x4e0)
struct UKSPerkTreeNodeBase : public UKSWidget {
	struct TSoftObjectPtr<struct UKSPlayerMod> AssignedPerk; // 0x4e0(0x28)
	struct FMulticastInlineDelegate OnTreeNodeHovered; // 0x508(0x10)
	struct FMulticastInlineDelegate OnTreeNodeSelected; // 0x518(0x10)
	struct FMulticastInlineDelegate OnRequestPerkPurchase; // 0x528(0x10)
	bool bIsPlaceholder; // 0x538(0x01)
	enum class EPerkTreeNodeState NodeState; // 0x539(0x01)
	char UnknownData_53A[0x6]; // 0x53a(0x06)

	void SetNodeState(enum class EPerkTreeNodeState NewNodeState); // Function KillstreakUINew.KSPerkTreeNodeBase.SetNodeState
	void RefreshView(); // Function KillstreakUINew.KSPerkTreeNodeBase.RefreshView
	enum class EPerkTreeNodeState GetNodeState(); // Function KillstreakUINew.KSPerkTreeNodeBase.GetNodeState
};

// Class KillstreakUINew.KSViewedActiveWeaponWidget
// Size: 0x4f8 (Inherited: 0x4e8)
struct UKSViewedActiveWeaponWidget : public UKSWeaponWidget {
	char UnknownData_4E8[0x10]; // 0x4e8(0x10)
};

// Class KillstreakUINew.KSPlayerAmmoLoaderWidget
// Size: 0x610 (Inherited: 0x4f8)
struct UKSPlayerAmmoLoaderWidget : public UKSViewedActiveWeaponWidget {
	SoftClassProperty PendingAmmoWidgetClass; // 0x4f8(0x28)
	struct UKSAmmoWidget* LoadedAmmoWidgetClass; // 0x520(0x08)
	char UnknownData_528[0xe8]; // 0x528(0xe8)

	void SetActiveAmmoWidget(struct UKSAmmoWidget* NewWidgetClass, struct AKSWeapon* NewWeapon); // Function KillstreakUINew.KSPlayerAmmoLoaderWidget.SetActiveAmmoWidget
	struct UKSAmmoWidget* GetActiveAmmoWidget(); // Function KillstreakUINew.KSPlayerAmmoLoaderWidget.GetActiveAmmoWidget
	void ClearActiveAmmoWidget(); // Function KillstreakUINew.KSPlayerAmmoLoaderWidget.ClearActiveAmmoWidget
};

// Class KillstreakUINew.KSPlayerCardModuleBase
// Size: 0x4f0 (Inherited: 0x4e0)
struct UKSPlayerCardModuleBase : public UKSWidget {
	struct UPUMG_PlayerInfo* AssignedPlayerInfo; // 0x4e0(0x08)
	char UnknownData_4E8[0x8]; // 0x4e8(0x08)

	void View_SetPlayer(struct UPUMG_PlayerInfo* playerinfo, enum class EKSPlayerOnlineStatus PlayerStatus, bool IsPortalFriend, bool IsPending); // Function KillstreakUINew.KSPlayerCardModuleBase.View_SetPlayer
	void OnPlayerUpdate(struct UPUMG_PlayerInfo* playerinfo, enum class EKSPlayerOnlineStatus PlayerStatus, bool IsPortalFriend, bool IsPending); // Function KillstreakUINew.KSPlayerCardModuleBase.OnPlayerUpdate
	void HandlePlayerDataUpdated(struct UPUMG_PlayerInfo* playerinfo); // Function KillstreakUINew.KSPlayerCardModuleBase.HandlePlayerDataUpdated
};

// Class KillstreakUINew.KSPlayerDataFactory
// Size: 0xc8 (Inherited: 0xb0)
struct UKSPlayerDataFactory : public UPUMG_PlayerDataFactory {
	struct UKSPlayerStatsManager* PlayerStatsManager; // 0xb0(0x08)
	struct FMulticastInlineDelegate OnPlayerLevelChanged; // 0xb8(0x10)

	bool ShouldDisplayRankedLevel(); // Function KillstreakUINew.KSPlayerDataFactory.ShouldDisplayRankedLevel
	void HandlePlayerRankIncremented(struct UKSActivityInstance* ActivityInstance, int32_t Count); // Function KillstreakUINew.KSPlayerDataFactory.HandlePlayerRankIncremented
	void HandlePlayerRankChanged(struct UKSActivityInstance* Activity, int32_t Tier, int32_t Count); // Function KillstreakUINew.KSPlayerDataFactory.HandlePlayerRankChanged
	void HandlePlayerLevelIncremented(struct UKSActivityInstance* ActivityInstance, int32_t Count); // Function KillstreakUINew.KSPlayerDataFactory.HandlePlayerLevelIncremented
	void HandlePlayerLevelChanged(struct UKSActivityInstance* Activity, int32_t Tier, int32_t Count); // Function KillstreakUINew.KSPlayerDataFactory.HandlePlayerLevelChanged
	int32_t GetRogueBucksCount(); // Function KillstreakUINew.KSPlayerDataFactory.GetRogueBucksCount
	int32_t GetReputationCount(); // Function KillstreakUINew.KSPlayerDataFactory.GetReputationCount
	int32_t GetRankedLevel(); // Function KillstreakUINew.KSPlayerDataFactory.GetRankedLevel
	float GetPlayerLevelPercent(); // Function KillstreakUINew.KSPlayerDataFactory.GetPlayerLevelPercent
	int32_t GetPlayerLevel(); // Function KillstreakUINew.KSPlayerDataFactory.GetPlayerLevel
	int32_t GetPlayerId(); // Function KillstreakUINew.KSPlayerDataFactory.GetPlayerId
	int32_t GetPlayerBannerIndex(); // Function KillstreakUINew.KSPlayerDataFactory.GetPlayerBannerIndex
};

// Class KillstreakUINew.KSViewedTargetHealthWidget
// Size: 0x530 (Inherited: 0x520)
struct UKSViewedTargetHealthWidget : public UKSHealthWidget {
	char UnknownData_520[0x10]; // 0x520(0x10)
};

// Class KillstreakUINew.KSPlayerHealthWidgetBase
// Size: 0x560 (Inherited: 0x530)
struct UKSPlayerHealthWidgetBase : public UKSViewedTargetHealthWidget {
	struct FPlayerHealthMeterState CurrentHealthMeterState; // 0x530(0x18)
	char UnknownData_548[0x18]; // 0x548(0x18)

	void View_SetResidualPercent(float ResidualPercent); // Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetResidualPercent
	void View_SetResidualMode(bool IsHealing); // Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetResidualMode
	void View_SetResidualAlpha(float ResidualAlpha); // Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetResidualAlpha
	void View_SetHealthTextValue(float HealthValue, float OverhealValue); // Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetHealthTextValue
	void View_SetHealthPercent(float HealthPercent); // Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetHealthPercent
	void View_SetHealthMode(bool IsDowned, bool IsOverhealed); // Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetHealthMode
	void View_PlayDamagePulse(); // Function KillstreakUINew.KSPlayerHealthWidgetBase.View_PlayDamagePulse
	void View_OnDeathStateChanged(); // Function KillstreakUINew.KSPlayerHealthWidgetBase.View_OnDeathStateChanged
	void OnJobChanged(struct UKSJobItem* Job); // Function KillstreakUINew.KSPlayerHealthWidgetBase.OnJobChanged
	void OnHealthMeterStateChanged(); // Function KillstreakUINew.KSPlayerHealthWidgetBase.OnHealthMeterStateChanged
	void OnHealthDecreased(); // Function KillstreakUINew.KSPlayerHealthWidgetBase.OnHealthDecreased
	void HandlePlayerDownedChanged(struct AKSPlayerState* pKSPlayerState); // Function KillstreakUINew.KSPlayerHealthWidgetBase.HandlePlayerDownedChanged
	void HandleJobChanged(); // Function KillstreakUINew.KSPlayerHealthWidgetBase.HandleJobChanged
	void HandleDeathStateChanged(); // Function KillstreakUINew.KSPlayerHealthWidgetBase.HandleDeathStateChanged
};

// Class KillstreakUINew.JobSelectionEntryDetails
// Size: 0x68 (Inherited: 0x28)
struct UJobSelectionEntryDetails : public UObject {
	struct FJobSelectionEntry JobEntry; // 0x28(0x30)
	struct UPUMG_StoreItem* StoreItem; // 0x58(0x08)
	bool AllowIfUnowned; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)

	bool IsSelf(); // Function KillstreakUINew.JobSelectionEntryDetails.IsSelf
	bool IsOwned(); // Function KillstreakUINew.JobSelectionEntryDetails.IsOwned
	struct FText GetJobName(); // Function KillstreakUINew.JobSelectionEntryDetails.GetJobName
	struct UKSJobItem* GetJobItem(); // Function KillstreakUINew.JobSelectionEntryDetails.GetJobItem
};

// Class KillstreakUINew.KSPlayerJobSelectWidgetBase
// Size: 0x530 (Inherited: 0x4e0)
struct UKSPlayerJobSelectWidgetBase : public UKSWidget {
	struct UKSJobSelectionManager* JobSelectionManager; // 0x4e0(0x08)
	struct UKSJobSelectionComponent* JobSelectionComponent; // 0x4e8(0x08)
	struct TArray<struct UJobSelectionEntryDetails*> JobDetailEntries; // 0x4f0(0x10)
	enum class EPlayerSelectionState CurrentPlayerSelectionState; // 0x500(0x01)
	char UnknownData_501[0x7]; // 0x501(0x07)
	struct TArray<struct UJobSelectionEntryDetails*> EnemyJobDetailsEntries; // 0x508(0x10)
	struct FWeakObjectPtr<struct UKSJobSelectionComponent> BoundEnemyJobSelectionComponent; // 0x518(0x08)
	struct FWeakObjectPtr<struct UKSJobSelectionComponent> BoundLocalJobSelectionComponent; // 0x520(0x08)
	char UnknownData_528[0x8]; // 0x528(0x08)

	bool UIX_RequestJobSelect(struct UJobSelectionEntryDetails* JobEntry, enum class EJobSelectionState RequestedState); // Function KillstreakUINew.KSPlayerJobSelectWidgetBase.UIX_RequestJobSelect
	void OnResetSelection(); // Function KillstreakUINew.KSPlayerJobSelectWidgetBase.OnResetSelection
	void OnPlayerSelectionStateChanged(enum class EPlayerSelectionState NewState); // Function KillstreakUINew.KSPlayerJobSelectWidgetBase.OnPlayerSelectionStateChanged
	void OnJobEntryChanged(struct UJobSelectionEntryDetails* JobEntry, bool EnemyTeam); // Function KillstreakUINew.KSPlayerJobSelectWidgetBase.OnJobEntryChanged
	void OnJobEntriesReady(struct TArray<struct UJobSelectionEntryDetails*> JobEntries, bool EnemyTeam); // Function KillstreakUINew.KSPlayerJobSelectWidgetBase.OnJobEntriesReady
	void HandleTeamAddedToMatch(struct AKSTeamState* NewTeam); // Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleTeamAddedToMatch
	void HandleNewJobSelectionComponent(struct UKSJobSelectionComponent* NewJobSelectionComponent); // Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleNewJobSelectionComponent
	void HandleJobSelectionManagerReady(struct UKSJobSelectionManager* JobSelectionManager); // Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobSelectionManagerReady
	void HandleJobSelectionInitialized(); // Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobSelectionInitialized
	void HandleJobEntryStateChangedForEnemies(struct FJobSelectionEntry JobEntry); // Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobEntryStateChangedForEnemies
	void HandleJobEntryStateChanged(struct FJobSelectionEntry JobEntry); // Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobEntryStateChanged
	void HandleJobEntryAddedForEnemies(struct FJobSelectionEntry JobEntry); // Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobEntryAddedForEnemies
	void HandleJobEntryAdded(struct FJobSelectionEntry JobEntry); // Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobEntryAdded
	void HandleJobEntryAcknowledge(int32_t ItemId, bool bSuccess, enum class EJobSelectionState RequestState); // Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobEntryAcknowledge
	struct UKSJobSelectionComponent* GetJobSelectionComponent(); // Function KillstreakUINew.KSPlayerJobSelectWidgetBase.GetJobSelectionComponent
	struct UKSJobItem* GetJobItemById(int32_t JobItemId); // Function KillstreakUINew.KSPlayerJobSelectWidgetBase.GetJobItemById
	void BindListenersForTeam(struct AKSTeamState* Team); // Function KillstreakUINew.KSPlayerJobSelectWidgetBase.BindListenersForTeam
};

// Class KillstreakUINew.KSPlayerQueryDataFactory
// Size: 0x150 (Inherited: 0x38)
struct UKSPlayerQueryDataFactory : public UPUMG_DataFactory {
	char UnknownData_38[0x100]; // 0x38(0x100)
	struct FTimerHandle CheckTimerHandle; // 0x138(0x08)
	char UnknownData_140[0x10]; // 0x140(0x10)

	bool QueryPlayersByNameWithProfiles(struct FText PlayerName, struct FDelegate OnReponse, struct FKSPlayerQueryHandle OutHandle); // Function KillstreakUINew.KSPlayerQueryDataFactory.QueryPlayersByNameWithProfiles
	bool QueryPlayersByName(struct FText PlayerName, struct FDelegate OnReponse, struct FKSPlayerQueryHandle OutHandle); // Function KillstreakUINew.KSPlayerQueryDataFactory.QueryPlayersByName
	void OnTimeoutCheck(); // Function KillstreakUINew.KSPlayerQueryDataFactory.OnTimeoutCheck
	struct FText GetQueriedName(struct FKSPlayerQueryHandle InHandle); // Function KillstreakUINew.KSPlayerQueryDataFactory.GetQueriedName
	struct FText GetPlayerQueryErrorMessage(enum class EKSPlayerQueryError Error); // Function KillstreakUINew.KSPlayerQueryDataFactory.GetPlayerQueryErrorMessage
	void CancelQuery(struct FKSPlayerQueryHandle InHandle); // Function KillstreakUINew.KSPlayerQueryDataFactory.CancelQuery
};

// Class KillstreakUINew.KSPlayerShopWidgetBase
// Size: 0x4f8 (Inherited: 0x4e0)
struct UKSPlayerShopWidgetBase : public UKSWidget {
	char UnknownData_4E0[0x8]; // 0x4e0(0x08)
	struct AKSPlayerShop* PlayerShop; // 0x4e8(0x08)
	char UnknownData_4F0[0x8]; // 0x4f0(0x08)

	void TriggerDisplayUpdate(bool ForceUpdate); // Function KillstreakUINew.KSPlayerShopWidgetBase.TriggerDisplayUpdate
	void ShopItemChanged(struct FShopItem ChangedItem); // Function KillstreakUINew.KSPlayerShopWidgetBase.ShopItemChanged
	void SetShopState(bool IsOpen); // Function KillstreakUINew.KSPlayerShopWidgetBase.SetShopState
	void SetShopContent(); // Function KillstreakUINew.KSPlayerShopWidgetBase.SetShopContent
	void SetPromptShow(bool ShouldShowPrompt); // Function KillstreakUINew.KSPlayerShopWidgetBase.SetPromptShow
	void SetCashValue(int32_t CashValue); // Function KillstreakUINew.KSPlayerShopWidgetBase.SetCashValue
	void PurchaseAcknowledge(enum class EShopItemType ShopItemType); // Function KillstreakUINew.KSPlayerShopWidgetBase.PurchaseAcknowledge
	void HandleTeamsFlipped(); // Function KillstreakUINew.KSPlayerShopWidgetBase.HandleTeamsFlipped
	void HandleShopOpened(); // Function KillstreakUINew.KSPlayerShopWidgetBase.HandleShopOpened
	void HandleShopItemChanged(struct FShopItem ChangedItem); // Function KillstreakUINew.KSPlayerShopWidgetBase.HandleShopItemChanged
	void HandleShopClosed(); // Function KillstreakUINew.KSPlayerShopWidgetBase.HandleShopClosed
	void HandleShopAvailabilityChanged(bool bAvailable); // Function KillstreakUINew.KSPlayerShopWidgetBase.HandleShopAvailabilityChanged
	void HandlePurchaseAcknowledged(enum class EShopItemType ShopItemType, bool bSuccess); // Function KillstreakUINew.KSPlayerShopWidgetBase.HandlePurchaseAcknowledged
	void HandleCashChanged(int32_t Cash, int32_t Delta); // Function KillstreakUINew.KSPlayerShopWidgetBase.HandleCashChanged
	void CheckForValidPlayerState(); // Function KillstreakUINew.KSPlayerShopWidgetBase.CheckForValidPlayerState
};

// Class KillstreakUINew.KSPointObjectiveMarkerWidget
// Size: 0x348 (Inherited: 0x2c0)
struct UKSPointObjectiveMarkerWidget : public UKSMapIconWidgetBase {
	char UnknownData_2C0[0x88]; // 0x2c0(0x88)

	void ViewSetCaptureProgress(float ProgressPercent); // Function KillstreakUINew.KSPointObjectiveMarkerWidget.ViewSetCaptureProgress
	void ViewApplyTimerValue(float TimerSeconds, float TotalTimerSeconds); // Function KillstreakUINew.KSPointObjectiveMarkerWidget.ViewApplyTimerValue
	bool ShouldHideObjectiveIcon(); // Function KillstreakUINew.KSPointObjectiveMarkerWidget.ShouldHideObjectiveIcon
	void SetView(struct FKSPointObjectiveMarkerViewState ViewState); // Function KillstreakUINew.KSPointObjectiveMarkerWidget.SetView
	void SetTeamColorsForState(struct TMap<enum class EPointObjectiveMarkerTeamState, struct FLinearColor> StateColors); // Function KillstreakUINew.KSPointObjectiveMarkerWidget.SetTeamColorsForState
	bool SetTeamColorForState(enum class EPointObjectiveMarkerTeamState ObjectiveState, struct FLinearColor StateColor); // Function KillstreakUINew.KSPointObjectiveMarkerWidget.SetTeamColorForState
	void OnControlTeamScoreUpdated(struct AKSTeamState* TeamState); // Function KillstreakUINew.KSPointObjectiveMarkerWidget.OnControlTeamScoreUpdated
	bool IsInTimerState(); // Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInTimerState
	bool IsInProgressState(); // Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInProgressState
	bool IsInMatchTimerState(); // Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInMatchTimerState
	bool IsInLockedState(); // Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInLockedState
	bool IsInCountdownState(); // Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInCountdownState
	bool IsInContestedState(); // Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInContestedState
	bool IsInCapturedState(); // Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInCapturedState
	void HandlePhaseChanged(struct FName NewPhaseName, struct FName PreviousPhaseName); // Function KillstreakUINew.KSPointObjectiveMarkerWidget.HandlePhaseChanged
	void HandleControlTeamScoreUpdated(struct AKSTeamState* TeamState, struct AKSControlPoint* ControlPoint); // Function KillstreakUINew.KSPointObjectiveMarkerWidget.HandleControlTeamScoreUpdated
	void HandleBombStateChanged(struct FKSNeutralBombState BombState); // Function KillstreakUINew.KSPointObjectiveMarkerWidget.HandleBombStateChanged
	bool GetTeamColorForState(struct FLinearColor TeamColor); // Function KillstreakUINew.KSPointObjectiveMarkerWidget.GetTeamColorForState
	struct FKSPointObjectiveMarkerViewState GetCurrentViewState(); // Function KillstreakUINew.KSPointObjectiveMarkerWidget.GetCurrentViewState
	struct AKSObjectiveBase* GetAssociatedObjective(); // Function KillstreakUINew.KSPointObjectiveMarkerWidget.GetAssociatedObjective
	bool DoesAttackingTeamExist(bool IsLocalPlayerOnAttackingTeam); // Function KillstreakUINew.KSPointObjectiveMarkerWidget.DoesAttackingTeamExist
	void ControlPointStateUpdated(struct AKSControlPoint* Objective); // Function KillstreakUINew.KSPointObjectiveMarkerWidget.ControlPointStateUpdated
};

// Class KillstreakUINew.KSProgressionTallyWidget
// Size: 0x5a8 (Inherited: 0x4e0)
struct UKSProgressionTallyWidget : public UKSWidget {
	struct FPlayerProgression PlayerProgressionData; // 0x4e0(0xc8)

	void SetPlayerProgressionData(struct FPlayerProgression PlayerProgression); // Function KillstreakUINew.KSProgressionTallyWidget.SetPlayerProgressionData
	void GetPlayerProgressionBreakdown(int32_t BaseXP, int32_t EventBonusXP, int32_t WinBonusXP); // Function KillstreakUINew.KSProgressionTallyWidget.GetPlayerProgressionBreakdown
};

// Class KillstreakUINew.KSProgressMeterWidgetBase
// Size: 0x500 (Inherited: 0x4e0)
struct UKSProgressMeterWidgetBase : public UKSWidget {
	char UnknownData_4E0[0x20]; // 0x4e0(0x20)

	void SetDeltaAnimationParams(float BasePercent, float DeltaPercent, float AnimTime); // Function KillstreakUINew.KSProgressMeterWidgetBase.SetDeltaAnimationParams
	void PlayDeltaAnimation(float StartDelay); // Function KillstreakUINew.KSProgressMeterWidgetBase.PlayDeltaAnimation
	void OnDeltaAnimationTicked(); // Function KillstreakUINew.KSProgressMeterWidgetBase.OnDeltaAnimationTicked
	void OnDeltaAnimationStarted(); // Function KillstreakUINew.KSProgressMeterWidgetBase.OnDeltaAnimationStarted
	void OnDeltaAnimationFinished(bool bLevelChange); // Function KillstreakUINew.KSProgressMeterWidgetBase.OnDeltaAnimationFinished
	bool IsPlayingDeltaAnimation(); // Function KillstreakUINew.KSProgressMeterWidgetBase.IsPlayingDeltaAnimation
	void EnableDeltaAnimation(); // Function KillstreakUINew.KSProgressMeterWidgetBase.EnableDeltaAnimation
	void ApplyMeterPercentages_Raw(float BasePercent, float DeltaPercent); // Function KillstreakUINew.KSProgressMeterWidgetBase.ApplyMeterPercentages_Raw
	void ApplyMeterPercentages(float BasePercent, float DeltaPercent); // Function KillstreakUINew.KSProgressMeterWidgetBase.ApplyMeterPercentages
};

// Class KillstreakUINew.KSQueueDataFactory
// Size: 0x270 (Inherited: 0x1e0)
struct UKSQueueDataFactory : public UPUMG_QueueDataFactory {
	char UnknownData_1E0[0x10]; // 0x1e0(0x10)
	struct FMulticastInlineDelegate OnSetQueueId; // 0x1f0(0x10)
	struct FMulticastInlineDelegate OnQueueErrorRelevantStateChanged; // 0x200(0x10)
	int32_t ChunksInstallingQueueId; // 0x210(0x04)
	int32_t DefaultSelectedQueueId; // 0x214(0x04)
	struct FMulticastInlineDelegate OnSetQueueInputState; // 0x218(0x10)
	struct TArray<int64_t> PreviousCustomMatchMemberIds; // 0x228(0x10)
	int32_t SelectedQueueId; // 0x238(0x04)
	float TimeoutForSwitchFromShelteredToMainQueue; // 0x23c(0x04)
	bool bWaitingOnLeaveForShelteredSwitch; // 0x240(0x01)
	bool bWaitingOnJoinForShelteredSwitch; // 0x241(0x01)
	char UnknownData_242[0x2]; // 0x242(0x02)
	int32_t MaxRetriesForFindingPartyMemberLevels; // 0x244(0x04)
	float TimeBetweenRetriesForFindingPartyMemberLevels; // 0x248(0x04)
	char UnknownData_24C[0x4]; // 0x24c(0x04)
	int32_t NumRetriesForFindingPartyMemberLevels; // 0x250(0x04)
	char UnknownData_254[0x4]; // 0x254(0x04)
	struct UDataTable* MapInfoDataTable; // 0x258(0x08)
	struct UDataTable* QueueDetailDataTable; // 0x260(0x08)
	char UnknownData_268[0x8]; // 0x268(0x08)

	struct TArray<struct FClientQueueInfo> SortQueues(struct TArray<struct FClientQueueInfo> ClientCachedQueueInfo, bool IsAlphanumerical); // Function KillstreakUINew.KSQueueDataFactory.SortQueues
	bool SetSelectedQueueId(int32_t QueueId); // Function KillstreakUINew.KSQueueDataFactory.SetSelectedQueueId
	void SetPreviousCustomMatchMemberIds(struct TArray<int64_t> PreviousMembers); // Function KillstreakUINew.KSQueueDataFactory.SetPreviousCustomMatchMemberIds
	void RetryQueuingForSheltered(int32_t QueueId); // Function KillstreakUINew.KSQueueDataFactory.RetryQueuingForSheltered
	void OnPartyMemberUpdate(struct FPUMG_PartyMemberData Member); // Function KillstreakUINew.KSQueueDataFactory.OnPartyMemberUpdate
	void OnPartyMemberEvent(int64_t PlayerId); // Function KillstreakUINew.KSQueueDataFactory.OnPartyMemberEvent
	void OnPartyEvent(); // Function KillstreakUINew.KSQueueDataFactory.OnPartyEvent
	void OnInputStateChanged(char InputState); // Function KillstreakUINew.KSQueueDataFactory.OnInputStateChanged
	bool JoinSelectedQueue(); // Function KillstreakUINew.KSQueueDataFactory.JoinSelectedQueue
	bool IsTutorialQueue(int32_t QueueId); // Function KillstreakUINew.KSQueueDataFactory.IsTutorialQueue
	bool IsCustomSpectateEnabled(); // Function KillstreakUINew.KSQueueDataFactory.IsCustomSpectateEnabled
	void HandleShelteredMMTimeout(int32_t QueueId); // Function KillstreakUINew.KSQueueDataFactory.HandleShelteredMMTimeout
	void HandleShelteredMMSwitchFinish(bool bSendNotify, bool bClearTimer); // Function KillstreakUINew.KSQueueDataFactory.HandleShelteredMMSwitchFinish
	void HandleShelteredMMQueueSwitch(int32_t QueueId); // Function KillstreakUINew.KSQueueDataFactory.HandleShelteredMMQueueSwitch
	int32_t GetSelectedShelteredQueueId(); // Function KillstreakUINew.KSQueueDataFactory.GetSelectedShelteredQueueId
	int32_t GetSelectedQueueId(); // Function KillstreakUINew.KSQueueDataFactory.GetSelectedQueueId
	bool GetQueueInfoById(int32_t QueueId, struct FClientQueueInfo InClientQueueInfo); // Function KillstreakUINew.KSQueueDataFactory.GetQueueInfoById
	int32_t GetPenaltyTime(); // Function KillstreakUINew.KSQueueDataFactory.GetPenaltyTime
	bool GetMapRotationsByQueueId(int32_t QueueId, struct TArray<int32_t> MapIds); // Function KillstreakUINew.KSQueueDataFactory.GetMapRotationsByQueueId
	bool GetMapInfoById(int32_t MapId, struct FUIMapInfo MapInfo); // Function KillstreakUINew.KSQueueDataFactory.GetMapInfoById
	struct TArray<struct FClientQueueInfo> GetCustomQueues(); // Function KillstreakUINew.KSQueueDataFactory.GetCustomQueues
	bool GetCurrentCustomMatchInfo(struct FClientQueueInfo InClientQueueInfo); // Function KillstreakUINew.KSQueueDataFactory.GetCurrentCustomMatchInfo
	bool FormatQueueJoinErrorMessage(struct FClientQueueInfo Queue, enum class EKSQueueJoinError Error, struct FText OutErrorMessage); // Function KillstreakUINew.KSQueueDataFactory.FormatQueueJoinErrorMessage
	int32_t DetermineQueueIdForShelteredMM(int32_t QueueId, struct FClientQueueInfo QueueInfo); // Function KillstreakUINew.KSQueueDataFactory.DetermineQueueIdForShelteredMM
	enum class EKSQueueJoinError CheckQueueJoinableById(int32_t QueueId); // Function KillstreakUINew.KSQueueDataFactory.CheckQueueJoinableById
	enum class EKSQueueJoinError CheckQueueJoinable(struct FClientQueueInfo Queue); // Function KillstreakUINew.KSQueueDataFactory.CheckQueueJoinable
};

// Class KillstreakUINew.KSQueuedMessageWidget
// Size: 0x4f0 (Inherited: 0x4e0)
struct UKSQueuedMessageWidget : public UKSWidget {
	char UnknownData_4E0[0x10]; // 0x4e0(0x10)

	void QueueMessage(struct FText Message); // Function KillstreakUINew.KSQueuedMessageWidget.QueueMessage
	bool GetNextMessage(struct FText Message); // Function KillstreakUINew.KSQueuedMessageWidget.GetNextMessage
};

// Class KillstreakUINew.KSQueueTimerWidgetBase
// Size: 0x4f0 (Inherited: 0x4e0)
struct UKSQueueTimerWidgetBase : public UKSQueueWidgetBase {
	char UnknownData_4E0[0x10]; // 0x4e0(0x10)

	void OnUpdateQueueTimerState(enum class EQueueTimerState State); // Function KillstreakUINew.KSQueueTimerWidgetBase.OnUpdateQueueTimerState
	void OnUpdateQueueTime(float TimeSecs); // Function KillstreakUINew.KSQueueTimerWidgetBase.OnUpdateQueueTime
	float GetQueueTime_TotalSecs(); // Function KillstreakUINew.KSQueueTimerWidgetBase.GetQueueTime_TotalSecs
	int32_t GetQueueTime_PartSecs(); // Function KillstreakUINew.KSQueueTimerWidgetBase.GetQueueTime_PartSecs
	int32_t GetQueueTime_PartMins(); // Function KillstreakUINew.KSQueueTimerWidgetBase.GetQueueTime_PartMins
	int32_t GetQueueTime_PartHours(); // Function KillstreakUINew.KSQueueTimerWidgetBase.GetQueueTime_PartHours
	enum class EQueueTimerState GetCurrentTimerState(); // Function KillstreakUINew.KSQueueTimerWidgetBase.GetCurrentTimerState
};

// Class KillstreakUINew.KSQuickPlay
// Size: 0x5d0 (Inherited: 0x4e0)
struct UKSQuickPlay : public UKSWidget {
	struct FMulticastInlineDelegate OnSelectedQueueChanged; // 0x4e0(0x10)
	bool CanCurrentlyJoinQueue; // 0x4f0(0x01)
	bool CanControlQueue; // 0x4f1(0x01)
	char UnknownData_4F2[0x2]; // 0x4f2(0x02)
	int32_t DefaultSelectedQueueId; // 0x4f4(0x04)
	int32_t ChunksInstallingQueueId; // 0x4f8(0x04)
	char UnknownData_4FC[0x14]; // 0x4fc(0x14)
	bool ReadyForQueueing; // 0x510(0x01)
	char UnknownData_511[0x7]; // 0x511(0x07)
	struct FClientQueueInfo CurrentSelectedQueue; // 0x518(0xb8)

	void UpdateQueuePermissions(); // Function KillstreakUINew.KSQuickPlay.UpdateQueuePermissions
	bool UIX_AttemptJoinSelectedQueue(); // Function KillstreakUINew.KSQuickPlay.UIX_AttemptJoinSelectedQueue
	bool UIX_AttemptCancelQueue(); // Function KillstreakUINew.KSQuickPlay.UIX_AttemptCancelQueue
	struct TArray<struct FQueueSection> SortQueueSections(struct TArray<struct FQueueSection> QueueSections); // Function KillstreakUINew.KSQuickPlay.SortQueueSections
	void SetupReadyForQueueing(); // Function KillstreakUINew.KSQuickPlay.SetupReadyForQueueing
	void SetupBindings(); // Function KillstreakUINew.KSQuickPlay.SetupBindings
	bool SetDefaultSelectedQueue(struct FClientQueueInfo NewSelectedQueue); // Function KillstreakUINew.KSQuickPlay.SetDefaultSelectedQueue
	bool SetCurrentlySelectedQueue(int32_t QueueId); // Function KillstreakUINew.KSQuickPlay.SetCurrentlySelectedQueue
	void ReceiveMatchStatusUpdate(enum class EPUMG_MatchStatus CurrentMatchStatus); // Function KillstreakUINew.KSQuickPlay.ReceiveMatchStatusUpdate
	void OnQueuePermissionChanged(bool CanQueue); // Function KillstreakUINew.KSQuickPlay.OnQueuePermissionChanged
	void OnControlQueuePermissionChanged(bool CanControl); // Function KillstreakUINew.KSQuickPlay.OnControlQueuePermissionChanged
	bool IsValidQueue(int32_t QueueId); // Function KillstreakUINew.KSQuickPlay.IsValidQueue
	void HandlePartyMemberDataUpdated(struct FPUMG_PartyMemberData PartyMember); // Function KillstreakUINew.KSQuickPlay.HandlePartyMemberDataUpdated
	enum class EQueueType GetQueueTypeFromName(struct FName QueueType); // Function KillstreakUINew.KSQuickPlay.GetQueueTypeFromName
	struct TArray<struct FQueueSection> GetQueueSections(struct TArray<struct FClientQueueInfo> ClientCachedQueueInfo); // Function KillstreakUINew.KSQuickPlay.GetQueueSections
	struct TArray<struct FClientQueueInfo> GetQueues(); // Function KillstreakUINew.KSQuickPlay.GetQueues
	bool GetQueueInfoById(int32_t QueueId, struct FClientQueueInfo QueueInfo); // Function KillstreakUINew.KSQuickPlay.GetQueueInfoById
	struct UKSQueueDataFactory* GetQueueDataFactory(); // Function KillstreakUINew.KSQuickPlay.GetQueueDataFactory
	struct UPUMG_PartyDataFactory* GetPartyDataFactory(); // Function KillstreakUINew.KSQuickPlay.GetPartyDataFactory
	int32_t GetDefaultSelectedQueueId(); // Function KillstreakUINew.KSQuickPlay.GetDefaultSelectedQueueId
	struct FClientQueueInfo GetCurrentlySelectedQueue(); // Function KillstreakUINew.KSQuickPlay.GetCurrentlySelectedQueue
	bool CheckForDirtyQueues(struct TArray<struct FClientQueueInfo> NewClientCachedQueueInfo); // Function KillstreakUINew.KSQuickPlay.CheckForDirtyQueues
	bool CheckForCustomQueues(struct TArray<struct FClientQueueInfo> CustomMatchQueueInfo); // Function KillstreakUINew.KSQuickPlay.CheckForCustomQueues
};

// Class KillstreakUINew.KSQuickPlayWidget
// Size: 0x4f8 (Inherited: 0x4e0)
struct UKSQuickPlayWidget : public UKSQueueWidgetBase {
	char UnknownData_4E0[0x18]; // 0x4e0(0x18)

	void UpdateState(); // Function KillstreakUINew.KSQuickPlayWidget.UpdateState
	void SetIsPendingQueueUpdate(bool IsPending); // Function KillstreakUINew.KSQuickPlayWidget.SetIsPendingQueueUpdate
	void OnUpdateQuickPlayState(enum class EQuickPlayQueueState QueueState); // Function KillstreakUINew.KSQuickPlayWidget.OnUpdateQuickPlayState
	void OnUpdateQuickPlayCanPlay(bool CanPlay); // Function KillstreakUINew.KSQuickPlayWidget.OnUpdateQuickPlayCanPlay
	void OnUpdateQueueTimeElapsed(float TimeElapsed); // Function KillstreakUINew.KSQuickPlayWidget.OnUpdateQueueTimeElapsed
	void OnUpdatePenaltyTimeLeft(int32_t TimeLeft); // Function KillstreakUINew.KSQuickPlayWidget.OnUpdatePenaltyTimeLeft
	bool IsPendingQueueUpdate(); // Function KillstreakUINew.KSQuickPlayWidget.IsPendingQueueUpdate
	enum class EQuickPlayQueueState GetSelectedQueueState(); // Function KillstreakUINew.KSQuickPlayWidget.GetSelectedQueueState
	bool GetGameModeDisplayName(struct FText GameModeDisplayName); // Function KillstreakUINew.KSQuickPlayWidget.GetGameModeDisplayName
	enum class EQuickPlayQueueState GetCurrentQuickPlayState(); // Function KillstreakUINew.KSQuickPlayWidget.GetCurrentQuickPlayState
};

// Class KillstreakUINew.KSRadialSelectionWidgetBase
// Size: 0x590 (Inherited: 0x4e0)
struct UKSRadialSelectionWidgetBase : public UKSWidget {
	struct TArray<struct FGameplayTag> EmoteSlots; // 0x4e0(0x10)
	struct TArray<struct FGameplayTag> QuipSlots; // 0x4f0(0x10)
	struct TArray<struct FGameplayTag> CommunicationSlots; // 0x500(0x10)
	struct TArray<struct FGameplayTag> SpraySlots; // 0x510(0x10)
	struct TArray<struct FName> AdditionalInputsToDisableOnOpen; // 0x520(0x10)
	struct TArray<enum class EMercCosmeticSlot> RadialMenuCosmeticSlots; // 0x530(0x10)
	bool bCycleBetweenMenusEnabled; // 0x540(0x01)
	char UnknownData_541[0x3f]; // 0x541(0x3f)
	struct UDataTable* ContextualPingTypesDT; // 0x580(0x08)
	struct UDataTable* ContextualPingMessagesDT; // 0x588(0x08)

	void UpdateLastSelectedIndex(int32_t NewIndex); // Function KillstreakUINew.KSRadialSelectionWidgetBase.UpdateLastSelectedIndex
	void UpdateLastHoveredIndex(int32_t NewHoveredIndex); // Function KillstreakUINew.KSRadialSelectionWidgetBase.UpdateLastHoveredIndex
	void TraceSelectionCursor(float Radius, float Angle); // Function KillstreakUINew.KSRadialSelectionWidgetBase.TraceSelectionCursor
	void ShowSelector(); // Function KillstreakUINew.KSRadialSelectionWidgetBase.ShowSelector
	void SetupForRadialWheelMode(enum class ERadialWheelMode NewRadialWheelMode); // Function KillstreakUINew.KSRadialSelectionWidgetBase.SetupForRadialWheelMode
	void RadialOptionUnhover(); // Function KillstreakUINew.KSRadialSelectionWidgetBase.RadialOptionUnhover
	void RadialOptionSelected(int32_t Index); // Function KillstreakUINew.KSRadialSelectionWidgetBase.RadialOptionSelected
	void RadialOptionHovered(int32_t Index); // Function KillstreakUINew.KSRadialSelectionWidgetBase.RadialOptionHovered
	void OpenSpecifiedRadialMenu(enum class EMercCosmeticSlot CosmeticSlot); // Function KillstreakUINew.KSRadialSelectionWidgetBase.OpenSpecifiedRadialMenu
	void OnRadialMenuUseLastSelection(enum class EMercCosmeticSlot ButtonCosmeticSlot); // Function KillstreakUINew.KSRadialSelectionWidgetBase.OnRadialMenuUseLastSelection
	void OnRadialMenuReleased(enum class EMercCosmeticSlot ButtonCosmeticSlot, bool bIsContextualPingHold); // Function KillstreakUINew.KSRadialSelectionWidgetBase.OnRadialMenuReleased
	void OnRadialMenuPressed(enum class EMercCosmeticSlot ButtonCosmeticSlot, bool bIsContextualPingHold); // Function KillstreakUINew.KSRadialSelectionWidgetBase.OnRadialMenuPressed
	void OnRadialMenuForceClosed(); // Function KillstreakUINew.KSRadialSelectionWidgetBase.OnRadialMenuForceClosed
	void OnCycleMenusRight(); // Function KillstreakUINew.KSRadialSelectionWidgetBase.OnCycleMenusRight
	void OnCycleMenusLeft(); // Function KillstreakUINew.KSRadialSelectionWidgetBase.OnCycleMenusLeft
	void OnCycledMenus(bool bCycledRight); // Function KillstreakUINew.KSRadialSelectionWidgetBase.OnCycledMenus
	bool IsSelectorVisible(); // Function KillstreakUINew.KSRadialSelectionWidgetBase.IsSelectorVisible
	bool IsSelectorActive(); // Function KillstreakUINew.KSRadialSelectionWidgetBase.IsSelectorActive
	bool IsCycleBetweenMenusEnabled(); // Function KillstreakUINew.KSRadialSelectionWidgetBase.IsCycleBetweenMenusEnabled
	void InitializeTracking(); // Function KillstreakUINew.KSRadialSelectionWidgetBase.InitializeTracking
	void HideSelector(); // Function KillstreakUINew.KSRadialSelectionWidgetBase.HideSelector
	void HandleInputStateChanged(char NewInputState); // Function KillstreakUINew.KSRadialSelectionWidgetBase.HandleInputStateChanged
	float GetWheelSize(); // Function KillstreakUINew.KSRadialSelectionWidgetBase.GetWheelSize
	bool GetPingIconByType(enum class EPingType PingType, struct TSoftObjectPtr<struct UTexture2D> PingIcon); // Function KillstreakUINew.KSRadialSelectionWidgetBase.GetPingIconByType
	bool GetPingIconByMessage(enum class EPingMessage PingMessage, struct TSoftObjectPtr<struct UTexture2D> PingIcon); // Function KillstreakUINew.KSRadialSelectionWidgetBase.GetPingIconByMessage
	bool GetPingColorByType(enum class EPingType PingType, struct FLinearColor PingColor); // Function KillstreakUINew.KSRadialSelectionWidgetBase.GetPingColorByType
	int32_t GetOptionsCount(); // Function KillstreakUINew.KSRadialSelectionWidgetBase.GetOptionsCount
	int32_t GetLastSelectedIndexForCosmeticSlot(enum class EMercCosmeticSlot CosmeticSlot); // Function KillstreakUINew.KSRadialSelectionWidgetBase.GetLastSelectedIndexForCosmeticSlot
	int32_t GetLastHoveredIndex(); // Function KillstreakUINew.KSRadialSelectionWidgetBase.GetLastHoveredIndex
	enum class EMercCosmeticSlot GetInitialRadialMenu(); // Function KillstreakUINew.KSRadialSelectionWidgetBase.GetInitialRadialMenu
	struct TArray<struct FGameplayTag> GetGameplayTagsForCosmeticSlot(enum class EMercCosmeticSlot CosmeticSlot); // Function KillstreakUINew.KSRadialSelectionWidgetBase.GetGameplayTagsForCosmeticSlot
	float GetDeadZone(); // Function KillstreakUINew.KSRadialSelectionWidgetBase.GetDeadZone
	enum class EMercCosmeticSlot GetContiguousCosmeticSlotMenu(bool bRightSide); // Function KillstreakUINew.KSRadialSelectionWidgetBase.GetContiguousCosmeticSlotMenu
	enum class EMercCosmeticSlot GetActiveCosmeticSlotMenu(); // Function KillstreakUINew.KSRadialSelectionWidgetBase.GetActiveCosmeticSlotMenu
	bool FindRowByType(enum class EPingType PingType, struct FContextualPingTypesRow ContextualPingTypesRow); // Function KillstreakUINew.KSRadialSelectionWidgetBase.FindRowByType
	bool FindRowByMessage(enum class EPingMessage PingMessage, struct FContextualPingMessagesRow ContextualPingMessagesRow); // Function KillstreakUINew.KSRadialSelectionWidgetBase.FindRowByMessage
	void DummyFunction(); // Function KillstreakUINew.KSRadialSelectionWidgetBase.DummyFunction
	void ChangeToNewRadialMenu(); // Function KillstreakUINew.KSRadialSelectionWidgetBase.ChangeToNewRadialMenu
	void ButtonClicked(); // Function KillstreakUINew.KSRadialSelectionWidgetBase.ButtonClicked
	void BackPressed(); // Function KillstreakUINew.KSRadialSelectionWidgetBase.BackPressed
	bool ActivateRadialMenuItem(int32_t Index, struct AKSPlayerController* PlayerController); // Function KillstreakUINew.KSRadialSelectionWidgetBase.ActivateRadialMenuItem
};

// Class KillstreakUINew.KSRedeemCodeScreenBase
// Size: 0x4f8 (Inherited: 0x4e0)
struct UKSRedeemCodeScreenBase : public UKSWidget {
	char UnknownData_4E0[0x18]; // 0x4e0(0x18)

	void RedeemCode(struct FString Code); // Function KillstreakUINew.KSRedeemCodeScreenBase.RedeemCode
	void OnRedeemCodeSubmit(); // Function KillstreakUINew.KSRedeemCodeScreenBase.OnRedeemCodeSubmit
	void OnRedeemCodeResult(bool Success, struct FText Error); // Function KillstreakUINew.KSRedeemCodeScreenBase.OnRedeemCodeResult
	bool IsPendingServerReply(); // Function KillstreakUINew.KSRedeemCodeScreenBase.IsPendingServerReply
};

// Class KillstreakUINew.KSReticleWidgetBase
// Size: 0x518 (Inherited: 0x4f8)
struct UKSReticleWidgetBase : public UKSViewedActiveWeaponWidget {
	float ShrinkAnimationTime; // 0x4f8(0x04)
	float BlockedShotIconMaxScale; // 0x4fc(0x04)
	float BlockedShotIconMinScale; // 0x500(0x04)
	float BlockedShotMinScaleSqDist; // 0x504(0x04)
	bool bGrenadeCooking; // 0x508(0x01)
	bool bInADS; // 0x509(0x01)
	bool bCachedBlockIconVisible; // 0x50a(0x01)
	char UnknownData_50B[0x1]; // 0x50b(0x01)
	float CachedWeaponAccuracy; // 0x50c(0x04)
	float CachedReticleOffset; // 0x510(0x04)
	char UnknownData_514[0x4]; // 0x514(0x04)

	void UpdateReticleOffset(float OffsetFromCenterScreen); // Function KillstreakUINew.KSReticleWidgetBase.UpdateReticleOffset
	void UpdateBlockedShotIcon(bool IconVisible, struct FVector2D Translation, struct FVector2D IconScale); // Function KillstreakUINew.KSReticleWidgetBase.UpdateBlockedShotIcon
	void CalculateReticleOffset(float DeltaTime); // Function KillstreakUINew.KSReticleWidgetBase.CalculateReticleOffset
	void CalculateBlockedShotIcon(); // Function KillstreakUINew.KSReticleWidgetBase.CalculateBlockedShotIcon
};

// Class KillstreakUINew.KSRewardsTrackWidgetBase
// Size: 0x500 (Inherited: 0x4e0)
struct UKSRewardsTrackWidgetBase : public UKSWidget {
	int32_t MaxPageCount; // 0x4e0(0x04)
	int32_t CurrentPage; // 0x4e4(0x04)
	struct TArray<struct UKSWidget*> ItemButtons; // 0x4e8(0x10)
	struct UKSActivityInstance* ActivityInstance; // 0x4f8(0x08)

	void UpdateMaxPageCount(); // Function KillstreakUINew.KSRewardsTrackWidgetBase.UpdateMaxPageCount
	void SetCurrentPageFromTier(int32_t Tier); // Function KillstreakUINew.KSRewardsTrackWidgetBase.SetCurrentPageFromTier
};

// Class KillstreakUINew.KSScreenLogWidget
// Size: 0x4f0 (Inherited: 0x4e0)
struct UKSScreenLogWidget : public UKSWidget {
	struct UDataTable* ContextualPingTypesDT; // 0x4e0(0x08)
	struct UDataTable* ContextualPingMessagesDT; // 0x4e8(0x08)
};

// Class KillstreakUINew.KSScreenMarkerWidgetBase
// Size: 0x2d0 (Inherited: 0x2c0)
struct UKSScreenMarkerWidgetBase : public UKSMapIconWidgetBase {
	bool bHideWhenOffscreen; // 0x2c0(0x01)
	char UnknownData_2C1[0x3]; // 0x2c1(0x03)
	struct FVector2D OffscreenMargins; // 0x2c4(0x08)
	char UnknownData_2CC[0x4]; // 0x2cc(0x04)
};

// Class KillstreakUINew.KSSettingsContainer
// Size: 0x500 (Inherited: 0x4e0)
struct UKSSettingsContainer : public UKSWidget {
	struct TArray<struct UKSSettingsWidget*> SettingsWidgets; // 0x4e0(0x10)
	struct UKSSettingsPreview* AssociatePreviewWidget; // 0x4f0(0x08)
	struct UKSSettingsContainerConfigAsset* ContainerConfigAsset; // 0x4f8(0x08)

	void OnShowSettingsWidget(struct UKSSettingsWidget* SettingsWidget); // Function KillstreakUINew.KSSettingsContainer.OnShowSettingsWidget
	void OnHideSettingsWidget(struct UKSSettingsWidget* SettingsWidget); // Function KillstreakUINew.KSSettingsContainer.OnHideSettingsWidget
	void OnContainerConfigSet(); // Function KillstreakUINew.KSSettingsContainer.OnContainerConfigSet
	struct FText GetWidgetContainerTitle(); // Function KillstreakUINew.KSSettingsContainer.GetWidgetContainerTitle
	struct UKSSettingsPreview* GetWidgetContainerPreview(); // Function KillstreakUINew.KSSettingsContainer.GetWidgetContainerPreview
	struct FText GetWidgetContainerDescription(); // Function KillstreakUINew.KSSettingsContainer.GetWidgetContainerDescription
	struct TArray<struct UKSSettingsWidget*> GetSettingsWidgets(); // Function KillstreakUINew.KSSettingsContainer.GetSettingsWidgets
	void AddSettingsWidget(struct UKSSettingsWidget* SettingsWidget); // Function KillstreakUINew.KSSettingsContainer.AddSettingsWidget
	void AddPreviewWidget(struct UKSSettingsPreview* PreviewWidget); // Function KillstreakUINew.KSSettingsContainer.AddPreviewWidget
};

// Class KillstreakUINew.KSSettingsColorOptionsAsset
// Size: 0x40 (Inherited: 0x30)
struct UKSSettingsColorOptionsAsset : public UDataAsset {
	struct TArray<struct FColorOptions> ColorOptions; // 0x30(0x10)
};

// Class KillstreakUINew.KSSettingsContainerConfigAsset
// Size: 0x130 (Inherited: 0x30)
struct UKSSettingsContainerConfigAsset : public UDataAsset {
	struct FText SettingName; // 0x30(0x18)
	struct TMap<struct FString, struct FText> SettingNameByPlatform; // 0x48(0x50)
	struct FText SettingDescription; // 0x98(0x18)
	struct TMap<struct FString, struct FText> SettingDescriptionByPlatform; // 0xb0(0x50)
	bool bIsAvailableOffline; // 0x100(0x01)
	bool bRequires120HzDisplay; // 0x101(0x01)
	struct FKSAllowedPlatformTypes AllowedPlatformTypes; // 0x102(0x0a)
	struct FKSRequiredInputTypes RequiredInputTypes; // 0x10c(0x02)
	struct FKSSwitchDockedModeSetting SwitchDockedModeSetting; // 0x10e(0x02)
	bool bUsePreview; // 0x110(0x01)
	char UnknownData_111[0x7]; // 0x111(0x07)
	struct UKSSettingsPreview* PreviewWidget; // 0x118(0x08)
	struct TArray<struct FKSSettingsWidgetConfig> WidgetConfigs; // 0x120(0x10)
};

// Class KillstreakUINew.KSSettingsSectionConfigAsset
// Size: 0xa8 (Inherited: 0x30)
struct UKSSettingsSectionConfigAsset : public UDataAsset {
	struct FText Heading; // 0x30(0x18)
	struct TMap<struct FString, struct FText> HeadingByPlatform; // 0x48(0x50)
	struct TArray<struct FKSSettingsGroupConfig> SettingsGroups; // 0x98(0x10)
};

// Class KillstreakUINew.KSSettingsPageConfigAsset
// Size: 0xa8 (Inherited: 0x30)
struct UKSSettingsPageConfigAsset : public UDataAsset {
	struct FText PageName; // 0x30(0x18)
	struct TMap<struct FString, struct FText> HeadingByPlatform; // 0x48(0x50)
	struct TArray<struct UKSSettingsSectionConfigAsset*> SettingsSectionConfigs; // 0x98(0x10)
};

// Class KillstreakUINew.KSSettingsMenuConfigAsset
// Size: 0x40 (Inherited: 0x30)
struct UKSSettingsMenuConfigAsset : public UDataAsset {
	struct TArray<struct UKSSettingsPageConfigAsset*> SettingsPageConfigs; // 0x30(0x10)
};

// Class KillstreakUINew.KSSettingsDataFactory
// Size: 0x378 (Inherited: 0xd8)
struct UKSSettingsDataFactory : public UPUMG_SettingsDataFactory {
	struct FMulticastInlineDelegate OnSettingsReceivedFromPlayerAccount; // 0xd8(0x10)
	char UnknownData_E8[0x50]; // 0xe8(0x50)
	struct FMulticastInlineDelegate OnKeyBindSettingsApplied; // 0x138(0x10)
	struct FMulticastInlineDelegate OnKeyBindSettingsSaved; // 0x148(0x10)
	struct TArray<struct FKSSettingPropertyId> BoolSettingPropertyIds; // 0x158(0x10)
	char UnknownData_168[0x50]; // 0x168(0x50)
	struct TArray<struct FKSSettingPropertyId> IntSettingPropertyIds; // 0x1b8(0x10)
	char UnknownData_1C8[0x50]; // 0x1c8(0x50)
	struct TArray<struct FKSSettingPropertyId> FloatSettingPropertyIds; // 0x218(0x10)
	char UnknownData_228[0xb0]; // 0x228(0xb0)
	struct TSoftObjectPtr<struct UKSSettingsMenuConfigAsset> KSSettingsMenuConfigAssetSoftObjectPtr; // 0x2d8(0x28)
	struct UKSSettingsMenuConfigAsset* KSSettingsMenuConfigAsset; // 0x300(0x08)
	char UnknownData_308[0x10]; // 0x308(0x10)
	struct FMulticastInlineDelegate OnDisplayLanguageApplied; // 0x318(0x10)
	struct FMulticastInlineDelegate OnDisplayLanguageSaved; // 0x328(0x10)
	struct FMulticastInlineDelegate OnScreenResolutionApplied; // 0x338(0x10)
	struct FMulticastInlineDelegate OnScreenResolutionSaved; // 0x348(0x10)
	struct FMulticastInlineDelegate OnCrosshairColorSaved; // 0x358(0x10)
	char UnknownData_368[0x10]; // 0x368(0x10)

	bool SetSelectedRegion(int32_t SiteId); // Function KillstreakUINew.KSSettingsDataFactory.SetSelectedRegion
	bool SetCrosshairColor(int32_t CrosshairColorIndex); // Function KillstreakUINew.KSSettingsDataFactory.SetCrosshairColor
	void SetColorOptionValues(struct UKSSettingsColorOptionsAsset* ColorOptionAsset); // Function KillstreakUINew.KSSettingsDataFactory.SetColorOptionValues
	void SaveSettings(); // Function KillstreakUINew.KSSettingsDataFactory.SaveSettings
	void SaveSettingAsInt(struct FString Name); // Function KillstreakUINew.KSSettingsDataFactory.SaveSettingAsInt
	void SaveSettingAsFloat(struct FString Name); // Function KillstreakUINew.KSSettingsDataFactory.SaveSettingAsFloat
	void SaveSettingAsBool(struct FString Name); // Function KillstreakUINew.KSSettingsDataFactory.SaveSettingAsBool
	void SaveScreenResolution(); // Function KillstreakUINew.KSSettingsDataFactory.SaveScreenResolution
	void SaveLanguage(); // Function KillstreakUINew.KSSettingsDataFactory.SaveLanguage
	void SaveKeyBindings(); // Function KillstreakUINew.KSSettingsDataFactory.SaveKeyBindings
	bool SaveCrosshairColor(int32_t CrosshairColorIndex); // Function KillstreakUINew.KSSettingsDataFactory.SaveCrosshairColor
	void RevertScreenResolution(); // Function KillstreakUINew.KSSettingsDataFactory.RevertScreenResolution
	void RevertPlayerPreferences(); // Function KillstreakUINew.KSSettingsDataFactory.RevertPlayerPreferences
	void RevertLanguageToDefault(); // Function KillstreakUINew.KSSettingsDataFactory.RevertLanguageToDefault
	void RevertKeyBindings(); // Function KillstreakUINew.KSSettingsDataFactory.RevertKeyBindings
	bool IsUserLoggedIn(); // Function KillstreakUINew.KSSettingsDataFactory.IsUserLoggedIn
	bool GetSettingAsInt(struct FString Name, int32_t OutInt); // Function KillstreakUINew.KSSettingsDataFactory.GetSettingAsInt
	bool GetSettingAsFloat(struct FString Name, float OutFloat); // Function KillstreakUINew.KSSettingsDataFactory.GetSettingAsFloat
	bool GetSettingAsBool(struct FString Name, bool OutBool); // Function KillstreakUINew.KSSettingsDataFactory.GetSettingAsBool
	int32_t GetSelectedRegion(); // Function KillstreakUINew.KSSettingsDataFactory.GetSelectedRegion
	struct FIntPoint GetScreenResolution(); // Function KillstreakUINew.KSSettingsDataFactory.GetScreenResolution
	struct UKSPlayerInput* GetKSPlayerInput(); // Function KillstreakUINew.KSSettingsDataFactory.GetKSPlayerInput
	void GetDefaultKSInputActionKeys(struct FName Name, enum class EKSInputType InputType, struct TArray<struct FKSInputActionKey> OutKeys); // Function KillstreakUINew.KSSettingsDataFactory.GetDefaultKSInputActionKeys
	void GetDefaultInputAxisKeys(struct FName Name, enum class EKSInputType InputType, float Scale, struct TArray<struct FKey> OutKeys); // Function KillstreakUINew.KSSettingsDataFactory.GetDefaultInputAxisKeys
	void GetDefaultInputActionKeys(struct FName Name, enum class EKSInputType InputType, struct TArray<struct FKey> OutKeys); // Function KillstreakUINew.KSSettingsDataFactory.GetDefaultInputActionKeys
	void GetCustomKSInputActionKeys(struct FName Name, enum class EKSInputType InputType, struct TArray<struct FKSInputActionKey> OutKeys); // Function KillstreakUINew.KSSettingsDataFactory.GetCustomKSInputActionKeys
	void GetCustomInputAxisKeys(struct FName Name, enum class EKSInputType InputType, float Scale, struct TArray<struct FKey> OutKeys); // Function KillstreakUINew.KSSettingsDataFactory.GetCustomInputAxisKeys
	void GetCustomInputActionKeys(struct FName Name, enum class EKSInputType InputType, struct TArray<struct FKey> OutKeys); // Function KillstreakUINew.KSSettingsDataFactory.GetCustomInputActionKeys
	struct FString GetCurrentLanguage(); // Function KillstreakUINew.KSSettingsDataFactory.GetCurrentLanguage
	struct FLinearColor GetCrosshairColorValue(int32_t CrosshairColorIndex); // Function KillstreakUINew.KSSettingsDataFactory.GetCrosshairColorValue
	int32_t GetCrosshairColor(); // Function KillstreakUINew.KSSettingsDataFactory.GetCrosshairColor
	struct TArray<struct FString> GetAvailableLanguages(); // Function KillstreakUINew.KSSettingsDataFactory.GetAvailableLanguages
	void BindSettingCallbacks(struct FString Name, struct FSettingDelegateStruct SettingDelegateStruct); // Function KillstreakUINew.KSSettingsDataFactory.BindSettingCallbacks
	void ApplySettingAsInt(struct FString Name, int32_t Value); // Function KillstreakUINew.KSSettingsDataFactory.ApplySettingAsInt
	void ApplySettingAsFloat(struct FString Name, float Value); // Function KillstreakUINew.KSSettingsDataFactory.ApplySettingAsFloat
	void ApplySettingAsBool(struct FString Name, bool Value); // Function KillstreakUINew.KSSettingsDataFactory.ApplySettingAsBool
	void ApplyScreenResolution(struct FIntPoint ScreenResolution); // Function KillstreakUINew.KSSettingsDataFactory.ApplyScreenResolution
	void ApplyLanguage(struct FString LanguageCulture); // Function KillstreakUINew.KSSettingsDataFactory.ApplyLanguage
	void AddColorOptionValues(struct FLinearColor ColorValue); // Function KillstreakUINew.KSSettingsDataFactory.AddColorOptionValues
};

// Class KillstreakUINew.KSSettingsGroup
// Size: 0x510 (Inherited: 0x4e0)
struct UKSSettingsGroup : public UKSWidget {
	struct TArray<struct UKSSettingsContainer*> SettingsContainers; // 0x4e0(0x10)
	struct UKSSettingsContainer* SettingsContainerClass; // 0x4f0(0x08)
	struct FKSSettingsGroupConfig GroupConfig; // 0x4f8(0x18)

	void OnShowContainer(struct UKSSettingsContainer* SettingsContainer); // Function KillstreakUINew.KSSettingsGroup.OnShowContainer
	void OnHideContainer(struct UKSSettingsContainer* SettingsContainer); // Function KillstreakUINew.KSSettingsGroup.OnHideContainer
	void OnGroupConfigSet(); // Function KillstreakUINew.KSSettingsGroup.OnGroupConfigSet
	struct TArray<struct UKSSettingsContainer*> GetSettingsContainers(); // Function KillstreakUINew.KSSettingsGroup.GetSettingsContainers
	void AddSubSettingsContainerWidget(struct UKSSettingsContainer* SettingsContainer); // Function KillstreakUINew.KSSettingsGroup.AddSubSettingsContainerWidget
	void AddMainSettingsContainerWidget(struct UKSSettingsContainer* SettingsContainer); // Function KillstreakUINew.KSSettingsGroup.AddMainSettingsContainerWidget
};

// Class KillstreakUINew.KSSettingsInfoBase
// Size: 0x108 (Inherited: 0x28)
struct UKSSettingsInfoBase : public UObject {
	struct FMulticastInlineDelegate OnSettingValueChanged; // 0x28(0x10)
	struct FMulticastInlineDelegate OnSettingPreviewChanged; // 0x38(0x10)
	bool bIsAutoApplied; // 0x48(0x01)
	bool bIsAutoSaved; // 0x49(0x01)
	char UnknownData_4A[0x86]; // 0x4a(0x86)
	struct TArray<struct FText> TextOptions; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnTextOptionsChanged; // 0xe0(0x10)
	float MinValue; // 0xf0(0x04)
	float MaxValue; // 0xf4(0x04)
	float StepValue; // 0xf8(0x04)
	bool bRoundValue; // 0xfc(0x01)
	char UnknownData_FD[0x3]; // 0xfd(0x03)
	float RoundToNearest; // 0x100(0x04)
	bool bIsPercent; // 0x104(0x01)
	char UnknownData_105[0x3]; // 0x105(0x03)

	void UpdateTextOptions(struct TArray<struct FText> NewOptions); // Function KillstreakUINew.KSSettingsInfoBase.UpdateTextOptions
	bool SetPreviewValueInt(int32_t inInt); // Function KillstreakUINew.KSSettingsInfoBase.SetPreviewValueInt
	bool SetPreviewValueFloat(float InFloat); // Function KillstreakUINew.KSSettingsInfoBase.SetPreviewValueFloat
	bool SetPreviewValueBool(bool InBool); // Function KillstreakUINew.KSSettingsInfoBase.SetPreviewValueBool
	bool SetDesiredValueKeyBind(struct FKSKeyBind InKeyBind); // Function KillstreakUINew.KSSettingsInfoBase.SetDesiredValueKeyBind
	bool SetDesiredValueInt(int32_t inInt); // Function KillstreakUINew.KSSettingsInfoBase.SetDesiredValueInt
	bool SetDesiredValueFloat(float InFloat); // Function KillstreakUINew.KSSettingsInfoBase.SetDesiredValueFloat
	bool SetDesiredValueBool(bool InBool); // Function KillstreakUINew.KSSettingsInfoBase.SetDesiredValueBool
	bool SaveKeyBindValue(struct FKSKeyBind InKeyBind); // Function KillstreakUINew.KSSettingsInfoBase.SaveKeyBindValue
	bool SaveIntValue(int32_t inInt); // Function KillstreakUINew.KSSettingsInfoBase.SaveIntValue
	bool SaveFloatValue(float InFloat); // Function KillstreakUINew.KSSettingsInfoBase.SaveFloatValue
	bool SaveBoolValue(bool InBool); // Function KillstreakUINew.KSSettingsInfoBase.SaveBoolValue
	void Save(); // Function KillstreakUINew.KSSettingsInfoBase.Save
	float RoundToNearestValueFloat(float ValueToRound); // Function KillstreakUINew.KSSettingsInfoBase.RoundToNearestValueFloat
	void RevertSettingToDefault(); // Function KillstreakUINew.KSSettingsInfoBase.RevertSettingToDefault
	void Revert(); // Function KillstreakUINew.KSSettingsInfoBase.Revert
	void ResetPreview(); // Function KillstreakUINew.KSSettingsInfoBase.ResetPreview
	void OnValueKeyBindSaved(struct FKSKeyBind SavedKeyBind); // Function KillstreakUINew.KSSettingsInfoBase.OnValueKeyBindSaved
	void OnValueKeyBindApplied(struct FKSKeyBind AppliedKeyBind); // Function KillstreakUINew.KSSettingsInfoBase.OnValueKeyBindApplied
	void OnValueIntSaved(int32_t SavedInt); // Function KillstreakUINew.KSSettingsInfoBase.OnValueIntSaved
	void OnValueIntApplied(int32_t AppliedInt); // Function KillstreakUINew.KSSettingsInfoBase.OnValueIntApplied
	void OnValueFloatSaved(float SavedFloat); // Function KillstreakUINew.KSSettingsInfoBase.OnValueFloatSaved
	void OnValueFloatApplied(float AppliedFloat); // Function KillstreakUINew.KSSettingsInfoBase.OnValueFloatApplied
	void OnValueBoolSaved(bool SavedBool); // Function KillstreakUINew.KSSettingsInfoBase.OnValueBoolSaved
	void OnValueBoolApplied(bool AppliedBool); // Function KillstreakUINew.KSSettingsInfoBase.OnValueBoolApplied
	bool IsValidValueKeyBind(struct FKSKeyBind InKey); // Function KillstreakUINew.KSSettingsInfoBase.IsValidValueKeyBind
	bool IsValidValueInt(int32_t inInt); // Function KillstreakUINew.KSSettingsInfoBase.IsValidValueInt
	bool IsValidValueFloat(float InFloat); // Function KillstreakUINew.KSSettingsInfoBase.IsValidValueFloat
	bool IsValidValueBool(bool InBool); // Function KillstreakUINew.KSSettingsInfoBase.IsValidValueBool
	bool IsDirty(); // Function KillstreakUINew.KSSettingsInfoBase.IsDirty
	void InitializeValue(); // Function KillstreakUINew.KSSettingsInfoBase.InitializeValue
	struct FKSKeyBind GetValueKeyBind(); // Function KillstreakUINew.KSSettingsInfoBase.GetValueKeyBind
	int32_t GetValueInt(); // Function KillstreakUINew.KSSettingsInfoBase.GetValueInt
	float GetValueFloat(); // Function KillstreakUINew.KSSettingsInfoBase.GetValueFloat
	bool GetValueBool(); // Function KillstreakUINew.KSSettingsInfoBase.GetValueBool
	struct TArray<struct FText> GetTextOptions(); // Function KillstreakUINew.KSSettingsInfoBase.GetTextOptions
	struct FText GetTextOption(int32_t Index); // Function KillstreakUINew.KSSettingsInfoBase.GetTextOption
	float GetStep(); // Function KillstreakUINew.KSSettingsInfoBase.GetStep
	enum class EKSSettingType GetSettingType(); // Function KillstreakUINew.KSSettingsInfoBase.GetSettingType
	float GetRoundToNearest(); // Function KillstreakUINew.KSSettingsInfoBase.GetRoundToNearest
	bool GetRound(); // Function KillstreakUINew.KSSettingsInfoBase.GetRound
	int32_t GetPreviewValueInt(); // Function KillstreakUINew.KSSettingsInfoBase.GetPreviewValueInt
	float GetPreviewValueFloat(); // Function KillstreakUINew.KSSettingsInfoBase.GetPreviewValueFloat
	bool GetPreviewValueBool(); // Function KillstreakUINew.KSSettingsInfoBase.GetPreviewValueBool
	int32_t GetNumTextOptions(); // Function KillstreakUINew.KSSettingsInfoBase.GetNumTextOptions
	float GetMin(); // Function KillstreakUINew.KSSettingsInfoBase.GetMin
	float GetMax(); // Function KillstreakUINew.KSSettingsInfoBase.GetMax
	struct AKSHUDCommon* GetKSHUD(); // Function KillstreakUINew.KSSettingsInfoBase.GetKSHUD
	bool GetIsPercent(); // Function KillstreakUINew.KSSettingsInfoBase.GetIsPercent
	struct FKSKeyBind GetDirtyValueKeyBind(); // Function KillstreakUINew.KSSettingsInfoBase.GetDirtyValueKeyBind
	int32_t GetDirtyValueInt(); // Function KillstreakUINew.KSSettingsInfoBase.GetDirtyValueInt
	float GetDirtyValueFloat(); // Function KillstreakUINew.KSSettingsInfoBase.GetDirtyValueFloat
	bool GetDirtyValueBool(); // Function KillstreakUINew.KSSettingsInfoBase.GetDirtyValueBool
	struct FKSKeyBind FixupInvalidKeyBind(struct FKSKeyBind InKey); // Function KillstreakUINew.KSSettingsInfoBase.FixupInvalidKeyBind
	int32_t FixupInvalidInt(int32_t inInt); // Function KillstreakUINew.KSSettingsInfoBase.FixupInvalidInt
	float FixupInvalidFloat(float InFloat); // Function KillstreakUINew.KSSettingsInfoBase.FixupInvalidFloat
	bool FixupInvalidBool(bool InBool); // Function KillstreakUINew.KSSettingsInfoBase.FixupInvalidBool
	bool CanRevert(); // Function KillstreakUINew.KSSettingsInfoBase.CanRevert
	bool ApplyPreviewIntValue(int32_t inInt); // Function KillstreakUINew.KSSettingsInfoBase.ApplyPreviewIntValue
	bool ApplyPreviewFloatValue(float InFloat); // Function KillstreakUINew.KSSettingsInfoBase.ApplyPreviewFloatValue
	bool ApplyPreviewBoolValue(bool InBool); // Function KillstreakUINew.KSSettingsInfoBase.ApplyPreviewBoolValue
	void ApplyPreview(); // Function KillstreakUINew.KSSettingsInfoBase.ApplyPreview
	bool ApplyKeyBindValue(struct FKSKeyBind InKeyBind); // Function KillstreakUINew.KSSettingsInfoBase.ApplyKeyBindValue
	bool ApplyIntValue(int32_t inInt); // Function KillstreakUINew.KSSettingsInfoBase.ApplyIntValue
	bool ApplyFloatValue(float InFloat); // Function KillstreakUINew.KSSettingsInfoBase.ApplyFloatValue
	bool ApplyBoolValue(bool InBool); // Function KillstreakUINew.KSSettingsInfoBase.ApplyBoolValue
	void Apply(); // Function KillstreakUINew.KSSettingsInfoBase.Apply
};

// Class KillstreakUINew.KSSettingsInfo_Binding
// Size: 0x128 (Inherited: 0x108)
struct UKSSettingsInfo_Binding : public UKSSettingsInfoBase {
	struct FKSKeyBindInfo PrimaryKeyBindInfo; // 0x108(0x10)
	struct FKSKeyBindInfo GamepadKeyBindInfo; // 0x118(0x10)

	void OnSettingsReceivedFromPlayerAccount(); // Function KillstreakUINew.KSSettingsInfo_Binding.OnSettingsReceivedFromPlayerAccount
	void OnKeyBindingsSaved(struct FName Name); // Function KillstreakUINew.KSSettingsInfo_Binding.OnKeyBindingsSaved
	void OnKeyBindingsApplied(struct FName Name); // Function KillstreakUINew.KSSettingsInfo_Binding.OnKeyBindingsApplied
};

// Class KillstreakUINew.KSSettingsInfo_CrosshairColor
// Size: 0x110 (Inherited: 0x108)
struct UKSSettingsInfo_CrosshairColor : public UKSSettingsInfoBase {
	struct UKSSettingsColorOptionsAsset* ColorOptions; // 0x108(0x08)

	void OnCrosshairColorSaved(int32_t SavedIndex); // Function KillstreakUINew.KSSettingsInfo_CrosshairColor.OnCrosshairColorSaved
};

// Class KillstreakUINew.KSSettingsInfo_Generic
// Size: 0x120 (Inherited: 0x108)
struct UKSSettingsInfo_Generic : public UKSSettingsInfoBase {
	enum class EKSSettingType KSSettingType; // 0x108(0x01)
	char UnknownData_109[0x7]; // 0x109(0x07)
	struct FString Name; // 0x110(0x10)

	void OnSettingSaved(); // Function KillstreakUINew.KSSettingsInfo_Generic.OnSettingSaved
	void OnSettingApplied(); // Function KillstreakUINew.KSSettingsInfo_Generic.OnSettingApplied
	struct UKSSettingsDataFactory* GetKSSettingsDataFactory(); // Function KillstreakUINew.KSSettingsInfo_Generic.GetKSSettingsDataFactory
};

// Class KillstreakUINew.KSSettingsInfo_Resolution
// Size: 0x118 (Inherited: 0x108)
struct UKSSettingsInfo_Resolution : public UKSSettingsInfoBase {
	char UnknownData_108[0x10]; // 0x108(0x10)

	void OnScreenResolutionSaved(struct FIntPoint SavedScreenResolution); // Function KillstreakUINew.KSSettingsInfo_Resolution.OnScreenResolutionSaved
	void OnScreenResolutionApplied(struct FIntPoint AppliedScreenResolution); // Function KillstreakUINew.KSSettingsInfo_Resolution.OnScreenResolutionApplied
};

// Class KillstreakUINew.KSSettingsMenu
// Size: 0x508 (Inherited: 0x4e0)
struct UKSSettingsMenu : public UKSWidget {
	char UnknownData_4E0[0x8]; // 0x4e0(0x08)
	struct TArray<struct UKSSettingsPage*> SettingsPages; // 0x4e8(0x10)
	struct UKSSettingsPage* SettingsPageClass; // 0x4f8(0x08)
	struct UKSSettingsMenuConfigAsset* MenuConfigAsset; // 0x500(0x08)

	void RebuildNavigation(); // Function KillstreakUINew.KSSettingsMenu.RebuildNavigation
	void OnShowPage(struct UKSSettingsPage* SettingsPage); // Function KillstreakUINew.KSSettingsMenu.OnShowPage
	void OnSaveSettings(); // Function KillstreakUINew.KSSettingsMenu.OnSaveSettings
	void OnRevertSettings(); // Function KillstreakUINew.KSSettingsMenu.OnRevertSettings
	void OnMenuConfigSet(); // Function KillstreakUINew.KSSettingsMenu.OnMenuConfigSet
	void OnHidePage(struct UKSSettingsPage* SettingsPage); // Function KillstreakUINew.KSSettingsMenu.OnHidePage
	void OnConfirmExit(bool ShouldSaveSettings); // Function KillstreakUINew.KSSettingsMenu.OnConfirmExit
	struct TArray<struct UKSSettingsPage*> GetSettingsPages(); // Function KillstreakUINew.KSSettingsMenu.GetSettingsPages
	void CheckSavePendingChanges(); // Function KillstreakUINew.KSSettingsMenu.CheckSavePendingChanges
	void AddSettingsPageWidget(struct UKSSettingsPage* SettingsPage); // Function KillstreakUINew.KSSettingsMenu.AddSettingsPageWidget
};

// Class KillstreakUINew.KSSettingsPage
// Size: 0x500 (Inherited: 0x4e0)
struct UKSSettingsPage : public UKSWidget {
	struct TArray<struct UKSSettingsSection*> SettingsSections; // 0x4e0(0x10)
	struct UKSSettingsSection* SettingsSectionClass; // 0x4f0(0x08)
	struct UKSSettingsPageConfigAsset* PageConfigAsset; // 0x4f8(0x08)

	void OnShowSection(struct UKSSettingsSection* SettingsSection); // Function KillstreakUINew.KSSettingsPage.OnShowSection
	void OnPageConfigSet(); // Function KillstreakUINew.KSSettingsPage.OnPageConfigSet
	void OnHideSection(struct UKSSettingsSection* SettingsSection); // Function KillstreakUINew.KSSettingsPage.OnHideSection
	struct TArray<struct UKSSettingsSection*> GetSettingsSections(); // Function KillstreakUINew.KSSettingsPage.GetSettingsSections
	struct UScrollBox* GetScrollBox(); // Function KillstreakUINew.KSSettingsPage.GetScrollBox
	void AddSettingsSectionWidget(struct UKSSettingsSection* SettingsSection); // Function KillstreakUINew.KSSettingsPage.AddSettingsSectionWidget
};

// Class KillstreakUINew.KSSettingsPreview
// Size: 0x4f8 (Inherited: 0x4e0)
struct UKSSettingsPreview : public UKSWidget {
	struct FMulticastInlineDelegate OnPreviewValueChanged; // 0x4e0(0x10)
	struct UKSSettingsInfoBase* SettingsInfo; // 0x4f0(0x08)

	void HandleOnValueChanged(bool ChangedExternally); // Function KillstreakUINew.KSSettingsPreview.HandleOnValueChanged
	void HandleOnPreviewValueChanged(); // Function KillstreakUINew.KSSettingsPreview.HandleOnPreviewValueChanged
};

// Class KillstreakUINew.KSSettingsSection
// Size: 0x500 (Inherited: 0x4e0)
struct UKSSettingsSection : public UKSWidget {
	struct TArray<struct UKSSettingsGroup*> SettingsGroups; // 0x4e0(0x10)
	struct UKSSettingsGroup* SettingsGroupClass; // 0x4f0(0x08)
	struct UKSSettingsSectionConfigAsset* SectionConfigAsset; // 0x4f8(0x08)

	void OnShowGroup(struct UKSSettingsGroup* SettingsGroup); // Function KillstreakUINew.KSSettingsSection.OnShowGroup
	void OnSectionConfigSet(); // Function KillstreakUINew.KSSettingsSection.OnSectionConfigSet
	void OnHideGroup(struct UKSSettingsGroup* SettingsGroup); // Function KillstreakUINew.KSSettingsSection.OnHideGroup
	struct TArray<struct UKSSettingsGroup*> GetSettingsGroups(); // Function KillstreakUINew.KSSettingsSection.GetSettingsGroups
	void AddSettingsGroupWidget(struct UKSSettingsGroup* SettingsGroup); // Function KillstreakUINew.KSSettingsSection.AddSettingsGroupWidget
};

// Class KillstreakUINew.KSSettingsWidget
// Size: 0x538 (Inherited: 0x4e0)
struct UKSSettingsWidget : public UKSWidget {
	struct FKSSettingsWidgetConfig WidgetConfig; // 0x4e0(0x10)
	struct FText WidgetContainerTitle; // 0x4f0(0x18)
	struct FText WidgetContainerDescription; // 0x508(0x18)
	bool bHasPreview; // 0x520(0x01)
	char UnknownData_521[0x7]; // 0x521(0x07)
	struct UKSSettingsPreview* WidgetContainerPreviewWidget; // 0x528(0x08)
	struct UKSSettingsInfoBase* SettingsInfo; // 0x530(0x08)

	void SaveSetting(); // Function KillstreakUINew.KSSettingsWidget.SaveSetting
	void RevertSetting(); // Function KillstreakUINew.KSSettingsWidget.RevertSetting
	void OnWidgetSettingsInfoSet(); // Function KillstreakUINew.KSSettingsWidget.OnWidgetSettingsInfoSet
	void OnWidgetContainerTitleSet(); // Function KillstreakUINew.KSSettingsWidget.OnWidgetContainerTitleSet
	void OnWidgetContainerPreviewSet(); // Function KillstreakUINew.KSSettingsWidget.OnWidgetContainerPreviewSet
	void OnWidgetContainerDescriptionSet(); // Function KillstreakUINew.KSSettingsWidget.OnWidgetContainerDescriptionSet
	void OnWidgetConfigSet(); // Function KillstreakUINew.KSSettingsWidget.OnWidgetConfigSet
	void OnSettingsInfoValueChanged(bool bChangedExternally); // Function KillstreakUINew.KSSettingsWidget.OnSettingsInfoValueChanged
	void OnInputAttached(bool bGamepadAttached, bool bMouseAttached); // Function KillstreakUINew.KSSettingsWidget.OnInputAttached
	bool IsSaved(); // Function KillstreakUINew.KSSettingsWidget.IsSaved
	bool IsApplied(); // Function KillstreakUINew.KSSettingsWidget.IsApplied
	bool HasPreview(); // Function KillstreakUINew.KSSettingsWidget.HasPreview
	bool CanGamepadNavigate(); // Function KillstreakUINew.KSSettingsWidget.CanGamepadNavigate
	void ApplySetting(); // Function KillstreakUINew.KSSettingsWidget.ApplySetting
};

// Class KillstreakUINew.KSShopItemButtonBase
// Size: 0x508 (Inherited: 0x4e0)
struct UKSShopItemButtonBase : public UKSWidget {
	struct FMulticastInlineDelegate OnShopSelection; // 0x4e0(0x10)
	struct FMulticastInlineDelegate OnShopViewItemDetails; // 0x4f0(0x10)
	enum class EShopItemType ActiveShopSlot; // 0x500(0x01)
	char UnknownData_501[0x7]; // 0x501(0x07)

	struct UButton* GetHitTarget(); // Function KillstreakUINew.KSShopItemButtonBase.GetHitTarget
	void DisplayShopItem(struct FShopItem ShopItem, bool IsAffordable, bool IsToggleSlot); // Function KillstreakUINew.KSShopItemButtonBase.DisplayShopItem
	void ButtonUnhovered(); // Function KillstreakUINew.KSShopItemButtonBase.ButtonUnhovered
	void ButtonReleased(); // Function KillstreakUINew.KSShopItemButtonBase.ButtonReleased
	void ButtonPressed(); // Function KillstreakUINew.KSShopItemButtonBase.ButtonPressed
	void ButtonHovered(); // Function KillstreakUINew.KSShopItemButtonBase.ButtonHovered
	void ButtonClicked(); // Function KillstreakUINew.KSShopItemButtonBase.ButtonClicked
};

// Class KillstreakUINew.KSSocialPanelBase
// Size: 0x530 (Inherited: 0x4e0)
struct UKSSocialPanelBase : public UKSWidget {
	struct FMulticastInlineDelegate OnDataReady; // 0x4e0(0x10)
	struct FMulticastInlineDelegate OnPlayerCardClicked; // 0x4f0(0x10)
	struct UTreeView* TreeView; // 0x500(0x08)
	struct UKSSocialOverlay* DataSource; // 0x508(0x08)
	char UnknownData_510[0x10]; // 0x510(0x10)
	struct TArray<struct UKSDataSocialCategory*> CategoriesList; // 0x520(0x10)

	void UpdateListData(); // Function KillstreakUINew.KSSocialPanelBase.UpdateListData
	void SetupTreeView(struct UTreeView* List); // Function KillstreakUINew.KSSocialPanelBase.SetupTreeView
	void SetDataSource(struct UKSSocialOverlay* Source); // Function KillstreakUINew.KSSocialPanelBase.SetDataSource
	void OnDataChange(struct TArray<enum class EKSSocialOverlaySection> Sections); // Function KillstreakUINew.KSSocialPanelBase.OnDataChange
	struct UTreeView* GetTreeView(); // Function KillstreakUINew.KSSocialPanelBase.GetTreeView
	void GetSubListFromData(struct UObject* Source, struct TArray<struct UObject*> Out_List); // Function KillstreakUINew.KSSocialPanelBase.GetSubListFromData
	struct UKSSocialOverlay* GetDataSource(); // Function KillstreakUINew.KSSocialPanelBase.GetDataSource
};

// Class KillstreakUINew.KSSocialFriendsPanel
// Size: 0x548 (Inherited: 0x530)
struct UKSSocialFriendsPanel : public UKSSocialPanelBase {
	struct TArray<struct UKSDataSocialCategory*> CategoryData; // 0x530(0x10)
	struct UKSSocialOverlay* Parent; // 0x540(0x08)
};

// Class KillstreakUINew.KSSocialOverlay
// Size: 0x580 (Inherited: 0x4e0)
struct UKSSocialOverlay : public UKSWidget {
	struct FMulticastInlineDelegate OnDataChanged; // 0x4e0(0x10)
	struct TArray<struct UKSDataSocialCategory*> CategoriesList; // 0x4f0(0x10)
	char UnknownData_500[0x8]; // 0x500(0x08)
	struct TMap<struct FWeakObjectPtr<struct UKSPlayerInfo>, enum class EKSSocialOverlaySection> PlayerCategoryMap; // 0x508(0x50)
	struct TArray<struct FWeakObjectPtr<struct UKSPlayerInfo>> PlayersToUpdate; // 0x558(0x10)
	char UnknownData_568[0x8]; // 0x568(0x08)
	struct TArray<struct UKSDataSocialPlayer*> UnusedEntries; // 0x570(0x10)

	void RepopulateAll(); // Function KillstreakUINew.KSSocialOverlay.RepopulateAll
	void PlayTransition(struct UWidgetAnimation* Animation, bool TransitionOut); // Function KillstreakUINew.KSSocialOverlay.PlayTransition
	void OnRecentlyPlayedChange(struct UKSFriendDataFactory* Source); // Function KillstreakUINew.KSSocialOverlay.OnRecentlyPlayedChange
	void HandleUpdatePlayers(); // Function KillstreakUINew.KSSocialOverlay.HandleUpdatePlayers
	struct TArray<struct UKSDataSocialCategory*> GetData(); // Function KillstreakUINew.KSSocialOverlay.GetData
	struct UKSDataSocialCategory* GetCategory(enum class EKSSocialOverlaySection Category); // Function KillstreakUINew.KSSocialOverlay.GetCategory
	struct TArray<struct UKSDataSocialCategory*> GetCategories(struct TArray<enum class EKSSocialOverlaySection> Categories); // Function KillstreakUINew.KSSocialOverlay.GetCategories
};

// Class KillstreakUINew.KSSocialSearchPanel
// Size: 0x578 (Inherited: 0x530)
struct UKSSocialSearchPanel : public UKSSocialPanelBase {
	struct FMulticastInlineDelegate OnOpen; // 0x530(0x10)
	struct FMulticastInlineDelegate OnClose; // 0x540(0x10)
	char UnknownData_550[0x28]; // 0x550(0x28)

	void OnSearchTimeout(); // Function KillstreakUINew.KSSocialSearchPanel.OnSearchTimeout
	void OnSearchStart(struct FText SearchTerm); // Function KillstreakUINew.KSSocialSearchPanel.OnSearchStart
	void OnSearchComplete(struct FText SearchTerm, struct FText Error, struct TArray<struct UKSDataSocialPlayer*> Results); // Function KillstreakUINew.KSSocialSearchPanel.OnSearchComplete
	bool IsSearching(); // Function KillstreakUINew.KSSocialSearchPanel.IsSearching
	struct FText GetActiveSearchTerm(); // Function KillstreakUINew.KSSocialSearchPanel.GetActiveSearchTerm
	void DoSearch(struct FText SearchTerm); // Function KillstreakUINew.KSSocialSearchPanel.DoSearch
};

// Class KillstreakUINew.KSSocialWidgetBase
// Size: 0x4e8 (Inherited: 0x4e0)
struct UKSSocialWidgetBase : public UKSWidget {
	struct UKSPartyDataFactory* CachedPartyDataFactory; // 0x4e0(0x08)

	void SortFriendData(struct TArray<struct UPUMG_PlayerInfo*> Friends); // Function KillstreakUINew.KSSocialWidgetBase.SortFriendData
	void SearchPlayerName(struct FString PlayerName); // Function KillstreakUINew.KSSocialWidgetBase.SearchPlayerName
	void OnFriendRequestsUpdated(); // Function KillstreakUINew.KSSocialWidgetBase.OnFriendRequestsUpdated
	void HandleSearchByNameResultsUpdated(); // Function KillstreakUINew.KSSocialWidgetBase.HandleSearchByNameResultsUpdated
	void HandlePartyDataUpdated(); // Function KillstreakUINew.KSSocialWidgetBase.HandlePartyDataUpdated
	void HandleFriendInviteReceived(struct FPUMG_FriendData PlayerData); // Function KillstreakUINew.KSSocialWidgetBase.HandleFriendInviteReceived
	void HandleFriendDataUpdated(); // Function KillstreakUINew.KSSocialWidgetBase.HandleFriendDataUpdated
	struct TArray<struct UPUMG_PlayerInfo*> GetSortedFriends(); // Function KillstreakUINew.KSSocialWidgetBase.GetSortedFriends
	struct TArray<struct UPUMG_PlayerInfo*> GetSearchResults(); // Function KillstreakUINew.KSSocialWidgetBase.GetSearchResults
	struct UKSPlayerWhoDataFactory* GetPlayerWhoDataFactory(); // Function KillstreakUINew.KSSocialWidgetBase.GetPlayerWhoDataFactory
	struct UKSPartyDataFactory* GetPartyDataFactory(); // Function KillstreakUINew.KSSocialWidgetBase.GetPartyDataFactory
	struct UKSFriendDataFactory* GetFriendDataFactory(); // Function KillstreakUINew.KSSocialWidgetBase.GetFriendDataFactory
	void ClearSearchResults(); // Function KillstreakUINew.KSSocialWidgetBase.ClearSearchResults
};

// Class KillstreakUINew.KSSortableGridPanel
// Size: 0x170 (Inherited: 0x158)
struct UKSSortableGridPanel : public UGridPanel {
	char Orientation; // 0x158(0x01)
	char UnknownData_159[0x3]; // 0x159(0x03)
	struct FDelegate OnSortCompareChildrenEvent; // 0x15c(0x10)
	char UnknownData_16C[0x4]; // 0x16c(0x04)

	bool SortChildrenComparator__DelegateSignature(struct UWidget* LHS, struct UWidget* RHS); // DelegateFunction KillstreakUINew.KSSortableGridPanel.SortChildrenComparator__DelegateSignature
	void SortChildren(); // Function KillstreakUINew.KSSortableGridPanel.SortChildren
	struct UGridSlot* AddChildAutoLayout(struct UWidget* Content); // Function KillstreakUINew.KSSortableGridPanel.AddChildAutoLayout
};

// Class KillstreakUINew.KSSortableVerticalBox
// Size: 0x148 (Inherited: 0x138)
struct UKSSortableVerticalBox : public UVerticalBox {
	struct FDelegate OnSortCompareChildrenEvent; // 0x138(0x10)

	bool SortChildrenComparator__DelegateSignature(struct UWidget* LHS, struct UWidget* RHS); // DelegateFunction KillstreakUINew.KSSortableVerticalBox.SortChildrenComparator__DelegateSignature
	void SortChildren(); // Function KillstreakUINew.KSSortableVerticalBox.SortChildren
};

// Class KillstreakUINew.KSStoreSectionItem
// Size: 0x60 (Inherited: 0x28)
struct UKSStoreSectionItem : public UObject {
	struct TArray<struct UPUMG_StoreItem*> StoreItems; // 0x28(0x10)
	struct TArray<int32_t> NewLootIds; // 0x38(0x10)
	int32_t column; // 0x48(0x04)
	int32_t Row; // 0x4c(0x04)
	char WidgetType; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
	struct UPUMG_StoreItem* CurrentlyViewedItem; // 0x58(0x08)

	bool IsItemNew(struct UPUMG_StoreItem* StoreItem); // Function KillstreakUINew.KSStoreSectionItem.IsItemNew
	bool HasNewItems(); // Function KillstreakUINew.KSStoreSectionItem.HasNewItems
};

// Class KillstreakUINew.KSStoreSection
// Size: 0x40 (Inherited: 0x28)
struct UKSStoreSection : public UObject {
	struct TArray<struct UKSStoreSectionItem*> SectionItems; // 0x28(0x10)
	int32_t SecondsRemaining; // 0x38(0x04)
	char SectionType; // 0x3c(0x01)
	char UnknownData_3D[0x3]; // 0x3d(0x03)

	bool HasNewItems(); // Function KillstreakUINew.KSStoreSection.HasNewItems
	struct FText GetSectionHeader(); // Function KillstreakUINew.KSStoreSection.GetSectionHeader
};

// Class KillstreakUINew.KSTargetMarkerWidget
// Size: 0x318 (Inherited: 0x2d0)
struct UKSTargetMarkerWidget : public UKSScreenMarkerWidgetBase {
	struct FMulticastInlineDelegate OnTargetChanged; // 0x2d0(0x10)
	struct FMulticastInlineDelegate OnModUsed; // 0x2e0(0x10)
	struct AActor* CurrentTarget; // 0x2f0(0x08)
	struct UKSModInst_Activated* TargetModInst; // 0x2f8(0x08)
	struct TScriptInterface<None> Targeter; // 0x300(0x10)
	char UnknownData_310[0x8]; // 0x310(0x08)

	void UpdateCharge(struct UKSModInst_Activated* ModInst); // Function KillstreakUINew.KSTargetMarkerWidget.UpdateCharge
	void TryApplyViewState(enum class ETargetMarkerViewState ViewState, bool bForce); // Function KillstreakUINew.KSTargetMarkerWidget.TryApplyViewState
	void ReceiveNewTarget(struct TScriptInterface<None> InTargeter, struct AActor* NewTarget); // Function KillstreakUINew.KSTargetMarkerWidget.ReceiveNewTarget
	void OnGamepadSelectedChanged(int32_t NewSelectionIndex); // Function KillstreakUINew.KSTargetMarkerWidget.OnGamepadSelectedChanged
	enum class ETargetMarkerViewState GetCurrentViewState(); // Function KillstreakUINew.KSTargetMarkerWidget.GetCurrentViewState
	void BindTargetModInst(); // Function KillstreakUINew.KSTargetMarkerWidget.BindTargetModInst
	void ApplyViewState(enum class ETargetMarkerViewState ViewState); // Function KillstreakUINew.KSTargetMarkerWidget.ApplyViewState
};

// Class KillstreakUINew.KSTextChatWidget
// Size: 0x510 (Inherited: 0x4e0)
struct UKSTextChatWidget : public UKSWidget {
	bool ActiveChatChannelsDirty; // 0x4e0(0x01)
	char UnknownData_4E1[0x7]; // 0x4e1(0x07)
	struct TArray<struct FPUMG_ActiveChatChannelData> ActiveChatChannels; // 0x4e8(0x10)
	int32_t CurrentChatChannelIndex; // 0x4f8(0x04)
	char UnknownData_4FC[0x4]; // 0x4fc(0x04)
	struct FMulticastInlineDelegate OnCurrentChatChannelChanged; // 0x500(0x10)

	void Whisper(struct FString PlayerName, struct FString Message); // Function KillstreakUINew.KSTextChatWidget.Whisper
	void Unblock(struct FString PlayerName); // Function KillstreakUINew.KSTextChatWidget.Unblock
	void UIX_SubmitTextInput(struct FString Message); // Function KillstreakUINew.KSTextChatWidget.UIX_SubmitTextInput
	void UIX_SendMessageToPlayer(struct FString Message, int64_t PlayerId); // Function KillstreakUINew.KSTextChatWidget.UIX_SendMessageToPlayer
	void UIX_SendMessageToChannel(struct FString Message, enum class EPUMG_ChatChannel Channel); // Function KillstreakUINew.KSTextChatWidget.UIX_SendMessageToChannel
	void UIX_MarkMessageAsRead(int32_t MessageIndex); // Function KillstreakUINew.KSTextChatWidget.UIX_MarkMessageAsRead
	void UIX_ExecuteChatCommandLine(struct FString CommandLine); // Function KillstreakUINew.KSTextChatWidget.UIX_ExecuteChatCommandLine
	void ToggleDND(); // Function KillstreakUINew.KSTextChatWidget.ToggleDND
	void ShowTextChat(); // Function KillstreakUINew.KSTextChatWidget.ShowTextChat
	bool SetChatChannelToPlayer(int64_t PlayerId); // Function KillstreakUINew.KSTextChatWidget.SetChatChannelToPlayer
	bool SetChatChannel(enum class EPUMG_ChatChannel Channel, int64_t PersonalChannelPlayerId); // Function KillstreakUINew.KSTextChatWidget.SetChatChannel
	void Reply(struct FString Message); // Function KillstreakUINew.KSTextChatWidget.Reply
	void ProcessMessageOnClient(struct FText Message, enum class EPUMG_ChatChannel Channel); // Function KillstreakUINew.KSTextChatWidget.ProcessMessageOnClient
	void PreviousChatChannel(); // Function KillstreakUINew.KSTextChatWidget.PreviousChatChannel
	void OpenTextChatToPlayer(struct UPUMG_PlayerInfo* Player); // Function KillstreakUINew.KSTextChatWidget.OpenTextChatToPlayer
	void OpenTextChat(bool BeginChatCommand); // Function KillstreakUINew.KSTextChatWidget.OpenTextChat
	void NextChatChannel(); // Function KillstreakUINew.KSTextChatWidget.NextChatChannel
	bool IsActiveChatChannel(enum class EPUMG_ChatChannel Channel); // Function KillstreakUINew.KSTextChatWidget.IsActiveChatChannel
	void HandleChatMessageReceived(struct FPUMG_ChatData ReceivedMessage); // Function KillstreakUINew.KSTextChatWidget.HandleChatMessageReceived
	void HandleChatMessageRead(struct FPUMG_ChatData ReadMessage); // Function KillstreakUINew.KSTextChatWidget.HandleChatMessageRead
	void HandleChatChannelLeft(enum class EPUMG_ChatChannel Channel); // Function KillstreakUINew.KSTextChatWidget.HandleChatChannelLeft
	void HandleChatChannelJoined(enum class EPUMG_ChatChannel Channel); // Function KillstreakUINew.KSTextChatWidget.HandleChatChannelJoined
	struct FPUMG_ActiveChatChannelData GetCurrentChatChannel(); // Function KillstreakUINew.KSTextChatWidget.GetCurrentChatChannel
	struct UKSChatDataFactory* GetChatDataFactory(); // Function KillstreakUINew.KSTextChatWidget.GetChatDataFactory
	struct TArray<struct FPUMG_ActiveChatChannelData> GetActiveChatChannels(); // Function KillstreakUINew.KSTextChatWidget.GetActiveChatChannels
	bool CanChatInChannel(enum class EPUMG_ChatChannel Channel); // Function KillstreakUINew.KSTextChatWidget.CanChatInChannel
	void Block(struct FString PlayerName); // Function KillstreakUINew.KSTextChatWidget.Block
};

// Class KillstreakUINew.KSToastNotificationWidgetBase
// Size: 0x520 (Inherited: 0x4e0)
struct UKSToastNotificationWidgetBase : public UKSWidget {
	struct FMulticastInlineDelegate OnToastReceived; // 0x4e0(0x10)
	int32_t MaxToastNotification; // 0x4f0(0x04)
	int32_t CurrentToastCount; // 0x4f4(0x04)
	bool IsBusy; // 0x4f8(0x01)
	char UnknownData_4F9[0x7]; // 0x4f9(0x07)
	struct TArray<struct FToastData> ToastQueue; // 0x500(0x10)
	struct TArray<struct FToastData> PostMatchToasts; // 0x510(0x10)

	void TestDisplayChallengeNotification(); // Function KillstreakUINew.KSToastNotificationWidgetBase.TestDisplayChallengeNotification
	void StoreToastQueue(struct FToastData ToastNotification); // Function KillstreakUINew.KSToastNotificationWidgetBase.StoreToastQueue
	void ShowToastNotification(); // Function KillstreakUINew.KSToastNotificationWidgetBase.ShowToastNotification
	void OnToastNotificationReceived(struct FToastData ToastData); // Function KillstreakUINew.KSToastNotificationWidgetBase.OnToastNotificationReceived
	void OnChallengeCompleted(struct UKSActivityInstance* Activity); // Function KillstreakUINew.KSToastNotificationWidgetBase.OnChallengeCompleted
	void OnAwardsCompleted(struct UKSActivityInstance* Activity); // Function KillstreakUINew.KSToastNotificationWidgetBase.OnAwardsCompleted
	void NotifyToastShown(); // Function KillstreakUINew.KSToastNotificationWidgetBase.NotifyToastShown
	void NotifyToastHidden(); // Function KillstreakUINew.KSToastNotificationWidgetBase.NotifyToastHidden
	void HandlePartyMemberPromoted(int64_t PlayerId); // Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyMemberPromoted
	void HandlePartyMemberLeftGeneric(); // Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyMemberLeftGeneric
	void HandlePartyMemberKick(int64_t PlayerId); // Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyMemberKick
	void HandlePartyMemberAdded(struct FPUMG_PartyMemberData PartyMemberData); // Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyMemberAdded
	void HandlePartyLocalPlayerLeft(); // Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyLocalPlayerLeft
	void HandlePartyInviteSent(struct FText PlayerName); // Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteSent
	void HandlePartyInviteRejected(); // Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteRejected
	void HandlePartyInviteReceived(struct UPUMG_PlayerInfo* PartyInviter); // Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteReceived
	void HandlePartyInviteError(struct FText PlayerName); // Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteError
	void HandlePartyInviteAccepted(); // Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteAccepted
	void HandleFriendRejected(struct FText PlayerName); // Function KillstreakUINew.KSToastNotificationWidgetBase.HandleFriendRejected
	void HandleFriendInviteReceived(struct FPUMG_FriendData PlayerData); // Function KillstreakUINew.KSToastNotificationWidgetBase.HandleFriendInviteReceived
	void HandleFriendAddSuccess(struct FString PlayerName); // Function KillstreakUINew.KSToastNotificationWidgetBase.HandleFriendAddSuccess
	void HandleFriendAdded(struct FText PlayerName); // Function KillstreakUINew.KSToastNotificationWidgetBase.HandleFriendAdded
	struct TArray<struct FToastData> GetPostMatchToasts(); // Function KillstreakUINew.KSToastNotificationWidgetBase.GetPostMatchToasts
	struct UKSPlayerChallengesManager* GetPlayerChallengesManager(); // Function KillstreakUINew.KSToastNotificationWidgetBase.GetPlayerChallengesManager
	struct UKSAwardsManager* GetPlayerAwardsManager(); // Function KillstreakUINew.KSToastNotificationWidgetBase.GetPlayerAwardsManager
	struct UKSPartyDataFactory* GetPartyDataFactory(); // Function KillstreakUINew.KSToastNotificationWidgetBase.GetPartyDataFactory
	bool GetNext(struct FToastData NextToastNotification); // Function KillstreakUINew.KSToastNotificationWidgetBase.GetNext
	struct UKSFriendDataFactory* GetFriendDataFactory(); // Function KillstreakUINew.KSToastNotificationWidgetBase.GetFriendDataFactory
	struct UKSBattlePassProgressionManager* GetBattlePassProgressionManager(); // Function KillstreakUINew.KSToastNotificationWidgetBase.GetBattlePassProgressionManager
	void CreateMiniBattlePassTierUnlockToasts(struct UKSActivityInstance* MiniBattlePassActivityInstance, struct FActivityTier TierObtained); // Function KillstreakUINew.KSToastNotificationWidgetBase.CreateMiniBattlePassTierUnlockToasts
	void CreateMercMasteryLevelUpToasts(struct UKSActivityInstance* MercMasteryActivityInstance, struct FActivityTier TierObtained); // Function KillstreakUINew.KSToastNotificationWidgetBase.CreateMercMasteryLevelUpToasts
	void ClearPostMatchQueue(); // Function KillstreakUINew.KSToastNotificationWidgetBase.ClearPostMatchQueue
	void ClearNotificationQueue(); // Function KillstreakUINew.KSToastNotificationWidgetBase.ClearNotificationQueue
};

// Class KillstreakUINew.KSTreeView
// Size: 0x3e0 (Inherited: 0x3d8)
struct UKSTreeView : public UTreeView {
	struct FWeakObjectPtr<struct APUMG_HUD> MyHud; // 0x3d8(0x08)

	void UninitializeWidget(); // Function KillstreakUINew.KSTreeView.UninitializeWidget
	void NavigateSelectItem(struct UObject* Item); // Function KillstreakUINew.KSTreeView.NavigateSelectItem
	bool IsItemExpanded(struct UObject* Item); // Function KillstreakUINew.KSTreeView.IsItemExpanded
	void InitializeWidget(); // Function KillstreakUINew.KSTreeView.InitializeWidget
	int32_t GetNumItemsInLayout(); // Function KillstreakUINew.KSTreeView.GetNumItemsInLayout
	bool BP_GetEntryWidgetFromItem(struct UObject* Item, struct UUserWidget* OutWidget); // Function KillstreakUINew.KSTreeView.BP_GetEntryWidgetFromItem
};

// Class KillstreakUINew.KSGenericSoundLibrary
// Size: 0x40 (Inherited: 0x28)
struct UKSGenericSoundLibrary : public UKSUISoundLibrary {
	struct UAkAudioEvent* BackToScreenSound; // 0x28(0x08)
	struct UAkAudioEvent* ErrorSound; // 0x30(0x08)
	struct UAkAudioEvent* ScreenTransitionSound; // 0x38(0x08)
};

// Class KillstreakUINew.KSButtonSoundLibrary
// Size: 0x40 (Inherited: 0x28)
struct UKSButtonSoundLibrary : public UKSUISoundLibrary {
	struct UAkAudioEvent* ButtonClicked; // 0x28(0x08)
	struct UAkAudioEvent* ButtonHovered; // 0x30(0x08)
	struct UAkAudioEvent* ButtonUnhovered; // 0x38(0x08)
};

// Class KillstreakUINew.KSScrollButtonSoundLibrary
// Size: 0x48 (Inherited: 0x28)
struct UKSScrollButtonSoundLibrary : public UKSUISoundLibrary {
	struct UAkAudioEvent* ScrollClicked; // 0x28(0x08)
	struct UAkAudioEvent* ScrollHovered; // 0x30(0x08)
	struct UAkAudioEvent* ScrollUnhovered; // 0x38(0x08)
	struct UAkAudioEvent* ScrollingSound; // 0x40(0x08)
};

// Class KillstreakUINew.KSShopSoundLibrary
// Size: 0x48 (Inherited: 0x28)
struct UKSShopSoundLibrary : public UKSUISoundLibrary {
	struct UAkAudioEvent* ShopOpen; // 0x28(0x08)
	struct UAkAudioEvent* ShopClose; // 0x30(0x08)
	struct UAkAudioEvent* PurchaseSucceeded; // 0x38(0x08)
	struct UAkAudioEvent* PurchaseFailed; // 0x40(0x08)
};

// Class KillstreakUINew.KSToastSoundLibrary
// Size: 0x48 (Inherited: 0x28)
struct UKSToastSoundLibrary : public UKSUISoundLibrary {
	struct UAkAudioEvent* FriendToast; // 0x28(0x08)
	struct UAkAudioEvent* PartyToast; // 0x30(0x08)
	struct UAkAudioEvent* ErrorToast; // 0x38(0x08)
	struct UAkAudioEvent* InfoToast; // 0x40(0x08)
};

// Class KillstreakUINew.KSViewedActiveWeaponCompWidget
// Size: 0x5b8 (Inherited: 0x5a8)
struct UKSViewedActiveWeaponCompWidget : public UKSActiveWeaponComponentWidget {
	char UnknownData_5A8[0x10]; // 0x5a8(0x10)
};

// Class KillstreakUINew.KSViewedActiveGadgetWidget
// Size: 0x4f8 (Inherited: 0x4e8)
struct UKSViewedActiveGadgetWidget : public UKSWeaponWidget {
	char UnknownData_4E8[0x10]; // 0x4e8(0x10)
};

// Class KillstreakUINew.KSViewedActiveMedPackWidget
// Size: 0x4f8 (Inherited: 0x4e8)
struct UKSViewedActiveMedPackWidget : public UKSWeaponWidget {
	char UnknownData_4E8[0x10]; // 0x4e8(0x10)
};

// Class KillstreakUINew.KSViewedItemLabel
// Size: 0x528 (Inherited: 0x510)
struct UKSViewedItemLabel : public UKSViewedPawnWidget {
	char UnknownData_510[0x8]; // 0x510(0x08)
	bool UpdateViewLimitPosition; // 0x518(0x01)
	char UnknownData_519[0x3]; // 0x519(0x03)
	struct FVector2D ViewLimitPosition; // 0x51c(0x08)
	char UnknownData_524[0x4]; // 0x524(0x04)

	void UpdateLabelPosition(); // Function KillstreakUINew.KSViewedItemLabel.UpdateLabelPosition
	void UnbindToViewportResizeEvent(); // Function KillstreakUINew.KSViewedItemLabel.UnbindToViewportResizeEvent
	void TriggerLabelPositionUpdate(); // Function KillstreakUINew.KSViewedItemLabel.TriggerLabelPositionUpdate
	void OnLabelShow(); // Function KillstreakUINew.KSViewedItemLabel.OnLabelShow
	void OnLabelHide(); // Function KillstreakUINew.KSViewedItemLabel.OnLabelHide
	struct UImage* GetViewLimitImage(); // Function KillstreakUINew.KSViewedItemLabel.GetViewLimitImage
	struct AActor* GetTrackedActor(); // Function KillstreakUINew.KSViewedItemLabel.GetTrackedActor
	struct UCanvasPanel* GetOutermostCanvasPanel(); // Function KillstreakUINew.KSViewedItemLabel.GetOutermostCanvasPanel
	bool GetOnScreenPositionForLabel(struct APlayerController* Player, struct AActor* InActor, struct FBox2D OutBounds); // Function KillstreakUINew.KSViewedItemLabel.GetOnScreenPositionForLabel
	struct UCanvasPanel* GetLabelCanvasPanel(); // Function KillstreakUINew.KSViewedItemLabel.GetLabelCanvasPanel
	void BindToViewportResizeEvent(); // Function KillstreakUINew.KSViewedItemLabel.BindToViewportResizeEvent
};

// Class KillstreakUINew.KSViewedPawnDamageDisplay
// Size: 0x5a0 (Inherited: 0x510)
struct UKSViewedPawnDamageDisplay : public UKSViewedPawnWidget {
	float StackingWait; // 0x510(0x04)
	bool TetherToEventLocation; // 0x514(0x01)
	char UnknownData_515[0x3]; // 0x515(0x03)
	int32_t MaxNumDamageWidgetsOnScreen; // 0x518(0x04)
	char UnknownData_51C[0x4]; // 0x51c(0x04)
	struct UCanvasPanel* DamageNumberContainer; // 0x520(0x08)
	struct TMap<struct UDamageType*, struct FSpecialDamageColors> SpecialDamageTypes; // 0x528(0x50)
	struct TArray<struct UDamageNumberDisplayWidget*> CurrentDamageNumbersOnScreen; // 0x578(0x10)
	struct TArray<struct UDamageNumberDisplayWidget*> DamageNumbersPool; // 0x588(0x10)
	char UnknownData_598[0x8]; // 0x598(0x08)

	void PrimeDamageNumbersWidgetPool(); // Function KillstreakUINew.KSViewedPawnDamageDisplay.PrimeDamageNumbersWidgetPool
	void HandlePhaseChange(struct FName NewPhaseName, struct FName PreviousPhaseName); // Function KillstreakUINew.KSViewedPawnDamageDisplay.HandlePhaseChange
	void HandleInstigateDamageNotify(struct FCombatEventInfo DamageInfo); // Function KillstreakUINew.KSViewedPawnDamageDisplay.HandleInstigateDamageNotify
	void HandleAnimationCompleted(struct UDamageNumberDisplayWidget* DamageNumberWidget); // Function KillstreakUINew.KSViewedPawnDamageDisplay.HandleAnimationCompleted
	struct UDamageNumberDisplayWidget* GetDamageNumberWidgetInstance(); // Function KillstreakUINew.KSViewedPawnDamageDisplay.GetDamageNumberWidgetInstance
	void ClearDamageNumbersOnScreen(); // Function KillstreakUINew.KSViewedPawnDamageDisplay.ClearDamageNumbersOnScreen
};

// Class KillstreakUINew.DamageNumberDisplayWidget
// Size: 0x280 (Inherited: 0x238)
struct UDamageNumberDisplayWidget : public UUserWidget {
	struct FMulticastInlineDelegate OnNumberAnimationComplete; // 0x238(0x10)
	struct AActor* DamageTarget; // 0x248(0x08)
	struct FVector InitialDamageLocation; // 0x250(0x0c)
	bool TetherToEventLocation; // 0x25c(0x01)
	char UnknownData_25D[0x3]; // 0x25d(0x03)
	float DamageAmount; // 0x260(0x04)
	enum class EDamageBaseType DamageBaseType; // 0x264(0x01)
	enum class EDamageFlourishType DamageFlourishType; // 0x265(0x01)
	enum class EDamageModifier DamageModifier; // 0x266(0x01)
	char UnknownData_267[0x1]; // 0x267(0x01)
	float DelayBeforeAnimation; // 0x268(0x04)
	float StackWaitTime; // 0x26c(0x04)
	bool PlayingNumberAnimation; // 0x270(0x01)
	char UnknownData_271[0x3]; // 0x271(0x03)
	float VerticalWorldOffset; // 0x274(0x04)
	bool ChangePosition; // 0x278(0x01)
	char UnknownData_279[0x7]; // 0x279(0x07)

	void SetDisplayInformation(struct AActor* InTargetActor, bool InTetherToEventLocation, float InDamageAmount, bool InIsSpecialDamage, struct FSpecialDamageColors InDamageColors, bool InIsLethal, bool InIsHeadshot, float InDelayWindow, float InStackWait, bool InArmorHit, bool InDamageReduced, bool InDamageResisted, bool InDamageShielded); // Function KillstreakUINew.DamageNumberDisplayWidget.SetDisplayInformation
	void SetContentVisibility(bool IsVisible); // Function KillstreakUINew.DamageNumberDisplayWidget.SetContentVisibility
	void PlayNumberAnimation(); // Function KillstreakUINew.DamageNumberDisplayWidget.PlayNumberAnimation
	void OnDisplaySpecialDamageInfo(float CurrentDamageAmount, struct FSpecialDamageColors DamageColors, bool bChangePosition); // Function KillstreakUINew.DamageNumberDisplayWidget.OnDisplaySpecialDamageInfo
	void OnDisplayInformationReset(); // Function KillstreakUINew.DamageNumberDisplayWidget.OnDisplayInformationReset
	bool IsDisplayStacking(); // Function KillstreakUINew.DamageNumberDisplayWidget.IsDisplayStacking
};

// Class KillstreakUINew.KSViewedPawnInventoryWidget
// Size: 0x5a8 (Inherited: 0x570)
struct UKSViewedPawnInventoryWidget : public UKSPawnInventoryWidget {
	struct FPlayerInventorySlot ActiveInventoryItem; // 0x570(0x18)
	char UnknownData_588[0x20]; // 0x588(0x20)

	void OnUpdatedPawnInventorySlot(struct FPlayerInventorySlot InventorySlot); // Function KillstreakUINew.KSViewedPawnInventoryWidget.OnUpdatedPawnInventorySlot
	void OnRemovedPawnInventorySlot(struct FPlayerInventorySlot InventorySlot); // Function KillstreakUINew.KSViewedPawnInventoryWidget.OnRemovedPawnInventorySlot
	void OnActivePawnInventorySlot(struct FPlayerInventorySlot InventorySlot); // Function KillstreakUINew.KSViewedPawnInventoryWidget.OnActivePawnInventorySlot
	int32_t GetSlotIndex(struct FGameplayTag EquipPoint); // Function KillstreakUINew.KSViewedPawnInventoryWidget.GetSlotIndex
};

// Class KillstreakUINew.KSViewedPawnModsWidget
// Size: 0x528 (Inherited: 0x510)
struct UKSViewedPawnModsWidget : public UKSViewedPawnWidget {
	char UnknownData_510[0x18]; // 0x510(0x18)

	void OnViewedPawnModAdded(struct UKSPlayerMod* Mod, struct UKSPlayerModInstance* ModInstance); // Function KillstreakUINew.KSViewedPawnModsWidget.OnViewedPawnModAdded
	struct UOverlay* GetOverlay(); // Function KillstreakUINew.KSViewedPawnModsWidget.GetOverlay
};

// Class KillstreakUINew.KSViewRedirector_LocalSetting
// Size: 0x30 (Inherited: 0x28)
struct UKSViewRedirector_LocalSetting : public UPUMG_ViewRedirecter {
	struct FName LocalActionName; // 0x28(0x08)

	bool DoesLocalSettingApply(struct APUMG_HUD* HUD); // Function KillstreakUINew.KSViewRedirector_LocalSetting.DoesLocalSettingApply
};

// Class KillstreakUINew.KSVoiceActivityWidget
// Size: 0x550 (Inherited: 0x4e0)
struct UKSVoiceActivityWidget : public UKSWidget {
	struct FMulticastInlineDelegate VoiceAccountNamePairsUpdated; // 0x4e0(0x10)
	struct FMulticastInlineDelegate VoiceParticipantAdded; // 0x4f0(0x10)
	struct FMulticastInlineDelegate VoiceParticipantRemoved; // 0x500(0x10)
	struct FMulticastInlineDelegate VoiceParticipantUpdated; // 0x510(0x10)
	struct FMulticastInlineDelegate VoiceAudioStateChange; // 0x520(0x10)
	char UnknownData_530[0x20]; // 0x530(0x20)

	void OnVoiceParticipantUpdated(struct FString AccountId, bool bIsTalking, bool bIsMuted); // Function KillstreakUINew.KSVoiceActivityWidget.OnVoiceParticipantUpdated
	void OnVoiceParticipantRemoved(struct FString AccountId); // Function KillstreakUINew.KSVoiceActivityWidget.OnVoiceParticipantRemoved
	void OnVoiceParticipantAdded(struct FString AccountId); // Function KillstreakUINew.KSVoiceActivityWidget.OnVoiceParticipantAdded
	struct FString GetVoiceIdByPlayerId(int64_t PlayerId); // Function KillstreakUINew.KSVoiceActivityWidget.GetVoiceIdByPlayerId
	struct AKSPlayerState* GetPlayerStateByVoiceId(struct FString VoiceId); // Function KillstreakUINew.KSVoiceActivityWidget.GetPlayerStateByVoiceId
	int64_t GetPlayerIdByVoiceId(struct FString VoiceId); // Function KillstreakUINew.KSVoiceActivityWidget.GetPlayerIdByVoiceId
};

// Class KillstreakUINew.KSWeaponComponentWidget
// Size: 0x500 (Inherited: 0x4e0)
struct UKSWeaponComponentWidget : public UKSWidget {
	struct FWeakObjectPtr<struct UKSWeaponComponent> WeaponComponent; // 0x4e0(0x08)
	uint16_t EquipmentId; // 0x4e8(0x02)
	char UnknownData_4EA[0x16]; // 0x4ea(0x16)

	void SetOwningWeaponComponent(struct UKSWeaponComponent* InWeaponComponent); // Function KillstreakUINew.KSWeaponComponentWidget.SetOwningWeaponComponent
	void PreClearWeaponComponent(); // Function KillstreakUINew.KSWeaponComponentWidget.PreClearWeaponComponent
	void PostSetWeaponComponent(); // Function KillstreakUINew.KSWeaponComponentWidget.PostSetWeaponComponent
	void OnEndActiveWeaponComponent(); // Function KillstreakUINew.KSWeaponComponentWidget.OnEndActiveWeaponComponent
	void OnBecomeActiveWeaponComponent(); // Function KillstreakUINew.KSWeaponComponentWidget.OnBecomeActiveWeaponComponent
	bool IsWeaponComponentActive(); // Function KillstreakUINew.KSWeaponComponentWidget.IsWeaponComponentActive
	struct UKSWeaponComponent* GetWeaponComponent(); // Function KillstreakUINew.KSWeaponComponentWidget.GetWeaponComponent
};

// Class KillstreakUINew.KSWeaponComponentAmmoWidget
// Size: 0x520 (Inherited: 0x500)
struct UKSWeaponComponentAmmoWidget : public UKSWeaponComponentWidget {
	int32_t CachedAmmoInClip; // 0x500(0x04)
	int32_t CachedClipSize; // 0x504(0x04)
	int32_t CachedInReserve; // 0x508(0x04)
	bool CachedIsReloading; // 0x50c(0x01)
	char UnknownData_50D[0x13]; // 0x50d(0x13)

	void StopReloading(); // Function KillstreakUINew.KSWeaponComponentAmmoWidget.StopReloading
	void StartReloading(); // Function KillstreakUINew.KSWeaponComponentAmmoWidget.StartReloading
	void OnAmmoChanged(int32_t OldInClip, int32_t OldClipSize, int32_t OldReserve, int32_t NewInClip, int32_t NewClipSize, int32_t NewReserve); // Function KillstreakUINew.KSWeaponComponentAmmoWidget.OnAmmoChanged
	bool IsReloading(); // Function KillstreakUINew.KSWeaponComponentAmmoWidget.IsReloading
	int32_t GetClipSize(); // Function KillstreakUINew.KSWeaponComponentAmmoWidget.GetClipSize
	int32_t GetAmmoInReserve(); // Function KillstreakUINew.KSWeaponComponentAmmoWidget.GetAmmoInReserve
	int32_t GetAmmoInClip(); // Function KillstreakUINew.KSWeaponComponentAmmoWidget.GetAmmoInClip
};

// Class KillstreakUINew.KSWhatsNewPanel
// Size: 0x90 (Inherited: 0x48)
struct UKSWhatsNewPanel : public UKSJsonData {
	struct FText Header; // 0x48(0x18)
	struct FText Description; // 0x60(0x18)
	struct UTexture2DDynamic* Image; // 0x78(0x08)
	struct FString URL; // 0x80(0x10)
};

// Class KillstreakUINew.TickAnimationManager
// Size: 0x78 (Inherited: 0x28)
struct UTickAnimationManager : public UObject {
	struct TMap<struct FName, struct FTickAnimationParams> AnimsByName; // 0x28(0x50)

	void StopAnimation(struct FName AnimName); // Function KillstreakUINew.TickAnimationManager.StopAnimation
	void SkipToEndAnimation(struct FName AnimName); // Function KillstreakUINew.TickAnimationManager.SkipToEndAnimation
	void ResumeAnimation(struct FName AnimName); // Function KillstreakUINew.TickAnimationManager.ResumeAnimation
	void RemoveAnimation(struct FName AnimName); // Function KillstreakUINew.TickAnimationManager.RemoveAnimation
	void PlayAnimation(struct FName AnimName); // Function KillstreakUINew.TickAnimationManager.PlayAnimation
	void PauseAnimation(struct FName AnimName); // Function KillstreakUINew.TickAnimationManager.PauseAnimation
	bool GetAnimationInfo(struct FName AnimName, struct FTickAnimationParams OutAnimParams); // Function KillstreakUINew.TickAnimationManager.GetAnimationInfo
	void ApplyTick(float DeltaTime); // Function KillstreakUINew.TickAnimationManager.ApplyTick
	void AddAnimation(struct FName AnimName, float Duration, struct FDelegate UpdateEvent, struct FDelegate FinishedEvent); // Function KillstreakUINew.TickAnimationManager.AddAnimation
};

