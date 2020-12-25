// Class Engine.Actor
// Size: 0x220 (Inherited: 0x28)
struct AActor : public UObject {
	struct FActorTickFunction PrimaryActorTick; // 0x28(0x30)
	char bNetTemporary : 1; // 0x58(0x01)
	char bNetStartup : 1; // 0x58(0x01)
	char bOnlyRelevantToOwner : 1; // 0x58(0x01)
	char bAlwaysRelevant : 1; // 0x58(0x01)
	char bReplicateMovement : 1; // 0x58(0x01)
	char bHidden : 1; // 0x58(0x01)
	char bTearOff : 1; // 0x58(0x01)
	char bExchangedRoles : 1; // 0x58(0x01)
	char bNetLoadOnClient : 1; // 0x59(0x01)
	char bNetUseOwnerRelevancy : 1; // 0x59(0x01)
	char bRelevantForNetworkReplays : 1; // 0x59(0x01)
	char bRelevantForLevelBounds : 1; // 0x59(0x01)
	char bReplayRewindable : 1; // 0x59(0x01)
	char bAllowTickBeforeBeginPlay : 1; // 0x59(0x01)
	char bAutoDestroyWhenFinished : 1; // 0x59(0x01)
	char bCanBeDamaged : 1; // 0x59(0x01)
	char bBlockInput : 1; // 0x5a(0x01)
	char bCollideWhenPlacing : 1; // 0x5a(0x01)
	char bFindCameraComponentWhenViewTarget : 1; // 0x5a(0x01)
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x5a(0x01)
	char bIgnoresOriginShifting : 1; // 0x5a(0x01)
	char bEnableAutoLODGeneration : 1; // 0x5a(0x01)
	char bIsEditorOnlyActor : 1; // 0x5a(0x01)
	char bActorSeamlessTraveled : 1; // 0x5a(0x01)
	char bReplicates : 1; // 0x5b(0x01)
	char bCanBeInCluster : 1; // 0x5b(0x01)
	char bAllowReceiveTickEventOnDedicatedServer : 1; // 0x5b(0x01)
	char UnknownData_5B_3 : 5; // 0x5b(0x01)
	char UnknownData_5C_0 : 2; // 0x5c(0x01)
	char bActorEnableCollision : 1; // 0x5c(0x01)
	char bActorIsBeingDestroyed : 1; // 0x5c(0x01)
	char UnknownData_5C_4 : 4; // 0x5c(0x01)
	enum class EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming; // 0x5d(0x01)
	enum class EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x5e(0x01)
	char RemoteRole; // 0x5f(0x01)
	struct FRepMovement ReplicatedMovement; // 0x60(0x34)
	float InitialLifeSpan; // 0x94(0x04)
	float CustomTimeDilation; // 0x98(0x04)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
	struct FRepAttachment AttachmentReplication; // 0xa0(0x40)
	struct AActor* Owner; // 0xe0(0x08)
	struct FName NetDriverName; // 0xe8(0x08)
	char Role; // 0xf0(0x01)
	char NetDormancy; // 0xf1(0x01)
	enum class ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0xf2(0x01)
	char AutoReceiveInput; // 0xf3(0x01)
	int32_t InputPriority; // 0xf4(0x04)
	struct UInputComponent* InputComponent; // 0xf8(0x08)
	float NetCullDistanceSquared; // 0x100(0x04)
	int32_t NetTag; // 0x104(0x04)
	float NetUpdateFrequency; // 0x108(0x04)
	float MinNetUpdateFrequency; // 0x10c(0x04)
	float NetPriority; // 0x110(0x04)
	char UnknownData_114[0x4]; // 0x114(0x04)
	struct APawn* Instigator; // 0x118(0x08)
	struct TArray<struct AActor*> Children; // 0x120(0x10)
	struct USceneComponent* RootComponent; // 0x130(0x08)
	struct TArray<struct AMatineeActor*> ControllingMatineeActors; // 0x138(0x10)
	char UnknownData_148[0x8]; // 0x148(0x08)
	struct TArray<struct FName> Layers; // 0x150(0x10)
	struct FWeakObjectPtr<struct UChildActorComponent> ParentComponent; // 0x160(0x08)
	char UnknownData_168[0x8]; // 0x168(0x08)
	struct TArray<struct FName> Tags; // 0x170(0x10)
	struct FMulticastSparseDelegate OnTakeAnyDamage; // 0x180(0x01)
	struct FMulticastSparseDelegate OnTakePointDamage; // 0x181(0x01)
	struct FMulticastSparseDelegate OnTakeRadialDamage; // 0x182(0x01)
	struct FMulticastSparseDelegate OnActorBeginOverlap; // 0x183(0x01)
	struct FMulticastSparseDelegate OnActorEndOverlap; // 0x184(0x01)
	struct FMulticastSparseDelegate OnBeginCursorOver; // 0x185(0x01)
	struct FMulticastSparseDelegate OnEndCursorOver; // 0x186(0x01)
	struct FMulticastSparseDelegate OnClicked; // 0x187(0x01)
	struct FMulticastSparseDelegate OnReleased; // 0x188(0x01)
	struct FMulticastSparseDelegate OnInputTouchBegin; // 0x189(0x01)
	struct FMulticastSparseDelegate OnInputTouchEnd; // 0x18a(0x01)
	struct FMulticastSparseDelegate OnInputTouchEnter; // 0x18b(0x01)
	struct FMulticastSparseDelegate OnInputTouchLeave; // 0x18c(0x01)
	struct FMulticastSparseDelegate OnActorHit; // 0x18d(0x01)
	struct FMulticastSparseDelegate OnDestroyed; // 0x18e(0x01)
	struct FMulticastSparseDelegate OnEndPlay; // 0x18f(0x01)
	char UnknownData_190[0x60]; // 0x190(0x60)
	struct TArray<struct UActorComponent*> InstanceComponents; // 0x1f0(0x10)
	struct TArray<struct UActorComponent*> BlueprintCreatedComponents; // 0x200(0x10)
	char UnknownData_210[0x10]; // 0x210(0x10)

	bool WasRecentlyRendered(float Tolerance); // Function Engine.Actor.WasRecentlyRendered
	void UserConstructionScript(); // Function Engine.Actor.UserConstructionScript
	void TearOff(); // Function Engine.Actor.TearOff
	void SnapRootComponentTo(struct AActor* InParentActor, struct FName InSocketName); // Function Engine.Actor.SnapRootComponentTo
	void SetTickGroup(char NewTickGroup); // Function Engine.Actor.SetTickGroup
	void SetTickableWhenPaused(bool bTickableWhenPaused); // Function Engine.Actor.SetTickableWhenPaused
	void SetReplicates(bool bInReplicates); // Function Engine.Actor.SetReplicates
	void SetReplicateMovement(bool bInReplicateMovement); // Function Engine.Actor.SetReplicateMovement
	void SetOwner(struct AActor* NewOwner); // Function Engine.Actor.SetOwner
	void SetNetDormancy(char NewDormancy); // Function Engine.Actor.SetNetDormancy
	void SetLifeSpan(float InLifespan); // Function Engine.Actor.SetLifeSpan
	void SetAutoDestroyWhenFinished(bool bVal); // Function Engine.Actor.SetAutoDestroyWhenFinished
	void SetActorTickInterval(float TickInterval); // Function Engine.Actor.SetActorTickInterval
	void SetActorTickEnabled(bool bEnabled); // Function Engine.Actor.SetActorTickEnabled
	void SetActorScale3D(struct FVector NewScale3D); // Function Engine.Actor.SetActorScale3D
	void SetActorRelativeScale3D(struct FVector NewRelativeScale); // Function Engine.Actor.SetActorRelativeScale3D
	void SetActorHiddenInGame(bool bNewHidden); // Function Engine.Actor.SetActorHiddenInGame
	void SetActorEnableCollision(bool bNewActorEnableCollision); // Function Engine.Actor.SetActorEnableCollision
	void RemoveTickPrerequisiteComponent(struct UActorComponent* PrerequisiteComponent); // Function Engine.Actor.RemoveTickPrerequisiteComponent
	void RemoveTickPrerequisiteActor(struct AActor* PrerequisiteActor); // Function Engine.Actor.RemoveTickPrerequisiteActor
	void ReceiveTick(float DeltaSeconds); // Function Engine.Actor.ReceiveTick
	void ReceiveRadialDamage(float DamageReceived, struct UDamageType* DamageType, struct FVector Origin, struct FHitResult HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function Engine.Actor.ReceiveRadialDamage
	void ReceivePointDamage(float Damage, struct UDamageType* DamageType, struct FVector HitLocation, struct FVector HitNormal, struct UPrimitiveComponent* HitComponent, struct FName BoneName, struct FVector ShotFromDirection, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FHitResult HitInfo); // Function Engine.Actor.ReceivePointDamage
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit); // Function Engine.Actor.ReceiveHit
	void ReceiveEndPlay(char EndPlayReason); // Function Engine.Actor.ReceiveEndPlay
	void ReceiveDestroyed(); // Function Engine.Actor.ReceiveDestroyed
	void ReceiveBeginPlay(); // Function Engine.Actor.ReceiveBeginPlay
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function Engine.Actor.ReceiveAnyDamage
	void ReceiveActorOnReleased(struct FKey ButtonReleased); // Function Engine.Actor.ReceiveActorOnReleased
	void ReceiveActorOnInputTouchLeave(char FingerIndex); // Function Engine.Actor.ReceiveActorOnInputTouchLeave
	void ReceiveActorOnInputTouchEnter(char FingerIndex); // Function Engine.Actor.ReceiveActorOnInputTouchEnter
	void ReceiveActorOnInputTouchEnd(char FingerIndex); // Function Engine.Actor.ReceiveActorOnInputTouchEnd
	void ReceiveActorOnInputTouchBegin(char FingerIndex); // Function Engine.Actor.ReceiveActorOnInputTouchBegin
	void ReceiveActorOnClicked(struct FKey ButtonPressed); // Function Engine.Actor.ReceiveActorOnClicked
	void ReceiveActorEndOverlap(struct AActor* OtherActor); // Function Engine.Actor.ReceiveActorEndOverlap
	void ReceiveActorEndCursorOver(); // Function Engine.Actor.ReceiveActorEndCursorOver
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function Engine.Actor.ReceiveActorBeginOverlap
	void ReceiveActorBeginCursorOver(); // Function Engine.Actor.ReceiveActorBeginCursorOver
	void PrestreamTextures(float Seconds, bool bEnableStreaming, int32_t CinematicTextureGroups); // Function Engine.Actor.PrestreamTextures
	void OnRep_ReplicateMovement(); // Function Engine.Actor.OnRep_ReplicateMovement
	void OnRep_ReplicatedMovement(); // Function Engine.Actor.OnRep_ReplicatedMovement
	void OnRep_Owner(); // Function Engine.Actor.OnRep_Owner
	void OnRep_Instigator(); // Function Engine.Actor.OnRep_Instigator
	void OnRep_AttachmentReplication(); // Function Engine.Actor.OnRep_AttachmentReplication
	void MakeNoise(float Loudness, struct APawn* NoiseInstigator, struct FVector NoiseLocation, float MaxRange, struct FName Tag); // Function Engine.Actor.MakeNoise
	struct UMaterialInstanceDynamic* MakeMIDForMaterial(struct UMaterialInterface* Parent); // Function Engine.Actor.MakeMIDForMaterial
	bool K2_TeleportTo(struct FVector DestLocation, struct FRotator DestRotation); // Function Engine.Actor.K2_TeleportTo
	bool K2_SetActorTransform(struct FTransform NewTransform, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_SetActorTransform
	bool K2_SetActorRotation(struct FRotator NewRotation, bool bTeleportPhysics); // Function Engine.Actor.K2_SetActorRotation
	void K2_SetActorRelativeTransform(struct FTransform NewRelativeTransform, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_SetActorRelativeTransform
	void K2_SetActorRelativeRotation(struct FRotator NewRelativeRotation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_SetActorRelativeRotation
	void K2_SetActorRelativeLocation(struct FVector NewRelativeLocation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_SetActorRelativeLocation
	bool K2_SetActorLocationAndRotation(struct FVector NewLocation, struct FRotator NewRotation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_SetActorLocationAndRotation
	bool K2_SetActorLocation(struct FVector NewLocation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_SetActorLocation
	void K2_OnReset(); // Function Engine.Actor.K2_OnReset
	void K2_OnEndViewTarget(struct APlayerController* PC); // Function Engine.Actor.K2_OnEndViewTarget
	void K2_OnBecomeViewTarget(struct APlayerController* PC); // Function Engine.Actor.K2_OnBecomeViewTarget
	struct USceneComponent* K2_GetRootComponent(); // Function Engine.Actor.K2_GetRootComponent
	struct TArray<struct UActorComponent*> K2_GetComponentsByClass(struct UActorComponent* ComponentClass); // Function Engine.Actor.K2_GetComponentsByClass
	struct FRotator K2_GetActorRotation(); // Function Engine.Actor.K2_GetActorRotation
	struct FVector K2_GetActorLocation(); // Function Engine.Actor.K2_GetActorLocation
	void K2_DetachFromActor(enum class EDetachmentRule LocationRule, enum class EDetachmentRule RotationRule, enum class EDetachmentRule ScaleRule); // Function Engine.Actor.K2_DetachFromActor
	void K2_DestroyComponent(struct UActorComponent* Component); // Function Engine.Actor.K2_DestroyComponent
	void K2_DestroyActor(); // Function Engine.Actor.K2_DestroyActor
	void K2_AttachToComponent(struct USceneComponent* Parent, struct FName SocketName, enum class EAttachmentRule LocationRule, enum class EAttachmentRule RotationRule, enum class EAttachmentRule ScaleRule, bool bWeldSimulatedBodies); // Function Engine.Actor.K2_AttachToComponent
	void K2_AttachToActor(struct AActor* ParentActor, struct FName SocketName, enum class EAttachmentRule LocationRule, enum class EAttachmentRule RotationRule, enum class EAttachmentRule ScaleRule, bool bWeldSimulatedBodies); // Function Engine.Actor.K2_AttachToActor
	void K2_AttachRootComponentToActor(struct AActor* InParentActor, struct FName InSocketName, char AttachLocationType, bool bWeldSimulatedBodies); // Function Engine.Actor.K2_AttachRootComponentToActor
	void K2_AttachRootComponentTo(struct USceneComponent* InParent, struct FName InSocketName, char AttachLocationType, bool bWeldSimulatedBodies); // Function Engine.Actor.K2_AttachRootComponentTo
	void K2_AddActorWorldTransform(struct FTransform DeltaTransform, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_AddActorWorldTransform
	void K2_AddActorWorldRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_AddActorWorldRotation
	void K2_AddActorWorldOffset(struct FVector DeltaLocation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_AddActorWorldOffset
	void K2_AddActorLocalTransform(struct FTransform NewTransform, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_AddActorLocalTransform
	void K2_AddActorLocalRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_AddActorLocalRotation
	void K2_AddActorLocalOffset(struct FVector DeltaLocation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.Actor.K2_AddActorLocalOffset
	bool IsOverlappingActor(struct AActor* Other); // Function Engine.Actor.IsOverlappingActor
	bool IsEnemy(struct AActor* pOther); // Function Engine.Actor.IsEnemy
	bool IsChildActor(); // Function Engine.Actor.IsChildActor
	bool IsActorTickEnabled(); // Function Engine.Actor.IsActorTickEnabled
	bool IsActorBeingDestroyed(); // Function Engine.Actor.IsActorBeingDestroyed
	bool HasAuthority(); // Function Engine.Actor.HasAuthority
	bool HasATeam(); // Function Engine.Actor.HasATeam
	float GetVerticalDistanceTo(struct AActor* OtherActor); // Function Engine.Actor.GetVerticalDistanceTo
	struct FVector GetVelocity(); // Function Engine.Actor.GetVelocity
	struct FTransform GetTransform(); // Function Engine.Actor.GetTransform
	bool GetTickableWhenPaused(); // Function Engine.Actor.GetTickableWhenPaused
	int32_t GetTeamNum(); // Function Engine.Actor.GetTeamNum
	float GetSquaredDistanceTo(struct AActor* OtherActor); // Function Engine.Actor.GetSquaredDistanceTo
	char GetRemoteRole(); // Function Engine.Actor.GetRemoteRole
	struct UChildActorComponent* GetParentComponent(); // Function Engine.Actor.GetParentComponent
	struct AActor* GetParentActor(); // Function Engine.Actor.GetParentActor
	struct AActor* GetOwner(); // Function Engine.Actor.GetOwner
	void GetOverlappingComponents(struct TArray<struct UPrimitiveComponent*> OverlappingComponents); // Function Engine.Actor.GetOverlappingComponents
	void GetOverlappingActors(struct TArray<struct AActor*> OverlappingActors, struct AActor* ClassFilter); // Function Engine.Actor.GetOverlappingActors
	char GetLocalRole(); // Function Engine.Actor.GetLocalRole
	float GetLifeSpan(); // Function Engine.Actor.GetLifeSpan
	struct AController* GetInstigatorController(); // Function Engine.Actor.GetInstigatorController
	struct APawn* GetInstigator(); // Function Engine.Actor.GetInstigator
	struct FVector GetInputVectorAxisValue(struct FKey InputAxisKey); // Function Engine.Actor.GetInputVectorAxisValue
	float GetInputAxisValue(struct FName InputAxisName); // Function Engine.Actor.GetInputAxisValue
	float GetInputAxisKeyValue(struct FKey InputAxisKey); // Function Engine.Actor.GetInputAxisKeyValue
	float GetHorizontalDotProductTo(struct AActor* OtherActor); // Function Engine.Actor.GetHorizontalDotProductTo
	float GetHorizontalDistanceTo(struct AActor* OtherActor); // Function Engine.Actor.GetHorizontalDistanceTo
	float GetGameTimeSinceCreation(); // Function Engine.Actor.GetGameTimeSinceCreation
	float GetDotProductTo(struct AActor* OtherActor); // Function Engine.Actor.GetDotProductTo
	float GetDistanceTo(struct AActor* OtherActor); // Function Engine.Actor.GetDistanceTo
	struct TArray<struct UActorComponent*> GetComponentsByTag(struct UActorComponent* ComponentClass, struct FName Tag); // Function Engine.Actor.GetComponentsByTag
	struct TArray<struct UActorComponent*> GetComponentsByInterface(struct UInterface* Interface); // Function Engine.Actor.GetComponentsByInterface
	struct UActorComponent* GetComponentByClass(struct UActorComponent* ComponentClass); // Function Engine.Actor.GetComponentByClass
	struct FName GetAttachParentSocketName(); // Function Engine.Actor.GetAttachParentSocketName
	struct AActor* GetAttachParentActor(); // Function Engine.Actor.GetAttachParentActor
	void GetAttachedActors(struct TArray<struct AActor*> OutActors, bool bResetArray); // Function Engine.Actor.GetAttachedActors
	void GetAllChildActors(struct TArray<struct AActor*> ChildActors, bool bIncludeDescendants); // Function Engine.Actor.GetAllChildActors
	struct FVector GetActorUpVector(); // Function Engine.Actor.GetActorUpVector
	float GetActorTimeDilation(); // Function Engine.Actor.GetActorTimeDilation
	float GetActorTickInterval(); // Function Engine.Actor.GetActorTickInterval
	struct FVector GetActorScale3D(); // Function Engine.Actor.GetActorScale3D
	struct FVector GetActorRightVector(); // Function Engine.Actor.GetActorRightVector
	struct FVector GetActorRelativeScale3D(); // Function Engine.Actor.GetActorRelativeScale3D
	struct FVector GetActorForwardVector(); // Function Engine.Actor.GetActorForwardVector
	void GetActorEyesViewPoint(struct FVector OutLocation, struct FRotator OutRotation); // Function Engine.Actor.GetActorEyesViewPoint
	bool GetActorEnableCollision(); // Function Engine.Actor.GetActorEnableCollision
	void GetActorBounds(bool bOnlyCollidingComponents, struct FVector Origin, struct FVector BoxExtent, bool bIncludeFromChildActors); // Function Engine.Actor.GetActorBounds
	void ForceNetUpdate(); // Function Engine.Actor.ForceNetUpdate
	void FlushNetDormancy(); // Function Engine.Actor.FlushNetDormancy
	void EnableInput(struct APlayerController* PlayerController); // Function Engine.Actor.EnableInput
	void DisableInput(struct APlayerController* PlayerController); // Function Engine.Actor.DisableInput
	void DetachRootComponentFromParent(bool bMaintainWorldPosition); // Function Engine.Actor.DetachRootComponentFromParent
	void AddTickPrerequisiteComponent(struct UActorComponent* PrerequisiteComponent); // Function Engine.Actor.AddTickPrerequisiteComponent
	void AddTickPrerequisiteActor(struct AActor* PrerequisiteActor); // Function Engine.Actor.AddTickPrerequisiteActor
	struct UActorComponent* AddComponent(struct FName TemplateName, bool bManualAttachment, struct FTransform RelativeTransform, struct UObject* ComponentTemplateContext); // Function Engine.Actor.AddComponent
	bool ActorHasTag(struct FName Tag); // Function Engine.Actor.ActorHasTag
};

// Class Engine.ActorComponent
// Size: 0xb0 (Inherited: 0x28)
struct UActorComponent : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct FActorComponentTickFunction PrimaryComponentTick; // 0x30(0x30)
	struct TArray<struct FName> ComponentTags; // 0x60(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x70(0x10)
	char UnknownData_80[0x4]; // 0x80(0x04)
	int32_t UCSSerializationIndex; // 0x84(0x04)
	char UnknownData_88_0 : 3; // 0x88(0x01)
	char bNetAddressable : 1; // 0x88(0x01)
	char bReplicates : 1; // 0x88(0x01)
	char UnknownData_88_5 : 3; // 0x88(0x01)
	char UnknownData_89_0 : 7; // 0x89(0x01)
	char bAutoActivate : 1; // 0x89(0x01)
	char bIsActive : 1; // 0x8a(0x01)
	char bEditableWhenInherited : 1; // 0x8a(0x01)
	char UnknownData_8A_2 : 1; // 0x8a(0x01)
	char bCanEverAffectNavigation : 1; // 0x8a(0x01)
	char UnknownData_8A_4 : 1; // 0x8a(0x01)
	char bIsEditorOnly : 1; // 0x8a(0x01)
	char UnknownData_8A_6 : 2; // 0x8a(0x01)
	char UnknownData_8B[0x1]; // 0x8b(0x01)
	enum class EComponentCreationMethod CreationMethod; // 0x8c(0x01)
	struct FMulticastSparseDelegate OnComponentActivated; // 0x8d(0x01)
	struct FMulticastSparseDelegate OnComponentDeactivated; // 0x8e(0x01)
	char UnknownData_8F[0x1]; // 0x8f(0x01)
	struct TArray<struct FSimpleMemberReference> UCSModifiedProperties; // 0x90(0x10)
	char UnknownData_A0[0x10]; // 0xa0(0x10)

	void ToggleActive(); // Function Engine.ActorComponent.ToggleActive
	void SetTickGroup(char NewTickGroup); // Function Engine.ActorComponent.SetTickGroup
	void SetTickableWhenPaused(bool bTickableWhenPaused); // Function Engine.ActorComponent.SetTickableWhenPaused
	void SetIsReplicated(bool ShouldReplicate); // Function Engine.ActorComponent.SetIsReplicated
	void SetComponentTickInterval(float TickInterval); // Function Engine.ActorComponent.SetComponentTickInterval
	void SetComponentTickEnabled(bool bEnabled); // Function Engine.ActorComponent.SetComponentTickEnabled
	void SetAutoActivate(bool bNewAutoActivate); // Function Engine.ActorComponent.SetAutoActivate
	void SetActive(bool bNewActive, bool bReset); // Function Engine.ActorComponent.SetActive
	void RemoveTickPrerequisiteComponent(struct UActorComponent* PrerequisiteComponent); // Function Engine.ActorComponent.RemoveTickPrerequisiteComponent
	void RemoveTickPrerequisiteActor(struct AActor* PrerequisiteActor); // Function Engine.ActorComponent.RemoveTickPrerequisiteActor
	void ReceiveTick(float DeltaSeconds); // Function Engine.ActorComponent.ReceiveTick
	void ReceiveEndPlay(char EndPlayReason); // Function Engine.ActorComponent.ReceiveEndPlay
	void ReceiveBeginPlay(); // Function Engine.ActorComponent.ReceiveBeginPlay
	void OnRep_IsActive(); // Function Engine.ActorComponent.OnRep_IsActive
	void K2_DestroyComponent(struct UObject* Object); // Function Engine.ActorComponent.K2_DestroyComponent
	bool IsComponentTickEnabled(); // Function Engine.ActorComponent.IsComponentTickEnabled
	bool IsBeingDestroyed(); // Function Engine.ActorComponent.IsBeingDestroyed
	bool IsActive(); // Function Engine.ActorComponent.IsActive
	struct AActor* GetOwner(); // Function Engine.ActorComponent.GetOwner
	float GetComponentTickInterval(); // Function Engine.ActorComponent.GetComponentTickInterval
	void Deactivate(); // Function Engine.ActorComponent.Deactivate
	bool ComponentHasTag(struct FName Tag); // Function Engine.ActorComponent.ComponentHasTag
	void AddTickPrerequisiteComponent(struct UActorComponent* PrerequisiteComponent); // Function Engine.ActorComponent.AddTickPrerequisiteComponent
	void AddTickPrerequisiteActor(struct AActor* PrerequisiteActor); // Function Engine.ActorComponent.AddTickPrerequisiteActor
	void Activate(bool bReset); // Function Engine.ActorComponent.Activate
};

// Class Engine.SceneComponent
// Size: 0x210 (Inherited: 0xb0)
struct USceneComponent : public UActorComponent {
	char UnknownData_B0[0x8]; // 0xb0(0x08)
	struct FWeakObjectPtr<struct APhysicsVolume> PhysicsVolume; // 0xb8(0x08)
	struct USceneComponent* AttachParent; // 0xc0(0x08)
	struct FName AttachSocketName; // 0xc8(0x08)
	struct TArray<struct USceneComponent*> AttachChildren; // 0xd0(0x10)
	struct TArray<struct USceneComponent*> ClientAttachedChildren; // 0xe0(0x10)
	char UnknownData_F0[0x2c]; // 0xf0(0x2c)
	struct FVector RelativeLocation; // 0x11c(0x0c)
	struct FRotator RelativeRotation; // 0x128(0x0c)
	struct FVector RelativeScale3D; // 0x134(0x0c)
	struct FVector ComponentVelocity; // 0x140(0x0c)
	char bComponentToWorldUpdated : 1; // 0x14c(0x01)
	char UnknownData_14C_1 : 1; // 0x14c(0x01)
	char bAbsoluteLocation : 1; // 0x14c(0x01)
	char bAbsoluteRotation : 1; // 0x14c(0x01)
	char bAbsoluteScale : 1; // 0x14c(0x01)
	char bVisible : 1; // 0x14c(0x01)
	char bShouldBeAttached : 1; // 0x14c(0x01)
	char bShouldSnapLocationWhenAttached : 1; // 0x14c(0x01)
	char bShouldSnapRotationWhenAttached : 1; // 0x14d(0x01)
	char bShouldUpdatePhysicsVolume : 1; // 0x14d(0x01)
	char bHiddenInGame : 1; // 0x14d(0x01)
	char bBoundsChangeTriggersStreamingDataRebuild : 1; // 0x14d(0x01)
	char bUseAttachParentBound : 1; // 0x14d(0x01)
	char UnknownData_14D_5 : 3; // 0x14d(0x01)
	char UnknownData_14E[0x1]; // 0x14e(0x01)
	char Mobility; // 0x14f(0x01)
	char DetailMode; // 0x150(0x01)
	struct FMulticastSparseDelegate PhysicsVolumeChangedDelegate; // 0x151(0x01)
	char UnknownData_152[0xbe]; // 0x152(0xbe)

	void ToggleVisibility(bool bPropagateToChildren); // Function Engine.SceneComponent.ToggleVisibility
	bool SnapTo(struct USceneComponent* InParent, struct FName InSocketName); // Function Engine.SceneComponent.SnapTo
	void SetWorldScale3D(struct FVector NewScale); // Function Engine.SceneComponent.SetWorldScale3D
	void SetVisibility(bool bNewVisibility, bool bPropagateToChildren); // Function Engine.SceneComponent.SetVisibility
	void SetShouldUpdatePhysicsVolume(bool bInShouldUpdatePhysicsVolume); // Function Engine.SceneComponent.SetShouldUpdatePhysicsVolume
	void SetRelativeScale3D(struct FVector NewScale3D); // Function Engine.SceneComponent.SetRelativeScale3D
	void SetMobility(char NewMobility); // Function Engine.SceneComponent.SetMobility
	void SetHiddenInGame(bool NewHidden, bool bPropagateToChildren); // Function Engine.SceneComponent.SetHiddenInGame
	void SetAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale); // Function Engine.SceneComponent.SetAbsolute
	void ResetRelativeTransform(); // Function Engine.SceneComponent.ResetRelativeTransform
	void OnRep_Visibility(bool OldValue); // Function Engine.SceneComponent.OnRep_Visibility
	void OnRep_Transform(); // Function Engine.SceneComponent.OnRep_Transform
	void OnRep_AttachSocketName(); // Function Engine.SceneComponent.OnRep_AttachSocketName
	void OnRep_AttachParent(); // Function Engine.SceneComponent.OnRep_AttachParent
	void OnRep_AttachChildren(); // Function Engine.SceneComponent.OnRep_AttachChildren
	void K2_SetWorldTransform(struct FTransform NewTransform, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_SetWorldTransform
	void K2_SetWorldRotation(struct FRotator NewRotation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_SetWorldRotation
	void K2_SetWorldLocationAndRotation(struct FVector NewLocation, struct FRotator NewRotation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_SetWorldLocationAndRotation
	void K2_SetWorldLocation(struct FVector NewLocation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_SetWorldLocation
	void K2_SetRelativeTransform(struct FTransform NewTransform, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_SetRelativeTransform
	void K2_SetRelativeRotation(struct FRotator NewRotation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_SetRelativeRotation
	void K2_SetRelativeLocationAndRotation(struct FVector NewLocation, struct FRotator NewRotation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_SetRelativeLocationAndRotation
	void K2_SetRelativeLocation(struct FVector NewLocation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_SetRelativeLocation
	struct FTransform K2_GetComponentToWorld(); // Function Engine.SceneComponent.K2_GetComponentToWorld
	struct FVector K2_GetComponentScale(); // Function Engine.SceneComponent.K2_GetComponentScale
	struct FRotator K2_GetComponentRotation(); // Function Engine.SceneComponent.K2_GetComponentRotation
	struct FVector K2_GetComponentLocation(); // Function Engine.SceneComponent.K2_GetComponentLocation
	void K2_DetachFromComponent(enum class EDetachmentRule LocationRule, enum class EDetachmentRule RotationRule, enum class EDetachmentRule ScaleRule, bool bCallModify); // Function Engine.SceneComponent.K2_DetachFromComponent
	bool K2_AttachToComponent(struct USceneComponent* Parent, struct FName SocketName, enum class EAttachmentRule LocationRule, enum class EAttachmentRule RotationRule, enum class EAttachmentRule ScaleRule, bool bWeldSimulatedBodies); // Function Engine.SceneComponent.K2_AttachToComponent
	bool K2_AttachTo(struct USceneComponent* InParent, struct FName InSocketName, char AttachType, bool bWeldSimulatedBodies); // Function Engine.SceneComponent.K2_AttachTo
	void K2_AddWorldTransform(struct FTransform DeltaTransform, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_AddWorldTransform
	void K2_AddWorldRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_AddWorldRotation
	void K2_AddWorldOffset(struct FVector DeltaLocation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_AddWorldOffset
	void K2_AddRelativeRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_AddRelativeRotation
	void K2_AddRelativeLocation(struct FVector DeltaLocation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_AddRelativeLocation
	void K2_AddLocalTransform(struct FTransform DeltaTransform, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_AddLocalTransform
	void K2_AddLocalRotation(struct FRotator DeltaRotation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_AddLocalRotation
	void K2_AddLocalOffset(struct FVector DeltaLocation, bool bSweep, struct FHitResult SweepHitResult, bool bTeleport); // Function Engine.SceneComponent.K2_AddLocalOffset
	bool IsVisible(); // Function Engine.SceneComponent.IsVisible
	bool IsSimulatingPhysics(struct FName BoneName); // Function Engine.SceneComponent.IsSimulatingPhysics
	bool IsAnySimulatingPhysics(); // Function Engine.SceneComponent.IsAnySimulatingPhysics
	struct FVector GetUpVector(); // Function Engine.SceneComponent.GetUpVector
	struct FTransform GetSocketTransform(struct FName InSocketName, char TransformSpace); // Function Engine.SceneComponent.GetSocketTransform
	struct FRotator GetSocketRotation(struct FName InSocketName); // Function Engine.SceneComponent.GetSocketRotation
	struct FQuat GetSocketQuaternion(struct FName InSocketName); // Function Engine.SceneComponent.GetSocketQuaternion
	struct FVector GetSocketLocation(struct FName InSocketName); // Function Engine.SceneComponent.GetSocketLocation
	bool GetShouldUpdatePhysicsVolume(); // Function Engine.SceneComponent.GetShouldUpdatePhysicsVolume
	struct FVector GetRightVector(); // Function Engine.SceneComponent.GetRightVector
	struct FTransform GetRelativeTransform(); // Function Engine.SceneComponent.GetRelativeTransform
	struct APhysicsVolume* GetPhysicsVolume(); // Function Engine.SceneComponent.GetPhysicsVolume
	void GetParentComponents(struct TArray<struct USceneComponent*> Parents); // Function Engine.SceneComponent.GetParentComponents
	int32_t GetNumChildrenComponents(); // Function Engine.SceneComponent.GetNumChildrenComponents
	struct FVector GetForwardVector(); // Function Engine.SceneComponent.GetForwardVector
	struct FVector GetComponentVelocity(); // Function Engine.SceneComponent.GetComponentVelocity
	void GetChildrenComponents(bool bIncludeAllDescendants, struct TArray<struct USceneComponent*> Children); // Function Engine.SceneComponent.GetChildrenComponents
	struct USceneComponent* GetChildComponent(int32_t ChildIndex); // Function Engine.SceneComponent.GetChildComponent
	struct FName GetAttachSocketName(); // Function Engine.SceneComponent.GetAttachSocketName
	struct USceneComponent* GetAttachParent(); // Function Engine.SceneComponent.GetAttachParent
	struct TArray<struct FName> GetAllSocketNames(); // Function Engine.SceneComponent.GetAllSocketNames
	bool DoesSocketExist(struct FName InSocketName); // Function Engine.SceneComponent.DoesSocketExist
	void DetachFromParent(bool bMaintainWorldPosition, bool bCallModify); // Function Engine.SceneComponent.DetachFromParent
};

// Class Engine.PrimitiveComponent
// Size: 0x430 (Inherited: 0x210)
struct UPrimitiveComponent : public USceneComponent {
	float MinDrawDistance; // 0x210(0x04)
	float LDMaxDrawDistance; // 0x214(0x04)
	float CachedMaxDrawDistance; // 0x218(0x04)
	char DepthPriorityGroup; // 0x21c(0x01)
	char ViewOwnerDepthPriorityGroup; // 0x21d(0x01)
	char IndirectLightingCacheQuality; // 0x21e(0x01)
	enum class ELightmapType LightmapType; // 0x21f(0x01)
	char bUseMaxLODAsImposter : 1; // 0x220(0x01)
	char bBatchImpostersAsInstances : 1; // 0x220(0x01)
	char bNeverDistanceCull : 1; // 0x220(0x01)
	char bForceLocalLighting : 1; // 0x220(0x01)
	char UnknownData_220_4 : 4; // 0x220(0x01)
	char bAlwaysCreatePhysicsState : 1; // 0x221(0x01)
	char bGenerateOverlapEvents : 1; // 0x221(0x01)
	char bMultiBodyOverlap : 1; // 0x221(0x01)
	char bTraceComplexOnMove : 1; // 0x221(0x01)
	char bReturnMaterialOnMove : 1; // 0x221(0x01)
	char bUseViewOwnerDepthPriorityGroup : 1; // 0x221(0x01)
	char bAllowCullDistanceVolume : 1; // 0x221(0x01)
	char bHasMotionBlurVelocityMeshes : 1; // 0x221(0x01)
	char bVisibleInReflectionCaptures : 1; // 0x222(0x01)
	char bVisibleInRayTracing : 1; // 0x222(0x01)
	char bRenderInMainPass : 1; // 0x222(0x01)
	char bRenderInDepthPass : 1; // 0x222(0x01)
	char bReceivesDecals : 1; // 0x222(0x01)
	char bOwnerNoSee : 1; // 0x222(0x01)
	char bOnlyOwnerSee : 1; // 0x222(0x01)
	char bTreatAsBackgroundForOcclusion : 1; // 0x222(0x01)
	char bUseAsOccluder : 1; // 0x223(0x01)
	char bSelectable : 1; // 0x223(0x01)
	char bForceMipStreaming : 1; // 0x223(0x01)
	char bHasPerInstanceHitProxies : 1; // 0x223(0x01)
	char CastShadow : 1; // 0x223(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x223(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x223(0x01)
	char bCastDynamicShadow : 1; // 0x223(0x01)
	char bCastStaticShadow : 1; // 0x224(0x01)
	char bCastVolumetricTranslucentShadow : 1; // 0x224(0x01)
	char bSelfShadowOnly : 1; // 0x224(0x01)
	char bCastFarShadow : 1; // 0x224(0x01)
	char bCastInsetShadow : 1; // 0x224(0x01)
	char bCastCinematicShadow : 1; // 0x224(0x01)
	char bCastHiddenShadow : 1; // 0x224(0x01)
	char bCastShadowAsTwoSided : 1; // 0x224(0x01)
	char bShouldNotReceiveCapsuleShadows : 1; // 0x225(0x01)
	char bLightAsIfStatic : 1; // 0x225(0x01)
	char bLightAttachmentsAsGroup : 1; // 0x225(0x01)
	char bExcludeFromLightAttachmentGroup : 1; // 0x225(0x01)
	char bReceiveMobileCSMShadows : 1; // 0x225(0x01)
	char bSingleSampleShadowFromStationaryLights : 1; // 0x225(0x01)
	char bIgnoreRadialImpulse : 1; // 0x225(0x01)
	char bIgnoreRadialForce : 1; // 0x225(0x01)
	char bApplyImpulseOnDamage : 1; // 0x226(0x01)
	char bReplicatePhysicsToAutonomousProxy : 1; // 0x226(0x01)
	char bFillCollisionUnderneathForNavmesh : 1; // 0x226(0x01)
	char AlwaysLoadOnClient : 1; // 0x226(0x01)
	char AlwaysLoadOnServer : 1; // 0x226(0x01)
	char bUseEditorCompositing : 1; // 0x226(0x01)
	char bRenderCustomDepth : 1; // 0x226(0x01)
	char bOutlineSkipsDepthTest : 1; // 0x226(0x01)
	char bOutlineIsCutout : 1; // 0x227(0x01)
	char bExcludeFromContributionCulling : 1; // 0x227(0x01)
	char UnknownData_227_2 : 6; // 0x227(0x01)
	char bHasCustomNavigableGeometry; // 0x228(0x01)
	char UnknownData_229[0x1]; // 0x229(0x01)
	char CanCharacterStepUpOn; // 0x22a(0x01)
	struct FLightingChannels LightingChannels; // 0x22b(0x01)
	enum class ERendererStencilMask CustomDepthStencilWriteMask; // 0x22c(0x01)
	char UnknownData_22D[0x3]; // 0x22d(0x03)
	int32_t CustomDepthStencilValue; // 0x230(0x04)
	char UnknownData_234[0x4]; // 0x234(0x04)
	struct FCustomPrimitiveData CustomPrimitiveData; // 0x238(0x10)
	struct FCustomPrimitiveData CustomPrimitiveDataInternal; // 0x248(0x10)
	char UnknownData_258[0x8]; // 0x258(0x08)
	int32_t TranslucencySortPriority; // 0x260(0x04)
	int32_t VisibilityId; // 0x264(0x04)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x268(0x10)
	int8_t VirtualTextureLodBias; // 0x278(0x01)
	int8_t VirtualTextureCullMips; // 0x279(0x01)
	int8_t VirtualTextureMinCoverage; // 0x27a(0x01)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x27b(0x01)
	char UnknownData_27C[0x4]; // 0x27c(0x04)
	float LpvBiasMultiplier; // 0x280(0x04)
	float OutlineThicknessMultiplier; // 0x284(0x04)
	struct FLinearColor OutlineColor; // 0x288(0x10)
	float OutlineZFadeMin; // 0x298(0x04)
	float OutlineZFadeMax; // 0x29c(0x04)
	char UnknownData_2A0[0x8]; // 0x2a0(0x08)
	float BoundsScale; // 0x2a8(0x04)
	char UnknownData_2AC[0xc]; // 0x2ac(0x0c)
	struct TArray<struct AActor*> MoveIgnoreActors; // 0x2b8(0x10)
	struct TArray<struct UPrimitiveComponent*> MoveIgnoreComponents; // 0x2c8(0x10)
	char UnknownData_2D8[0x10]; // 0x2d8(0x10)
	struct FBodyInstance BodyInstance; // 0x2e8(0x110)
	struct FMulticastSparseDelegate OnComponentHit; // 0x3f8(0x01)
	struct FMulticastSparseDelegate OnComponentBeginOverlap; // 0x3f9(0x01)
	struct FMulticastSparseDelegate OnComponentEndOverlap; // 0x3fa(0x01)
	struct FMulticastSparseDelegate OnComponentWake; // 0x3fb(0x01)
	struct FMulticastSparseDelegate OnComponentSleep; // 0x3fc(0x01)
	char UnknownData_3FD[0x1]; // 0x3fd(0x01)
	struct FMulticastSparseDelegate OnBeginCursorOver; // 0x3fe(0x01)
	struct FMulticastSparseDelegate OnEndCursorOver; // 0x3ff(0x01)
	struct FMulticastSparseDelegate OnClicked; // 0x400(0x01)
	struct FMulticastSparseDelegate OnReleased; // 0x401(0x01)
	struct FMulticastSparseDelegate OnInputTouchBegin; // 0x402(0x01)
	struct FMulticastSparseDelegate OnInputTouchEnd; // 0x403(0x01)
	struct FMulticastSparseDelegate OnInputTouchEnter; // 0x404(0x01)
	struct FMulticastSparseDelegate OnInputTouchLeave; // 0x405(0x01)
	char UnknownData_406[0x1a]; // 0x406(0x1a)
	struct UPrimitiveComponent* LODParentPrimitive; // 0x420(0x08)
	float CustomFOV; // 0x428(0x04)
	char UnknownData_42C[0x4]; // 0x42c(0x04)

	bool WasRecentlyRendered(float Tolerance); // Function Engine.PrimitiveComponent.WasRecentlyRendered
	void WakeRigidBody(struct FName BoneName); // Function Engine.PrimitiveComponent.WakeRigidBody
	void WakeAllRigidBodies(); // Function Engine.PrimitiveComponent.WakeAllRigidBodies
	void SetWalkableSlopeOverride(struct FWalkableSlopeOverride NewOverride); // Function Engine.PrimitiveComponent.SetWalkableSlopeOverride
	void SetUseCCD(bool InUseCCD, struct FName BoneName); // Function Engine.PrimitiveComponent.SetUseCCD
	void SetTranslucentSortPriority(int32_t NewTranslucentSortPriority); // Function Engine.PrimitiveComponent.SetTranslucentSortPriority
	void SetSingleSampleShadowFromStationaryLights(bool bNewSingleSampleShadowFromStationaryLights); // Function Engine.PrimitiveComponent.SetSingleSampleShadowFromStationaryLights
	void SetSimulatePhysics(bool bSimulate); // Function Engine.PrimitiveComponent.SetSimulatePhysics
	void SetRenderInMainPass(bool bValue); // Function Engine.PrimitiveComponent.SetRenderInMainPass
	void SetRenderCustomDepth(bool bValue); // Function Engine.PrimitiveComponent.SetRenderCustomDepth
	void SetReceivesDecals(bool bNewReceivesDecals); // Function Engine.PrimitiveComponent.SetReceivesDecals
	void SetPhysMaterialOverride(struct UPhysicalMaterial* NewPhysMaterial); // Function Engine.PrimitiveComponent.SetPhysMaterialOverride
	void SetPhysicsMaxAngularVelocityInRadians(float NewMaxAngVel, bool bAddToCurrent, struct FName BoneName); // Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInRadians
	void SetPhysicsMaxAngularVelocityInDegrees(float NewMaxAngVel, bool bAddToCurrent, struct FName BoneName); // Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInDegrees
	void SetPhysicsMaxAngularVelocity(float NewMaxAngVel, bool bAddToCurrent, struct FName BoneName); // Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity
	void SetPhysicsLinearVelocity(struct FVector NewVel, bool bAddToCurrent, struct FName BoneName); // Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity
	void SetPhysicsAngularVelocityInRadians(struct FVector NewAngVel, bool bAddToCurrent, struct FName BoneName); // Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInRadians
	void SetPhysicsAngularVelocityInDegrees(struct FVector NewAngVel, bool bAddToCurrent, struct FName BoneName); // Function Engine.PrimitiveComponent.SetPhysicsAngularVelocityInDegrees
	void SetPhysicsAngularVelocity(struct FVector NewAngVel, bool bAddToCurrent, struct FName BoneName); // Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity
	void SetOwnerNoSee(bool bNewOwnerNoSee); // Function Engine.PrimitiveComponent.SetOwnerNoSee
	void SetOutlineZFadeMin(float InOutlineZFadeMin); // Function Engine.PrimitiveComponent.SetOutlineZFadeMin
	void SetOutlineZFadeMax(float InOutlineZFadeMax); // Function Engine.PrimitiveComponent.SetOutlineZFadeMax
	void SetOutlineThicknessMultiplier(float InThicknessMultiplier); // Function Engine.PrimitiveComponent.SetOutlineThicknessMultiplier
	void SetOutlineSkipsDepthTest(bool bInSkipsDepthTest); // Function Engine.PrimitiveComponent.SetOutlineSkipsDepthTest
	void SetOutlineIsCutout(bool bInOutlineIsCutout); // Function Engine.PrimitiveComponent.SetOutlineIsCutout
	void SetOutlineColor(struct FLinearColor InColor); // Function Engine.PrimitiveComponent.SetOutlineColor
	void SetOnlyOwnerSee(bool bNewOnlyOwnerSee); // Function Engine.PrimitiveComponent.SetOnlyOwnerSee
	void SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision); // Function Engine.PrimitiveComponent.SetNotifyRigidBodyCollision
	void SetMaterialByName(struct FName MaterialSlotName, struct UMaterialInterface* Material); // Function Engine.PrimitiveComponent.SetMaterialByName
	void SetMaterial(int32_t ElementIndex, struct UMaterialInterface* Material); // Function Engine.PrimitiveComponent.SetMaterial
	void SetMassScale(struct FName BoneName, float InMassScale); // Function Engine.PrimitiveComponent.SetMassScale
	void SetMassOverrideInKg(struct FName BoneName, float MassInKg, bool bOverrideMass); // Function Engine.PrimitiveComponent.SetMassOverrideInKg
	void SetLinearDamping(float InDamping); // Function Engine.PrimitiveComponent.SetLinearDamping
	void SetLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2); // Function Engine.PrimitiveComponent.SetLightingChannels
	void SetLightAttachmentsAsGroup(bool bInLightAttachmentsAsGroup); // Function Engine.PrimitiveComponent.SetLightAttachmentsAsGroup
	void SetGenerateOverlapEvents(bool bInGenerateOverlapEvents); // Function Engine.PrimitiveComponent.SetGenerateOverlapEvents
	void SetExcludeFromLightAttachmentGroup(bool bInExcludeFromLightAttachmentGroup); // Function Engine.PrimitiveComponent.SetExcludeFromLightAttachmentGroup
	void SetEnableGravity(bool bGravityEnabled); // Function Engine.PrimitiveComponent.SetEnableGravity
	void SetCustomPrimitiveDataVector4(int32_t DataIndex, struct FVector4 Value); // Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector4
	void SetCustomPrimitiveDataVector3(int32_t DataIndex, struct FVector Value); // Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector3
	void SetCustomPrimitiveDataVector2(int32_t DataIndex, struct FVector2D Value); // Function Engine.PrimitiveComponent.SetCustomPrimitiveDataVector2
	void SetCustomPrimitiveDataFloat(int32_t DataIndex, float Value); // Function Engine.PrimitiveComponent.SetCustomPrimitiveDataFloat
	void SetCustomFOV(float NewFOV); // Function Engine.PrimitiveComponent.SetCustomFOV
	void SetCustomDepthStencilWriteMask(enum class ERendererStencilMask WriteMaskBit); // Function Engine.PrimitiveComponent.SetCustomDepthStencilWriteMask
	void SetCustomDepthStencilValue(int32_t Value); // Function Engine.PrimitiveComponent.SetCustomDepthStencilValue
	void SetCullDistance(float NewCullDistance); // Function Engine.PrimitiveComponent.SetCullDistance
	void SetConstraintMode(char ConstraintMode); // Function Engine.PrimitiveComponent.SetConstraintMode
	void SetCollisionResponseToChannel(char Channel, char NewResponse); // Function Engine.PrimitiveComponent.SetCollisionResponseToChannel
	void SetCollisionResponseToAllChannels(char NewResponse); // Function Engine.PrimitiveComponent.SetCollisionResponseToAllChannels
	void SetCollisionProfileName(struct FName InCollisionProfileName, bool bUpdateOverlaps); // Function Engine.PrimitiveComponent.SetCollisionProfileName
	void SetCollisionObjectType(char Channel); // Function Engine.PrimitiveComponent.SetCollisionObjectType
	void SetCollisionEnabled(char NewType); // Function Engine.PrimitiveComponent.SetCollisionEnabled
	void SetCenterOfMass(struct FVector CenterOfMassOffset, struct FName BoneName); // Function Engine.PrimitiveComponent.SetCenterOfMass
	void SetCastShadow(bool NewCastShadow); // Function Engine.PrimitiveComponent.SetCastShadow
	void SetCastInsetShadow(bool bInCastInsetShadow); // Function Engine.PrimitiveComponent.SetCastInsetShadow
	void SetBoundsScale(float NewBoundsScale); // Function Engine.PrimitiveComponent.SetBoundsScale
	void SetAngularDamping(float InDamping); // Function Engine.PrimitiveComponent.SetAngularDamping
	void SetAllUseCCD(bool InUseCCD); // Function Engine.PrimitiveComponent.SetAllUseCCD
	void SetAllPhysicsLinearVelocity(struct FVector NewVel, bool bAddToCurrent); // Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity
	void SetAllPhysicsAngularVelocityInRadians(struct FVector NewAngVel, bool bAddToCurrent); // Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInRadians
	void SetAllPhysicsAngularVelocityInDegrees(struct FVector NewAngVel, bool bAddToCurrent); // Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInDegrees
	void SetAllMassScale(float InMassScale); // Function Engine.PrimitiveComponent.SetAllMassScale
	struct FVector ScaleByMomentOfInertia(struct FVector InputVector, struct FName BoneName); // Function Engine.PrimitiveComponent.ScaleByMomentOfInertia
	void PutRigidBodyToSleep(struct FName BoneName); // Function Engine.PrimitiveComponent.PutRigidBodyToSleep
	bool K2_SphereTraceComponent(struct FVector TraceStart, struct FVector TraceEnd, float SphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, struct FVector HitLocation, struct FVector HitNormal, struct FName BoneName, struct FHitResult OutHit); // Function Engine.PrimitiveComponent.K2_SphereTraceComponent
	bool K2_SphereOverlapComponent(struct FVector InSphereCentre, float InSphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, struct FVector HitLocation, struct FVector HitNormal, struct FName BoneName, struct FHitResult OutHit); // Function Engine.PrimitiveComponent.K2_SphereOverlapComponent
	bool K2_LineTraceComponent(struct FVector TraceStart, struct FVector TraceEnd, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, struct FVector HitLocation, struct FVector HitNormal, struct FName BoneName, struct FHitResult OutHit); // Function Engine.PrimitiveComponent.K2_LineTraceComponent
	bool K2_IsQueryCollisionEnabled(); // Function Engine.PrimitiveComponent.K2_IsQueryCollisionEnabled
	bool K2_IsPhysicsCollisionEnabled(); // Function Engine.PrimitiveComponent.K2_IsPhysicsCollisionEnabled
	bool K2_IsCollisionEnabled(); // Function Engine.PrimitiveComponent.K2_IsCollisionEnabled
	bool K2_BoxOverlapComponent(struct FVector InBoxCentre, struct FBox InBox, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, struct FVector HitLocation, struct FVector HitNormal, struct FName BoneName, struct FHitResult OutHit); // Function Engine.PrimitiveComponent.K2_BoxOverlapComponent
	bool IsOverlappingComponent(struct UPrimitiveComponent* OtherComp); // Function Engine.PrimitiveComponent.IsOverlappingComponent
	bool IsOverlappingActor(struct AActor* Other); // Function Engine.PrimitiveComponent.IsOverlappingActor
	bool IsGravityEnabled(); // Function Engine.PrimitiveComponent.IsGravityEnabled
	bool IsAnyRigidBodyAwake(); // Function Engine.PrimitiveComponent.IsAnyRigidBodyAwake
	void IgnoreComponentWhenMoving(struct UPrimitiveComponent* Component, bool bShouldIgnore); // Function Engine.PrimitiveComponent.IgnoreComponentWhenMoving
	void IgnoreActorWhenMoving(struct AActor* Actor, bool bShouldIgnore); // Function Engine.PrimitiveComponent.IgnoreActorWhenMoving
	void HideOutline(); // Function Engine.PrimitiveComponent.HideOutline
	struct FWalkableSlopeOverride GetWalkableSlopeOverride(); // Function Engine.PrimitiveComponent.GetWalkableSlopeOverride
	struct FVector GetPhysicsLinearVelocityAtPoint(struct FVector Point, struct FName BoneName); // Function Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint
	struct FVector GetPhysicsLinearVelocity(struct FName BoneName); // Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity
	struct FVector GetPhysicsAngularVelocityInRadians(struct FName BoneName); // Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInRadians
	struct FVector GetPhysicsAngularVelocityInDegrees(struct FName BoneName); // Function Engine.PrimitiveComponent.GetPhysicsAngularVelocityInDegrees
	struct FVector GetPhysicsAngularVelocity(struct FName BoneName); // Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity
	void GetOverlappingComponents(struct TArray<struct UPrimitiveComponent*> OutOverlappingComponents); // Function Engine.PrimitiveComponent.GetOverlappingComponents
	void GetOverlappingActors(struct TArray<struct AActor*> OverlappingActors, struct AActor* ClassFilter); // Function Engine.PrimitiveComponent.GetOverlappingActors
	int32_t GetNumMaterials(); // Function Engine.PrimitiveComponent.GetNumMaterials
	struct UMaterialInterface* GetMaterialFromCollisionFaceIndex(int32_t FaceIndex, int32_t SectionIndex); // Function Engine.PrimitiveComponent.GetMaterialFromCollisionFaceIndex
	struct UMaterialInterface* GetMaterial(int32_t ElementIndex); // Function Engine.PrimitiveComponent.GetMaterial
	float GetMassScale(struct FName BoneName); // Function Engine.PrimitiveComponent.GetMassScale
	float GetMass(); // Function Engine.PrimitiveComponent.GetMass
	float GetLinearDamping(); // Function Engine.PrimitiveComponent.GetLinearDamping
	struct FVector GetInertiaTensor(struct FName BoneName); // Function Engine.PrimitiveComponent.GetInertiaTensor
	bool GetGenerateOverlapEvents(); // Function Engine.PrimitiveComponent.GetGenerateOverlapEvents
	char GetCollisionResponseToChannel(char Channel); // Function Engine.PrimitiveComponent.GetCollisionResponseToChannel
	struct FName GetCollisionProfileName(); // Function Engine.PrimitiveComponent.GetCollisionProfileName
	char GetCollisionObjectType(); // Function Engine.PrimitiveComponent.GetCollisionObjectType
	char GetCollisionEnabled(); // Function Engine.PrimitiveComponent.GetCollisionEnabled
	float GetClosestPointOnCollision(struct FVector Point, struct FVector OutPointOnBody, struct FName BoneName); // Function Engine.PrimitiveComponent.GetClosestPointOnCollision
	struct FVector GetCenterOfMass(struct FName BoneName); // Function Engine.PrimitiveComponent.GetCenterOfMass
	float GetAngularDamping(); // Function Engine.PrimitiveComponent.GetAngularDamping
	struct UMaterialInstanceDynamic* CreateDynamicMaterialInstance(int32_t ElementIndex, struct UMaterialInterface* SourceMaterial, struct FName OptionalName); // Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance
	struct UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamicFromMaterial(int32_t ElementIndex, struct UMaterialInterface* Parent); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial
	struct UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamic(int32_t ElementIndex); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic
	struct TArray<struct UPrimitiveComponent*> CopyArrayOfMoveIgnoreComponents(); // Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreComponents
	struct TArray<struct AActor*> CopyArrayOfMoveIgnoreActors(); // Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors
	void ClearMoveIgnoreComponents(); // Function Engine.PrimitiveComponent.ClearMoveIgnoreComponents
	void ClearMoveIgnoreActors(); // Function Engine.PrimitiveComponent.ClearMoveIgnoreActors
	bool CanCharacterStepUp(struct APawn* Pawn); // Function Engine.PrimitiveComponent.CanCharacterStepUp
	void AddTorqueInRadians(struct FVector Torque, struct FName BoneName, bool bAccelChange); // Function Engine.PrimitiveComponent.AddTorqueInRadians
	void AddTorqueInDegrees(struct FVector Torque, struct FName BoneName, bool bAccelChange); // Function Engine.PrimitiveComponent.AddTorqueInDegrees
	void AddTorque(struct FVector Torque, struct FName BoneName, bool bAccelChange); // Function Engine.PrimitiveComponent.AddTorque
	void AddRadialImpulse(struct FVector Origin, float Radius, float Strength, char Falloff, bool bVelChange); // Function Engine.PrimitiveComponent.AddRadialImpulse
	void AddRadialForce(struct FVector Origin, float Radius, float Strength, char Falloff, bool bAccelChange); // Function Engine.PrimitiveComponent.AddRadialForce
	void AddImpulseAtLocation(struct FVector Impulse, struct FVector Location, struct FName BoneName); // Function Engine.PrimitiveComponent.AddImpulseAtLocation
	void AddImpulse(struct FVector Impulse, struct FName BoneName, bool bVelChange); // Function Engine.PrimitiveComponent.AddImpulse
	void AddForceAtLocationLocal(struct FVector Force, struct FVector Location, struct FName BoneName); // Function Engine.PrimitiveComponent.AddForceAtLocationLocal
	void AddForceAtLocation(struct FVector Force, struct FVector Location, struct FName BoneName); // Function Engine.PrimitiveComponent.AddForceAtLocation
	void AddForce(struct FVector Force, struct FName BoneName, bool bAccelChange); // Function Engine.PrimitiveComponent.AddForce
	void AddAngularImpulseInRadians(struct FVector Impulse, struct FName BoneName, bool bVelChange); // Function Engine.PrimitiveComponent.AddAngularImpulseInRadians
	void AddAngularImpulseInDegrees(struct FVector Impulse, struct FName BoneName, bool bVelChange); // Function Engine.PrimitiveComponent.AddAngularImpulseInDegrees
	void AddAngularImpulse(struct FVector Impulse, struct FName BoneName, bool bVelChange); // Function Engine.PrimitiveComponent.AddAngularImpulse
};

// Class Engine.MeshComponent
// Size: 0x460 (Inherited: 0x430)
struct UMeshComponent : public UPrimitiveComponent {
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x430(0x10)
	char UnknownData_440[0x10]; // 0x440(0x10)
	char bEnableMaterialParameterCaching : 1; // 0x450(0x01)
	char UnknownData_450_1 : 7; // 0x450(0x01)
	char UnknownData_451[0xf]; // 0x451(0x0f)

	void SetVectorParameterValueOnMaterials(struct FName ParameterName, struct FVector ParameterValue); // Function Engine.MeshComponent.SetVectorParameterValueOnMaterials
	void SetScalarParameterValueOnMaterials(struct FName ParameterName, float ParameterValue); // Function Engine.MeshComponent.SetScalarParameterValueOnMaterials
	void PrestreamTextures(float Seconds, bool bPrioritizeCharacterTextures, int32_t CinematicTextureGroups); // Function Engine.MeshComponent.PrestreamTextures
	bool IsMaterialSlotNameValid(struct FName MaterialSlotName); // Function Engine.MeshComponent.IsMaterialSlotNameValid
	struct TArray<struct FName> GetMaterialSlotNames(); // Function Engine.MeshComponent.GetMaterialSlotNames
	struct TArray<struct UMaterialInterface*> GetMaterials(); // Function Engine.MeshComponent.GetMaterials
	int32_t GetMaterialIndex(struct FName MaterialSlotName); // Function Engine.MeshComponent.GetMaterialIndex
};

// Class Engine.SkinnedMeshComponent
// Size: 0x670 (Inherited: 0x460)
struct USkinnedMeshComponent : public UMeshComponent {
	struct USkeletalMesh* SkeletalMesh; // 0x458(0x08)
	struct FWeakObjectPtr<struct USkinnedMeshComponent> MasterPoseComponent; // 0x460(0x08)
	struct TArray<enum class ESkinCacheUsage> SkinCacheUsage; // 0x468(0x10)
	char UnknownData_480[0xc8]; // 0x480(0xc8)
	bool bSuppressSocketByNameWarnings; // 0x548(0x01)
	char UnknownData_549[0x2f]; // 0x549(0x2f)
	struct UPhysicsAsset* PhysicsAssetOverride; // 0x578(0x08)
	int32_t ForcedLodModel; // 0x580(0x04)
	int32_t MinLodModel; // 0x584(0x04)
	char UnknownData_588[0x8]; // 0x588(0x08)
	float StreamingDistanceMultiplier; // 0x590(0x04)
	char UnknownData_594[0xc]; // 0x594(0x0c)
	struct TArray<struct FSkelMeshComponentLODInfo> LODInfo; // 0x5a0(0x10)
	char UnknownData_5B0[0x24]; // 0x5b0(0x24)
	enum class EVisibilityBasedAnimTickOption VisibilityBasedAnimTickOption; // 0x5d4(0x01)
	char UnknownData_5D5[0x1]; // 0x5d5(0x01)
	char UnknownData_5D6_0 : 2; // 0x5d6(0x01)
	char bOverrideMinLod : 1; // 0x5d6(0x01)
	char bUseBoundsFromMasterPoseComponent : 1; // 0x5d6(0x01)
	char bForceWireframe : 1; // 0x5d6(0x01)
	char bDisplayBones : 1; // 0x5d6(0x01)
	char bDisableMorphTarget : 1; // 0x5d6(0x01)
	char bHideSkin : 1; // 0x5d6(0x01)
	char bPerBoneMotionBlur : 1; // 0x5d7(0x01)
	char bComponentUseFixedSkelBounds : 1; // 0x5d7(0x01)
	char bConsiderAllBodiesForBounds : 1; // 0x5d7(0x01)
	char bSyncAttachParentLOD : 1; // 0x5d7(0x01)
	char bCanHighlightSelectedSections : 1; // 0x5d7(0x01)
	char bRecentlyRendered : 1; // 0x5d7(0x01)
	char bCastCapsuleDirectShadow : 1; // 0x5d7(0x01)
	char bCastCapsuleIndirectShadow : 1; // 0x5d7(0x01)
	char bCPUSkinning : 1; // 0x5d8(0x01)
	char bEnableUpdateRateOptimizations : 1; // 0x5d8(0x01)
	char bDisplayDebugUpdateRateOptimizations : 1; // 0x5d8(0x01)
	char bRenderStatic : 1; // 0x5d8(0x01)
	char bIgnoreMasterPoseComponentLOD : 1; // 0x5d8(0x01)
	char UnknownData_5D8_5 : 2; // 0x5d8(0x01)
	char bCachedLocalBoundsUpToDate : 1; // 0x5d8(0x01)
	char UnknownData_5D9_0 : 1; // 0x5d9(0x01)
	char bForceMeshObjectUpdate : 1; // 0x5d9(0x01)
	char UnknownData_5D9_2 : 6; // 0x5d9(0x01)
	char UnknownData_5DA[0x2]; // 0x5da(0x02)
	float CapsuleIndirectShadowMinVisibility; // 0x5dc(0x04)
	char UnknownData_5E0[0x10]; // 0x5e0(0x10)
	struct FBoxSphereBounds CachedWorldSpaceBounds; // 0x5f0(0x1c)
	char UnknownData_60C[0x4]; // 0x60c(0x04)
	struct FMatrix CachedWorldToLocalTransform; // 0x610(0x40)
	char UnknownData_650[0x20]; // 0x650(0x20)

	void UnloadSkinWeightProfile(struct FName InProfileName); // Function Engine.SkinnedMeshComponent.UnloadSkinWeightProfile
	void UnHideBoneByName(struct FName BoneName); // Function Engine.SkinnedMeshComponent.UnHideBoneByName
	void TransformToBoneSpace(struct FName BoneName, struct FVector InPosition, struct FRotator InRotation, struct FVector OutPosition, struct FRotator OutRotation); // Function Engine.SkinnedMeshComponent.TransformToBoneSpace
	void TransformFromBoneSpace(struct FName BoneName, struct FVector InPosition, struct FRotator InRotation, struct FVector OutPosition, struct FRotator OutRotation); // Function Engine.SkinnedMeshComponent.TransformFromBoneSpace
	void ShowMaterialSection(int32_t MaterialID, int32_t SectionIndex, bool bShow, int32_t LODIndex); // Function Engine.SkinnedMeshComponent.ShowMaterialSection
	void ShowAllMaterialSections(int32_t LODIndex); // Function Engine.SkinnedMeshComponent.ShowAllMaterialSections
	void SetVertexColorOverride_LinearColor(int32_t LODIndex, struct TArray<struct FLinearColor> VertexColors); // Function Engine.SkinnedMeshComponent.SetVertexColorOverride_LinearColor
	bool SetSkinWeightProfile(struct FName InProfileName); // Function Engine.SkinnedMeshComponent.SetSkinWeightProfile
	void SetSkinWeightOverride(int32_t LODIndex, struct TArray<struct FSkelMeshSkinWeightInfo> SkinWeights); // Function Engine.SkinnedMeshComponent.SetSkinWeightOverride
	void SetSkeletalMesh(struct USkeletalMesh* NewMesh, bool bReinitPose); // Function Engine.SkinnedMeshComponent.SetSkeletalMesh
	void SetRenderStatic(bool bNewValue); // Function Engine.SkinnedMeshComponent.SetRenderStatic
	void SetPhysicsAsset(struct UPhysicsAsset* NewPhysicsAsset, bool bForceReInit); // Function Engine.SkinnedMeshComponent.SetPhysicsAsset
	void SetMinLOD(int32_t InNewMinLOD); // Function Engine.SkinnedMeshComponent.SetMinLOD
	void SetMasterPoseComponent(struct USkinnedMeshComponent* NewMasterBoneComponent, bool bForceUpdate); // Function Engine.SkinnedMeshComponent.SetMasterPoseComponent
	void SetForcedLOD(int32_t InNewForcedLOD); // Function Engine.SkinnedMeshComponent.SetForcedLOD
	void SetCastCapsuleIndirectShadow(bool bNewValue); // Function Engine.SkinnedMeshComponent.SetCastCapsuleIndirectShadow
	void SetCastCapsuleDirectShadow(bool bNewValue); // Function Engine.SkinnedMeshComponent.SetCastCapsuleDirectShadow
	void SetCapsuleIndirectShadowMinVisibility(float NewValue); // Function Engine.SkinnedMeshComponent.SetCapsuleIndirectShadowMinVisibility
	bool IsUsingSkinWeightProfile(); // Function Engine.SkinnedMeshComponent.IsUsingSkinWeightProfile
	bool IsMaterialSectionShown(int32_t MaterialID, int32_t LODIndex); // Function Engine.SkinnedMeshComponent.IsMaterialSectionShown
	bool IsBoneHiddenByName(struct FName BoneName); // Function Engine.SkinnedMeshComponent.IsBoneHiddenByName
	void HideBoneByName(struct FName BoneName, char PhysBodyOption); // Function Engine.SkinnedMeshComponent.HideBoneByName
	bool GetTwistAndSwingAngleOfDeltaRotationFromRefPose(struct FName BoneName, float OutTwistAngle, float OutSwingAngle); // Function Engine.SkinnedMeshComponent.GetTwistAndSwingAngleOfDeltaRotationFromRefPose
	struct FName GetSocketBoneName(struct FName InSocketName); // Function Engine.SkinnedMeshComponent.GetSocketBoneName
	struct FVector GetRefPosePosition(int32_t BoneIndex); // Function Engine.SkinnedMeshComponent.GetRefPosePosition
	struct FName GetParentBone(struct FName BoneName); // Function Engine.SkinnedMeshComponent.GetParentBone
	int32_t GetNumLODs(); // Function Engine.SkinnedMeshComponent.GetNumLODs
	int32_t GetNumBones(); // Function Engine.SkinnedMeshComponent.GetNumBones
	int32_t GetForcedLOD(); // Function Engine.SkinnedMeshComponent.GetForcedLOD
	struct FTransform GetDeltaTransformFromRefPose(struct FName BoneName, struct FName BaseName); // Function Engine.SkinnedMeshComponent.GetDeltaTransformFromRefPose
	struct FName GetCurrentSkinWeightProfileName(); // Function Engine.SkinnedMeshComponent.GetCurrentSkinWeightProfileName
	struct FName GetBoneName(int32_t BoneIndex); // Function Engine.SkinnedMeshComponent.GetBoneName
	int32_t GetBoneIndex(struct FName BoneName); // Function Engine.SkinnedMeshComponent.GetBoneIndex
	struct FName FindClosestBone_K2(struct FVector TestLocation, struct FVector BoneLocation, float IgnoreScale, bool bRequirePhysicsAsset); // Function Engine.SkinnedMeshComponent.FindClosestBone_K2
	void ClearVertexColorOverride(int32_t LODIndex); // Function Engine.SkinnedMeshComponent.ClearVertexColorOverride
	void ClearSkinWeightProfile(); // Function Engine.SkinnedMeshComponent.ClearSkinWeightProfile
	void ClearSkinWeightOverride(int32_t LODIndex); // Function Engine.SkinnedMeshComponent.ClearSkinWeightOverride
	bool BoneIsChildOf(struct FName BoneName, struct FName ParentBoneName); // Function Engine.SkinnedMeshComponent.BoneIsChildOf
};

// Class Engine.StreamableRenderAsset
// Size: 0x40 (Inherited: 0x28)
struct UStreamableRenderAsset : public UObject {
	double ForceMipLevelsToBeResidentTimestamp; // 0x28(0x08)
	int32_t NumCinematicMipLevels; // 0x30(0x04)
	int32_t StreamingIndex; // 0x34(0x04)
	int32_t CachedCombinedLODBias; // 0x38(0x04)
	char CachedNumResidentLODs; // 0x3c(0x01)
	char bCachedReadyForStreaming : 1; // 0x3d(0x01)
	char NeverStream : 1; // 0x3d(0x01)
	char bGlobalForceMipLevelsToBeResident : 1; // 0x3d(0x01)
	char bIsStreamable : 1; // 0x3d(0x01)
	char bHasStreamingUpdatePending : 1; // 0x3d(0x01)
	char bForceMiplevelsToBeResident : 1; // 0x3d(0x01)
	char bIgnoreStreamingMipBias : 1; // 0x3d(0x01)
	char bUseCinematicMipLevels : 1; // 0x3d(0x01)
	char UnknownData_3E[0x2]; // 0x3e(0x02)
};

// Class Engine.SkeletalMesh
// Size: 0x388 (Inherited: 0x40)
struct USkeletalMesh : public UStreamableRenderAsset {
	char UnknownData_40[0x20]; // 0x40(0x20)
	struct USkeleton* Skeleton; // 0x60(0x08)
	struct FBoxSphereBounds ImportedBounds; // 0x68(0x1c)
	struct FBoxSphereBounds ExtendedBounds; // 0x84(0x1c)
	struct FVector PositiveBoundsExtension; // 0xa0(0x0c)
	struct FVector NegativeBoundsExtension; // 0xac(0x0c)
	struct TArray<struct FSkeletalMaterial> Materials; // 0xb8(0x10)
	struct TArray<struct FBoneMirrorInfo> SkelMirrorTable; // 0xc8(0x10)
	struct TArray<struct FSkeletalMeshLODInfo> LODInfo; // 0xd8(0x10)
	char UnknownData_E8[0x50]; // 0xe8(0x50)
	struct FPerPlatformInt MinLOD; // 0x138(0x04)
	struct FPerPlatformInt MaxLod; // 0x13c(0x04)
	struct FPerPlatformBool DisableBelowMinLodStripping; // 0x140(0x01)
	char SkelMirrorAxis; // 0x141(0x01)
	char SkelMirrorFlipAxis; // 0x142(0x01)
	char bWillNeverMergeMesh : 1; // 0x143(0x01)
	char bUseFullPrecisionUVs : 1; // 0x143(0x01)
	char bUseHighPrecisionTangentBasis : 1; // 0x143(0x01)
	char bSmoothNormalsInVertexColor : 1; // 0x143(0x01)
	char bHasBeenSimplified : 1; // 0x143(0x01)
	char bHasVertexColors : 1; // 0x143(0x01)
	char UnknownData_143_6 : 1; // 0x143(0x01)
	char bEnablePerPolyCollision : 1; // 0x143(0x01)
	char UnknownData_144[0x4]; // 0x144(0x04)
	struct UBodySetup* BodySetup; // 0x148(0x08)
	struct UPhysicsAsset* PhysicsAsset; // 0x150(0x08)
	struct UPhysicsAsset* ShadowPhysicsAsset; // 0x158(0x08)
	struct TArray<struct UNodeMappingContainer*> NodeMappingData; // 0x160(0x10)
	struct TArray<struct UMorphTarget*> MorphTargets; // 0x170(0x10)
	char UnknownData_180[0x178]; // 0x180(0x178)
	struct UAnimInstance* PostProcessAnimBlueprint; // 0x2f8(0x08)
	struct TArray<struct UClothingAssetBase*> MeshClothingAssets; // 0x300(0x10)
	struct FSkeletalMeshSamplingInfo SamplingInfo; // 0x310(0x30)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x340(0x10)
	char UnknownData_350[0x8]; // 0x350(0x08)
	struct TArray<struct USkeletalMeshSocket*> Sockets; // 0x358(0x10)
	char UnknownData_368[0x10]; // 0x368(0x10)
	struct TArray<struct FSkinWeightProfileInfo> SkinWeightProfiles; // 0x378(0x10)

	void SetLODSettings(struct USkeletalMeshLODSettings* InLODSettings); // Function Engine.SkeletalMesh.SetLODSettings
	int32_t NumSockets(); // Function Engine.SkeletalMesh.NumSockets
	struct TArray<struct FString> K2_GetAllMorphTargetNames(); // Function Engine.SkeletalMesh.K2_GetAllMorphTargetNames
	bool IsSectionUsingCloth(int32_t InSectionIndex, bool bCheckCorrespondingSections); // Function Engine.SkeletalMesh.IsSectionUsingCloth
	struct USkeletalMeshSocket* GetSocketByIndex(int32_t Index); // Function Engine.SkeletalMesh.GetSocketByIndex
	struct UNodeMappingContainer* GetNodeMappingContainer(struct UBlueprint* SourceAsset); // Function Engine.SkeletalMesh.GetNodeMappingContainer
	struct FBoxSphereBounds GetImportedBounds(); // Function Engine.SkeletalMesh.GetImportedBounds
	struct FBoxSphereBounds GetBounds(); // Function Engine.SkeletalMesh.GetBounds
	void GenerateClothingLODs(int32_t MaxClothLODIndex); // Function Engine.SkeletalMesh.GenerateClothingLODs
	struct USkeletalMeshSocket* FindSocketInfo(struct FName InSocketName, struct FTransform OutTransform, int32_t OutBoneIndex, int32_t OutIndex); // Function Engine.SkeletalMesh.FindSocketInfo
	struct USkeletalMeshSocket* FindSocketAndIndex(struct FName InSocketName, int32_t OutIndex); // Function Engine.SkeletalMesh.FindSocketAndIndex
	struct USkeletalMeshSocket* FindSocket(struct FName InSocketName); // Function Engine.SkeletalMesh.FindSocket
};

// Class Engine.Engine
// Size: 0xe18 (Inherited: 0x28)
struct UEngine : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct UFont* TinyFont; // 0x30(0x08)
	struct FSoftObjectPath TinyFontName; // 0x38(0x18)
	struct UFont* SmallFont; // 0x50(0x08)
	struct FSoftObjectPath SmallFontName; // 0x58(0x18)
	struct UFont* MediumFont; // 0x70(0x08)
	struct FSoftObjectPath MediumFontName; // 0x78(0x18)
	struct UFont* LargeFont; // 0x90(0x08)
	struct FSoftObjectPath LargeFontName; // 0x98(0x18)
	struct UFont* SubtitleFont; // 0xb0(0x08)
	struct FSoftObjectPath SubtitleFontName; // 0xb8(0x18)
	struct TArray<struct UFont*> AdditionalFonts; // 0xd0(0x10)
	char UnknownData_E0[0x8]; // 0xe0(0x08)
	struct TArray<struct FString> AdditionalFontNames; // 0xe8(0x10)
	struct UConsole* ConsoleClass; // 0xf8(0x08)
	struct UShippingConsole* ShippingConsoleClass; // 0x100(0x08)
	struct FSoftClassPath ConsoleClassName; // 0x108(0x18)
	struct FSoftClassPath ShippingConsoleClassName; // 0x120(0x18)
	struct UGameViewportClient* GameViewportClientClass; // 0x138(0x08)
	struct FSoftClassPath GameViewportClientClassName; // 0x140(0x18)
	struct ULocalPlayer* LocalPlayerClass; // 0x158(0x08)
	struct FSoftClassPath LocalPlayerClassName; // 0x160(0x18)
	struct AWorldSettings* WorldSettingsClass; // 0x178(0x08)
	struct FSoftClassPath WorldSettingsClassName; // 0x180(0x18)
	struct FSoftClassPath NavigationSystemClassName; // 0x198(0x18)
	struct UNavigationSystemBase* NavigationSystemClass; // 0x1b0(0x08)
	struct FSoftClassPath NavigationSystemConfigClassName; // 0x1b8(0x18)
	struct UNavigationSystemConfig* NavigationSystemConfigClass; // 0x1d0(0x08)
	struct FSoftClassPath AvoidanceManagerClassName; // 0x1d8(0x18)
	struct UAvoidanceManager* AvoidanceManagerClass; // 0x1f0(0x08)
	struct UPhysicsCollisionHandler* PhysicsCollisionHandlerClass; // 0x1f8(0x08)
	struct FSoftClassPath PhysicsCollisionHandlerClassName; // 0x200(0x18)
	struct FSoftClassPath GameUserSettingsClassName; // 0x218(0x18)
	struct UGameUserSettings* GameUserSettingsClass; // 0x230(0x08)
	struct FSoftClassPath AIControllerClassName; // 0x238(0x18)
	struct UGameUserSettings* GameUserSettings; // 0x250(0x08)
	struct ALevelScriptActor* LevelScriptActorClass; // 0x258(0x08)
	struct FSoftClassPath LevelScriptActorClassName; // 0x260(0x18)
	struct FSoftClassPath DefaultBlueprintBaseClassName; // 0x278(0x18)
	struct FSoftClassPath GameSingletonClassName; // 0x290(0x18)
	struct UObject* GameSingleton; // 0x2a8(0x08)
	struct FSoftClassPath AssetManagerClassName; // 0x2b0(0x18)
	struct UAssetManager* AssetManager; // 0x2c8(0x08)
	struct UTexture2D* DefaultTexture; // 0x2d0(0x08)
	struct FSoftObjectPath DefaultTextureName; // 0x2d8(0x18)
	struct UTexture* DefaultDiffuseTexture; // 0x2f0(0x08)
	struct FSoftObjectPath DefaultDiffuseTextureName; // 0x2f8(0x18)
	struct UTexture2D* DefaultBSPVertexTexture; // 0x310(0x08)
	struct FSoftObjectPath DefaultBSPVertexTextureName; // 0x318(0x18)
	struct UTexture2D* HighFrequencyNoiseTexture; // 0x330(0x08)
	struct FSoftObjectPath HighFrequencyNoiseTextureName; // 0x338(0x18)
	struct UTexture2D* DefaultBokehTexture; // 0x350(0x08)
	struct FSoftObjectPath DefaultBokehTextureName; // 0x358(0x18)
	struct UTexture2D* DefaultBloomKernelTexture; // 0x370(0x08)
	struct FSoftObjectPath DefaultBloomKernelTextureName; // 0x378(0x18)
	struct UMaterial* WireframeMaterial; // 0x390(0x08)
	struct FString WireframeMaterialName; // 0x398(0x10)
	struct UMaterial* DebugMeshMaterial; // 0x3a8(0x08)
	struct FSoftObjectPath DebugMeshMaterialName; // 0x3b0(0x18)
	struct UMaterial* EmissiveMeshMaterial; // 0x3c8(0x08)
	struct FSoftObjectPath EmissiveMeshMaterialName; // 0x3d0(0x18)
	struct UMaterial* LevelColorationLitMaterial; // 0x3e8(0x08)
	struct FString LevelColorationLitMaterialName; // 0x3f0(0x10)
	struct UMaterial* LevelColorationUnlitMaterial; // 0x400(0x08)
	struct FString LevelColorationUnlitMaterialName; // 0x408(0x10)
	struct UMaterial* LightingTexelDensityMaterial; // 0x418(0x08)
	struct FString WorldNormalsMaterialName; // 0x420(0x10)
	struct UMaterial* WorldNormalsMaterial; // 0x430(0x08)
	struct FString LightingTexelDensityName; // 0x438(0x10)
	struct UMaterial* ShadedLevelColorationLitMaterial; // 0x448(0x08)
	struct FString ShadedLevelColorationLitMaterialName; // 0x450(0x10)
	struct UMaterial* ShadedLevelColorationUnlitMaterial; // 0x460(0x08)
	struct FString ShadedLevelColorationUnlitMaterialName; // 0x468(0x10)
	struct UMaterial* RemoveSurfaceMaterial; // 0x478(0x08)
	struct FSoftObjectPath RemoveSurfaceMaterialName; // 0x480(0x18)
	struct UMaterial* VertexColorMaterial; // 0x498(0x08)
	struct FString VertexColorMaterialName; // 0x4a0(0x10)
	struct UMaterial* VertexColorViewModeMaterial_ColorOnly; // 0x4b0(0x08)
	struct FString VertexColorViewModeMaterialName_ColorOnly; // 0x4b8(0x10)
	struct UMaterial* VertexColorViewModeMaterial_AlphaAsColor; // 0x4c8(0x08)
	struct FString VertexColorViewModeMaterialName_AlphaAsColor; // 0x4d0(0x10)
	struct UMaterial* VertexColorViewModeMaterial_RedOnly; // 0x4e0(0x08)
	struct FString VertexColorViewModeMaterialName_RedOnly; // 0x4e8(0x10)
	struct UMaterial* VertexColorViewModeMaterial_GreenOnly; // 0x4f8(0x08)
	struct FString VertexColorViewModeMaterialName_GreenOnly; // 0x500(0x10)
	struct UMaterial* VertexColorViewModeMaterial_BlueOnly; // 0x510(0x08)
	struct FString VertexColorViewModeMaterialName_BlueOnly; // 0x518(0x10)
	struct FSoftObjectPath DebugEditorMaterialName; // 0x528(0x18)
	struct UMaterial* ConstraintLimitMaterial; // 0x540(0x08)
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialX; // 0x548(0x08)
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialXAxis; // 0x550(0x08)
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialY; // 0x558(0x08)
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialYAxis; // 0x560(0x08)
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialZ; // 0x568(0x08)
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialZAxis; // 0x570(0x08)
	struct UMaterialInstanceDynamic* ConstraintLimitMaterialPrismatic; // 0x578(0x08)
	struct UMaterial* InvalidLightmapSettingsMaterial; // 0x580(0x08)
	struct FSoftObjectPath InvalidLightmapSettingsMaterialName; // 0x588(0x18)
	struct UMaterial* PreviewShadowsIndicatorMaterial; // 0x5a0(0x08)
	struct FSoftObjectPath PreviewShadowsIndicatorMaterialName; // 0x5a8(0x18)
	struct UMaterial* ArrowMaterial; // 0x5c0(0x08)
	struct UMaterialInstanceDynamic* ArrowMaterialYellow; // 0x5c8(0x08)
	struct FSoftObjectPath ArrowMaterialName; // 0x5d0(0x18)
	struct FLinearColor LightingOnlyBrightness; // 0x5e8(0x10)
	struct TArray<struct FLinearColor> ShaderComplexityColors; // 0x5f8(0x10)
	struct TArray<struct FLinearColor> QuadComplexityColors; // 0x608(0x10)
	struct TArray<struct FLinearColor> LightComplexityColors; // 0x618(0x10)
	struct TArray<struct FLinearColor> StationaryLightOverlapColors; // 0x628(0x10)
	struct TArray<struct FLinearColor> LODColorationColors; // 0x638(0x10)
	struct TArray<struct FLinearColor> HLODColorationColors; // 0x648(0x10)
	struct TArray<struct FLinearColor> StreamingAccuracyColors; // 0x658(0x10)
	float MaxPixelShaderAdditiveComplexityCount; // 0x668(0x04)
	float MaxES3PixelShaderAdditiveComplexityCount; // 0x66c(0x04)
	float MinLightMapDensity; // 0x670(0x04)
	float IdealLightMapDensity; // 0x674(0x04)
	float MaxLightMapDensity; // 0x678(0x04)
	char bRenderLightMapDensityGrayscale : 1; // 0x67c(0x01)
	char UnknownData_67C_1 : 7; // 0x67c(0x01)
	char UnknownData_67D[0x3]; // 0x67d(0x03)
	float RenderLightMapDensityGrayscaleScale; // 0x680(0x04)
	float RenderLightMapDensityColorScale; // 0x684(0x04)
	struct FLinearColor LightMapDensityVertexMappedColor; // 0x688(0x10)
	struct FLinearColor LightMapDensitySelectedColor; // 0x698(0x10)
	struct TArray<struct FStatColorMapping> StatColorMappings; // 0x6a8(0x10)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x6b8(0x08)
	struct FSoftObjectPath DefaultPhysMaterialName; // 0x6c0(0x18)
	struct TArray<struct FGameNameRedirect> ActiveGameNameRedirects; // 0x6d8(0x10)
	struct TArray<struct FClassRedirect> ActiveClassRedirects; // 0x6e8(0x10)
	struct TArray<struct FPluginRedirect> ActivePluginRedirects; // 0x6f8(0x10)
	struct TArray<struct FStructRedirect> ActiveStructRedirects; // 0x708(0x10)
	struct UTexture2D* PreIntegratedSkinBRDFTexture; // 0x718(0x08)
	struct FSoftObjectPath PreIntegratedSkinBRDFTextureName; // 0x720(0x18)
	struct UTexture2D* BlueNoiseTexture; // 0x738(0x08)
	struct FSoftObjectPath BlueNoiseTextureName; // 0x740(0x18)
	struct UTexture2D* MiniFontTexture; // 0x758(0x08)
	struct FSoftObjectPath MiniFontTextureName; // 0x760(0x18)
	struct UTexture* WeightMapPlaceholderTexture; // 0x778(0x08)
	struct FSoftObjectPath WeightMapPlaceholderTextureName; // 0x780(0x18)
	struct UTexture2D* LightMapDensityTexture; // 0x798(0x08)
	struct FSoftObjectPath LightMapDensityTextureName; // 0x7a0(0x18)
	char UnknownData_7B8[0x8]; // 0x7b8(0x08)
	struct UGameViewportClient* GameViewport; // 0x7c0(0x08)
	struct TArray<struct FString> DeferredCommands; // 0x7c8(0x10)
	int32_t TickCycles; // 0x7d8(0x04)
	int32_t GameCycles; // 0x7dc(0x04)
	int32_t ClientCycles; // 0x7e0(0x04)
	float NearClipPlane; // 0x7e4(0x04)
	char bStreamTexturesDuringLoadScreen : 1; // 0x7e8(0x01)
	char bHardwareSurveyEnabled : 1; // 0x7e8(0x01)
	char bSubtitlesEnabled : 1; // 0x7e8(0x01)
	char bSubtitlesForcedOff : 1; // 0x7e8(0x01)
	char UnknownData_7E8_4 : 4; // 0x7e8(0x01)
	char UnknownData_7E9[0x3]; // 0x7e9(0x03)
	int32_t MaximumLoopIterationCount; // 0x7ec(0x04)
	char bCanBlueprintsTickByDefault : 1; // 0x7f0(0x01)
	char bOptimizeAnimBlueprintMemberVariableAccess : 1; // 0x7f0(0x01)
	char bAllowMultiThreadedAnimationUpdate : 1; // 0x7f0(0x01)
	char bEnableEditorPSysRealtimeLOD : 1; // 0x7f0(0x01)
	char UnknownData_7F0_4 : 1; // 0x7f0(0x01)
	char bSmoothFrameRate : 1; // 0x7f0(0x01)
	char bUseFixedFrameRate : 1; // 0x7f0(0x01)
	char UnknownData_7F1[0x3]; // 0x7f1(0x03)
	float FixedFrameRate; // 0x7f4(0x04)
	struct FFloatRange SmoothedFrameRateRange; // 0x7f8(0x10)
	struct UEngineCustomTimeStep* CustomTimeStep; // 0x808(0x08)
	char UnknownData_810[0x20]; // 0x810(0x20)
	struct FSoftClassPath CustomTimeStepClassName; // 0x830(0x18)
	struct UTimecodeProvider* TimecodeProvider; // 0x848(0x08)
	char UnknownData_850[0x20]; // 0x850(0x20)
	struct FSoftClassPath TimecodeProviderClassName; // 0x870(0x18)
	bool bGenerateDefaultTimecode; // 0x888(0x01)
	char UnknownData_889[0x3]; // 0x889(0x03)
	struct FFrameRate GenerateDefaultTimecodeFrameRate; // 0x88c(0x08)
	float GenerateDefaultTimecodeFrameDelay; // 0x894(0x04)
	char bCheckForMultiplePawnsSpawnedInAFrame : 1; // 0x898(0x01)
	char UnknownData_898_1 : 7; // 0x898(0x01)
	char UnknownData_899[0x3]; // 0x899(0x03)
	int32_t NumPawnsAllowedToBeSpawnedInAFrame; // 0x89c(0x04)
	char bShouldGenerateLowQualityLightmaps : 1; // 0x8a0(0x01)
	char UnknownData_8A0_1 : 7; // 0x8a0(0x01)
	char UnknownData_8A1[0x3]; // 0x8a1(0x03)
	struct FColor C_WorldBox; // 0x8a4(0x04)
	struct FColor C_BrushWire; // 0x8a8(0x04)
	struct FColor C_AddWire; // 0x8ac(0x04)
	struct FColor C_SubtractWire; // 0x8b0(0x04)
	struct FColor C_SemiSolidWire; // 0x8b4(0x04)
	struct FColor C_NonSolidWire; // 0x8b8(0x04)
	struct FColor C_WireBackground; // 0x8bc(0x04)
	struct FColor C_ScaleBoxHi; // 0x8c0(0x04)
	struct FColor C_VolumeCollision; // 0x8c4(0x04)
	struct FColor C_BSPCollision; // 0x8c8(0x04)
	struct FColor C_OrthoBackground; // 0x8cc(0x04)
	struct FColor C_Volume; // 0x8d0(0x04)
	struct FColor C_BrushShape; // 0x8d4(0x04)
	float StreamingDistanceFactor; // 0x8d8(0x04)
	char UnknownData_8DC[0x4]; // 0x8dc(0x04)
	struct FDirectoryPath GameScreenshotSaveDirectory; // 0x8e0(0x10)
	enum class ETransitionType TransitionType; // 0x8f0(0x01)
	char UnknownData_8F1[0x7]; // 0x8f1(0x07)
	struct FString TransitionDescription; // 0x8f8(0x10)
	struct FString TransitionGameMode; // 0x908(0x10)
	float MeshLODRange; // 0x918(0x04)
	char bAllowMatureLanguage : 1; // 0x91c(0x01)
	char UnknownData_91C_1 : 7; // 0x91c(0x01)
	char UnknownData_91D[0x3]; // 0x91d(0x03)
	float CameraRotationThreshold; // 0x920(0x04)
	float CameraTranslationThreshold; // 0x924(0x04)
	float PrimitiveProbablyVisibleTime; // 0x928(0x04)
	float MaxOcclusionPixelsFraction; // 0x92c(0x04)
	char bPauseOnLossOfFocus : 1; // 0x930(0x01)
	char UnknownData_930_1 : 7; // 0x930(0x01)
	char UnknownData_931[0x3]; // 0x931(0x03)
	int32_t MaxParticleResize; // 0x934(0x04)
	int32_t MaxParticleResizeWarn; // 0x938(0x04)
	char UnknownData_93C[0x4]; // 0x93c(0x04)
	struct TArray<struct FDropNoteInfo> PendingDroppedNotes; // 0x940(0x10)
	float NetClientTicksPerSecond; // 0x950(0x04)
	float DisplayGamma; // 0x954(0x04)
	float MinDesiredFrameRate; // 0x958(0x04)
	struct FLinearColor DefaultSelectedMaterialColor; // 0x95c(0x10)
	struct FLinearColor SelectedMaterialColor; // 0x96c(0x10)
	struct FLinearColor SelectionOutlineColor; // 0x97c(0x10)
	struct FLinearColor SubduedSelectionOutlineColor; // 0x98c(0x10)
	struct FLinearColor SelectedMaterialColorOverride; // 0x99c(0x10)
	bool bIsOverridingSelectedColor; // 0x9ac(0x01)
	char UnknownData_9AD[0x3]; // 0x9ad(0x03)
	char bEnableOnScreenDebugMessages : 1; // 0x9b0(0x01)
	char bEnableOnScreenDebugMessagesDisplay : 1; // 0x9b0(0x01)
	char bSuppressMapWarnings : 1; // 0x9b0(0x01)
	char bDisableAILogging : 1; // 0x9b0(0x01)
	char UnknownData_9B0_4 : 4; // 0x9b0(0x01)
	char UnknownData_9B1[0x3]; // 0x9b1(0x03)
	uint32_t bEnableVisualLogRecordingOnStart; // 0x9b4(0x04)
	char UnknownData_9B8[0x4]; // 0x9b8(0x04)
	int32_t ScreenSaverInhibitorSemaphore; // 0x9bc(0x04)
	char bLockReadOnlyLevels : 1; // 0x9c0(0x01)
	char UnknownData_9C0_1 : 7; // 0x9c0(0x01)
	char UnknownData_9C1[0x7]; // 0x9c1(0x07)
	struct FString ParticleEventManagerClassPath; // 0x9c8(0x10)
	float SelectionHighlightIntensity; // 0x9d8(0x04)
	float BSPSelectionHighlightIntensity; // 0x9dc(0x04)
	float SelectionHighlightIntensityBillboards; // 0x9e0(0x04)
	char UnknownData_9E4[0x24c]; // 0x9e4(0x24c)
	struct TArray<struct FNetDriverDefinition> NetDriverDefinitions; // 0xc30(0x10)
	struct TArray<struct FString> ServerActors; // 0xc40(0x10)
	struct TArray<struct FString> RuntimeServerActors; // 0xc50(0x10)
	float NetErrorLogInterval; // 0xc60(0x04)
	char bStartedLoadMapMovie : 1; // 0xc64(0x01)
	char UnknownData_C64_1 : 7; // 0xc64(0x01)
	char UnknownData_C65[0x1b]; // 0xc65(0x1b)
	int32_t NextWorldContextHandle; // 0xc80(0x04)
	char UnknownData_C84[0x194]; // 0xc84(0x194)
};

// Class Engine.GameEngine
// Size: 0xe68 (Inherited: 0xe18)
struct UGameEngine : public UEngine {
	float MaxDeltaTime; // 0xe18(0x04)
	float ServerFlushLogInterval; // 0xe1c(0x04)
	struct UGameInstance* GameInstance; // 0xe20(0x08)
	char UnknownData_E28[0x40]; // 0xe28(0x40)
};

// Class Engine.Player
// Size: 0x48 (Inherited: 0x28)
struct UPlayer : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct APlayerController* PlayerController; // 0x30(0x08)
	int32_t CurrentNetSpeed; // 0x38(0x04)
	int32_t ConfiguredInternetSpeed; // 0x3c(0x04)
	int32_t ConfiguredLanSpeed; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
};

// Class Engine.NetConnection
// Size: 0x1a30 (Inherited: 0x48)
struct UNetConnection : public UPlayer {
	struct TArray<struct UChildConnection*> Children; // 0x48(0x10)
	struct UNetDriver* Driver; // 0x58(0x08)
	struct UPackageMap* PackageMapClass; // 0x60(0x08)
	struct UPackageMap* PackageMap; // 0x68(0x08)
	struct TArray<struct UChannel*> OpenChannels; // 0x70(0x10)
	struct TArray<struct AActor*> SentTemporaries; // 0x80(0x10)
	struct AActor* ViewTarget; // 0x90(0x08)
	struct AActor* OwningActor; // 0x98(0x08)
	int32_t MaxPacket; // 0xa0(0x04)
	char InternalAck : 1; // 0xa4(0x01)
	char UnknownData_A4_1 : 7; // 0xa4(0x01)
	char UnknownData_A5[0xbb]; // 0xa5(0xbb)
	struct FUniqueNetIdRepl PlayerId; // 0x160(0x28)
	char UnknownData_188[0x48]; // 0x188(0x48)
	double LastReceiveTime; // 0x1d0(0x08)
	char UnknownData_1D8[0x1338]; // 0x1d8(0x1338)
	struct TArray<struct UChannel*> ChannelsToTick; // 0x1510(0x10)
	char UnknownData_1520[0x510]; // 0x1520(0x510)
};

// Class Engine.LocalPlayer
// Size: 0x258 (Inherited: 0x48)
struct ULocalPlayer : public UPlayer {
	char UnknownData_48[0x28]; // 0x48(0x28)
	struct UGameViewportClient* ViewportClient; // 0x70(0x08)
	char UnknownData_78[0x1c]; // 0x78(0x1c)
	char AspectRatioAxisConstraint; // 0x94(0x01)
	char UnknownData_95[0x3]; // 0x95(0x03)
	struct APlayerController* PendingLevelPlayerControllerClass; // 0x98(0x08)
	char bSentSplitJoin : 1; // 0xa0(0x01)
	char UnknownData_A0_1 : 7; // 0xa0(0x01)
	char UnknownData_A1[0x17]; // 0xa1(0x17)
	int32_t ControllerId; // 0xb8(0x04)
	char UnknownData_BC[0x19c]; // 0xbc(0x19c)
};

// Class Engine.TimecodeProvider
// Size: 0x30 (Inherited: 0x28)
struct UTimecodeProvider : public UObject {
	float FrameDelay; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)

	struct FTimecode GetTimecode(); // Function Engine.TimecodeProvider.GetTimecode
	enum class ETimecodeProviderSynchronizationState GetSynchronizationState(); // Function Engine.TimecodeProvider.GetSynchronizationState
	struct FQualifiedFrameTime GetQualifiedFrameTime(); // Function Engine.TimecodeProvider.GetQualifiedFrameTime
	struct FFrameRate GetFrameRate(); // Function Engine.TimecodeProvider.GetFrameRate
	struct FTimecode GetDelayedTimecode(); // Function Engine.TimecodeProvider.GetDelayedTimecode
	struct FQualifiedFrameTime GetDelayedQualifiedFrameTime(); // Function Engine.TimecodeProvider.GetDelayedQualifiedFrameTime
};

// Class Engine.BlueprintAsyncActionBase
// Size: 0x30 (Inherited: 0x28)
struct UBlueprintAsyncActionBase : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)

	void Activate(); // Function Engine.BlueprintAsyncActionBase.Activate
};

// Class Engine.NetDriver
// Size: 0x748 (Inherited: 0x28)
struct UNetDriver : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct FString NetConnectionClassName; // 0x30(0x10)
	struct FString ReplicationDriverClassName; // 0x40(0x10)
	int32_t MaxDownloadSize; // 0x50(0x04)
	char bClampListenServerTickRate : 1; // 0x54(0x01)
	char UnknownData_54_1 : 7; // 0x54(0x01)
	char UnknownData_55[0x3]; // 0x55(0x03)
	int32_t NetServerMaxTickRate; // 0x58(0x04)
	int32_t MaxNetTickRate; // 0x5c(0x04)
	int32_t MaxInternetClientRate; // 0x60(0x04)
	int32_t MaxClientRate; // 0x64(0x04)
	float ServerTravelPause; // 0x68(0x04)
	float SpawnPrioritySeconds; // 0x6c(0x04)
	float RelevantTimeout; // 0x70(0x04)
	float KeepAliveTime; // 0x74(0x04)
	float InitialConnectTimeout; // 0x78(0x04)
	float ConnectionTimeout; // 0x7c(0x04)
	float TimeoutMultiplierForUnoptimizedBuilds; // 0x80(0x04)
	bool bNoTimeouts; // 0x84(0x01)
	bool bNeverApplyNetworkEmulationSettings; // 0x85(0x01)
	char UnknownData_86[0x2]; // 0x86(0x02)
	struct UNetConnection* ServerConnection; // 0x88(0x08)
	struct TArray<struct UNetConnection*> ClientConnections; // 0x90(0x10)
	char UnknownData_A0[0x60]; // 0xa0(0x60)
	int32_t RecentlyDisconnectedTrackingTime; // 0x100(0x04)
	char UnknownData_104[0x3c]; // 0x104(0x3c)
	struct UWorld* World; // 0x140(0x08)
	struct UPackage* WorldPackage; // 0x148(0x08)
	char UnknownData_150[0x20]; // 0x150(0x20)
	struct UObject* NetConnectionClass; // 0x170(0x08)
	struct UObject* ReplicationDriverClass; // 0x178(0x08)
	char UnknownData_180[0x10]; // 0x180(0x10)
	struct FName NetDriverName; // 0x190(0x08)
	struct TArray<struct FChannelDefinition> ChannelDefinitions; // 0x198(0x10)
	struct TMap<struct FName, struct FChannelDefinition> ChannelDefinitionMap; // 0x1a8(0x50)
	struct TArray<struct UChannel*> ActorChannelPool; // 0x1f8(0x10)
	char UnknownData_208[0x8]; // 0x208(0x08)
	float Time; // 0x210(0x04)
	char UnknownData_214[0x4d4]; // 0x214(0x4d4)
	struct UReplicationDriver* ReplicationDriver; // 0x6e8(0x08)
	char UnknownData_6F0[0x58]; // 0x6f0(0x58)
};

// Class Engine.DeveloperSettings
// Size: 0x38 (Inherited: 0x28)
struct UDeveloperSettings : public UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
};

// Class Engine.Distribution
// Size: 0x30 (Inherited: 0x28)
struct UDistribution : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class Engine.DistributionVector
// Size: 0x38 (Inherited: 0x30)
struct UDistributionVector : public UDistribution {
	char bCanBeBaked : 1; // 0x30(0x01)
	char bIsDirty : 1; // 0x30(0x01)
	char bBakedDataSuccesfully : 1; // 0x30(0x01)
	char UnknownData_30_3 : 5; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// Class Engine.Pawn
// Size: 0x280 (Inherited: 0x220)
struct APawn : public AActor {
	char UnknownData_220[0x8]; // 0x220(0x08)
	char bUseControllerRotationPitch : 1; // 0x228(0x01)
	char bUseControllerRotationYaw : 1; // 0x228(0x01)
	char bUseControllerRotationRoll : 1; // 0x228(0x01)
	char bCanAffectNavigationGeneration : 1; // 0x228(0x01)
	char UnknownData_228_4 : 4; // 0x228(0x01)
	char UnknownData_229[0x3]; // 0x229(0x03)
	float BaseEyeHeight; // 0x22c(0x04)
	char AutoPossessPlayer; // 0x230(0x01)
	enum class EAutoPossessAI AutoPossessAI; // 0x231(0x01)
	char RemoteViewPitch; // 0x232(0x01)
	char UnknownData_233[0x5]; // 0x233(0x05)
	struct AController* AIControllerClass; // 0x238(0x08)
	struct APlayerState* PlayerState; // 0x240(0x08)
	char UnknownData_248[0x8]; // 0x248(0x08)
	struct AController* LastHitBy; // 0x250(0x08)
	struct AController* Controller; // 0x258(0x08)
	char UnknownData_260[0x4]; // 0x260(0x04)
	struct FVector ControlInputVector; // 0x264(0x0c)
	struct FVector LastControlInputVector; // 0x270(0x0c)
	char UnknownData_27C[0x4]; // 0x27c(0x04)

	void SpawnDefaultController(); // Function Engine.Pawn.SpawnDefaultController
	void SetCanAffectNavigationGeneration(bool bNewValue, bool bForceUpdate); // Function Engine.Pawn.SetCanAffectNavigationGeneration
	void ReceiveUnpossessed(struct AController* OldController); // Function Engine.Pawn.ReceiveUnpossessed
	void ReceivePossessed(struct AController* NewController); // Function Engine.Pawn.ReceivePossessed
	void PawnMakeNoise(float Loudness, struct FVector NoiseLocation, bool bUseNoiseMakerLocation, struct AActor* NoiseMaker); // Function Engine.Pawn.PawnMakeNoise
	void OnRep_PlayerState(); // Function Engine.Pawn.OnRep_PlayerState
	void OnRep_Controller(); // Function Engine.Pawn.OnRep_Controller
	void LaunchPawn(struct FVector LaunchVelocity, bool bXYOverride, bool bZOverride); // Function Engine.Pawn.LaunchPawn
	struct FVector K2_GetMovementInputVector(); // Function Engine.Pawn.K2_GetMovementInputVector
	bool IsPlayerControlled(); // Function Engine.Pawn.IsPlayerControlled
	bool IsPawnControlled(); // Function Engine.Pawn.IsPawnControlled
	bool IsMoveInputIgnored(); // Function Engine.Pawn.IsMoveInputIgnored
	bool IsLocallyControlled(); // Function Engine.Pawn.IsLocallyControlled
	bool IsControlled(); // Function Engine.Pawn.IsControlled
	bool IsBotControlled(); // Function Engine.Pawn.IsBotControlled
	struct FVector GetPendingMovementInputVector(); // Function Engine.Pawn.GetPendingMovementInputVector
	struct FVector GetNavAgentLocation(); // Function Engine.Pawn.GetNavAgentLocation
	struct UPawnMovementComponent* GetMovementComponent(); // Function Engine.Pawn.GetMovementComponent
	struct AActor* GetMovementBaseActor(struct APawn* Pawn); // Function Engine.Pawn.GetMovementBaseActor
	struct FVector GetLastMovementInputVector(); // Function Engine.Pawn.GetLastMovementInputVector
	struct FRotator GetControlRotation(); // Function Engine.Pawn.GetControlRotation
	struct AController* GetController(); // Function Engine.Pawn.GetController
	struct FRotator GetBaseAimRotation(); // Function Engine.Pawn.GetBaseAimRotation
	void DetachFromControllerPendingDestroy(); // Function Engine.Pawn.DetachFromControllerPendingDestroy
	struct FVector ConsumeMovementInputVector(); // Function Engine.Pawn.ConsumeMovementInputVector
	void AddMovementInput(struct FVector WorldDirection, float ScaleValue, bool bForce); // Function Engine.Pawn.AddMovementInput
	void AddControllerYawInput(float Val); // Function Engine.Pawn.AddControllerYawInput
	void AddControllerRollInput(float Val); // Function Engine.Pawn.AddControllerRollInput
	void AddControllerPitchInput(float Val); // Function Engine.Pawn.AddControllerPitchInput
};

// Class Engine.Character
// Size: 0x4c0 (Inherited: 0x280)
struct ACharacter : public APawn {
	struct USkeletalMeshComponent* Mesh; // 0x280(0x08)
	struct UCharacterMovementComponent* CharacterMovement; // 0x288(0x08)
	struct UCapsuleComponent* CapsuleComponent; // 0x290(0x08)
	struct FBasedMovementInfo BasedMovement; // 0x298(0x30)
	struct FBasedMovementInfo ReplicatedBasedMovement; // 0x2c8(0x30)
	float AnimRootMotionTranslationScale; // 0x2f8(0x04)
	struct FVector BaseTranslationOffset; // 0x2fc(0x0c)
	char UnknownData_308[0x8]; // 0x308(0x08)
	struct FQuat BaseRotationOffset; // 0x310(0x10)
	float ReplicatedServerLastTransformUpdateTimeStamp; // 0x320(0x04)
	float ReplayLastTransformUpdateTimeStamp; // 0x324(0x04)
	char ReplicatedMovementMode; // 0x328(0x01)
	bool bInBaseReplication; // 0x329(0x01)
	char UnknownData_32A[0x2]; // 0x32a(0x02)
	float CrouchedEyeHeight; // 0x32c(0x04)
	char bIsCrouched : 1; // 0x330(0x01)
	char bProxyIsJumpForceApplied : 1; // 0x330(0x01)
	char bPressedJump : 1; // 0x330(0x01)
	char bClientUpdating : 1; // 0x330(0x01)
	char bClientWasFalling : 1; // 0x330(0x01)
	char bClientResimulateRootMotion : 1; // 0x330(0x01)
	char bClientResimulateRootMotionSources : 1; // 0x330(0x01)
	char bSimGravityDisabled : 1; // 0x330(0x01)
	char bClientCheckEncroachmentOnNetUpdate : 1; // 0x331(0x01)
	char bServerMoveIgnoreRootMotion : 1; // 0x331(0x01)
	char bWasJumping : 1; // 0x331(0x01)
	char UnknownData_331_3 : 5; // 0x331(0x01)
	char UnknownData_332[0x2]; // 0x332(0x02)
	float JumpKeyHoldTime; // 0x334(0x04)
	float JumpForceTimeRemaining; // 0x338(0x04)
	float ProxyJumpForceStartedTime; // 0x33c(0x04)
	float JumpMaxHoldTime; // 0x340(0x04)
	int32_t JumpMaxCount; // 0x344(0x04)
	int32_t JumpCurrentCount; // 0x348(0x04)
	char UnknownData_34C[0x4]; // 0x34c(0x04)
	struct FMulticastInlineDelegate OnReachedJumpApex; // 0x350(0x10)
	char UnknownData_360[0x10]; // 0x360(0x10)
	struct FMulticastInlineDelegate MovementModeChangedDelegate; // 0x370(0x10)
	struct FMulticastInlineDelegate OnCharacterMovementUpdated; // 0x380(0x10)
	struct FRootMotionSourceGroup SavedRootMotion; // 0x390(0x38)
	char UnknownData_3C8[0x8]; // 0x3c8(0x08)
	struct FRootMotionMovementParams ClientRootMotionParams; // 0x3d0(0x40)
	struct TArray<struct FSimulatedRootMotionReplicatedMove> RootMotionRepMoves; // 0x410(0x10)
	struct FRepRootMotionMontage RepRootMotion; // 0x420(0x98)
	char UnknownData_4B8[0x8]; // 0x4b8(0x08)

	void UnCrouch(bool bClientSimulation); // Function Engine.Character.UnCrouch
	void StopJumping(); // Function Engine.Character.StopJumping
	void StopAnimMontage(struct UAnimMontage* AnimMontage); // Function Engine.Character.StopAnimMontage
	void ServerMoveOld(float OldTimeStamp, struct FVector_NetQuantize10 OldAccel, char OldMoveFlags); // Function Engine.Character.ServerMoveOld
	void ServerMoveNoBase(float Timestamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, char CompressedMoveFlags, char ClientRoll, uint32_t View, char ClientMovementMode); // Function Engine.Character.ServerMoveNoBase
	void ServerMoveDualNoBase(float TimeStamp0, struct FVector_NetQuantize10 InAccel0, char PendingFlags, uint32_t View0, float Timestamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, char NewFlags, char ClientRoll, uint32_t View, char ClientMovementMode); // Function Engine.Character.ServerMoveDualNoBase
	void ServerMoveDualHybridRootMotion(float TimeStamp0, struct FVector_NetQuantize10 InAccel0, char PendingFlags, uint32_t View0, float Timestamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, char NewFlags, char ClientRoll, uint32_t View, struct UPrimitiveComponent* ClientMovementBase, struct FName ClientBaseBoneName, char ClientMovementMode); // Function Engine.Character.ServerMoveDualHybridRootMotion
	void ServerMoveDual(float TimeStamp0, struct FVector_NetQuantize10 InAccel0, char PendingFlags, uint32_t View0, float Timestamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, char NewFlags, char ClientRoll, uint32_t View, struct UPrimitiveComponent* ClientMovementBase, struct FName ClientBaseBoneName, char ClientMovementMode); // Function Engine.Character.ServerMoveDual
	void ServerMove(float Timestamp, struct FVector_NetQuantize10 InAccel, struct FVector_NetQuantize100 ClientLoc, char CompressedMoveFlags, char ClientRoll, uint32_t View, struct UPrimitiveComponent* ClientMovementBase, struct FName ClientBaseBoneName, char ClientMovementMode); // Function Engine.Character.ServerMove
	void RootMotionDebugClientPrintOnScreen(struct FString inString); // Function Engine.Character.RootMotionDebugClientPrintOnScreen
	float PlayAnimMontage(struct UAnimMontage* AnimMontage, float InPlayRate, struct FName StartSectionName); // Function Engine.Character.PlayAnimMontage
	void OnWalkingOffLedge(struct FVector PreviousFloorImpactNormal, struct FVector PreviousFloorContactNormal, struct FVector PreviousLocation, float TimeDelta); // Function Engine.Character.OnWalkingOffLedge
	void OnRep_RootMotion(); // Function Engine.Character.OnRep_RootMotion
	void OnRep_ReplicatedBasedMovement(); // Function Engine.Character.OnRep_ReplicatedBasedMovement
	void OnRep_ReplayLastTransformUpdateTimeStamp(); // Function Engine.Character.OnRep_ReplayLastTransformUpdateTimeStamp
	void OnRep_IsCrouched(); // Function Engine.Character.OnRep_IsCrouched
	void OnLaunched(struct FVector LaunchVelocity, bool bXYOverride, bool bZOverride); // Function Engine.Character.OnLaunched
	void OnLanded(struct FHitResult Hit); // Function Engine.Character.OnLanded
	void OnJumped(); // Function Engine.Character.OnJumped
	void LaunchCharacter(struct FVector LaunchVelocity, bool bXYOverride, bool bZOverride); // Function Engine.Character.LaunchCharacter
	void K2_UpdateCustomMovement(float DeltaTime); // Function Engine.Character.K2_UpdateCustomMovement
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust); // Function Engine.Character.K2_OnStartCrouch
	void K2_OnMovementModeChanged(char PrevMovementMode, char NewMovementMode, char PrevCustomMode, char NewCustomMode); // Function Engine.Character.K2_OnMovementModeChanged
	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust); // Function Engine.Character.K2_OnEndCrouch
	void Jump(); // Function Engine.Character.Jump
	bool IsPlayingRootMotion(); // Function Engine.Character.IsPlayingRootMotion
	bool IsPlayingNetworkedRootMotionMontage(); // Function Engine.Character.IsPlayingNetworkedRootMotionMontage
	bool IsJumpProvidingForce(); // Function Engine.Character.IsJumpProvidingForce
	bool HasAnyRootMotion(); // Function Engine.Character.HasAnyRootMotion
	struct UAnimMontage* GetCurrentMontage(); // Function Engine.Character.GetCurrentMontage
	struct FVector GetBaseTranslationOffset(); // Function Engine.Character.GetBaseTranslationOffset
	struct FRotator GetBaseRotationOffsetRotator(); // Function Engine.Character.GetBaseRotationOffsetRotator
	float GetAnimRootMotionTranslationScale(); // Function Engine.Character.GetAnimRootMotionTranslationScale
	void Crouch(bool bClientSimulation); // Function Engine.Character.Crouch
	void ClientVeryShortAdjustPosition(float Timestamp, struct FVector NewLoc, struct UPrimitiveComponent* NewBase, struct FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, char ServerMovementMode); // Function Engine.Character.ClientVeryShortAdjustPosition
	void ClientCheatWalk(); // Function Engine.Character.ClientCheatWalk
	void ClientCheatGhost(); // Function Engine.Character.ClientCheatGhost
	void ClientCheatFly(); // Function Engine.Character.ClientCheatFly
	void ClientAdjustRootMotionSourcePosition(float Timestamp, struct FRootMotionSourceGroup ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, struct FVector ServerLoc, struct FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, struct UPrimitiveComponent* ServerBase, struct FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, char ServerMovementMode); // Function Engine.Character.ClientAdjustRootMotionSourcePosition
	void ClientAdjustRootMotionPosition(float Timestamp, float ServerMontageTrackPosition, struct FVector ServerLoc, struct FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, struct UPrimitiveComponent* ServerBase, struct FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, char ServerMovementMode); // Function Engine.Character.ClientAdjustRootMotionPosition
	void ClientAdjustPosition(float Timestamp, struct FVector NewLoc, struct FVector NewVel, struct UPrimitiveComponent* NewBase, struct FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, char ServerMovementMode); // Function Engine.Character.ClientAdjustPosition
	void ClientAckGoodMove(float Timestamp); // Function Engine.Character.ClientAckGoodMove
	bool CanJumpInternal(); // Function Engine.Character.CanJumpInternal
	bool CanJump(); // Function Engine.Character.CanJump
	bool CanCrouch(); // Function Engine.Character.CanCrouch
	void CacheInitialMeshOffset(struct FVector MeshRelativeLocation, struct FRotator MeshRelativeRotation); // Function Engine.Character.CacheInitialMeshOffset
};

// Class Engine.MovementComponent
// Size: 0xf0 (Inherited: 0xb0)
struct UMovementComponent : public UActorComponent {
	struct USceneComponent* UpdatedComponent; // 0xb0(0x08)
	struct UPrimitiveComponent* UpdatedPrimitive; // 0xb8(0x08)
	char UnknownData_C0[0x4]; // 0xc0(0x04)
	struct FVector Velocity; // 0xc4(0x0c)
	struct FVector PlaneConstraintNormal; // 0xd0(0x0c)
	struct FVector PlaneConstraintOrigin; // 0xdc(0x0c)
	char bUpdateOnlyIfRendered : 1; // 0xe8(0x01)
	char bAutoUpdateTickRegistration : 1; // 0xe8(0x01)
	char bTickBeforeOwner : 1; // 0xe8(0x01)
	char bAutoRegisterUpdatedComponent : 1; // 0xe8(0x01)
	char bConstrainToPlane : 1; // 0xe8(0x01)
	char bSnapToPlaneAtStart : 1; // 0xe8(0x01)
	char bAutoRegisterPhysicsVolumeUpdates : 1; // 0xe8(0x01)
	char bComponentShouldUpdatePhysicsVolume : 1; // 0xe8(0x01)
	char UnknownData_E9[0x2]; // 0xe9(0x02)
	enum class EPlaneConstraintAxisSetting PlaneConstraintAxisSetting; // 0xeb(0x01)
	char UnknownData_EC[0x4]; // 0xec(0x04)

	void StopMovementImmediately(); // Function Engine.MovementComponent.StopMovementImmediately
	void SnapUpdatedComponentToPlane(); // Function Engine.MovementComponent.SnapUpdatedComponentToPlane
	void SetUpdatedComponent(struct USceneComponent* NewUpdatedComponent); // Function Engine.MovementComponent.SetUpdatedComponent
	void SetPlaneConstraintOrigin(struct FVector PlaneOrigin); // Function Engine.MovementComponent.SetPlaneConstraintOrigin
	void SetPlaneConstraintNormal(struct FVector PlaneNormal); // Function Engine.MovementComponent.SetPlaneConstraintNormal
	void SetPlaneConstraintFromVectors(struct FVector Forward, struct FVector Up); // Function Engine.MovementComponent.SetPlaneConstraintFromVectors
	void SetPlaneConstraintEnabled(bool bEnabled); // Function Engine.MovementComponent.SetPlaneConstraintEnabled
	void SetPlaneConstraintAxisSetting(enum class EPlaneConstraintAxisSetting NewAxisSetting); // Function Engine.MovementComponent.SetPlaneConstraintAxisSetting
	void PhysicsVolumeChanged(struct APhysicsVolume* NewVolume); // Function Engine.MovementComponent.PhysicsVolumeChanged
	bool K2_MoveUpdatedComponent(struct FVector Delta, struct FRotator NewRotation, struct FHitResult OutHit, bool bSweep, bool bTeleport); // Function Engine.MovementComponent.K2_MoveUpdatedComponent
	float K2_GetModifiedMaxSpeed(); // Function Engine.MovementComponent.K2_GetModifiedMaxSpeed
	float K2_GetMaxSpeedModifier(); // Function Engine.MovementComponent.K2_GetMaxSpeedModifier
	bool IsExceedingMaxSpeed(float MaxSpeed); // Function Engine.MovementComponent.IsExceedingMaxSpeed
	struct FVector GetPlaneConstraintOrigin(); // Function Engine.MovementComponent.GetPlaneConstraintOrigin
	struct FVector GetPlaneConstraintNormal(); // Function Engine.MovementComponent.GetPlaneConstraintNormal
	enum class EPlaneConstraintAxisSetting GetPlaneConstraintAxisSetting(); // Function Engine.MovementComponent.GetPlaneConstraintAxisSetting
	struct APhysicsVolume* GetPhysicsVolume(); // Function Engine.MovementComponent.GetPhysicsVolume
	float GetMaxSpeed(); // Function Engine.MovementComponent.GetMaxSpeed
	float GetGravityZ(); // Function Engine.MovementComponent.GetGravityZ
	struct FVector ConstrainNormalToPlane(struct FVector Normal); // Function Engine.MovementComponent.ConstrainNormalToPlane
	struct FVector ConstrainLocationToPlane(struct FVector Location); // Function Engine.MovementComponent.ConstrainLocationToPlane
	struct FVector ConstrainDirectionToPlane(struct FVector Direction); // Function Engine.MovementComponent.ConstrainDirectionToPlane
};

// Class Engine.NavMovementComponent
// Size: 0x130 (Inherited: 0xf0)
struct UNavMovementComponent : public UMovementComponent {
	struct FNavAgentProperties NavAgentProps; // 0xf0(0x30)
	float FixedPathBrakingDistance; // 0x120(0x04)
	char bUpdateNavAgentWithOwnersCollision : 1; // 0x124(0x01)
	char bUseAccelerationForPaths : 1; // 0x124(0x01)
	char bUseFixedBrakingDistanceForPaths : 1; // 0x124(0x01)
	char UnknownData_124_3 : 5; // 0x124(0x01)
	struct FMovementProperties MovementState; // 0x125(0x01)
	char UnknownData_126[0x2]; // 0x126(0x02)
	struct UObject* PathFollowingComp; // 0x128(0x08)

	void StopMovementKeepPathing(); // Function Engine.NavMovementComponent.StopMovementKeepPathing
	void StopActiveMovement(); // Function Engine.NavMovementComponent.StopActiveMovement
	bool IsSwimming(); // Function Engine.NavMovementComponent.IsSwimming
	bool IsMovingOnGround(); // Function Engine.NavMovementComponent.IsMovingOnGround
	bool IsFlying(); // Function Engine.NavMovementComponent.IsFlying
	bool IsFalling(); // Function Engine.NavMovementComponent.IsFalling
	bool IsCrouching(); // Function Engine.NavMovementComponent.IsCrouching
};

// Class Engine.PawnMovementComponent
// Size: 0x138 (Inherited: 0x130)
struct UPawnMovementComponent : public UNavMovementComponent {
	struct APawn* PawnOwner; // 0x130(0x08)

	struct FVector K2_GetInputVector(); // Function Engine.PawnMovementComponent.K2_GetInputVector
	bool IsMoveInputIgnored(); // Function Engine.PawnMovementComponent.IsMoveInputIgnored
	struct FVector GetPendingInputVector(); // Function Engine.PawnMovementComponent.GetPendingInputVector
	struct APawn* GetPawnOwner(); // Function Engine.PawnMovementComponent.GetPawnOwner
	struct FVector GetLastInputVector(); // Function Engine.PawnMovementComponent.GetLastInputVector
	struct FVector ConsumeInputVector(); // Function Engine.PawnMovementComponent.ConsumeInputVector
	void AddInputVector(struct FVector WorldVector, bool bForce); // Function Engine.PawnMovementComponent.AddInputVector
};

// Class Engine.CharacterMovementComponent
// Size: 0x610 (Inherited: 0x138)
struct UCharacterMovementComponent : public UPawnMovementComponent {
	char UnknownData_138[0x10]; // 0x138(0x10)
	struct ACharacter* CharacterOwner; // 0x148(0x08)
	float GravityScale; // 0x150(0x04)
	float MaxStepHeight; // 0x154(0x04)
	float JumpZVelocity; // 0x158(0x04)
	float JumpOffJumpZFactor; // 0x15c(0x04)
	float WalkableFloorAngle; // 0x160(0x04)
	float WalkableFloorZ; // 0x164(0x04)
	char MovementMode; // 0x168(0x01)
	char CustomMovementMode; // 0x169(0x01)
	enum class ENetworkSmoothingMode NetworkSmoothingMode; // 0x16a(0x01)
	char UnknownData_16B[0x1]; // 0x16b(0x01)
	float GroundFriction; // 0x16c(0x04)
	char UnknownData_170[0x1c]; // 0x170(0x1c)
	float MaxWalkSpeed; // 0x18c(0x04)
	float MaxWalkSpeedCrouched; // 0x190(0x04)
	float MaxSwimSpeed; // 0x194(0x04)
	float MaxFlySpeed; // 0x198(0x04)
	float MaxCustomMovementSpeed; // 0x19c(0x04)
	float MaxAcceleration; // 0x1a0(0x04)
	float MinAnalogWalkSpeed; // 0x1a4(0x04)
	float BrakingFrictionFactor; // 0x1a8(0x04)
	float BrakingFriction; // 0x1ac(0x04)
	float BrakingSubStepTime; // 0x1b0(0x04)
	float BrakingDecelerationWalking; // 0x1b4(0x04)
	float BrakingDecelerationFalling; // 0x1b8(0x04)
	float BrakingDecelerationSwimming; // 0x1bc(0x04)
	float BrakingDecelerationFlying; // 0x1c0(0x04)
	float AirControl; // 0x1c4(0x04)
	float AirControlBoostMultiplier; // 0x1c8(0x04)
	float AirControlBoostVelocityThreshold; // 0x1cc(0x04)
	float FallingLateralFriction; // 0x1d0(0x04)
	float CrouchedHalfHeight; // 0x1d4(0x04)
	float Buoyancy; // 0x1d8(0x04)
	float PerchRadiusThreshold; // 0x1dc(0x04)
	float PerchAdditionalHeight; // 0x1e0(0x04)
	struct FRotator RotationRate; // 0x1e4(0x0c)
	char bUseSeparateBrakingFriction : 1; // 0x1f0(0x01)
	char bApplyGravityWhileJumping : 1; // 0x1f0(0x01)
	char bUseControllerDesiredRotation : 1; // 0x1f0(0x01)
	char bOrientRotationToMovement : 1; // 0x1f0(0x01)
	char bSweepWhileNavWalking : 1; // 0x1f0(0x01)
	char UnknownData_1F0_5 : 1; // 0x1f0(0x01)
	char bMovementInProgress : 1; // 0x1f0(0x01)
	char bEnableScopedMovementUpdates : 1; // 0x1f0(0x01)
	char bEnableServerDualMoveScopedMovementUpdates : 1; // 0x1f1(0x01)
	char bForceMaxAccel : 1; // 0x1f1(0x01)
	char bRunPhysicsWithNoController : 1; // 0x1f1(0x01)
	char bForceNextFloorCheck : 1; // 0x1f1(0x01)
	char bShrinkProxyCapsule : 1; // 0x1f1(0x01)
	char bCanWalkOffLedges : 1; // 0x1f1(0x01)
	char bCanWalkOffLedgesWhenCrouching : 1; // 0x1f1(0x01)
	char UnknownData_1F2_0 : 1; // 0x1f2(0x01)
	char bNetworkSkipProxyPredictionOnNetUpdate : 1; // 0x1f2(0x01)
	char bNetworkAlwaysReplicateTransformUpdateTimestamp : 1; // 0x1f2(0x01)
	char bDeferUpdateMoveComponent : 1; // 0x1f2(0x01)
	char bEnablePhysicsInteraction : 1; // 0x1f2(0x01)
	char bTouchForceScaledToMass : 1; // 0x1f2(0x01)
	char bPushForceScaledToMass : 1; // 0x1f2(0x01)
	char bPushForceUsingZOffset : 1; // 0x1f2(0x01)
	char bScalePushForceToVelocity : 1; // 0x1f3(0x01)
	char UnknownData_1F3_1 : 7; // 0x1f3(0x01)
	char UnknownData_1F4[0x4]; // 0x1f4(0x04)
	struct USceneComponent* DeferredUpdatedMoveComponent; // 0x1f8(0x08)
	float MaxOutOfWaterStepHeight; // 0x200(0x04)
	float OutofWaterZ; // 0x204(0x04)
	float Mass; // 0x208(0x04)
	float StandingDownwardForceScale; // 0x20c(0x04)
	float InitialPushForceFactor; // 0x210(0x04)
	float PushForceFactor; // 0x214(0x04)
	float PushForcePointZOffsetFactor; // 0x218(0x04)
	float TouchForceFactor; // 0x21c(0x04)
	float MinTouchForce; // 0x220(0x04)
	float MaxTouchForce; // 0x224(0x04)
	float RepulsionForce; // 0x228(0x04)
	struct FVector Acceleration; // 0x22c(0x0c)
	char UnknownData_238[0x8]; // 0x238(0x08)
	struct FQuat LastUpdateRotation; // 0x240(0x10)
	struct FVector LastUpdateLocation; // 0x250(0x0c)
	struct FVector LastUpdateVelocity; // 0x25c(0x0c)
	float ServerLastTransformUpdateTimeStamp; // 0x268(0x04)
	float ServerLastClientGoodMoveAckTime; // 0x26c(0x04)
	float ServerLastClientAdjustmentTime; // 0x270(0x04)
	struct FVector PendingImpulseToApply; // 0x274(0x0c)
	struct FVector PendingForceToApply; // 0x280(0x0c)
	float AnalogInputModifier; // 0x28c(0x04)
	char UnknownData_290[0xc]; // 0x290(0x0c)
	float MaxSimulationTimeStep; // 0x29c(0x04)
	int32_t MaxSimulationIterations; // 0x2a0(0x04)
	int32_t MaxJumpApexAttemptsPerSimulation; // 0x2a4(0x04)
	float MaxDepenetrationWithGeometry; // 0x2a8(0x04)
	float MaxDepenetrationWithGeometryAsProxy; // 0x2ac(0x04)
	float MaxDepenetrationWithPawn; // 0x2b0(0x04)
	float MaxDepenetrationWithPawnAsProxy; // 0x2b4(0x04)
	float NetworkSimulatedSmoothLocationTime; // 0x2b8(0x04)
	float NetworkSimulatedSmoothRotationTime; // 0x2bc(0x04)
	float ListenServerNetworkSimulatedSmoothLocationTime; // 0x2c0(0x04)
	float ListenServerNetworkSimulatedSmoothRotationTime; // 0x2c4(0x04)
	float NetProxyShrinkRadius; // 0x2c8(0x04)
	float NetProxyShrinkHalfHeight; // 0x2cc(0x04)
	float NetworkMaxSmoothUpdateDistance; // 0x2d0(0x04)
	float NetworkNoSmoothUpdateDistance; // 0x2d4(0x04)
	float NetworkMinTimeBetweenClientAckGoodMoves; // 0x2d8(0x04)
	float NetworkMinTimeBetweenClientAdjustments; // 0x2dc(0x04)
	float NetworkMinTimeBetweenClientAdjustmentsLargeCorrection; // 0x2e0(0x04)
	float NetworkLargeClientCorrectionDistance; // 0x2e4(0x04)
	float LedgeCheckThreshold; // 0x2e8(0x04)
	float JumpOutOfWaterPitch; // 0x2ec(0x04)
	struct FFindFloorResult CurrentFloor; // 0x2f0(0x94)
	char DefaultLandMovementMode; // 0x384(0x01)
	char DefaultWaterMovementMode; // 0x385(0x01)
	char GroundMovementMode; // 0x386(0x01)
	char bMaintainHorizontalGroundVelocity : 1; // 0x387(0x01)
	char bImpartBaseVelocityX : 1; // 0x387(0x01)
	char bImpartBaseVelocityY : 1; // 0x387(0x01)
	char bImpartBaseVelocityZ : 1; // 0x387(0x01)
	char bImpartBaseAngularVelocity : 1; // 0x387(0x01)
	char bJustTeleported : 1; // 0x387(0x01)
	char bNetworkUpdateReceived : 1; // 0x387(0x01)
	char bNetworkMovementModeChanged : 1; // 0x387(0x01)
	char bIgnoreClientMovementErrorChecksAndCorrection : 1; // 0x388(0x01)
	char bServerAcceptClientAuthoritativePosition : 1; // 0x388(0x01)
	char bNotifyApex : 1; // 0x388(0x01)
	char bCheatFlying : 1; // 0x388(0x01)
	char bWantsToCrouch : 1; // 0x388(0x01)
	char bCrouchMaintainsBaseLocation : 1; // 0x388(0x01)
	char bIgnoreBaseRotation : 1; // 0x388(0x01)
	char bFastAttachedMove : 1; // 0x388(0x01)
	char bAlwaysCheckFloor : 1; // 0x389(0x01)
	char bUseFlatBaseForFloorChecks : 1; // 0x389(0x01)
	char bPerformingJumpOff : 1; // 0x389(0x01)
	char bWantsToLeaveNavWalking : 1; // 0x389(0x01)
	char bUseRVOAvoidance : 1; // 0x389(0x01)
	char bRequestedMoveUseAcceleration : 1; // 0x389(0x01)
	char UnknownData_389_6 : 1; // 0x389(0x01)
	char bWasSimulatingRootMotion : 1; // 0x389(0x01)
	char bAllowPhysicsRotationDuringAnimRootMotion : 1; // 0x38a(0x01)
	char bHasRequestedVelocity : 1; // 0x38a(0x01)
	char bRequestedMoveWithMaxSpeed : 1; // 0x38a(0x01)
	char bWasAvoidanceUpdated : 1; // 0x38a(0x01)
	char UnknownData_38A_4 : 2; // 0x38a(0x01)
	char bProjectNavMeshWalking : 1; // 0x38a(0x01)
	char bProjectNavMeshOnBothWorldChannels : 1; // 0x38a(0x01)
	char UnknownData_38B[0x15]; // 0x38b(0x15)
	float AvoidanceConsiderationRadius; // 0x3a0(0x04)
	struct FVector RequestedVelocity; // 0x3a4(0x0c)
	int32_t AvoidanceUID; // 0x3b0(0x04)
	struct FNavAvoidanceMask AvoidanceGroup; // 0x3b4(0x04)
	struct FNavAvoidanceMask GroupsToAvoid; // 0x3b8(0x04)
	struct FNavAvoidanceMask GroupsToIgnore; // 0x3bc(0x04)
	float AvoidanceWeight; // 0x3c0(0x04)
	struct FVector PendingLaunchVelocity; // 0x3c4(0x0c)
	char UnknownData_3D0[0xa0]; // 0x3d0(0xa0)
	float NavMeshProjectionInterval; // 0x470(0x04)
	float NavMeshProjectionTimer; // 0x474(0x04)
	float NavMeshProjectionInterpSpeed; // 0x478(0x04)
	float NavMeshProjectionHeightScaleUp; // 0x47c(0x04)
	float NavMeshProjectionHeightScaleDown; // 0x480(0x04)
	float NavWalkingFloorDistTolerance; // 0x484(0x04)
	struct FCharacterMovementComponentPostPhysicsTickFunction PostPhysicsTickFunction; // 0x488(0x30)
	char UnknownData_4B8[0x18]; // 0x4b8(0x18)
	float MinTimeBetweenTimeStampResets; // 0x4d0(0x04)
	char UnknownData_4D4[0x4]; // 0x4d4(0x04)
	struct FRootMotionSourceGroup CurrentRootMotion; // 0x4d8(0x38)
	char UnknownData_510[0x90]; // 0x510(0x90)
	struct FRootMotionMovementParams RootMotionParams; // 0x5a0(0x40)
	struct FVector AnimRootMotionVelocity; // 0x5e0(0x0c)
	char UnknownData_5EC[0x24]; // 0x5ec(0x24)

	void SetWalkableFloorZ(float InWalkableFloorZ); // Function Engine.CharacterMovementComponent.SetWalkableFloorZ
	void SetWalkableFloorAngle(float InWalkableFloorAngle); // Function Engine.CharacterMovementComponent.SetWalkableFloorAngle
	void SetMovementMode(char NewMovementMode, char NewCustomMode); // Function Engine.CharacterMovementComponent.SetMovementMode
	void SetGroupsToIgnoreMask(struct FNavAvoidanceMask GroupMask); // Function Engine.CharacterMovementComponent.SetGroupsToIgnoreMask
	void SetGroupsToIgnore(int32_t GroupFlags); // Function Engine.CharacterMovementComponent.SetGroupsToIgnore
	void SetGroupsToAvoidMask(struct FNavAvoidanceMask GroupMask); // Function Engine.CharacterMovementComponent.SetGroupsToAvoidMask
	void SetGroupsToAvoid(int32_t GroupFlags); // Function Engine.CharacterMovementComponent.SetGroupsToAvoid
	void SetAvoidanceGroupMask(struct FNavAvoidanceMask GroupMask); // Function Engine.CharacterMovementComponent.SetAvoidanceGroupMask
	void SetAvoidanceGroup(int32_t GroupFlags); // Function Engine.CharacterMovementComponent.SetAvoidanceGroup
	void SetAvoidanceEnabled(bool bEnable); // Function Engine.CharacterMovementComponent.SetAvoidanceEnabled
	float K2_GetWalkableFloorZ(); // Function Engine.CharacterMovementComponent.K2_GetWalkableFloorZ
	float K2_GetWalkableFloorAngle(); // Function Engine.CharacterMovementComponent.K2_GetWalkableFloorAngle
	float K2_GetModifiedMaxAcceleration(); // Function Engine.CharacterMovementComponent.K2_GetModifiedMaxAcceleration
	void K2_FindFloor(struct FVector CapsuleLocation, struct FFindFloorResult FloorResult); // Function Engine.CharacterMovementComponent.K2_FindFloor
	void K2_ComputeFloorDist(struct FVector CapsuleLocation, float LineDistance, float SweepDistance, float SweepRadius, struct FFindFloorResult FloorResult); // Function Engine.CharacterMovementComponent.K2_ComputeFloorDist
	bool IsWalking(); // Function Engine.CharacterMovementComponent.IsWalking
	bool IsWalkable(struct FHitResult Hit); // Function Engine.CharacterMovementComponent.IsWalkable
	float GetValidPerchRadius(); // Function Engine.CharacterMovementComponent.GetValidPerchRadius
	float GetPerchRadiusThreshold(); // Function Engine.CharacterMovementComponent.GetPerchRadiusThreshold
	struct UPrimitiveComponent* GetMovementBase(); // Function Engine.CharacterMovementComponent.GetMovementBase
	float GetMinAnalogSpeed(); // Function Engine.CharacterMovementComponent.GetMinAnalogSpeed
	float GetMaxJumpHeightWithJumpTime(); // Function Engine.CharacterMovementComponent.GetMaxJumpHeightWithJumpTime
	float GetMaxJumpHeight(); // Function Engine.CharacterMovementComponent.GetMaxJumpHeight
	float GetMaxBrakingDeceleration(); // Function Engine.CharacterMovementComponent.GetMaxBrakingDeceleration
	float GetMaxAcceleration(); // Function Engine.CharacterMovementComponent.GetMaxAcceleration
	struct FVector GetLastUpdateVelocity(); // Function Engine.CharacterMovementComponent.GetLastUpdateVelocity
	struct FRotator GetLastUpdateRotation(); // Function Engine.CharacterMovementComponent.GetLastUpdateRotation
	struct FVector GetLastUpdateLocation(); // Function Engine.CharacterMovementComponent.GetLastUpdateLocation
	struct FVector GetImpartedMovementBaseVelocity(); // Function Engine.CharacterMovementComponent.GetImpartedMovementBaseVelocity
	struct FVector GetCurrentAcceleration(); // Function Engine.CharacterMovementComponent.GetCurrentAcceleration
	struct ACharacter* GetCharacterOwner(); // Function Engine.CharacterMovementComponent.GetCharacterOwner
	float GetAnalogInputModifier(); // Function Engine.CharacterMovementComponent.GetAnalogInputModifier
	void DisableMovement(); // Function Engine.CharacterMovementComponent.DisableMovement
	void ClearAccumulatedForces(); // Function Engine.CharacterMovementComponent.ClearAccumulatedForces
	void CapsuleTouched(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function Engine.CharacterMovementComponent.CapsuleTouched
	void CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration); // Function Engine.CharacterMovementComponent.CalcVelocity
	void AddImpulse(struct FVector Impulse, bool bVelocityChange); // Function Engine.CharacterMovementComponent.AddImpulse
	void AddForce(struct FVector Force); // Function Engine.CharacterMovementComponent.AddForce
};

// Class Engine.GameInstance
// Size: 0x198 (Inherited: 0x28)
struct UGameInstance : public UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
	struct TArray<struct ULocalPlayer*> LocalPlayers; // 0x38(0x10)
	struct UOnlineSession* OnlineSession; // 0x48(0x08)
	struct TArray<struct UObject*> ReferencedObjects; // 0x50(0x10)
	char UnknownData_60[0x138]; // 0x60(0x138)

	void ReceiveShutdown(); // Function Engine.GameInstance.ReceiveShutdown
	void ReceiveInit(); // Function Engine.GameInstance.ReceiveInit
	void HandleTravelError(char FailureType); // Function Engine.GameInstance.HandleTravelError
	void HandleNetworkError(char FailureType, bool bIsServer); // Function Engine.GameInstance.HandleNetworkError
	void DebugRemovePlayer(int32_t ControllerId); // Function Engine.GameInstance.DebugRemovePlayer
	void DebugCreatePlayer(int32_t ControllerId); // Function Engine.GameInstance.DebugCreatePlayer
};

// Class Engine.GameModeBase
// Size: 0x2c0 (Inherited: 0x220)
struct AGameModeBase : public AInfo {
	struct FString OptionsString; // 0x220(0x10)
	struct AGameSession* GameSessionClass; // 0x230(0x08)
	struct AGameStateBase* GameStateClass; // 0x238(0x08)
	struct APlayerController* PlayerControllerClass; // 0x240(0x08)
	struct APlayerState* PlayerStateClass; // 0x248(0x08)
	struct AHUD* HUDClass; // 0x250(0x08)
	struct APawn* DefaultPawnClass; // 0x258(0x08)
	struct ASpectatorPawn* SpectatorClass; // 0x260(0x08)
	struct APlayerController* ReplaySpectatorPlayerControllerClass; // 0x268(0x08)
	struct AServerStatReplicator* ServerStatReplicatorClass; // 0x270(0x08)
	struct AGameSession* GameSession; // 0x278(0x08)
	struct AGameStateBase* GameState; // 0x280(0x08)
	struct AServerStatReplicator* ServerStatReplicator; // 0x288(0x08)
	struct FText DefaultPlayerName; // 0x290(0x18)
	char bUseSeamlessTravel : 1; // 0x2a8(0x01)
	char bStartPlayersAsSpectators : 1; // 0x2a8(0x01)
	char bPauseable : 1; // 0x2a8(0x01)
	char UnknownData_2A8_3 : 5; // 0x2a8(0x01)
	char UnknownData_2A9[0x17]; // 0x2a9(0x17)

	void StartPlay(); // Function Engine.GameModeBase.StartPlay
	struct APawn* SpawnDefaultPawnFor(struct AController* NewPlayer, struct AActor* StartSpot); // Function Engine.GameModeBase.SpawnDefaultPawnFor
	struct APawn* SpawnDefaultPawnAtTransform(struct AController* NewPlayer, struct FTransform SpawnTransform); // Function Engine.GameModeBase.SpawnDefaultPawnAtTransform
	bool ShouldReset(struct AActor* ActorToReset); // Function Engine.GameModeBase.ShouldReset
	void ReturnToMainMenuHost(); // Function Engine.GameModeBase.ReturnToMainMenuHost
	void RestartPlayerAtTransform(struct AController* NewPlayer, struct FTransform SpawnTransform); // Function Engine.GameModeBase.RestartPlayerAtTransform
	void RestartPlayerAtPlayerStart(struct AController* NewPlayer, struct AActor* StartSpot); // Function Engine.GameModeBase.RestartPlayerAtPlayerStart
	void RestartPlayer(struct AController* NewPlayer); // Function Engine.GameModeBase.RestartPlayer
	void ResetLevel(); // Function Engine.GameModeBase.ResetLevel
	bool PlayerCanRestart(struct APlayerController* Player); // Function Engine.GameModeBase.PlayerCanRestart
	bool MustSpectate(struct APlayerController* NewPlayerController); // Function Engine.GameModeBase.MustSpectate
	void K2_PostLogin(struct APlayerController* NewPlayer); // Function Engine.GameModeBase.K2_PostLogin
	void K2_OnSwapPlayerControllers(struct APlayerController* OldPC, struct APlayerController* NewPC); // Function Engine.GameModeBase.K2_OnSwapPlayerControllers
	void K2_OnRestartPlayer(struct AController* NewPlayer); // Function Engine.GameModeBase.K2_OnRestartPlayer
	void K2_OnLogout(struct AController* ExitingController); // Function Engine.GameModeBase.K2_OnLogout
	void K2_OnChangeName(struct AController* Other, struct FString NewName, bool bNameChange); // Function Engine.GameModeBase.K2_OnChangeName
	struct AActor* K2_FindPlayerStart(struct AController* Player, struct FString IncomingName); // Function Engine.GameModeBase.K2_FindPlayerStart
	void InitStartSpot(struct AActor* StartSpot, struct AController* NewPlayer); // Function Engine.GameModeBase.InitStartSpot
	void InitializeHUDForPlayer(struct APlayerController* NewPlayer); // Function Engine.GameModeBase.InitializeHUDForPlayer
	bool HasMatchStarted(); // Function Engine.GameModeBase.HasMatchStarted
	void HandleStartingNewPlayer(struct APlayerController* NewPlayer); // Function Engine.GameModeBase.HandleStartingNewPlayer
	int32_t GetNumSpectators(); // Function Engine.GameModeBase.GetNumSpectators
	int32_t GetNumPlayers(); // Function Engine.GameModeBase.GetNumPlayers
	struct UObject* GetDefaultPawnClassForController(struct AController* InController); // Function Engine.GameModeBase.GetDefaultPawnClassForController
	struct AActor* FindPlayerStart(struct AController* Player, struct FString IncomingName); // Function Engine.GameModeBase.FindPlayerStart
	struct AActor* ChoosePlayerStart(struct AController* Player); // Function Engine.GameModeBase.ChoosePlayerStart
	void ChangeName(struct AController* Controller, struct FString NewName, bool bNameChange); // Function Engine.GameModeBase.ChangeName
	bool CanSpectate(struct APlayerController* Viewer, struct APlayerState* ViewTarget); // Function Engine.GameModeBase.CanSpectate
};

// Class Engine.GameMode
// Size: 0x308 (Inherited: 0x2c0)
struct AGameMode : public AGameModeBase {
	struct FName MatchState; // 0x2c0(0x08)
	char bDelayedStart : 1; // 0x2c8(0x01)
	char UnknownData_2C8_1 : 7; // 0x2c8(0x01)
	char UnknownData_2C9[0x3]; // 0x2c9(0x03)
	int32_t NumSpectators; // 0x2cc(0x04)
	int32_t NumPlayers; // 0x2d0(0x04)
	int32_t NumBots; // 0x2d4(0x04)
	float MinRespawnDelay; // 0x2d8(0x04)
	int32_t NumTravellingPlayers; // 0x2dc(0x04)
	struct ULocalMessage* EngineMessageClass; // 0x2e0(0x08)
	struct TArray<struct APlayerState*> InactivePlayerArray; // 0x2e8(0x10)
	float InactivePlayerStateLifeSpan; // 0x2f8(0x04)
	int32_t MaxInactivePlayers; // 0x2fc(0x04)
	bool bHandleDedicatedServerReplays; // 0x300(0x01)
	char UnknownData_301[0x7]; // 0x301(0x07)

	void StartMatch(); // Function Engine.GameMode.StartMatch
	void SetBandwidthLimit(float AsyncIOBandwidthLimit); // Function Engine.GameMode.SetBandwidthLimit
	void Say(struct FString Msg); // Function Engine.GameMode.Say
	void RestartGame(); // Function Engine.GameMode.RestartGame
	bool ReadyToStartMatch(); // Function Engine.GameMode.ReadyToStartMatch
	bool ReadyToEndMatch(); // Function Engine.GameMode.ReadyToEndMatch
	void K2_OnSetMatchState(struct FName NewState); // Function Engine.GameMode.K2_OnSetMatchState
	bool IsMatchInProgress(); // Function Engine.GameMode.IsMatchInProgress
	bool HasMatchEnded(); // Function Engine.GameMode.HasMatchEnded
	struct FName GetMatchState(); // Function Engine.GameMode.GetMatchState
	void EndMatch(); // Function Engine.GameMode.EndMatch
	void AbortMatch(); // Function Engine.GameMode.AbortMatch
};

// Class Engine.Controller
// Size: 0x298 (Inherited: 0x220)
struct AController : public AActor {
	char UnknownData_220[0x8]; // 0x220(0x08)
	struct APlayerState* PlayerState; // 0x228(0x08)
	char UnknownData_230[0x8]; // 0x230(0x08)
	struct FMulticastInlineDelegate OnInstigatedAnyDamage; // 0x238(0x10)
	struct FName StateName; // 0x248(0x08)
	struct APawn* Pawn; // 0x250(0x08)
	char UnknownData_258[0x8]; // 0x258(0x08)
	struct ACharacter* Character; // 0x260(0x08)
	struct USceneComponent* TransformComponent; // 0x268(0x08)
	char UnknownData_270[0x18]; // 0x270(0x18)
	struct FRotator ControlRotation; // 0x288(0x0c)
	char bAttachToPawn : 1; // 0x294(0x01)
	char UnknownData_294_1 : 7; // 0x294(0x01)
	char UnknownData_295[0x3]; // 0x295(0x03)

	void UnPossess(); // Function Engine.Controller.UnPossess
	void StopMovement(); // Function Engine.Controller.StopMovement
	void SetInitialLocationAndRotation(struct FVector NewLocation, struct FRotator NewRotation); // Function Engine.Controller.SetInitialLocationAndRotation
	void SetIgnoreMoveInput(bool bNewMoveInput); // Function Engine.Controller.SetIgnoreMoveInput
	void SetIgnoreLookInput(bool bNewLookInput); // Function Engine.Controller.SetIgnoreLookInput
	void SetControlRotation(struct FRotator NewRotation); // Function Engine.Controller.SetControlRotation
	void ResetIgnoreMoveInput(); // Function Engine.Controller.ResetIgnoreMoveInput
	void ResetIgnoreLookInput(); // Function Engine.Controller.ResetIgnoreLookInput
	void ResetIgnoreInputFlags(); // Function Engine.Controller.ResetIgnoreInputFlags
	void ReceiveUnPossess(struct APawn* UnpossessedPawn); // Function Engine.Controller.ReceiveUnPossess
	void ReceivePossess(struct APawn* PossessedPawn); // Function Engine.Controller.ReceivePossess
	void ReceiveInstigatedAnyDamage(float Damage, struct UDamageType* DamageType, struct AActor* DamagedActor, struct AActor* DamageCauser); // Function Engine.Controller.ReceiveInstigatedAnyDamage
	void Possess(struct APawn* InPawn); // Function Engine.Controller.Possess
	void OnRep_PlayerState(); // Function Engine.Controller.OnRep_PlayerState
	void OnRep_Pawn(); // Function Engine.Controller.OnRep_Pawn
	bool LineOfSightTo(struct AActor* Other, struct FVector ViewPoint, bool bAlternateChecks); // Function Engine.Controller.LineOfSightTo
	struct APawn* K2_GetPawn(); // Function Engine.Controller.K2_GetPawn
	bool IsPlayerController(); // Function Engine.Controller.IsPlayerController
	bool IsMoveInputIgnored(); // Function Engine.Controller.IsMoveInputIgnored
	bool IsLookInputIgnored(); // Function Engine.Controller.IsLookInputIgnored
	bool IsLocalPlayerController(); // Function Engine.Controller.IsLocalPlayerController
	bool IsLocalController(); // Function Engine.Controller.IsLocalController
	struct AActor* GetViewTarget(); // Function Engine.Controller.GetViewTarget
	struct FRotator GetDesiredRotation(); // Function Engine.Controller.GetDesiredRotation
	struct FRotator GetControlRotation(); // Function Engine.Controller.GetControlRotation
	void ClientSetRotation(struct FRotator NewRotation, bool bResetCamera); // Function Engine.Controller.ClientSetRotation
	void ClientSetLocation(struct FVector NewLocation, struct FRotator NewRotation); // Function Engine.Controller.ClientSetLocation
	struct APlayerController* CastToPlayerController(); // Function Engine.Controller.CastToPlayerController
};

// Class Engine.PlayerController
// Size: 0x588 (Inherited: 0x298)
struct APlayerController : public AController {
	struct UPlayer* Player; // 0x298(0x08)
	struct APawn* AcknowledgedPawn; // 0x2a0(0x08)
	struct UInterpTrackInstDirector* ControllingDirTrackInst; // 0x2a8(0x08)
	struct AHUD* MyHud; // 0x2b0(0x08)
	struct APlayerCameraManager* PlayerCameraManager; // 0x2b8(0x08)
	struct APlayerCameraManager* PlayerCameraManagerClass; // 0x2c0(0x08)
	bool bAutoManageActiveCameraTarget; // 0x2c8(0x01)
	char UnknownData_2C9[0x3]; // 0x2c9(0x03)
	struct FRotator TargetViewRotation; // 0x2cc(0x0c)
	char UnknownData_2D8[0xc]; // 0x2d8(0x0c)
	float SmoothTargetViewRotationSpeed; // 0x2e4(0x04)
	char UnknownData_2E8[0x8]; // 0x2e8(0x08)
	struct TArray<struct AActor*> HiddenActors; // 0x2f0(0x10)
	struct TArray<struct FWeakObjectPtr<struct UPrimitiveComponent>> HiddenPrimitiveComponents; // 0x300(0x10)
	char UnknownData_310[0x4]; // 0x310(0x04)
	float LastSpectatorStateSynchTime; // 0x314(0x04)
	struct FVector LastSpectatorSyncLocation; // 0x318(0x0c)
	struct FRotator LastSpectatorSyncRotation; // 0x324(0x0c)
	int32_t ClientCap; // 0x330(0x04)
	char UnknownData_334[0x4]; // 0x334(0x04)
	struct UCheatManager* CheatManager; // 0x338(0x08)
	struct UCheatManager* CheatClass; // 0x340(0x08)
	struct UPlayerInput* PlayerInputClass; // 0x348(0x08)
	struct UPlayerInput* PlayerInput; // 0x350(0x08)
	struct TArray<struct FActiveForceFeedbackEffect> ActiveForceFeedbackEffects; // 0x358(0x10)
	char UnknownData_368[0x70]; // 0x368(0x70)
	char UnknownData_3D8_0 : 4; // 0x3d8(0x01)
	char bPlayerIsWaiting : 1; // 0x3d8(0x01)
	char UnknownData_3D8_5 : 3; // 0x3d8(0x01)
	char UnknownData_3D9[0x3]; // 0x3d9(0x03)
	char NetPlayerIndex; // 0x3dc(0x01)
	char UnknownData_3DD[0x3b]; // 0x3dd(0x3b)
	struct UNetConnection* PendingSwapConnection; // 0x418(0x08)
	struct UNetConnection* NetConnection; // 0x420(0x08)
	char UnknownData_428[0x18]; // 0x428(0x18)
	float InputYawScale; // 0x440(0x04)
	float InputPitchScale; // 0x444(0x04)
	float InputRollScale; // 0x448(0x04)
	char bShowMouseCursor : 1; // 0x44c(0x01)
	char bEnableClickEvents : 1; // 0x44c(0x01)
	char bEnableTouchEvents : 1; // 0x44c(0x01)
	char bEnableMouseOverEvents : 1; // 0x44c(0x01)
	char bEnableTouchOverEvents : 1; // 0x44c(0x01)
	char bForceFeedbackEnabled : 1; // 0x44c(0x01)
	char UnknownData_44C_6 : 2; // 0x44c(0x01)
	char UnknownData_44D[0x3]; // 0x44d(0x03)
	float ForceFeedbackScale; // 0x450(0x04)
	char UnknownData_454[0x4]; // 0x454(0x04)
	struct TArray<struct FKey> ClickEventKeys; // 0x458(0x10)
	char DefaultMouseCursor; // 0x468(0x01)
	char CurrentMouseCursor; // 0x469(0x01)
	char DefaultClickTraceChannel; // 0x46a(0x01)
	char CurrentClickTraceChannel; // 0x46b(0x01)
	float HitResultTraceDistance; // 0x46c(0x04)
	uint16_t SeamlessTravelCount; // 0x470(0x02)
	uint16_t LastCompletedSeamlessTravelCount; // 0x472(0x02)
	char UnknownData_474[0x74]; // 0x474(0x74)
	struct UInputComponent* InactiveStateInputComponent; // 0x4e8(0x08)
	char UnknownData_4F0_0 : 2; // 0x4f0(0x01)
	char bShouldPerformFullTickWhenPaused : 1; // 0x4f0(0x01)
	char UnknownData_4F0_3 : 5; // 0x4f0(0x01)
	char UnknownData_4F1[0x17]; // 0x4f1(0x17)
	struct UTouchInterface* CurrentTouchInterface; // 0x508(0x08)
	char UnknownData_510[0x50]; // 0x510(0x50)
	struct ASpectatorPawn* SpectatorPawn; // 0x560(0x08)
	char UnknownData_568[0x4]; // 0x568(0x04)
	bool bIsLocalPlayerController; // 0x56c(0x01)
	char UnknownData_56D[0x3]; // 0x56d(0x03)
	struct FVector SpawnLocation; // 0x570(0x0c)
	char UnknownData_57C[0xc]; // 0x57c(0x0c)

	bool WasInputKeyJustReleased(struct FKey Key); // Function Engine.PlayerController.WasInputKeyJustReleased
	bool WasInputKeyJustPressed(struct FKey Key); // Function Engine.PlayerController.WasInputKeyJustPressed
	void ToggleSpeaking(bool bInSpeaking); // Function Engine.PlayerController.ToggleSpeaking
	void TestServerLevelVisibilityChange(struct FName PackageName, struct FName Filename); // Function Engine.PlayerController.TestServerLevelVisibilityChange
	void SwitchLevel(struct FString URL); // Function Engine.PlayerController.SwitchLevel
	void StopHapticEffect(enum class EControllerHand Hand); // Function Engine.PlayerController.StopHapticEffect
	void StartFire(char FireModeNum); // Function Engine.PlayerController.StartFire
	void SetVirtualJoystickVisibility(bool bVisible); // Function Engine.PlayerController.SetVirtualJoystickVisibility
	void SetViewTargetWithBlend(struct AActor* NewViewTarget, float BlendTime, char BlendFunc, float BlendExp, bool bLockOutgoing); // Function Engine.PlayerController.SetViewTargetWithBlend
	void SetShowMouseCursor(bool bShouldShow); // Function Engine.PlayerController.SetShowMouseCursor
	void SetName(struct FString S); // Function Engine.PlayerController.SetName
	void SetMouseLocation(int32_t X, int32_t Y); // Function Engine.PlayerController.SetMouseLocation
	void SetMouseCursorWidget(char Cursor, struct UUserWidget* CursorWidget); // Function Engine.PlayerController.SetMouseCursorWidget
	void SetHapticsByValue(float Frequency, float Amplitude, enum class EControllerHand Hand); // Function Engine.PlayerController.SetHapticsByValue
	void SetDisableHaptics(bool bNewDisabled); // Function Engine.PlayerController.SetDisableHaptics
	void SetControllerLightColor(struct FColor Color); // Function Engine.PlayerController.SetControllerLightColor
	void SetCinematicMode(bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning); // Function Engine.PlayerController.SetCinematicMode
	void SetAudioListenerOverride(struct USceneComponent* AttachToComponent, struct FVector Location, struct FRotator Rotation); // Function Engine.PlayerController.SetAudioListenerOverride
	void SetAudioListenerAttenuationOverride(struct USceneComponent* AttachToComponent, struct FVector AttenuationLocationOVerride); // Function Engine.PlayerController.SetAudioListenerAttenuationOverride
	void ServerViewSelf(struct FViewTargetTransitionParams TransitionParams); // Function Engine.PlayerController.ServerViewSelf
	void ServerViewPrevPlayer(); // Function Engine.PlayerController.ServerViewPrevPlayer
	void ServerViewNextPlayer(); // Function Engine.PlayerController.ServerViewNextPlayer
	void ServerVerifyViewTarget(); // Function Engine.PlayerController.ServerVerifyViewTarget
	void ServerUpdateMultipleLevelsVisibility(struct TArray<struct FUpdateLevelVisibilityLevelInfo> LevelVisibilities); // Function Engine.PlayerController.ServerUpdateMultipleLevelsVisibility
	void ServerUpdateLevelVisibility(struct FUpdateLevelVisibilityLevelInfo LevelVisibility); // Function Engine.PlayerController.ServerUpdateLevelVisibility
	void ServerUpdateCamera(struct FVector_NetQuantize CamLoc, int32_t CamPitchAndYaw); // Function Engine.PlayerController.ServerUpdateCamera
	void ServerUnmutePlayer(struct FUniqueNetIdRepl PlayerId); // Function Engine.PlayerController.ServerUnmutePlayer
	void ServerToggleAILogging(); // Function Engine.PlayerController.ServerToggleAILogging
	void ServerShortTimeout(); // Function Engine.PlayerController.ServerShortTimeout
	void ServerSetSpectatorWaiting(bool bWaiting); // Function Engine.PlayerController.ServerSetSpectatorWaiting
	void ServerSetSpectatorLocation(struct FVector NewLoc, struct FRotator NewRot); // Function Engine.PlayerController.ServerSetSpectatorLocation
	void ServerRestartPlayer(); // Function Engine.PlayerController.ServerRestartPlayer
	void ServerPause(); // Function Engine.PlayerController.ServerPause
	void ServerNotifyLoadedWorld(struct FName WorldPackageName); // Function Engine.PlayerController.ServerNotifyLoadedWorld
	void ServerMutePlayer(struct FUniqueNetIdRepl PlayerId); // Function Engine.PlayerController.ServerMutePlayer
	void ServerExecRPC(struct FString Msg); // Function Engine.PlayerController.ServerExecRPC
	void ServerExec(struct FString Msg); // Function Engine.PlayerController.ServerExec
	void ServerCheckClientPossessionReliable(); // Function Engine.PlayerController.ServerCheckClientPossessionReliable
	void ServerCheckClientPossession(); // Function Engine.PlayerController.ServerCheckClientPossession
	void ServerChangeName(struct FString S); // Function Engine.PlayerController.ServerChangeName
	void ServerCamera(struct FName NewMode); // Function Engine.PlayerController.ServerCamera
	void ServerAcknowledgePossession(struct APawn* P); // Function Engine.PlayerController.ServerAcknowledgePossession
	void SendToConsole(struct FString Command); // Function Engine.PlayerController.SendToConsole
	void RestartLevel(); // Function Engine.PlayerController.RestartLevel
	void ResetControllerLightColor(); // Function Engine.PlayerController.ResetControllerLightColor
	bool ProjectWorldLocationToScreen(struct FVector WorldLocation, struct FVector2D ScreenLocation, bool bPlayerViewportRelative); // Function Engine.PlayerController.ProjectWorldLocationToScreen
	void PlayHapticEffect(struct UHapticFeedbackEffect_Base* HapticEffect, enum class EControllerHand Hand, float Scale, bool bLoop); // Function Engine.PlayerController.PlayHapticEffect
	void PlayDynamicForceFeedback(float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, char Action, struct FLatentActionInfo LatentInfo); // Function Engine.PlayerController.PlayDynamicForceFeedback
	void Pause(); // Function Engine.PlayerController.Pause
	void OnServerStartedVisualLogger(bool bIsLogging); // Function Engine.PlayerController.OnServerStartedVisualLogger
	void LocalTravel(struct FString URL); // Function Engine.PlayerController.LocalTravel
	void K2_ClientPlayForceFeedback(struct UForceFeedbackEffect* ForceFeedbackEffect, struct FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused); // Function Engine.PlayerController.K2_ClientPlayForceFeedback
	bool IsInputKeyDown(struct FKey Key); // Function Engine.PlayerController.IsInputKeyDown
	void GetViewportSize(int32_t SizeX, int32_t SizeY); // Function Engine.PlayerController.GetViewportSize
	struct ASpectatorPawn* GetSpectatorPawn(); // Function Engine.PlayerController.GetSpectatorPawn
	bool GetMousePosition(float LocationX, float LocationY); // Function Engine.PlayerController.GetMousePosition
	struct FVector GetInputVectorKeyState(struct FKey Key); // Function Engine.PlayerController.GetInputVectorKeyState
	void GetInputTouchState(char FingerIndex, float LocationX, float LocationY, bool bIsCurrentlyPressed); // Function Engine.PlayerController.GetInputTouchState
	void GetInputMouseDelta(float DeltaX, float DeltaY); // Function Engine.PlayerController.GetInputMouseDelta
	void GetInputMotionState(struct FVector Tilt, struct FVector RotationRate, struct FVector Gravity, struct FVector Acceleration); // Function Engine.PlayerController.GetInputMotionState
	float GetInputKeyTimeDown(struct FKey Key); // Function Engine.PlayerController.GetInputKeyTimeDown
	void GetInputAnalogStickState(char WhichStick, float StickX, float StickY); // Function Engine.PlayerController.GetInputAnalogStickState
	float GetInputAnalogKeyState(struct FKey Key); // Function Engine.PlayerController.GetInputAnalogKeyState
	struct AHUD* GetHUD(); // Function Engine.PlayerController.GetHUD
	bool GetHitResultUnderFingerForObjects(char FingerIndex, struct TArray<char> ObjectTypes, bool bTraceComplex, struct FHitResult HitResult); // Function Engine.PlayerController.GetHitResultUnderFingerForObjects
	bool GetHitResultUnderFingerByChannel(char FingerIndex, char TraceChannel, bool bTraceComplex, struct FHitResult HitResult); // Function Engine.PlayerController.GetHitResultUnderFingerByChannel
	bool GetHitResultUnderFinger(char FingerIndex, char TraceChannel, bool bTraceComplex, struct FHitResult HitResult); // Function Engine.PlayerController.GetHitResultUnderFinger
	bool GetHitResultUnderCursorForObjects(struct TArray<char> ObjectTypes, bool bTraceComplex, struct FHitResult HitResult); // Function Engine.PlayerController.GetHitResultUnderCursorForObjects
	bool GetHitResultUnderCursorByChannel(char TraceChannel, bool bTraceComplex, struct FHitResult HitResult); // Function Engine.PlayerController.GetHitResultUnderCursorByChannel
	bool GetHitResultUnderCursor(char TraceChannel, bool bTraceComplex, struct FHitResult HitResult); // Function Engine.PlayerController.GetHitResultUnderCursor
	struct FVector GetFocalLocation(); // Function Engine.PlayerController.GetFocalLocation
	void FOV(float NewFOV); // Function Engine.PlayerController.FOV
	void EnableCheats(); // Function Engine.PlayerController.EnableCheats
	bool DeprojectScreenPositionToWorld(float ScreenX, float ScreenY, struct FVector WorldLocation, struct FVector WorldDirection); // Function Engine.PlayerController.DeprojectScreenPositionToWorld
	bool DeprojectMousePositionToWorld(struct FVector WorldLocation, struct FVector WorldDirection); // Function Engine.PlayerController.DeprojectMousePositionToWorld
	void ConsoleKey(struct FKey Key); // Function Engine.PlayerController.ConsoleKey
	void ClientWasKicked(struct FText KickReason); // Function Engine.PlayerController.ClientWasKicked
	void ClientVoiceHandshakeComplete(); // Function Engine.PlayerController.ClientVoiceHandshakeComplete
	void ClientUpdateMultipleLevelsStreamingStatus(struct TArray<struct FUpdateLevelStreamingLevelStatus> LevelStatuses); // Function Engine.PlayerController.ClientUpdateMultipleLevelsStreamingStatus
	void ClientUpdateLevelStreamingStatus(struct FName PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int32_t LODIndex); // Function Engine.PlayerController.ClientUpdateLevelStreamingStatus
	void ClientUnmutePlayer(struct FUniqueNetIdRepl PlayerId); // Function Engine.PlayerController.ClientUnmutePlayer
	void ClientTravelInternal(struct FString URL, char TravelType, bool bSeamless, struct FGuid MapPackageGuid); // Function Engine.PlayerController.ClientTravelInternal
	void ClientTravel(struct FString URL, char TravelType, bool bSeamless, struct FGuid MapPackageGuid); // Function Engine.PlayerController.ClientTravel
	void ClientTeamMessage(struct APlayerState* SenderPlayerState, struct FString S, struct FName Type, float MsgLifeTime); // Function Engine.PlayerController.ClientTeamMessage
	void ClientStopForceFeedback(struct UForceFeedbackEffect* ForceFeedbackEffect, struct FName Tag); // Function Engine.PlayerController.ClientStopForceFeedback
	void ClientStopCameraShakesFromSource(struct UCameraShakeSourceComponent* SourceComponent, bool bImmediately); // Function Engine.PlayerController.ClientStopCameraShakesFromSource
	void ClientStopCameraShake(struct UCameraShake* Shake, bool bImmediately); // Function Engine.PlayerController.ClientStopCameraShake
	void ClientStopCameraAnim(struct UCameraAnim* AnimToStop); // Function Engine.PlayerController.ClientStopCameraAnim
	void ClientStartOnlineSession(); // Function Engine.PlayerController.ClientStartOnlineSession
	void ClientSpawnCameraLensEffect(struct AEmitterCameraLensEffectBase* LensEffectEmitterClass); // Function Engine.PlayerController.ClientSpawnCameraLensEffect
	void ClientSetViewTarget(struct AActor* A, struct FViewTargetTransitionParams TransitionParams); // Function Engine.PlayerController.ClientSetViewTarget
	void ClientSetSpectatorWaiting(bool bWaiting); // Function Engine.PlayerController.ClientSetSpectatorWaiting
	void ClientSetHUD(struct AHUD* NewHUDClass); // Function Engine.PlayerController.ClientSetHUD
	void ClientSetForceMipLevelsToBeResident(struct UMaterialInterface* Material, float ForceDuration, int32_t CinematicTextureGroups); // Function Engine.PlayerController.ClientSetForceMipLevelsToBeResident
	void ClientSetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD); // Function Engine.PlayerController.ClientSetCinematicMode
	void ClientSetCameraMode(struct FName NewCamMode); // Function Engine.PlayerController.ClientSetCameraMode
	void ClientSetCameraFade(bool bEnableFading, struct FColor FadeColor, struct FVector2D FadeAlpha, float FadeTime, bool bFadeAudio); // Function Engine.PlayerController.ClientSetCameraFade
	void ClientSetBlockOnAsyncLoading(); // Function Engine.PlayerController.ClientSetBlockOnAsyncLoading
	void ClientReturnToMainMenuWithTextReason(struct FText ReturnReason); // Function Engine.PlayerController.ClientReturnToMainMenuWithTextReason
	void ClientReturnToMainMenu(struct FString ReturnReason); // Function Engine.PlayerController.ClientReturnToMainMenu
	void ClientRetryClientRestart(struct APawn* NewPawn); // Function Engine.PlayerController.ClientRetryClientRestart
	void ClientRestart(struct APawn* NewPawn); // Function Engine.PlayerController.ClientRestart
	void ClientReset(); // Function Engine.PlayerController.ClientReset
	void ClientRepObjRef(struct UObject* Object); // Function Engine.PlayerController.ClientRepObjRef
	void ClientReceiveLocalizedMessage(struct ULocalMessage* Message, int32_t Switch, struct APlayerState* RelatedPlayerState_2, struct APlayerState* RelatedPlayerState_3, struct UObject* OptionalObject); // Function Engine.PlayerController.ClientReceiveLocalizedMessage
	void ClientPrestreamTextures(struct AActor* ForcedActor, float ForceDuration, bool bEnableStreaming, int32_t CinematicTextureGroups); // Function Engine.PlayerController.ClientPrestreamTextures
	void ClientPrepareMapChange(struct FName LevelName, bool bFirst, bool bLast); // Function Engine.PlayerController.ClientPrepareMapChange
	void ClientPlaySoundAtLocation(struct USoundBase* Sound, struct FVector Location, float VolumeMultiplier, float PitchMultiplier); // Function Engine.PlayerController.ClientPlaySoundAtLocation
	void ClientPlaySound(struct USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier); // Function Engine.PlayerController.ClientPlaySound
	void ClientPlayForceFeedback_Internal(struct UForceFeedbackEffect* ForceFeedbackEffect, struct FForceFeedbackParameters Params); // Function Engine.PlayerController.ClientPlayForceFeedback_Internal
	void ClientPlayCameraShakeFromSource(struct UCameraShake* Shake, struct UCameraShakeSourceComponent* SourceComponent); // Function Engine.PlayerController.ClientPlayCameraShakeFromSource
	void ClientPlayCameraShake(struct UCameraShake* Shake, float Scale, char PlaySpace, struct FRotator UserPlaySpaceRot); // Function Engine.PlayerController.ClientPlayCameraShake
	void ClientPlayCameraAnim(struct UCameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, char Space, struct FRotator CustomPlaySpace); // Function Engine.PlayerController.ClientPlayCameraAnim
	void ClientMutePlayer(struct FUniqueNetIdRepl PlayerId); // Function Engine.PlayerController.ClientMutePlayer
	void ClientMessage(struct FString S, struct FName Type, float MsgLifeTime); // Function Engine.PlayerController.ClientMessage
	void ClientIgnoreMoveInput(bool bIgnore); // Function Engine.PlayerController.ClientIgnoreMoveInput
	void ClientIgnoreLookInput(bool bIgnore); // Function Engine.PlayerController.ClientIgnoreLookInput
	void ClientGotoState(struct FName NewState); // Function Engine.PlayerController.ClientGotoState
	void ClientGameEnded(struct AActor* EndGameFocus, bool bIsWinner); // Function Engine.PlayerController.ClientGameEnded
	void ClientForceGarbageCollection(); // Function Engine.PlayerController.ClientForceGarbageCollection
	void ClientFlushLevelStreaming(); // Function Engine.PlayerController.ClientFlushLevelStreaming
	void ClientEndOnlineSession(); // Function Engine.PlayerController.ClientEndOnlineSession
	void ClientEnableNetworkVoice(bool bEnable); // Function Engine.PlayerController.ClientEnableNetworkVoice
	void ClientCommitMapChange(); // Function Engine.PlayerController.ClientCommitMapChange
	void ClientClearCameraLensEffects(); // Function Engine.PlayerController.ClientClearCameraLensEffects
	void ClientCapBandwidth(int32_t Cap); // Function Engine.PlayerController.ClientCapBandwidth
	void ClientCancelPendingMapChange(); // Function Engine.PlayerController.ClientCancelPendingMapChange
	void ClientAddTextureStreamingLoc(struct FVector InLoc, float Duration, bool bOverrideLocation); // Function Engine.PlayerController.ClientAddTextureStreamingLoc
	void ClearAudioListenerOverride(); // Function Engine.PlayerController.ClearAudioListenerOverride
	void ClearAudioListenerAttenuationOverride(); // Function Engine.PlayerController.ClearAudioListenerAttenuationOverride
	bool CanRestartPlayer(); // Function Engine.PlayerController.CanRestartPlayer
	void Camera(struct FName NewMode); // Function Engine.PlayerController.Camera
	void AddYawInput(float Val); // Function Engine.PlayerController.AddYawInput
	void AddRollInput(float Val); // Function Engine.PlayerController.AddRollInput
	void AddPitchInput(float Val); // Function Engine.PlayerController.AddPitchInput
	void ActivateTouchInterface(struct UTouchInterface* NewTouchInterface); // Function Engine.PlayerController.ActivateTouchInterface
};

// Class Engine.PlayerInput
// Size: 0x12f0 (Inherited: 0x28)
struct UPlayerInput : public UObject {
	char UnknownData_28[0xf8]; // 0x28(0xf8)
	struct TArray<struct FKeyBind> DebugExecBindings; // 0x120(0x10)
	char UnknownData_130[0x30]; // 0x130(0x30)
	struct TArray<struct FName> InvertedAxis; // 0x160(0x10)
	char UnknownData_170[0x238]; // 0x170(0x238)
	float TouchRegionMaxFullAxisLength; // 0x3a8(0x04)
	float TouchRegionMaxFullAxisDeadZoneLength; // 0x3ac(0x04)
	float TouchRegionMaxDeltaAxisLength; // 0x3b0(0x04)
	float TouchRegionSwipeMaxDuration; // 0x3b4(0x04)
	float TouchRegionSwipeMinLength; // 0x3b8(0x04)
	float TouchRegionSwipeDirectionAngleThreshold; // 0x3bc(0x04)
	float TouchRegionTapMaxDuration; // 0x3c0(0x04)
	float TouchRegionTapMaxLength; // 0x3c4(0x04)
	float TouchRegionDoubleTapMaxLength; // 0x3c8(0x04)
	float TouchRegionDoubleTapMaxDuration; // 0x3cc(0x04)
	float TouchRegionDeltaAxisSmoothSpeed; // 0x3d0(0x04)
	float TouchRegionDeltaAxisSmoothSnapThreshold; // 0x3d4(0x04)
	struct FSoftObjectPath TouchRegionFullAxisMultiplierCurvePath; // 0x3d8(0x18)
	struct FSoftObjectPath TouchRegionDeltaAxisMultiplierCurvePath; // 0x3f0(0x18)
	struct TArray<struct FTouchRegion> TouchRegions; // 0x408(0x10)
	char UnknownData_418[0xed8]; // 0x418(0xed8)

	void SetMouseSensitivity(float Sensitivity); // Function Engine.PlayerInput.SetMouseSensitivity
	void SetBind(struct FName BindName, struct FString Command); // Function Engine.PlayerInput.SetBind
	void InvertAxisKey(struct FKey AxisKey); // Function Engine.PlayerInput.InvertAxisKey
	void InvertAxis(struct FName AxisName); // Function Engine.PlayerInput.InvertAxis
	void ClearSmoothing(); // Function Engine.PlayerInput.ClearSmoothing
};

// Class Engine.InputComponent
// Size: 0x138 (Inherited: 0xb0)
struct UInputComponent : public UActorComponent {
	char UnknownData_B0[0x70]; // 0xb0(0x70)
	struct TArray<struct FCachedKeyToActionInfo> CachedKeyToActionInfo; // 0x120(0x10)
	char UnknownData_130[0x8]; // 0x130(0x08)

	bool WasControllerKeyJustReleased(struct FKey Key); // Function Engine.InputComponent.WasControllerKeyJustReleased
	bool WasControllerKeyJustPressed(struct FKey Key); // Function Engine.InputComponent.WasControllerKeyJustPressed
	bool IsControllerKeyDown(struct FKey Key); // Function Engine.InputComponent.IsControllerKeyDown
	void GetTouchState(int32_t FingerIndex, float LocationX, float LocationY, bool bIsCurrentlyPressed); // Function Engine.InputComponent.GetTouchState
	struct FVector GetControllerVectorKeyState(struct FKey Key); // Function Engine.InputComponent.GetControllerVectorKeyState
	void GetControllerMouseDelta(float DeltaX, float DeltaY); // Function Engine.InputComponent.GetControllerMouseDelta
	float GetControllerKeyTimeDown(struct FKey Key); // Function Engine.InputComponent.GetControllerKeyTimeDown
	void GetControllerAnalogStickState(char WhichStick, float StickX, float StickY); // Function Engine.InputComponent.GetControllerAnalogStickState
	float GetControllerAnalogKeyState(struct FKey Key); // Function Engine.InputComponent.GetControllerAnalogKeyState
};

// Class Engine.ScriptViewportClient
// Size: 0x38 (Inherited: 0x28)
struct UScriptViewportClient : public UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
};

// Class Engine.GameViewportClient
// Size: 0x338 (Inherited: 0x38)
struct UGameViewportClient : public UScriptViewportClient {
	char UnknownData_38[0x8]; // 0x38(0x08)
	struct UConsole* ViewportConsole; // 0x40(0x08)
	struct TArray<struct FDebugDisplayProperty> DebugProperties; // 0x48(0x10)
	char UnknownData_58[0x10]; // 0x58(0x10)
	int32_t MaxSplitscreenPlayers; // 0x68(0x04)
	char UnknownData_6C[0xc]; // 0x6c(0x0c)
	struct UWorld* World; // 0x78(0x08)
	struct UGameInstance* GameInstance; // 0x80(0x08)
	char UnknownData_88[0x2b0]; // 0x88(0x2b0)

	void SSSwapControllers(); // Function Engine.GameViewportClient.SSSwapControllers
	void ShowTitleSafeArea(); // Function Engine.GameViewportClient.ShowTitleSafeArea
	void SetConsoleTarget(int32_t PlayerIndex); // Function Engine.GameViewportClient.SetConsoleTarget
};

// Class Engine.Console
// Size: 0x138 (Inherited: 0x28)
struct UConsole : public UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
	struct ULocalPlayer* ConsoleTargetPlayer; // 0x38(0x08)
	struct UTexture2D* DefaultTexture_Black; // 0x40(0x08)
	struct UTexture2D* DefaultTexture_White; // 0x48(0x08)
	char UnknownData_50[0x18]; // 0x50(0x18)
	struct TArray<struct FString> HistoryBuffer; // 0x68(0x10)
	char UnknownData_78[0xb8]; // 0x78(0xb8)
	float DefaultHeight; // 0x130(0x04)
	char UnknownData_134[0x4]; // 0x134(0x04)
};

// Class Engine.WorldSettings
// Size: 0x3a0 (Inherited: 0x220)
struct AWorldSettings : public AInfo {
	char UnknownData_220[0x8]; // 0x220(0x08)
	int32_t VisibilityCellSize; // 0x228(0x04)
	char VisibilityAggressiveness; // 0x22c(0x01)
	char bPrecomputeVisibility : 1; // 0x22d(0x01)
	char bPlaceCellsOnlyAlongCameraTracks : 1; // 0x22d(0x01)
	char bEnableWorldBoundsChecks : 1; // 0x22d(0x01)
	char bEnableNavigationSystem : 1; // 0x22d(0x01)
	char bEnableAISystem : 1; // 0x22d(0x01)
	char bEnableWorldComposition : 1; // 0x22d(0x01)
	char bUseClientSideLevelStreamingVolumes : 1; // 0x22d(0x01)
	char bEnableWorldOriginRebasing : 1; // 0x22d(0x01)
	char bWorldGravitySet : 1; // 0x22e(0x01)
	char bGlobalGravitySet : 1; // 0x22e(0x01)
	char bMinimizeBSPSections : 1; // 0x22e(0x01)
	char bForceNoPrecomputedLighting : 1; // 0x22e(0x01)
	char bHighPriorityLoading : 1; // 0x22e(0x01)
	char bHighPriorityLoadingLocal : 1; // 0x22e(0x01)
	char bOverrideDefaultBroadphaseSettings : 1; // 0x22e(0x01)
	char UnknownData_22F[0x1]; // 0x22f(0x01)
	struct UNavigationSystemConfig* NavigationSystemConfig; // 0x230(0x08)
	struct UNavigationSystemConfig* NavigationSystemConfigOverride; // 0x238(0x08)
	float WorldToMeters; // 0x240(0x04)
	float KillZ; // 0x244(0x04)
	struct UDamageType* KillZDamageType; // 0x248(0x08)
	float WorldGravityZ; // 0x250(0x04)
	float GlobalGravityZ; // 0x254(0x04)
	struct ADefaultPhysicsVolume* DefaultPhysicsVolumeClass; // 0x258(0x08)
	struct UPhysicsCollisionHandler* PhysicsCollisionHandlerClass; // 0x260(0x08)
	struct AGameModeBase* DefaultGameMode; // 0x268(0x08)
	struct AGameNetworkManager* GameNetworkManagerClass; // 0x270(0x08)
	int32_t PackedLightAndShadowMapTextureSize; // 0x278(0x04)
	struct FVector DefaultColorScale; // 0x27c(0x0c)
	float DefaultMaxDistanceFieldOcclusionDistance; // 0x288(0x04)
	float GlobalDistanceFieldViewDistance; // 0x28c(0x04)
	float DynamicIndirectShadowsSelfShadowingIntensity; // 0x290(0x04)
	char UnknownData_294[0x4]; // 0x294(0x04)
	struct FReverbSettings DefaultReverbSettings; // 0x298(0x20)
	struct FInteriorSettings DefaultAmbientZoneSettings; // 0x2b8(0x24)
	float MonoCullingDistance; // 0x2dc(0x04)
	struct USoundMix* DefaultBaseSoundMix; // 0x2e0(0x08)
	float TimeDilation; // 0x2e8(0x04)
	float MatineeTimeDilation; // 0x2ec(0x04)
	float DemoPlayTimeDilation; // 0x2f0(0x04)
	float MinGlobalTimeDilation; // 0x2f4(0x04)
	float MaxGlobalTimeDilation; // 0x2f8(0x04)
	float MinUndilatedFrameTime; // 0x2fc(0x04)
	float MaxUndilatedFrameTime; // 0x300(0x04)
	struct FBroadphaseSettings BroadphaseSettings; // 0x304(0x40)
	char UnknownData_344[0x4]; // 0x344(0x04)
	struct APlayerState* Pauser; // 0x348(0x08)
	struct TArray<struct FNetViewer> ReplicationViewers; // 0x350(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x360(0x10)
	struct APlayerState* PauserPlayerState; // 0x370(0x08)
	int32_t MaxNumberOfBookmarks; // 0x378(0x04)
	char UnknownData_37C[0x4]; // 0x37c(0x04)
	struct UBookmarkBase* DefaultBookmarkClass; // 0x380(0x08)
	struct TArray<struct UBookmarkBase*> BookmarkArray; // 0x388(0x10)
	struct UBookmarkBase* LastBookmarkClass; // 0x398(0x08)

	void OnRep_WorldGravityZ(); // Function Engine.WorldSettings.OnRep_WorldGravityZ
};

// Class Engine.AssetManager
// Size: 0x440 (Inherited: 0x28)
struct UAssetManager : public UObject {
	char UnknownData_28[0x298]; // 0x28(0x298)
	struct TArray<struct UObject*> ObjectReferenceList; // 0x2c0(0x10)
	bool bIsGlobalAsyncScanEnvironment; // 0x2d0(0x01)
	bool bShouldGuessTypeAndName; // 0x2d1(0x01)
	bool bShouldUseSynchronousLoad; // 0x2d2(0x01)
	bool bIsLoadingFromPakFiles; // 0x2d3(0x01)
	bool bShouldAcquireMissingChunksOnLoad; // 0x2d4(0x01)
	bool bOnlyCookProductionAssets; // 0x2d5(0x01)
	bool bIsBulkScanning; // 0x2d6(0x01)
	bool bIsPrimaryAssetDirectoryCurrent; // 0x2d7(0x01)
	bool bIsManagementDatabaseCurrent; // 0x2d8(0x01)
	bool bUpdateManagementDatabaseAfterScan; // 0x2d9(0x01)
	bool bIncludeOnlyOnDiskAssets; // 0x2da(0x01)
	char UnknownData_2DB[0x1]; // 0x2db(0x01)
	int32_t NumberOfSpawnedNotifications; // 0x2dc(0x04)
	char UnknownData_2E0[0xf0]; // 0x2e0(0xf0)
	bool bForceUseAllBundlesDuringLoadRecursive; // 0x3d0(0x01)
	char UnknownData_3D1[0x6f]; // 0x3d1(0x6f)
};

// Class Engine.DataAsset
// Size: 0x30 (Inherited: 0x28)
struct UDataAsset : public UObject {
	struct UDataAsset* NativeClass; // 0x28(0x08)
};

// Class Engine.HUD
// Size: 0x310 (Inherited: 0x220)
struct AHUD : public AActor {
	struct APlayerController* PlayerOwner; // 0x220(0x08)
	char bLostFocusPaused : 1; // 0x228(0x01)
	char bShowHUD : 1; // 0x228(0x01)
	char bShowDebugInfo : 1; // 0x228(0x01)
	char UnknownData_228_3 : 5; // 0x228(0x01)
	char UnknownData_229[0x3]; // 0x229(0x03)
	int32_t CurrentTargetIndex; // 0x22c(0x04)
	char bShowHitBoxDebugInfo : 1; // 0x230(0x01)
	char bShowOverlays : 1; // 0x230(0x01)
	char bEnableDebugTextShadow : 1; // 0x230(0x01)
	char UnknownData_230_3 : 5; // 0x230(0x01)
	char UnknownData_231[0x7]; // 0x231(0x07)
	struct TArray<struct AActor*> PostRenderedActors; // 0x238(0x10)
	char UnknownData_248[0x8]; // 0x248(0x08)
	struct TArray<struct FName> DebugDisplay; // 0x250(0x10)
	struct TArray<struct FName> ToggledDebugCategories; // 0x260(0x10)
	struct UCanvas* Canvas; // 0x270(0x08)
	struct UCanvas* DebugCanvas; // 0x278(0x08)
	struct TArray<struct FDebugTextInfo> DebugTextList; // 0x280(0x10)
	struct AActor* ShowDebugTargetDesiredClass; // 0x290(0x08)
	struct AActor* ShowDebugTargetActor; // 0x298(0x08)
	char UnknownData_2A0[0x70]; // 0x2a0(0x70)

	void ShowHUD(); // Function Engine.HUD.ShowHUD
	void ShowDebugToggleSubCategory(struct FName Category); // Function Engine.HUD.ShowDebugToggleSubCategory
	void ShowDebugForReticleTargetToggle(struct AActor* DesiredClass); // Function Engine.HUD.ShowDebugForReticleTargetToggle
	void ShowDebug(struct FName DebugType); // Function Engine.HUD.ShowDebug
	void RemoveDebugText(struct AActor* SrcActor, bool bLeaveDurationText); // Function Engine.HUD.RemoveDebugText
	void RemoveAllDebugStrings(); // Function Engine.HUD.RemoveAllDebugStrings
	void ReceiveHitBoxRelease(struct FName BoxName); // Function Engine.HUD.ReceiveHitBoxRelease
	void ReceiveHitBoxEndCursorOver(struct FName BoxName); // Function Engine.HUD.ReceiveHitBoxEndCursorOver
	void ReceiveHitBoxClick(struct FName BoxName); // Function Engine.HUD.ReceiveHitBoxClick
	void ReceiveHitBoxBeginCursorOver(struct FName BoxName); // Function Engine.HUD.ReceiveHitBoxBeginCursorOver
	void ReceiveDrawHUD(int32_t SizeX, int32_t SizeY); // Function Engine.HUD.ReceiveDrawHUD
	struct FVector Project(struct FVector Location); // Function Engine.HUD.Project
	void PreviousDebugTarget(); // Function Engine.HUD.PreviousDebugTarget
	void NextDebugTarget(); // Function Engine.HUD.NextDebugTarget
	void GetTextSize(struct FString Text, float OutWidth, float OutHeight, struct UFont* Font, float Scale); // Function Engine.HUD.GetTextSize
	struct APlayerController* GetOwningPlayerController(); // Function Engine.HUD.GetOwningPlayerController
	struct APawn* GetOwningPawn(); // Function Engine.HUD.GetOwningPawn
	void GetActorsInSelectionRectangle(struct AActor* ClassFilter, struct FVector2D FirstPoint, struct FVector2D SecondPoint, struct TArray<struct AActor*> OutActors, bool bIncludeNonCollidingComponents, bool bActorMustBeFullyEnclosed); // Function Engine.HUD.GetActorsInSelectionRectangle
	void DrawTextureSimple(struct UTexture* Texture, float ScreenX, float ScreenY, float Scale, bool bScalePosition); // Function Engine.HUD.DrawTextureSimple
	void DrawTexture(struct UTexture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, struct FLinearColor TintColor, char BlendMode, float Scale, bool bScalePosition, float Rotation, struct FVector2D RotPivot); // Function Engine.HUD.DrawTexture
	void DrawText(struct FString Text, struct FLinearColor TextColor, float ScreenX, float ScreenY, struct UFont* Font, float Scale, bool bScalePosition); // Function Engine.HUD.DrawText
	void DrawRect(struct FLinearColor RectColor, float ScreenX, float ScreenY, float ScreenW, float ScreenH); // Function Engine.HUD.DrawRect
	void DrawMaterialTriangle(struct UMaterialInterface* Material, struct FVector2D V0_Pos, struct FVector2D V1_Pos, struct FVector2D V2_Pos, struct FVector2D V0_UV, struct FVector2D V1_UV, struct FVector2D V2_UV, struct FLinearColor V0_Color, struct FLinearColor V1_Color, struct FLinearColor V2_Color); // Function Engine.HUD.DrawMaterialTriangle
	void DrawMaterialSimple(struct UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float Scale, bool bScalePosition); // Function Engine.HUD.DrawMaterialSimple
	void DrawMaterial(struct UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, bool bScalePosition, float Rotation, struct FVector2D RotPivot); // Function Engine.HUD.DrawMaterial
	void DrawLine(float StartScreenX, float StartScreenY, float EndScreenX, float EndScreenY, struct FLinearColor LineColor, float LineThickness); // Function Engine.HUD.DrawLine
	void Deproject(float ScreenX, float ScreenY, struct FVector WorldPosition, struct FVector WorldDirection); // Function Engine.HUD.Deproject
	void AddHitBox(struct FVector2D Position, struct FVector2D Size, struct FName InName, bool bConsumesInput, int32_t Priority); // Function Engine.HUD.AddHitBox
	void AddDebugText(struct FString DebugText, struct AActor* SrcActor, float Duration, struct FVector Offset, struct FVector DesiredOffset, struct FColor TextColor, bool bSkipOverwriteCheck, bool bAbsoluteLocation, bool bKeepAttachedToActor, struct UFont* InFont, float FontScale, bool bDrawShadow); // Function Engine.HUD.AddDebugText
};

// Class Engine.Brush
// Size: 0x258 (Inherited: 0x220)
struct ABrush : public AActor {
	char BrushType; // 0x220(0x01)
	char UnknownData_221[0x3]; // 0x221(0x03)
	struct FColor BrushColor; // 0x224(0x04)
	int32_t PolyFlags; // 0x228(0x04)
	char bColored : 1; // 0x22c(0x01)
	char bSolidWhenSelected : 1; // 0x22c(0x01)
	char bPlaceableFromClassBrowser : 1; // 0x22c(0x01)
	char bNotForClientOrServer : 1; // 0x22c(0x01)
	char UnknownData_22C_4 : 4; // 0x22c(0x01)
	char UnknownData_22D[0x3]; // 0x22d(0x03)
	struct UModel* Brush; // 0x230(0x08)
	struct UBrushComponent* BrushComponent; // 0x238(0x08)
	char bInManipulation : 1; // 0x240(0x01)
	char UnknownData_240_1 : 7; // 0x240(0x01)
	char UnknownData_241[0x7]; // 0x241(0x07)
	struct TArray<struct FGeomSelection> SavedSelections; // 0x248(0x10)
};

// Class Engine.World
// Size: 0x778 (Inherited: 0x28)
struct UWorld : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct ULevel* PersistentLevel; // 0x30(0x08)
	struct UNetDriver* NetDriver; // 0x38(0x08)
	struct ULineBatchComponent* LineBatcher; // 0x40(0x08)
	struct ULineBatchComponent* PersistentLineBatcher; // 0x48(0x08)
	struct ULineBatchComponent* ForegroundLineBatcher; // 0x50(0x08)
	struct AGameNetworkManager* NetworkManager; // 0x58(0x08)
	struct UPhysicsCollisionHandler* PhysicsCollisionHandler; // 0x60(0x08)
	struct TArray<struct UObject*> ExtraReferencedObjects; // 0x68(0x10)
	struct TArray<struct UObject*> PerModuleDataObjects; // 0x78(0x10)
	struct TArray<struct AActor*> LevelSequenceActors; // 0x88(0x10)
	struct TArray<struct ULevelStreaming*> StreamingLevels; // 0x98(0x10)
	struct FStreamingLevelsToConsider StreamingLevelsToConsider; // 0xa8(0x28)
	struct FString StreamingLevelsPrefix; // 0xd0(0x10)
	struct ULevel* CurrentLevelPendingVisibility; // 0xe0(0x08)
	struct ULevel* CurrentLevelPendingInvisibility; // 0xe8(0x08)
	struct UDemoNetDriver* DemoNetDriver; // 0xf0(0x08)
	struct AParticleEventManager* MyParticleEventManager; // 0xf8(0x08)
	struct APhysicsVolume* DefaultPhysicsVolume; // 0x100(0x08)
	char UnknownData_108[0x16]; // 0x108(0x16)
	char UnknownData_11E_0 : 2; // 0x11e(0x01)
	char bAreConstraintsDirty : 1; // 0x11e(0x01)
	char UnknownData_11E_3 : 5; // 0x11e(0x01)
	char UnknownData_11F[0x1]; // 0x11f(0x01)
	struct UNavigationSystemBase* NavigationSystem; // 0x120(0x08)
	struct AGameModeBase* AuthorityGameMode; // 0x128(0x08)
	struct AGameStateBase* GameState; // 0x130(0x08)
	struct UAISystemBase* AISystem; // 0x138(0x08)
	struct UAvoidanceManager* AvoidanceManager; // 0x140(0x08)
	struct TArray<struct ULevel*> Levels; // 0x148(0x10)
	struct TArray<struct FLevelCollection> LevelCollections; // 0x158(0x10)
	char UnknownData_168[0x20]; // 0x168(0x20)
	struct UGameInstance* OwningGameInstance; // 0x188(0x08)
	struct TArray<struct UMaterialParameterCollectionInstance*> ParameterCollectionInstances; // 0x190(0x10)
	struct UCanvas* CanvasForRenderingToTarget; // 0x1a0(0x08)
	struct UCanvas* CanvasForDrawMaterialToRenderTarget; // 0x1a8(0x08)
	char UnknownData_1B0[0x50]; // 0x1b0(0x50)
	struct TArray<struct UActorComponent*> ComponentsThatNeedEndOfFrameUpdate; // 0x200(0x10)
	struct TArray<struct UActorComponent*> ComponentsThatNeedEndOfFrameUpdate_OnGameThread; // 0x210(0x10)
	char UnknownData_220[0x340]; // 0x220(0x340)
	struct UWorldComposition* WorldComposition; // 0x560(0x08)
	char UnknownData_568[0x88]; // 0x568(0x88)
	struct FWorldPSCPool PSCPool; // 0x5f0(0x58)
	char UnknownData_648[0xc8]; // 0x648(0xc8)
	struct FHirezObjectPool HirezObjectPool; // 0x710(0x68)

	struct AWorldSettings* K2_GetWorldSettings(); // Function Engine.World.K2_GetWorldSettings
	void HandleTimelineScrubbed(); // Function Engine.World.HandleTimelineScrubbed
};

// Class Engine.InterpTrack
// Size: 0x70 (Inherited: 0x28)
struct UInterpTrack : public UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
	struct TArray<struct UInterpTrack*> SubTracks; // 0x38(0x10)
	struct UInterpTrackInst* TrackInstClass; // 0x48(0x08)
	char ActiveCondition; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
	struct FString TrackTitle; // 0x58(0x10)
	char bOnePerGroup : 1; // 0x68(0x01)
	char bDirGroupOnly : 1; // 0x68(0x01)
	char bDisableTrack : 1; // 0x68(0x01)
	char bIsSelected : 1; // 0x68(0x01)
	char bIsAnimControlTrack : 1; // 0x68(0x01)
	char bSubTrackOnly : 1; // 0x68(0x01)
	char bVisible : 1; // 0x68(0x01)
	char bIsRecording : 1; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
};

// Class Engine.InterpTrackVectorBase
// Size: 0x90 (Inherited: 0x70)
struct UInterpTrackVectorBase : public UInterpTrack {
	struct FInterpCurveVector VectorTrack; // 0x70(0x18)
	float CurveTension; // 0x88(0x04)
	char UnknownData_8C[0x4]; // 0x8c(0x04)
};

// Class Engine.InterpTrackFloatBase
// Size: 0x90 (Inherited: 0x70)
struct UInterpTrackFloatBase : public UInterpTrack {
	struct FInterpCurveFloat FloatTrack; // 0x70(0x18)
	float CurveTension; // 0x88(0x04)
	char UnknownData_8C[0x4]; // 0x8c(0x04)
};

// Class Engine.SkeletalMeshComponent
// Size: 0xb70 (Inherited: 0x670)
struct USkeletalMeshComponent : public USkinnedMeshComponent {
	struct UObject* AnimBlueprintGeneratedClass; // 0x670(0x08)
	struct UAnimInstance* AnimClass; // 0x678(0x08)
	struct UAnimInstance* AnimScriptInstance; // 0x680(0x08)
	struct UAnimInstance* PostProcessAnimInstance; // 0x688(0x08)
	struct FSingleAnimationPlayData AnimationData; // 0x690(0x18)
	char UnknownData_6A8[0x10]; // 0x6a8(0x10)
	struct FVector RootBoneTranslation; // 0x6b8(0x0c)
	struct FVector LineCheckBoundsScale; // 0x6c4(0x0c)
	char UnknownData_6D0[0x20]; // 0x6d0(0x20)
	struct TArray<struct UAnimInstance*> LinkedInstances; // 0x6f0(0x10)
	struct TArray<struct FTransform> CachedBoneSpaceTransforms; // 0x700(0x10)
	struct TArray<struct FTransform> CachedComponentSpaceTransforms; // 0x710(0x10)
	char UnknownData_720[0x20]; // 0x720(0x20)
	float GlobalAnimRateScale; // 0x740(0x04)
	char KinematicBonesUpdateType; // 0x744(0x01)
	char PhysicsTransformUpdateMode; // 0x745(0x01)
	char UnknownData_746[0x1]; // 0x746(0x01)
	char AnimationMode; // 0x747(0x01)
	char UnknownData_748[0x1]; // 0x748(0x01)
	char bDisablePostProcessBlueprint : 1; // 0x749(0x01)
	char UnknownData_749_1 : 1; // 0x749(0x01)
	char bUpdateOverlapsOnAnimationFinalize : 1; // 0x749(0x01)
	char UnknownData_749_3 : 1; // 0x749(0x01)
	char bHasValidBodies : 1; // 0x749(0x01)
	char UnknownData_749_5 : 1; // 0x749(0x01)
	char bBlendPhysics : 1; // 0x749(0x01)
	char bEnablePhysicsOnDedicatedServer : 1; // 0x749(0x01)
	char bUpdateJointsFromAnimation : 1; // 0x74a(0x01)
	char bDisableClothSimulation : 1; // 0x74a(0x01)
	char bDisableRigidBodyAnimNode : 1; // 0x74a(0x01)
	char bAllowAnimCurveEvaluation : 1; // 0x74a(0x01)
	char bDisableAnimCurves : 1; // 0x74a(0x01)
	char UnknownData_74A_5 : 3; // 0x74a(0x01)
	char bCollideWithEnvironment : 1; // 0x74b(0x01)
	char bCollideWithAttachedChildren : 1; // 0x74b(0x01)
	char bLocalSpaceSimulation : 1; // 0x74b(0x01)
	char bResetAfterTeleport : 1; // 0x74b(0x01)
	char UnknownData_74B_4 : 1; // 0x74b(0x01)
	char bDeferKinematicBoneUpdate : 1; // 0x74b(0x01)
	char bNoSkeletonUpdate : 1; // 0x74b(0x01)
	char bPauseAnims : 1; // 0x74b(0x01)
	char bUseRefPoseOnInitAnim : 1; // 0x74c(0x01)
	char bEnablePerPolyCollision : 1; // 0x74c(0x01)
	char bForceRefpose : 1; // 0x74c(0x01)
	char bOnlyAllowAutonomousTickPose : 1; // 0x74c(0x01)
	char bIsAutonomousTickPose : 1; // 0x74c(0x01)
	char bOldForceRefPose : 1; // 0x74c(0x01)
	char bShowPrePhysBones : 1; // 0x74c(0x01)
	char bRequiredBonesUpToDate : 1; // 0x74c(0x01)
	char bAnimTreeInitialised : 1; // 0x74d(0x01)
	char bIncludeComponentLocationIntoBounds : 1; // 0x74d(0x01)
	char bEnableLineCheckWithBounds : 1; // 0x74d(0x01)
	char bUseBendingElements : 1; // 0x74d(0x01)
	char bUseTetrahedralConstraints : 1; // 0x74d(0x01)
	char bUseThinShellVolumeConstraints : 1; // 0x74d(0x01)
	char bUseSelfCollisions : 1; // 0x74d(0x01)
	char bUseContinuousCollisionDetection : 1; // 0x74d(0x01)
	char bPropagateCurvesToSlaves : 1; // 0x74e(0x01)
	char bSkipKinematicUpdateWhenInterpolating : 1; // 0x74e(0x01)
	char bSkipBoundsUpdateWhenInterpolating : 1; // 0x74e(0x01)
	char UnknownData_74E_3 : 1; // 0x74e(0x01)
	char bNeedsQueuedAnimEventsDispatched : 1; // 0x74e(0x01)
	char UnknownData_74E_5 : 3; // 0x74e(0x01)
	char UnknownData_74F[0x1]; // 0x74f(0x01)
	uint16_t CachedAnimCurveUidVersion; // 0x750(0x02)
	enum class EClothMassMode MassMode; // 0x752(0x01)
	char UnknownData_753[0x1]; // 0x753(0x01)
	float UniformMass; // 0x754(0x04)
	float TotalMass; // 0x758(0x04)
	float Density; // 0x75c(0x04)
	float MinPerParticleMass; // 0x760(0x04)
	float ClothBlendWeight; // 0x764(0x04)
	float EdgeStiffness; // 0x768(0x04)
	float BendingStiffness; // 0x76c(0x04)
	float AreaStiffness; // 0x770(0x04)
	float VolumeStiffness; // 0x774(0x04)
	float StrainLimitingStiffness; // 0x778(0x04)
	float ShapeTargetStiffness; // 0x77c(0x04)
	struct TArray<struct FName> DisallowedAnimCurves; // 0x780(0x10)
	struct UBodySetup* BodySetup; // 0x790(0x08)
	char UnknownData_798[0x8]; // 0x798(0x08)
	struct FMulticastInlineDelegate OnConstraintBroken; // 0x7a0(0x10)
	struct UClothingSimulationFactory* ClothingSimulationFactory; // 0x7b0(0x08)
	char UnknownData_7B8[0xd0]; // 0x7b8(0xd0)
	float TeleportDistanceThreshold; // 0x888(0x04)
	float TeleportRotationThreshold; // 0x88c(0x04)
	char UnknownData_890[0x8]; // 0x890(0x08)
	uint32_t LastPoseTickFrame; // 0x898(0x04)
	char UnknownData_89C[0xc]; // 0x89c(0x0c)
	bool bDelayedAnimTaskValid; // 0x8a8(0x01)
	bool bDisableDelayedAnimTask; // 0x8a9(0x01)
	char UnknownData_8AA[0x56]; // 0x8aa(0x56)
	struct UClothingSimulationInteractor* ClothingInteractor; // 0x900(0x08)
	char UnknownData_908[0x128]; // 0x908(0x128)
	struct FMulticastInlineDelegate OnAnimInitialized; // 0xa30(0x10)
	char UnknownData_A40[0x130]; // 0xa40(0x130)

	void UnlinkAnimClassLayers(struct UAnimInstance* InClass); // Function Engine.SkeletalMeshComponent.UnlinkAnimClassLayers
	void UnbindClothFromMasterPoseComponent(bool bRestoreSimulationSpace); // Function Engine.SkeletalMeshComponent.UnbindClothFromMasterPoseComponent
	void ToggleDisablePostProcessBlueprint(); // Function Engine.SkeletalMeshComponent.ToggleDisablePostProcessBlueprint
	void TermBodiesBelow(struct FName ParentBoneName); // Function Engine.SkeletalMeshComponent.TermBodiesBelow
	void SuspendClothingSimulation(); // Function Engine.SkeletalMeshComponent.SuspendClothingSimulation
	void Stop(); // Function Engine.SkeletalMeshComponent.Stop
	void SnapshotPose(struct FPoseSnapshot Snapshot); // Function Engine.SkeletalMeshComponent.SnapshotPose
	void SetUpdateAnimationInEditor(bool NewUpdateState); // Function Engine.SkeletalMeshComponent.SetUpdateAnimationInEditor
	void SetTeleportRotationThreshold(float Threshold); // Function Engine.SkeletalMeshComponent.SetTeleportRotationThreshold
	void SetTeleportDistanceThreshold(float Threshold); // Function Engine.SkeletalMeshComponent.SetTeleportDistanceThreshold
	void SetPosition(float InPos, bool bFireNotifies); // Function Engine.SkeletalMeshComponent.SetPosition
	void SetPlayRate(float Rate); // Function Engine.SkeletalMeshComponent.SetPlayRate
	void SetPhysicsBlendWeight(float PhysicsBlendWeight); // Function Engine.SkeletalMeshComponent.SetPhysicsBlendWeight
	void SetNotifyRigidBodyCollisionBelow(bool bNewNotifyRigidBodyCollision, struct FName BoneName, bool bIncludeSelf); // Function Engine.SkeletalMeshComponent.SetNotifyRigidBodyCollisionBelow
	void SetMorphTarget(struct FName MorphTargetName, float Value, bool bRemoveZeroWeight); // Function Engine.SkeletalMeshComponent.SetMorphTarget
	void SetEnablePhysicsBlending(bool bNewBlendPhysics); // Function Engine.SkeletalMeshComponent.SetEnablePhysicsBlending
	void SetEnableGravityOnAllBodiesBelow(bool bEnableGravity, struct FName BoneName, bool bIncludeSelf); // Function Engine.SkeletalMeshComponent.SetEnableGravityOnAllBodiesBelow
	void SetEnableBodyGravity(bool bEnableGravity, struct FName BoneName); // Function Engine.SkeletalMeshComponent.SetEnableBodyGravity
	void SetDisablePostProcessBlueprint(bool bInDisablePostProcess); // Function Engine.SkeletalMeshComponent.SetDisablePostProcessBlueprint
	void SetDisableAnimCurves(bool bInDisableAnimCurves); // Function Engine.SkeletalMeshComponent.SetDisableAnimCurves
	void SetConstraintProfileForAll(struct FName ProfileName, bool bDefaultIfNotFound); // Function Engine.SkeletalMeshComponent.SetConstraintProfileForAll
	void SetConstraintProfile(struct FName JointName, struct FName ProfileName, bool bDefaultIfNotFound); // Function Engine.SkeletalMeshComponent.SetConstraintProfile
	void SetClothMaxDistanceScale(float Scale); // Function Engine.SkeletalMeshComponent.SetClothMaxDistanceScale
	void SetBodyNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision, struct FName BoneName); // Function Engine.SkeletalMeshComponent.SetBodyNotifyRigidBodyCollision
	void SetAnimClass(struct UObject* NewClass); // Function Engine.SkeletalMeshComponent.SetAnimClass
	void SetAnimationMode(char InAnimationMode); // Function Engine.SkeletalMeshComponent.SetAnimationMode
	void SetAnimation(struct UAnimationAsset* NewAnimToPlay); // Function Engine.SkeletalMeshComponent.SetAnimation
	void SetAngularLimits(struct FName InBoneName, float Swing1LimitAngle, float TwistLimitAngle, float Swing2LimitAngle); // Function Engine.SkeletalMeshComponent.SetAngularLimits
	void SetAllowRigidBodyAnimNode(bool bInAllow, bool bReinitAnim); // Function Engine.SkeletalMeshComponent.SetAllowRigidBodyAnimNode
	void SetAllowedAnimCurvesEvaluation(struct TArray<struct FName> List, bool bAllow); // Function Engine.SkeletalMeshComponent.SetAllowedAnimCurvesEvaluation
	void SetAllowAnimCurveEvaluation(bool bInAllow); // Function Engine.SkeletalMeshComponent.SetAllowAnimCurveEvaluation
	void SetAllMotorsAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType); // Function Engine.SkeletalMeshComponent.SetAllMotorsAngularVelocityDrive
	void SetAllMotorsAngularPositionDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType); // Function Engine.SkeletalMeshComponent.SetAllMotorsAngularPositionDrive
	void SetAllMotorsAngularDriveParams(float InSpring, float InDamping, float InForceLimit, bool bSkipCustomPhysicsType); // Function Engine.SkeletalMeshComponent.SetAllMotorsAngularDriveParams
	void SetAllBodiesSimulatePhysics(bool bNewSimulate); // Function Engine.SkeletalMeshComponent.SetAllBodiesSimulatePhysics
	void SetAllBodiesPhysicsBlendWeight(float PhysicsBlendWeight, bool bSkipCustomPhysicsType); // Function Engine.SkeletalMeshComponent.SetAllBodiesPhysicsBlendWeight
	void SetAllBodiesBelowSimulatePhysics(struct FName InBoneName, bool bNewSimulate, bool bIncludeSelf); // Function Engine.SkeletalMeshComponent.SetAllBodiesBelowSimulatePhysics
	void SetAllBodiesBelowPhysicsBlendWeight(struct FName InBoneName, float PhysicsBlendWeight, bool bSkipCustomPhysicsType, bool bIncludeSelf); // Function Engine.SkeletalMeshComponent.SetAllBodiesBelowPhysicsBlendWeight
	void ResumeClothingSimulation(); // Function Engine.SkeletalMeshComponent.ResumeClothingSimulation
	void ResetClothTeleportMode(); // Function Engine.SkeletalMeshComponent.ResetClothTeleportMode
	void ResetAnimInstanceDynamics(enum class ETeleportType InTeleportType); // Function Engine.SkeletalMeshComponent.ResetAnimInstanceDynamics
	void ResetAllowedAnimCurveEvaluation(); // Function Engine.SkeletalMeshComponent.ResetAllowedAnimCurveEvaluation
	void ResetAllBodiesSimulatePhysics(); // Function Engine.SkeletalMeshComponent.ResetAllBodiesSimulatePhysics
	void PlayAnimation(struct UAnimationAsset* NewAnimToPlay, bool bLooping); // Function Engine.SkeletalMeshComponent.PlayAnimation
	void Play(bool bLooping); // Function Engine.SkeletalMeshComponent.Play
	void OverrideAnimationData(struct UAnimationAsset* InAnimToPlay, bool bIsLooping, bool bIsPlaying, float Position, float PlayRate); // Function Engine.SkeletalMeshComponent.OverrideAnimationData
	void LinkAnimGraphByTag(struct FName InTag, struct UAnimInstance* InClass); // Function Engine.SkeletalMeshComponent.LinkAnimGraphByTag
	void LinkAnimClassLayers(struct UAnimInstance* InClass); // Function Engine.SkeletalMeshComponent.LinkAnimClassLayers
	bool K2_GetClosestPointOnPhysicsAsset(struct FVector WorldPosition, struct FVector ClosestWorldPosition, struct FVector Normal, struct FName BoneName, float Distance); // Function Engine.SkeletalMeshComponent.K2_GetClosestPointOnPhysicsAsset
	bool IsPlaying(); // Function Engine.SkeletalMeshComponent.IsPlaying
	bool IsClothingSimulationSuspended(); // Function Engine.SkeletalMeshComponent.IsClothingSimulationSuspended
	bool IsBodyGravityEnabled(struct FName BoneName); // Function Engine.SkeletalMeshComponent.IsBodyGravityEnabled
	bool HasValidAnimationInstance(); // Function Engine.SkeletalMeshComponent.HasValidAnimationInstance
	float GetTeleportRotationThreshold(); // Function Engine.SkeletalMeshComponent.GetTeleportRotationThreshold
	float GetTeleportDistanceThreshold(); // Function Engine.SkeletalMeshComponent.GetTeleportDistanceThreshold
	struct FVector GetSkeletalCenterOfMass(); // Function Engine.SkeletalMeshComponent.GetSkeletalCenterOfMass
	struct UAnimInstance* GetPostProcessInstance(); // Function Engine.SkeletalMeshComponent.GetPostProcessInstance
	float GetPosition(); // Function Engine.SkeletalMeshComponent.GetPosition
	float GetPlayRate(); // Function Engine.SkeletalMeshComponent.GetPlayRate
	float GetMorphTarget(struct FName MorphTargetName); // Function Engine.SkeletalMeshComponent.GetMorphTarget
	struct UAnimInstance* GetLinkedAnimLayerInstanceByGroup(struct FName InGroup); // Function Engine.SkeletalMeshComponent.GetLinkedAnimLayerInstanceByGroup
	struct UAnimInstance* GetLinkedAnimLayerInstanceByClass(struct UAnimInstance* InClass); // Function Engine.SkeletalMeshComponent.GetLinkedAnimLayerInstanceByClass
	void GetLinkedAnimGraphInstancesByTag(struct FName InTag, struct TArray<struct UAnimInstance*> OutLinkedInstances); // Function Engine.SkeletalMeshComponent.GetLinkedAnimGraphInstancesByTag
	struct UAnimInstance* GetLinkedAnimGraphInstanceByTag(struct FName InTag); // Function Engine.SkeletalMeshComponent.GetLinkedAnimGraphInstanceByTag
	bool GetDisablePostProcessBlueprint(); // Function Engine.SkeletalMeshComponent.GetDisablePostProcessBlueprint
	bool GetDisableAnimCurves(); // Function Engine.SkeletalMeshComponent.GetDisableAnimCurves
	void GetCurrentJointAngles(struct FName InBoneName, float Swing1Angle, float TwistAngle, float Swing2Angle); // Function Engine.SkeletalMeshComponent.GetCurrentJointAngles
	float GetClothMaxDistanceScale(); // Function Engine.SkeletalMeshComponent.GetClothMaxDistanceScale
	struct UClothingSimulationInteractor* GetClothingSimulationInteractor(); // Function Engine.SkeletalMeshComponent.GetClothingSimulationInteractor
	float GetBoneMass(struct FName BoneName, bool bScaleMass); // Function Engine.SkeletalMeshComponent.GetBoneMass
	struct UAnimInstance* GetAnimInstance(); // Function Engine.SkeletalMeshComponent.GetAnimInstance
	struct UObject* GetAnimClass(); // Function Engine.SkeletalMeshComponent.GetAnimClass
	char GetAnimationMode(); // Function Engine.SkeletalMeshComponent.GetAnimationMode
	bool GetAllowRigidBodyAnimNode(); // Function Engine.SkeletalMeshComponent.GetAllowRigidBodyAnimNode
	bool GetAllowedAnimCurveEvaluate(); // Function Engine.SkeletalMeshComponent.GetAllowedAnimCurveEvaluate
	void ForceClothNextUpdateTeleportAndReset(); // Function Engine.SkeletalMeshComponent.ForceClothNextUpdateTeleportAndReset
	void ForceClothNextUpdateTeleport(); // Function Engine.SkeletalMeshComponent.ForceClothNextUpdateTeleport
	struct FName FindConstraintBoneName(int32_t ConstraintIndex); // Function Engine.SkeletalMeshComponent.FindConstraintBoneName
	void ClearMorphTargets(); // Function Engine.SkeletalMeshComponent.ClearMorphTargets
	void BreakConstraint(struct FVector Impulse, struct FVector HitLocation, struct FName InBoneName); // Function Engine.SkeletalMeshComponent.BreakConstraint
	void BindClothToMasterPoseComponent(); // Function Engine.SkeletalMeshComponent.BindClothToMasterPoseComponent
	void AllowAnimCurveEvaluation(struct FName NameOfCurve, bool bAllow); // Function Engine.SkeletalMeshComponent.AllowAnimCurveEvaluation
	void AddImpulseToAllBodiesBelow(struct FVector Impulse, struct FName BoneName, bool bVelChange, bool bIncludeSelf); // Function Engine.SkeletalMeshComponent.AddImpulseToAllBodiesBelow
	void AddForceToAllBodiesBelow(struct FVector Force, struct FName BoneName, bool bAccelChange, bool bIncludeSelf); // Function Engine.SkeletalMeshComponent.AddForceToAllBodiesBelow
	void AccumulateAllBodiesBelowPhysicsBlendWeight(struct FName InBoneName, float AddPhysicsBlendWeight, bool bSkipCustomPhysicsType); // Function Engine.SkeletalMeshComponent.AccumulateAllBodiesBelowPhysicsBlendWeight
};

// Class Engine.AnimNotify
// Size: 0x38 (Inherited: 0x28)
struct UAnimNotify : public UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function Engine.AnimNotify.Received_Notify
	struct FString GetNotifyName(); // Function Engine.AnimNotify.GetNotifyName
};

// Class Engine.AnimNotify_PlayParticleEffect
// Size: 0x90 (Inherited: 0x38)
struct UAnimNotify_PlayParticleEffect : public UAnimNotify {
	struct UParticleSystem* PSTemplate; // 0x38(0x08)
	struct FVector LocationOffset; // 0x40(0x0c)
	struct FRotator RotationOffset; // 0x4c(0x0c)
	struct FVector Scale; // 0x58(0x0c)
	char UnknownData_64[0x1c]; // 0x64(0x1c)
	char Attached : 1; // 0x80(0x01)
	char UnknownData_80_1 : 7; // 0x80(0x01)
	char UnknownData_81[0x3]; // 0x81(0x03)
	struct FName SocketName; // 0x84(0x08)
	char UnknownData_8C[0x4]; // 0x8c(0x04)
};

// Class Engine.AnimInstance
// Size: 0x270 (Inherited: 0x28)
struct UAnimInstance : public UObject {
	struct USkeleton* CurrentSkeleton; // 0x28(0x08)
	char RootMotionMode; // 0x30(0x01)
	char bUseMultiThreadedAnimationUpdate : 1; // 0x31(0x01)
	char bUsingCopyPoseFromMesh : 1; // 0x31(0x01)
	char UnknownData_31_2 : 2; // 0x31(0x01)
	char bReceiveNotifiesFromLinkedInstances : 1; // 0x31(0x01)
	char bPropagateNotifiesToLinkedInstances : 1; // 0x31(0x01)
	char bQueueMontageEvents : 1; // 0x31(0x01)
	char UnknownData_32[0x6]; // 0x32(0x06)
	struct FMulticastInlineDelegate OnMontageBlendingOut; // 0x38(0x10)
	struct FMulticastInlineDelegate OnMontageStarted; // 0x48(0x10)
	struct FMulticastInlineDelegate OnMontageEnded; // 0x58(0x10)
	struct FMulticastInlineDelegate OnAllMontageInstancesEnded; // 0x68(0x10)
	char UnknownData_78[0x88]; // 0x78(0x88)
	struct FAnimNotifyQueue NotifyQueue; // 0x100(0x70)
	struct TArray<struct FAnimNotifyEvent> ActiveAnimNotifyState; // 0x170(0x10)
	float SubAnimInstanceWeight; // 0x180(0x04)
	char UnknownData_184[0xec]; // 0x184(0xec)

	void UnlockAIResources(bool bUnlockMovement, bool UnlockAILogic); // Function Engine.AnimInstance.UnlockAIResources
	void UnlinkAnimClassLayers(struct UAnimInstance* InClass); // Function Engine.AnimInstance.UnlinkAnimClassLayers
	struct APawn* TryGetPawnOwner(); // Function Engine.AnimInstance.TryGetPawnOwner
	void StopSlotAnimation(float InBlendOutTime, struct FName SlotNodeName); // Function Engine.AnimInstance.StopSlotAnimation
	void SnapshotPose(struct FPoseSnapshot Snapshot); // Function Engine.AnimInstance.SnapshotPose
	void SetRootMotionMode(char Value); // Function Engine.AnimInstance.SetRootMotionMode
	void SetReceiveNotifiesFromLinkedInstances(bool bSet); // Function Engine.AnimInstance.SetReceiveNotifiesFromLinkedInstances
	void SetPropagateNotifiesToLinkedInstances(bool bSet); // Function Engine.AnimInstance.SetPropagateNotifiesToLinkedInstances
	void SetMorphTarget(struct FName MorphTargetName, float Value); // Function Engine.AnimInstance.SetMorphTarget
	void SavePoseSnapshot(struct FName SnapshotName); // Function Engine.AnimInstance.SavePoseSnapshot
	void ResetDynamics(enum class ETeleportType InTeleportType); // Function Engine.AnimInstance.ResetDynamics
	struct UAnimMontage* PlaySlotAnimationAsDynamicMontage(struct UAnimSequenceBase* Asset, struct FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32_t LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt); // Function Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage
	float PlaySlotAnimation(struct UAnimSequenceBase* Asset, struct FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32_t LoopCount); // Function Engine.AnimInstance.PlaySlotAnimation
	void Montage_StopGroupByName(float InBlendOutTime, struct FName GroupName); // Function Engine.AnimInstance.Montage_StopGroupByName
	void Montage_Stop_By_Instance_ID(float InBlendOutTime, int32_t InInstanceID); // Function Engine.AnimInstance.Montage_Stop_By_Instance_ID
	void Montage_Stop(float InBlendOutTime, struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_Stop
	void Montage_SetPosition(struct UAnimMontage* Montage, float NewPosition); // Function Engine.AnimInstance.Montage_SetPosition
	void Montage_SetPlayRate(struct UAnimMontage* Montage, float NewPlayRate); // Function Engine.AnimInstance.Montage_SetPlayRate
	void Montage_SetNextSection(struct FName SectionNameToChange, struct FName NextSection, struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_SetNextSection
	void Montage_Resume(struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_Resume
	float Montage_Play(struct UAnimMontage* MontageToPlay, float InPlayRate, enum class EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages); // Function Engine.AnimInstance.Montage_Play
	void Montage_Pause(struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_Pause
	void Montage_JumpToSectionsEnd(struct FName SectionName, struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_JumpToSectionsEnd
	void Montage_JumpToSection(struct FName SectionName, struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_JumpToSection
	bool Montage_IsPlaying_By_Instance_ID(int32_t InInstanceID); // Function Engine.AnimInstance.Montage_IsPlaying_By_Instance_ID
	bool Montage_IsPlaying(struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_IsPlaying
	bool Montage_IsActive(struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_IsActive
	float Montage_GetPosition(struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_GetPosition
	float Montage_GetPlayRate(struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_GetPlayRate
	bool Montage_GetIsStopped(struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_GetIsStopped
	struct FName Montage_GetCurrentSection(struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_GetCurrentSection
	float Montage_GetBlendTime(struct UAnimMontage* Montage); // Function Engine.AnimInstance.Montage_GetBlendTime
	void LockAIResources(bool bLockMovement, bool LockAILogic); // Function Engine.AnimInstance.LockAIResources
	void LinkAnimGraphByTag(struct FName InTag, struct UAnimInstance* InClass); // Function Engine.AnimInstance.LinkAnimGraphByTag
	void LinkAnimClassLayers(struct UAnimInstance* InClass); // Function Engine.AnimInstance.LinkAnimClassLayers
	bool IsSyncGroupBetweenMarkers(struct FName InSyncGroupName, struct FName PreviousMarker, struct FName NextMarker, bool bRespectMarkerOrder); // Function Engine.AnimInstance.IsSyncGroupBetweenMarkers
	bool IsPlayingSlotAnimation(struct UAnimSequenceBase* Asset, struct FName SlotNodeName); // Function Engine.AnimInstance.IsPlayingSlotAnimation
	bool IsAnyMontagePlaying(); // Function Engine.AnimInstance.IsAnyMontagePlaying
	bool HasMarkerBeenHitThisFrame(struct FName SyncGroup, struct FName MarkerName); // Function Engine.AnimInstance.HasMarkerBeenHitThisFrame
	bool GetTimeToClosestMarker(struct FName SyncGroup, struct FName MarkerName, float OutMarkerTime); // Function Engine.AnimInstance.GetTimeToClosestMarker
	struct FMarkerSyncAnimPosition GetSyncGroupPosition(struct FName InSyncGroupName); // Function Engine.AnimInstance.GetSyncGroupPosition
	float GetRelevantAnimTimeRemainingFraction(int32_t MachineIndex, int32_t StateIndex); // Function Engine.AnimInstance.GetRelevantAnimTimeRemainingFraction
	float GetRelevantAnimTimeRemaining(int32_t MachineIndex, int32_t StateIndex); // Function Engine.AnimInstance.GetRelevantAnimTimeRemaining
	float GetRelevantAnimTimeFraction(int32_t MachineIndex, int32_t StateIndex); // Function Engine.AnimInstance.GetRelevantAnimTimeFraction
	float GetRelevantAnimTime(int32_t MachineIndex, int32_t StateIndex); // Function Engine.AnimInstance.GetRelevantAnimTime
	float GetRelevantAnimLength(int32_t MachineIndex, int32_t StateIndex); // Function Engine.AnimInstance.GetRelevantAnimLength
	bool GetReceiveNotifiesFromLinkedInstances(); // Function Engine.AnimInstance.GetReceiveNotifiesFromLinkedInstances
	bool GetPropagateNotifiesToLinkedInstances(); // Function Engine.AnimInstance.GetPropagateNotifiesToLinkedInstances
	struct USkeletalMeshComponent* GetOwningComponent(); // Function Engine.AnimInstance.GetOwningComponent
	struct AActor* GetOwningActor(); // Function Engine.AnimInstance.GetOwningActor
	struct UAnimInstance* GetLinkedAnimLayerInstanceByGroup(struct FName InGroup); // Function Engine.AnimInstance.GetLinkedAnimLayerInstanceByGroup
	struct UAnimInstance* GetLinkedAnimLayerInstanceByClass(struct UAnimInstance* InClass); // Function Engine.AnimInstance.GetLinkedAnimLayerInstanceByClass
	void GetLinkedAnimGraphInstancesByTag(struct FName InTag, struct TArray<struct UAnimInstance*> OutLinkedInstances); // Function Engine.AnimInstance.GetLinkedAnimGraphInstancesByTag
	struct UAnimInstance* GetLinkedAnimGraphInstanceByTag(struct FName InTag); // Function Engine.AnimInstance.GetLinkedAnimGraphInstanceByTag
	float GetInstanceTransitionTimeElapsedFraction(int32_t MachineIndex, int32_t TransitionIndex); // Function Engine.AnimInstance.GetInstanceTransitionTimeElapsedFraction
	float GetInstanceTransitionTimeElapsed(int32_t MachineIndex, int32_t TransitionIndex); // Function Engine.AnimInstance.GetInstanceTransitionTimeElapsed
	float GetInstanceTransitionCrossfadeDuration(int32_t MachineIndex, int32_t TransitionIndex); // Function Engine.AnimInstance.GetInstanceTransitionCrossfadeDuration
	float GetInstanceStateWeight(int32_t MachineIndex, int32_t StateIndex); // Function Engine.AnimInstance.GetInstanceStateWeight
	float GetInstanceMachineWeight(int32_t MachineIndex); // Function Engine.AnimInstance.GetInstanceMachineWeight
	float GetInstanceCurrentStateElapsedTime(int32_t MachineIndex); // Function Engine.AnimInstance.GetInstanceCurrentStateElapsedTime
	float GetInstanceAssetPlayerTimeFromEndFraction(int32_t AssetPlayerIndex); // Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEndFraction
	float GetInstanceAssetPlayerTimeFromEnd(int32_t AssetPlayerIndex); // Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEnd
	float GetInstanceAssetPlayerTimeFraction(int32_t AssetPlayerIndex); // Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFraction
	float GetInstanceAssetPlayerTime(int32_t AssetPlayerIndex); // Function Engine.AnimInstance.GetInstanceAssetPlayerTime
	float GetInstanceAssetPlayerLength(int32_t AssetPlayerIndex); // Function Engine.AnimInstance.GetInstanceAssetPlayerLength
	float GetCurveValue(struct FName CurveName); // Function Engine.AnimInstance.GetCurveValue
	struct FName GetCurrentStateName(int32_t MachineIndex); // Function Engine.AnimInstance.GetCurrentStateName
	struct UAnimMontage* GetCurrentActiveMontage(); // Function Engine.AnimInstance.GetCurrentActiveMontage
	void GetAllCurveNames(struct TArray<struct FName> OutNames); // Function Engine.AnimInstance.GetAllCurveNames
	void GetActiveCurveNames(enum class EAnimCurveType CurveType, struct TArray<struct FName> OutNames); // Function Engine.AnimInstance.GetActiveCurveNames
	struct UAnimMontage* Get_Montage_By_Instance_ID(int32_t InInstanceID); // Function Engine.AnimInstance.Get_Montage_By_Instance_ID
	void ClearMorphTargets(); // Function Engine.AnimInstance.ClearMorphTargets
	float CalculateDirection(struct FVector Velocity, struct FRotator BaseRotation); // Function Engine.AnimInstance.CalculateDirection
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function Engine.AnimInstance.BlueprintUpdateAnimation
	void BlueprintPostEvaluateAnimation(); // Function Engine.AnimInstance.BlueprintPostEvaluateAnimation
	void BlueprintLinkedAnimationLayersInitialized(); // Function Engine.AnimInstance.BlueprintLinkedAnimationLayersInitialized
	void BlueprintInitializeAnimation(); // Function Engine.AnimInstance.BlueprintInitializeAnimation
	void BlueprintBeginPlay(); // Function Engine.AnimInstance.BlueprintBeginPlay
};

// Class Engine.DecalComponent
// Size: 0x250 (Inherited: 0x210)
struct UDecalComponent : public USceneComponent {
	struct UMaterialInterface* DecalMaterial; // 0x208(0x08)
	int32_t SortOrder; // 0x210(0x04)
	float FadeScreenSize; // 0x214(0x04)
	float FadeStartDelay; // 0x218(0x04)
	float FadeDuration; // 0x21c(0x04)
	float FadeInDuration; // 0x220(0x04)
	float FadeInStartDelay; // 0x224(0x04)
	char bDestroyOwnerAfterFade : 1; // 0x228(0x01)
	struct FVector DecalSize; // 0x22c(0x0c)
	char UnknownData_23C_1 : 7; // 0x23c(0x01)
	char UnknownData_23D[0x13]; // 0x23d(0x13)

	void SetSortOrder(int32_t Value); // Function Engine.DecalComponent.SetSortOrder
	void SetFadeScreenSize(float NewFadeScreenSize); // Function Engine.DecalComponent.SetFadeScreenSize
	void SetFadeOut(float StartDelay, float Duration, bool DestroyOwnerAfterFade); // Function Engine.DecalComponent.SetFadeOut
	void SetFadeIn(float StartDelay, float Duaration); // Function Engine.DecalComponent.SetFadeIn
	void SetDecalMaterial(struct UMaterialInterface* NewDecalMaterial); // Function Engine.DecalComponent.SetDecalMaterial
	float GetFadeStartDelay(); // Function Engine.DecalComponent.GetFadeStartDelay
	float GetFadeInStartDelay(); // Function Engine.DecalComponent.GetFadeInStartDelay
	float GetFadeInDuration(); // Function Engine.DecalComponent.GetFadeInDuration
	float GetFadeDuration(); // Function Engine.DecalComponent.GetFadeDuration
	struct UMaterialInterface* GetDecalMaterial(); // Function Engine.DecalComponent.GetDecalMaterial
	struct UMaterialInstanceDynamic* CreateDynamicMaterialInstance(); // Function Engine.DecalComponent.CreateDynamicMaterialInstance
};

// Class Engine.FXSystemAsset
// Size: 0x30 (Inherited: 0x28)
struct UFXSystemAsset : public UObject {
	uint32_t MaxPoolSize; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// Class Engine.AnimNotifyState
// Size: 0x30 (Inherited: 0x28)
struct UAnimNotifyState : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)

	bool Received_NotifyTick(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float FrameDeltaTime); // Function Engine.AnimNotifyState.Received_NotifyTick
	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function Engine.AnimNotifyState.Received_NotifyEnd
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function Engine.AnimNotifyState.Received_NotifyBegin
	struct FString GetNotifyName(); // Function Engine.AnimNotifyState.GetNotifyName
};

// Class Engine.Commandlet
// Size: 0x80 (Inherited: 0x28)
struct UCommandlet : public UObject {
	struct FString HelpDescription; // 0x28(0x10)
	struct FString HelpUsage; // 0x38(0x10)
	struct FString HelpWebLink; // 0x48(0x10)
	struct TArray<struct FString> HelpParamNames; // 0x58(0x10)
	struct TArray<struct FString> HelpParamDescriptions; // 0x68(0x10)
	char IsServer : 1; // 0x78(0x01)
	char IsClient : 1; // 0x78(0x01)
	char IsEditor : 1; // 0x78(0x01)
	char LogToConsole : 1; // 0x78(0x01)
	char ShowErrorCount : 1; // 0x78(0x01)
	char ShowProgress : 1; // 0x78(0x01)
	char UnknownData_78_6 : 2; // 0x78(0x01)
	char UnknownData_79[0x7]; // 0x79(0x07)
};

// Class Engine.AnimBoneCompressionCodec
// Size: 0x38 (Inherited: 0x28)
struct UAnimBoneCompressionCodec : public UObject {
	struct FString Description; // 0x28(0x10)
};

// Class Engine.AudioComponent
// Size: 0x7f0 (Inherited: 0x210)
struct UAudioComponent : public USceneComponent {
	struct USoundBase* Sound; // 0x208(0x08)
	struct TArray<struct FAudioComponentParam> InstanceParameters; // 0x210(0x10)
	struct USoundClass* SoundClassOverride; // 0x220(0x08)
	char bAutoDestroy : 1; // 0x228(0x01)
	char bStopWhenOwnerDestroyed : 1; // 0x228(0x01)
	char bShouldRemainActiveIfDropped : 1; // 0x228(0x01)
	char bAllowSpatialization : 1; // 0x228(0x01)
	char bOverrideAttenuation : 1; // 0x228(0x01)
	char bOverrideSubtitlePriority : 1; // 0x228(0x01)
	char bIsUISound : 1; // 0x228(0x01)
	char bEnableLowPassFilter : 1; // 0x228(0x01)
	char bOverridePriority : 1; // 0x229(0x01)
	char bSuppressSubtitles : 1; // 0x229(0x01)
	char bAutoManageAttachment : 1; // 0x22a(0x01)
	struct FName AudioComponentUserID; // 0x230(0x08)
	float PitchModulationMin; // 0x238(0x04)
	float PitchModulationMax; // 0x23c(0x04)
	float VolumeModulationMin; // 0x240(0x04)
	float VolumeModulationMax; // 0x244(0x04)
	float VolumeMultiplier; // 0x248(0x04)
	int32_t EnvelopeFollowerAttackTime; // 0x24c(0x04)
	int32_t EnvelopeFollowerReleaseTime; // 0x250(0x04)
	float Priority; // 0x254(0x04)
	float SubtitlePriority; // 0x258(0x04)
	char UnknownData_25D[0x3]; // 0x25d(0x03)
	struct USoundEffectSourcePresetChain* SourceEffectChain; // 0x260(0x08)
	float PitchMultiplier; // 0x268(0x04)
	float LowPassFilterFrequency; // 0x26c(0x04)
	char UnknownData_270[0x8]; // 0x270(0x08)
	struct USoundAttenuation* AttenuationSettings; // 0x278(0x08)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x280(0x3a0)
	struct USoundConcurrency* ConcurrencySettings; // 0x620(0x08)
	struct TSet<struct USoundConcurrency*> ConcurrencySet; // 0x628(0x50)
	char UnknownData_678[0xc]; // 0x678(0x0c)
	enum class EAttachmentRule AutoAttachLocationRule; // 0x684(0x01)
	enum class EAttachmentRule AutoAttachRotationRule; // 0x685(0x01)
	enum class EAttachmentRule AutoAttachScaleRule; // 0x686(0x01)
	char UnknownData_687[0x1]; // 0x687(0x01)
	struct FMulticastInlineDelegate OnAudioFinished; // 0x688(0x10)
	char UnknownData_698[0x18]; // 0x698(0x18)
	struct FMulticastInlineDelegate OnAudioPlaybackPercent; // 0x6b0(0x10)
	char UnknownData_6C0[0x18]; // 0x6c0(0x18)
	struct FMulticastInlineDelegate OnAudioSingleEnvelopeValue; // 0x6d8(0x10)
	char UnknownData_6E8[0x18]; // 0x6e8(0x18)
	struct FMulticastInlineDelegate OnAudioMultiEnvelopeValue; // 0x700(0x10)
	char UnknownData_710[0x18]; // 0x710(0x18)
	struct FSoundModulation Modulation; // 0x728(0x10)
	struct FDelegate OnQueueSubtitles; // 0x738(0x10)
	struct FWeakObjectPtr<struct USceneComponent> AutoAttachParent; // 0x748(0x08)
	struct FName AutoAttachSocketName; // 0x750(0x08)
	char UnknownData_758[0x98]; // 0x758(0x98)

	void StopDelayed(float DelayTime); // Function Engine.AudioComponent.StopDelayed
	void Stop(); // Function Engine.AudioComponent.Stop
	void SetWaveParameter(struct FName InName, struct USoundWave* InWave); // Function Engine.AudioComponent.SetWaveParameter
	void SetVolumeMultiplier(float NewVolumeMultiplier); // Function Engine.AudioComponent.SetVolumeMultiplier
	void SetUISound(bool bInUISound); // Function Engine.AudioComponent.SetUISound
	void SetSubmixSend(struct USoundSubmixBase* Submix, float SendLevel); // Function Engine.AudioComponent.SetSubmixSend
	void SetSourceBusSendPreEffect(struct USoundSourceBus* SoundSourceBus, float SourceBusSendLevel); // Function Engine.AudioComponent.SetSourceBusSendPreEffect
	void SetSourceBusSendPostEffect(struct USoundSourceBus* SoundSourceBus, float SourceBusSendLevel); // Function Engine.AudioComponent.SetSourceBusSendPostEffect
	void SetSound(struct USoundBase* NewSound); // Function Engine.AudioComponent.SetSound
	void SetPitchMultiplier(float NewPitchMultiplier); // Function Engine.AudioComponent.SetPitchMultiplier
	void SetPaused(bool bPause); // Function Engine.AudioComponent.SetPaused
	void SetLowPassFilterFrequency(float InLowPassFilterFrequency); // Function Engine.AudioComponent.SetLowPassFilterFrequency
	void SetLowPassFilterEnabled(bool InLowPassFilterEnabled); // Function Engine.AudioComponent.SetLowPassFilterEnabled
	void SetIntParameter(struct FName InName, int32_t inInt); // Function Engine.AudioComponent.SetIntParameter
	void SetFloatParameter(struct FName InName, float InFloat); // Function Engine.AudioComponent.SetFloatParameter
	void SetBoolParameter(struct FName InName, bool InBool); // Function Engine.AudioComponent.SetBoolParameter
	void Play(float StartTime); // Function Engine.AudioComponent.Play
	bool IsPlaying(); // Function Engine.AudioComponent.IsPlaying
	bool HasCookedFFTData(); // Function Engine.AudioComponent.HasCookedFFTData
	bool HasCookedAmplitudeEnvelopeData(); // Function Engine.AudioComponent.HasCookedAmplitudeEnvelopeData
	enum class EAudioComponentPlayState GetPlayState(); // Function Engine.AudioComponent.GetPlayState
	bool GetCookedFFTDataForAllPlayingSounds(struct TArray<struct FSoundWaveSpectralDataPerSound> OutSoundWaveSpectralData); // Function Engine.AudioComponent.GetCookedFFTDataForAllPlayingSounds
	bool GetCookedFFTData(struct TArray<float> FrequenciesToGet, struct TArray<struct FSoundWaveSpectralData> OutSoundWaveSpectralData); // Function Engine.AudioComponent.GetCookedFFTData
	bool GetCookedEnvelopeDataForAllPlayingSounds(struct TArray<struct FSoundWaveEnvelopeDataPerSound> OutEnvelopeData); // Function Engine.AudioComponent.GetCookedEnvelopeDataForAllPlayingSounds
	bool GetCookedEnvelopeData(float OutEnvelopeData); // Function Engine.AudioComponent.GetCookedEnvelopeData
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel, enum class EAudioFaderCurve FadeCurve); // Function Engine.AudioComponent.FadeOut
	void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, enum class EAudioFaderCurve FadeCurve); // Function Engine.AudioComponent.FadeIn
	bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings OutAttenuationSettings); // Function Engine.AudioComponent.BP_GetAttenuationSettingsToApply
	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, enum class EAudioFaderCurve FadeCurve); // Function Engine.AudioComponent.AdjustVolume
	void AdjustAttenuation(struct FSoundAttenuationSettings InAttenuationSettings); // Function Engine.AudioComponent.AdjustAttenuation
};

// Class Engine.GameStateBase
// Size: 0x270 (Inherited: 0x220)
struct AGameStateBase : public AInfo {
	struct AGameModeBase* GameModeClass; // 0x220(0x08)
	struct AGameModeBase* AuthorityGameMode; // 0x228(0x08)
	struct ASpectatorPawn* SpectatorClass; // 0x230(0x08)
	struct TArray<struct APlayerState*> PlayerArray; // 0x238(0x10)
	bool bReplicatedHasBegunPlay; // 0x248(0x01)
	char UnknownData_249[0x3]; // 0x249(0x03)
	float ReplicatedWorldTimeSeconds; // 0x24c(0x04)
	float ServerWorldTimeSecondsDelta; // 0x250(0x04)
	float ServerWorldTimeSecondsUpdateFrequency; // 0x254(0x04)
	char UnknownData_258[0x18]; // 0x258(0x18)

	void OnRep_SpectatorClass(); // Function Engine.GameStateBase.OnRep_SpectatorClass
	void OnRep_ReplicatedWorldTimeSeconds(); // Function Engine.GameStateBase.OnRep_ReplicatedWorldTimeSeconds
	void OnRep_ReplicatedHasBegunPlay(); // Function Engine.GameStateBase.OnRep_ReplicatedHasBegunPlay
	void OnRep_GameModeClass(); // Function Engine.GameStateBase.OnRep_GameModeClass
	bool HasMatchStarted(); // Function Engine.GameStateBase.HasMatchStarted
	bool HasBegunPlay(); // Function Engine.GameStateBase.HasBegunPlay
	float GetServerWorldTimeSeconds(); // Function Engine.GameStateBase.GetServerWorldTimeSeconds
	float GetPlayerStartTime(struct AController* Controller); // Function Engine.GameStateBase.GetPlayerStartTime
	float GetPlayerRespawnDelay(struct AController* Controller); // Function Engine.GameStateBase.GetPlayerRespawnDelay
};

// Class Engine.GameState
// Size: 0x290 (Inherited: 0x270)
struct AGameState : public AGameStateBase {
	struct FName MatchState; // 0x270(0x08)
	struct FName PreviousMatchState; // 0x278(0x08)
	int32_t ElapsedTime; // 0x280(0x04)
	char UnknownData_284[0xc]; // 0x284(0x0c)

	void OnRep_MatchState(); // Function Engine.GameState.OnRep_MatchState
	void OnRep_ElapsedTime(); // Function Engine.GameState.OnRep_ElapsedTime
	bool CheckIsEnemy(struct AActor* pActor1, struct AActor* pActor2); // Function Engine.GameState.CheckIsEnemy
};

// Class Engine.Subsystem
// Size: 0x30 (Inherited: 0x28)
struct USubsystem : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class Engine.SoundEffectPreset
// Size: 0x40 (Inherited: 0x28)
struct USoundEffectPreset : public UObject {
	char UnknownData_28[0x18]; // 0x28(0x18)
};

// Class Engine.ShapeComponent
// Size: 0x450 (Inherited: 0x430)
struct UShapeComponent : public UPrimitiveComponent {
	struct UBodySetup* ShapeBodySetup; // 0x430(0x08)
	struct UNavAreaBase* AreaClass; // 0x438(0x08)
	struct FColor ShapeColor; // 0x440(0x04)
	char bDrawOnlyIfSelected : 1; // 0x444(0x01)
	char bShouldCollideWhenPlacing : 1; // 0x444(0x01)
	char bDynamicObstacle : 1; // 0x444(0x01)
	char UnknownData_444_3 : 5; // 0x444(0x01)
	char UnknownData_445[0xb]; // 0x445(0x0b)
};

// Class Engine.AnimNotifyState_Trail
// Size: 0x58 (Inherited: 0x30)
struct UAnimNotifyState_Trail : public UAnimNotifyState {
	struct UParticleSystem* PSTemplate; // 0x30(0x08)
	struct FName FirstSocketName; // 0x38(0x08)
	struct FName SecondSocketName; // 0x40(0x08)
	char WidthScaleMode; // 0x48(0x01)
	char UnknownData_49[0x3]; // 0x49(0x03)
	struct FName WidthScaleCurve; // 0x4c(0x08)
	char bRecycleSpawnedSystems : 1; // 0x54(0x01)
	char UnknownData_54_1 : 7; // 0x54(0x01)
	char UnknownData_55[0x3]; // 0x55(0x03)

	struct UParticleSystem* OverridePSTemplate(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function Engine.AnimNotifyState_Trail.OverridePSTemplate
};

// Class Engine.CameraModifier
// Size: 0x48 (Inherited: 0x28)
struct UCameraModifier : public UObject {
	char bDebug : 1; // 0x28(0x01)
	char bExclusive : 1; // 0x28(0x01)
	char UnknownData_28_2 : 6; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	char Priority; // 0x2c(0x01)
	char UnknownData_2D[0x3]; // 0x2d(0x03)
	struct APlayerCameraManager* CameraOwner; // 0x30(0x08)
	float AlphaInTime; // 0x38(0x04)
	float AlphaOutTime; // 0x3c(0x04)
	float Alpha; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)

	bool IsDisabled(); // Function Engine.CameraModifier.IsDisabled
	struct AActor* GetViewTarget(); // Function Engine.CameraModifier.GetViewTarget
	void EnableModifier(); // Function Engine.CameraModifier.EnableModifier
	void DisableModifier(bool bImmediate); // Function Engine.CameraModifier.DisableModifier
	void BlueprintModifyPostProcess(float DeltaTime, float PostProcessBlendWeight, struct FPostProcessSettings PostProcessSettings); // Function Engine.CameraModifier.BlueprintModifyPostProcess
	void BlueprintModifyCamera(float DeltaTime, struct FVector ViewLocation, struct FRotator ViewRotation, float FOV, struct FVector NewViewLocation, struct FRotator NewViewRotation, float NewFOV); // Function Engine.CameraModifier.BlueprintModifyCamera
};

// Class Engine.CameraShake
// Size: 0x160 (Inherited: 0x28)
struct UCameraShake : public UObject {
	char bSingleInstance : 1; // 0x28(0x01)
	char UnknownData_28_1 : 7; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	float OscillationDuration; // 0x2c(0x04)
	float OscillationBlendInTime; // 0x30(0x04)
	float OscillationBlendOutTime; // 0x34(0x04)
	struct FROscillator RotOscillation; // 0x38(0x24)
	struct FVOscillator LocOscillation; // 0x5c(0x24)
	struct FFOscillator FOVOscillation; // 0x80(0x0c)
	float AnimPlayRate; // 0x8c(0x04)
	float AnimScale; // 0x90(0x04)
	float AnimBlendInTime; // 0x94(0x04)
	float AnimBlendOutTime; // 0x98(0x04)
	float RandomAnimSegmentDuration; // 0x9c(0x04)
	struct UCameraAnim* Anim; // 0xa0(0x08)
	char bRandomAnimSegment : 1; // 0xa8(0x01)
	char UnknownData_A8_1 : 7; // 0xa8(0x01)
	char UnknownData_A9[0x17]; // 0xa9(0x17)
	struct APlayerCameraManager* CameraOwner; // 0xc0(0x08)
	char UnknownData_C8[0x80]; // 0xc8(0x80)
	float ShakeScale; // 0x148(0x04)
	float OscillatorTimeRemaining; // 0x14c(0x04)
	struct UCameraAnimInst* AnimInst; // 0x150(0x08)
	char UnknownData_158[0x8]; // 0x158(0x08)

	void ReceiveStopShake(bool bImmediately); // Function Engine.CameraShake.ReceiveStopShake
	void ReceivePlayShake(float Scale); // Function Engine.CameraShake.ReceivePlayShake
	bool ReceiveIsFinished(); // Function Engine.CameraShake.ReceiveIsFinished
	void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, struct FMinimalViewInfo POV, struct FMinimalViewInfo ModifiedPOV); // Function Engine.CameraShake.BlueprintUpdateCameraShake
};

// Class Engine.DamageType
// Size: 0x40 (Inherited: 0x28)
struct UDamageType : public UObject {
	char bCausedByWorld : 1; // 0x28(0x01)
	char bScaleMomentumByMass : 1; // 0x28(0x01)
	char bRadialDamageVelChange : 1; // 0x28(0x01)
	char UnknownData_28_3 : 5; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	float DamageImpulse; // 0x2c(0x04)
	float DestructibleImpulse; // 0x30(0x04)
	float DestructibleDamageSpreadScale; // 0x34(0x04)
	float DamageFalloff; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.PhysicsVolume
// Size: 0x268 (Inherited: 0x258)
struct APhysicsVolume : public AVolume {
	float TerminalVelocity; // 0x258(0x04)
	int32_t Priority; // 0x25c(0x04)
	float FluidFriction; // 0x260(0x04)
	char bWaterVolume : 1; // 0x264(0x01)
	char bPhysicsOnContact : 1; // 0x264(0x01)
	char UnknownData_264_2 : 6; // 0x264(0x01)
	char UnknownData_265[0x3]; // 0x265(0x03)
};

// Class Engine.GameUserSettings
// Size: 0x120 (Inherited: 0x28)
struct UGameUserSettings : public UObject {
	bool bUseVSync; // 0x28(0x01)
	bool bUseDynamicResolution; // 0x29(0x01)
	char UnknownData_2A[0x56]; // 0x2a(0x56)
	uint32_t ResolutionSizeX; // 0x80(0x04)
	uint32_t ResolutionSizeY; // 0x84(0x04)
	uint32_t LastUserConfirmedResolutionSizeX; // 0x88(0x04)
	uint32_t LastUserConfirmedResolutionSizeY; // 0x8c(0x04)
	int32_t WindowPosX; // 0x90(0x04)
	int32_t WindowPosY; // 0x94(0x04)
	int32_t FullscreenMode; // 0x98(0x04)
	int32_t LastConfirmedFullscreenMode; // 0x9c(0x04)
	int32_t PreferredFullscreenMode; // 0xa0(0x04)
	uint32_t Version; // 0xa4(0x04)
	int32_t AudioQualityLevel; // 0xa8(0x04)
	int32_t LastConfirmedAudioQualityLevel; // 0xac(0x04)
	float FrameRateLimit; // 0xb0(0x04)
	char UnknownData_B4[0x4]; // 0xb4(0x04)
	int32_t DesiredScreenWidth; // 0xb8(0x04)
	bool bUseDesiredScreenHeight; // 0xbc(0x01)
	char UnknownData_BD[0x3]; // 0xbd(0x03)
	int32_t DesiredScreenHeight; // 0xc0(0x04)
	int32_t LastUserConfirmedDesiredScreenWidth; // 0xc4(0x04)
	int32_t LastUserConfirmedDesiredScreenHeight; // 0xc8(0x04)
	float LastRecommendedScreenWidth; // 0xcc(0x04)
	float LastRecommendedScreenHeight; // 0xd0(0x04)
	float LastCPUBenchmarkResult; // 0xd4(0x04)
	float LastGPUBenchmarkResult; // 0xd8(0x04)
	char UnknownData_DC[0x4]; // 0xdc(0x04)
	struct TArray<float> LastCPUBenchmarkSteps; // 0xe0(0x10)
	struct TArray<float> LastGPUBenchmarkSteps; // 0xf0(0x10)
	float LastGPUBenchmarkMultiplier; // 0x100(0x04)
	bool bUseHDRDisplayOutput; // 0x104(0x01)
	char UnknownData_105[0x3]; // 0x105(0x03)
	int32_t HDRDisplayOutputNits; // 0x108(0x04)
	char UnknownData_10C[0x4]; // 0x10c(0x04)
	struct FMulticastInlineDelegate OnGameUserSettingsUINeedsUpdate; // 0x110(0x10)

	void ValidateSettings(); // Function Engine.GameUserSettings.ValidateSettings
	bool SupportsHDRDisplayOutput(); // Function Engine.GameUserSettings.SupportsHDRDisplayOutput
	void SetVSyncEnabled(bool bEnable); // Function Engine.GameUserSettings.SetVSyncEnabled
	void SetVisualEffectQuality(int32_t Value); // Function Engine.GameUserSettings.SetVisualEffectQuality
	void SetViewDistanceQuality(int32_t Value); // Function Engine.GameUserSettings.SetViewDistanceQuality
	void SetToDefaults(); // Function Engine.GameUserSettings.SetToDefaults
	void SetTextureQuality(int32_t Value); // Function Engine.GameUserSettings.SetTextureQuality
	void SetShadowQuality(int32_t Value); // Function Engine.GameUserSettings.SetShadowQuality
	void SetShadingQuality(int32_t Value); // Function Engine.GameUserSettings.SetShadingQuality
	void SetScreenResolution(struct FIntPoint Resolution); // Function Engine.GameUserSettings.SetScreenResolution
	void SetResolutionScaleValueEx(float NewScaleValue); // Function Engine.GameUserSettings.SetResolutionScaleValueEx
	void SetResolutionScaleValue(int32_t NewScaleValue); // Function Engine.GameUserSettings.SetResolutionScaleValue
	void SetResolutionScaleNormalized(float NewScaleNormalized); // Function Engine.GameUserSettings.SetResolutionScaleNormalized
	void SetPostProcessingQuality(int32_t Value); // Function Engine.GameUserSettings.SetPostProcessingQuality
	void SetOverallScalabilityLevel(int32_t Value); // Function Engine.GameUserSettings.SetOverallScalabilityLevel
	void SetFullscreenMode(char InFullscreenMode); // Function Engine.GameUserSettings.SetFullscreenMode
	void SetFrameRateLimit(float NewLimit); // Function Engine.GameUserSettings.SetFrameRateLimit
	void SetFoliageQuality(int32_t Value); // Function Engine.GameUserSettings.SetFoliageQuality
	void SetDynamicResolutionEnabled(bool bEnable); // Function Engine.GameUserSettings.SetDynamicResolutionEnabled
	void SetBenchmarkFallbackValues(); // Function Engine.GameUserSettings.SetBenchmarkFallbackValues
	void SetAudioQualityLevel(int32_t QualityLevel); // Function Engine.GameUserSettings.SetAudioQualityLevel
	void SetAntiAliasingQuality(int32_t Value); // Function Engine.GameUserSettings.SetAntiAliasingQuality
	void SaveSettings(); // Function Engine.GameUserSettings.SaveSettings
	void RunHardwareBenchmark(int32_t WorkScale, float CPUMultiplier, float GPUMultiplier); // Function Engine.GameUserSettings.RunHardwareBenchmark
	void RevertVideoMode(); // Function Engine.GameUserSettings.RevertVideoMode
	void ResetToCurrentSettings(); // Function Engine.GameUserSettings.ResetToCurrentSettings
	void LoadSettings(bool bForceReload); // Function Engine.GameUserSettings.LoadSettings
	bool IsVSyncEnabled(); // Function Engine.GameUserSettings.IsVSyncEnabled
	bool IsVSyncDirty(); // Function Engine.GameUserSettings.IsVSyncDirty
	bool IsScreenResolutionDirty(); // Function Engine.GameUserSettings.IsScreenResolutionDirty
	bool IsHDREnabled(); // Function Engine.GameUserSettings.IsHDREnabled
	bool IsFullscreenModeDirty(); // Function Engine.GameUserSettings.IsFullscreenModeDirty
	bool IsDynamicResolutionEnabled(); // Function Engine.GameUserSettings.IsDynamicResolutionEnabled
	bool IsDynamicResolutionDirty(); // Function Engine.GameUserSettings.IsDynamicResolutionDirty
	bool IsDirty(); // Function Engine.GameUserSettings.IsDirty
	int32_t GetVisualEffectQuality(); // Function Engine.GameUserSettings.GetVisualEffectQuality
	int32_t GetViewDistanceQuality(); // Function Engine.GameUserSettings.GetViewDistanceQuality
	int32_t GetTextureQuality(); // Function Engine.GameUserSettings.GetTextureQuality
	int32_t GetSyncInterval(); // Function Engine.GameUserSettings.GetSyncInterval
	int32_t GetShadowQuality(); // Function Engine.GameUserSettings.GetShadowQuality
	int32_t GetShadingQuality(); // Function Engine.GameUserSettings.GetShadingQuality
	struct FIntPoint GetScreenResolution(); // Function Engine.GameUserSettings.GetScreenResolution
	float GetResolutionScaleNormalized(); // Function Engine.GameUserSettings.GetResolutionScaleNormalized
	void GetResolutionScaleInformationEx(float CurrentScaleNormalized, float CurrentScaleValue, float MinScaleValue, float MaxScaleValue); // Function Engine.GameUserSettings.GetResolutionScaleInformationEx
	void GetResolutionScaleInformation(float CurrentScaleNormalized, int32_t CurrentScaleValue, int32_t MinScaleValue, int32_t MaxScaleValue); // Function Engine.GameUserSettings.GetResolutionScaleInformation
	float GetRecommendedResolutionScale(); // Function Engine.GameUserSettings.GetRecommendedResolutionScale
	char GetPreferredFullscreenMode(); // Function Engine.GameUserSettings.GetPreferredFullscreenMode
	int32_t GetPostProcessingQuality(); // Function Engine.GameUserSettings.GetPostProcessingQuality
	int32_t GetOverallScalabilityLevel(); // Function Engine.GameUserSettings.GetOverallScalabilityLevel
	struct FIntPoint GetLastConfirmedScreenResolution(); // Function Engine.GameUserSettings.GetLastConfirmedScreenResolution
	char GetLastConfirmedFullscreenMode(); // Function Engine.GameUserSettings.GetLastConfirmedFullscreenMode
	struct UGameUserSettings* GetGameUserSettings(); // Function Engine.GameUserSettings.GetGameUserSettings
	char GetFullscreenMode(); // Function Engine.GameUserSettings.GetFullscreenMode
	float GetFrameRateLimit(); // Function Engine.GameUserSettings.GetFrameRateLimit
	int32_t GetFramePace(); // Function Engine.GameUserSettings.GetFramePace
	int32_t GetFoliageQuality(); // Function Engine.GameUserSettings.GetFoliageQuality
	struct FIntPoint GetDesktopResolution(); // Function Engine.GameUserSettings.GetDesktopResolution
	struct FIntPoint GetDefaultWindowPosition(); // Function Engine.GameUserSettings.GetDefaultWindowPosition
	char GetDefaultWindowMode(); // Function Engine.GameUserSettings.GetDefaultWindowMode
	float GetDefaultResolutionScale(); // Function Engine.GameUserSettings.GetDefaultResolutionScale
	struct FIntPoint GetDefaultResolution(); // Function Engine.GameUserSettings.GetDefaultResolution
	int32_t GetCurrentHDRDisplayNits(); // Function Engine.GameUserSettings.GetCurrentHDRDisplayNits
	int32_t GetAudioQualityLevel(); // Function Engine.GameUserSettings.GetAudioQualityLevel
	int32_t GetAntiAliasingQuality(); // Function Engine.GameUserSettings.GetAntiAliasingQuality
	void EnableHDRDisplayOutput(bool bEnable, int32_t DisplayNits); // Function Engine.GameUserSettings.EnableHDRDisplayOutput
	void ConfirmVideoMode(); // Function Engine.GameUserSettings.ConfirmVideoMode
	void ApplySettings(bool bCheckForCommandLineOverrides); // Function Engine.GameUserSettings.ApplySettings
	void ApplyResolutionSettings(bool bCheckForCommandLineOverrides); // Function Engine.GameUserSettings.ApplyResolutionSettings
	void ApplyNonResolutionSettings(); // Function Engine.GameUserSettings.ApplyNonResolutionSettings
	void ApplyHardwareBenchmarkResults(); // Function Engine.GameUserSettings.ApplyHardwareBenchmarkResults
};

// Class Engine.DataTable
// Size: 0xc8 (Inherited: 0x28)
struct UDataTable : public UObject {
	struct UScriptStruct* RowStruct; // 0x28(0x08)
	char UnknownData_30[0x50]; // 0x30(0x50)
	char bStripFromClientBuilds : 1; // 0x80(0x01)
	char bIgnoreExtraFields : 1; // 0x80(0x01)
	char bIgnoreMissingFields : 1; // 0x80(0x01)
	char UnknownData_80_3 : 5; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)
	struct FString ImportKeyField; // 0x88(0x10)
	char UnknownData_98[0x30]; // 0x98(0x30)
};

// Class Engine.CameraActor
// Size: 0x790 (Inherited: 0x220)
struct ACameraActor : public AActor {
	char AutoActivateForPlayer; // 0x220(0x01)
	char UnknownData_221[0x7]; // 0x221(0x07)
	struct UCameraComponent* CameraComponent; // 0x228(0x08)
	struct USceneComponent* SceneComponent; // 0x230(0x08)
	char UnknownData_238[0x8]; // 0x238(0x08)
	char bConstrainAspectRatio : 1; // 0x240(0x01)
	char UnknownData_240_1 : 7; // 0x240(0x01)
	char UnknownData_241[0x3]; // 0x241(0x03)
	float AspectRatio; // 0x244(0x04)
	float FOVAngle; // 0x248(0x04)
	float PostProcessBlendWeight; // 0x24c(0x04)
	struct FPostProcessSettings PostProcessSettings; // 0x250(0x540)

	int32_t GetAutoActivatePlayerIndex(); // Function Engine.CameraActor.GetAutoActivatePlayerIndex
};

// Class Engine.PrimaryAssetLabel
// Size: 0x68 (Inherited: 0x30)
struct UPrimaryAssetLabel : public UPrimaryDataAsset {
	struct FPrimaryAssetRules Rules; // 0x30(0x0c)
	char bLabelAssetsInMyDirectory : 1; // 0x3c(0x01)
	char bIsRuntimeLabel : 1; // 0x3c(0x01)
	char UnknownData_3C_2 : 6; // 0x3c(0x01)
	char UnknownData_3D[0x3]; // 0x3d(0x03)
	struct TArray<struct TSoftObjectPtr<struct UObject>> ExplicitAssets; // 0x40(0x10)
	struct TArray<SoftClassProperty> ExplicitBlueprints; // 0x50(0x10)
	struct FCollectionReference AssetCollection; // 0x60(0x08)
};

// Class Engine.NavAreaBase
// Size: 0x30 (Inherited: 0x28)
struct UNavAreaBase : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class Engine.StaticMeshComponent
// Size: 0x4d0 (Inherited: 0x460)
struct UStaticMeshComponent : public UMeshComponent {
	int32_t ForcedLodModel; // 0x458(0x04)
	int32_t PreviousLODLevel; // 0x45c(0x04)
	int32_t MinLOD; // 0x460(0x04)
	int32_t SubDivisionStepSize; // 0x464(0x04)
	struct UStaticMesh* StaticMesh; // 0x468(0x08)
	struct FColor WireframeColorOverride; // 0x470(0x04)
	char bEvaluateWorldPositionOffset : 1; // 0x474(0x01)
	char bOverrideWireframeColor : 1; // 0x474(0x01)
	char bOverrideMinLod : 1; // 0x474(0x01)
	char bOverrideNavigationExport : 1; // 0x474(0x01)
	char bForceNavigationObstacle : 1; // 0x474(0x01)
	char bDisallowMeshPaintPerInstance : 1; // 0x474(0x01)
	char bIgnoreInstanceForTextureStreaming : 1; // 0x474(0x01)
	char bOverrideLightMapRes : 1; // 0x474(0x01)
	char bCastDistanceFieldIndirectShadow : 1; // 0x475(0x01)
	char bOverrideDistanceFieldSelfShadowBias : 1; // 0x475(0x01)
	char bUseSubDivisions : 1; // 0x475(0x01)
	char bUseDefaultCollision : 1; // 0x475(0x01)
	char bReverseCulling : 1; // 0x475(0x01)
	char bHasReflectionCaptureOverrideLocation : 1; // 0x475(0x01)
	struct FVector ReflectionCaptureOverrideLocation; // 0x478(0x0c)
	int32_t OverriddenLightMapRes; // 0x484(0x04)
	float DistanceFieldIndirectShadowMinVisibility; // 0x488(0x04)
	float DistanceFieldSelfShadowBias; // 0x48c(0x04)
	float StreamingDistanceMultiplier; // 0x490(0x04)
	struct TArray<struct FStaticMeshComponentLODInfo> LODData; // 0x498(0x10)
	struct TArray<struct FStreamingTextureBuildInfo> StreamingTextureData; // 0x4a8(0x10)
	struct FLightmassPrimitiveSettings LightmassSettings; // 0x4b8(0x18)

	bool SetStaticMesh(struct UStaticMesh* NewMesh); // Function Engine.StaticMeshComponent.SetStaticMesh
	void SetReverseCulling(bool ReverseCulling); // Function Engine.StaticMeshComponent.SetReverseCulling
	void SetForcedLodModel(int32_t NewForcedLodModel); // Function Engine.StaticMeshComponent.SetForcedLodModel
	void SetDistanceFieldSelfShadowBias(float NewValue); // Function Engine.StaticMeshComponent.SetDistanceFieldSelfShadowBias
	void OnRep_StaticMesh(struct UStaticMesh* OldStaticMesh); // Function Engine.StaticMeshComponent.OnRep_StaticMesh
	void GetLocalBounds(struct FVector Min, struct FVector Max); // Function Engine.StaticMeshComponent.GetLocalBounds
};

// Class Engine.NavigationObjectBase
// Size: 0x248 (Inherited: 0x220)
struct ANavigationObjectBase : public AActor {
	char UnknownData_220[0x8]; // 0x220(0x08)
	struct UCapsuleComponent* CapsuleComponent; // 0x228(0x08)
	struct UBillboardComponent* GoodSprite; // 0x230(0x08)
	struct UBillboardComponent* BadSprite; // 0x238(0x08)
	char bIsPIEPlayerStart : 1; // 0x240(0x01)
	char UnknownData_240_1 : 7; // 0x240(0x01)
	char UnknownData_241[0x7]; // 0x241(0x07)
};

// Class Engine.PlayerCameraManager
// Size: 0x2740 (Inherited: 0x220)
struct APlayerCameraManager : public AActor {
	struct APlayerController* PCOwner; // 0x220(0x08)
	struct USceneComponent* TransformComponent; // 0x228(0x08)
	char UnknownData_230[0x8]; // 0x230(0x08)
	float DefaultFOV; // 0x238(0x04)
	char UnknownData_23C[0x4]; // 0x23c(0x04)
	float DefaultOrthoWidth; // 0x240(0x04)
	char UnknownData_244[0x4]; // 0x244(0x04)
	float DefaultAspectRatio; // 0x248(0x04)
	char UnknownData_24C[0x44]; // 0x24c(0x44)
	struct FCameraCacheEntry CameraCache; // 0x290(0x5e0)
	struct FCameraCacheEntry LastFrameCameraCache; // 0x870(0x5e0)
	struct FTViewTarget ViewTarget; // 0xe50(0x5f0)
	struct FTViewTarget PendingViewTarget; // 0x1440(0x5f0)
	char UnknownData_1A30[0x30]; // 0x1a30(0x30)
	struct FCameraCacheEntry CameraCachePrivate; // 0x1a60(0x5e0)
	struct FCameraCacheEntry LastFrameCameraCachePrivate; // 0x2040(0x5e0)
	struct TArray<struct UCameraModifier*> ModifierList; // 0x2620(0x10)
	struct TArray<struct UCameraModifier*> DefaultModifiers; // 0x2630(0x10)
	float FreeCamDistance; // 0x2640(0x04)
	struct FVector FreeCamOffset; // 0x2644(0x0c)
	struct FVector ViewTargetOffset; // 0x2650(0x0c)
	char UnknownData_265C[0x14]; // 0x265c(0x14)
	struct TArray<struct AEmitterCameraLensEffectBase*> CameraLensEffects; // 0x2670(0x10)
	struct UCameraModifier_CameraShake* CachedCameraShakeMod; // 0x2680(0x08)
	struct UCameraAnimInst* AnimInstPool[0x8]; // 0x2688(0x40)
	struct TArray<struct FPostProcessSettings> PostProcessBlendCache; // 0x26c8(0x10)
	char UnknownData_26D8[0x10]; // 0x26d8(0x10)
	struct TArray<struct UCameraAnimInst*> ActiveAnims; // 0x26e8(0x10)
	struct TArray<struct UCameraAnimInst*> FreeAnims; // 0x26f8(0x10)
	struct ACameraActor* AnimCameraActor; // 0x2708(0x08)
	char bIsOrthographic : 1; // 0x2710(0x01)
	char bDefaultConstrainAspectRatio : 1; // 0x2710(0x01)
	char UnknownData_2710_2 : 4; // 0x2710(0x01)
	char bClientSimulatingViewTarget : 1; // 0x2710(0x01)
	char bUseClientSideCameraUpdates : 1; // 0x2710(0x01)
	char UnknownData_2711_0 : 2; // 0x2711(0x01)
	char bGameCameraCutThisFrame : 1; // 0x2711(0x01)
	char bForceLocalSpaceForInterpolatedRendering : 1; // 0x2711(0x01)
	char UnknownData_2711_4 : 4; // 0x2711(0x01)
	char UnknownData_2712[0x2]; // 0x2712(0x02)
	float ViewPitchMin; // 0x2714(0x04)
	float ViewPitchMax; // 0x2718(0x04)
	float ViewYawMin; // 0x271c(0x04)
	float ViewYawMax; // 0x2720(0x04)
	float ViewRollMin; // 0x2724(0x04)
	float ViewRollMax; // 0x2728(0x04)
	char UnknownData_272C[0x4]; // 0x272c(0x04)
	float ServerUpdateCameraTimeout; // 0x2730(0x04)
	char UnknownData_2734[0xc]; // 0x2734(0x0c)

	void StopCameraShake(struct UCameraShake* ShakeInstance, bool bImmediately); // Function Engine.PlayerCameraManager.StopCameraShake
	void StopCameraFade(); // Function Engine.PlayerCameraManager.StopCameraFade
	void StopCameraAnimInst(struct UCameraAnimInst* AnimInst, bool bImmediate); // Function Engine.PlayerCameraManager.StopCameraAnimInst
	void StopAllInstancesOfCameraShakeFromSource(struct UCameraShakeSourceComponent* SourceComponent, bool bImmediately); // Function Engine.PlayerCameraManager.StopAllInstancesOfCameraShakeFromSource
	void StopAllInstancesOfCameraShake(struct UCameraShake* Shake, bool bImmediately); // Function Engine.PlayerCameraManager.StopAllInstancesOfCameraShake
	void StopAllInstancesOfCameraAnim(struct UCameraAnim* Anim, bool bImmediate); // Function Engine.PlayerCameraManager.StopAllInstancesOfCameraAnim
	void StopAllCameraShakes(bool bImmediately); // Function Engine.PlayerCameraManager.StopAllCameraShakes
	void StopAllCameraAnims(bool bImmediate); // Function Engine.PlayerCameraManager.StopAllCameraAnims
	void StartCameraFade(float FromAlpha, float ToAlpha, float Duration, struct FLinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished); // Function Engine.PlayerCameraManager.StartCameraFade
	void SetManualCameraFade(float InFadeAmount, struct FLinearColor Color, bool bInFadeAudio); // Function Engine.PlayerCameraManager.SetManualCameraFade
	void SetGameCameraCutThisFrame(); // Function Engine.PlayerCameraManager.SetGameCameraCutThisFrame
	bool RemoveCameraModifier(struct UCameraModifier* ModifierToRemove); // Function Engine.PlayerCameraManager.RemoveCameraModifier
	void RemoveCameraLensEffect(struct AEmitterCameraLensEffectBase* Emitter); // Function Engine.PlayerCameraManager.RemoveCameraLensEffect
	struct UCameraShake* PlayCameraShakeFromSource(struct UCameraShake* ShakeClass, struct UCameraShakeSourceComponent* SourceComponent); // Function Engine.PlayerCameraManager.PlayCameraShakeFromSource
	struct UCameraShake* PlayCameraShake(struct UCameraShake* ShakeClass, float Scale, char PlaySpace, struct FRotator UserPlaySpaceRot); // Function Engine.PlayerCameraManager.PlayCameraShake
	struct UCameraAnimInst* PlayCameraAnim(struct UCameraAnim* Anim, float Rate, float Scale, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, float Duration, char PlaySpace, struct FRotator UserPlaySpaceRot); // Function Engine.PlayerCameraManager.PlayCameraAnim
	void PhotographyCameraModify(struct FVector NewCameraLocation, struct FVector PreviousCameraLocation, struct FVector OriginalCameraLocation, struct FVector ResultCameraLocation); // Function Engine.PlayerCameraManager.PhotographyCameraModify
	void OnPhotographySessionStart(); // Function Engine.PlayerCameraManager.OnPhotographySessionStart
	void OnPhotographySessionEnd(); // Function Engine.PlayerCameraManager.OnPhotographySessionEnd
	void OnPhotographyMultiPartCaptureStart(); // Function Engine.PlayerCameraManager.OnPhotographyMultiPartCaptureStart
	void OnPhotographyMultiPartCaptureEnd(); // Function Engine.PlayerCameraManager.OnPhotographyMultiPartCaptureEnd
	struct APlayerController* GetOwningPlayerController(); // Function Engine.PlayerCameraManager.GetOwningPlayerController
	float GetFOVAngle(); // Function Engine.PlayerCameraManager.GetFOVAngle
	struct FRotator GetCameraRotation(); // Function Engine.PlayerCameraManager.GetCameraRotation
	struct FVector GetCameraLocation(); // Function Engine.PlayerCameraManager.GetCameraLocation
	struct UCameraModifier* FindCameraModifierByClass(struct UCameraModifier* ModifierClass); // Function Engine.PlayerCameraManager.FindCameraModifierByClass
	void ClearCameraLensEffects(); // Function Engine.PlayerCameraManager.ClearCameraLensEffects
	bool BlueprintUpdateCamera(struct AActor* CameraTarget, struct FVector NewCameraLocation, struct FRotator NewCameraRotation, float NewCameraFOV); // Function Engine.PlayerCameraManager.BlueprintUpdateCamera
	struct UCameraModifier* AddNewCameraModifier(struct UCameraModifier* ModifierClass); // Function Engine.PlayerCameraManager.AddNewCameraModifier
	struct AEmitterCameraLensEffectBase* AddCameraLensEffect(struct AEmitterCameraLensEffectBase* LensEffectEmitterClass); // Function Engine.PlayerCameraManager.AddCameraLensEffect
};

// Class Engine.PlayerStart
// Size: 0x250 (Inherited: 0x248)
struct APlayerStart : public ANavigationObjectBase {
	struct FName PlayerStartTag; // 0x248(0x08)
};

// Class Engine.PlayerState
// Size: 0x320 (Inherited: 0x220)
struct APlayerState : public AInfo {
	float Score; // 0x220(0x04)
	int32_t PlayerId; // 0x224(0x04)
	char Ping; // 0x228(0x01)
	char UnknownData_229[0x1]; // 0x229(0x01)
	char bShouldUpdateReplicatedPing : 1; // 0x22a(0x01)
	char bIsSpectator : 1; // 0x22a(0x01)
	char bOnlySpectator : 1; // 0x22a(0x01)
	char bIsABot : 1; // 0x22a(0x01)
	char UnknownData_22A_4 : 1; // 0x22a(0x01)
	char bIsInactive : 1; // 0x22a(0x01)
	char bFromPreviousLevel : 1; // 0x22a(0x01)
	char UnknownData_22B[0x1]; // 0x22b(0x01)
	int32_t StartTime; // 0x22c(0x04)
	struct ULocalMessage* EngineMessageClass; // 0x230(0x08)
	char UnknownData_238[0x8]; // 0x238(0x08)
	struct FString SavedNetworkAddress; // 0x240(0x10)
	struct FUniqueNetIdRepl UniqueId; // 0x250(0x28)
	char UnknownData_278[0x8]; // 0x278(0x08)
	struct APawn* PawnPrivate; // 0x280(0x08)
	char UnknownData_288[0x78]; // 0x288(0x78)
	struct FString PlayerNamePrivate; // 0x300(0x10)
	char UnknownData_310[0x10]; // 0x310(0x10)

	void ReceiveOverrideWith(struct APlayerState* OldPlayerState); // Function Engine.PlayerState.ReceiveOverrideWith
	void ReceiveCopyProperties(struct APlayerState* NewPlayerState); // Function Engine.PlayerState.ReceiveCopyProperties
	void OnRep_UniqueId(); // Function Engine.PlayerState.OnRep_UniqueId
	void OnRep_Score(); // Function Engine.PlayerState.OnRep_Score
	void OnRep_PlayerName(); // Function Engine.PlayerState.OnRep_PlayerName
	void OnRep_PlayerId(); // Function Engine.PlayerState.OnRep_PlayerId
	void OnRep_bIsInactive(); // Function Engine.PlayerState.OnRep_bIsInactive
	struct FString GetPlayerName(); // Function Engine.PlayerState.GetPlayerName
};

// Class Engine.ProjectileMovementComponent
// Size: 0x1d0 (Inherited: 0xf0)
struct UProjectileMovementComponent : public UMovementComponent {
	float InitialSpeed; // 0xf0(0x04)
	float MaxSpeed; // 0xf4(0x04)
	char bRotationFollowsVelocity : 1; // 0xf8(0x01)
	char bRotationRemainsVertical : 1; // 0xf8(0x01)
	char bShouldBounce : 1; // 0xf8(0x01)
	char bInitialVelocityInLocalSpace : 1; // 0xf8(0x01)
	char bForceSubStepping : 1; // 0xf8(0x01)
	char bSimulationEnabled : 1; // 0xf8(0x01)
	char bSweepCollision : 1; // 0xf8(0x01)
	char bIsHomingProjectile : 1; // 0xf8(0x01)
	char bBounceAngleAffectsFriction : 1; // 0xf9(0x01)
	char bIsSliding : 1; // 0xf9(0x01)
	char bInterpMovement : 1; // 0xf9(0x01)
	char bInterpRotation : 1; // 0xf9(0x01)
	char UnknownData_F9_4 : 4; // 0xf9(0x01)
	char UnknownData_FA[0x2]; // 0xfa(0x02)
	float PreviousHitTime; // 0xfc(0x04)
	struct FVector PreviousHitNormal; // 0x100(0x0c)
	float ProjectileGravityScale; // 0x10c(0x04)
	float Buoyancy; // 0x110(0x04)
	float Bounciness; // 0x114(0x04)
	float Friction; // 0x118(0x04)
	float BounceVelocityStopSimulatingThreshold; // 0x11c(0x04)
	float MinFrictionFraction; // 0x120(0x04)
	char UnknownData_124[0x4]; // 0x124(0x04)
	struct FMulticastInlineDelegate OnProjectileBounce; // 0x128(0x10)
	struct FMulticastInlineDelegate OnProjectileStop; // 0x138(0x10)
	float HomingAccelerationMagnitude; // 0x148(0x04)
	struct FWeakObjectPtr<struct USceneComponent> HomingTargetComponent; // 0x14c(0x08)
	float MaxSimulationTimeStep; // 0x154(0x04)
	int32_t MaxSimulationIterations; // 0x158(0x04)
	int32_t BounceAdditionalIterations; // 0x15c(0x04)
	float InterpLocationTime; // 0x160(0x04)
	float InterpRotationTime; // 0x164(0x04)
	float InterpLocationMaxLagDistance; // 0x168(0x04)
	float InterpLocationSnapToTargetDistance; // 0x16c(0x04)
	char UnknownData_170[0x60]; // 0x170(0x60)

	void StopSimulating(struct FHitResult HitResult); // Function Engine.ProjectileMovementComponent.StopSimulating
	void SetVelocityInLocalSpace(struct FVector NewVelocity); // Function Engine.ProjectileMovementComponent.SetVelocityInLocalSpace
	void SetInterpolatedComponent(struct USceneComponent* Component); // Function Engine.ProjectileMovementComponent.SetInterpolatedComponent
	void ResetInterpolation(); // Function Engine.ProjectileMovementComponent.ResetInterpolation
	void OnProjectileStopDelegate__DelegateSignature(struct FHitResult ImpactResult); // DelegateFunction Engine.ProjectileMovementComponent.OnProjectileStopDelegate__DelegateSignature
	void OnProjectileBounceDelegate__DelegateSignature(struct FHitResult ImpactResult, struct FVector ImpactVelocity); // DelegateFunction Engine.ProjectileMovementComponent.OnProjectileBounceDelegate__DelegateSignature
	void MoveInterpolationTarget(struct FVector NewLocation, struct FRotator NewRotation); // Function Engine.ProjectileMovementComponent.MoveInterpolationTarget
	struct FVector LimitVelocity(struct FVector NewVelocity); // Function Engine.ProjectileMovementComponent.LimitVelocity
	bool IsVelocityUnderSimulationThreshold(); // Function Engine.ProjectileMovementComponent.IsVelocityUnderSimulationThreshold
	bool IsInterpolationComplete(); // Function Engine.ProjectileMovementComponent.IsInterpolationComplete
};

// Class Engine.DefaultPawn
// Size: 0x2a8 (Inherited: 0x280)
struct ADefaultPawn : public APawn {
	float BaseTurnRate; // 0x280(0x04)
	float BaseLookUpRate; // 0x284(0x04)
	struct UPawnMovementComponent* MovementComponent; // 0x288(0x08)
	struct USphereComponent* CollisionComponent; // 0x290(0x08)
	struct UStaticMeshComponent* MeshComponent; // 0x298(0x08)
	char bAddDefaultMovementBindings : 1; // 0x2a0(0x01)
	char UnknownData_2A0_1 : 7; // 0x2a0(0x01)
	char UnknownData_2A1[0x7]; // 0x2a1(0x07)

	void TurnAtRate(float Rate); // Function Engine.DefaultPawn.TurnAtRate
	void MoveUp_World(float Val); // Function Engine.DefaultPawn.MoveUp_World
	void MoveRight(float Val); // Function Engine.DefaultPawn.MoveRight
	void MoveForward(float Val); // Function Engine.DefaultPawn.MoveForward
	void LookUpAtRate(float Rate); // Function Engine.DefaultPawn.LookUpAtRate
};

// Class Engine.SpringArmComponent
// Size: 0x290 (Inherited: 0x210)
struct USpringArmComponent : public USceneComponent {
	float TargetArmLength; // 0x208(0x04)
	struct FVector SocketOffset; // 0x20c(0x0c)
	struct FVector TargetOffset; // 0x218(0x0c)
	float ProbeSize; // 0x224(0x04)
	char ProbeChannel; // 0x228(0x01)
	char bDoCollisionTest : 1; // 0x22c(0x01)
	char bUsePawnControlRotation : 1; // 0x22c(0x01)
	char bInheritPitch : 1; // 0x22c(0x01)
	char bInheritYaw : 1; // 0x22c(0x01)
	char bInheritRoll : 1; // 0x22c(0x01)
	char bEnableCameraLag : 1; // 0x22c(0x01)
	char bEnableCameraRotationLag : 1; // 0x22c(0x01)
	char bUseCameraLagSubstepping : 1; // 0x22c(0x01)
	char bDrawDebugLagMarkers : 1; // 0x22d(0x01)
	float CameraLagSpeed; // 0x230(0x04)
	float CameraRotationLagSpeed; // 0x234(0x04)
	float CameraLagMaxTimeStep; // 0x238(0x04)
	float CameraLagMaxDistance; // 0x23c(0x04)
	char UnknownData_242[0x4e]; // 0x242(0x4e)

	bool IsCollisionFixApplied(); // Function Engine.SpringArmComponent.IsCollisionFixApplied
	struct FVector GetUnfixedCameraPosition(); // Function Engine.SpringArmComponent.GetUnfixedCameraPosition
	struct FRotator GetTargetRotation(); // Function Engine.SpringArmComponent.GetTargetRotation
};

// Class Engine.ParticleSystemComponent
// Size: 0x6b0 (Inherited: 0x430)
struct UParticleSystemComponent : public UFXSystemComponent {
	struct UParticleSystem* Template; // 0x430(0x08)
	struct TArray<struct UMaterialInterface*> EmitterMaterials; // 0x438(0x10)
	struct TArray<struct USkeletalMeshComponent*> SkelMeshComponents; // 0x448(0x10)
	char UnknownData_458[0x1]; // 0x458(0x01)
	char bResetOnDetach : 1; // 0x459(0x01)
	char bUpdateOnDedicatedServer : 1; // 0x459(0x01)
	char UnknownData_459_2 : 2; // 0x459(0x01)
	char bAllowRecycling : 1; // 0x459(0x01)
	char bAutoManageAttachment : 1; // 0x459(0x01)
	char bAutoAttachWeldSimulatedBodies : 1; // 0x459(0x01)
	char UnknownData_45A_0 : 1; // 0x45a(0x01)
	char bWarmingUp : 1; // 0x45a(0x01)
	char bOverrideLODMethod : 1; // 0x45a(0x01)
	char bSkipUpdateDynamicDataDuringTick : 1; // 0x45a(0x01)
	char UnknownData_45A_4 : 4; // 0x45a(0x01)
	char UnknownData_45B[0xa]; // 0x45b(0x0a)
	char LODMethod; // 0x465(0x01)
	enum class EParticleSignificanceLevel RequiredSignificance; // 0x466(0x01)
	char UnknownData_467[0x1]; // 0x467(0x01)
	struct TArray<struct FParticleSysParam> InstanceParameters; // 0x468(0x10)
	struct FMulticastInlineDelegate OnParticleSpawn; // 0x478(0x10)
	struct FMulticastInlineDelegate OnParticleBurst; // 0x488(0x10)
	struct FMulticastInlineDelegate OnParticleDeath; // 0x498(0x10)
	struct FMulticastInlineDelegate OnParticleCollide; // 0x4a8(0x10)
	struct FMulticastInlineDelegate OnParticleCollidePacked; // 0x4b8(0x10)
	struct FParticleChannelContainer m_ParticleChannels; // 0x4c8(0x04)
	bool bOldPositionValid; // 0x4cc(0x01)
	char UnknownData_4CD[0x3]; // 0x4cd(0x03)
	struct FVector OldPosition; // 0x4d0(0x0c)
	struct FVector PartSysVelocity; // 0x4dc(0x0c)
	float WarmupTime; // 0x4e8(0x04)
	float WarmupTickRate; // 0x4ec(0x04)
	char UnknownData_4F0[0x4]; // 0x4f0(0x04)
	float SecondsBeforeInactive; // 0x4f4(0x04)
	char UnknownData_4F8[0x4]; // 0x4f8(0x04)
	float MaxTimeBeforeForceUpdateTransform; // 0x4fc(0x04)
	char UnknownData_500[0x20]; // 0x500(0x20)
	struct TArray<struct UParticleSystemReplay*> ReplayClips; // 0x520(0x10)
	char UnknownData_530[0x8]; // 0x530(0x08)
	float CustomTimeDilation; // 0x538(0x04)
	char UnknownData_53C[0x54]; // 0x53c(0x54)
	struct FWeakObjectPtr<struct USceneComponent> AutoAttachParent; // 0x590(0x08)
	struct FName AutoAttachSocketName; // 0x598(0x08)
	enum class EAttachmentRule AutoAttachLocationRule; // 0x5a0(0x01)
	enum class EAttachmentRule AutoAttachRotationRule; // 0x5a1(0x01)
	enum class EAttachmentRule AutoAttachScaleRule; // 0x5a2(0x01)
	char UnknownData_5A3[0x2d]; // 0x5a3(0x2d)
	struct FMulticastInlineDelegate OnSystemFinished; // 0x5d0(0x10)
	char UnknownData_5E0[0xd0]; // 0x5e0(0xd0)

	void SetTrailSourceData(struct FName InFirstSocketName, struct FName InSecondSocketName, char InWidthMode, float InWidth); // Function Engine.ParticleSystemComponent.SetTrailSourceData
	void SetTemplate(struct UParticleSystem* NewTemplate); // Function Engine.ParticleSystemComponent.SetTemplate
	void SetParticleChannels(struct FParticleChannelContainer Channels); // Function Engine.ParticleSystemComponent.SetParticleChannels
	void SetMaterialParameter(struct FName ParameterName, struct UMaterialInterface* Param); // Function Engine.ParticleSystemComponent.SetMaterialParameter
	void SetBeamTargetTangent(int32_t EmitterIndex, struct FVector NewTangentPoint, int32_t TargetIndex); // Function Engine.ParticleSystemComponent.SetBeamTargetTangent
	void SetBeamTargetStrength(int32_t EmitterIndex, float NewTargetStrength, int32_t TargetIndex); // Function Engine.ParticleSystemComponent.SetBeamTargetStrength
	void SetBeamTargetPoint(int32_t EmitterIndex, struct FVector NewTargetPoint, int32_t TargetIndex); // Function Engine.ParticleSystemComponent.SetBeamTargetPoint
	void SetBeamSourceTangent(int32_t EmitterIndex, struct FVector NewTangentPoint, int32_t SourceIndex); // Function Engine.ParticleSystemComponent.SetBeamSourceTangent
	void SetBeamSourceStrength(int32_t EmitterIndex, float NewSourceStrength, int32_t SourceIndex); // Function Engine.ParticleSystemComponent.SetBeamSourceStrength
	void SetBeamSourcePoint(int32_t EmitterIndex, struct FVector NewSourcePoint, int32_t SourceIndex); // Function Engine.ParticleSystemComponent.SetBeamSourcePoint
	void SetBeamEndPoint(int32_t EmitterIndex, struct FVector NewEndPoint); // Function Engine.ParticleSystemComponent.SetBeamEndPoint
	void SetAutoAttachParams(struct USceneComponent* Parent, struct FName SocketName, char LocationType); // Function Engine.ParticleSystemComponent.SetAutoAttachParams
	int32_t GetNumActiveParticles(); // Function Engine.ParticleSystemComponent.GetNumActiveParticles
	struct UMaterialInterface* GetNamedMaterial(struct FName InName); // Function Engine.ParticleSystemComponent.GetNamedMaterial
	bool GetBeamTargetTangent(int32_t EmitterIndex, int32_t TargetIndex, struct FVector OutTangentPoint); // Function Engine.ParticleSystemComponent.GetBeamTargetTangent
	bool GetBeamTargetStrength(int32_t EmitterIndex, int32_t TargetIndex, float OutTargetStrength); // Function Engine.ParticleSystemComponent.GetBeamTargetStrength
	bool GetBeamTargetPoint(int32_t EmitterIndex, int32_t TargetIndex, struct FVector OutTargetPoint); // Function Engine.ParticleSystemComponent.GetBeamTargetPoint
	bool GetBeamSourceTangent(int32_t EmitterIndex, int32_t SourceIndex, struct FVector OutTangentPoint); // Function Engine.ParticleSystemComponent.GetBeamSourceTangent
	bool GetBeamSourceStrength(int32_t EmitterIndex, int32_t SourceIndex, float OutSourceStrength); // Function Engine.ParticleSystemComponent.GetBeamSourceStrength
	bool GetBeamSourcePoint(int32_t EmitterIndex, int32_t SourceIndex, struct FVector OutSourcePoint); // Function Engine.ParticleSystemComponent.GetBeamSourcePoint
	bool GetBeamEndPoint(int32_t EmitterIndex, struct FVector OutEndPoint); // Function Engine.ParticleSystemComponent.GetBeamEndPoint
	void GenerateParticleEvent(struct FName InEventName, float InEmitterTime, struct FVector InLocation, struct FVector InDirection, struct FVector InVelocity); // Function Engine.ParticleSystemComponent.GenerateParticleEvent
	void EndTrails(); // Function Engine.ParticleSystemComponent.EndTrails
	struct UMaterialInstanceDynamic* CreateNamedDynamicMaterialInstance(struct FName InName, struct UMaterialInterface* SourceMaterial); // Function Engine.ParticleSystemComponent.CreateNamedDynamicMaterialInstance
	void BeginTrails(struct FName InFirstSocketName, struct FName InSecondSocketName, char InWidthMode, float InWidth); // Function Engine.ParticleSystemComponent.BeginTrails
};

// Class Engine.SkyLight
// Size: 0x230 (Inherited: 0x220)
struct ASkyLight : public AInfo {
	struct USkyLightComponent* LightComponent; // 0x220(0x08)
	char bEnabled : 1; // 0x228(0x01)
	char UnknownData_228_1 : 7; // 0x228(0x01)
	char UnknownData_229[0x7]; // 0x229(0x07)

	void OnRep_bEnabled(); // Function Engine.SkyLight.OnRep_bEnabled
};

// Class Engine.Texture
// Size: 0xb8 (Inherited: 0x40)
struct UTexture : public UStreamableRenderAsset {
	char UnknownData_40[0x8]; // 0x40(0x08)
	struct FGuid LightingGuid; // 0x48(0x10)
	int32_t LODBias; // 0x58(0x04)
	char CompressionSettings; // 0x5c(0x01)
	char Filter; // 0x5d(0x01)
	enum class ETextureMipLoadOptions MipLoadOptions; // 0x5e(0x01)
	char LODGroup; // 0x5f(0x01)
	char SRGB : 1; // 0x60(0x01)
	char bNoTiling : 1; // 0x60(0x01)
	char VirtualTextureStreaming : 1; // 0x60(0x01)
	char CompressionYCoCg : 1; // 0x60(0x01)
	char bAsyncResourceReleaseHasBeenStarted : 1; // 0x60(0x01)
	char UnknownData_60_5 : 3; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x68(0x10)
	char UnknownData_78[0x40]; // 0x78(0x40)
};

// Class Engine.TextureCube
// Size: 0x110 (Inherited: 0xb8)
struct UTextureCube : public UTexture {
	char UnknownData_B8[0x58]; // 0xb8(0x58)
};

// Class Engine.InstancedStaticMeshComponent
// Size: 0x580 (Inherited: 0x4d0)
struct UInstancedStaticMeshComponent : public UStaticMeshComponent {
	struct TArray<struct FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0x4d0(0x10)
	int32_t NumCustomDataFloats; // 0x4e0(0x04)
	char UnknownData_4E4[0x4]; // 0x4e4(0x04)
	struct TArray<float> PerInstanceSMCustomData; // 0x4e8(0x10)
	int32_t InstancingRandomSeed; // 0x4f8(0x04)
	int32_t InstanceStartCullDistance; // 0x4fc(0x04)
	int32_t InstanceEndCullDistance; // 0x500(0x04)
	char UnknownData_504[0x4]; // 0x504(0x04)
	struct TArray<int32_t> InstanceReorderTable; // 0x508(0x10)
	char UnknownData_518[0x48]; // 0x518(0x48)
	int32_t NumPendingLightmaps; // 0x560(0x04)
	char UnknownData_564[0x4]; // 0x564(0x04)
	struct TArray<struct FInstancedStaticMeshMappingInfo> CachedMappings; // 0x568(0x10)
	char UnknownData_578[0x8]; // 0x578(0x08)

	bool UpdateInstanceTransform(int32_t InstanceIndex, struct FTransform NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport); // Function Engine.InstancedStaticMeshComponent.UpdateInstanceTransform
	bool SetCustomDataValue(int32_t InstanceIndex, int32_t CustomDataIndex, float CustomDataValue, bool bMarkRenderStateDirty); // Function Engine.InstancedStaticMeshComponent.SetCustomDataValue
	void SetCullDistances(int32_t StartCullDistance, int32_t EndCullDistance); // Function Engine.InstancedStaticMeshComponent.SetCullDistances
	bool RemoveInstance(int32_t InstanceIndex); // Function Engine.InstancedStaticMeshComponent.RemoveInstance
	bool GetInstanceTransform(int32_t InstanceIndex, struct FTransform OutInstanceTransform, bool bWorldSpace); // Function Engine.InstancedStaticMeshComponent.GetInstanceTransform
	struct TArray<int32_t> GetInstancesOverlappingSphere(struct FVector Center, float Radius, bool bSphereInWorldSpace); // Function Engine.InstancedStaticMeshComponent.GetInstancesOverlappingSphere
	struct TArray<int32_t> GetInstancesOverlappingBox(struct FBox Box, bool bBoxInWorldSpace); // Function Engine.InstancedStaticMeshComponent.GetInstancesOverlappingBox
	int32_t GetInstanceCount(); // Function Engine.InstancedStaticMeshComponent.GetInstanceCount
	void ClearInstances(); // Function Engine.InstancedStaticMeshComponent.ClearInstances
	bool BatchUpdateInstancesTransforms(int32_t StartInstanceIndex, struct TArray<struct FTransform> NewInstancesTransforms, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport); // Function Engine.InstancedStaticMeshComponent.BatchUpdateInstancesTransforms
	bool BatchUpdateInstancesTransform(int32_t StartInstanceIndex, int32_t NumInstances, struct FTransform NewInstancesTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport); // Function Engine.InstancedStaticMeshComponent.BatchUpdateInstancesTransform
	int32_t AddInstanceWorldSpace(struct FTransform WorldTransform); // Function Engine.InstancedStaticMeshComponent.AddInstanceWorldSpace
	int32_t AddInstance(struct FTransform InstanceTransform); // Function Engine.InstancedStaticMeshComponent.AddInstance
};

// Class Engine.HierarchicalInstancedStaticMeshComponent
// Size: 0x670 (Inherited: 0x580)
struct UHierarchicalInstancedStaticMeshComponent : public UInstancedStaticMeshComponent {
	char UnknownData_580[0x8]; // 0x580(0x08)
	struct TArray<int32_t> SortedInstances; // 0x588(0x10)
	int32_t NumBuiltInstances; // 0x598(0x04)
	char UnknownData_59C[0x4]; // 0x59c(0x04)
	struct FBox BuiltInstanceBounds; // 0x5a0(0x1c)
	struct FBox UnbuiltInstanceBounds; // 0x5bc(0x1c)
	struct TArray<struct FBox> UnbuiltInstanceBoundsList; // 0x5d8(0x10)
	char bEnableDensityScaling : 1; // 0x5e8(0x01)
	char UnknownData_5E8_1 : 7; // 0x5e8(0x01)
	char UnknownData_5E9[0x7]; // 0x5e9(0x07)
	int32_t OcclusionLayerNumNodes; // 0x5f0(0x04)
	struct FBoxSphereBounds CacheMeshExtendedBounds; // 0x5f4(0x1c)
	bool bDisableCollision; // 0x610(0x01)
	char UnknownData_611[0x3]; // 0x611(0x03)
	int32_t InstanceCountToRender; // 0x614(0x04)
	char UnknownData_618[0x58]; // 0x618(0x58)

	bool RemoveInstances(struct TArray<int32_t> InstancesToRemove); // Function Engine.HierarchicalInstancedStaticMeshComponent.RemoveInstances
};

// Class Engine.StaticMeshActor
// Size: 0x230 (Inherited: 0x220)
struct AStaticMeshActor : public AActor {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x220(0x08)
	bool bStaticMeshReplicateMovement; // 0x228(0x01)
	enum class ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x229(0x01)
	char UnknownData_22A[0x6]; // 0x22a(0x06)

	void SetMobility(char InMobility); // Function Engine.StaticMeshActor.SetMobility
};

// Class Engine.MaterialInterface
// Size: 0x88 (Inherited: 0x28)
struct UMaterialInterface : public UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
	struct USubsurfaceProfile* SubsurfaceProfile; // 0x38(0x08)
	char UnknownData_40[0x10]; // 0x40(0x10)
	struct FLightmassMaterialInterfaceSettings LightmassSettings; // 0x50(0x10)
	struct TArray<struct FMaterialTextureInfo> TextureStreamingData; // 0x60(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x70(0x10)
	char UnknownData_80[0x8]; // 0x80(0x08)

	void SetForceMipLevelsToBeResident(bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float ForceDuration, int32_t CinematicTextureGroups, bool bFastResponse); // Function Engine.MaterialInterface.SetForceMipLevelsToBeResident
	struct UPhysicalMaterialMask* GetPhysicalMaterialMask(); // Function Engine.MaterialInterface.GetPhysicalMaterialMask
	struct UPhysicalMaterial* GetPhysicalMaterialFromMap(int32_t Index); // Function Engine.MaterialInterface.GetPhysicalMaterialFromMap
	struct UPhysicalMaterial* GetPhysicalMaterial(); // Function Engine.MaterialInterface.GetPhysicalMaterial
	struct FMaterialParameterInfo GetParameterInfo(char Association, struct FName ParameterName, struct UMaterialFunctionInterface* LayerFunction); // Function Engine.MaterialInterface.GetParameterInfo
	struct UMaterial* GetBaseMaterial(); // Function Engine.MaterialInterface.GetBaseMaterial
};

// Class Engine.MaterialInstance
// Size: 0x408 (Inherited: 0x88)
struct UMaterialInstance : public UMaterialInterface {
	struct UPhysicalMaterial* PhysMaterial; // 0x88(0x08)
	struct UPhysicalMaterial* PhysicalMaterialMap[0x8]; // 0x90(0x40)
	struct UMaterialInterface* Parent; // 0xd0(0x08)
	char bHasStaticPermutationResource : 1; // 0xd8(0x01)
	char bOverrideSubsurfaceProfile : 1; // 0xd8(0x01)
	char UnknownData_D8_2 : 6; // 0xd8(0x01)
	char UnknownData_D9[0x7]; // 0xd9(0x07)
	struct TArray<struct FScalarParameterValue> ScalarParameterValues; // 0xe0(0x10)
	struct TArray<struct FVectorParameterValue> VectorParameterValues; // 0xf0(0x10)
	struct TArray<struct FTextureParameterValue> TextureParameterValues; // 0x100(0x10)
	struct TArray<struct FRuntimeVirtualTextureParameterValue> RuntimeVirtualTextureParameterValues; // 0x110(0x10)
	struct TArray<struct FFontParameterValue> FontParameterValues; // 0x120(0x10)
	struct FMaterialInstanceBasePropertyOverrides BasePropertyOverrides; // 0x130(0x08)
	char UnknownData_138[0x10]; // 0x138(0x10)
	struct FStaticParameterSet StaticParameters; // 0x148(0x40)
	struct FMaterialCachedParameters CachedLayerParameters; // 0x188(0x1a0)
	struct TArray<struct UObject*> CachedReferencedTextures; // 0x328(0x10)
	char UnknownData_338[0xd0]; // 0x338(0xd0)
};

// Class Engine.MaterialInstanceConstant
// Size: 0x410 (Inherited: 0x408)
struct UMaterialInstanceConstant : public UMaterialInstance {
	struct UPhysicalMaterialMask* PhysMaterialMask; // 0x408(0x08)

	struct FLinearColor K2_GetVectorParameterValue(struct FName ParameterName); // Function Engine.MaterialInstanceConstant.K2_GetVectorParameterValue
	struct UTexture* K2_GetTextureParameterValue(struct FName ParameterName); // Function Engine.MaterialInstanceConstant.K2_GetTextureParameterValue
	float K2_GetScalarParameterValue(struct FName ParameterName); // Function Engine.MaterialInstanceConstant.K2_GetScalarParameterValue
};

// Class Engine.MaterialExpression
// Size: 0x40 (Inherited: 0x28)
struct UMaterialExpression : public UObject {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	char bIsParameterExpression : 1; // 0x38(0x01)
	char UnknownData_38_1 : 7; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
};

// Class Engine.BlueprintGeneratedClass
// Size: 0x328 (Inherited: 0x230)
struct UBlueprintGeneratedClass : public UClass {
	int32_t NumReplicatedProperties; // 0x230(0x04)
	char bHasNativizedParent : 1; // 0x234(0x01)
	char bHasCookedComponentInstancingData : 1; // 0x234(0x01)
	char UnknownData_234_2 : 6; // 0x234(0x01)
	char UnknownData_235[0x3]; // 0x235(0x03)
	struct TArray<struct UDynamicBlueprintBinding*> DynamicBindingObjects; // 0x238(0x10)
	struct TArray<struct UActorComponent*> ComponentTemplates; // 0x248(0x10)
	struct TArray<struct UTimelineTemplate*> Timelines; // 0x258(0x10)
	struct TArray<struct FBPComponentClassOverride> ComponentClassOverrides; // 0x268(0x10)
	struct USimpleConstructionScript* SimpleConstructionScript; // 0x278(0x08)
	struct UInheritableComponentHandler* InheritableComponentHandler; // 0x280(0x08)
	struct UStructProperty* UberGraphFramePointerProperty; // 0x288(0x08)
	char UnknownData_290[0x8]; // 0x290(0x08)
	struct UFunction* UberGraphFunction; // 0x298(0x08)
	struct TMap<struct FName, struct FBlueprintCookedComponentInstancingData> CookedComponentInstancingData; // 0x2a0(0x50)
	char UnknownData_2F0[0x38]; // 0x2f0(0x38)
};

// Class Engine.CameraComponent
// Size: 0x7c0 (Inherited: 0x210)
struct UCameraComponent : public USceneComponent {
	float FieldOfView; // 0x208(0x04)
	float OrthoWidth; // 0x20c(0x04)
	float OrthoNearClipPlane; // 0x210(0x04)
	float OrthoFarClipPlane; // 0x214(0x04)
	float AspectRatio; // 0x218(0x04)
	char bConstrainAspectRatio : 1; // 0x21c(0x01)
	char bUseFieldOfViewForLOD : 1; // 0x21c(0x01)
	char bLockToHmd : 1; // 0x21c(0x01)
	char bUsePawnControlRotation : 1; // 0x21c(0x01)
	char ProjectionMode; // 0x21d(0x01)
	char UnknownData_225_4 : 4; // 0x225(0x01)
	char UnknownData_226[0x2a]; // 0x226(0x2a)
	float PostProcessBlendWeight; // 0x250(0x04)
	char UnknownData_254[0x2c]; // 0x254(0x2c)
	struct FPostProcessSettings PostProcessSettings; // 0x280(0x540)

	void SetUseFieldOfViewForLOD(bool bInUseFieldOfViewForLOD); // Function Engine.CameraComponent.SetUseFieldOfViewForLOD
	void SetProjectionMode(char InProjectionMode); // Function Engine.CameraComponent.SetProjectionMode
	void SetPostProcessBlendWeight(float InPostProcessBlendWeight); // Function Engine.CameraComponent.SetPostProcessBlendWeight
	void SetOrthoWidth(float InOrthoWidth); // Function Engine.CameraComponent.SetOrthoWidth
	void SetOrthoNearClipPlane(float InOrthoNearClipPlane); // Function Engine.CameraComponent.SetOrthoNearClipPlane
	void SetOrthoFarClipPlane(float InOrthoFarClipPlane); // Function Engine.CameraComponent.SetOrthoFarClipPlane
	void SetFieldOfView(float InFieldOfView); // Function Engine.CameraComponent.SetFieldOfView
	void SetConstraintAspectRatio(bool bInConstrainAspectRatio); // Function Engine.CameraComponent.SetConstraintAspectRatio
	void SetAspectRatio(float InAspectRatio); // Function Engine.CameraComponent.SetAspectRatio
	void RemoveBlendable(struct TScriptInterface<None> InBlendableObject); // Function Engine.CameraComponent.RemoveBlendable
	void OnCameraMeshHiddenChanged(); // Function Engine.CameraComponent.OnCameraMeshHiddenChanged
	void GetCameraView(float DeltaTime, struct FMinimalViewInfo DesiredView); // Function Engine.CameraComponent.GetCameraView
	void AddOrUpdateBlendable(struct TScriptInterface<None> InBlendableObject, float InWeight); // Function Engine.CameraComponent.AddOrUpdateBlendable
};

// Class Engine.SoundBase
// Size: 0x160 (Inherited: 0x28)
struct USoundBase : public UObject {
	struct USoundClass* SoundClassObject; // 0x28(0x08)
	char bDebug : 1; // 0x30(0x01)
	char bOverrideConcurrency : 1; // 0x30(0x01)
	char bOutputToBusOnly : 1; // 0x30(0x01)
	char bHasDelayNode : 1; // 0x30(0x01)
	char bHasConcatenatorNode : 1; // 0x30(0x01)
	char bBypassVolumeScaleForPriority : 1; // 0x30(0x01)
	char UnknownData_30_6 : 2; // 0x30(0x01)
	enum class EVirtualizationMode VirtualizationMode; // 0x31(0x01)
	char UnknownData_32[0x56]; // 0x32(0x56)
	struct TSet<struct USoundConcurrency*> ConcurrencySet; // 0x88(0x50)
	struct FSoundConcurrencySettings ConcurrencyOverrides; // 0xd8(0x20)
	float Duration; // 0xf8(0x04)
	float MaxDistance; // 0xfc(0x04)
	float TotalSamples; // 0x100(0x04)
	float Priority; // 0x104(0x04)
	struct USoundAttenuation* AttenuationSettings; // 0x108(0x08)
	struct FSoundModulation Modulation; // 0x110(0x10)
	struct USoundSubmixBase* SoundSubmixObject; // 0x120(0x08)
	struct TArray<struct FSoundSubmixSendInfo> SoundSubmixSends; // 0x128(0x10)
	struct USoundEffectSourcePresetChain* SourceEffectChain; // 0x138(0x08)
	struct TArray<struct FSoundSourceBusSendInfo> BusSends; // 0x140(0x10)
	struct TArray<struct FSoundSourceBusSendInfo> PreEffectBusSends; // 0x150(0x10)
};

// Class Engine.SoundWave
// Size: 0x310 (Inherited: 0x160)
struct USoundWave : public USoundBase {
	int32_t CompressionQuality; // 0x160(0x04)
	int32_t StreamingPriority; // 0x164(0x04)
	enum class ESoundwaveSampleRateSettings SampleRateQuality; // 0x168(0x01)
	char UnknownData_169[0x1]; // 0x169(0x01)
	char SoundGroup; // 0x16a(0x01)
	char bLooping : 1; // 0x16b(0x01)
	char bStreaming : 1; // 0x16b(0x01)
	char bSeekableStreaming : 1; // 0x16b(0x01)
	char UnknownData_16B_3 : 5; // 0x16b(0x01)
	enum class ESoundWaveLoadingBehavior LoadingBehavior; // 0x16c(0x01)
	char UnknownData_16D_0 : 5; // 0x16d(0x01)
	char bMature : 1; // 0x16d(0x01)
	char bManualWordWrap : 1; // 0x16d(0x01)
	char bSingleLine : 1; // 0x16d(0x01)
	char bIsAmbisonics : 1; // 0x16e(0x01)
	char UnknownData_16E_1 : 7; // 0x16e(0x01)
	char UnknownData_16F[0x1]; // 0x16f(0x01)
	struct TArray<float> FrequenciesToAnalyze; // 0x170(0x10)
	struct TArray<struct FSoundWaveSpectralTimeData> CookedSpectralTimeData; // 0x180(0x10)
	struct TArray<struct FSoundWaveEnvelopeTimeData> CookedEnvelopeTimeData; // 0x190(0x10)
	int32_t InitialChunkSize; // 0x1a0(0x04)
	char UnknownData_1A4[0x44]; // 0x1a4(0x44)
	struct FString SpokenText; // 0x1e8(0x10)
	float SubtitlePriority; // 0x1f8(0x04)
	float Volume; // 0x1fc(0x04)
	float Pitch; // 0x200(0x04)
	int32_t NumChannels; // 0x204(0x04)
	int32_t SampleRate; // 0x208(0x04)
	char UnknownData_20C[0xc]; // 0x20c(0x0c)
	struct TArray<struct FSubtitleCue> Subtitles; // 0x218(0x10)
	struct UCurveTable* Curves; // 0x228(0x08)
	struct UCurveTable* InternalCurves; // 0x230(0x08)
	char UnknownData_238[0xd8]; // 0x238(0xd8)
};

// Class Engine.SoundWaveProcedural
// Size: 0x360 (Inherited: 0x310)
struct USoundWaveProcedural : public USoundWave {
	char UnknownData_310[0x50]; // 0x310(0x50)
};

// Class Engine.BlueprintCore
// Size: 0x50 (Inherited: 0x28)
struct UBlueprintCore : public UObject {
	struct UObject* SkeletonGeneratedClass; // 0x28(0x08)
	struct UObject* GeneratedClass; // 0x30(0x08)
	bool bLegacyNeedToPurgeSkelRefs; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	struct FGuid BlueprintGuid; // 0x3c(0x10)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.Blueprint
// Size: 0xa0 (Inherited: 0x50)
struct UBlueprint : public UBlueprintCore {
	struct UObject* ParentClass; // 0x50(0x08)
	char BlueprintType; // 0x58(0x01)
	char bRecompileOnLoad : 1; // 0x59(0x01)
	char bHasBeenRegenerated : 1; // 0x59(0x01)
	char bIsRegeneratingOnLoad : 1; // 0x59(0x01)
	char UnknownData_59_3 : 5; // 0x59(0x01)
	char UnknownData_5A[0x2]; // 0x5a(0x02)
	int32_t BlueprintSystemVersion; // 0x5c(0x04)
	struct USimpleConstructionScript* SimpleConstructionScript; // 0x60(0x08)
	struct TArray<struct UActorComponent*> ComponentTemplates; // 0x68(0x10)
	struct TArray<struct UTimelineTemplate*> Timelines; // 0x78(0x10)
	struct TArray<struct FBPComponentClassOverride> ComponentClassOverrides; // 0x88(0x10)
	struct UInheritableComponentHandler* InheritableComponentHandler; // 0x98(0x08)
};

// Class Engine.Model
// Size: 0x258 (Inherited: 0x28)
struct UModel : public UObject {
	char UnknownData_28[0x230]; // 0x28(0x230)
};

// Class Engine.Channel
// Size: 0x70 (Inherited: 0x28)
struct UChannel : public UObject {
	struct UNetConnection* Connection; // 0x28(0x08)
	char UnknownData_30[0x40]; // 0x30(0x40)
};

// Class Engine.ActorChannel
// Size: 0x298 (Inherited: 0x70)
struct UActorChannel : public UChannel {
	struct AActor* Actor; // 0x70(0x08)
	char UnknownData_78[0xe8]; // 0x78(0xe8)
	struct TArray<struct UObject*> CreateSubObjects; // 0x160(0x10)
	char UnknownData_170[0x128]; // 0x170(0x128)
};

// Class Engine.AnimationAsset
// Size: 0x80 (Inherited: 0x28)
struct UAnimationAsset : public UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
	struct USkeleton* Skeleton; // 0x38(0x08)
	char UnknownData_40[0x20]; // 0x40(0x20)
	struct TArray<struct UAnimMetaData*> MetaData; // 0x60(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x70(0x10)
};

// Class Engine.BlendSpaceBase
// Size: 0x148 (Inherited: 0x80)
struct UBlendSpaceBase : public UAnimationAsset {
	char UnknownData_80[0x8]; // 0x80(0x08)
	bool bRotationBlendInMeshSpace; // 0x88(0x01)
	char UnknownData_89[0x3]; // 0x89(0x03)
	float AnimLength; // 0x8c(0x04)
	struct FInterpolationParameter InterpolationParam[0x3]; // 0x90(0x18)
	float TargetWeightInterpolationSpeedPerSec; // 0xa8(0x04)
	char NotifyTriggerMode; // 0xac(0x01)
	char UnknownData_AD[0x3]; // 0xad(0x03)
	struct TArray<struct FPerBoneInterpolation> PerBoneBlend; // 0xb0(0x10)
	int32_t SampleIndexWithMarkers; // 0xc0(0x04)
	char UnknownData_C4[0x4]; // 0xc4(0x04)
	struct TArray<struct FBlendSample> SampleData; // 0xc8(0x10)
	struct TArray<struct FEditorElement> GridSamples; // 0xd8(0x10)
	struct FBlendParameter BlendParameters[0x3]; // 0xe8(0x60)
};

// Class Engine.BlendSpace
// Size: 0x150 (Inherited: 0x148)
struct UBlendSpace : public UBlendSpaceBase {
	char AxisToScaleAnimation; // 0x148(0x01)
	char UnknownData_149[0x7]; // 0x149(0x07)
};

// Class Engine.BlendSpace1D
// Size: 0x150 (Inherited: 0x148)
struct UBlendSpace1D : public UBlendSpaceBase {
	bool bScaleAnimation; // 0x148(0x01)
	char UnknownData_149[0x7]; // 0x149(0x07)
};

// Class Engine.AISystemBase
// Size: 0x58 (Inherited: 0x28)
struct UAISystemBase : public UObject {
	struct FSoftClassPath AISystemClassName; // 0x28(0x18)
	struct FName AISystemModuleName; // 0x40(0x08)
	char UnknownData_48[0x8]; // 0x48(0x08)
	bool bInstantiateAISystemOnClient; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
};

// Class Engine.AmbientSound
// Size: 0x228 (Inherited: 0x220)
struct AAmbientSound : public AActor {
	struct UAudioComponent* AudioComponent; // 0x220(0x08)

	void Stop(); // Function Engine.AmbientSound.Stop
	void Play(float StartTime); // Function Engine.AmbientSound.Play
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel); // Function Engine.AmbientSound.FadeOut
	void FadeIn(float FadeInDuration, float FadeVolumeLevel); // Function Engine.AmbientSound.FadeIn
	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel); // Function Engine.AmbientSound.AdjustVolume
};

// Class Engine.AnimationSettings
// Size: 0x58 (Inherited: 0x38)
struct UAnimationSettings : public UDeveloperSettings {
	int32_t CompressCommandletVersion; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FString> KeyEndEffectorsMatchNameArray; // 0x40(0x10)
	bool ForceRecompression; // 0x50(0x01)
	bool bOnlyCheckForMissingSkeletalMeshes; // 0x51(0x01)
	bool bForceBelowThreshold; // 0x52(0x01)
	bool bFirstRecompressUsingCurrentOrDefault; // 0x53(0x01)
	bool bRaiseMaxErrorToExisting; // 0x54(0x01)
	bool bEnablePerformanceLog; // 0x55(0x01)
	bool bStripAnimationDataOnDedicatedServer; // 0x56(0x01)
	bool bTickAnimationOnSkeletalMeshInit; // 0x57(0x01)
};

// Class Engine.AnimBlueprint
// Size: 0xc8 (Inherited: 0xa0)
struct UAnimBlueprint : public UBlueprint {
	char UnknownData_A0[0x8]; // 0xa0(0x08)
	struct USkeleton* TargetSkeleton; // 0xa8(0x08)
	struct TArray<struct FAnimGroupInfo> Groups; // 0xb0(0x10)
	bool bUseMultiThreadedAnimationUpdate; // 0xc0(0x01)
	bool bWarnAboutBlueprintUsage; // 0xc1(0x01)
	char UnknownData_C2[0x6]; // 0xc2(0x06)
};

// Class Engine.AnimBlueprintGeneratedClass
// Size: 0x4e8 (Inherited: 0x328)
struct UAnimBlueprintGeneratedClass : public UBlueprintGeneratedClass {
	char UnknownData_328[0x8]; // 0x328(0x08)
	struct TArray<struct FBakedAnimationStateMachine> BakedStateMachines; // 0x330(0x10)
	struct USkeleton* TargetSkeleton; // 0x340(0x08)
	struct TArray<struct FAnimNotifyEvent> AnimNotifies; // 0x348(0x10)
	struct TMap<struct FName, struct FCachedPoseIndices> OrderedSavedPoseIndicesMap; // 0x358(0x50)
	char UnknownData_3A8[0x80]; // 0x3a8(0x80)
	struct TArray<struct FName> SyncGroupNames; // 0x428(0x10)
	struct TArray<struct FExposedValueHandler> EvaluateGraphExposedInputs; // 0x438(0x10)
	struct TMap<struct FName, struct FGraphAssetPlayerInformation> GraphAssetPlayerInformation; // 0x448(0x50)
	struct TMap<struct FName, struct FAnimGraphBlendOptions> GraphBlendOptions; // 0x498(0x50)
};

// Class Engine.AnimBoneCompressionSettings
// Size: 0x38 (Inherited: 0x28)
struct UAnimBoneCompressionSettings : public UObject {
	struct TArray<struct UAnimBoneCompressionCodec*> Codecs; // 0x28(0x10)
};

// Class Engine.AnimClassData
// Size: 0x268 (Inherited: 0x28)
struct UAnimClassData : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct TArray<struct FBakedAnimationStateMachine> BakedStateMachines; // 0x30(0x10)
	struct USkeleton* TargetSkeleton; // 0x40(0x08)
	struct TArray<struct FAnimNotifyEvent> AnimNotifies; // 0x48(0x10)
	struct TMap<struct FName, struct FCachedPoseIndices> OrderedSavedPoseIndicesMap; // 0x58(0x50)
	struct TArray<struct FAnimBlueprintFunction> AnimBlueprintFunctions; // 0xa8(0x10)
	struct TArray<struct FAnimBlueprintFunctionData> AnimBlueprintFunctionData; // 0xb8(0x10)
	struct TArray<FieldPathProperty> AnimNodeProperties; // 0xc8(0x10)
	char UnknownData_D8[0x10]; // 0xd8(0x10)
	struct TArray<FieldPathProperty> LinkedAnimGraphNodeProperties; // 0xe8(0x10)
	char UnknownData_F8[0x10]; // 0xf8(0x10)
	struct TArray<FieldPathProperty> LinkedAnimLayerNodeProperties; // 0x108(0x10)
	char UnknownData_118[0x10]; // 0x118(0x10)
	struct TArray<FieldPathProperty> PreUpdateNodeProperties; // 0x128(0x10)
	char UnknownData_138[0x10]; // 0x138(0x10)
	struct TArray<FieldPathProperty> DynamicResetNodeProperties; // 0x148(0x10)
	char UnknownData_158[0x10]; // 0x158(0x10)
	struct TArray<FieldPathProperty> StateMachineNodeProperties; // 0x168(0x10)
	char UnknownData_178[0x10]; // 0x178(0x10)
	struct TArray<FieldPathProperty> InitializationNodeProperties; // 0x188(0x10)
	char UnknownData_198[0x10]; // 0x198(0x10)
	struct TMap<struct FName, struct FGraphAssetPlayerInformation> GraphNameAssetPlayers; // 0x1a8(0x50)
	struct TArray<struct FName> SyncGroupNames; // 0x1f8(0x10)
	struct TArray<struct FExposedValueHandler> EvaluateGraphExposedInputs; // 0x208(0x10)
	struct TMap<struct FName, struct FAnimGraphBlendOptions> GraphBlendOptions; // 0x218(0x50)
};

// Class Engine.AnimSequenceBase
// Size: 0xa8 (Inherited: 0x80)
struct UAnimSequenceBase : public UAnimationAsset {
	struct TArray<struct FAnimNotifyEvent> Notifies; // 0x80(0x10)
	float SequenceLength; // 0x90(0x04)
	float RateScale; // 0x94(0x04)
	struct FRawCurveTracks RawCurveData; // 0x98(0x10)

	float GetPlayLength(); // Function Engine.AnimSequenceBase.GetPlayLength
};

// Class Engine.AnimComposite
// Size: 0xb8 (Inherited: 0xa8)
struct UAnimComposite : public UAnimCompositeBase {
	struct FAnimTrack AnimationTrack; // 0xa8(0x10)
};

// Class Engine.AnimCompress
// Size: 0x40 (Inherited: 0x38)
struct UAnimCompress : public UAnimBoneCompressionCodec {
	char bNeedsSkeleton : 1; // 0x38(0x01)
	char UnknownData_38_1 : 7; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	char TranslationCompressionFormat; // 0x3c(0x01)
	char RotationCompressionFormat; // 0x3d(0x01)
	char ScaleCompressionFormat; // 0x3e(0x01)
	char UnknownData_3F[0x1]; // 0x3f(0x01)
};

// Class Engine.AnimCompress_RemoveLinearKeys
// Size: 0x60 (Inherited: 0x40)
struct UAnimCompress_RemoveLinearKeys : public UAnimCompress {
	float MaxPosDiff; // 0x40(0x04)
	float MaxAngleDiff; // 0x44(0x04)
	float MaxScaleDiff; // 0x48(0x04)
	float MaxEffectorDiff; // 0x4c(0x04)
	float MinEffectorDiff; // 0x50(0x04)
	float EffectorDiffSocket; // 0x54(0x04)
	float ParentKeyScale; // 0x58(0x04)
	char bRetarget : 1; // 0x5c(0x01)
	char bActuallyFilterLinearKeys : 1; // 0x5c(0x01)
	char UnknownData_5C_2 : 6; // 0x5c(0x01)
	char UnknownData_5D[0x3]; // 0x5d(0x03)
};

// Class Engine.AnimCompress_PerTrackCompression
// Size: 0xd8 (Inherited: 0x60)
struct UAnimCompress_PerTrackCompression : public UAnimCompress_RemoveLinearKeys {
	float MaxZeroingThreshold; // 0x60(0x04)
	float MaxPosDiffBitwise; // 0x64(0x04)
	float MaxAngleDiffBitwise; // 0x68(0x04)
	float MaxScaleDiffBitwise; // 0x6c(0x04)
	struct TArray<char> AllowedRotationFormats; // 0x70(0x10)
	struct TArray<char> AllowedTranslationFormats; // 0x80(0x10)
	struct TArray<char> AllowedScaleFormats; // 0x90(0x10)
	char bResampleAnimation : 1; // 0xa0(0x01)
	char UnknownData_A0_1 : 7; // 0xa0(0x01)
	char UnknownData_A1[0x3]; // 0xa1(0x03)
	float ResampledFramerate; // 0xa4(0x04)
	int32_t MinKeysForResampling; // 0xa8(0x04)
	char bUseAdaptiveError : 1; // 0xac(0x01)
	char bUseOverrideForEndEffectors : 1; // 0xac(0x01)
	char UnknownData_AC_2 : 6; // 0xac(0x01)
	char UnknownData_AD[0x3]; // 0xad(0x03)
	int32_t TrackHeightBias; // 0xb0(0x04)
	float ParentingDivisor; // 0xb4(0x04)
	float ParentingDivisorExponent; // 0xb8(0x04)
	char bUseAdaptiveError2 : 1; // 0xbc(0x01)
	char UnknownData_BC_1 : 7; // 0xbc(0x01)
	char UnknownData_BD[0x3]; // 0xbd(0x03)
	float RotationErrorSourceRatio; // 0xc0(0x04)
	float TranslationErrorSourceRatio; // 0xc4(0x04)
	float ScaleErrorSourceRatio; // 0xc8(0x04)
	float MaxErrorPerTrackRatio; // 0xcc(0x04)
	float PerturbationProbeSize; // 0xd0(0x04)
	char UnknownData_D4[0x4]; // 0xd4(0x04)
};

// Class Engine.AnimCompress_RemoveEverySecondKey
// Size: 0x48 (Inherited: 0x40)
struct UAnimCompress_RemoveEverySecondKey : public UAnimCompress {
	int32_t MinKeys; // 0x40(0x04)
	char bStartAtSecondKey : 1; // 0x44(0x01)
	char UnknownData_44_1 : 7; // 0x44(0x01)
	char UnknownData_45[0x3]; // 0x45(0x03)
};

// Class Engine.AnimCompress_RemoveTrivialKeys
// Size: 0x50 (Inherited: 0x40)
struct UAnimCompress_RemoveTrivialKeys : public UAnimCompress {
	float MaxPosDiff; // 0x40(0x04)
	float MaxAngleDiff; // 0x44(0x04)
	float MaxScaleDiff; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.AnimCurveCompressionSettings
// Size: 0x30 (Inherited: 0x28)
struct UAnimCurveCompressionSettings : public UObject {
	struct UAnimCurveCompressionCodec* Codec; // 0x28(0x08)
};

// Class Engine.AnimMontage
// Size: 0x1d0 (Inherited: 0xa8)
struct UAnimMontage : public UAnimCompositeBase {
	struct FAlphaBlend BlendIn; // 0xa8(0x30)
	float BlendInTime; // 0xd8(0x04)
	char UnknownData_DC[0x4]; // 0xdc(0x04)
	struct FAlphaBlend BlendOut; // 0xe0(0x30)
	float BlendOutTime; // 0x110(0x04)
	float BlendOutTriggerTime; // 0x114(0x04)
	struct FName SyncGroup; // 0x118(0x08)
	int32_t SyncSlotIndex; // 0x120(0x04)
	char UnknownData_124[0x4]; // 0x124(0x04)
	struct FMarkerSyncData MarkerData; // 0x128(0x20)
	struct TArray<struct FCompositeSection> CompositeSections; // 0x148(0x10)
	struct TArray<struct FSlotAnimationTrack> SlotAnimTracks; // 0x158(0x10)
	struct TArray<struct FBranchingPoint> BranchingPoints; // 0x168(0x10)
	bool bEnableRootMotionTranslation; // 0x178(0x01)
	bool bEnableRootMotionRotation; // 0x179(0x01)
	bool bEnableAutoBlendOut; // 0x17a(0x01)
	char RootMotionRootLock; // 0x17b(0x01)
	char UnknownData_17C[0x4]; // 0x17c(0x04)
	struct TArray<struct FBranchingPointMarker> BranchingPointMarkers; // 0x180(0x10)
	struct TArray<int32_t> BranchingPointStateNotifyIndices; // 0x190(0x10)
	struct FTimeStretchCurve TimeStretchCurve; // 0x1a0(0x28)
	struct FName TimeStretchCurveName; // 0x1c8(0x08)

	float GetDefaultBlendOutTime(); // Function Engine.AnimMontage.GetDefaultBlendOutTime
};

// Class Engine.AnimNotify_PlaySound
// Size: 0x58 (Inherited: 0x38)
struct UAnimNotify_PlaySound : public UAnimNotify {
	struct USoundBase* Sound; // 0x38(0x08)
	float VolumeMultiplier; // 0x40(0x04)
	float PitchMultiplier; // 0x44(0x04)
	char bFollow : 1; // 0x48(0x01)
	char UnknownData_48_1 : 7; // 0x48(0x01)
	char UnknownData_49[0x3]; // 0x49(0x03)
	struct FName AttachName; // 0x4c(0x08)
	char UnknownData_54[0x4]; // 0x54(0x04)
};

// Class Engine.AnimNotifyState_TimedParticleEffect
// Size: 0x60 (Inherited: 0x30)
struct UAnimNotifyState_TimedParticleEffect : public UAnimNotifyState {
	struct UParticleSystem* PSTemplate; // 0x30(0x08)
	struct FName SocketName; // 0x38(0x08)
	struct FVector LocationOffset; // 0x40(0x0c)
	struct FRotator RotationOffset; // 0x4c(0x0c)
	bool bDestroyAtEnd; // 0x58(0x01)
	char UnknownData_59[0x7]; // 0x59(0x07)
};

// Class Engine.AnimSequence
// Size: 0x1a0 (Inherited: 0xa8)
struct UAnimSequence : public UAnimSequenceBase {
	int32_t NumFrames; // 0xa8(0x04)
	char UnknownData_AC[0x4]; // 0xac(0x04)
	struct TArray<struct FTrackToSkeletonMap> TrackToSkeletonMapTable; // 0xb0(0x10)
	char UnknownData_C0[0x10]; // 0xc0(0x10)
	struct UAnimBoneCompressionSettings* BoneCompressionSettings; // 0xd0(0x08)
	struct UAnimCurveCompressionSettings* CurveCompressionSettings; // 0xd8(0x08)
	char UnknownData_E0[0x70]; // 0xe0(0x70)
	char AdditiveAnimType; // 0x150(0x01)
	char RefPoseType; // 0x151(0x01)
	char UnknownData_152[0x6]; // 0x152(0x06)
	struct UAnimSequence* RefPoseSeq; // 0x158(0x08)
	int32_t RefFrameIndex; // 0x160(0x04)
	struct FName RetargetSource; // 0x164(0x08)
	enum class EAnimInterpolationType Interpolation; // 0x16c(0x01)
	bool bEnableRootMotion; // 0x16d(0x01)
	char RootMotionRootLock; // 0x16e(0x01)
	bool bForceRootLock; // 0x16f(0x01)
	bool bUseNormalizedRootMotionScale; // 0x170(0x01)
	bool bRootMotionSettingsCopiedFromMontage; // 0x171(0x01)
	char UnknownData_172[0x6]; // 0x172(0x06)
	struct TArray<struct FAnimSyncMarker> AuthoredSyncMarkers; // 0x178(0x10)
	char UnknownData_188[0x18]; // 0x188(0x18)
};

// Class Engine.AnimSet
// Size: 0xf0 (Inherited: 0x28)
struct UAnimSet : public UObject {
	char bAnimRotationOnly : 1; // 0x28(0x01)
	char UnknownData_28_1 : 7; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct TArray<struct FName> TrackBoneNames; // 0x30(0x10)
	struct TArray<struct FAnimSetMeshLinkup> LinkupCache; // 0x40(0x10)
	struct TArray<char> BoneUseAnimTranslation; // 0x50(0x10)
	struct TArray<char> ForceUseMeshTranslation; // 0x60(0x10)
	struct TArray<struct FName> UseTranslationBoneNames; // 0x70(0x10)
	struct TArray<struct FName> ForceMeshTranslationBoneNames; // 0x80(0x10)
	struct FName PreviewSkelMeshName; // 0x90(0x08)
	struct FName BestRatioSkelMeshName; // 0x98(0x08)
	char UnknownData_A0[0x50]; // 0xa0(0x50)
};

// Class Engine.AnimSingleNodeInstance
// Size: 0x280 (Inherited: 0x270)
struct UAnimSingleNodeInstance : public UAnimInstance {
	struct UAnimationAsset* CurrentAsset; // 0x268(0x08)
	struct FDelegate PostEvaluateAnimEvent; // 0x270(0x10)

	void StopAnim(); // Function Engine.AnimSingleNodeInstance.StopAnim
	void SetReverse(bool bInReverse); // Function Engine.AnimSingleNodeInstance.SetReverse
	void SetPreviewCurveOverride(struct FName PoseName, float Value, bool bRemoveIfZero); // Function Engine.AnimSingleNodeInstance.SetPreviewCurveOverride
	void SetPositionWithPreviousTime(float InPosition, float InPreviousTime, bool bFireNotifies); // Function Engine.AnimSingleNodeInstance.SetPositionWithPreviousTime
	void SetPosition(float InPosition, bool bFireNotifies); // Function Engine.AnimSingleNodeInstance.SetPosition
	void SetPlayRate(float InPlayRate); // Function Engine.AnimSingleNodeInstance.SetPlayRate
	void SetPlaying(bool bIsPlaying); // Function Engine.AnimSingleNodeInstance.SetPlaying
	void SetLooping(bool bIsLooping); // Function Engine.AnimSingleNodeInstance.SetLooping
	void SetBlendSpaceInput(struct FVector InBlendInput); // Function Engine.AnimSingleNodeInstance.SetBlendSpaceInput
	void SetAnimationAsset(struct UAnimationAsset* NewAsset, bool bIsLooping, float InPlayRate); // Function Engine.AnimSingleNodeInstance.SetAnimationAsset
	void PlayAnim(bool bIsLooping, float InPlayRate, float InStartPosition); // Function Engine.AnimSingleNodeInstance.PlayAnim
	float GetLength(); // Function Engine.AnimSingleNodeInstance.GetLength
	struct UAnimationAsset* GetAnimationAsset(); // Function Engine.AnimSingleNodeInstance.GetAnimationAsset
};

// Class Engine.AnimStreamable
// Size: 0xe0 (Inherited: 0xa8)
struct UAnimStreamable : public UAnimSequenceBase {
	int32_t NumFrames; // 0xa8(0x04)
	enum class EAnimInterpolationType Interpolation; // 0xac(0x01)
	char UnknownData_AD[0x3]; // 0xad(0x03)
	struct FName RetargetSource; // 0xb0(0x08)
	char UnknownData_B8[0x10]; // 0xb8(0x10)
	struct UAnimBoneCompressionSettings* BoneCompressionSettings; // 0xc8(0x08)
	struct UAnimCurveCompressionSettings* CurveCompressionSettings; // 0xd0(0x08)
	bool bEnableRootMotion; // 0xd8(0x01)
	char RootMotionRootLock; // 0xd9(0x01)
	bool bForceRootLock; // 0xda(0x01)
	bool bUseNormalizedRootMotionScale; // 0xdb(0x01)
	char UnknownData_DC[0x4]; // 0xdc(0x04)
};

// Class Engine.ApplicationLifecycleComponent
// Size: 0x140 (Inherited: 0xb0)
struct UApplicationLifecycleComponent : public UActorComponent {
	struct FMulticastInlineDelegate ApplicationWillDeactivateDelegate; // 0xb0(0x10)
	struct FMulticastInlineDelegate ApplicationHasReactivatedDelegate; // 0xc0(0x10)
	struct FMulticastInlineDelegate ApplicationWillEnterBackgroundDelegate; // 0xd0(0x10)
	struct FMulticastInlineDelegate ApplicationHasEnteredForegroundDelegate; // 0xe0(0x10)
	struct FMulticastInlineDelegate ApplicationWillTerminateDelegate; // 0xf0(0x10)
	struct FMulticastInlineDelegate ApplicationShouldUnloadResourcesDelegate; // 0x100(0x10)
	struct FMulticastInlineDelegate ApplicationReceivedStartupArgumentsDelegate; // 0x110(0x10)
	struct FMulticastInlineDelegate OnTemperatureChangeDelegate; // 0x120(0x10)
	struct FMulticastInlineDelegate OnLowPowerModeDelegate; // 0x130(0x10)
};

// Class Engine.ArrowComponent
// Size: 0x440 (Inherited: 0x430)
struct UArrowComponent : public UPrimitiveComponent {
	struct FColor ArrowColor; // 0x430(0x04)
	float ArrowSize; // 0x434(0x04)
	float ScreenSize; // 0x438(0x04)
	char bIsScreenSizeScaled : 1; // 0x43c(0x01)
	char bTreatAsASprite : 1; // 0x43c(0x01)
	char UnknownData_43C_2 : 6; // 0x43c(0x01)
	char UnknownData_43D[0x3]; // 0x43d(0x03)

	void SetArrowColor(struct FLinearColor NewColor); // Function Engine.ArrowComponent.SetArrowColor
};

// Class Engine.AssetExportTask
// Size: 0x78 (Inherited: 0x28)
struct UAssetExportTask : public UObject {
	struct UObject* Object; // 0x28(0x08)
	struct UExporter* Exporter; // 0x30(0x08)
	struct FString Filename; // 0x38(0x10)
	bool bSelected; // 0x48(0x01)
	bool bReplaceIdentical; // 0x49(0x01)
	bool bPrompt; // 0x4a(0x01)
	bool bAutomated; // 0x4b(0x01)
	bool bUseFileArchive; // 0x4c(0x01)
	bool bWriteEmptyFiles; // 0x4d(0x01)
	char UnknownData_4E[0x2]; // 0x4e(0x02)
	struct TArray<struct UObject*> IgnoreObjectList; // 0x50(0x10)
	struct UObject* Options; // 0x60(0x08)
	struct TArray<struct FString> Errors; // 0x68(0x10)
};

// Class Engine.AssetManagerSettings
// Size: 0x118 (Inherited: 0x38)
struct UAssetManagerSettings : public UDeveloperSettings {
	struct TArray<struct FPrimaryAssetTypeInfo> PrimaryAssetTypesToScan; // 0x38(0x10)
	struct TArray<struct FDirectoryPath> DirectoriesToExclude; // 0x48(0x10)
	struct TArray<struct FPrimaryAssetRulesOverride> PrimaryAssetRules; // 0x58(0x10)
	struct TArray<struct FPrimaryAssetRulesCustomOverride> CustomPrimaryAssetRules; // 0x68(0x10)
	bool bOnlyCookProductionAssets; // 0x78(0x01)
	bool bShouldManagerDetermineTypeAndName; // 0x79(0x01)
	bool bShouldGuessTypeAndNameInEditor; // 0x7a(0x01)
	bool bShouldAcquireMissingChunksOnLoad; // 0x7b(0x01)
	char UnknownData_7C[0x4]; // 0x7c(0x04)
	struct TArray<struct FAssetManagerRedirect> PrimaryAssetIdRedirects; // 0x80(0x10)
	struct TArray<struct FAssetManagerRedirect> PrimaryAssetTypeRedirects; // 0x90(0x10)
	struct TArray<struct FAssetManagerRedirect> AssetPathRedirects; // 0xa0(0x10)
	struct TSet<struct FName> MetaDataTagsForAssetRegistry; // 0xb0(0x50)
	struct TArray<struct FName> PrimaryAssetTypeWrangleWhitelist; // 0x100(0x10)
	bool bForceUseAllBundlesDuringLoadRecursive; // 0x110(0x01)
	char UnknownData_111[0x7]; // 0x111(0x07)
};

// Class Engine.AssetMappingTable
// Size: 0x38 (Inherited: 0x28)
struct UAssetMappingTable : public UObject {
	struct TArray<struct FAssetMapping> MappedAssets; // 0x28(0x10)
};

// Class Engine.AsyncActionHandleSaveGame
// Size: 0x68 (Inherited: 0x30)
struct UAsyncActionHandleSaveGame : public UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate Completed; // 0x30(0x10)
	char UnknownData_40[0x20]; // 0x40(0x20)
	struct USaveGame* SaveGameObject; // 0x60(0x08)

	struct UAsyncActionHandleSaveGame* AsyncSaveGameToSlot(struct UObject* WorldContextObject, struct USaveGame* SaveGameObject, struct FString SlotName, int32_t UserIndex); // Function Engine.AsyncActionHandleSaveGame.AsyncSaveGameToSlot
	struct UAsyncActionHandleSaveGame* AsyncLoadGameFromSlot(struct UObject* WorldContextObject, struct FString SlotName, int32_t UserIndex); // Function Engine.AsyncActionHandleSaveGame.AsyncLoadGameFromSlot
};

// Class Engine.AsyncActionLoadPrimaryAssetBase
// Size: 0x78 (Inherited: 0x30)
struct UAsyncActionLoadPrimaryAssetBase : public UBlueprintAsyncActionBase {
	char UnknownData_30[0x48]; // 0x30(0x48)
};

// Class Engine.AsyncActionLoadPrimaryAsset
// Size: 0x88 (Inherited: 0x78)
struct UAsyncActionLoadPrimaryAsset : public UAsyncActionLoadPrimaryAssetBase {
	struct FMulticastInlineDelegate Completed; // 0x78(0x10)

	struct UAsyncActionLoadPrimaryAsset* AsyncLoadPrimaryAsset(struct UObject* WorldContextObject, struct FPrimaryAssetId PrimaryAsset, struct TArray<struct FName> LoadBundles); // Function Engine.AsyncActionLoadPrimaryAsset.AsyncLoadPrimaryAsset
};

// Class Engine.AsyncActionLoadPrimaryAssetClass
// Size: 0x88 (Inherited: 0x78)
struct UAsyncActionLoadPrimaryAssetClass : public UAsyncActionLoadPrimaryAssetBase {
	struct FMulticastInlineDelegate Completed; // 0x78(0x10)

	struct UAsyncActionLoadPrimaryAssetClass* AsyncLoadPrimaryAssetClass(struct UObject* WorldContextObject, struct FPrimaryAssetId PrimaryAsset, struct TArray<struct FName> LoadBundles); // Function Engine.AsyncActionLoadPrimaryAssetClass.AsyncLoadPrimaryAssetClass
};

// Class Engine.AsyncActionLoadPrimaryAssetList
// Size: 0x88 (Inherited: 0x78)
struct UAsyncActionLoadPrimaryAssetList : public UAsyncActionLoadPrimaryAssetBase {
	struct FMulticastInlineDelegate Completed; // 0x78(0x10)

	struct UAsyncActionLoadPrimaryAssetList* AsyncLoadPrimaryAssetList(struct UObject* WorldContextObject, struct TArray<struct FPrimaryAssetId> PrimaryAssetList, struct TArray<struct FName> LoadBundles); // Function Engine.AsyncActionLoadPrimaryAssetList.AsyncLoadPrimaryAssetList
};

// Class Engine.AsyncActionLoadPrimaryAssetClassList
// Size: 0x88 (Inherited: 0x78)
struct UAsyncActionLoadPrimaryAssetClassList : public UAsyncActionLoadPrimaryAssetBase {
	struct FMulticastInlineDelegate Completed; // 0x78(0x10)

	struct UAsyncActionLoadPrimaryAssetClassList* AsyncLoadPrimaryAssetClassList(struct UObject* WorldContextObject, struct TArray<struct FPrimaryAssetId> PrimaryAssetList, struct TArray<struct FName> LoadBundles); // Function Engine.AsyncActionLoadPrimaryAssetClassList.AsyncLoadPrimaryAssetClassList
};

// Class Engine.AsyncActionChangePrimaryAssetBundles
// Size: 0x88 (Inherited: 0x78)
struct UAsyncActionChangePrimaryAssetBundles : public UAsyncActionLoadPrimaryAssetBase {
	struct FMulticastInlineDelegate Completed; // 0x78(0x10)

	struct UAsyncActionChangePrimaryAssetBundles* AsyncChangeBundleStateForPrimaryAssetList(struct UObject* WorldContextObject, struct TArray<struct FPrimaryAssetId> PrimaryAssetList, struct TArray<struct FName> AddBundles, struct TArray<struct FName> RemoveBundles); // Function Engine.AsyncActionChangePrimaryAssetBundles.AsyncChangeBundleStateForPrimaryAssetList
	struct UAsyncActionChangePrimaryAssetBundles* AsyncChangeBundleStateForMatchingPrimaryAssets(struct UObject* WorldContextObject, struct TArray<struct FName> NewBundles, struct TArray<struct FName> OldBundles); // Function Engine.AsyncActionChangePrimaryAssetBundles.AsyncChangeBundleStateForMatchingPrimaryAssets
};

// Class Engine.AtmosphericFog
// Size: 0x228 (Inherited: 0x220)
struct AAtmosphericFog : public AInfo {
	struct UAtmosphericFogComponent* AtmosphericFogComponent; // 0x220(0x08)
};

// Class Engine.AtmosphericFogComponent
// Size: 0x310 (Inherited: 0x210)
struct UAtmosphericFogComponent : public USceneComponent {
	float SunMultiplier; // 0x208(0x04)
	float FogMultiplier; // 0x20c(0x04)
	float DensityMultiplier; // 0x210(0x04)
	float DensityOffset; // 0x214(0x04)
	float DistanceScale; // 0x218(0x04)
	float AltitudeScale; // 0x21c(0x04)
	float DistanceOffset; // 0x220(0x04)
	float GroundOffset; // 0x224(0x04)
	float StartDistance; // 0x228(0x04)
	float SunDiscScale; // 0x22c(0x04)
	float DefaultBrightness; // 0x230(0x04)
	struct FColor DefaultLightColor; // 0x234(0x04)
	char bDisableSunDisk : 1; // 0x238(0x01)
	char bAtmosphereAffectsSunIlluminance : 1; // 0x238(0x01)
	char bDisableGroundScattering : 1; // 0x238(0x01)
	struct FAtmospherePrecomputeParameters PrecomputeParams; // 0x23c(0x2c)
	struct UTexture2D* TransmittanceTexture; // 0x268(0x08)
	struct UTexture2D* IrradianceTexture; // 0x270(0x08)
	char UnknownData_27C_3 : 5; // 0x27c(0x01)
	char UnknownData_27D[0x93]; // 0x27d(0x93)

	void StartPrecompute(); // Function Engine.AtmosphericFogComponent.StartPrecompute
	void SetSunMultiplier(float NewSunMultiplier); // Function Engine.AtmosphericFogComponent.SetSunMultiplier
	void SetStartDistance(float NewStartDistance); // Function Engine.AtmosphericFogComponent.SetStartDistance
	void SetPrecomputeParams(float DensityHeight, int32_t MaxScatteringOrder, int32_t InscatterAltitudeSampleNum); // Function Engine.AtmosphericFogComponent.SetPrecomputeParams
	void SetFogMultiplier(float NewFogMultiplier); // Function Engine.AtmosphericFogComponent.SetFogMultiplier
	void SetDistanceScale(float NewDistanceScale); // Function Engine.AtmosphericFogComponent.SetDistanceScale
	void SetDistanceOffset(float NewDistanceOffset); // Function Engine.AtmosphericFogComponent.SetDistanceOffset
	void SetDensityOffset(float NewDensityOffset); // Function Engine.AtmosphericFogComponent.SetDensityOffset
	void SetDensityMultiplier(float NewDensityMultiplier); // Function Engine.AtmosphericFogComponent.SetDensityMultiplier
	void SetDefaultLightColor(struct FLinearColor NewLightColor); // Function Engine.AtmosphericFogComponent.SetDefaultLightColor
	void SetDefaultBrightness(float NewBrightness); // Function Engine.AtmosphericFogComponent.SetDefaultBrightness
	void SetAltitudeScale(float NewAltitudeScale); // Function Engine.AtmosphericFogComponent.SetAltitudeScale
	void DisableSunDisk(bool NewSunDisk); // Function Engine.AtmosphericFogComponent.DisableSunDisk
	void DisableGroundScattering(bool NewGroundScattering); // Function Engine.AtmosphericFogComponent.DisableGroundScattering
};

// Class Engine.AudioSettings
// Size: 0x148 (Inherited: 0x38)
struct UAudioSettings : public UDeveloperSettings {
	struct FSoftObjectPath DefaultSoundClassName; // 0x38(0x18)
	struct FSoftObjectPath DefaultMediaSoundClassName; // 0x50(0x18)
	struct FSoftObjectPath DefaultSoundConcurrencyName; // 0x68(0x18)
	struct FSoftObjectPath DefaultBaseSoundMix; // 0x80(0x18)
	struct FSoftObjectPath VoiPSoundClass; // 0x98(0x18)
	struct FSoftObjectPath MasterSubmix; // 0xb0(0x18)
	struct FSoftObjectPath ReverbSubmix; // 0xc8(0x18)
	struct FSoftObjectPath EQSubmix; // 0xe0(0x18)
	enum class EVoiceSampleRate VoiPSampleRate; // 0xf8(0x04)
	float DefaultReverbSendLevel; // 0xfc(0x04)
	int32_t MaximumConcurrentStreams; // 0x100(0x04)
	float GlobalMinPitchScale; // 0x104(0x04)
	float GlobalMaxPitchScale; // 0x108(0x04)
	char UnknownData_10C[0x4]; // 0x10c(0x04)
	struct TArray<struct FAudioQualitySettings> QualityLevels; // 0x110(0x10)
	char bAllowPlayWhenSilent : 1; // 0x120(0x01)
	char bDisableMasterEQ : 1; // 0x120(0x01)
	char bAllowCenterChannel3DPanning : 1; // 0x120(0x01)
	char UnknownData_120_3 : 5; // 0x120(0x01)
	char UnknownData_121[0x3]; // 0x121(0x03)
	uint32_t NumStoppingSources; // 0x124(0x04)
	enum class EPanningMethod PanningMethod; // 0x128(0x01)
	enum class EMonoChannelUpmixMethod MonoChannelUpmixMethod; // 0x129(0x01)
	char UnknownData_12A[0x6]; // 0x12a(0x06)
	struct FString DialogueFilenameFormat; // 0x130(0x10)
	char UnknownData_140[0x8]; // 0x140(0x08)
};

// Class Engine.AudioVolume
// Size: 0x2a8 (Inherited: 0x258)
struct AAudioVolume : public AVolume {
	float Priority; // 0x258(0x04)
	char bEnabled : 1; // 0x25c(0x01)
	char UnknownData_25C_1 : 7; // 0x25c(0x01)
	char UnknownData_25D[0x3]; // 0x25d(0x03)
	struct FReverbSettings Settings; // 0x260(0x20)
	struct FInteriorSettings AmbientZoneSettings; // 0x280(0x24)
	char UnknownData_2A4[0x4]; // 0x2a4(0x04)

	void SetReverbSettings(struct FReverbSettings NewReverbSettings); // Function Engine.AudioVolume.SetReverbSettings
	void SetPriority(float NewPriority); // Function Engine.AudioVolume.SetPriority
	void SetInteriorSettings(struct FInteriorSettings NewInteriorSettings); // Function Engine.AudioVolume.SetInteriorSettings
	void SetEnabled(bool bNewEnabled); // Function Engine.AudioVolume.SetEnabled
	void OnRep_bEnabled(); // Function Engine.AudioVolume.OnRep_bEnabled
};

// Class Engine.AutoDestroySubsystem
// Size: 0x48 (Inherited: 0x30)
struct UAutoDestroySubsystem : public UWorldSubsystem {
	char UnknownData_30[0x8]; // 0x30(0x08)
	struct TArray<struct AActor*> ActorsToPoll; // 0x38(0x10)

	void OnActorEndPlay(struct AActor* Actor, char EndPlayReason); // Function Engine.AutoDestroySubsystem.OnActorEndPlay
};

// Class Engine.AutomationTestSettings
// Size: 0x328 (Inherited: 0x28)
struct UAutomationTestSettings : public UObject {
	struct TArray<struct FString> EngineTestModules; // 0x28(0x10)
	struct TArray<struct FString> EditorTestModules; // 0x38(0x10)
	struct FSoftObjectPath AutomationTestmap; // 0x48(0x18)
	struct TArray<struct FEditorMapPerformanceTestDefinition> EditorPerformanceTestMaps; // 0x60(0x10)
	struct TArray<struct FSoftObjectPath> AssetsToOpen; // 0x70(0x10)
	struct FBuildPromotionTestSettings BuildPromotionTest; // 0x80(0x1f0)
	struct FMaterialEditorPromotionSettings MaterialEditorPromotionTest; // 0x270(0x30)
	struct FParticleEditorPromotionSettings ParticleEditorPromotionTest; // 0x2a0(0x10)
	struct FBlueprintEditorPromotionSettings BlueprintEditorPromotionTest; // 0x2b0(0x30)
	struct TArray<struct FString> TestLevelFolders; // 0x2e0(0x10)
	struct TArray<struct FExternalToolDefinition> ExternalTools; // 0x2f0(0x10)
	struct TArray<struct FEditorImportExportTestDefinition> ImportExportTestDefinitions; // 0x300(0x10)
	struct TArray<struct FLaunchOnTestSettings> LaunchOnSettings; // 0x310(0x10)
	struct FIntPoint DefaultScreenshotResolution; // 0x320(0x08)
};

// Class Engine.AvoidanceManager
// Size: 0xe0 (Inherited: 0x28)
struct UAvoidanceManager : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	float DefaultTimeToLive; // 0x30(0x04)
	float LockTimeAfterAvoid; // 0x34(0x04)
	float LockTimeAfterClean; // 0x38(0x04)
	float DeltaTimeToPredict; // 0x3c(0x04)
	float ArtificialRadiusExpansion; // 0x40(0x04)
	float TestHeightDifference; // 0x44(0x04)
	float HeightCheckMargin; // 0x48(0x04)
	char UnknownData_4C[0x94]; // 0x4c(0x94)

	bool RegisterMovementComponent(struct UMovementComponent* MovementComp, float AvoidanceWeight); // Function Engine.AvoidanceManager.RegisterMovementComponent
	int32_t GetObjectCount(); // Function Engine.AvoidanceManager.GetObjectCount
	int32_t GetNewAvoidanceUID(); // Function Engine.AvoidanceManager.GetNewAvoidanceUID
	struct FVector GetAvoidanceVelocityForComponent(struct UMovementComponent* MovementComp); // Function Engine.AvoidanceManager.GetAvoidanceVelocityForComponent
};

// Class Engine.BandwidthTestActor
// Size: 0x240 (Inherited: 0x220)
struct ABandwidthTestActor : public AActor {
	struct FBandwidthTestGenerator BandwidthGenerator; // 0x220(0x20)
};

// Class Engine.BillboardComponent
// Size: 0x450 (Inherited: 0x430)
struct UBillboardComponent : public UPrimitiveComponent {
	struct UTexture2D* Sprite; // 0x430(0x08)
	char bIsScreenSizeScaled : 1; // 0x438(0x01)
	char UnknownData_438_1 : 7; // 0x438(0x01)
	char UnknownData_439[0x3]; // 0x439(0x03)
	float ScreenSize; // 0x43c(0x04)
	float U; // 0x440(0x04)
	float UL; // 0x444(0x04)
	float V; // 0x448(0x04)
	float VL; // 0x44c(0x04)

	void SetUV(int32_t NewU, int32_t NewUL, int32_t NewV, int32_t NewVL); // Function Engine.BillboardComponent.SetUV
	void SetSpriteAndUV(struct UTexture2D* NewSprite, int32_t NewU, int32_t NewUL, int32_t NewV, int32_t NewVL); // Function Engine.BillboardComponent.SetSpriteAndUV
	void SetSprite(struct UTexture2D* NewSprite); // Function Engine.BillboardComponent.SetSprite
};

// Class Engine.Skeleton
// Size: 0x368 (Inherited: 0x28)
struct USkeleton : public UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
	struct TArray<struct FBoneNode> BoneTree; // 0x38(0x10)
	struct TArray<struct FTransform> RefLocalPoses; // 0x48(0x10)
	char UnknownData_58[0x118]; // 0x58(0x118)
	struct FGuid VirtualBoneGuid; // 0x170(0x10)
	struct TArray<struct FVirtualBone> VirtualBones; // 0x180(0x10)
	struct TArray<struct USkeletalMeshSocket*> Sockets; // 0x190(0x10)
	char UnknownData_1A0[0x50]; // 0x1a0(0x50)
	struct FSmartNameContainer SmartNames; // 0x1f0(0x50)
	char UnknownData_240[0x30]; // 0x240(0x30)
	struct TArray<struct UBlendProfile*> BlendProfiles; // 0x270(0x10)
	struct TArray<struct FAnimSlotGroup> SlotGroups; // 0x280(0x10)
	char UnknownData_290[0xc8]; // 0x290(0xc8)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x358(0x10)
};

// Class Engine.BlendProfile
// Size: 0x48 (Inherited: 0x28)
struct UBlendProfile : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct USkeleton* OwningSkeleton; // 0x30(0x08)
	struct TArray<struct FBlendProfileBoneEntry> ProfileEntries; // 0x38(0x10)
};

// Class Engine.PlatformGameInstance
// Size: 0x268 (Inherited: 0x198)
struct UPlatformGameInstance : public UGameInstance {
	struct FMulticastInlineDelegate ApplicationWillDeactivateDelegate; // 0x198(0x10)
	struct FMulticastInlineDelegate ApplicationHasReactivatedDelegate; // 0x1a8(0x10)
	struct FMulticastInlineDelegate ApplicationWillEnterBackgroundDelegate; // 0x1b8(0x10)
	struct FMulticastInlineDelegate ApplicationHasEnteredForegroundDelegate; // 0x1c8(0x10)
	struct FMulticastInlineDelegate ApplicationWillTerminateDelegate; // 0x1d8(0x10)
	struct FMulticastInlineDelegate ApplicationShouldUnloadResourcesDelegate; // 0x1e8(0x10)
	struct FMulticastInlineDelegate ApplicationReceivedStartupArgumentsDelegate; // 0x1f8(0x10)
	struct FMulticastInlineDelegate ApplicationRegisteredForRemoteNotificationsDelegate; // 0x208(0x10)
	struct FMulticastInlineDelegate ApplicationRegisteredForUserNotificationsDelegate; // 0x218(0x10)
	struct FMulticastInlineDelegate ApplicationFailedToRegisterForRemoteNotificationsDelegate; // 0x228(0x10)
	struct FMulticastInlineDelegate ApplicationReceivedRemoteNotificationDelegate; // 0x238(0x10)
	struct FMulticastInlineDelegate ApplicationReceivedLocalNotificationDelegate; // 0x248(0x10)
	struct FMulticastInlineDelegate ApplicationReceivedScreenOrientationChangedNotificationDelegate; // 0x258(0x10)
};

// Class Engine.BodySetup
// Size: 0x250 (Inherited: 0x28)
struct UBodySetup : public UObject {
	struct FKAggregateGeom AggGeom; // 0x28(0x58)
	struct FName BoneName; // 0x80(0x08)
	char PhysicsType; // 0x88(0x01)
	char bAlwaysFullAnimWeight : 1; // 0x89(0x01)
	char bConsiderForBounds : 1; // 0x89(0x01)
	char bMeshCollideAll : 1; // 0x89(0x01)
	char bDoubleSidedGeometry : 1; // 0x89(0x01)
	char bGenerateNonMirroredCollision : 1; // 0x89(0x01)
	char bSharedCookedData : 1; // 0x89(0x01)
	char bGenerateMirroredCollision : 1; // 0x89(0x01)
	char bSupportUVsAndFaceRemap : 1; // 0x89(0x01)
	char UnknownData_8A[0x1]; // 0x8a(0x01)
	char CollisionReponse; // 0x8b(0x01)
	char CollisionTraceFlag; // 0x8c(0x01)
	char UnknownData_8D[0x3]; // 0x8d(0x03)
	struct UPhysicalMaterial* PhysMaterial; // 0x90(0x08)
	struct FWalkableSlopeOverride WalkableSlopeOverride; // 0x98(0x10)
	char UnknownData_A8[0x78]; // 0xa8(0x78)
	struct FBodyInstance DefaultInstance; // 0x120(0x110)
	char UnknownData_230[0x8]; // 0x230(0x08)
	struct FVector BuildScale3D; // 0x238(0x0c)
	char UnknownData_244[0xc]; // 0x244(0x0c)
};

// Class Engine.BoneMaskFilter
// Size: 0x38 (Inherited: 0x28)
struct UBoneMaskFilter : public UObject {
	struct TArray<struct FInputBlendPose> BlendPoses; // 0x28(0x10)
};

// Class Engine.BookMark
// Size: 0x50 (Inherited: 0x28)
struct UBookMark : public UBookmarkBase {
	struct FVector Location; // 0x28(0x0c)
	struct FRotator Rotation; // 0x34(0x0c)
	struct TArray<struct FString> HiddenLevels; // 0x40(0x10)
};

// Class Engine.BookMark2D
// Size: 0x38 (Inherited: 0x28)
struct UBookMark2D : public UBookmarkBase {
	float Zoom2D; // 0x28(0x04)
	struct FIntPoint Location; // 0x2c(0x08)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// Class Engine.BoxComponent
// Size: 0x460 (Inherited: 0x450)
struct UBoxComponent : public UShapeComponent {
	struct FVector BoxExtent; // 0x448(0x0c)
	float LineThickness; // 0x454(0x04)

	void SetLineThickness(float InLineThickness); // Function Engine.BoxComponent.SetLineThickness
	void SetBoxExtent(struct FVector InBoxExtent, bool bUpdateOverlaps); // Function Engine.BoxComponent.SetBoxExtent
	struct FVector GetUnscaledBoxExtent(); // Function Engine.BoxComponent.GetUnscaledBoxExtent
	struct FVector GetScaledBoxExtent(); // Function Engine.BoxComponent.GetScaledBoxExtent
};

// Class Engine.ReflectionCapture
// Size: 0x228 (Inherited: 0x220)
struct AReflectionCapture : public AActor {
	struct UReflectionCaptureComponent* CaptureComponent; // 0x220(0x08)
};

// Class Engine.ReflectionCaptureComponent
// Size: 0x280 (Inherited: 0x210)
struct UReflectionCaptureComponent : public USceneComponent {
	struct UBillboardComponent* CaptureOffsetComponent; // 0x208(0x08)
	enum class EReflectionSourceType ReflectionSourceType; // 0x210(0x01)
	struct UTextureCube* Cubemap; // 0x218(0x08)
	float SourceCubemapAngle; // 0x220(0x04)
	float Brightness; // 0x224(0x04)
	struct FVector CaptureOffset; // 0x228(0x0c)
	struct FGuid MapBuildDataId; // 0x234(0x10)
	char UnknownData_245[0x3b]; // 0x245(0x3b)
};

// Class Engine.BoxReflectionCaptureComponent
// Size: 0x2a0 (Inherited: 0x280)
struct UBoxReflectionCaptureComponent : public UReflectionCaptureComponent {
	float BoxTransitionDistance; // 0x280(0x04)
	char UnknownData_284[0x4]; // 0x284(0x04)
	struct UBoxComponent* PreviewInfluenceBox; // 0x288(0x08)
	struct UBoxComponent* PreviewCaptureBox; // 0x290(0x08)
	char UnknownData_298[0x8]; // 0x298(0x08)
};

// Class Engine.Breakpoint
// Size: 0x40 (Inherited: 0x28)
struct UBreakpoint : public UObject {
	char bEnabled : 1; // 0x28(0x01)
	char UnknownData_28_1 : 7; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct UEdGraphNode* Node; // 0x30(0x08)
	char bStepOnce : 1; // 0x38(0x01)
	char bStepOnce_WasPreviouslyDisabled : 1; // 0x38(0x01)
	char bStepOnce_RemoveAfterHit : 1; // 0x38(0x01)
	char UnknownData_38_3 : 5; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
};

// Class Engine.BrushBuilder
// Size: 0x80 (Inherited: 0x28)
struct UBrushBuilder : public UObject {
	struct FString BitmapFilename; // 0x28(0x10)
	struct FString Tooltip; // 0x38(0x10)
	char NotifyBadParams : 1; // 0x48(0x01)
	char UnknownData_48_1 : 7; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
	struct TArray<struct FVector> Vertices; // 0x50(0x10)
	struct TArray<struct FBuilderPoly> Polys; // 0x60(0x10)
	struct FName Layer; // 0x70(0x08)
	char MergeCoplanars : 1; // 0x78(0x01)
	char UnknownData_78_1 : 7; // 0x78(0x01)
	char UnknownData_79[0x7]; // 0x79(0x07)
};

// Class Engine.BrushComponent
// Size: 0x440 (Inherited: 0x430)
struct UBrushComponent : public UPrimitiveComponent {
	struct UModel* Brush; // 0x430(0x08)
	struct UBodySetup* BrushBodySetup; // 0x438(0x08)
};

// Class Engine.ButtonStyleAsset
// Size: 0x2a0 (Inherited: 0x28)
struct UButtonStyleAsset : public UObject {
	struct FButtonStyle ButtonStyle; // 0x28(0x278)
};

// Class Engine.CameraAnim
// Size: 0x5b0 (Inherited: 0x28)
struct UCameraAnim : public UObject {
	struct UInterpGroup* CameraInterpGroup; // 0x28(0x08)
	float AnimLength; // 0x30(0x04)
	struct FBox BoundingBox; // 0x34(0x1c)
	char bRelativeToInitialTransform : 1; // 0x50(0x01)
	char bRelativeToInitialFOV : 1; // 0x50(0x01)
	char UnknownData_50_2 : 6; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	float BaseFOV; // 0x54(0x04)
	char UnknownData_58[0x8]; // 0x58(0x08)
	struct FPostProcessSettings BasePostProcessSettings; // 0x60(0x540)
	float BasePostProcessBlendWeight; // 0x5a0(0x04)
	char UnknownData_5A4[0xc]; // 0x5a4(0x0c)
};

// Class Engine.CameraAnimInst
// Size: 0x110 (Inherited: 0x28)
struct UCameraAnimInst : public UObject {
	struct UCameraAnim* CamAnim; // 0x28(0x08)
	struct UInterpGroupInst* InterpGroupInst; // 0x30(0x08)
	char UnknownData_38[0x18]; // 0x38(0x18)
	float PlayRate; // 0x50(0x04)
	char UnknownData_54[0x14]; // 0x54(0x14)
	struct UInterpTrackMove* MoveTrack; // 0x68(0x08)
	struct UInterpTrackInstMove* MoveInst; // 0x70(0x08)
	char PlaySpace; // 0x78(0x01)
	char UnknownData_79[0x97]; // 0x79(0x97)

	void Stop(bool bImmediate); // Function Engine.CameraAnimInst.Stop
	void SetScale(float NewDuration); // Function Engine.CameraAnimInst.SetScale
	void SetDuration(float NewDuration); // Function Engine.CameraAnimInst.SetDuration
};

// Class Engine.CameraModifier_CameraShake
// Size: 0xb0 (Inherited: 0x48)
struct UCameraModifier_CameraShake : public UCameraModifier {
	struct TArray<struct FActiveCameraShakeInfo> ActiveShakes; // 0x48(0x10)
	struct TMap<struct UCameraShake*, struct FPooledCameraShakes> ExpiredPooledShakesMap; // 0x58(0x50)
	float SplitScreenShakeScale; // 0xa8(0x04)
	char UnknownData_AC[0x4]; // 0xac(0x04)
};

// Class Engine.CameraShakeSourceActor
// Size: 0x228 (Inherited: 0x220)
struct ACameraShakeSourceActor : public AActor {
	struct UCameraShakeSourceComponent* CameraShakeSourceComponent; // 0x220(0x08)
};

// Class Engine.CameraShakeSourceComponent
// Size: 0x230 (Inherited: 0x210)
struct UCameraShakeSourceComponent : public USceneComponent {
	enum class ECameraShakeAttenuation Attenuation; // 0x208(0x01)
	float InnerAttenuationRadius; // 0x20c(0x04)
	float OuterAttenuationRadius; // 0x210(0x04)
	struct UCameraShake* CameraShake; // 0x218(0x08)
	bool bAutoPlay; // 0x220(0x01)
	char UnknownData_222[0xe]; // 0x222(0x0e)

	void StopAllCameraShakes(bool bImmediately); // Function Engine.CameraShakeSourceComponent.StopAllCameraShakes
	void PlayCameraShake(struct UCameraShake* InCameraShake); // Function Engine.CameraShakeSourceComponent.PlayCameraShake
	void Play(); // Function Engine.CameraShakeSourceComponent.Play
	float GetAttenuationFactor(struct FVector Location); // Function Engine.CameraShakeSourceComponent.GetAttenuationFactor
};

// Class Engine.Canvas
// Size: 0x2c0 (Inherited: 0x28)
struct UCanvas : public UObject {
	float OrgX; // 0x28(0x04)
	float OrgY; // 0x2c(0x04)
	float ClipX; // 0x30(0x04)
	float ClipY; // 0x34(0x04)
	struct FColor DrawColor; // 0x38(0x04)
	char bCenterX : 1; // 0x3c(0x01)
	char bCenterY : 1; // 0x3c(0x01)
	char bNoSmooth : 1; // 0x3c(0x01)
	char UnknownData_3C_3 : 5; // 0x3c(0x01)
	char UnknownData_3D[0x3]; // 0x3d(0x03)
	int32_t SizeX; // 0x40(0x04)
	int32_t SizeY; // 0x44(0x04)
	char UnknownData_48[0x8]; // 0x48(0x08)
	struct FPlane ColorModulate; // 0x50(0x10)
	struct UTexture2D* DefaultTexture; // 0x60(0x08)
	struct UTexture2D* GradientTexture0; // 0x68(0x08)
	struct UReporterGraph* ReporterGraph; // 0x70(0x08)
	char UnknownData_78[0x248]; // 0x78(0x248)

	struct FVector2D K2_TextSize(struct UFont* RenderFont, struct FString RenderText, struct FVector2D Scale); // Function Engine.Canvas.K2_TextSize
	struct FVector2D K2_StrLen(struct UFont* RenderFont, struct FString RenderText); // Function Engine.Canvas.K2_StrLen
	struct FVector K2_Project(struct FVector WorldLocation); // Function Engine.Canvas.K2_Project
	void K2_DrawTriangle(struct UTexture* RenderTexture, struct TArray<struct FCanvasUVTri> Triangles); // Function Engine.Canvas.K2_DrawTriangle
	void K2_DrawTexture(struct UTexture* RenderTexture, struct FVector2D ScreenPosition, struct FVector2D ScreenSize, struct FVector2D CoordinatePosition, struct FVector2D CoordinateSize, struct FLinearColor RenderColor, char BlendMode, float Rotation, struct FVector2D PivotPoint); // Function Engine.Canvas.K2_DrawTexture
	void K2_DrawText(struct UFont* RenderFont, struct FString RenderText, struct FVector2D ScreenPosition, struct FVector2D Scale, struct FLinearColor RenderColor, float Kerning, struct FLinearColor ShadowColor, struct FVector2D ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, struct FLinearColor OutlineColor); // Function Engine.Canvas.K2_DrawText
	void K2_DrawPolygon(struct UTexture* RenderTexture, struct FVector2D ScreenPosition, struct FVector2D Radius, int32_t NumberOfSides, struct FLinearColor RenderColor); // Function Engine.Canvas.K2_DrawPolygon
	void K2_DrawMaterialTriangle(struct UMaterialInterface* RenderMaterial, struct TArray<struct FCanvasUVTri> Triangles); // Function Engine.Canvas.K2_DrawMaterialTriangle
	void K2_DrawMaterial(struct UMaterialInterface* RenderMaterial, struct FVector2D ScreenPosition, struct FVector2D ScreenSize, struct FVector2D CoordinatePosition, struct FVector2D CoordinateSize, float Rotation, struct FVector2D PivotPoint); // Function Engine.Canvas.K2_DrawMaterial
	void K2_DrawLine(struct FVector2D ScreenPositionA, struct FVector2D ScreenPositionB, float Thickness, struct FLinearColor RenderColor); // Function Engine.Canvas.K2_DrawLine
	void K2_DrawBox(struct FVector2D ScreenPosition, struct FVector2D ScreenSize, float Thickness, struct FLinearColor RenderColor); // Function Engine.Canvas.K2_DrawBox
	void K2_DrawBorder(struct UTexture* BorderTexture, struct UTexture* BackgroundTexture, struct UTexture* LeftBorderTexture, struct UTexture* RightBorderTexture, struct UTexture* TopBorderTexture, struct UTexture* BottomBorderTexture, struct FVector2D ScreenPosition, struct FVector2D ScreenSize, struct FVector2D CoordinatePosition, struct FVector2D CoordinateSize, struct FLinearColor RenderColor, struct FVector2D BorderScale, struct FVector2D BackgroundScale, float Rotation, struct FVector2D PivotPoint, struct FVector2D CornerSize); // Function Engine.Canvas.K2_DrawBorder
	void K2_Deproject(struct FVector2D ScreenPosition, struct FVector WorldOrigin, struct FVector WorldDirection); // Function Engine.Canvas.K2_Deproject
};

// Class Engine.TextureRenderTarget
// Size: 0xc0 (Inherited: 0xb8)
struct UTextureRenderTarget : public UTexture {
	float TargetGamma; // 0xb8(0x04)
	char UnknownData_BC[0x4]; // 0xbc(0x04)
};

// Class Engine.TextureRenderTarget2D
// Size: 0xe8 (Inherited: 0xc0)
struct UTextureRenderTarget2D : public UTextureRenderTarget {
	int32_t SizeX; // 0xc0(0x04)
	int32_t SizeY; // 0xc4(0x04)
	struct FLinearColor ClearColor; // 0xc8(0x10)
	char AddressX; // 0xd8(0x01)
	char AddressY; // 0xd9(0x01)
	char bForceLinearGamma : 1; // 0xda(0x01)
	char bHDR : 1; // 0xda(0x01)
	char bGPUSharedFlag : 1; // 0xda(0x01)
	char UnknownData_DA_3 : 5; // 0xda(0x01)
	char RenderTargetFormat; // 0xdb(0x01)
	char bAutoGenerateMips : 1; // 0xdc(0x01)
	char UnknownData_DC_1 : 7; // 0xdc(0x01)
	char MipsSamplerFilter; // 0xdd(0x01)
	char MipsAddressU; // 0xde(0x01)
	char MipsAddressV; // 0xdf(0x01)
	char OverrideFormat; // 0xe0(0x01)
	char UnknownData_E1[0x7]; // 0xe1(0x07)
};

// Class Engine.CanvasRenderTarget2D
// Size: 0x108 (Inherited: 0xe8)
struct UCanvasRenderTarget2D : public UTextureRenderTarget2D {
	struct FMulticastInlineDelegate OnCanvasRenderTargetUpdate; // 0xe8(0x10)
	struct FWeakObjectPtr<struct UWorld> World; // 0xf8(0x08)
	bool bShouldClearRenderTargetOnReceiveUpdate; // 0x100(0x01)
	char UnknownData_101[0x7]; // 0x101(0x07)

	void UpdateResource(); // Function Engine.CanvasRenderTarget2D.UpdateResource
	void ReceiveUpdate(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function Engine.CanvasRenderTarget2D.ReceiveUpdate
	void GetSize(int32_t Width, int32_t Height); // Function Engine.CanvasRenderTarget2D.GetSize
	struct UCanvasRenderTarget2D* CreateCanvasRenderTarget2D(struct UObject* WorldContextObject, struct UCanvasRenderTarget2D* CanvasRenderTarget2DClass, int32_t Width, int32_t Height); // Function Engine.CanvasRenderTarget2D.CreateCanvasRenderTarget2D
};

// Class Engine.ChaosPhysicalMaterial
// Size: 0x48 (Inherited: 0x28)
struct UChaosPhysicalMaterial : public UObject {
	float Friction; // 0x28(0x04)
	float StaticFriction; // 0x2c(0x04)
	float Restitution; // 0x30(0x04)
	float LinearEtherDrag; // 0x34(0x04)
	float AngularEtherDrag; // 0x38(0x04)
	float SleepingLinearVelocityThreshold; // 0x3c(0x04)
	float SleepingAngularVelocityThreshold; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
};

// Class Engine.CheatManager
// Size: 0x78 (Inherited: 0x28)
struct UCheatManager : public UObject {
	struct ADebugCameraController* DebugCameraControllerRef; // 0x28(0x08)
	struct ADebugCameraController* DebugCameraControllerClass; // 0x30(0x08)
	char UnknownData_38[0x40]; // 0x38(0x40)

	void Walk(); // Function Engine.CheatManager.Walk
	void ViewSelf(); // Function Engine.CheatManager.ViewSelf
	void ViewPlayer(struct FString S); // Function Engine.CheatManager.ViewPlayer
	void ViewClass(struct AActor* DesiredClass); // Function Engine.CheatManager.ViewClass
	void ViewActor(struct FName ActorName); // Function Engine.CheatManager.ViewActor
	void UpdateSafeArea(); // Function Engine.CheatManager.UpdateSafeArea
	void ToggleServerStatReplicatorUpdateStatNet(); // Function Engine.CheatManager.ToggleServerStatReplicatorUpdateStatNet
	void ToggleServerStatReplicatorClientOverwrite(); // Function Engine.CheatManager.ToggleServerStatReplicatorClientOverwrite
	void ToggleDebugCamera(); // Function Engine.CheatManager.ToggleDebugCamera
	void ToggleAILogging(); // Function Engine.CheatManager.ToggleAILogging
	void TestCollisionDistance(); // Function Engine.CheatManager.TestCollisionDistance
	void Teleport(); // Function Engine.CheatManager.Teleport
	void Summon(struct FString ClassName); // Function Engine.CheatManager.Summon
	void StreamLevelOut(struct FName PackageName); // Function Engine.CheatManager.StreamLevelOut
	void StreamLevelIn(struct FName PackageName); // Function Engine.CheatManager.StreamLevelIn
	void SpawnServerStatReplicator(); // Function Engine.CheatManager.SpawnServerStatReplicator
	void Slomo(float NewTimeDilation); // Function Engine.CheatManager.Slomo
	void SetWorldOrigin(); // Function Engine.CheatManager.SetWorldOrigin
	void SetMouseSensitivityToDefault(); // Function Engine.CheatManager.SetMouseSensitivityToDefault
	void ServerToggleAILogging(); // Function Engine.CheatManager.ServerToggleAILogging
	void ReceiveInitCheatManager(); // Function Engine.CheatManager.ReceiveInitCheatManager
	void ReceiveEndPlay(); // Function Engine.CheatManager.ReceiveEndPlay
	void PlayersOnly(); // Function Engine.CheatManager.PlayersOnly
	void OnlyLoadLevel(struct FName PackageName); // Function Engine.CheatManager.OnlyLoadLevel
	void LogLoc(); // Function Engine.CheatManager.LogLoc
	void InvertMouse(); // Function Engine.CheatManager.InvertMouse
	void God(); // Function Engine.CheatManager.God
	void Ghost(); // Function Engine.CheatManager.Ghost
	void FreezeFrame(float Delay); // Function Engine.CheatManager.FreezeFrame
	void Fly(); // Function Engine.CheatManager.Fly
	void FlushLog(); // Function Engine.CheatManager.FlushLog
	void EnableDebugCamera(); // Function Engine.CheatManager.EnableDebugCamera
	void DumpVoiceMutingState(); // Function Engine.CheatManager.DumpVoiceMutingState
	void DumpPartyState(); // Function Engine.CheatManager.DumpPartyState
	void DumpOnlineSessionState(); // Function Engine.CheatManager.DumpOnlineSessionState
	void DumpChatState(); // Function Engine.CheatManager.DumpChatState
	void DisableDebugCamera(); // Function Engine.CheatManager.DisableDebugCamera
	void DestroyTarget(); // Function Engine.CheatManager.DestroyTarget
	void DestroyServerStatReplicator(); // Function Engine.CheatManager.DestroyServerStatReplicator
	void DestroyPawns(struct APawn* aClass); // Function Engine.CheatManager.DestroyPawns
	void DestroyAllPawnsExceptTarget(); // Function Engine.CheatManager.DestroyAllPawnsExceptTarget
	void DestroyAll(struct AActor* aClass); // Function Engine.CheatManager.DestroyAll
	void DebugCapsuleSweepSize(float HalfHeight, float Radius); // Function Engine.CheatManager.DebugCapsuleSweepSize
	void DebugCapsuleSweepPawn(); // Function Engine.CheatManager.DebugCapsuleSweepPawn
	void DebugCapsuleSweepComplex(bool bTraceComplex); // Function Engine.CheatManager.DebugCapsuleSweepComplex
	void DebugCapsuleSweepClear(); // Function Engine.CheatManager.DebugCapsuleSweepClear
	void DebugCapsuleSweepChannel(char Channel); // Function Engine.CheatManager.DebugCapsuleSweepChannel
	void DebugCapsuleSweepCapture(); // Function Engine.CheatManager.DebugCapsuleSweepCapture
	void DebugCapsuleSweep(); // Function Engine.CheatManager.DebugCapsuleSweep
	void DamageTarget(float DamageAmount); // Function Engine.CheatManager.DamageTarget
	void CheatScript(struct FString ScriptName); // Function Engine.CheatManager.CheatScript
	void ChangeSize(float F); // Function Engine.CheatManager.ChangeSize
	void BugItStringCreator(struct FVector ViewLocation, struct FRotator ViewRotation, struct FString GoString, struct FString LocString); // Function Engine.CheatManager.BugItStringCreator
	void BugItGo(float X, float Y, float Z, float Pitch, float Yaw, float Roll); // Function Engine.CheatManager.BugItGo
	void BugIt(struct FString ScreenShotDescription); // Function Engine.CheatManager.BugIt
};

// Class Engine.CheckBoxStyleAsset
// Size: 0x5a8 (Inherited: 0x28)
struct UCheckBoxStyleAsset : public UObject {
	struct FCheckBoxStyle CheckBoxStyle; // 0x28(0x580)
};

// Class Engine.ChildActorComponent
// Size: 0x240 (Inherited: 0x210)
struct UChildActorComponent : public USceneComponent {
	struct AActor* ChildActorClass; // 0x208(0x08)
	struct AActor* ChildActor; // 0x210(0x08)
	struct AActor* ChildActorTemplate; // 0x218(0x08)
	char UnknownData_228[0x18]; // 0x228(0x18)

	void SetChildActorClass(struct AActor* InClass); // Function Engine.ChildActorComponent.SetChildActorClass
};

// Class Engine.ChildConnection
// Size: 0x1a38 (Inherited: 0x1a30)
struct UChildConnection : public UNetConnection {
	struct UNetConnection* Parent; // 0x1a30(0x08)
};

// Class Engine.PlatformInterfaceBase
// Size: 0x38 (Inherited: 0x28)
struct UPlatformInterfaceBase : public UObject {
	struct TArray<struct FDelegateArray> AllDelegates; // 0x28(0x10)
};

// Class Engine.CloudStorageBase
// Size: 0x50 (Inherited: 0x38)
struct UCloudStorageBase : public UPlatformInterfaceBase {
	struct TArray<struct FString> LocalCloudFiles; // 0x38(0x10)
	char bSuppressDelegateCalls : 1; // 0x48(0x01)
	char UnknownData_48_1 : 7; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
};

// Class Engine.CollisionProfile
// Size: 0x158 (Inherited: 0x38)
struct UCollisionProfile : public UDeveloperSettings {
	struct TArray<struct FCollisionResponseTemplate> Profiles; // 0x38(0x10)
	struct TArray<struct FCustomChannelSetup> DefaultChannelResponses; // 0x48(0x10)
	struct TArray<struct FCustomProfile> EditProfiles; // 0x58(0x10)
	struct TArray<struct FRedirector> ProfileRedirects; // 0x68(0x10)
	struct TArray<struct FRedirector> CollisionChannelRedirects; // 0x78(0x10)
	char UnknownData_88[0xd0]; // 0x88(0xd0)
};

// Class Engine.ComponentDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UComponentDelegateBinding : public UDynamicBlueprintBinding {
	struct TArray<struct FBlueprintComponentDelegateBinding> ComponentDelegateBindings; // 0x28(0x10)
};

// Class Engine.CurveTable
// Size: 0xa0 (Inherited: 0x28)
struct UCurveTable : public UObject {
	char UnknownData_28[0x78]; // 0x28(0x78)
};

// Class Engine.CompositeCurveTable
// Size: 0xc8 (Inherited: 0xa0)
struct UCompositeCurveTable : public UCurveTable {
	struct TArray<struct UCurveTable*> ParentTables; // 0xa0(0x10)
	struct TArray<struct UCurveTable*> OldParentTables; // 0xb0(0x10)
	char UnknownData_C0[0x8]; // 0xc0(0x08)
};

// Class Engine.CompositeDataTable
// Size: 0xf0 (Inherited: 0xc8)
struct UCompositeDataTable : public UDataTable {
	struct TArray<struct UDataTable*> ParentTables; // 0xc8(0x10)
	struct TArray<struct UDataTable*> OldParentTables; // 0xd8(0x10)
	char UnknownData_E8[0x8]; // 0xe8(0x08)
};

// Class Engine.ControlChannel
// Size: 0x88 (Inherited: 0x70)
struct UControlChannel : public UChannel {
	char UnknownData_70[0x18]; // 0x70(0x18)
};

// Class Engine.StreamingSettings
// Size: 0x70 (Inherited: 0x38)
struct UStreamingSettings : public UDeveloperSettings {
	char AsyncLoadingThreadEnabled : 1; // 0x38(0x01)
	char WarnIfTimeLimitExceeded : 1; // 0x38(0x01)
	char UnknownData_38_2 : 6; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	float TimeLimitExceededMultiplier; // 0x3c(0x04)
	float TimeLimitExceededMinTime; // 0x40(0x04)
	int32_t MinBulkDataSizeForAsyncLoading; // 0x44(0x04)
	char UseBackgroundLevelStreaming : 1; // 0x48(0x01)
	char AsyncLoadingUseFullTimeLimit : 1; // 0x48(0x01)
	char UnknownData_48_2 : 6; // 0x48(0x01)
	char UnknownData_49[0x3]; // 0x49(0x03)
	float AsyncLoadingTimeLimit; // 0x4c(0x04)
	float PriorityAsyncLoadingExtraTime; // 0x50(0x04)
	float LevelStreamingActorsUpdateTimeLimit; // 0x54(0x04)
	float PriorityLevelStreamingActorsUpdateExtraTime; // 0x58(0x04)
	int32_t LevelStreamingComponentsRegistrationGranularity; // 0x5c(0x04)
	float LevelStreamingUnregisterComponentsTimeLimit; // 0x60(0x04)
	int32_t LevelStreamingComponentsUnregistrationGranularity; // 0x64(0x04)
	char FlushStreamingOnExit : 1; // 0x68(0x01)
	char EventDrivenLoaderEnabled : 1; // 0x68(0x01)
	char UnknownData_68_2 : 6; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
};

// Class Engine.GarbageCollectionSettings
// Size: 0x58 (Inherited: 0x38)
struct UGarbageCollectionSettings : public UDeveloperSettings {
	float TimeBetweenPurgingPendingKillObjects; // 0x38(0x04)
	char FlushStreamingOnGC : 1; // 0x3c(0x01)
	char AllowParallelGC : 1; // 0x3c(0x01)
	char IncrementalBeginDestroyEnabled : 1; // 0x3c(0x01)
	char MultithreadedDestructionEnabled : 1; // 0x3c(0x01)
	char CreateGCClusters : 1; // 0x3c(0x01)
	char AssetClusteringEnabled : 1; // 0x3c(0x01)
	char ActorClusteringEnabled : 1; // 0x3c(0x01)
	char BlueprintClusteringEnabled : 1; // 0x3c(0x01)
	char UseDisregardForGCOnDedicatedServers : 1; // 0x3d(0x01)
	char UnknownData_3D_1 : 7; // 0x3d(0x01)
	char UnknownData_3E[0x2]; // 0x3e(0x02)
	int32_t MinGCClusterSize; // 0x40(0x04)
	int32_t NumRetriesBeforeForcingGC; // 0x44(0x04)
	int32_t MaxObjectsNotConsideredByGC; // 0x48(0x04)
	int32_t SizeOfPermanentObjectPool; // 0x4c(0x04)
	int32_t MaxObjectsInGame; // 0x50(0x04)
	int32_t MaxObjectsInEditor; // 0x54(0x04)
};

// Class Engine.CullDistanceVolume
// Size: 0x270 (Inherited: 0x258)
struct ACullDistanceVolume : public AVolume {
	struct TArray<struct FCullDistanceSizePair> CullDistances; // 0x258(0x10)
	char bEnabled : 1; // 0x268(0x01)
	char UnknownData_268_1 : 7; // 0x268(0x01)
	char UnknownData_269[0x7]; // 0x269(0x07)
};

// Class Engine.CurveBase
// Size: 0x30 (Inherited: 0x28)
struct UCurveBase : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)

	void GetValueRange(float MinValue, float MaxValue); // Function Engine.CurveBase.GetValueRange
	void GetTimeRange(float MinTime, float MaxTime); // Function Engine.CurveBase.GetTimeRange
};

// Class Engine.CurveFloat
// Size: 0xb8 (Inherited: 0x30)
struct UCurveFloat : public UCurveBase {
	struct FRichCurve FloatCurve; // 0x30(0x80)
	bool bIsEventCurve; // 0xb0(0x01)
	char UnknownData_B1[0x7]; // 0xb1(0x07)

	float GetFloatValue(float InTime); // Function Engine.CurveFloat.GetFloatValue
};

// Class Engine.CurveLinearColor
// Size: 0x250 (Inherited: 0x30)
struct UCurveLinearColor : public UCurveBase {
	struct FRichCurve FloatCurves[0x4]; // 0x30(0x200)
	float AdjustHue; // 0x230(0x04)
	float AdjustSaturation; // 0x234(0x04)
	float AdjustBrightness; // 0x238(0x04)
	float AdjustBrightnessCurve; // 0x23c(0x04)
	float AdjustVibrance; // 0x240(0x04)
	float AdjustMinAlpha; // 0x244(0x04)
	float AdjustMaxAlpha; // 0x248(0x04)
	char UnknownData_24C[0x4]; // 0x24c(0x04)

	struct FLinearColor GetLinearColorValue(float InTime); // Function Engine.CurveLinearColor.GetLinearColorValue
	struct FLinearColor GetClampedLinearColorValue(float InTime); // Function Engine.CurveLinearColor.GetClampedLinearColorValue
};

// Class Engine.Texture2D
// Size: 0xe8 (Inherited: 0xb8)
struct UTexture2D : public UTexture {
	int32_t LevelIndex; // 0xb8(0x04)
	int32_t FirstResourceMemMip; // 0xbc(0x04)
	char bTemporarilyDisableStreaming : 1; // 0xc0(0x01)
	char UnknownData_C0_1 : 7; // 0xc0(0x01)
	char AddressX; // 0xc1(0x01)
	char AddressY; // 0xc2(0x01)
	char UnknownData_C3[0x1]; // 0xc3(0x01)
	struct FIntPoint ImportedSize; // 0xc4(0x08)
	char UnknownData_CC[0x1c]; // 0xcc(0x1c)

	int32_t Blueprint_GetSizeY(); // Function Engine.Texture2D.Blueprint_GetSizeY
	int32_t Blueprint_GetSizeX(); // Function Engine.Texture2D.Blueprint_GetSizeX
};

// Class Engine.CurveLinearColorAtlas
// Size: 0x100 (Inherited: 0xe8)
struct UCurveLinearColorAtlas : public UTexture2D {
	uint32_t TextureSize; // 0xe8(0x04)
	char UnknownData_EC[0x4]; // 0xec(0x04)
	struct TArray<struct UCurveLinearColor*> GradientCurves; // 0xf0(0x10)

	bool GetCurvePosition(struct UCurveLinearColor* InCurve, float Position); // Function Engine.CurveLinearColorAtlas.GetCurvePosition
};

// Class Engine.CurveVector
// Size: 0x1b0 (Inherited: 0x30)
struct UCurveVector : public UCurveBase {
	struct FRichCurve FloatCurves[0x3]; // 0x30(0x180)

	struct FVector GetVectorValue(float InTime); // Function Engine.CurveVector.GetVectorValue
};

// Class Engine.DebugCameraController
// Size: 0x688 (Inherited: 0x588)
struct ADebugCameraController : public APlayerController {
	char bShowSelectedInfo : 1; // 0x588(0x01)
	char bIsFrozenRendering : 1; // 0x588(0x01)
	char bIsOrbitingSelectedActor : 1; // 0x588(0x01)
	char bOrbitPivotUseCenter : 1; // 0x588(0x01)
	char bEnableBufferVisualization : 1; // 0x588(0x01)
	char bEnableBufferVisualizationFullMode : 1; // 0x588(0x01)
	char bIsBufferVisualizationInputSetup : 1; // 0x588(0x01)
	char bLastDisplayEnabled : 1; // 0x588(0x01)
	char UnknownData_589[0x7]; // 0x589(0x07)
	struct UDrawFrustumComponent* DrawFrustum; // 0x590(0x08)
	struct AActor* SelectedActor; // 0x598(0x08)
	struct UPrimitiveComponent* SelectedComponent; // 0x5a0(0x08)
	struct FHitResult SelectedHitPoint; // 0x5a8(0x88)
	struct APlayerController* OriginalControllerRef; // 0x630(0x08)
	struct UPlayer* OriginalPlayer; // 0x638(0x08)
	float SpeedScale; // 0x640(0x04)
	float InitialMaxSpeed; // 0x644(0x04)
	float InitialAccel; // 0x648(0x04)
	float InitialDecel; // 0x64c(0x04)
	char UnknownData_650[0x38]; // 0x650(0x38)

	void ToggleDisplay(); // Function Engine.DebugCameraController.ToggleDisplay
	void ShowDebugSelectedInfo(); // Function Engine.DebugCameraController.ShowDebugSelectedInfo
	void SetPawnMovementSpeedScale(float NewSpeedScale); // Function Engine.DebugCameraController.SetPawnMovementSpeedScale
	void ReceiveOnDeactivate(struct APlayerController* RestoredPC); // Function Engine.DebugCameraController.ReceiveOnDeactivate
	void ReceiveOnActorSelected(struct AActor* NewSelectedActor, struct FVector SelectHitLocation, struct FVector SelectHitNormal, struct FHitResult Hit); // Function Engine.DebugCameraController.ReceiveOnActorSelected
	void ReceiveOnActivate(struct APlayerController* OriginalPC); // Function Engine.DebugCameraController.ReceiveOnActivate
	struct AActor* GetSelectedActor(); // Function Engine.DebugCameraController.GetSelectedActor
};

// Class Engine.DebugCameraControllerSettings
// Size: 0x48 (Inherited: 0x38)
struct UDebugCameraControllerSettings : public UDeveloperSettings {
	struct TArray<struct FDebugCameraControllerSettingsViewModeIndex> CycleViewModes; // 0x38(0x10)
};

// Class Engine.DecalActor
// Size: 0x228 (Inherited: 0x220)
struct ADecalActor : public AActor {
	struct UDecalComponent* Decal; // 0x220(0x08)

	void SetDecalMaterial(struct UMaterialInterface* NewDecalMaterial); // Function Engine.DecalActor.SetDecalMaterial
	struct UMaterialInterface* GetDecalMaterial(); // Function Engine.DecalActor.GetDecalMaterial
	struct UMaterialInstanceDynamic* CreateDynamicMaterialInstance(); // Function Engine.DecalActor.CreateDynamicMaterialInstance
};

// Class Engine.DemoNetConnection
// Size: 0x1aa0 (Inherited: 0x1a30)
struct UDemoNetConnection : public UNetConnection {
	char UnknownData_1A30[0x70]; // 0x1a30(0x70)
};

// Class Engine.DemoNetDriver
// Size: 0x1120 (Inherited: 0x748)
struct UDemoNetDriver : public UNetDriver {
	char UnknownData_748[0xf8]; // 0x748(0xf8)
	struct TMap<struct FString, struct FRollbackNetStartupActorInfo> RollbackNetStartupActors; // 0x840(0x50)
	char UnknownData_890[0x3c4]; // 0x890(0x3c4)
	float CheckpointSaveMaxMSPerFrame; // 0xc54(0x04)
	char UnknownData_C58[0x30]; // 0xc58(0x30)
	struct TArray<struct FMulticastRecordOptions> MulticastRecordOptions; // 0xc88(0x10)
	char UnknownData_C98[0x50]; // 0xc98(0x50)
	bool bIsLocalReplay; // 0xce8(0x01)
	char UnknownData_CE9[0x7]; // 0xce9(0x07)
	struct TArray<struct APlayerController*> SpectatorControllers; // 0xcf0(0x10)
	char UnknownData_D00[0x420]; // 0xd00(0x420)
};

// Class Engine.PendingNetGame
// Size: 0xc0 (Inherited: 0x28)
struct UPendingNetGame : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct UNetDriver* NetDriver; // 0x30(0x08)
	struct UDemoNetDriver* DemoNetDriver; // 0x38(0x08)
	char UnknownData_40[0x80]; // 0x40(0x80)
};

// Class Engine.TextureLODSettings
// Size: 0x38 (Inherited: 0x28)
struct UTextureLODSettings : public UObject {
	struct TArray<struct FTextureLODGroup> TextureLODGroups; // 0x28(0x10)
};

// Class Engine.DeviceProfile
// Size: 0x98 (Inherited: 0x38)
struct UDeviceProfile : public UTextureLODSettings {
	struct FString DeviceType; // 0x38(0x10)
	struct FString BaseProfileName; // 0x48(0x10)
	struct UObject* Parent; // 0x58(0x08)
	char UnknownData_60[0x18]; // 0x60(0x18)
	struct TArray<struct FString> CVars; // 0x78(0x10)
	char UnknownData_88[0x10]; // 0x88(0x10)
};

// Class Engine.DeviceProfileManager
// Size: 0xb0 (Inherited: 0x28)
struct UDeviceProfileManager : public UObject {
	struct TArray<struct UObject*> Profiles; // 0x28(0x10)
	char UnknownData_38[0x78]; // 0x38(0x78)
};

// Class Engine.DialogueSoundWaveProxy
// Size: 0x178 (Inherited: 0x160)
struct UDialogueSoundWaveProxy : public USoundBase {
	char UnknownData_160[0x18]; // 0x160(0x18)
};

// Class Engine.DialogueVoice
// Size: 0x40 (Inherited: 0x28)
struct UDialogueVoice : public UObject {
	char Gender; // 0x28(0x01)
	char Plurality; // 0x29(0x01)
	char UnknownData_2A[0x2]; // 0x2a(0x02)
	struct FGuid LocalizationGUID; // 0x2c(0x10)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.DialogueWave
// Size: 0x70 (Inherited: 0x28)
struct UDialogueWave : public UObject {
	char bMature : 1; // 0x28(0x01)
	char bOverride_SubtitleOverride : 1; // 0x28(0x01)
	char UnknownData_28_2 : 6; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct FString SpokenText; // 0x30(0x10)
	struct FString SubtitleOverride; // 0x40(0x10)
	struct TArray<struct FDialogueContextMapping> ContextMappings; // 0x50(0x10)
	struct FGuid LocalizationGUID; // 0x60(0x10)
};

// Class Engine.Light
// Size: 0x230 (Inherited: 0x220)
struct ALight : public AActor {
	struct ULightComponent* LightComponent; // 0x220(0x08)
	char bEnabled : 1; // 0x228(0x01)
	char UnknownData_228_1 : 7; // 0x228(0x01)
	char UnknownData_229[0x7]; // 0x229(0x07)

	void ToggleEnabled(); // Function Engine.Light.ToggleEnabled
	void SetLightFunctionScale(struct FVector NewLightFunctionScale); // Function Engine.Light.SetLightFunctionScale
	void SetLightFunctionMaterial(struct UMaterialInterface* NewLightFunctionMaterial); // Function Engine.Light.SetLightFunctionMaterial
	void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance); // Function Engine.Light.SetLightFunctionFadeDistance
	void SetLightColor(struct FLinearColor NewLightColor); // Function Engine.Light.SetLightColor
	void SetEnabled(bool bSetEnabled); // Function Engine.Light.SetEnabled
	void SetCastShadows(bool bNewValue); // Function Engine.Light.SetCastShadows
	void SetBrightness(float NewBrightness); // Function Engine.Light.SetBrightness
	void SetAffectTranslucentLighting(bool bNewValue); // Function Engine.Light.SetAffectTranslucentLighting
	void OnRep_bEnabled(); // Function Engine.Light.OnRep_bEnabled
	bool IsEnabled(); // Function Engine.Light.IsEnabled
	struct FLinearColor GetLightColor(); // Function Engine.Light.GetLightColor
	float GetBrightness(); // Function Engine.Light.GetBrightness
};

// Class Engine.LightComponentBase
// Size: 0x240 (Inherited: 0x210)
struct ULightComponentBase : public USceneComponent {
	struct FGuid LightGuid; // 0x208(0x10)
	float Brightness; // 0x218(0x04)
	float Intensity; // 0x21c(0x04)
	struct FColor LightColor; // 0x220(0x04)
	char bAffectsWorld : 1; // 0x224(0x01)
	char CastShadows : 1; // 0x224(0x01)
	char CastStaticShadows : 1; // 0x224(0x01)
	char CastDynamicShadows : 1; // 0x224(0x01)
	char bAffectTranslucentLighting : 1; // 0x224(0x01)
	char bTransmission : 1; // 0x224(0x01)
	char bCastVolumetricShadow : 1; // 0x224(0x01)
	char bCastDeepShadow : 1; // 0x224(0x01)
	char bCastRaytracedShadow : 1; // 0x225(0x01)
	char bAffectReflection : 1; // 0x225(0x01)
	char bAffectGlobalIllumination : 1; // 0x225(0x01)
	float IndirectLightingIntensity; // 0x228(0x04)
	float VolumetricScatteringIntensity; // 0x22c(0x04)
	int32_t SamplesPerPixel; // 0x230(0x04)
	char UnknownData_239[0x7]; // 0x239(0x07)

	void SetSamplesPerPixel(int32_t NewValue); // Function Engine.LightComponentBase.SetSamplesPerPixel
	void SetCastVolumetricShadow(bool bNewValue); // Function Engine.LightComponentBase.SetCastVolumetricShadow
	void SetCastShadows(bool bNewValue); // Function Engine.LightComponentBase.SetCastShadows
	void SetCastRaytracedShadow(bool bNewValue); // Function Engine.LightComponentBase.SetCastRaytracedShadow
	void SetCastDeepShadow(bool bNewValue); // Function Engine.LightComponentBase.SetCastDeepShadow
	void SetAffectReflection(bool bNewValue); // Function Engine.LightComponentBase.SetAffectReflection
	void SetAffectGlobalIllumination(bool bNewValue); // Function Engine.LightComponentBase.SetAffectGlobalIllumination
	struct FLinearColor GetLightColor(); // Function Engine.LightComponentBase.GetLightColor
};

// Class Engine.LightComponent
// Size: 0x340 (Inherited: 0x240)
struct ULightComponent : public ULightComponentBase {
	float Temperature; // 0x238(0x04)
	float MaxDrawDistance; // 0x23c(0x04)
	float MaxDistanceFadeRange; // 0x240(0x04)
	char bUseTemperature : 1; // 0x244(0x01)
	int32_t ShadowMapChannel; // 0x248(0x04)
	float MinRoughness; // 0x250(0x04)
	float SpecularScale; // 0x254(0x04)
	float ShadowResolutionScale; // 0x258(0x04)
	float ShadowBias; // 0x25c(0x04)
	float ShadowSlopeBias; // 0x260(0x04)
	float ShadowSharpen; // 0x264(0x04)
	float ContactShadowLength; // 0x268(0x04)
	char ContactShadowLengthInWS : 1; // 0x26c(0x01)
	char InverseSquaredFalloff : 1; // 0x26c(0x01)
	char CastTranslucentShadows : 1; // 0x26c(0x01)
	char bCastShadowsFromCinematicObjectsOnly : 1; // 0x26c(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x26c(0x01)
	char bForceCachedShadowsForMovablePrimitives : 1; // 0x26c(0x01)
	char UnknownData_26D[0x3]; // 0x26d(0x03)
	struct FLightingChannels LightingChannels; // 0x270(0x01)
	char UnknownData_271[0x7]; // 0x271(0x07)
	struct UMaterialInterface* LightFunctionMaterial; // 0x278(0x08)
	struct FVector LightFunctionScale; // 0x280(0x0c)
	char UnknownData_28C[0x4]; // 0x28c(0x04)
	struct UTextureLightProfile* IESTexture; // 0x290(0x08)
	char bUseIESBrightness : 1; // 0x298(0x01)
	char UnknownData_298_1 : 7; // 0x298(0x01)
	char UnknownData_299[0x3]; // 0x299(0x03)
	float IESBrightnessScale; // 0x29c(0x04)
	float LightFunctionFadeDistance; // 0x2a0(0x04)
	float DisabledBrightness; // 0x2a4(0x04)
	char bEnableLightShaftBloom : 1; // 0x2a8(0x01)
	char UnknownData_2A8_1 : 7; // 0x2a8(0x01)
	char UnknownData_2A9[0x3]; // 0x2a9(0x03)
	float BloomScale; // 0x2ac(0x04)
	float BloomThreshold; // 0x2b0(0x04)
	float BloomMaxBrightness; // 0x2b4(0x04)
	struct FColor BloomTint; // 0x2b8(0x04)
	bool bUseRayTracedDistanceFieldShadows; // 0x2bc(0x01)
	char UnknownData_2BD[0x3]; // 0x2bd(0x03)
	float RayStartOffsetDepthScale; // 0x2c0(0x04)
	char UnknownData_2C4[0x7c]; // 0x2c4(0x7c)

	void SetVolumetricScatteringIntensity(float NewIntensity); // Function Engine.LightComponent.SetVolumetricScatteringIntensity
	void SetUseIESBrightness(bool bNewValue); // Function Engine.LightComponent.SetUseIESBrightness
	void SetTransmission(bool bNewValue); // Function Engine.LightComponent.SetTransmission
	void SetTemperature(float NewTemperature); // Function Engine.LightComponent.SetTemperature
	void SetSpecularScale(float NewValue); // Function Engine.LightComponent.SetSpecularScale
	void SetShadowSlopeBias(float NewValue); // Function Engine.LightComponent.SetShadowSlopeBias
	void SetShadowBias(float NewValue); // Function Engine.LightComponent.SetShadowBias
	void SetLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2); // Function Engine.LightComponent.SetLightingChannels
	void SetLightFunctionScale(struct FVector NewLightFunctionScale); // Function Engine.LightComponent.SetLightFunctionScale
	void SetLightFunctionMaterial(struct UMaterialInterface* NewLightFunctionMaterial); // Function Engine.LightComponent.SetLightFunctionMaterial
	void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance); // Function Engine.LightComponent.SetLightFunctionFadeDistance
	void SetLightFunctionDisabledBrightness(float NewValue); // Function Engine.LightComponent.SetLightFunctionDisabledBrightness
	void SetLightColor(struct FLinearColor NewLightColor, bool bSRGB); // Function Engine.LightComponent.SetLightColor
	void SetIntensity(float NewIntensity); // Function Engine.LightComponent.SetIntensity
	void SetIndirectLightingIntensity(float NewIntensity); // Function Engine.LightComponent.SetIndirectLightingIntensity
	void SetIESTexture(struct UTextureLightProfile* NewValue); // Function Engine.LightComponent.SetIESTexture
	void SetIESBrightnessScale(float NewValue); // Function Engine.LightComponent.SetIESBrightnessScale
	void SetForceCachedShadowsForMovablePrimitives(bool bNewValue); // Function Engine.LightComponent.SetForceCachedShadowsForMovablePrimitives
	void SetEnableLightShaftBloom(bool bNewValue); // Function Engine.LightComponent.SetEnableLightShaftBloom
	void SetBloomTint(struct FColor NewValue); // Function Engine.LightComponent.SetBloomTint
	void SetBloomThreshold(float NewValue); // Function Engine.LightComponent.SetBloomThreshold
	void SetBloomScale(float NewValue); // Function Engine.LightComponent.SetBloomScale
	void SetBloomMaxBrightness(float NewValue); // Function Engine.LightComponent.SetBloomMaxBrightness
	void SetAffectTranslucentLighting(bool bNewValue); // Function Engine.LightComponent.SetAffectTranslucentLighting
	void SetAffectDynamicIndirectLighting(bool bNewValue); // Function Engine.LightComponent.SetAffectDynamicIndirectLighting
};

// Class Engine.DirectionalLightComponent
// Size: 0x3b0 (Inherited: 0x340)
struct UDirectionalLightComponent : public ULightComponent {
	float ShadowCascadeBiasDistribution; // 0x338(0x04)
	char bEnableLightShaftOcclusion : 1; // 0x33c(0x01)
	float OcclusionMaskDarkness; // 0x340(0x04)
	float OcclusionDepthRange; // 0x344(0x04)
	struct FVector LightShaftOverrideDirection; // 0x348(0x0c)
	float WholeSceneDynamicShadowRadius; // 0x354(0x04)
	float DynamicShadowDistanceMovableLight; // 0x358(0x04)
	float DynamicShadowDistanceStationaryLight; // 0x35c(0x04)
	int32_t DynamicShadowCascades; // 0x360(0x04)
	float CascadeDistributionExponent; // 0x364(0x04)
	float CascadeTransitionFraction; // 0x368(0x04)
	float ShadowDistanceFadeoutFraction; // 0x36c(0x04)
	char bOnlyMovableObjectsInCascades : 1; // 0x370(0x01)
	char bUseInsetShadowsForMovableObjects : 1; // 0x370(0x01)
	int32_t FarShadowCascadeCount; // 0x374(0x04)
	float FarShadowDistance; // 0x378(0x04)
	float DistanceFieldShadowDistance; // 0x37c(0x04)
	float LightSourceAngle; // 0x380(0x04)
	float LightSourceSoftAngle; // 0x384(0x04)
	float TraceDistance; // 0x388(0x04)
	struct FLightmassDirectionalLightSettings LightmassSettings; // 0x38c(0x10)
	char bCastModulatedShadows : 1; // 0x39c(0x01)
	char UnknownData_39C_4 : 4; // 0x39c(0x01)
	char UnknownData_39D[0x3]; // 0x39d(0x03)
	struct FColor ModulatedShadowColor; // 0x3a0(0x04)
	float ShadowAmount; // 0x3a4(0x04)
	char bUsedAsAtmosphereSunLight : 1; // 0x3a8(0x01)
	char UnknownData_3A8_1 : 7; // 0x3a8(0x01)
	char UnknownData_3A9[0x3]; // 0x3a9(0x03)
	int32_t AtmosphereSunLightIndex; // 0x3ac(0x04)

	void SetShadowDistanceFadeoutFraction(float NewValue); // Function Engine.DirectionalLightComponent.SetShadowDistanceFadeoutFraction
	void SetShadowAmount(float NewValue); // Function Engine.DirectionalLightComponent.SetShadowAmount
	void SetOcclusionMaskDarkness(float NewValue); // Function Engine.DirectionalLightComponent.SetOcclusionMaskDarkness
	void SetLightShaftOverrideDirection(struct FVector NewValue); // Function Engine.DirectionalLightComponent.SetLightShaftOverrideDirection
	void SetEnableLightShaftOcclusion(bool bNewValue); // Function Engine.DirectionalLightComponent.SetEnableLightShaftOcclusion
	void SetDynamicShadowDistanceStationaryLight(float NewValue); // Function Engine.DirectionalLightComponent.SetDynamicShadowDistanceStationaryLight
	void SetDynamicShadowDistanceMovableLight(float NewValue); // Function Engine.DirectionalLightComponent.SetDynamicShadowDistanceMovableLight
	void SetDynamicShadowCascades(int32_t NewValue); // Function Engine.DirectionalLightComponent.SetDynamicShadowCascades
	void SetCascadeTransitionFraction(float NewValue); // Function Engine.DirectionalLightComponent.SetCascadeTransitionFraction
	void SetCascadeDistributionExponent(float NewValue); // Function Engine.DirectionalLightComponent.SetCascadeDistributionExponent
};

// Class Engine.DistributionFloat
// Size: 0x38 (Inherited: 0x30)
struct UDistributionFloat : public UDistribution {
	char bCanBeBaked : 1; // 0x30(0x01)
	char UnknownData_30_1 : 1; // 0x30(0x01)
	char bBakedDataSuccesfully : 1; // 0x30(0x01)
	char UnknownData_30_3 : 5; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// Class Engine.DistributionFloatConstant
// Size: 0x40 (Inherited: 0x38)
struct UDistributionFloatConstant : public UDistributionFloat {
	float Constant; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.DistributionFloatConstantCurve
// Size: 0x50 (Inherited: 0x38)
struct UDistributionFloatConstantCurve : public UDistributionFloat {
	struct FInterpCurveFloat ConstantCurve; // 0x38(0x18)
};

// Class Engine.DistributionFloatParameterBase
// Size: 0x60 (Inherited: 0x40)
struct UDistributionFloatParameterBase : public UDistributionFloatConstant {
	struct FName ParameterName; // 0x40(0x08)
	float MinInput; // 0x48(0x04)
	float MaxInput; // 0x4c(0x04)
	float MinOutput; // 0x50(0x04)
	float MaxOutput; // 0x54(0x04)
	char ParamMode; // 0x58(0x01)
	char UnknownData_59[0x7]; // 0x59(0x07)
};

// Class Engine.DistributionFloatUniform
// Size: 0x40 (Inherited: 0x38)
struct UDistributionFloatUniform : public UDistributionFloat {
	float Min; // 0x38(0x04)
	float Max; // 0x3c(0x04)
};

// Class Engine.DistributionFloatUniformCurve
// Size: 0x50 (Inherited: 0x38)
struct UDistributionFloatUniformCurve : public UDistributionFloat {
	struct FInterpCurveVector2D ConstantCurve; // 0x38(0x18)
};

// Class Engine.DistributionVectorConstant
// Size: 0x50 (Inherited: 0x38)
struct UDistributionVectorConstant : public UDistributionVector {
	struct FVector Constant; // 0x38(0x0c)
	char bLockAxes : 1; // 0x44(0x01)
	char UnknownData_44_1 : 7; // 0x44(0x01)
	char UnknownData_45[0x3]; // 0x45(0x03)
	char LockedAxes; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
};

// Class Engine.DistributionVectorConstantCurve
// Size: 0x58 (Inherited: 0x38)
struct UDistributionVectorConstantCurve : public UDistributionVector {
	struct FInterpCurveVector ConstantCurve; // 0x38(0x18)
	char bLockAxes : 1; // 0x50(0x01)
	char UnknownData_50_1 : 7; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	char LockedAxes; // 0x54(0x01)
	char UnknownData_55[0x3]; // 0x55(0x03)
};

// Class Engine.DistributionVectorParameterBase
// Size: 0x90 (Inherited: 0x50)
struct UDistributionVectorParameterBase : public UDistributionVectorConstant {
	struct FName ParameterName; // 0x50(0x08)
	struct FVector MinInput; // 0x58(0x0c)
	struct FVector MaxInput; // 0x64(0x0c)
	struct FVector MinOutput; // 0x70(0x0c)
	struct FVector MaxOutput; // 0x7c(0x0c)
	char ParamModes[0x3]; // 0x88(0x03)
	char UnknownData_8B[0x5]; // 0x8b(0x05)
};

// Class Engine.DistributionVectorUniform
// Size: 0x60 (Inherited: 0x38)
struct UDistributionVectorUniform : public UDistributionVector {
	struct FVector Max; // 0x38(0x0c)
	struct FVector Min; // 0x44(0x0c)
	char bLockAxes : 1; // 0x50(0x01)
	char UnknownData_50_1 : 7; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	char LockedAxes; // 0x54(0x01)
	char MirrorFlags[0x3]; // 0x55(0x03)
	char bUseExtremes : 1; // 0x58(0x01)
	char UnknownData_58_1 : 7; // 0x58(0x01)
	char UnknownData_59[0x7]; // 0x59(0x07)
};

// Class Engine.DistributionVectorUniformCurve
// Size: 0x60 (Inherited: 0x38)
struct UDistributionVectorUniformCurve : public UDistributionVector {
	struct FInterpCurveTwoVectors ConstantCurve; // 0x38(0x18)
	char bLockAxes1 : 1; // 0x50(0x01)
	char bLockAxes2 : 1; // 0x50(0x01)
	char UnknownData_50_2 : 6; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	char LockedAxes[0x2]; // 0x54(0x02)
	char MirrorFlags[0x3]; // 0x56(0x03)
	char UnknownData_59[0x3]; // 0x59(0x03)
	char bUseExtremes : 1; // 0x5c(0x01)
	char UnknownData_5C_1 : 7; // 0x5c(0x01)
	char UnknownData_5D[0x3]; // 0x5d(0x03)
};

// Class Engine.DocumentationActor
// Size: 0x228 (Inherited: 0x220)
struct ADocumentationActor : public AActor {
	char UnknownData_220[0x8]; // 0x220(0x08)
};

// Class Engine.DrawFrustumComponent
// Size: 0x450 (Inherited: 0x430)
struct UDrawFrustumComponent : public UPrimitiveComponent {
	struct FColor FrustumColor; // 0x430(0x04)
	float FrustumAngle; // 0x434(0x04)
	float FrustumAspectRatio; // 0x438(0x04)
	float FrustumStartDist; // 0x43c(0x04)
	float FrustumEndDist; // 0x440(0x04)
	char UnknownData_444[0x4]; // 0x444(0x04)
	struct UTexture* Texture; // 0x448(0x08)
};

// Class Engine.EdGraph
// Size: 0x60 (Inherited: 0x28)
struct UEdGraph : public UObject {
	struct UEdGraphSchema* Schema; // 0x28(0x08)
	struct TArray<struct UEdGraphNode*> Nodes; // 0x30(0x10)
	char bEditable : 1; // 0x40(0x01)
	char bAllowDeletion : 1; // 0x40(0x01)
	char bAllowRenaming : 1; // 0x40(0x01)
	char UnknownData_40_3 : 5; // 0x40(0x01)
	char UnknownData_41[0x1f]; // 0x41(0x1f)
};

// Class Engine.GraphNodeContextMenuContext
// Size: 0x50 (Inherited: 0x28)
struct UGraphNodeContextMenuContext : public UObject {
	struct UBlueprint* Blueprint; // 0x28(0x08)
	struct UEdGraph* Graph; // 0x30(0x08)
	struct UEdGraphNode* Node; // 0x38(0x08)
	char UnknownData_40[0x8]; // 0x40(0x08)
	bool bIsDebugging; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
};

// Class Engine.EdGraphNode
// Size: 0x98 (Inherited: 0x28)
struct UEdGraphNode : public UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
	struct TArray<struct UEdGraphPin_Deprecated*> DeprecatedPins; // 0x38(0x10)
	int32_t NodePosX; // 0x48(0x04)
	int32_t NodePosY; // 0x4c(0x04)
	int32_t NodeWidth; // 0x50(0x04)
	int32_t NodeHeight; // 0x54(0x04)
	char AdvancedPinDisplay; // 0x58(0x01)
	enum class ENodeEnabledState EnabledState; // 0x59(0x01)
	char UnknownData_5A[0x1]; // 0x5a(0x01)
	char UnknownData_5B_0 : 1; // 0x5b(0x01)
	char bDisplayAsDisabled : 1; // 0x5b(0x01)
	char bUserSetEnabledState : 1; // 0x5b(0x01)
	char UnknownData_5B_3 : 1; // 0x5b(0x01)
	char bIsNodeEnabled : 1; // 0x5b(0x01)
	char UnknownData_5B_5 : 1; // 0x5b(0x01)
	char bHasCompilerMessage : 1; // 0x5b(0x01)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
	struct FString NodeComment; // 0x60(0x10)
	int32_t ErrorType; // 0x70(0x04)
	char UnknownData_74[0x4]; // 0x74(0x04)
	struct FString ErrorMsg; // 0x78(0x10)
	struct FGuid NodeGuid; // 0x88(0x10)
};

// Class Engine.EdGraphNode_Documentation
// Size: 0xb8 (Inherited: 0x98)
struct UEdGraphNode_Documentation : public UEdGraphNode {
	struct FString Link; // 0x98(0x10)
	struct FString Excerpt; // 0xa8(0x10)
};

// Class Engine.EdGraphPin_Deprecated
// Size: 0x118 (Inherited: 0x28)
struct UEdGraphPin_Deprecated : public UObject {
	struct FString PinName; // 0x28(0x10)
	struct FString PinToolTip; // 0x38(0x10)
	char Direction; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
	struct FEdGraphPinType PinType; // 0x50(0x58)
	struct FString DefaultValue; // 0xa8(0x10)
	struct FString AutogeneratedDefaultValue; // 0xb8(0x10)
	struct UObject* DefaultObject; // 0xc8(0x08)
	struct FText DefaultTextValue; // 0xd0(0x18)
	struct TArray<struct UEdGraphPin_Deprecated*> LinkedTo; // 0xe8(0x10)
	struct TArray<struct UEdGraphPin_Deprecated*> SubPins; // 0xf8(0x10)
	struct UEdGraphPin_Deprecated* ParentPin; // 0x108(0x08)
	struct UEdGraphPin_Deprecated* ReferencePassThroughConnection; // 0x110(0x08)
};

// Class Engine.Emitter
// Size: 0x270 (Inherited: 0x220)
struct AEmitter : public AActor {
	struct UParticleSystemComponent* ParticleSystemComponent; // 0x220(0x08)
	char bDestroyOnSystemFinish : 1; // 0x228(0x01)
	char bPostUpdateTickGroup : 1; // 0x228(0x01)
	char bCurrentlyActive : 1; // 0x228(0x01)
	char UnknownData_228_3 : 5; // 0x228(0x01)
	char UnknownData_229[0x7]; // 0x229(0x07)
	struct FMulticastInlineDelegate OnParticleSpawn; // 0x230(0x10)
	struct FMulticastInlineDelegate OnParticleBurst; // 0x240(0x10)
	struct FMulticastInlineDelegate OnParticleDeath; // 0x250(0x10)
	struct FMulticastInlineDelegate OnParticleCollide; // 0x260(0x10)

	void ToggleActive(); // Function Engine.Emitter.ToggleActive
	void SetVectorParameter(struct FName ParameterName, struct FVector Param); // Function Engine.Emitter.SetVectorParameter
	void SetTemplate(struct UParticleSystem* NewTemplate); // Function Engine.Emitter.SetTemplate
	void SetMaterialParameter(struct FName ParameterName, struct UMaterialInterface* Param); // Function Engine.Emitter.SetMaterialParameter
	void SetFloatParameter(struct FName ParameterName, float Param); // Function Engine.Emitter.SetFloatParameter
	void SetColorParameter(struct FName ParameterName, struct FLinearColor Param); // Function Engine.Emitter.SetColorParameter
	void SetActorParameter(struct FName ParameterName, struct AActor* Param); // Function Engine.Emitter.SetActorParameter
	void OnRep_bCurrentlyActive(); // Function Engine.Emitter.OnRep_bCurrentlyActive
	void OnParticleSystemFinished(struct UParticleSystemComponent* FinishedComponent); // Function Engine.Emitter.OnParticleSystemFinished
	bool IsActive(); // Function Engine.Emitter.IsActive
	void Deactivate(); // Function Engine.Emitter.Deactivate
	void Activate(); // Function Engine.Emitter.Activate
};

// Class Engine.EmitterCameraLensEffectBase
// Size: 0x2e0 (Inherited: 0x270)
struct AEmitterCameraLensEffectBase : public AEmitter {
	struct UParticleSystem* PS_CameraEffect; // 0x270(0x08)
	struct UParticleSystem* PS_CameraEffectNonExtremeContent; // 0x278(0x08)
	struct APlayerCameraManager* BaseCamera; // 0x280(0x08)
	char UnknownData_288[0x8]; // 0x288(0x08)
	struct FTransform RelativeTransform; // 0x290(0x30)
	float BaseFOV; // 0x2c0(0x04)
	char bAllowMultipleInstances : 1; // 0x2c4(0x01)
	char bResetWhenRetriggered : 1; // 0x2c4(0x01)
	char UnknownData_2C4_2 : 6; // 0x2c4(0x01)
	char UnknownData_2C5[0x3]; // 0x2c5(0x03)
	struct TArray<struct AEmitterCameraLensEffectBase*> EmittersToTreatAsSame; // 0x2c8(0x10)
	float DistFromCamera; // 0x2d8(0x04)
	char UnknownData_2DC[0x4]; // 0x2dc(0x04)
};

// Class Engine.EngineMessage
// Size: 0xa8 (Inherited: 0x28)
struct UEngineMessage : public ULocalMessage {
	struct FString FailedPlaceMessage; // 0x28(0x10)
	struct FString MaxedOutMessage; // 0x38(0x10)
	struct FString EnteredMessage; // 0x48(0x10)
	struct FString LeftMessage; // 0x58(0x10)
	struct FString GlobalNameChange; // 0x68(0x10)
	struct FString SpecEnteredMessage; // 0x78(0x10)
	struct FString NewPlayerMessage; // 0x88(0x10)
	struct FString NewSpecMessage; // 0x98(0x10)
};

// Class Engine.ExponentialHeightFog
// Size: 0x230 (Inherited: 0x220)
struct AExponentialHeightFog : public AInfo {
	struct UExponentialHeightFogComponent* Component; // 0x220(0x08)
	char bEnabled : 1; // 0x228(0x01)
	char UnknownData_228_1 : 7; // 0x228(0x01)
	char UnknownData_229[0x7]; // 0x229(0x07)

	void OnRep_bEnabled(); // Function Engine.ExponentialHeightFog.OnRep_bEnabled
};

// Class Engine.ExponentialHeightFogComponent
// Size: 0x2b0 (Inherited: 0x210)
struct UExponentialHeightFogComponent : public USceneComponent {
	float FogDensity; // 0x208(0x04)
	float FogHeightFalloff; // 0x20c(0x04)
	struct FExponentialHeightFogData SecondFogData; // 0x210(0x0c)
	struct FLinearColor FogInscatteringColor; // 0x21c(0x10)
	struct UTextureCube* InscatteringColorCubemap; // 0x230(0x08)
	float InscatteringColorCubemapAngle; // 0x238(0x04)
	struct FLinearColor InscatteringTextureTint; // 0x23c(0x10)
	float FullyDirectionalInscatteringColorDistance; // 0x24c(0x04)
	float NonDirectionalInscatteringColorDistance; // 0x250(0x04)
	float DirectionalInscatteringExponent; // 0x254(0x04)
	float DirectionalInscatteringStartDistance; // 0x258(0x04)
	struct FLinearColor DirectionalInscatteringColor; // 0x25c(0x10)
	float FogMaxOpacity; // 0x26c(0x04)
	float StartDistance; // 0x270(0x04)
	struct FPerPlatformFloat StartDistancePerPlatformScale; // 0x274(0x04)
	float FogCutoffDistance; // 0x278(0x04)
	bool bEnableVolumetricFog; // 0x27c(0x01)
	float VolumetricFogScatteringDistribution; // 0x280(0x04)
	struct FColor VolumetricFogAlbedo; // 0x284(0x04)
	struct FLinearColor VolumetricFogEmissive; // 0x288(0x10)
	float VolumetricFogExtinctionScale; // 0x298(0x04)
	float VolumetricFogDistance; // 0x29c(0x04)
	float VolumetricFogStaticLightingScatteringIntensity; // 0x2a0(0x04)
	bool bOverrideLightColorsWithFogInscatteringColors; // 0x2a4(0x01)
	char UnknownData_2A6[0xa]; // 0x2a6(0x0a)

	void SetVolumetricFogScatteringDistribution(float NewValue); // Function Engine.ExponentialHeightFogComponent.SetVolumetricFogScatteringDistribution
	void SetVolumetricFogExtinctionScale(float NewValue); // Function Engine.ExponentialHeightFogComponent.SetVolumetricFogExtinctionScale
	void SetVolumetricFogEmissive(struct FLinearColor NewValue); // Function Engine.ExponentialHeightFogComponent.SetVolumetricFogEmissive
	void SetVolumetricFogDistance(float NewValue); // Function Engine.ExponentialHeightFogComponent.SetVolumetricFogDistance
	void SetVolumetricFogAlbedo(struct FColor NewValue); // Function Engine.ExponentialHeightFogComponent.SetVolumetricFogAlbedo
	void SetVolumetricFog(bool bNewValue); // Function Engine.ExponentialHeightFogComponent.SetVolumetricFog
	void SetStartDistance(float Value); // Function Engine.ExponentialHeightFogComponent.SetStartDistance
	void SetNonDirectionalInscatteringColorDistance(float Value); // Function Engine.ExponentialHeightFogComponent.SetNonDirectionalInscatteringColorDistance
	void SetInscatteringTextureTint(struct FLinearColor Value); // Function Engine.ExponentialHeightFogComponent.SetInscatteringTextureTint
	void SetInscatteringColorCubemapAngle(float Value); // Function Engine.ExponentialHeightFogComponent.SetInscatteringColorCubemapAngle
	void SetInscatteringColorCubemap(struct UTextureCube* Value); // Function Engine.ExponentialHeightFogComponent.SetInscatteringColorCubemap
	void SetFullyDirectionalInscatteringColorDistance(float Value); // Function Engine.ExponentialHeightFogComponent.SetFullyDirectionalInscatteringColorDistance
	void SetFogMaxOpacity(float Value); // Function Engine.ExponentialHeightFogComponent.SetFogMaxOpacity
	void SetFogInscatteringColor(struct FLinearColor Value); // Function Engine.ExponentialHeightFogComponent.SetFogInscatteringColor
	void SetFogHeightFalloff(float Value); // Function Engine.ExponentialHeightFogComponent.SetFogHeightFalloff
	void SetFogDensity(float Value); // Function Engine.ExponentialHeightFogComponent.SetFogDensity
	void SetFogCutoffDistance(float Value); // Function Engine.ExponentialHeightFogComponent.SetFogCutoffDistance
	void SetDirectionalInscatteringStartDistance(float Value); // Function Engine.ExponentialHeightFogComponent.SetDirectionalInscatteringStartDistance
	void SetDirectionalInscatteringExponent(float Value); // Function Engine.ExponentialHeightFogComponent.SetDirectionalInscatteringExponent
	void SetDirectionalInscatteringColor(struct FLinearColor Value); // Function Engine.ExponentialHeightFogComponent.SetDirectionalInscatteringColor
};

// Class Engine.Exporter
// Size: 0x78 (Inherited: 0x28)
struct UExporter : public UObject {
	struct UObject* SupportedClass; // 0x28(0x08)
	struct UObject* ExportRootScope; // 0x30(0x08)
	struct TArray<struct FString> FormatExtension; // 0x38(0x10)
	struct TArray<struct FString> FormatDescription; // 0x48(0x10)
	int32_t PreferredFormatIndex; // 0x58(0x04)
	int32_t TextIndent; // 0x5c(0x04)
	char bText : 1; // 0x60(0x01)
	char bSelectedOnly : 1; // 0x60(0x01)
	char bForceFileOperations : 1; // 0x60(0x01)
	char UnknownData_60_3 : 5; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
	struct UAssetExportTask* ExportTask; // 0x68(0x08)
	char UnknownData_70[0x8]; // 0x70(0x08)

	bool ScriptRunAssetExportTask(struct UAssetExportTask* Task); // Function Engine.Exporter.ScriptRunAssetExportTask
	bool RunAssetExportTasks(struct TArray<struct UAssetExportTask*> ExportTasks); // Function Engine.Exporter.RunAssetExportTasks
	bool RunAssetExportTask(struct UAssetExportTask* Task); // Function Engine.Exporter.RunAssetExportTask
};

// Class Engine.FloatingPawnMovement
// Size: 0x150 (Inherited: 0x138)
struct UFloatingPawnMovement : public UPawnMovementComponent {
	float MaxSpeed; // 0x138(0x04)
	float Acceleration; // 0x13c(0x04)
	float Deceleration; // 0x140(0x04)
	float TurningBoost; // 0x144(0x04)
	char bPositionCorrected : 1; // 0x148(0x01)
	char UnknownData_148_1 : 7; // 0x148(0x01)
	char UnknownData_149[0x7]; // 0x149(0x07)
};

// Class Engine.Font
// Size: 0x1d0 (Inherited: 0x28)
struct UFont : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	enum class EFontCacheType FontCacheType; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
	struct TArray<struct FFontCharacter> Characters; // 0x38(0x10)
	struct TArray<struct UTexture2D*> Textures; // 0x48(0x10)
	int32_t IsRemapped; // 0x58(0x04)
	float EmScale; // 0x5c(0x04)
	float Ascent; // 0x60(0x04)
	float Descent; // 0x64(0x04)
	float Leading; // 0x68(0x04)
	int32_t Kerning; // 0x6c(0x04)
	struct FFontImportOptionsData ImportOptions; // 0x70(0xb0)
	int32_t NumCharacters; // 0x120(0x04)
	char UnknownData_124[0x4]; // 0x124(0x04)
	struct TArray<int32_t> MaxCharHeight; // 0x128(0x10)
	float ScalingFactor; // 0x138(0x04)
	int32_t LegacyFontSize; // 0x13c(0x04)
	struct FName LegacyFontName; // 0x140(0x08)
	struct FCompositeFont CompositeFont; // 0x148(0x38)
	char UnknownData_180[0x50]; // 0x180(0x50)
};

// Class Engine.FontFace
// Size: 0x58 (Inherited: 0x28)
struct UFontFace : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct FString SourceFilename; // 0x30(0x10)
	enum class EFontHinting Hinting; // 0x40(0x01)
	enum class EFontLoadingPolicy LoadingPolicy; // 0x41(0x01)
	enum class EFontLayoutMethod LayoutMethod; // 0x42(0x01)
	char UnknownData_43[0x15]; // 0x43(0x15)
};

// Class Engine.FontImportOptions
// Size: 0xd8 (Inherited: 0x28)
struct UFontImportOptions : public UObject {
	struct FFontImportOptionsData Data; // 0x28(0xb0)
};

// Class Engine.ForceFeedbackAttenuation
// Size: 0xd8 (Inherited: 0x28)
struct UForceFeedbackAttenuation : public UObject {
	struct FForceFeedbackAttenuationSettings Attenuation; // 0x28(0xb0)
};

// Class Engine.ForceFeedbackComponent
// Size: 0x2f0 (Inherited: 0x210)
struct UForceFeedbackComponent : public USceneComponent {
	struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x208(0x08)
	char bAutoDestroy : 1; // 0x210(0x01)
	char bStopWhenOwnerDestroyed : 1; // 0x210(0x01)
	char bLooping : 1; // 0x210(0x01)
	char bIgnoreTimeDilation : 1; // 0x210(0x01)
	char bOverrideAttenuation : 1; // 0x210(0x01)
	float IntensityMultiplier; // 0x214(0x04)
	struct UForceFeedbackAttenuation* AttenuationSettings; // 0x218(0x08)
	struct FForceFeedbackAttenuationSettings AttenuationOverrides; // 0x220(0xb0)
	struct FMulticastInlineDelegate OnForceFeedbackFinished; // 0x2d0(0x10)
	char UnknownData_2E4_5 : 3; // 0x2e4(0x01)
	char UnknownData_2E5[0xb]; // 0x2e5(0x0b)

	void Stop(); // Function Engine.ForceFeedbackComponent.Stop
	void SetIntensityMultiplier(float NewIntensityMultiplier); // Function Engine.ForceFeedbackComponent.SetIntensityMultiplier
	void SetForceFeedbackEffect(struct UForceFeedbackEffect* NewForceFeedbackEffect); // Function Engine.ForceFeedbackComponent.SetForceFeedbackEffect
	void Play(float StartTime); // Function Engine.ForceFeedbackComponent.Play
	bool BP_GetAttenuationSettingsToApply(struct FForceFeedbackAttenuationSettings OutAttenuationSettings); // Function Engine.ForceFeedbackComponent.BP_GetAttenuationSettingsToApply
	void AdjustAttenuation(struct FForceFeedbackAttenuationSettings InAttenuationSettings); // Function Engine.ForceFeedbackComponent.AdjustAttenuation
};

// Class Engine.ForceFeedbackEffect
// Size: 0x40 (Inherited: 0x28)
struct UForceFeedbackEffect : public UObject {
	struct TArray<struct FForceFeedbackChannelDetails> ChannelDetails; // 0x28(0x10)
	float Duration; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.GameNetworkManager
// Size: 0x2d0 (Inherited: 0x220)
struct AGameNetworkManager : public AInfo {
	float BadPacketLossThreshold; // 0x220(0x04)
	float SeverePacketLossThreshold; // 0x224(0x04)
	int32_t BadPingThreshold; // 0x228(0x04)
	int32_t SeverePingThreshold; // 0x22c(0x04)
	int32_t AdjustedNetSpeed; // 0x230(0x04)
	float LastNetSpeedUpdateTime; // 0x234(0x04)
	int32_t TotalNetBandwidth; // 0x238(0x04)
	int32_t MinDynamicBandwidth; // 0x23c(0x04)
	int32_t MaxDynamicBandwidth; // 0x240(0x04)
	char bIsStandbyCheckingEnabled : 1; // 0x244(0x01)
	char bHasStandbyCheatTriggered : 1; // 0x244(0x01)
	char UnknownData_244_2 : 6; // 0x244(0x01)
	char UnknownData_245[0x3]; // 0x245(0x03)
	float StandbyRxCheatTime; // 0x248(0x04)
	float StandbyTxCheatTime; // 0x24c(0x04)
	float PercentMissingForRxStandby; // 0x250(0x04)
	float PercentMissingForTxStandby; // 0x254(0x04)
	float PercentForBadPing; // 0x258(0x04)
	float JoinInProgressStandbyWaitTime; // 0x25c(0x04)
	float MoveRepSize; // 0x260(0x04)
	float MAXPOSITIONERRORSQUARED; // 0x264(0x04)
	float MAXNEARZEROVELOCITYSQUARED; // 0x268(0x04)
	float CLIENTADJUSTUPDATECOST; // 0x26c(0x04)
	float MAXCLIENTUPDATEINTERVAL; // 0x270(0x04)
	float MaxClientForcedUpdateDuration; // 0x274(0x04)
	float ServerForcedUpdateHitchThreshold; // 0x278(0x04)
	float ServerForcedUpdateHitchCooldown; // 0x27c(0x04)
	float MaxMoveDeltaTime; // 0x280(0x04)
	float MaxClientSmoothingDeltaTime; // 0x284(0x04)
	float ClientNetSendMoveDeltaTime; // 0x288(0x04)
	float ClientNetSendMoveDeltaTimeThrottled; // 0x28c(0x04)
	float ClientNetSendMoveDeltaTimeStationary; // 0x290(0x04)
	int32_t ClientNetSendMoveThrottleAtNetSpeed; // 0x294(0x04)
	int32_t ClientNetSendMoveThrottleOverPlayerCount; // 0x298(0x04)
	bool ClientAuthorativePosition; // 0x29c(0x01)
	char UnknownData_29D[0x3]; // 0x29d(0x03)
	float ClientErrorUpdateRateLimit; // 0x2a0(0x04)
	float ClientNetCamUpdateDeltaTime; // 0x2a4(0x04)
	float ClientNetCamUpdatePositionLimit; // 0x2a8(0x04)
	bool bMovementTimeDiscrepancyDetection; // 0x2ac(0x01)
	bool bMovementTimeDiscrepancyResolution; // 0x2ad(0x01)
	char UnknownData_2AE[0x2]; // 0x2ae(0x02)
	float MovementTimeDiscrepancyMaxTimeMargin; // 0x2b0(0x04)
	float MovementTimeDiscrepancyMinTimeMargin; // 0x2b4(0x04)
	float MovementTimeDiscrepancyResolutionRate; // 0x2b8(0x04)
	float MovementTimeDiscrepancyDriftAllowance; // 0x2bc(0x04)
	bool bMovementTimeDiscrepancyForceCorrectionsDuringResolution; // 0x2c0(0x01)
	bool bUseDistanceBasedRelevancy; // 0x2c1(0x01)
	char UnknownData_2C2[0xe]; // 0x2c2(0x0e)
};

// Class Engine.GameSession
// Size: 0x238 (Inherited: 0x220)
struct AGameSession : public AInfo {
	int32_t MaxSpectators; // 0x220(0x04)
	int32_t MaxPlayers; // 0x224(0x04)
	int32_t MaxPartySize; // 0x228(0x04)
	char MaxSplitscreensPerConnection; // 0x22c(0x01)
	bool bRequiresPushToTalk; // 0x22d(0x01)
	char UnknownData_22E[0x2]; // 0x22e(0x02)
	struct FName SessionName; // 0x230(0x08)
};

// Class Engine.SpotLight
// Size: 0x238 (Inherited: 0x230)
struct ASpotLight : public ALight {
	struct USpotLightComponent* SpotLightComponent; // 0x230(0x08)

	void SetOuterConeAngle(float NewOuterConeAngle); // Function Engine.SpotLight.SetOuterConeAngle
	void SetInnerConeAngle(float NewInnerConeAngle); // Function Engine.SpotLight.SetInnerConeAngle
};

// Class Engine.HapticFeedbackEffect_Buffer
// Size: 0x68 (Inherited: 0x28)
struct UHapticFeedbackEffect_Buffer : public UHapticFeedbackEffect_Base {
	struct TArray<char> Amplitudes; // 0x28(0x10)
	int32_t SampleRate; // 0x38(0x04)
	char UnknownData_3C[0x2c]; // 0x3c(0x2c)
};

// Class Engine.HapticFeedbackEffect_Curve
// Size: 0x138 (Inherited: 0x28)
struct UHapticFeedbackEffect_Curve : public UHapticFeedbackEffect_Base {
	struct FHapticFeedbackDetails_Curve HapticDetails; // 0x28(0x110)
};

// Class Engine.HapticFeedbackEffect_SoundWave
// Size: 0x60 (Inherited: 0x28)
struct UHapticFeedbackEffect_SoundWave : public UHapticFeedbackEffect_Base {
	struct USoundWave* SoundWave; // 0x28(0x08)
	char UnknownData_30[0x30]; // 0x30(0x30)
};

// Class Engine.HLODProxy
// Size: 0x38 (Inherited: 0x28)
struct UHLODProxy : public UObject {
	struct TArray<struct FHLODProxyMesh> ProxyMeshes; // 0x28(0x10)
};

// Class Engine.InGameAdManager
// Size: 0x60 (Inherited: 0x38)
struct UInGameAdManager : public UPlatformInterfaceBase {
	char bShouldPauseWhileAdOpen : 1; // 0x38(0x01)
	char UnknownData_38_1 : 7; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
	struct TArray<struct FDelegate> ClickedBannerDelegates; // 0x40(0x10)
	struct TArray<struct FDelegate> ClosedAdDelegates; // 0x50(0x10)
};

// Class Engine.InheritableComponentHandler
// Size: 0x48 (Inherited: 0x28)
struct UInheritableComponentHandler : public UObject {
	struct TArray<struct FComponentOverrideRecord> Records; // 0x28(0x10)
	struct TArray<struct UActorComponent*> UnnecessaryComponents; // 0x38(0x10)
};

// Class Engine.InputActionDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UInputActionDelegateBinding : public UInputDelegateBinding {
	struct TArray<struct FBlueprintInputActionDelegateBinding> InputActionDelegateBindings; // 0x28(0x10)
};

// Class Engine.InputAxisDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UInputAxisDelegateBinding : public UInputDelegateBinding {
	struct TArray<struct FBlueprintInputAxisDelegateBinding> InputAxisDelegateBindings; // 0x28(0x10)
};

// Class Engine.InputAxisKeyDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UInputAxisKeyDelegateBinding : public UInputDelegateBinding {
	struct TArray<struct FBlueprintInputAxisKeyDelegateBinding> InputAxisKeyDelegateBindings; // 0x28(0x10)
};

// Class Engine.InputKeyDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UInputKeyDelegateBinding : public UInputDelegateBinding {
	struct TArray<struct FBlueprintInputKeyDelegateBinding> InputKeyDelegateBindings; // 0x28(0x10)
};

// Class Engine.InputSettings
// Size: 0xf0 (Inherited: 0x28)
struct UInputSettings : public UObject {
	struct TArray<struct FInputAxisConfigEntry> AxisConfig; // 0x28(0x10)
	char bAltEnterTogglesFullscreen : 1; // 0x38(0x01)
	char bF11TogglesFullscreen : 1; // 0x38(0x01)
	char bUseMouseForTouch : 1; // 0x38(0x01)
	char bEnableMouseSmoothing : 1; // 0x38(0x01)
	char bEnableFOVScaling : 1; // 0x38(0x01)
	char bCaptureMouseOnLaunch : 1; // 0x38(0x01)
	char bDefaultViewportMouseLock : 1; // 0x38(0x01)
	char bAlwaysShowTouchInterface : 1; // 0x38(0x01)
	char bShowConsoleOnFourFingerTap : 1; // 0x39(0x01)
	char bEnableGestureRecognizer : 1; // 0x39(0x01)
	char UnknownData_39_2 : 6; // 0x39(0x01)
	bool bUseAutocorrect; // 0x3a(0x01)
	char UnknownData_3B[0x5]; // 0x3b(0x05)
	struct TArray<struct FString> ExcludedAutocorrectOS; // 0x40(0x10)
	struct TArray<struct FString> ExcludedAutocorrectCultures; // 0x50(0x10)
	struct TArray<struct FString> ExcludedAutocorrectDeviceModels; // 0x60(0x10)
	enum class EMouseCaptureMode DefaultViewportMouseCaptureMode; // 0x70(0x01)
	enum class EMouseLockMode DefaultViewportMouseLockMode; // 0x71(0x01)
	char UnknownData_72[0x2]; // 0x72(0x02)
	float FOVScale; // 0x74(0x04)
	float DoubleClickTime; // 0x78(0x04)
	char UnknownData_7C[0x4]; // 0x7c(0x04)
	struct TArray<struct FInputActionKeyMapping> ActionMappings; // 0x80(0x10)
	struct TArray<struct FInputAxisKeyMapping> AxisMappings; // 0x90(0x10)
	struct TArray<struct FInputActionSpeechMapping> SpeechMappings; // 0xa0(0x10)
	struct FSoftObjectPath DefaultTouchInterface; // 0xb0(0x18)
	struct FKey ConsoleKey; // 0xc8(0x18)
	struct TArray<struct FKey> ConsoleKeys; // 0xe0(0x10)

	void SaveKeyMappings(); // Function Engine.InputSettings.SaveKeyMappings
	void RemoveAxisMapping(struct FInputAxisKeyMapping KeyMapping, bool bForceRebuildKeymaps); // Function Engine.InputSettings.RemoveAxisMapping
	void RemoveActionMapping(struct FInputActionKeyMapping KeyMapping, bool bForceRebuildKeymaps); // Function Engine.InputSettings.RemoveActionMapping
	struct UInputSettings* GetInputSettings(); // Function Engine.InputSettings.GetInputSettings
	void GetAxisNames(struct TArray<struct FName> AxisNames); // Function Engine.InputSettings.GetAxisNames
	void GetAxisMappingByName(struct FName InAxisName, struct TArray<struct FInputAxisKeyMapping> OutMappings); // Function Engine.InputSettings.GetAxisMappingByName
	void GetActionNames(struct TArray<struct FName> ActionNames); // Function Engine.InputSettings.GetActionNames
	void GetActionMappingByName(struct FName InActionName, struct TArray<struct FInputActionKeyMapping> OutMappings); // Function Engine.InputSettings.GetActionMappingByName
	void ForceRebuildKeymaps(); // Function Engine.InputSettings.ForceRebuildKeymaps
	void AddAxisMapping(struct FInputAxisKeyMapping KeyMapping, bool bForceRebuildKeymaps); // Function Engine.InputSettings.AddAxisMapping
	void AddActionMapping(struct FInputActionKeyMapping KeyMapping, bool bForceRebuildKeymaps); // Function Engine.InputSettings.AddActionMapping
};

// Class Engine.InputTouchDelegateBinding
// Size: 0x38 (Inherited: 0x28)
struct UInputTouchDelegateBinding : public UInputDelegateBinding {
	struct TArray<struct FBlueprintInputTouchDelegateBinding> InputTouchDelegateBindings; // 0x28(0x10)
};

// Class Engine.InterpCurveEdSetup
// Size: 0x40 (Inherited: 0x28)
struct UInterpCurveEdSetup : public UObject {
	struct TArray<struct FCurveEdTab> Tabs; // 0x28(0x10)
	int32_t ActiveTab; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.InterpData
// Size: 0x70 (Inherited: 0x28)
struct UInterpData : public UObject {
	float InterpLength; // 0x28(0x04)
	float PathBuildTime; // 0x2c(0x04)
	struct TArray<struct UInterpGroup*> InterpGroups; // 0x30(0x10)
	struct UInterpCurveEdSetup* CurveEdSetup; // 0x40(0x08)
	float EdSectionStart; // 0x48(0x04)
	float EdSectionEnd; // 0x4c(0x04)
	char bShouldBakeAndPrune : 1; // 0x50(0x01)
	char UnknownData_50_1 : 7; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
	struct UInterpGroupDirector* CachedDirectorGroup; // 0x58(0x08)
	struct TArray<struct FName> AllEventNames; // 0x60(0x10)
};

// Class Engine.InterpFilter
// Size: 0x38 (Inherited: 0x28)
struct UInterpFilter : public UObject {
	struct FString Caption; // 0x28(0x10)
};

// Class Engine.InterpGroup
// Size: 0x50 (Inherited: 0x28)
struct UInterpGroup : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct TArray<struct UInterpTrack*> InterpTracks; // 0x30(0x10)
	struct FName GroupName; // 0x40(0x08)
	struct FColor GroupColor; // 0x48(0x04)
	char bCollapsed : 1; // 0x4c(0x01)
	char bVisible : 1; // 0x4c(0x01)
	char bIsFolder : 1; // 0x4c(0x01)
	char bIsParented : 1; // 0x4c(0x01)
	char bIsSelected : 1; // 0x4c(0x01)
	char UnknownData_4C_5 : 3; // 0x4c(0x01)
	char UnknownData_4D[0x3]; // 0x4d(0x03)
};

// Class Engine.InterpGroupCamera
// Size: 0x60 (Inherited: 0x50)
struct UInterpGroupCamera : public UInterpGroup {
	struct UCameraAnim* CameraAnimInst; // 0x50(0x08)
	float CompressTolerance; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.InterpGroupInst
// Size: 0x48 (Inherited: 0x28)
struct UInterpGroupInst : public UObject {
	struct UInterpGroup* Group; // 0x28(0x08)
	struct AActor* GroupActor; // 0x30(0x08)
	struct TArray<struct UInterpTrackInst*> TrackInst; // 0x38(0x10)
};

// Class Engine.InterpToMovementComponent
// Size: 0x190 (Inherited: 0xf0)
struct UInterpToMovementComponent : public UMovementComponent {
	float Duration; // 0xf0(0x04)
	char bPauseOnImpact : 1; // 0xf4(0x01)
	char UnknownData_F4_1 : 7; // 0xf4(0x01)
	char UnknownData_F5[0x3]; // 0xf5(0x03)
	bool bSweep; // 0xf8(0x01)
	enum class ETeleportType TeleportType; // 0xf9(0x01)
	enum class EInterpToBehaviourType BehaviourType; // 0xfa(0x01)
	bool bCheckIfStillInWorld; // 0xfb(0x01)
	char bForceSubStepping : 1; // 0xfc(0x01)
	char UnknownData_FC_1 : 7; // 0xfc(0x01)
	char UnknownData_FD[0x3]; // 0xfd(0x03)
	struct FMulticastInlineDelegate OnInterpToReverse; // 0x100(0x10)
	struct FMulticastInlineDelegate OnInterpToStop; // 0x110(0x10)
	struct FMulticastInlineDelegate OnWaitBeginDelegate; // 0x120(0x10)
	struct FMulticastInlineDelegate OnWaitEndDelegate; // 0x130(0x10)
	struct FMulticastInlineDelegate OnResetDelegate; // 0x140(0x10)
	float MaxSimulationTimeStep; // 0x150(0x04)
	int32_t MaxSimulationIterations; // 0x154(0x04)
	struct TArray<struct FInterpControlPoint> ControlPoints; // 0x158(0x10)
	char UnknownData_168[0x28]; // 0x168(0x28)

	void StopSimulating(struct FHitResult HitResult); // Function Engine.InterpToMovementComponent.StopSimulating
	void RestartMovement(float InitialDirection); // Function Engine.InterpToMovementComponent.RestartMovement
	void OnInterpToWaitEndDelegate__DelegateSignature(struct FHitResult ImpactResult, float Time); // DelegateFunction Engine.InterpToMovementComponent.OnInterpToWaitEndDelegate__DelegateSignature
	void OnInterpToWaitBeginDelegate__DelegateSignature(struct FHitResult ImpactResult, float Time); // DelegateFunction Engine.InterpToMovementComponent.OnInterpToWaitBeginDelegate__DelegateSignature
	void OnInterpToStopDelegate__DelegateSignature(struct FHitResult ImpactResult, float Time); // DelegateFunction Engine.InterpToMovementComponent.OnInterpToStopDelegate__DelegateSignature
	void OnInterpToReverseDelegate__DelegateSignature(struct FHitResult ImpactResult, float Time); // DelegateFunction Engine.InterpToMovementComponent.OnInterpToReverseDelegate__DelegateSignature
	void OnInterpToResetDelegate__DelegateSignature(struct FHitResult ImpactResult, float Time); // DelegateFunction Engine.InterpToMovementComponent.OnInterpToResetDelegate__DelegateSignature
	void FinaliseControlPoints(); // Function Engine.InterpToMovementComponent.FinaliseControlPoints
};

// Class Engine.InterpTrackAnimControl
// Size: 0xb0 (Inherited: 0x90)
struct UInterpTrackAnimControl : public UInterpTrackFloatBase {
	struct FName SlotName; // 0x90(0x08)
	struct TArray<struct FAnimControlTrackKey> AnimSeqs; // 0x98(0x10)
	char bSkipAnimNotifiers : 1; // 0xa8(0x01)
	char UnknownData_A8_1 : 7; // 0xa8(0x01)
	char UnknownData_A9[0x7]; // 0xa9(0x07)
};

// Class Engine.InterpTrackBoolProp
// Size: 0x88 (Inherited: 0x70)
struct UInterpTrackBoolProp : public UInterpTrack {
	struct TArray<struct FBoolTrackKey> BoolTrack; // 0x70(0x10)
	struct FName PropertyName; // 0x80(0x08)
};

// Class Engine.InterpTrackColorProp
// Size: 0x98 (Inherited: 0x90)
struct UInterpTrackColorProp : public UInterpTrackVectorBase {
	struct FName PropertyName; // 0x90(0x08)
};

// Class Engine.InterpTrackDirector
// Size: 0x88 (Inherited: 0x70)
struct UInterpTrackDirector : public UInterpTrack {
	struct TArray<struct FDirectorTrackCut> CutTrack; // 0x70(0x10)
	char bSimulateCameraCutsOnClients : 1; // 0x80(0x01)
	char UnknownData_80_1 : 7; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)
};

// Class Engine.InterpTrackEvent
// Size: 0x88 (Inherited: 0x70)
struct UInterpTrackEvent : public UInterpTrack {
	struct TArray<struct FEventTrackKey> EventTrack; // 0x70(0x10)
	char bFireEventsWhenForwards : 1; // 0x80(0x01)
	char bFireEventsWhenBackwards : 1; // 0x80(0x01)
	char bFireEventsWhenJumpingForwards : 1; // 0x80(0x01)
	char bUseCustomEventName : 1; // 0x80(0x01)
	char UnknownData_80_4 : 4; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)
};

// Class Engine.InterpTrackFade
// Size: 0xa8 (Inherited: 0x90)
struct UInterpTrackFade : public UInterpTrackFloatBase {
	char bPersistFade : 1; // 0x90(0x01)
	char bFadeAudio : 1; // 0x90(0x01)
	char UnknownData_90_2 : 6; // 0x90(0x01)
	char UnknownData_91[0x3]; // 0x91(0x03)
	struct FLinearColor FadeColor; // 0x94(0x10)
	char UnknownData_A4[0x4]; // 0xa4(0x04)
};

// Class Engine.InterpTrackFloatAnimBPParam
// Size: 0xb0 (Inherited: 0x90)
struct UInterpTrackFloatAnimBPParam : public UInterpTrackFloatBase {
	struct UObject* AnimBlueprintClass; // 0x90(0x08)
	struct UAnimInstance* AnimClass; // 0x98(0x08)
	struct FName ParamName; // 0xa0(0x08)
	char UnknownData_A8[0x8]; // 0xa8(0x08)
};

// Class Engine.InterpTrackFloatMaterialParam
// Size: 0xa8 (Inherited: 0x90)
struct UInterpTrackFloatMaterialParam : public UInterpTrackFloatBase {
	struct TArray<struct UMaterialInterface*> TargetMaterials; // 0x90(0x10)
	struct FName ParamName; // 0xa0(0x08)
};

// Class Engine.InterpTrackFloatParticleParam
// Size: 0x98 (Inherited: 0x90)
struct UInterpTrackFloatParticleParam : public UInterpTrackFloatBase {
	struct FName ParamName; // 0x90(0x08)
};

// Class Engine.InterpTrackFloatProp
// Size: 0x98 (Inherited: 0x90)
struct UInterpTrackFloatProp : public UInterpTrackFloatBase {
	struct FName PropertyName; // 0x90(0x08)
};

// Class Engine.InterpTrackInstAnimControl
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstAnimControl : public UInterpTrackInst {
	float LastUpdatePosition; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// Class Engine.InterpTrackInstProperty
// Size: 0x58 (Inherited: 0x28)
struct UInterpTrackInstProperty : public UInterpTrackInst {
	FieldPathProperty InterpProperty; // 0x28(0x28)
	struct UObject* PropertyOuterObjectInst; // 0x50(0x08)
};

// Class Engine.InterpTrackInstBoolProp
// Size: 0x70 (Inherited: 0x58)
struct UInterpTrackInstBoolProp : public UInterpTrackInstProperty {
	char UnknownData_58[0x10]; // 0x58(0x10)
	bool ResetBool; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
};

// Class Engine.InterpTrackInstColorProp
// Size: 0x68 (Inherited: 0x58)
struct UInterpTrackInstColorProp : public UInterpTrackInstProperty {
	char UnknownData_58[0x8]; // 0x58(0x08)
	struct FColor ResetColor; // 0x60(0x04)
	char UnknownData_64[0x4]; // 0x64(0x04)
};

// Class Engine.InterpTrackInstDirector
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstDirector : public UInterpTrackInst {
	struct AActor* OldViewTarget; // 0x28(0x08)
};

// Class Engine.InterpTrackInstEvent
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstEvent : public UInterpTrackInst {
	float LastUpdatePosition; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// Class Engine.InterpTrackInstFloatAnimBPParam
// Size: 0x40 (Inherited: 0x28)
struct UInterpTrackInstFloatAnimBPParam : public UInterpTrackInst {
	struct UAnimInstance* AnimScriptInstance; // 0x28(0x08)
	float ResetFloat; // 0x30(0x04)
	char UnknownData_34[0xc]; // 0x34(0x0c)
};

// Class Engine.InterpTrackInstFloatMaterialParam
// Size: 0x60 (Inherited: 0x28)
struct UInterpTrackInstFloatMaterialParam : public UInterpTrackInst {
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstances; // 0x28(0x10)
	struct TArray<float> ResetFloats; // 0x38(0x10)
	struct TArray<struct FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x48(0x10)
	struct UInterpTrackFloatMaterialParam* InstancedTrack; // 0x58(0x08)
};

// Class Engine.InterpTrackInstFloatParticleParam
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstFloatParticleParam : public UInterpTrackInst {
	float ResetFloat; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// Class Engine.InterpTrackInstFloatProp
// Size: 0x68 (Inherited: 0x58)
struct UInterpTrackInstFloatProp : public UInterpTrackInstProperty {
	char UnknownData_58[0x8]; // 0x58(0x08)
	float ResetFloat; // 0x60(0x04)
	char UnknownData_64[0x4]; // 0x64(0x04)
};

// Class Engine.InterpTrackInstLinearColorProp
// Size: 0x70 (Inherited: 0x58)
struct UInterpTrackInstLinearColorProp : public UInterpTrackInstProperty {
	char UnknownData_58[0x8]; // 0x58(0x08)
	struct FLinearColor ResetColor; // 0x60(0x10)
};

// Class Engine.InterpTrackInstMove
// Size: 0x40 (Inherited: 0x28)
struct UInterpTrackInstMove : public UInterpTrackInst {
	struct FVector ResetLocation; // 0x28(0x0c)
	struct FRotator ResetRotation; // 0x34(0x0c)
};

// Class Engine.InterpTrackInstParticleReplay
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstParticleReplay : public UInterpTrackInst {
	float LastUpdatePosition; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// Class Engine.InterpTrackInstSlomo
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstSlomo : public UInterpTrackInst {
	float OldTimeDilation; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// Class Engine.InterpTrackInstSound
// Size: 0x38 (Inherited: 0x28)
struct UInterpTrackInstSound : public UInterpTrackInst {
	float LastUpdatePosition; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct UAudioComponent* PlayAudioComp; // 0x30(0x08)
};

// Class Engine.InterpTrackInstToggle
// Size: 0x38 (Inherited: 0x28)
struct UInterpTrackInstToggle : public UInterpTrackInst {
	char Action; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	float LastUpdatePosition; // 0x2c(0x04)
	char bSavedActiveState : 1; // 0x30(0x01)
	char UnknownData_30_1 : 7; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// Class Engine.InterpTrackInstVectorMaterialParam
// Size: 0x60 (Inherited: 0x28)
struct UInterpTrackInstVectorMaterialParam : public UInterpTrackInst {
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstances; // 0x28(0x10)
	struct TArray<struct FVector> ResetVectors; // 0x38(0x10)
	struct TArray<struct FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x48(0x10)
	struct UInterpTrackVectorMaterialParam* InstancedTrack; // 0x58(0x08)
};

// Class Engine.InterpTrackInstVectorProp
// Size: 0x70 (Inherited: 0x58)
struct UInterpTrackInstVectorProp : public UInterpTrackInstProperty {
	char UnknownData_58[0x8]; // 0x58(0x08)
	struct FVector ResetVector; // 0x60(0x0c)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
};

// Class Engine.InterpTrackInstVisibility
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstVisibility : public UInterpTrackInst {
	char Action; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	float LastUpdatePosition; // 0x2c(0x04)
};

// Class Engine.InterpTrackLinearColorBase
// Size: 0x90 (Inherited: 0x70)
struct UInterpTrackLinearColorBase : public UInterpTrack {
	struct FInterpCurveLinearColor LinearColorTrack; // 0x70(0x18)
	float CurveTension; // 0x88(0x04)
	char UnknownData_8C[0x4]; // 0x8c(0x04)
};

// Class Engine.InterpTrackLinearColorProp
// Size: 0x98 (Inherited: 0x90)
struct UInterpTrackLinearColorProp : public UInterpTrackLinearColorBase {
	struct FName PropertyName; // 0x90(0x08)
};

// Class Engine.InterpTrackMove
// Size: 0xc8 (Inherited: 0x70)
struct UInterpTrackMove : public UInterpTrack {
	struct FInterpCurveVector PosTrack; // 0x70(0x18)
	struct FInterpCurveVector EulerTrack; // 0x88(0x18)
	struct FInterpLookupTrack LookupTrack; // 0xa0(0x10)
	struct FName LookAtGroupName; // 0xb0(0x08)
	float LinCurveTension; // 0xb8(0x04)
	float AngCurveTension; // 0xbc(0x04)
	char bUseQuatInterpolation : 1; // 0xc0(0x01)
	char bShowArrowAtKeys : 1; // 0xc0(0x01)
	char bDisableMovement : 1; // 0xc0(0x01)
	char bShowTranslationOnCurveEd : 1; // 0xc0(0x01)
	char bShowRotationOnCurveEd : 1; // 0xc0(0x01)
	char bHide3DTrack : 1; // 0xc0(0x01)
	char UnknownData_C0_6 : 2; // 0xc0(0x01)
	char UnknownData_C1[0x3]; // 0xc1(0x03)
	char RotMode; // 0xc4(0x01)
	char UnknownData_C5[0x3]; // 0xc5(0x03)
};

// Class Engine.InterpTrackMoveAxis
// Size: 0xa8 (Inherited: 0x90)
struct UInterpTrackMoveAxis : public UInterpTrackFloatBase {
	char MoveAxis; // 0x90(0x01)
	char UnknownData_91[0x7]; // 0x91(0x07)
	struct FInterpLookupTrack LookupTrack; // 0x98(0x10)
};

// Class Engine.InterpTrackParticleReplay
// Size: 0x80 (Inherited: 0x70)
struct UInterpTrackParticleReplay : public UInterpTrack {
	struct TArray<struct FParticleReplayTrackKey> TrackKeys; // 0x70(0x10)
};

// Class Engine.InterpTrackSound
// Size: 0xa8 (Inherited: 0x90)
struct UInterpTrackSound : public UInterpTrackVectorBase {
	struct TArray<struct FSoundTrackKey> Sounds; // 0x90(0x10)
	char bPlayOnReverse : 1; // 0xa0(0x01)
	char bContinueSoundOnMatineeEnd : 1; // 0xa0(0x01)
	char bSuppressSubtitles : 1; // 0xa0(0x01)
	char bTreatAsDialogue : 1; // 0xa0(0x01)
	char bAttach : 1; // 0xa0(0x01)
	char UnknownData_A0_5 : 3; // 0xa0(0x01)
	char UnknownData_A1[0x7]; // 0xa1(0x07)
};

// Class Engine.InterpTrackToggle
// Size: 0x88 (Inherited: 0x70)
struct UInterpTrackToggle : public UInterpTrack {
	struct TArray<struct FToggleTrackKey> ToggleTrack; // 0x70(0x10)
	char bActivateSystemEachUpdate : 1; // 0x80(0x01)
	char bActivateWithJustAttachedFlag : 1; // 0x80(0x01)
	char bFireEventsWhenForwards : 1; // 0x80(0x01)
	char bFireEventsWhenBackwards : 1; // 0x80(0x01)
	char bFireEventsWhenJumpingForwards : 1; // 0x80(0x01)
	char UnknownData_80_5 : 3; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)
};

// Class Engine.InterpTrackVectorMaterialParam
// Size: 0xa8 (Inherited: 0x90)
struct UInterpTrackVectorMaterialParam : public UInterpTrackVectorBase {
	struct TArray<struct UMaterialInterface*> TargetMaterials; // 0x90(0x10)
	struct FName ParamName; // 0xa0(0x08)
};

// Class Engine.InterpTrackVectorProp
// Size: 0x98 (Inherited: 0x90)
struct UInterpTrackVectorProp : public UInterpTrackVectorBase {
	struct FName PropertyName; // 0x90(0x08)
};

// Class Engine.InterpTrackVisibility
// Size: 0x88 (Inherited: 0x70)
struct UInterpTrackVisibility : public UInterpTrack {
	struct TArray<struct FVisibilityTrackKey> VisibilityTrack; // 0x70(0x10)
	char bFireEventsWhenForwards : 1; // 0x80(0x01)
	char bFireEventsWhenBackwards : 1; // 0x80(0x01)
	char bFireEventsWhenJumpingForwards : 1; // 0x80(0x01)
	char UnknownData_80_3 : 5; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)
};

// Class Engine.IntSerialization
// Size: 0x50 (Inherited: 0x28)
struct UIntSerialization : public UObject {
	uint16_t UnsignedInt16Variable; // 0x28(0x02)
	char UnknownData_2A[0x2]; // 0x2a(0x02)
	uint32_t UnsignedInt32Variable; // 0x2c(0x04)
	uint64_t UnsignedInt64Variable; // 0x30(0x08)
	int8_t SignedInt8Variable; // 0x38(0x01)
	char UnknownData_39[0x1]; // 0x39(0x01)
	int16_t SignedInt16Variable; // 0x3a(0x02)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	int64_t SignedInt64Variable; // 0x40(0x08)
	char UnsignedInt8Variable; // 0x48(0x01)
	char UnknownData_49[0x3]; // 0x49(0x03)
	int32_t SignedInt32Variable; // 0x4c(0x04)
};

// Class Engine.Layer
// Size: 0x48 (Inherited: 0x28)
struct ULayer : public UObject {
	struct FName LayerName; // 0x28(0x08)
	char bIsVisible : 1; // 0x30(0x01)
	char UnknownData_30_1 : 7; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
	struct TArray<struct FLayerActorStats> ActorStats; // 0x38(0x10)
};

// Class Engine.Level
// Size: 0x288 (Inherited: 0x28)
struct ULevel : public UObject {
	char UnknownData_28[0x90]; // 0x28(0x90)
	struct UWorld* OwningWorld; // 0xb8(0x08)
	struct UModel* Model; // 0xc0(0x08)
	struct TArray<struct UModelComponent*> ModelComponents; // 0xc8(0x10)
	struct ULevelActorContainer* ActorCluster; // 0xd8(0x08)
	int32_t NumTextureStreamingUnbuiltComponents; // 0xe0(0x04)
	int32_t NumTextureStreamingDirtyResources; // 0xe4(0x04)
	struct ALevelScriptActor* LevelScriptActor; // 0xe8(0x08)
	struct ANavigationObjectBase* NavListStart; // 0xf0(0x08)
	struct ANavigationObjectBase* NavListEnd; // 0xf8(0x08)
	struct TArray<struct UNavigationDataChunk*> NavDataChunks; // 0x100(0x10)
	float LightmapTotalSize; // 0x110(0x04)
	float ShadowmapTotalSize; // 0x114(0x04)
	struct TArray<struct FVector> StaticNavigableGeometry; // 0x118(0x10)
	struct TArray<struct FGuid> StreamingTextureGuids; // 0x128(0x10)
	char UnknownData_138[0x98]; // 0x138(0x98)
	struct FGuid LevelBuildDataId; // 0x1d0(0x10)
	struct UMapBuildDataRegistry* MapBuildData; // 0x1e0(0x08)
	struct FIntVector LightBuildLevelOffset; // 0x1e8(0x0c)
	char LightingScenarioQuality; // 0x1f4(0x01)
	char bIsLightingScenario : 1; // 0x1f5(0x01)
	char UnknownData_1F5_1 : 2; // 0x1f5(0x01)
	char bTextureStreamingRotationChanged : 1; // 0x1f5(0x01)
	char bStaticComponentsRegisteredInStreamingManager : 1; // 0x1f5(0x01)
	char bIsVisible : 1; // 0x1f5(0x01)
	char UnknownData_1F5_6 : 2; // 0x1f5(0x01)
	char UnknownData_1F6[0x52]; // 0x1f6(0x52)
	struct AWorldSettings* WorldSettings; // 0x248(0x08)
	char UnknownData_250[0x8]; // 0x250(0x08)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x258(0x10)
	char UnknownData_268[0x10]; // 0x268(0x10)
	struct TArray<struct FReplicatedStaticActorDestructionInfo> DestroyedReplicatedStaticActors; // 0x278(0x10)
};

// Class Engine.LevelActorContainer
// Size: 0x38 (Inherited: 0x28)
struct ULevelActorContainer : public UObject {
	struct TArray<struct AActor*> Actors; // 0x28(0x10)
};

// Class Engine.LevelBounds
// Size: 0x230 (Inherited: 0x220)
struct ALevelBounds : public AActor {
	struct UBoxComponent* BoxComponent; // 0x220(0x08)
	bool bAutoUpdateBounds; // 0x228(0x01)
	char UnknownData_229[0x7]; // 0x229(0x07)
};

// Class Engine.LevelScriptActor
// Size: 0x228 (Inherited: 0x220)
struct ALevelScriptActor : public AActor {
	char bInputEnabled : 1; // 0x220(0x01)
	char UnknownData_220_1 : 7; // 0x220(0x01)
	char UnknownData_221[0x7]; // 0x221(0x07)

	void WorldOriginLocationChanged(struct FIntVector OldOriginLocation, struct FIntVector NewOriginLocation); // Function Engine.LevelScriptActor.WorldOriginLocationChanged
	void SetCinematicMode(bool bCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning); // Function Engine.LevelScriptActor.SetCinematicMode
	bool RemoteEvent(struct FName EventName); // Function Engine.LevelScriptActor.RemoteEvent
	void LevelReset(); // Function Engine.LevelScriptActor.LevelReset
};

// Class Engine.LevelStreaming
// Size: 0x150 (Inherited: 0x28)
struct ULevelStreaming : public UObject {
	struct TSoftObjectPtr<struct UWorld> WorldAsset; // 0x28(0x28)
	struct FName PackageNameToLoad; // 0x50(0x08)
	struct TArray<struct FName> LODPackageNames; // 0x58(0x10)
	char UnknownData_68[0x18]; // 0x68(0x18)
	struct FTransform LevelTransform; // 0x80(0x30)
	char UnknownData_B0[0x4]; // 0xb0(0x04)
	int32_t LevelLODIndex; // 0xb4(0x04)
	int32_t StreamingPriority; // 0xb8(0x04)
	char UnknownData_BC[0x2]; // 0xbc(0x02)
	char UnknownData_BE_0 : 3; // 0xbe(0x01)
	char bShouldBeVisible : 1; // 0xbe(0x01)
	char bShouldBeLoaded : 1; // 0xbe(0x01)
	char bLocked : 1; // 0xbe(0x01)
	char bIsStatic : 1; // 0xbe(0x01)
	char bShouldBlockOnLoad : 1; // 0xbe(0x01)
	char bShouldBlockOnUnload : 1; // 0xbf(0x01)
	char bDisableDistanceStreaming : 1; // 0xbf(0x01)
	char bDrawOnLevelStatusMap : 1; // 0xbf(0x01)
	char UnknownData_BF_3 : 5; // 0xbf(0x01)
	struct FLinearColor LevelColor; // 0xc0(0x10)
	struct TArray<struct ALevelStreamingVolume*> EditorStreamingVolumes; // 0xd0(0x10)
	float MinTimeBetweenVolumeUnloadRequests; // 0xe0(0x04)
	char UnknownData_E4[0x4]; // 0xe4(0x04)
	struct FMulticastInlineDelegate OnLevelLoaded; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnLevelUnloaded; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnLevelShown; // 0x108(0x10)
	struct FMulticastInlineDelegate OnLevelHidden; // 0x118(0x10)
	struct ULevel* LoadedLevel; // 0x128(0x08)
	struct ULevel* PendingUnloadLevel; // 0x130(0x08)
	char UnknownData_138[0x18]; // 0x138(0x18)

	bool ShouldBeLoaded(); // Function Engine.LevelStreaming.ShouldBeLoaded
	void SetShouldBeVisible(bool bInShouldBeVisible); // Function Engine.LevelStreaming.SetShouldBeVisible
	void SetShouldBeLoaded(bool bInShouldBeLoaded); // Function Engine.LevelStreaming.SetShouldBeLoaded
	void SetPriority(int32_t NewPriority); // Function Engine.LevelStreaming.SetPriority
	void SetLevelLODIndex(int32_t LODIndex); // Function Engine.LevelStreaming.SetLevelLODIndex
	bool IsStreamingStatePending(); // Function Engine.LevelStreaming.IsStreamingStatePending
	bool IsLevelVisible(); // Function Engine.LevelStreaming.IsLevelVisible
	bool IsLevelLoaded(); // Function Engine.LevelStreaming.IsLevelLoaded
	struct FName GetWorldAssetPackageFName(); // Function Engine.LevelStreaming.GetWorldAssetPackageFName
	struct ULevel* GetLoadedLevel(); // Function Engine.LevelStreaming.GetLoadedLevel
	struct ALevelScriptActor* GetLevelScriptActor(); // Function Engine.LevelStreaming.GetLevelScriptActor
	struct ULevelStreaming* CreateInstance(struct FString UniqueInstanceName); // Function Engine.LevelStreaming.CreateInstance
};

// Class Engine.LevelStreamingVolume
// Size: 0x270 (Inherited: 0x258)
struct ALevelStreamingVolume : public AVolume {
	struct TArray<struct FName> StreamingLevelNames; // 0x258(0x10)
	char bEditorPreVisOnly : 1; // 0x268(0x01)
	char bDisabled : 1; // 0x268(0x01)
	char UnknownData_268_2 : 6; // 0x268(0x01)
	char UnknownData_269[0x3]; // 0x269(0x03)
	char StreamingUsage; // 0x26c(0x01)
	char UnknownData_26D[0x3]; // 0x26d(0x03)
};

// Class Engine.LightmappedSurfaceCollection
// Size: 0x40 (Inherited: 0x28)
struct ULightmappedSurfaceCollection : public UObject {
	struct UModel* SourceModel; // 0x28(0x08)
	struct TArray<int32_t> Surfaces; // 0x30(0x10)
};

// Class Engine.LightMapTexture2D
// Size: 0xf0 (Inherited: 0xe8)
struct ULightMapTexture2D : public UTexture2D {
	char UnknownData_E8[0x8]; // 0xe8(0x08)
};

// Class Engine.LightmassPortal
// Size: 0x228 (Inherited: 0x220)
struct ALightmassPortal : public AActor {
	struct ULightmassPortalComponent* PortalComponent; // 0x220(0x08)
};

// Class Engine.LightmassPrimitiveSettingsObject
// Size: 0x40 (Inherited: 0x28)
struct ULightmassPrimitiveSettingsObject : public UObject {
	struct FLightmassPrimitiveSettings LightmassSettings; // 0x28(0x18)
};

// Class Engine.LineBatchComponent
// Size: 0x470 (Inherited: 0x430)
struct ULineBatchComponent : public UPrimitiveComponent {
	char UnknownData_430[0x40]; // 0x430(0x40)
};

// Class Engine.LocalLightComponent
// Size: 0x350 (Inherited: 0x340)
struct ULocalLightComponent : public ULightComponent {
	enum class ELightUnits IntensityUnits; // 0x338(0x01)
	float Radius; // 0x33c(0x04)
	float AttenuationRadius; // 0x340(0x04)
	struct FLightmassPointLightSettings LightmassSettings; // 0x344(0x0c)

	void SetIntensityUnits(enum class ELightUnits NewIntensityUnits); // Function Engine.LocalLightComponent.SetIntensityUnits
	void SetAttenuationRadius(float NewRadius); // Function Engine.LocalLightComponent.SetAttenuationRadius
	float GetUnitsConversionFactor(enum class ELightUnits SrcUnits, enum class ELightUnits TargetUnits, float CosHalfConeAngle); // Function Engine.LocalLightComponent.GetUnitsConversionFactor
};

// Class Engine.LODActor
// Size: 0x2a8 (Inherited: 0x220)
struct ALODActor : public AActor {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x220(0x08)
	struct TMap<struct UMaterialInterface*, struct UInstancedStaticMeshComponent*> ImpostersStaticMeshComponents; // 0x228(0x50)
	struct UHLODProxy* Proxy; // 0x278(0x08)
	struct FName Key; // 0x280(0x08)
	float LODDrawDistance; // 0x288(0x04)
	int32_t LODLevel; // 0x28c(0x04)
	struct TArray<struct AActor*> SubActors; // 0x290(0x10)
	char CachedNumHLODLevels; // 0x2a0(0x01)
	char UnknownData_2A1[0x7]; // 0x2a1(0x07)
};

// Class Engine.MapBuildDataRegistry
// Size: 0x238 (Inherited: 0x28)
struct UMapBuildDataRegistry : public UObject {
	char LevelLightingQuality; // 0x28(0x01)
	char LightingScenarioQuality; // 0x29(0x01)
	bool bIsDataStripped; // 0x2a(0x01)
	char UnknownData_2B[0x20d]; // 0x2b(0x20d)
};

// Class Engine.Material
// Size: 0x4f8 (Inherited: 0x88)
struct UMaterial : public UMaterialInterface {
	struct UPhysicalMaterial* PhysMaterial; // 0x88(0x08)
	struct UPhysicalMaterialMask* PhysMaterialMask; // 0x90(0x08)
	struct UPhysicalMaterial* PhysicalMaterialMap[0x8]; // 0x98(0x40)
	struct FScalarMaterialInput Metallic; // 0xd8(0x0c)
	char UnknownData_E4[0x8]; // 0xe4(0x08)
	struct FScalarMaterialInput Specular; // 0xec(0x0c)
	char UnknownData_F8[0x8]; // 0xf8(0x08)
	struct FScalarMaterialInput Anisotropy; // 0x100(0x0c)
	char UnknownData_10C[0x8]; // 0x10c(0x08)
	struct FVectorMaterialInput Normal; // 0x114(0x0c)
	char UnknownData_120[0x8]; // 0x120(0x08)
	struct FVectorMaterialInput Tangent; // 0x128(0x0c)
	char UnknownData_134[0x8]; // 0x134(0x08)
	struct FColorMaterialInput EmissiveColor; // 0x13c(0x0c)
	char UnknownData_148[0x8]; // 0x148(0x08)
	char MaterialDomain; // 0x150(0x01)
	char BlendMode; // 0x151(0x01)
	char DecalBlendMode; // 0x152(0x01)
	char MaterialDecalResponse; // 0x153(0x01)
	char ShadingModel; // 0x154(0x01)
	char bCastDynamicShadowAsMasked : 1; // 0x155(0x01)
	char UnknownData_155_1 : 7; // 0x155(0x01)
	struct FMaterialShadingModelField ShadingModels; // 0x156(0x02)
	float OpacityMaskClipValue; // 0x158(0x04)
	struct FVectorMaterialInput WorldPositionOffset; // 0x15c(0x0c)
	char UnknownData_168[0x8]; // 0x168(0x08)
	struct FScalarMaterialInput Refraction; // 0x170(0x0c)
	char UnknownData_17C[0x8]; // 0x17c(0x08)
	struct FMaterialAttributesInput MaterialAttributes; // 0x184(0x10)
	char UnknownData_194[0x8]; // 0x194(0x08)
	struct FScalarMaterialInput PixelDepthOffset; // 0x19c(0x0c)
	char UnknownData_1A8[0x8]; // 0x1a8(0x08)
	struct FShadingModelMaterialInput ShadingModelFromMaterialExpression; // 0x1b0(0x0c)
	char UnknownData_1BC[0x8]; // 0x1bc(0x08)
	char bEnableTranslucencyAfterRefraction : 1; // 0x1c4(0x01)
	char UnknownData_1C4_1 : 7; // 0x1c4(0x01)
	char UnknownData_1C5[0x3]; // 0x1c5(0x03)
	char bEnableSeparateTranslucency : 1; // 0x1c8(0x01)
	char bEnableResponsiveAA : 1; // 0x1c8(0x01)
	char bScreenSpaceReflections : 1; // 0x1c8(0x01)
	char bContactShadows : 1; // 0x1c8(0x01)
	char TwoSided : 1; // 0x1c8(0x01)
	char DitheredLODTransition : 1; // 0x1c8(0x01)
	char DitherOpacityMask : 1; // 0x1c8(0x01)
	char bAllowNegativeEmissiveColor : 1; // 0x1c8(0x01)
	char TranslucencyLightingMode; // 0x1c9(0x01)
	char bEnableMobileSeparateTranslucency : 1; // 0x1ca(0x01)
	char UnknownData_1CA_1 : 7; // 0x1ca(0x01)
	char UnknownData_1CB[0x1]; // 0x1cb(0x01)
	int32_t NumCustomizedUVs; // 0x1cc(0x04)
	float TranslucencyDirectionalLightingIntensity; // 0x1d0(0x04)
	float TranslucentShadowDensityScale; // 0x1d4(0x04)
	float TranslucentSelfShadowDensityScale; // 0x1d8(0x04)
	float TranslucentSelfShadowSecondDensityScale; // 0x1dc(0x04)
	float TranslucentSelfShadowSecondOpacity; // 0x1e0(0x04)
	float TranslucentBackscatteringExponent; // 0x1e4(0x04)
	struct FLinearColor TranslucentMultipleScatteringExtinction; // 0x1e8(0x10)
	float TranslucentShadowStartOffset; // 0x1f8(0x04)
	char bDisableDepthTest : 1; // 0x1fc(0x01)
	char bWriteOnlyAlpha : 1; // 0x1fc(0x01)
	char bGenerateSphericalParticleNormals : 1; // 0x1fc(0x01)
	char bTangentSpaceNormal : 1; // 0x1fc(0x01)
	char bUseEmissiveForDynamicAreaLighting : 1; // 0x1fc(0x01)
	char bBlockGI : 1; // 0x1fc(0x01)
	char bUsedAsSpecialEngineMaterial : 1; // 0x1fc(0x01)
	char bUsedWithSkeletalMesh : 1; // 0x1fc(0x01)
	char bUsedWithEditorCompositing : 1; // 0x1fd(0x01)
	char bUsedWithParticleSprites : 1; // 0x1fd(0x01)
	char bUsedWithBeamTrails : 1; // 0x1fd(0x01)
	char bUsedWithMeshParticles : 1; // 0x1fd(0x01)
	char bUsedWithNiagaraSprites : 1; // 0x1fd(0x01)
	char bUsedWithNiagaraRibbons : 1; // 0x1fd(0x01)
	char bUsedWithNiagaraMeshParticles : 1; // 0x1fd(0x01)
	char bUsedWithGeometryCache : 1; // 0x1fd(0x01)
	char bUsedWithStaticLighting : 1; // 0x1fe(0x01)
	char bUsedWithMorphTargets : 1; // 0x1fe(0x01)
	char bUsedWithSplineMeshes : 1; // 0x1fe(0x01)
	char bUsedWithInstancedStaticMeshes : 1; // 0x1fe(0x01)
	char bUsedWithGeometryCollections : 1; // 0x1fe(0x01)
	char bUsesDistortion : 1; // 0x1fe(0x01)
	char bUsedWithClothing : 1; // 0x1fe(0x01)
	char UnknownData_1FF[0x1]; // 0x1ff(0x01)
	char bUsedWithWater : 1; // 0x200(0x01)
	char bUsedWithHairStrands : 1; // 0x200(0x01)
	char bUsedWithLidarPointCloud : 1; // 0x200(0x01)
	char UnknownData_200_3 : 5; // 0x200(0x01)
	char UnknownData_201[0x3]; // 0x201(0x03)
	char bUsedWithUI : 1; // 0x204(0x01)
	char bAutomaticallySetUsageInEditor : 1; // 0x204(0x01)
	char bFullyRough : 1; // 0x204(0x01)
	char bUseFullPrecision : 1; // 0x204(0x01)
	char bUseLightmapDirectionality : 1; // 0x204(0x01)
	char UnknownData_204_5 : 3; // 0x204(0x01)
	char UnknownData_205[0x3]; // 0x205(0x03)
	char bForwardRenderUsePreintegratedGFForSimpleIBL : 1; // 0x208(0x01)
	char bUseHalfRateCheckerboardRendering : 1; // 0x208(0x01)
	char bOnlyDirectionalLighting : 1; // 0x208(0x01)
	char UnknownData_208_3 : 5; // 0x208(0x01)
	char UnknownData_209[0x3]; // 0x209(0x03)
	char bUseHQForwardReflections : 1; // 0x20c(0x01)
	char UnknownData_20C_1 : 7; // 0x20c(0x01)
	char UnknownData_20D[0x3]; // 0x20d(0x03)
	char bUseHQForwardReflectionsOnLowEnd : 1; // 0x210(0x01)
	char UnknownData_210_1 : 7; // 0x210(0x01)
	char UnknownData_211[0x3]; // 0x211(0x03)
	char bUsePlanarForwardReflections : 1; // 0x214(0x01)
	char bNormalCurvatureToRoughness : 1; // 0x214(0x01)
	char UnknownData_214_2 : 6; // 0x214(0x01)
	char D3D11TessellationMode; // 0x215(0x01)
	char bEnableCrackFreeDisplacement : 1; // 0x216(0x01)
	char bEnableAdaptiveTessellation : 1; // 0x216(0x01)
	char AllowTranslucentCustomDepthWrites : 1; // 0x216(0x01)
	char Wireframe : 1; // 0x216(0x01)
	char UnknownData_216_4 : 4; // 0x216(0x01)
	char ShadingRate; // 0x217(0x01)
	char bCanMaskedBeAssumedOpaque : 1; // 0x218(0x01)
	char bIsMasked : 1; // 0x218(0x01)
	char bIsPreviewMaterial : 1; // 0x218(0x01)
	char bIsFunctionPreviewMaterial : 1; // 0x218(0x01)
	char bUseMaterialAttributes : 1; // 0x218(0x01)
	char bCastRayTracedShadows : 1; // 0x218(0x01)
	char bUseTranslucencyVertexFog : 1; // 0x218(0x01)
	char bIsSky : 1; // 0x218(0x01)
	char bComputeFogPerPixel : 1; // 0x219(0x01)
	char bOutputTranslucentVelocity : 1; // 0x219(0x01)
	char bAllowDevelopmentShaderCompile : 1; // 0x219(0x01)
	char bIsMaterialEditorStatsMaterial : 1; // 0x219(0x01)
	char UnknownData_219_4 : 4; // 0x219(0x01)
	char BlendableLocation; // 0x21a(0x01)
	char BlendableOutputAlpha : 1; // 0x21b(0x01)
	char bEnableStencilTest : 1; // 0x21b(0x01)
	char UnknownData_21B_2 : 6; // 0x21b(0x01)
	char StencilCompare; // 0x21c(0x01)
	char StencilRefValue; // 0x21d(0x01)
	char RefractionMode; // 0x21e(0x01)
	char UnknownData_21F[0x1]; // 0x21f(0x01)
	int32_t BlendablePriority; // 0x220(0x04)
	char bIsBlendable : 1; // 0x224(0x01)
	char UnknownData_224_1 : 7; // 0x224(0x01)
	char UnknownData_225[0x3]; // 0x225(0x03)
	uint32_t UsageFlagWarnings; // 0x228(0x04)
	float RefractionDepthBias; // 0x22c(0x04)
	struct FGuid StateId; // 0x230(0x10)
	float MaxDisplacement; // 0x240(0x04)
	char UnknownData_244[0x8c]; // 0x244(0x8c)
	struct FMaterialCachedExpressionData CachedExpressionData; // 0x2d0(0x228)
};

// Class Engine.MaterialBillboardComponent
// Size: 0x440 (Inherited: 0x430)
struct UMaterialBillboardComponent : public UPrimitiveComponent {
	struct TArray<struct FMaterialSpriteElement> Elements; // 0x430(0x10)

	void SetElements(struct TArray<struct FMaterialSpriteElement> NewElements); // Function Engine.MaterialBillboardComponent.SetElements
	void AddElement(struct UMaterialInterface* Material, struct UCurveFloat* DistanceToOpacityCurve, bool bSizeIsInScreenSpace, float BaseSizeX, float BaseSizeY, struct UCurveFloat* DistanceToSizeCurve); // Function Engine.MaterialBillboardComponent.AddElement
};

// Class Engine.MaterialExpressionAbs
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionAbs : public UMaterialExpression {
	struct FExpressionInput Input; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionAdd
// Size: 0x70 (Inherited: 0x40)
struct UMaterialExpressionAdd : public UMaterialExpression {
	struct FExpressionInput A; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput B; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
	float ConstA; // 0x68(0x04)
	float ConstB; // 0x6c(0x04)
};

// Class Engine.MaterialExpressionTextureBase
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionTextureBase : public UMaterialExpression {
	struct UTexture* Texture; // 0x40(0x08)
	char SamplerType; // 0x48(0x01)
	char IsDefaultMeshpaintTexture : 1; // 0x49(0x01)
	char UnknownData_49_1 : 7; // 0x49(0x01)
	char UnknownData_4A[0x6]; // 0x4a(0x06)
};

// Class Engine.MaterialExpressionTextureSample
// Size: 0xd0 (Inherited: 0x50)
struct UMaterialExpressionTextureSample : public UMaterialExpressionTextureBase {
	struct FExpressionInput Coordinates; // 0x50(0x0c)
	char UnknownData_5C[0x8]; // 0x5c(0x08)
	struct FExpressionInput TextureObject; // 0x64(0x0c)
	char UnknownData_70[0x8]; // 0x70(0x08)
	struct FExpressionInput MipValue; // 0x78(0x0c)
	char UnknownData_84[0x8]; // 0x84(0x08)
	struct FExpressionInput CoordinatesDX; // 0x8c(0x0c)
	char UnknownData_98[0x8]; // 0x98(0x08)
	struct FExpressionInput CoordinatesDY; // 0xa0(0x0c)
	char UnknownData_AC[0x8]; // 0xac(0x08)
	struct FExpressionInput AutomaticViewMipBiasValue; // 0xb4(0x0c)
	char UnknownData_C0[0x8]; // 0xc0(0x08)
	char MipValueMode; // 0xc8(0x01)
	char SamplerSource; // 0xc9(0x01)
	char AutomaticViewMipBias : 1; // 0xca(0x01)
	char UnknownData_CA_1 : 7; // 0xca(0x01)
	char ConstCoordinate; // 0xcb(0x01)
	int32_t ConstMipValue; // 0xcc(0x04)
};

// Class Engine.MaterialExpressionTextureSampleParameter
// Size: 0xf0 (Inherited: 0xd0)
struct UMaterialExpressionTextureSampleParameter : public UMaterialExpressionTextureSample {
	struct FName ParameterName; // 0xd0(0x08)
	struct FGuid ExpressionGUID; // 0xd8(0x10)
	struct FName Group; // 0xe8(0x08)
};

// Class Engine.MaterialExpressionAntialiasedTextureMask
// Size: 0xf8 (Inherited: 0xf0)
struct UMaterialExpressionAntialiasedTextureMask : public UMaterialExpressionTextureSampleParameter2D {
	float Threshold; // 0xf0(0x04)
	char Channel; // 0xf4(0x01)
	char UnknownData_F5[0x3]; // 0xf5(0x03)
};

// Class Engine.MaterialExpressionAppendVector
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionAppendVector : public UMaterialExpression {
	struct FExpressionInput A; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput B; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
};

// Class Engine.MaterialExpressionArccosine
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionArccosine : public UMaterialExpression {
	struct FExpressionInput Input; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionArccosineFast
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionArccosineFast : public UMaterialExpression {
	struct FExpressionInput Input; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionArcsine
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionArcsine : public UMaterialExpression {
	struct FExpressionInput Input; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionArcsineFast
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionArcsineFast : public UMaterialExpression {
	struct FExpressionInput Input; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionArctangent
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionArctangent : public UMaterialExpression {
	struct FExpressionInput Input; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionArctangent2
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionArctangent2 : public UMaterialExpression {
	struct FExpressionInput Y; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput X; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
};

// Class Engine.MaterialExpressionArctangent2Fast
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionArctangent2Fast : public UMaterialExpression {
	struct FExpressionInput Y; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput X; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
};

// Class Engine.MaterialExpressionArctangentFast
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionArctangentFast : public UMaterialExpression {
	struct FExpressionInput Input; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionAtmosphericFogColor
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionAtmosphericFogColor : public UMaterialExpression {
	struct FExpressionInput WorldPosition; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionBentNormalCustomOutput
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionBentNormalCustomOutput : public UMaterialExpressionCustomOutput {
	struct FExpressionInput Input; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionBlackBody
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionBlackBody : public UMaterialExpression {
	struct FExpressionInput Temp; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionBlendMaterialAttributes
// Size: 0x88 (Inherited: 0x40)
struct UMaterialExpressionBlendMaterialAttributes : public UMaterialExpression {
	struct FMaterialAttributesInput A; // 0x40(0x10)
	char UnknownData_50[0x8]; // 0x50(0x08)
	struct FMaterialAttributesInput B; // 0x58(0x10)
	char UnknownData_68[0x8]; // 0x68(0x08)
	struct FExpressionInput Alpha; // 0x70(0x0c)
	char UnknownData_7C[0x8]; // 0x7c(0x08)
	char PixelAttributeBlendType; // 0x84(0x01)
	char VertexAttributeBlendType; // 0x85(0x01)
	char UnknownData_86[0x2]; // 0x86(0x02)
};

// Class Engine.MaterialExpressionBlurredNormalCustomOutput
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionBlurredNormalCustomOutput : public UMaterialExpressionCustomOutput {
	struct FExpressionInput Input; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionBreakMaterialAttributes
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionBreakMaterialAttributes : public UMaterialExpression {
	struct FMaterialAttributesInput MaterialAttributes; // 0x40(0x10)
	char UnknownData_50[0x8]; // 0x50(0x08)
};

// Class Engine.MaterialExpressionBumpOffset
// Size: 0x88 (Inherited: 0x40)
struct UMaterialExpressionBumpOffset : public UMaterialExpression {
	struct FExpressionInput Coordinate; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput Height; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
	struct FExpressionInput HeightRatioInput; // 0x68(0x0c)
	char UnknownData_74[0x8]; // 0x74(0x08)
	float HeightRatio; // 0x7c(0x04)
	float ReferencePlane; // 0x80(0x04)
	uint32_t ConstCoordinate; // 0x84(0x04)
};

// Class Engine.MaterialExpressionCeil
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionCeil : public UMaterialExpression {
	struct FExpressionInput Input; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionParameter
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionParameter : public UMaterialExpression {
	struct FName ParameterName; // 0x40(0x08)
	struct FGuid ExpressionGUID; // 0x48(0x10)
};

// Class Engine.MaterialExpressionVectorParameter
// Size: 0x70 (Inherited: 0x58)
struct UMaterialExpressionVectorParameter : public UMaterialExpressionParameter {
	struct FLinearColor DefaultValue; // 0x58(0x10)
	bool bUseCustomPrimitiveData; // 0x68(0x01)
	char PrimitiveDataIndex; // 0x69(0x01)
	char UnknownData_6A[0x6]; // 0x6a(0x06)
};

// Class Engine.MaterialExpressionChannelMaskParameter
// Size: 0x88 (Inherited: 0x70)
struct UMaterialExpressionChannelMaskParameter : public UMaterialExpressionVectorParameter {
	char MaskChannel; // 0x70(0x01)
	char UnknownData_71[0x3]; // 0x71(0x03)
	struct FExpressionInput Input; // 0x74(0x0c)
	char UnknownData_80[0x8]; // 0x80(0x08)
};

// Class Engine.MaterialExpressionClamp
// Size: 0x88 (Inherited: 0x40)
struct UMaterialExpressionClamp : public UMaterialExpression {
	struct FExpressionInput Input; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput Min; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
	struct FExpressionInput Max; // 0x68(0x0c)
	char UnknownData_74[0x8]; // 0x74(0x08)
	char ClampMode; // 0x7c(0x01)
	char UnknownData_7D[0x3]; // 0x7d(0x03)
	float MinDefault; // 0x80(0x04)
	float MaxDefault; // 0x84(0x04)
};

// Class Engine.MaterialExpressionClearCoatNormalCustomOutput
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionClearCoatNormalCustomOutput : public UMaterialExpressionCustomOutput {
	struct FExpressionInput Input; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionCollectionParameter
// Size: 0x60 (Inherited: 0x40)
struct UMaterialExpressionCollectionParameter : public UMaterialExpression {
	struct UMaterialParameterCollection* Collection; // 0x40(0x08)
	struct FName ParameterName; // 0x48(0x08)
	struct FGuid ParameterId; // 0x50(0x10)
};

// Class Engine.MaterialExpressionComment
// Size: 0x70 (Inherited: 0x40)
struct UMaterialExpressionComment : public UMaterialExpression {
	int32_t SizeX; // 0x40(0x04)
	int32_t SizeY; // 0x44(0x04)
	struct FString Text; // 0x48(0x10)
	struct FLinearColor CommentColor; // 0x58(0x10)
	int32_t FontSize; // 0x68(0x04)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
};

// Class Engine.MaterialExpressionComponentMask
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionComponentMask : public UMaterialExpression {
	struct FExpressionInput Input; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	char R : 1; // 0x54(0x01)
	char G : 1; // 0x54(0x01)
	char B : 1; // 0x54(0x01)
	char A : 1; // 0x54(0x01)
	char UnknownData_54_4 : 4; // 0x54(0x01)
	char UnknownData_55[0x3]; // 0x55(0x03)
};

// Class Engine.MaterialExpressionConstant
// Size: 0x48 (Inherited: 0x40)
struct UMaterialExpressionConstant : public UMaterialExpression {
	float R; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
};

// Class Engine.MaterialExpressionConstant2Vector
// Size: 0x48 (Inherited: 0x40)
struct UMaterialExpressionConstant2Vector : public UMaterialExpression {
	float R; // 0x40(0x04)
	float G; // 0x44(0x04)
};

// Class Engine.MaterialExpressionConstant3Vector
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionConstant3Vector : public UMaterialExpression {
	struct FLinearColor Constant; // 0x40(0x10)
};

// Class Engine.MaterialExpressionConstant4Vector
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionConstant4Vector : public UMaterialExpression {
	struct FLinearColor Constant; // 0x40(0x10)
};

// Class Engine.MaterialExpressionConstantBiasScale
// Size: 0x60 (Inherited: 0x40)
struct UMaterialExpressionConstantBiasScale : public UMaterialExpression {
	struct FExpressionInput Input; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	float Bias; // 0x54(0x04)
	float Scale; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.MaterialExpressionCosine
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionCosine : public UMaterialExpression {
	struct FExpressionInput Input; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	float Period; // 0x54(0x04)
};

// Class Engine.MaterialExpressionCrossProduct
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionCrossProduct : public UMaterialExpression {
	struct FExpressionInput A; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput B; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
};

// Class Engine.MaterialExpressionScalarParameter
// Size: 0x60 (Inherited: 0x58)
struct UMaterialExpressionScalarParameter : public UMaterialExpressionParameter {
	float DefaultValue; // 0x58(0x04)
	bool bUseCustomPrimitiveData; // 0x5c(0x01)
	char PrimitiveDataIndex; // 0x5d(0x01)
	char UnknownData_5E[0x2]; // 0x5e(0x02)
};

// Class Engine.MaterialExpressionCurveAtlasRowParameter
// Size: 0x88 (Inherited: 0x60)
struct UMaterialExpressionCurveAtlasRowParameter : public UMaterialExpressionScalarParameter {
	struct UCurveLinearColor* Curve; // 0x60(0x08)
	struct UCurveLinearColorAtlas* Atlas; // 0x68(0x08)
	struct FExpressionInput InputTime; // 0x70(0x0c)
	char UnknownData_7C[0xc]; // 0x7c(0x0c)
};

// Class Engine.MaterialExpressionCustom
// Size: 0x98 (Inherited: 0x40)
struct UMaterialExpressionCustom : public UMaterialExpression {
	struct FString Code; // 0x40(0x10)
	char OutputType; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
	struct FString Description; // 0x58(0x10)
	struct TArray<struct FCustomInput> Inputs; // 0x68(0x10)
	struct TArray<struct FCustomDefine> AdditionalDefines; // 0x78(0x10)
	struct TArray<struct FString> IncludeFilePaths; // 0x88(0x10)
};

// Class Engine.MaterialExpressionDDX
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionDDX : public UMaterialExpression {
	struct FExpressionInput Value; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionDDY
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionDDY : public UMaterialExpression {
	struct FExpressionInput Value; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionDecalMipmapLevel
// Size: 0x60 (Inherited: 0x40)
struct UMaterialExpressionDecalMipmapLevel : public UMaterialExpression {
	struct FExpressionInput TextureSize; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	float ConstWidth; // 0x54(0x04)
	float ConstHeight; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.MaterialExpressionDepthFade
// Size: 0x70 (Inherited: 0x40)
struct UMaterialExpressionDepthFade : public UMaterialExpression {
	struct FExpressionInput InOpacity; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput FadeDistance; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
	float OpacityDefault; // 0x68(0x04)
	float FadeDistanceDefault; // 0x6c(0x04)
};

// Class Engine.MaterialExpressionDepthOfFieldFunction
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionDepthOfFieldFunction : public UMaterialExpression {
	char FunctionValue; // 0x40(0x01)
	char UnknownData_41[0x3]; // 0x41(0x03)
	struct FExpressionInput Depth; // 0x44(0x0c)
	char UnknownData_50[0x8]; // 0x50(0x08)
};

// Class Engine.MaterialExpressionDeriveNormalZ
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionDeriveNormalZ : public UMaterialExpression {
	struct FExpressionInput InXY; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionDesaturation
// Size: 0x78 (Inherited: 0x40)
struct UMaterialExpressionDesaturation : public UMaterialExpression {
	struct FExpressionInput Input; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput Fraction; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
	struct FLinearColor LuminanceFactors; // 0x68(0x10)
};

// Class Engine.MaterialExpressionDistance
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionDistance : public UMaterialExpression {
	struct FExpressionInput A; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput B; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
};

// Class Engine.MaterialExpressionDistanceFieldGradient
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionDistanceFieldGradient : public UMaterialExpression {
	struct FExpressionInput Position; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionDistanceToNearestSurface
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionDistanceToNearestSurface : public UMaterialExpression {
	struct FExpressionInput Position; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionDivide
// Size: 0x70 (Inherited: 0x40)
struct UMaterialExpressionDivide : public UMaterialExpression {
	struct FExpressionInput A; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput B; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
	float ConstA; // 0x68(0x04)
	float ConstB; // 0x6c(0x04)
};

// Class Engine.MaterialExpressionDotProduct
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionDotProduct : public UMaterialExpression {
	struct FExpressionInput A; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput B; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
};

// Class Engine.MaterialExpressionDynamicParameter
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionDynamicParameter : public UMaterialExpression {
	struct TArray<struct FString> ParamNames; // 0x40(0x10)
	struct FLinearColor DefaultValue; // 0x50(0x10)
	uint32_t ParameterIndex; // 0x60(0x04)
	char UnknownData_64[0x4]; // 0x64(0x04)
};

// Class Engine.MaterialExpressionFeatureLevelSwitch
// Size: 0xa8 (Inherited: 0x40)
struct UMaterialExpressionFeatureLevelSwitch : public UMaterialExpression {
	struct FExpressionInput Default; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput Inputs[0x4]; // 0x54(0x30)
	char UnknownData_84[0x24]; // 0x84(0x24)
};

// Class Engine.MaterialExpressionFloor
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionFloor : public UMaterialExpression {
	struct FExpressionInput Input; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionFmod
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionFmod : public UMaterialExpression {
	struct FExpressionInput A; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput B; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
};

// Class Engine.MaterialExpressionFontSample
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionFontSample : public UMaterialExpression {
	struct UFont* Font; // 0x40(0x08)
	int32_t FontTexturePage; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.MaterialExpressionFontSampleParameter
// Size: 0x70 (Inherited: 0x50)
struct UMaterialExpressionFontSampleParameter : public UMaterialExpressionFontSample {
	struct FName ParameterName; // 0x50(0x08)
	struct FGuid ExpressionGUID; // 0x58(0x10)
	struct FName Group; // 0x68(0x08)
};

// Class Engine.MaterialExpressionFrac
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionFrac : public UMaterialExpression {
	struct FExpressionInput Input; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionFresnel
// Size: 0x88 (Inherited: 0x40)
struct UMaterialExpressionFresnel : public UMaterialExpression {
	struct FExpressionInput ExponentIn; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	float Exponent; // 0x54(0x04)
	struct FExpressionInput BaseReflectFractionIn; // 0x58(0x0c)
	char UnknownData_64[0x8]; // 0x64(0x08)
	float BaseReflectFraction; // 0x6c(0x04)
	struct FExpressionInput Normal; // 0x70(0x0c)
	char UnknownData_7C[0xc]; // 0x7c(0x0c)
};

// Class Engine.MaterialExpressionFunctionInput
// Size: 0xc0 (Inherited: 0x40)
struct UMaterialExpressionFunctionInput : public UMaterialExpression {
	struct FExpressionInput Preview; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FName InputName; // 0x54(0x08)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
	struct FString Description; // 0x60(0x10)
	struct FGuid ID; // 0x70(0x10)
	char InputType; // 0x80(0x01)
	char UnknownData_81[0xf]; // 0x81(0x0f)
	struct FVector4 PreviewValue; // 0x90(0x10)
	char bUsePreviewValueAsDefault : 1; // 0xa0(0x01)
	char UnknownData_A0_1 : 7; // 0xa0(0x01)
	char UnknownData_A1[0x3]; // 0xa1(0x03)
	int32_t SortPriority; // 0xa4(0x04)
	char bCompilingFunctionPreview : 1; // 0xa8(0x01)
	char UnknownData_A8_1 : 7; // 0xa8(0x01)
	char UnknownData_A9[0x17]; // 0xa9(0x17)
};

// Class Engine.MaterialExpressionFunctionOutput
// Size: 0x88 (Inherited: 0x40)
struct UMaterialExpressionFunctionOutput : public UMaterialExpression {
	struct FName OutputName; // 0x40(0x08)
	struct FString Description; // 0x48(0x10)
	int32_t SortPriority; // 0x58(0x04)
	struct FExpressionInput A; // 0x5c(0x0c)
	char UnknownData_68[0x8]; // 0x68(0x08)
	char bLastPreviewed : 1; // 0x70(0x01)
	char UnknownData_70_1 : 7; // 0x70(0x01)
	char UnknownData_71[0x3]; // 0x71(0x03)
	struct FGuid ID; // 0x74(0x10)
	char UnknownData_84[0x4]; // 0x84(0x04)
};

// Class Engine.MaterialExpressionGetMaterialAttributes
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionGetMaterialAttributes : public UMaterialExpression {
	struct FMaterialAttributesInput MaterialAttributes; // 0x40(0x10)
	char UnknownData_50[0x8]; // 0x50(0x08)
	struct TArray<struct FGuid> AttributeGetTypes; // 0x58(0x10)
};

// Class Engine.MaterialExpressionGIReplace
// Size: 0x80 (Inherited: 0x40)
struct UMaterialExpressionGIReplace : public UMaterialExpression {
	struct FExpressionInput Default; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput StaticIndirect; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
	struct FExpressionInput DynamicIndirect; // 0x68(0x0c)
	char UnknownData_74[0xc]; // 0x74(0x0c)
};

// Class Engine.MaterialExpressionIf
// Size: 0xb0 (Inherited: 0x40)
struct UMaterialExpressionIf : public UMaterialExpression {
	struct FExpressionInput A; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput B; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
	struct FExpressionInput AGreaterThanB; // 0x68(0x0c)
	char UnknownData_74[0x8]; // 0x74(0x08)
	struct FExpressionInput AEqualsB; // 0x7c(0x0c)
	char UnknownData_88[0x8]; // 0x88(0x08)
	struct FExpressionInput ALessThanB; // 0x90(0x0c)
	char UnknownData_9C[0x8]; // 0x9c(0x08)
	float EqualsThreshold; // 0xa4(0x04)
	float ConstB; // 0xa8(0x04)
	float ConstAEqualsB; // 0xac(0x04)
};

// Class Engine.MaterialExpressionLightmassReplace
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionLightmassReplace : public UMaterialExpression {
	struct FExpressionInput Realtime; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput Lightmass; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
};

// Class Engine.MaterialExpressionLinearInterpolate
// Size: 0x88 (Inherited: 0x40)
struct UMaterialExpressionLinearInterpolate : public UMaterialExpression {
	struct FExpressionInput A; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput B; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
	struct FExpressionInput Alpha; // 0x68(0x0c)
	char UnknownData_74[0x8]; // 0x74(0x08)
	float ConstA; // 0x7c(0x04)
	float ConstB; // 0x80(0x04)
	float ConstAlpha; // 0x84(0x04)
};

// Class Engine.MaterialExpressionLogarithm10
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionLogarithm10 : public UMaterialExpression {
	struct FExpressionInput X; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionLogarithm2
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionLogarithm2 : public UMaterialExpression {
	struct FExpressionInput X; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionMakeMaterialAttributes
// Size: 0x270 (Inherited: 0x40)
struct UMaterialExpressionMakeMaterialAttributes : public UMaterialExpression {
	struct FExpressionInput BaseColor; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput Metallic; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
	struct FExpressionInput Specular; // 0x68(0x0c)
	char UnknownData_74[0x8]; // 0x74(0x08)
	struct FExpressionInput Roughness; // 0x7c(0x0c)
	char UnknownData_88[0x8]; // 0x88(0x08)
	struct FExpressionInput Anisotropy; // 0x90(0x0c)
	char UnknownData_9C[0x8]; // 0x9c(0x08)
	struct FExpressionInput EmissiveColor; // 0xa4(0x0c)
	char UnknownData_B0[0x8]; // 0xb0(0x08)
	struct FExpressionInput Opacity; // 0xb8(0x0c)
	char UnknownData_C4[0x8]; // 0xc4(0x08)
	struct FExpressionInput OpacityMask; // 0xcc(0x0c)
	char UnknownData_D8[0x8]; // 0xd8(0x08)
	struct FExpressionInput Normal; // 0xe0(0x0c)
	char UnknownData_EC[0x8]; // 0xec(0x08)
	struct FExpressionInput Tangent; // 0xf4(0x0c)
	char UnknownData_100[0x8]; // 0x100(0x08)
	struct FExpressionInput WorldPositionOffset; // 0x108(0x0c)
	char UnknownData_114[0x8]; // 0x114(0x08)
	struct FExpressionInput WorldDisplacement; // 0x11c(0x0c)
	char UnknownData_128[0x8]; // 0x128(0x08)
	struct FExpressionInput TessellationMultiplier; // 0x130(0x0c)
	char UnknownData_13C[0x8]; // 0x13c(0x08)
	struct FExpressionInput SubsurfaceColor; // 0x144(0x0c)
	char UnknownData_150[0x8]; // 0x150(0x08)
	struct FExpressionInput ClearCoat; // 0x158(0x0c)
	char UnknownData_164[0x8]; // 0x164(0x08)
	struct FExpressionInput ClearCoatRoughness; // 0x16c(0x0c)
	char UnknownData_178[0x8]; // 0x178(0x08)
	struct FExpressionInput AmbientOcclusion; // 0x180(0x0c)
	char UnknownData_18C[0x8]; // 0x18c(0x08)
	struct FExpressionInput Refraction; // 0x194(0x0c)
	char UnknownData_1A0[0x8]; // 0x1a0(0x08)
	struct FExpressionInput CustomizedUVs[0x8]; // 0x1a8(0x60)
	char UnknownData_208[0x40]; // 0x208(0x40)
	struct FExpressionInput PixelDepthOffset; // 0x248(0x0c)
	char UnknownData_254[0x8]; // 0x254(0x08)
	struct FExpressionInput ShadingModel; // 0x25c(0x0c)
	char UnknownData_268[0x8]; // 0x268(0x08)
};

// Class Engine.MaterialExpressionMapARPassthroughCameraUV
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionMapARPassthroughCameraUV : public UMaterialExpression {
	struct FExpressionInput Coordinates; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionMaterialAttributeLayers
// Size: 0xe8 (Inherited: 0x40)
struct UMaterialExpressionMaterialAttributeLayers : public UMaterialExpression {
	struct FName ParameterName; // 0x40(0x08)
	struct FGuid ExpressionGUID; // 0x48(0x10)
	struct FMaterialAttributesInput Input; // 0x58(0x10)
	char UnknownData_68[0x8]; // 0x68(0x08)
	struct FMaterialLayersFunctions DefaultLayers; // 0x70(0x40)
	struct TArray<struct UMaterialExpressionMaterialFunctionCall*> LayerCallers; // 0xb0(0x10)
	int32_t NumActiveLayerCallers; // 0xc0(0x04)
	char UnknownData_C4[0x4]; // 0xc4(0x04)
	struct TArray<struct UMaterialExpressionMaterialFunctionCall*> BlendCallers; // 0xc8(0x10)
	int32_t NumActiveBlendCallers; // 0xd8(0x04)
	bool bIsLayerGraphBuilt; // 0xdc(0x01)
	char UnknownData_DD[0xb]; // 0xdd(0x0b)
};

// Class Engine.MaterialExpressionMaterialFunctionCall
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionMaterialFunctionCall : public UMaterialExpression {
	struct UMaterialFunctionInterface* MaterialFunction; // 0x40(0x08)
	struct FMaterialParameterInfo FunctionParameterInfo; // 0x48(0x10)
};

// Class Engine.MaterialExpressionMaterialProxyReplace
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionMaterialProxyReplace : public UMaterialExpression {
	struct FExpressionInput Realtime; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput MaterialProxy; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
};

// Class Engine.MaterialExpressionMax
// Size: 0x70 (Inherited: 0x40)
struct UMaterialExpressionMax : public UMaterialExpression {
	struct FExpressionInput A; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput B; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
	float ConstA; // 0x68(0x04)
	float ConstB; // 0x6c(0x04)
};

// Class Engine.MaterialExpressionMin
// Size: 0x70 (Inherited: 0x40)
struct UMaterialExpressionMin : public UMaterialExpression {
	struct FExpressionInput A; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput B; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
	float ConstA; // 0x68(0x04)
	float ConstB; // 0x6c(0x04)
};

// Class Engine.MaterialExpressionMultiply
// Size: 0x70 (Inherited: 0x40)
struct UMaterialExpressionMultiply : public UMaterialExpression {
	struct FExpressionInput A; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput B; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
	float ConstA; // 0x68(0x04)
	float ConstB; // 0x6c(0x04)
};

// Class Engine.MaterialExpressionNoise
// Size: 0x90 (Inherited: 0x40)
struct UMaterialExpressionNoise : public UMaterialExpression {
	struct FExpressionInput Position; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput FilterWidth; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
	float Scale; // 0x68(0x04)
	int32_t Quality; // 0x6c(0x04)
	char NoiseFunction; // 0x70(0x01)
	char UnknownData_71[0x3]; // 0x71(0x03)
	char bTurbulence : 1; // 0x74(0x01)
	char UnknownData_74_1 : 7; // 0x74(0x01)
	char UnknownData_75[0x3]; // 0x75(0x03)
	int32_t Levels; // 0x78(0x04)
	float OutputMin; // 0x7c(0x04)
	float OutputMax; // 0x80(0x04)
	float LevelScale; // 0x84(0x04)
	char bTiling : 1; // 0x88(0x01)
	char UnknownData_88_1 : 7; // 0x88(0x01)
	char UnknownData_89[0x3]; // 0x89(0x03)
	uint32_t RepeatSize; // 0x8c(0x04)
};

// Class Engine.MaterialExpressionNormalize
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionNormalize : public UMaterialExpression {
	struct FExpressionInput VectorInput; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionOneMinus
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionOneMinus : public UMaterialExpression {
	struct FExpressionInput Input; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionPanner
// Size: 0x90 (Inherited: 0x40)
struct UMaterialExpressionPanner : public UMaterialExpression {
	struct FExpressionInput Coordinate; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput Time; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
	struct FExpressionInput Speed; // 0x68(0x0c)
	char UnknownData_74[0x8]; // 0x74(0x08)
	float SpeedX; // 0x7c(0x04)
	float SpeedY; // 0x80(0x04)
	uint32_t ConstCoordinate; // 0x84(0x04)
	bool bFractionalPart; // 0x88(0x01)
	char UnknownData_89[0x7]; // 0x89(0x07)
};

// Class Engine.MaterialExpressionParticleSubUV
// Size: 0xd8 (Inherited: 0xd0)
struct UMaterialExpressionParticleSubUV : public UMaterialExpressionTextureSample {
	char bBlend : 1; // 0xd0(0x01)
	char UnknownData_D0_1 : 7; // 0xd0(0x01)
	char UnknownData_D1[0x7]; // 0xd1(0x07)
};

// Class Engine.MaterialExpressionPerInstanceCustomData
// Size: 0x60 (Inherited: 0x40)
struct UMaterialExpressionPerInstanceCustomData : public UMaterialExpression {
	struct FExpressionInput DefaultValue; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	float ConstDefaultValue; // 0x54(0x04)
	uint32_t DataIndex; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.MaterialExpressionPower
// Size: 0x70 (Inherited: 0x40)
struct UMaterialExpressionPower : public UMaterialExpression {
	struct FExpressionInput Base; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput Exponent; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
	float ConstExponent; // 0x68(0x04)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
};

// Class Engine.MaterialExpressionPreviousFrameSwitch
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionPreviousFrameSwitch : public UMaterialExpression {
	struct FExpressionInput CurrentFrame; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput PreviousFrame; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
};

// Class Engine.MaterialExpressionQualitySwitch
// Size: 0x90 (Inherited: 0x40)
struct UMaterialExpressionQualitySwitch : public UMaterialExpression {
	struct FExpressionInput Default; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput Inputs[0x3]; // 0x54(0x24)
	char UnknownData_78[0x18]; // 0x78(0x18)
};

// Class Engine.MaterialExpressionRadialBlurSceneTexture
// Size: 0x70 (Inherited: 0x40)
struct UMaterialExpressionRadialBlurSceneTexture : public UMaterialExpression {
	struct FExpressionInput BlurDist; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput ScreenUV; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
	char SceneTextureId; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
};

// Class Engine.MaterialExpressionRayTracingQualitySwitch
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionRayTracingQualitySwitch : public UMaterialExpression {
	struct FExpressionInput Normal; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput RayTraced; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
};

// Class Engine.MaterialExpressionReflectionVectorWS
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionReflectionVectorWS : public UMaterialExpression {
	struct FExpressionInput CustomWorldNormal; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	char bNormalizeCustomWorldNormal : 1; // 0x54(0x01)
	char UnknownData_54_1 : 7; // 0x54(0x01)
	char UnknownData_55[0x3]; // 0x55(0x03)
};

// Class Engine.MaterialExpressionReroute
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionReroute : public UMaterialExpression {
	struct FExpressionInput Input; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionRotateAboutAxis
// Size: 0x98 (Inherited: 0x40)
struct UMaterialExpressionRotateAboutAxis : public UMaterialExpression {
	struct FExpressionInput NormalizedRotationAxis; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput RotationAngle; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
	struct FExpressionInput PivotPoint; // 0x68(0x0c)
	char UnknownData_74[0x8]; // 0x74(0x08)
	struct FExpressionInput Position; // 0x7c(0x0c)
	char UnknownData_88[0x8]; // 0x88(0x08)
	float Period; // 0x90(0x04)
	char UnknownData_94[0x4]; // 0x94(0x04)
};

// Class Engine.MaterialExpressionRotator
// Size: 0x78 (Inherited: 0x40)
struct UMaterialExpressionRotator : public UMaterialExpression {
	struct FExpressionInput Coordinate; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput Time; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
	float CenterX; // 0x68(0x04)
	float CenterY; // 0x6c(0x04)
	float Speed; // 0x70(0x04)
	uint32_t ConstCoordinate; // 0x74(0x04)
};

// Class Engine.MaterialExpressionRound
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionRound : public UMaterialExpression {
	struct FExpressionInput Input; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionRuntimeVirtualTextureOutput
// Size: 0xd0 (Inherited: 0x40)
struct UMaterialExpressionRuntimeVirtualTextureOutput : public UMaterialExpressionCustomOutput {
	struct FExpressionInput BaseColor; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput Specular; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
	struct FExpressionInput Roughness; // 0x68(0x0c)
	char UnknownData_74[0x8]; // 0x74(0x08)
	struct FExpressionInput Normal; // 0x7c(0x0c)
	char UnknownData_88[0x8]; // 0x88(0x08)
	struct FExpressionInput WorldHeight; // 0x90(0x0c)
	char UnknownData_9C[0x8]; // 0x9c(0x08)
	struct FExpressionInput Opacity; // 0xa4(0x0c)
	char UnknownData_B0[0x8]; // 0xb0(0x08)
	struct FExpressionInput Mask; // 0xb8(0x0c)
	char UnknownData_C4[0xc]; // 0xc4(0x0c)
};

// Class Engine.MaterialExpressionRuntimeVirtualTextureReplace
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionRuntimeVirtualTextureReplace : public UMaterialExpression {
	struct FExpressionInput Default; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput VirtualTextureOutput; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
};

// Class Engine.MaterialExpressionRuntimeVirtualTextureSample
// Size: 0x90 (Inherited: 0x40)
struct UMaterialExpressionRuntimeVirtualTextureSample : public UMaterialExpression {
	struct FExpressionInput Coordinates; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput WorldPosition; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
	struct FExpressionInput MipValue; // 0x68(0x0c)
	char UnknownData_74[0xc]; // 0x74(0x0c)
	struct URuntimeVirtualTexture* VirtualTexture; // 0x80(0x08)
	enum class ERuntimeVirtualTextureMaterialType MaterialType; // 0x88(0x01)
	bool bSinglePhysicalSpace; // 0x89(0x01)
	char MipValueMode; // 0x8a(0x01)
	char UnknownData_8B[0x5]; // 0x8b(0x05)
};

// Class Engine.MaterialExpressionRuntimeVirtualTextureSampleParameter
// Size: 0xb0 (Inherited: 0x90)
struct UMaterialExpressionRuntimeVirtualTextureSampleParameter : public UMaterialExpressionRuntimeVirtualTextureSample {
	struct FName ParameterName; // 0x90(0x08)
	struct FGuid ExpressionGUID; // 0x98(0x10)
	struct FName Group; // 0xa8(0x08)
};

// Class Engine.MaterialExpressionSaturate
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionSaturate : public UMaterialExpression {
	struct FExpressionInput Input; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionSceneColor
// Size: 0x78 (Inherited: 0x40)
struct UMaterialExpressionSceneColor : public UMaterialExpression {
	char InputMode; // 0x40(0x01)
	char UnknownData_41[0x3]; // 0x41(0x03)
	struct FExpressionInput Input; // 0x44(0x0c)
	char UnknownData_50[0x8]; // 0x50(0x08)
	struct FExpressionInput OffsetFraction; // 0x58(0x0c)
	char UnknownData_64[0x8]; // 0x64(0x08)
	struct FVector2D ConstInput; // 0x6c(0x08)
	char UnknownData_74[0x4]; // 0x74(0x04)
};

// Class Engine.MaterialExpressionSceneDepth
// Size: 0x78 (Inherited: 0x40)
struct UMaterialExpressionSceneDepth : public UMaterialExpression {
	char InputMode; // 0x40(0x01)
	char UnknownData_41[0x3]; // 0x41(0x03)
	struct FExpressionInput Input; // 0x44(0x0c)
	char UnknownData_50[0x8]; // 0x50(0x08)
	struct FExpressionInput Coordinates; // 0x58(0x0c)
	char UnknownData_64[0x8]; // 0x64(0x08)
	struct FVector2D ConstInput; // 0x6c(0x08)
	char UnknownData_74[0x4]; // 0x74(0x04)
};

// Class Engine.MaterialExpressionSceneTexture
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionSceneTexture : public UMaterialExpression {
	struct FExpressionInput Coordinates; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	char SceneTextureId; // 0x54(0x01)
	bool bFiltered; // 0x55(0x01)
	char UnknownData_56[0x2]; // 0x56(0x02)
};

// Class Engine.MaterialExpressionSetMaterialAttributes
// Size: 0x60 (Inherited: 0x40)
struct UMaterialExpressionSetMaterialAttributes : public UMaterialExpression {
	struct TArray<struct FExpressionInput> Inputs; // 0x40(0x10)
	struct TArray<struct FGuid> AttributeSetTypes; // 0x50(0x10)
};

// Class Engine.MaterialExpressionShaderStageSwitch
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionShaderStageSwitch : public UMaterialExpression {
	struct FExpressionInput PixelShader; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput VertexShader; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
};

// Class Engine.MaterialExpressionShadingModel
// Size: 0x48 (Inherited: 0x40)
struct UMaterialExpressionShadingModel : public UMaterialExpression {
	char ShadingModel; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
};

// Class Engine.MaterialExpressionShadingPathSwitch
// Size: 0x90 (Inherited: 0x40)
struct UMaterialExpressionShadingPathSwitch : public UMaterialExpression {
	struct FExpressionInput Default; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput Inputs[0x3]; // 0x54(0x24)
	char UnknownData_78[0x18]; // 0x78(0x18)
};

// Class Engine.MaterialExpressionShadowReplace
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionShadowReplace : public UMaterialExpression {
	struct FExpressionInput Default; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput Shadow; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
};

// Class Engine.MaterialExpressionSign
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionSign : public UMaterialExpression {
	struct FExpressionInput Input; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionSine
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionSine : public UMaterialExpression {
	struct FExpressionInput Input; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	float Period; // 0x54(0x04)
};

// Class Engine.MaterialExpressionSingleLayerWaterMaterialOutput
// Size: 0x80 (Inherited: 0x40)
struct UMaterialExpressionSingleLayerWaterMaterialOutput : public UMaterialExpressionCustomOutput {
	struct FExpressionInput ScatteringCoefficients; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput AbsorptionCoefficients; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
	struct FExpressionInput PhaseG; // 0x68(0x0c)
	char UnknownData_74[0xc]; // 0x74(0x0c)
};

// Class Engine.MaterialExpressionSkyAtmosphereLightDirection
// Size: 0x48 (Inherited: 0x40)
struct UMaterialExpressionSkyAtmosphereLightDirection : public UMaterialExpression {
	int32_t LightIndex; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
};

// Class Engine.MaterialExpressionSkyAtmosphereLightIlluminance
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionSkyAtmosphereLightIlluminance : public UMaterialExpression {
	int32_t LightIndex; // 0x40(0x04)
	struct FExpressionInput WorldPosition; // 0x44(0x0c)
	char UnknownData_50[0x8]; // 0x50(0x08)
};

// Class Engine.MaterialExpressionSkyAtmosphereLightDiskLuminance
// Size: 0x48 (Inherited: 0x40)
struct UMaterialExpressionSkyAtmosphereLightDiskLuminance : public UMaterialExpression {
	int32_t LightIndex; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
};

// Class Engine.MaterialExpressionSkyAtmosphereAerialPerspective
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionSkyAtmosphereAerialPerspective : public UMaterialExpression {
	struct FExpressionInput WorldPosition; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionSobol
// Size: 0x88 (Inherited: 0x40)
struct UMaterialExpressionSobol : public UMaterialExpression {
	struct FExpressionInput Cell; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput Index; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
	struct FExpressionInput Seed; // 0x68(0x0c)
	char UnknownData_74[0x8]; // 0x74(0x08)
	uint32_t ConstIndex; // 0x7c(0x04)
	struct FVector2D ConstSeed; // 0x80(0x08)
};

// Class Engine.MaterialExpressionSpeedTree
// Size: 0xa0 (Inherited: 0x40)
struct UMaterialExpressionSpeedTree : public UMaterialExpression {
	struct FExpressionInput GeometryInput; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput WindInput; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
	struct FExpressionInput LODInput; // 0x68(0x0c)
	char UnknownData_74[0x8]; // 0x74(0x08)
	struct FExpressionInput ExtraBendWS; // 0x7c(0x0c)
	char UnknownData_88[0x8]; // 0x88(0x08)
	char GeometryType; // 0x90(0x01)
	char WindType; // 0x91(0x01)
	char LODType; // 0x92(0x01)
	char UnknownData_93[0x1]; // 0x93(0x01)
	float BillboardThreshold; // 0x94(0x04)
	bool bAccurateWindVelocities; // 0x98(0x01)
	char UnknownData_99[0x7]; // 0x99(0x07)
};

// Class Engine.MaterialExpressionSphereMask
// Size: 0x98 (Inherited: 0x40)
struct UMaterialExpressionSphereMask : public UMaterialExpression {
	struct FExpressionInput A; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput B; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
	struct FExpressionInput Radius; // 0x68(0x0c)
	char UnknownData_74[0x8]; // 0x74(0x08)
	struct FExpressionInput Hardness; // 0x7c(0x0c)
	char UnknownData_88[0x8]; // 0x88(0x08)
	float AttenuationRadius; // 0x90(0x04)
	float HardnessPercent; // 0x94(0x04)
};

// Class Engine.MaterialExpressionSphericalParticleOpacity
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionSphericalParticleOpacity : public UMaterialExpression {
	struct FExpressionInput Density; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	float ConstantDensity; // 0x54(0x04)
};

// Class Engine.MaterialExpressionSquareRoot
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionSquareRoot : public UMaterialExpression {
	struct FExpressionInput Input; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionStaticBool
// Size: 0x48 (Inherited: 0x40)
struct UMaterialExpressionStaticBool : public UMaterialExpression {
	char Value : 1; // 0x40(0x01)
	char UnknownData_40_1 : 7; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
};

// Class Engine.MaterialExpressionStaticBoolParameter
// Size: 0x60 (Inherited: 0x58)
struct UMaterialExpressionStaticBoolParameter : public UMaterialExpressionParameter {
	char DefaultValue : 1; // 0x58(0x01)
	char UnknownData_58_1 : 7; // 0x58(0x01)
	char UnknownData_59[0x7]; // 0x59(0x07)
};

// Class Engine.MaterialExpressionStaticComponentMaskParameter
// Size: 0x70 (Inherited: 0x58)
struct UMaterialExpressionStaticComponentMaskParameter : public UMaterialExpressionParameter {
	struct FExpressionInput Input; // 0x58(0x0c)
	char UnknownData_64[0x8]; // 0x64(0x08)
	char DefaultR : 1; // 0x6c(0x01)
	char DefaultG : 1; // 0x6c(0x01)
	char DefaultB : 1; // 0x6c(0x01)
	char DefaultA : 1; // 0x6c(0x01)
	char UnknownData_6C_4 : 4; // 0x6c(0x01)
	char UnknownData_6D[0x3]; // 0x6d(0x03)
};

// Class Engine.MaterialExpressionStaticSwitch
// Size: 0x80 (Inherited: 0x40)
struct UMaterialExpressionStaticSwitch : public UMaterialExpression {
	char DefaultValue : 1; // 0x40(0x01)
	char UnknownData_40_1 : 7; // 0x40(0x01)
	char UnknownData_41[0x3]; // 0x41(0x03)
	struct FExpressionInput A; // 0x44(0x0c)
	char UnknownData_50[0x8]; // 0x50(0x08)
	struct FExpressionInput B; // 0x58(0x0c)
	char UnknownData_64[0x8]; // 0x64(0x08)
	struct FExpressionInput Value; // 0x6c(0x0c)
	char UnknownData_78[0x8]; // 0x78(0x08)
};

// Class Engine.MaterialExpressionStaticSwitchParameter
// Size: 0x88 (Inherited: 0x60)
struct UMaterialExpressionStaticSwitchParameter : public UMaterialExpressionStaticBoolParameter {
	struct FExpressionInput A; // 0x60(0x0c)
	char UnknownData_6C[0x8]; // 0x6c(0x08)
	struct FExpressionInput B; // 0x74(0x0c)
	char UnknownData_80[0x8]; // 0x80(0x08)
};

// Class Engine.MaterialExpressionSteppedShadowSkinCustomOutput
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionSteppedShadowSkinCustomOutput : public UMaterialExpressionCustomOutput {
	struct FExpressionInput Input; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionSubtract
// Size: 0x70 (Inherited: 0x40)
struct UMaterialExpressionSubtract : public UMaterialExpression {
	struct FExpressionInput A; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput B; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
	float ConstA; // 0x68(0x04)
	float ConstB; // 0x6c(0x04)
};

// Class Engine.MaterialExpressionTangent
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionTangent : public UMaterialExpression {
	struct FExpressionInput Input; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	float Period; // 0x54(0x04)
};

// Class Engine.MaterialExpressionTangentOutput
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionTangentOutput : public UMaterialExpressionCustomOutput {
	struct FExpressionInput Input; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionTemporalSobol
// Size: 0x78 (Inherited: 0x40)
struct UMaterialExpressionTemporalSobol : public UMaterialExpression {
	struct FExpressionInput Index; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput Seed; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
	uint32_t ConstIndex; // 0x68(0x04)
	struct FVector2D ConstSeed; // 0x6c(0x08)
	char UnknownData_74[0x4]; // 0x74(0x04)
};

// Class Engine.MaterialExpressionTextureCoordinate
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionTextureCoordinate : public UMaterialExpression {
	int32_t CoordinateIndex; // 0x40(0x04)
	float UTiling; // 0x44(0x04)
	float VTiling; // 0x48(0x04)
	char UnMirrorU : 1; // 0x4c(0x01)
	char UnMirrorV : 1; // 0x4c(0x01)
	char UnknownData_4C_2 : 6; // 0x4c(0x01)
	char UnknownData_4D[0x3]; // 0x4d(0x03)
};

// Class Engine.MaterialExpressionTextureLOD
// Size: 0x80 (Inherited: 0x50)
struct UMaterialExpressionTextureLOD : public UMaterialExpressionTextureBase {
	struct FExpressionInput Coordinates; // 0x50(0x0c)
	char UnknownData_5C[0x8]; // 0x5c(0x08)
	struct FExpressionInput TextureObject; // 0x64(0x0c)
	char UnknownData_70[0x8]; // 0x70(0x08)
	char SamplerSource; // 0x78(0x01)
	char ConstCoordinate; // 0x79(0x01)
	char UnknownData_7A[0x6]; // 0x7a(0x06)
};

// Class Engine.MaterialExpressionTextureProperty
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionTextureProperty : public UMaterialExpression {
	struct FExpressionInput TextureObject; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	char Property; // 0x54(0x01)
	char UnknownData_55[0x3]; // 0x55(0x03)
};

// Class Engine.MaterialExpressionTextureSampleParameterSubUV
// Size: 0xf8 (Inherited: 0xf0)
struct UMaterialExpressionTextureSampleParameterSubUV : public UMaterialExpressionTextureSampleParameter2D {
	char bBlend : 1; // 0xf0(0x01)
	char UnknownData_F0_1 : 7; // 0xf0(0x01)
	char UnknownData_F1[0x7]; // 0xf1(0x07)
};

// Class Engine.MaterialExpressionThinTranslucentMaterialOutput
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionThinTranslucentMaterialOutput : public UMaterialExpressionCustomOutput {
	struct FExpressionInput TransmittanceColor; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionTime
// Size: 0x48 (Inherited: 0x40)
struct UMaterialExpressionTime : public UMaterialExpression {
	char bIgnorePause : 1; // 0x40(0x01)
	char bOverride_Period : 1; // 0x40(0x01)
	char UnknownData_40_2 : 6; // 0x40(0x01)
	char UnknownData_41[0x3]; // 0x41(0x03)
	float Period; // 0x44(0x04)
};

// Class Engine.MaterialExpressionTransform
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionTransform : public UMaterialExpression {
	struct FExpressionInput Input; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	char TransformSourceType; // 0x54(0x01)
	char TransformType; // 0x55(0x01)
	char UnknownData_56[0x2]; // 0x56(0x02)
};

// Class Engine.MaterialExpressionTransformPosition
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionTransformPosition : public UMaterialExpression {
	struct FExpressionInput Input; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	char TransformSourceType; // 0x54(0x01)
	char TransformType; // 0x55(0x01)
	char UnknownData_56[0x2]; // 0x56(0x02)
};

// Class Engine.MaterialExpressionTruncate
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionTruncate : public UMaterialExpression {
	struct FExpressionInput Input; // 0x40(0x0c)
	char UnknownData_4C[0xc]; // 0x4c(0x0c)
};

// Class Engine.MaterialExpressionVectorNoise
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionVectorNoise : public UMaterialExpression {
	struct FExpressionInput Position; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	char NoiseFunction; // 0x54(0x01)
	char UnknownData_55[0x3]; // 0x55(0x03)
	int32_t Quality; // 0x58(0x04)
	char bTiling : 1; // 0x5c(0x01)
	char UnknownData_5C_1 : 7; // 0x5c(0x01)
	char UnknownData_5D[0x3]; // 0x5d(0x03)
	uint32_t TileSize; // 0x60(0x04)
	char UnknownData_64[0x4]; // 0x64(0x04)
};

// Class Engine.MaterialExpressionVertexInterpolator
// Size: 0x60 (Inherited: 0x40)
struct UMaterialExpressionVertexInterpolator : public UMaterialExpressionCustomOutput {
	struct FExpressionInput Input; // 0x40(0x0c)
	char UnknownData_4C[0x14]; // 0x4c(0x14)
};

// Class Engine.MaterialExpressionViewProperty
// Size: 0x48 (Inherited: 0x40)
struct UMaterialExpressionViewProperty : public UMaterialExpression {
	char Property; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
};

// Class Engine.MaterialExpressionVirtualTextureFeatureSwitch
// Size: 0x68 (Inherited: 0x40)
struct UMaterialExpressionVirtualTextureFeatureSwitch : public UMaterialExpression {
	struct FExpressionInput No; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput Yes; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
};

// Class Engine.MaterialExpressionWorldPosition
// Size: 0x48 (Inherited: 0x40)
struct UMaterialExpressionWorldPosition : public UMaterialExpression {
	char WorldPositionShaderOffset; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
};

// Class Engine.MaterialFunctionInterface
// Size: 0x40 (Inherited: 0x28)
struct UMaterialFunctionInterface : public UObject {
	struct FGuid StateId; // 0x28(0x10)
	enum class EMaterialFunctionUsage MaterialFunctionUsage; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
};

// Class Engine.MaterialFunction
// Size: 0x58 (Inherited: 0x40)
struct UMaterialFunction : public UMaterialFunctionInterface {
	struct FString Description; // 0x40(0x10)
	char bExposeToLibrary : 1; // 0x50(0x01)
	char bPrefixParameterNames : 1; // 0x50(0x01)
	char bReentrantFlag : 1; // 0x50(0x01)
	char UnknownData_50_3 : 5; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
};

// Class Engine.MaterialFunctionInstance
// Size: 0xc0 (Inherited: 0x40)
struct UMaterialFunctionInstance : public UMaterialFunctionInterface {
	struct UMaterialFunctionInterface* Parent; // 0x40(0x08)
	struct UMaterialFunctionInterface* Base; // 0x48(0x08)
	struct TArray<struct FScalarParameterValue> ScalarParameterValues; // 0x50(0x10)
	struct TArray<struct FVectorParameterValue> VectorParameterValues; // 0x60(0x10)
	struct TArray<struct FTextureParameterValue> TextureParameterValues; // 0x70(0x10)
	struct TArray<struct FFontParameterValue> FontParameterValues; // 0x80(0x10)
	struct TArray<struct FStaticSwitchParameter> StaticSwitchParameterValues; // 0x90(0x10)
	struct TArray<struct FStaticComponentMaskParameter> StaticComponentMaskParameterValues; // 0xa0(0x10)
	struct TArray<struct FRuntimeVirtualTextureParameterValue> RuntimeVirtualTextureParameterValues; // 0xb0(0x10)
};

// Class Engine.MaterialInstanceActor
// Size: 0x230 (Inherited: 0x220)
struct AMaterialInstanceActor : public AActor {
	struct TArray<struct AActor*> TargetActors; // 0x220(0x10)
};

// Class Engine.MaterialInstanceDynamic
// Size: 0x458 (Inherited: 0x408)
struct UMaterialInstanceDynamic : public UMaterialInstance {
	char UnknownData_408[0x50]; // 0x408(0x50)

	void SetVectorParameterValueByInfo(struct FMaterialParameterInfo ParameterInfo, struct FLinearColor Value); // Function Engine.MaterialInstanceDynamic.SetVectorParameterValueByInfo
	void SetVectorParameterValue(struct FName ParameterName, struct FLinearColor Value); // Function Engine.MaterialInstanceDynamic.SetVectorParameterValue
	void SetTextureParameterValueByInfo(struct FMaterialParameterInfo ParameterInfo, struct UTexture* Value); // Function Engine.MaterialInstanceDynamic.SetTextureParameterValueByInfo
	void SetTextureParameterValue(struct FName ParameterName, struct UTexture* Value); // Function Engine.MaterialInstanceDynamic.SetTextureParameterValue
	void SetScalarParameterValueByInfo(struct FMaterialParameterInfo ParameterInfo, float Value); // Function Engine.MaterialInstanceDynamic.SetScalarParameterValueByInfo
	void SetScalarParameterValue(struct FName ParameterName, float Value); // Function Engine.MaterialInstanceDynamic.SetScalarParameterValue
	void K2_InterpolateMaterialInstanceParams(struct UMaterialInstance* SourceA, struct UMaterialInstance* SourceB, float Alpha); // Function Engine.MaterialInstanceDynamic.K2_InterpolateMaterialInstanceParams
	struct FLinearColor K2_GetVectorParameterValueByInfo(struct FMaterialParameterInfo ParameterInfo); // Function Engine.MaterialInstanceDynamic.K2_GetVectorParameterValueByInfo
	struct FLinearColor K2_GetVectorParameterValue(struct FName ParameterName); // Function Engine.MaterialInstanceDynamic.K2_GetVectorParameterValue
	struct UTexture* K2_GetTextureParameterValueByInfo(struct FMaterialParameterInfo ParameterInfo); // Function Engine.MaterialInstanceDynamic.K2_GetTextureParameterValueByInfo
	struct UTexture* K2_GetTextureParameterValue(struct FName ParameterName); // Function Engine.MaterialInstanceDynamic.K2_GetTextureParameterValue
	float K2_GetScalarParameterValueByInfo(struct FMaterialParameterInfo ParameterInfo); // Function Engine.MaterialInstanceDynamic.K2_GetScalarParameterValueByInfo
	float K2_GetScalarParameterValue(struct FName ParameterName); // Function Engine.MaterialInstanceDynamic.K2_GetScalarParameterValue
	void K2_CopyMaterialInstanceParameters(struct UMaterialInterface* Source, bool bQuickParametersOnly); // Function Engine.MaterialInstanceDynamic.K2_CopyMaterialInstanceParameters
	void CopyParameterOverrides(struct UMaterialInstance* MaterialInstance); // Function Engine.MaterialInstanceDynamic.CopyParameterOverrides
	void CopyInterpParameters(struct UMaterialInstance* Source); // Function Engine.MaterialInstanceDynamic.CopyInterpParameters
};

// Class Engine.MaterialParameterCollection
// Size: 0x78 (Inherited: 0x28)
struct UMaterialParameterCollection : public UObject {
	struct FGuid StateId; // 0x28(0x10)
	struct TArray<struct FCollectionScalarParameter> ScalarParameters; // 0x38(0x10)
	struct TArray<struct FCollectionVectorParameter> VectorParameters; // 0x48(0x10)
	char UnknownData_58[0x20]; // 0x58(0x20)
};

// Class Engine.MaterialParameterCollectionInstance
// Size: 0xf0 (Inherited: 0x28)
struct UMaterialParameterCollectionInstance : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct UMaterialParameterCollection* Collection; // 0x30(0x08)
	char UnknownData_38[0xb8]; // 0x38(0xb8)
};

// Class Engine.MatineeActor
// Size: 0x2c8 (Inherited: 0x220)
struct AMatineeActor : public AActor {
	struct UInterpData* MatineeData; // 0x220(0x08)
	struct FName MatineeControllerName; // 0x228(0x08)
	float PlayRate; // 0x230(0x04)
	char bPlayOnLevelLoad : 1; // 0x234(0x01)
	char bForceStartPos : 1; // 0x234(0x01)
	char UnknownData_234_2 : 6; // 0x234(0x01)
	char UnknownData_235[0x3]; // 0x235(0x03)
	float ForceStartPosition; // 0x238(0x04)
	char bLooping : 1; // 0x23c(0x01)
	char bRewindOnPlay : 1; // 0x23c(0x01)
	char bNoResetOnRewind : 1; // 0x23c(0x01)
	char bRewindIfAlreadyPlaying : 1; // 0x23c(0x01)
	char bDisableRadioFilter : 1; // 0x23c(0x01)
	char bClientSideOnly : 1; // 0x23c(0x01)
	char bSkipUpdateIfNotVisible : 1; // 0x23c(0x01)
	char bIsSkippable : 1; // 0x23c(0x01)
	char UnknownData_23D[0x3]; // 0x23d(0x03)
	int32_t PreferredSplitScreenNum; // 0x240(0x04)
	char bDisableMovementInput : 1; // 0x244(0x01)
	char bDisableLookAtInput : 1; // 0x244(0x01)
	char bHidePlayer : 1; // 0x244(0x01)
	char bHideHud : 1; // 0x244(0x01)
	char UnknownData_244_4 : 4; // 0x244(0x01)
	char UnknownData_245[0x3]; // 0x245(0x03)
	struct TArray<struct FInterpGroupActorInfo> GroupActorInfos; // 0x248(0x10)
	char bShouldShowGore : 1; // 0x258(0x01)
	char UnknownData_258_1 : 7; // 0x258(0x01)
	char UnknownData_259[0x7]; // 0x259(0x07)
	struct TArray<struct UInterpGroupInst*> GroupInst; // 0x260(0x10)
	struct TArray<struct FCameraCutInfo> CameraCuts; // 0x270(0x10)
	char bIsPlaying : 1; // 0x280(0x01)
	char bReversePlayback : 1; // 0x280(0x01)
	char bPaused : 1; // 0x280(0x01)
	char bPendingStop : 1; // 0x280(0x01)
	char UnknownData_280_4 : 4; // 0x280(0x01)
	char UnknownData_281[0x3]; // 0x281(0x03)
	float InterpPosition; // 0x284(0x04)
	char UnknownData_288[0x4]; // 0x288(0x04)
	char ReplicationForceIsPlaying; // 0x28c(0x01)
	char UnknownData_28D[0x3]; // 0x28d(0x03)
	struct FMulticastInlineDelegate OnPlay; // 0x290(0x10)
	struct FMulticastInlineDelegate OnStop; // 0x2a0(0x10)
	struct FMulticastInlineDelegate OnPause; // 0x2b0(0x10)
	char UnknownData_2C0[0x8]; // 0x2c0(0x08)

	void Stop(); // Function Engine.MatineeActor.Stop
	void SetPosition(float NewPosition, bool bJump); // Function Engine.MatineeActor.SetPosition
	void SetLoopingState(bool bNewLooping); // Function Engine.MatineeActor.SetLoopingState
	void Reverse(); // Function Engine.MatineeActor.Reverse
	void Play(); // Function Engine.MatineeActor.Play
	void Pause(); // Function Engine.MatineeActor.Pause
	void EnableGroupByName(struct FString GroupName, bool bEnable); // Function Engine.MatineeActor.EnableGroupByName
	void ChangePlaybackDirection(); // Function Engine.MatineeActor.ChangePlaybackDirection
};

// Class Engine.MatineeActorCameraAnim
// Size: 0x2d0 (Inherited: 0x2c8)
struct AMatineeActorCameraAnim : public AMatineeActor {
	struct UCameraAnim* CameraAnim; // 0x2c8(0x08)
};

// Class Engine.MeshSimplificationSettings
// Size: 0x40 (Inherited: 0x38)
struct UMeshSimplificationSettings : public UDeveloperSettings {
	struct FName MeshReductionModuleName; // 0x38(0x08)
};

// Class Engine.MicroTransactionBase
// Size: 0x68 (Inherited: 0x38)
struct UMicroTransactionBase : public UPlatformInterfaceBase {
	struct TArray<struct FPurchaseInfo> AvailableProducts; // 0x38(0x10)
	struct FString LastError; // 0x48(0x10)
	struct FString LastErrorSolution; // 0x58(0x10)
};

// Class Engine.ModelComponent
// Size: 0x470 (Inherited: 0x430)
struct UModelComponent : public UPrimitiveComponent {
	char UnknownData_430[0x18]; // 0x430(0x18)
	struct UBodySetup* ModelBodySetup; // 0x448(0x08)
	char UnknownData_450[0x20]; // 0x450(0x20)
};

// Class Engine.MorphTarget
// Size: 0x40 (Inherited: 0x28)
struct UMorphTarget : public UObject {
	struct USkeletalMesh* BaseSkelMesh; // 0x28(0x08)
	char UnknownData_30[0x10]; // 0x30(0x10)
};

// Class Engine.NavCollisionBase
// Size: 0x70 (Inherited: 0x28)
struct UNavCollisionBase : public UObject {
	char bIsDynamicObstacle : 1; // 0x28(0x01)
	char UnknownData_28_1 : 7; // 0x28(0x01)
	char UnknownData_29[0x47]; // 0x29(0x47)
};

// Class Engine.NavigationDataChunk
// Size: 0x30 (Inherited: 0x28)
struct UNavigationDataChunk : public UObject {
	struct FName NavigationDataName; // 0x28(0x08)
};

// Class Engine.NavigationSystemConfig
// Size: 0x50 (Inherited: 0x28)
struct UNavigationSystemConfig : public UObject {
	struct FSoftClassPath NavigationSystemClass; // 0x28(0x18)
	struct FNavAgentSelector SupportedAgentsMask; // 0x40(0x04)
	struct FName DefaultAgentName; // 0x44(0x08)
	char bIsOverriden : 1; // 0x4c(0x01)
	char UnknownData_4C_1 : 7; // 0x4c(0x01)
	char UnknownData_4D[0x3]; // 0x4d(0x03)
};

// Class Engine.NavLinkDefinition
// Size: 0x50 (Inherited: 0x28)
struct UNavLinkDefinition : public UObject {
	struct TArray<struct FNavigationLink> Links; // 0x28(0x10)
	struct TArray<struct FNavigationSegmentLink> SegmentLinks; // 0x38(0x10)
	char UnknownData_48[0x8]; // 0x48(0x08)
};

// Class Engine.NetworkSettings
// Size: 0x58 (Inherited: 0x38)
struct UNetworkSettings : public UDeveloperSettings {
	char bVerifyPeer : 1; // 0x38(0x01)
	char bEnableMultiplayerWorldOriginRebasing : 1; // 0x38(0x01)
	char UnknownData_38_2 : 6; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	int32_t MaxRepArraySize; // 0x3c(0x04)
	int32_t MaxRepArrayMemory; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
	struct TArray<struct FNetworkEmulationProfileDescription> NetworkEmulationProfiles; // 0x48(0x10)
};

// Class Engine.NodeMappingContainer
// Size: 0x168 (Inherited: 0x28)
struct UNodeMappingContainer : public UObject {
	struct TMap<struct FName, struct FNodeItem> SourceItems; // 0x28(0x50)
	struct TMap<struct FName, struct FNodeItem> TargetItems; // 0x78(0x50)
	struct TMap<struct FName, struct FName> SourceToTarget; // 0xc8(0x50)
	struct TSoftObjectPtr<struct UObject> SourceAsset; // 0x118(0x28)
	struct TSoftObjectPtr<struct UObject> TargetAsset; // 0x140(0x28)
};

// Class Engine.ObjectLibrary
// Size: 0xa8 (Inherited: 0x28)
struct UObjectLibrary : public UObject {
	struct UObject* ObjectBaseClass; // 0x28(0x08)
	bool bHasBlueprintClasses; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
	struct TArray<struct UObject*> Objects; // 0x38(0x10)
	struct TArray<struct FWeakObjectPtr<struct UObject>> WeakObjects; // 0x48(0x10)
	bool bUseWeakReferences; // 0x58(0x01)
	bool bIsFullyLoaded; // 0x59(0x01)
	char UnknownData_5A[0x4e]; // 0x5a(0x4e)
};

// Class Engine.ObjectReferencer
// Size: 0x38 (Inherited: 0x28)
struct UObjectReferencer : public UObject {
	struct TArray<struct UObject*> ReferencedObjects; // 0x28(0x10)
};

// Class Engine.ObjectTraceWorldSubsystem
// Size: 0x38 (Inherited: 0x30)
struct UObjectTraceWorldSubsystem : public UWorldSubsystem {
	char UnknownData_30[0x8]; // 0x30(0x08)
};

// Class Engine.PackageMapClient
// Size: 0x3f8 (Inherited: 0xe0)
struct UPackageMapClient : public UPackageMap {
	char UnknownData_E0[0x318]; // 0xe0(0x318)
};

// Class Engine.PainCausingVolume
// Size: 0x290 (Inherited: 0x268)
struct APainCausingVolume : public APhysicsVolume {
	char bPainCausing : 1; // 0x268(0x01)
	char UnknownData_268_1 : 7; // 0x268(0x01)
	char UnknownData_269[0x3]; // 0x269(0x03)
	float DamagePerSec; // 0x26c(0x04)
	struct UDamageType* DamageType; // 0x270(0x08)
	float PainInterval; // 0x278(0x04)
	char bEntryPain : 1; // 0x27c(0x01)
	char BACKUP_bPainCausing : 1; // 0x27c(0x01)
	char UnknownData_27C_2 : 6; // 0x27c(0x01)
	char UnknownData_27D[0x3]; // 0x27d(0x03)
	struct AController* DamageInstigator; // 0x280(0x08)
	char UnknownData_288[0x8]; // 0x288(0x08)
};

// Class Engine.ParticleChannelContainerWrapper
// Size: 0x30 (Inherited: 0x28)
struct UParticleChannelContainerWrapper : public UObject {
	struct FParticleChannelContainer Channels; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// Class Engine.ParticleEmitter
// Size: 0x1c0 (Inherited: 0x28)
struct UParticleEmitter : public UObject {
	struct FName EmitterName; // 0x28(0x08)
	int32_t SubUVDataOffset; // 0x30(0x04)
	char EmitterRenderMode; // 0x34(0x01)
	enum class EParticleSignificanceLevel SignificanceLevel; // 0x35(0x01)
	char UnknownData_36[0x1]; // 0x36(0x01)
	char bUseLegacySpawningBehavior : 1; // 0x37(0x01)
	char UnknownData_37_1 : 3; // 0x37(0x01)
	char ConvertedModules : 1; // 0x37(0x01)
	char bIsSoloing : 1; // 0x37(0x01)
	char bCookedOut : 1; // 0x37(0x01)
	char bDisabledLODsKeepEmitterAlive : 1; // 0x37(0x01)
	char bDisableWhenInsignficant : 1; // 0x38(0x01)
	char UnknownData_38_1 : 7; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
	struct TArray<struct UParticleLODLevel*> LODLevels; // 0x40(0x10)
	int32_t PeakActiveParticles; // 0x50(0x04)
	int32_t InitialAllocationCount; // 0x54(0x04)
	float QualityLevelSpawnRateScale; // 0x58(0x04)
	uint32_t DetailModeBitmask; // 0x5c(0x04)
	char UnknownData_60[0x158]; // 0x60(0x158)
	struct FParticleChannelContainer m_ParticleChannels; // 0x1b8(0x04)
	char UnknownData_1BC[0x4]; // 0x1bc(0x04)
};

// Class Engine.ParticleLODLevel
// Size: 0xb8 (Inherited: 0x28)
struct UParticleLODLevel : public UObject {
	int32_t Level; // 0x28(0x04)
	char bEnabled : 1; // 0x2c(0x01)
	char UnknownData_2C_1 : 7; // 0x2c(0x01)
	char UnknownData_2D[0x3]; // 0x2d(0x03)
	struct UParticleModuleRequired* RequiredModule; // 0x30(0x08)
	struct TArray<struct UParticleModule*> Modules; // 0x38(0x10)
	struct UParticleModuleTypeDataBase* TypeDataModule; // 0x48(0x08)
	struct UParticleModuleSpawn* SpawnModule; // 0x50(0x08)
	struct UParticleModuleEventGenerator* EventGenerator; // 0x58(0x08)
	struct TArray<struct UParticleModuleSpawnBase*> SpawningModules; // 0x60(0x10)
	struct TArray<struct UParticleModule*> SpawnModules; // 0x70(0x10)
	struct TArray<struct UParticleModule*> UpdateModules; // 0x80(0x10)
	struct TArray<struct UParticleModuleOrbit*> OrbitModules; // 0x90(0x10)
	struct TArray<struct UParticleModuleEventReceiverBase*> EventReceiverModules; // 0xa0(0x10)
	char ConvertedModules : 1; // 0xb0(0x01)
	char UnknownData_B0_1 : 7; // 0xb0(0x01)
	char UnknownData_B1[0x3]; // 0xb1(0x03)
	int32_t PeakActiveParticles; // 0xb4(0x04)
};

// Class Engine.ParticleModule
// Size: 0x30 (Inherited: 0x28)
struct UParticleModule : public UObject {
	char bSpawnModule : 1; // 0x28(0x01)
	char bUpdateModule : 1; // 0x28(0x01)
	char bFinalUpdateModule : 1; // 0x28(0x01)
	char bUpdateForGPUEmitter : 1; // 0x28(0x01)
	char bCurvesAsColor : 1; // 0x28(0x01)
	char b3DDrawMode : 1; // 0x28(0x01)
	char bSupported3DDrawMode : 1; // 0x28(0x01)
	char bEnabled : 1; // 0x28(0x01)
	char bEditable : 1; // 0x29(0x01)
	char LODDuplicate : 1; // 0x29(0x01)
	char bSupportsRandomSeed : 1; // 0x29(0x01)
	char bRequiresLoopingNotification : 1; // 0x29(0x01)
	char UnknownData_29_4 : 4; // 0x29(0x01)
	char LODValidity; // 0x2a(0x01)
	char UnknownData_2B[0x5]; // 0x2b(0x05)
};

// Class Engine.ParticleModuleAccelerationBase
// Size: 0x38 (Inherited: 0x30)
struct UParticleModuleAccelerationBase : public UParticleModule {
	char bAlwaysInWorldSpace : 1; // 0x30(0x01)
	char UnknownData_30_1 : 7; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// Class Engine.ParticleModuleAcceleration
// Size: 0x88 (Inherited: 0x38)
struct UParticleModuleAcceleration : public UParticleModuleAccelerationBase {
	struct FRawDistributionVector Acceleration; // 0x38(0x48)
	char bApplyOwnerScale : 1; // 0x80(0x01)
	char UnknownData_80_1 : 7; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)
};

// Class Engine.ParticleModuleAccelerationConstant
// Size: 0x48 (Inherited: 0x38)
struct UParticleModuleAccelerationConstant : public UParticleModuleAccelerationBase {
	struct FVector Acceleration; // 0x38(0x0c)
	char UnknownData_44[0x4]; // 0x44(0x04)
};

// Class Engine.ParticleModuleAccelerationDrag
// Size: 0x70 (Inherited: 0x38)
struct UParticleModuleAccelerationDrag : public UParticleModuleAccelerationBase {
	struct UDistributionFloat* DragCoefficient; // 0x38(0x08)
	struct FRawDistributionFloat DragCoefficientRaw; // 0x40(0x30)
};

// Class Engine.ParticleModuleAccelerationDragScaleOverLife
// Size: 0x70 (Inherited: 0x38)
struct UParticleModuleAccelerationDragScaleOverLife : public UParticleModuleAccelerationBase {
	struct UDistributionFloat* DragScale; // 0x38(0x08)
	struct FRawDistributionFloat DragScaleRaw; // 0x40(0x30)
};

// Class Engine.ParticleModuleAccelerationOverLifetime
// Size: 0x80 (Inherited: 0x38)
struct UParticleModuleAccelerationOverLifetime : public UParticleModuleAccelerationBase {
	struct FRawDistributionVector AccelOverLife; // 0x38(0x48)
};

// Class Engine.ParticleModuleAttractorLine
// Size: 0xa8 (Inherited: 0x30)
struct UParticleModuleAttractorLine : public UParticleModuleAttractorBase {
	struct FVector EndPoint0; // 0x30(0x0c)
	struct FVector EndPoint1; // 0x3c(0x0c)
	struct FRawDistributionFloat Range; // 0x48(0x30)
	struct FRawDistributionFloat Strength; // 0x78(0x30)
};

// Class Engine.ParticleModuleAttractorParticle
// Size: 0xb0 (Inherited: 0x30)
struct UParticleModuleAttractorParticle : public UParticleModuleAttractorBase {
	struct FName EmitterName; // 0x30(0x08)
	struct FRawDistributionFloat Range; // 0x38(0x30)
	char bStrengthByDistance : 1; // 0x68(0x01)
	char UnknownData_68_1 : 7; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
	struct FRawDistributionFloat Strength; // 0x70(0x30)
	char bAffectBaseVelocity : 1; // 0xa0(0x01)
	char UnknownData_A0_1 : 7; // 0xa0(0x01)
	char UnknownData_A1[0x3]; // 0xa1(0x03)
	char SelectionMethod; // 0xa4(0x01)
	char UnknownData_A5[0x3]; // 0xa5(0x03)
	char bRenewSource : 1; // 0xa8(0x01)
	char bInheritSourceVel : 1; // 0xa8(0x01)
	char UnknownData_A8_2 : 6; // 0xa8(0x01)
	char UnknownData_A9[0x3]; // 0xa9(0x03)
	int32_t LastSelIndex; // 0xac(0x04)
};

// Class Engine.ParticleModuleAttractorPoint
// Size: 0xe0 (Inherited: 0x30)
struct UParticleModuleAttractorPoint : public UParticleModuleAttractorBase {
	struct FRawDistributionVector Position; // 0x30(0x48)
	struct FRawDistributionFloat Range; // 0x78(0x30)
	struct FRawDistributionFloat Strength; // 0xa8(0x30)
	char StrengthByDistance : 1; // 0xd8(0x01)
	char bAffectBaseVelocity : 1; // 0xd8(0x01)
	char bOverrideVelocity : 1; // 0xd8(0x01)
	char bUseWorldSpacePosition : 1; // 0xd8(0x01)
	char Positive_X : 1; // 0xd8(0x01)
	char Positive_Y : 1; // 0xd8(0x01)
	char Positive_Z : 1; // 0xd8(0x01)
	char Negative_X : 1; // 0xd8(0x01)
	char Negative_Y : 1; // 0xd9(0x01)
	char Negative_Z : 1; // 0xd9(0x01)
	char UnknownData_D9_2 : 6; // 0xd9(0x01)
	char UnknownData_DA[0x6]; // 0xda(0x06)
};

// Class Engine.ParticleModuleAttractorPointGravity
// Size: 0x78 (Inherited: 0x30)
struct UParticleModuleAttractorPointGravity : public UParticleModuleAttractorBase {
	struct FVector Position; // 0x30(0x0c)
	float Radius; // 0x3c(0x04)
	struct UDistributionFloat* Strength; // 0x40(0x08)
	struct FRawDistributionFloat StrengthRaw; // 0x48(0x30)
};

// Class Engine.ParticleModuleBeamModifier
// Size: 0x108 (Inherited: 0x30)
struct UParticleModuleBeamModifier : public UParticleModuleBeamBase {
	char ModifierType; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	struct FBeamModifierOptions PositionOptions; // 0x34(0x04)
	struct FRawDistributionVector Position; // 0x38(0x48)
	struct FBeamModifierOptions TangentOptions; // 0x80(0x04)
	char UnknownData_84[0x4]; // 0x84(0x04)
	struct FRawDistributionVector Tangent; // 0x88(0x48)
	char bAbsoluteTangent : 1; // 0xd0(0x01)
	char UnknownData_D0_1 : 7; // 0xd0(0x01)
	char UnknownData_D1[0x3]; // 0xd1(0x03)
	struct FBeamModifierOptions StrengthOptions; // 0xd4(0x04)
	struct FRawDistributionFloat Strength; // 0xd8(0x30)
};

// Class Engine.ParticleModuleBeamNoise
// Size: 0x190 (Inherited: 0x30)
struct UParticleModuleBeamNoise : public UParticleModuleBeamBase {
	char bLowFreq_Enabled : 1; // 0x30(0x01)
	char UnknownData_30_1 : 7; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	int32_t Frequency; // 0x34(0x04)
	int32_t Frequency_LowRange; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct FRawDistributionVector NoiseRange; // 0x40(0x48)
	struct FRawDistributionFloat NoiseRangeScale; // 0x88(0x30)
	char bNRScaleEmitterTime : 1; // 0xb8(0x01)
	char UnknownData_B8_1 : 7; // 0xb8(0x01)
	char UnknownData_B9[0x7]; // 0xb9(0x07)
	struct FRawDistributionVector NoiseSpeed; // 0xc0(0x48)
	char bSmooth : 1; // 0x108(0x01)
	char UnknownData_108_1 : 7; // 0x108(0x01)
	char UnknownData_109[0x3]; // 0x109(0x03)
	float NoiseLockRadius; // 0x10c(0x04)
	char bNoiseLock : 1; // 0x110(0x01)
	char bOscillate : 1; // 0x110(0x01)
	char UnknownData_110_2 : 6; // 0x110(0x01)
	char UnknownData_111[0x3]; // 0x111(0x03)
	float NoiseLockTime; // 0x114(0x04)
	float NoiseTension; // 0x118(0x04)
	char bUseNoiseTangents : 1; // 0x11c(0x01)
	char UnknownData_11C_1 : 7; // 0x11c(0x01)
	char UnknownData_11D[0x3]; // 0x11d(0x03)
	struct FRawDistributionFloat NoiseTangentStrength; // 0x120(0x30)
	int32_t NoiseTessellation; // 0x150(0x04)
	char bTargetNoise : 1; // 0x154(0x01)
	char UnknownData_154_1 : 7; // 0x154(0x01)
	char UnknownData_155[0x3]; // 0x155(0x03)
	float FrequencyDistance; // 0x158(0x04)
	char bApplyNoiseScale : 1; // 0x15c(0x01)
	char UnknownData_15C_1 : 7; // 0x15c(0x01)
	char UnknownData_15D[0x3]; // 0x15d(0x03)
	struct FRawDistributionFloat NoiseScale; // 0x160(0x30)
};

// Class Engine.ParticleModuleBeamSource
// Size: 0x118 (Inherited: 0x30)
struct UParticleModuleBeamSource : public UParticleModuleBeamBase {
	char SourceMethod; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	struct FName SourceName; // 0x34(0x08)
	char bSourceAbsolute : 1; // 0x3c(0x01)
	char UnknownData_3C_1 : 7; // 0x3c(0x01)
	char UnknownData_3D[0x3]; // 0x3d(0x03)
	struct FRawDistributionVector Source; // 0x40(0x48)
	char bLockSource : 1; // 0x88(0x01)
	char UnknownData_88_1 : 7; // 0x88(0x01)
	char UnknownData_89[0x3]; // 0x89(0x03)
	char SourceTangentMethod; // 0x8c(0x01)
	char UnknownData_8D[0x3]; // 0x8d(0x03)
	struct FRawDistributionVector SourceTangent; // 0x90(0x48)
	char bLockSourceTangent : 1; // 0xd8(0x01)
	char UnknownData_D8_1 : 7; // 0xd8(0x01)
	char UnknownData_D9[0x7]; // 0xd9(0x07)
	struct FRawDistributionFloat SourceStrength; // 0xe0(0x30)
	char bLockSourceStength : 1; // 0x110(0x01)
	char UnknownData_110_1 : 7; // 0x110(0x01)
	char UnknownData_111[0x7]; // 0x111(0x07)
};

// Class Engine.ParticleModuleBeamTarget
// Size: 0x120 (Inherited: 0x30)
struct UParticleModuleBeamTarget : public UParticleModuleBeamBase {
	char TargetMethod; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	struct FName TargetName; // 0x34(0x08)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct FRawDistributionVector Target; // 0x40(0x48)
	char bTargetAbsolute : 1; // 0x88(0x01)
	char bLockTarget : 1; // 0x88(0x01)
	char UnknownData_88_2 : 6; // 0x88(0x01)
	char UnknownData_89[0x3]; // 0x89(0x03)
	char TargetTangentMethod; // 0x8c(0x01)
	char UnknownData_8D[0x3]; // 0x8d(0x03)
	struct FRawDistributionVector TargetTangent; // 0x90(0x48)
	char bLockTargetTangent : 1; // 0xd8(0x01)
	char UnknownData_D8_1 : 7; // 0xd8(0x01)
	char UnknownData_D9[0x7]; // 0xd9(0x07)
	struct FRawDistributionFloat TargetStrength; // 0xe0(0x30)
	char bLockTargetStength : 1; // 0x110(0x01)
	char UnknownData_110_1 : 7; // 0x110(0x01)
	char UnknownData_111[0x3]; // 0x111(0x03)
	float LockRadius; // 0x114(0x04)
	char UnknownData_118[0x8]; // 0x118(0x08)
};

// Class Engine.ParticleModuleCameraOffset
// Size: 0x68 (Inherited: 0x30)
struct UParticleModuleCameraOffset : public UParticleModuleCameraBase {
	struct FRawDistributionFloat CameraOffset; // 0x30(0x30)
	char bSpawnTimeOnly : 1; // 0x60(0x01)
	char UnknownData_60_1 : 7; // 0x60(0x01)
	char UnknownData_61[0x3]; // 0x61(0x03)
	char UpdateMethod; // 0x64(0x01)
	char UnknownData_65[0x3]; // 0x65(0x03)
};

// Class Engine.ParticleModuleCollision
// Size: 0x190 (Inherited: 0x30)
struct UParticleModuleCollision : public UParticleModuleCollisionBase {
	struct FRawDistributionVector DampingFactor; // 0x30(0x48)
	struct FRawDistributionVector DampingFactorRotation; // 0x78(0x48)
	struct FRawDistributionFloat MaxCollisions; // 0xc0(0x30)
	char CollisionCompletionOption; // 0xf0(0x01)
	char UnknownData_F1[0x7]; // 0xf1(0x07)
	struct TArray<char> CollisionTypes; // 0xf8(0x10)
	char UnknownData_108[0x8]; // 0x108(0x08)
	char bApplyPhysics : 1; // 0x110(0x01)
	char bIgnoreTriggerVolumes : 1; // 0x110(0x01)
	char UnknownData_110_2 : 6; // 0x110(0x01)
	char UnknownData_111[0x7]; // 0x111(0x07)
	struct FRawDistributionFloat ParticleMass; // 0x118(0x30)
	float DirScalar; // 0x148(0x04)
	char bPawnsDoNotDecrementCount : 1; // 0x14c(0x01)
	char bOnlyVerticalNormalsDecrementCount : 1; // 0x14c(0x01)
	char UnknownData_14C_2 : 6; // 0x14c(0x01)
	char UnknownData_14D[0x3]; // 0x14d(0x03)
	float VerticalFudgeFactor; // 0x150(0x04)
	char UnknownData_154[0x4]; // 0x154(0x04)
	struct FRawDistributionFloat DelayAmount; // 0x158(0x30)
	char bDropDetail : 1; // 0x188(0x01)
	char bCollideOnlyIfVisible : 1; // 0x188(0x01)
	char bIgnoreSourceActor : 1; // 0x188(0x01)
	char UnknownData_188_3 : 5; // 0x188(0x01)
	char UnknownData_189[0x3]; // 0x189(0x03)
	float MaxCollisionDistance; // 0x18c(0x04)
};

// Class Engine.ParticleModuleCollisionGPU
// Size: 0xa8 (Inherited: 0x30)
struct UParticleModuleCollisionGPU : public UParticleModuleCollisionBase {
	struct FRawDistributionFloat Resilience; // 0x30(0x30)
	struct FRawDistributionFloat ResilienceScaleOverLife; // 0x60(0x30)
	float Friction; // 0x90(0x04)
	float RandomSpread; // 0x94(0x04)
	float RandomDistribution; // 0x98(0x04)
	float RadiusScale; // 0x9c(0x04)
	float RadiusBias; // 0xa0(0x04)
	char Response; // 0xa4(0x01)
	char CollisionMode; // 0xa5(0x01)
	char UnknownData_A6[0x2]; // 0xa6(0x02)
};

// Class Engine.ParticleModuleColor
// Size: 0xb0 (Inherited: 0x30)
struct UParticleModuleColor : public UParticleModuleColorBase {
	struct FRawDistributionVector StartColor; // 0x30(0x48)
	struct FRawDistributionFloat StartAlpha; // 0x78(0x30)
	char bClampAlpha : 1; // 0xa8(0x01)
	char UnknownData_A8_1 : 7; // 0xa8(0x01)
	char UnknownData_A9[0x7]; // 0xa9(0x07)
};

// Class Engine.ParticleModuleColor_Seeded
// Size: 0xd0 (Inherited: 0xb0)
struct UParticleModuleColor_Seeded : public UParticleModuleColor {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0xb0(0x20)
};

// Class Engine.ParticleModuleColorOverLife
// Size: 0xb0 (Inherited: 0x30)
struct UParticleModuleColorOverLife : public UParticleModuleColorBase {
	struct FRawDistributionVector ColorOverLife; // 0x30(0x48)
	struct FRawDistributionFloat AlphaOverLife; // 0x78(0x30)
	char bClampAlpha : 1; // 0xa8(0x01)
	char UnknownData_A8_1 : 7; // 0xa8(0x01)
	char UnknownData_A9[0x7]; // 0xa9(0x07)
};

// Class Engine.ParticleModuleColorScaleOverLife
// Size: 0xb0 (Inherited: 0x30)
struct UParticleModuleColorScaleOverLife : public UParticleModuleColorBase {
	struct FRawDistributionVector ColorScaleOverLife; // 0x30(0x48)
	struct FRawDistributionFloat AlphaScaleOverLife; // 0x78(0x30)
	char bEmitterTime : 1; // 0xa8(0x01)
	char UnknownData_A8_1 : 7; // 0xa8(0x01)
	char UnknownData_A9[0x7]; // 0xa9(0x07)
};

// Class Engine.ParticleModuleEventGenerator
// Size: 0x40 (Inherited: 0x30)
struct UParticleModuleEventGenerator : public UParticleModuleEventBase {
	struct TArray<struct FParticleEvent_GenerateInfo> Events; // 0x30(0x10)
};

// Class Engine.ParticleModuleEventReceiverBase
// Size: 0x40 (Inherited: 0x30)
struct UParticleModuleEventReceiverBase : public UParticleModuleEventBase {
	char EventGeneratorType; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	struct FName EventName; // 0x34(0x08)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.ParticleModuleEventReceiverKillParticles
// Size: 0x48 (Inherited: 0x40)
struct UParticleModuleEventReceiverKillParticles : public UParticleModuleEventReceiverBase {
	char bStopSpawning : 1; // 0x40(0x01)
	char UnknownData_40_1 : 7; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
};

// Class Engine.ParticleModuleEventReceiverSpawn
// Size: 0xd8 (Inherited: 0x40)
struct UParticleModuleEventReceiverSpawn : public UParticleModuleEventReceiverBase {
	struct FRawDistributionFloat SpawnCount; // 0x40(0x30)
	char bUseParticleTime : 1; // 0x70(0x01)
	char bUsePSysLocation : 1; // 0x70(0x01)
	char bInheritVelocity : 1; // 0x70(0x01)
	char UnknownData_70_3 : 5; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
	struct FRawDistributionVector InheritVelocityScale; // 0x78(0x48)
	struct TArray<struct UPhysicalMaterial*> PhysicalMaterials; // 0xc0(0x10)
	char bBanPhysicalMaterials : 1; // 0xd0(0x01)
	char UnknownData_D0_1 : 7; // 0xd0(0x01)
	char UnknownData_D1[0x7]; // 0xd1(0x07)
};

// Class Engine.ParticleModuleKillBox
// Size: 0xc8 (Inherited: 0x30)
struct UParticleModuleKillBox : public UParticleModuleKillBase {
	struct FRawDistributionVector LowerLeftCorner; // 0x30(0x48)
	struct FRawDistributionVector UpperRightCorner; // 0x78(0x48)
	char bAbsolute : 1; // 0xc0(0x01)
	char bKillInside : 1; // 0xc0(0x01)
	char bAxisAlignedAndFixedSize : 1; // 0xc0(0x01)
	char UnknownData_C0_3 : 5; // 0xc0(0x01)
	char UnknownData_C1[0x7]; // 0xc1(0x07)
};

// Class Engine.ParticleModuleKillHeight
// Size: 0x68 (Inherited: 0x30)
struct UParticleModuleKillHeight : public UParticleModuleKillBase {
	struct FRawDistributionFloat Height; // 0x30(0x30)
	char bAbsolute : 1; // 0x60(0x01)
	char bFloor : 1; // 0x60(0x01)
	char bApplyPSysScale : 1; // 0x60(0x01)
	char UnknownData_60_3 : 5; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
};

// Class Engine.ParticleModuleLifetime
// Size: 0x60 (Inherited: 0x30)
struct UParticleModuleLifetime : public UParticleModuleLifetimeBase {
	struct FRawDistributionFloat Lifetime; // 0x30(0x30)
};

// Class Engine.ParticleModuleLifetime_Seeded
// Size: 0x80 (Inherited: 0x60)
struct UParticleModuleLifetime_Seeded : public UParticleModuleLifetime {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x60(0x20)
};

// Class Engine.ParticleModuleLight
// Size: 0x120 (Inherited: 0x30)
struct UParticleModuleLight : public UParticleModuleLightBase {
	bool bUseInverseSquaredFalloff; // 0x30(0x01)
	bool bAffectsTranslucency; // 0x31(0x01)
	bool bPreviewLightRadius; // 0x32(0x01)
	char UnknownData_33[0x1]; // 0x33(0x01)
	float SpawnFraction; // 0x34(0x04)
	struct FRawDistributionVector ColorScaleOverLife; // 0x38(0x48)
	struct FRawDistributionFloat BrightnessOverLife; // 0x80(0x30)
	struct FRawDistributionFloat RadiusScale; // 0xb0(0x30)
	struct FRawDistributionFloat LightExponent; // 0xe0(0x30)
	struct FLightingChannels LightingChannels; // 0x110(0x01)
	char UnknownData_111[0x3]; // 0x111(0x03)
	float VolumetricScatteringIntensity; // 0x114(0x04)
	bool bHighQualityLights; // 0x118(0x01)
	bool bShadowCastingLights; // 0x119(0x01)
	char UnknownData_11A[0x6]; // 0x11a(0x06)
};

// Class Engine.ParticleModuleLight_Seeded
// Size: 0x140 (Inherited: 0x120)
struct UParticleModuleLight_Seeded : public UParticleModuleLight {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x120(0x20)
};

// Class Engine.ParticleModuleLocation
// Size: 0x80 (Inherited: 0x30)
struct UParticleModuleLocation : public UParticleModuleLocationBase {
	struct FRawDistributionVector StartLocation; // 0x30(0x48)
	float DistributeOverNPoints; // 0x78(0x04)
	float DistributeThreshold; // 0x7c(0x04)
};

// Class Engine.ParticleModuleLocation_Seeded
// Size: 0xa0 (Inherited: 0x80)
struct UParticleModuleLocation_Seeded : public UParticleModuleLocation {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x80(0x20)
};

// Class Engine.ParticleModuleLocationBoneSocket
// Size: 0x70 (Inherited: 0x30)
struct UParticleModuleLocationBoneSocket : public UParticleModuleLocationBase {
	char SourceType; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	struct FVector UniversalOffset; // 0x34(0x0c)
	struct TArray<struct FLocationBoneSocketInfo> SourceLocations; // 0x40(0x10)
	char SelectionMethod; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	char bUpdatePositionEachFrame : 1; // 0x54(0x01)
	char bOrientMeshEmitters : 1; // 0x54(0x01)
	char bInheritBoneVelocity : 1; // 0x54(0x01)
	char UnknownData_54_3 : 5; // 0x54(0x01)
	char UnknownData_55[0x3]; // 0x55(0x03)
	float InheritVelocityScale; // 0x58(0x04)
	struct FName SkelMeshActorParamName; // 0x5c(0x08)
	int32_t NumPreSelectedIndices; // 0x64(0x04)
	char UnknownData_68[0x8]; // 0x68(0x08)
};

// Class Engine.ParticleModuleLocationDirect
// Size: 0x150 (Inherited: 0x30)
struct UParticleModuleLocationDirect : public UParticleModuleLocationBase {
	struct FRawDistributionVector Location; // 0x30(0x48)
	struct FRawDistributionVector LocationOffset; // 0x78(0x48)
	struct FRawDistributionVector ScaleFactor; // 0xc0(0x48)
	struct FRawDistributionVector Direction; // 0x108(0x48)
};

// Class Engine.ParticleModuleLocationEmitter
// Size: 0x50 (Inherited: 0x30)
struct UParticleModuleLocationEmitter : public UParticleModuleLocationBase {
	struct FName EmitterName; // 0x30(0x08)
	char SelectionMethod; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	char InheritSourceVelocity : 1; // 0x3c(0x01)
	char UnknownData_3C_1 : 7; // 0x3c(0x01)
	char UnknownData_3D[0x3]; // 0x3d(0x03)
	float InheritSourceVelocityScale; // 0x40(0x04)
	char bInheritSourceRotation : 1; // 0x44(0x01)
	char UnknownData_44_1 : 7; // 0x44(0x01)
	char UnknownData_45[0x3]; // 0x45(0x03)
	float InheritSourceRotationScale; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.ParticleModuleLocationEmitterDirect
// Size: 0x38 (Inherited: 0x30)
struct UParticleModuleLocationEmitterDirect : public UParticleModuleLocationBase {
	struct FName EmitterName; // 0x30(0x08)
};

// Class Engine.ParticleModuleLocationPrimitiveBase
// Size: 0xb0 (Inherited: 0x30)
struct UParticleModuleLocationPrimitiveBase : public UParticleModuleLocationBase {
	char Positive_X : 1; // 0x30(0x01)
	char Positive_Y : 1; // 0x30(0x01)
	char Positive_Z : 1; // 0x30(0x01)
	char Negative_X : 1; // 0x30(0x01)
	char Negative_Y : 1; // 0x30(0x01)
	char Negative_Z : 1; // 0x30(0x01)
	char SurfaceOnly : 1; // 0x30(0x01)
	char Velocity : 1; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
	struct FRawDistributionFloat VelocityScale; // 0x38(0x30)
	struct FRawDistributionVector StartLocation; // 0x68(0x48)
};

// Class Engine.ParticleModuleLocationPrimitiveCylinder
// Size: 0x120 (Inherited: 0xb0)
struct UParticleModuleLocationPrimitiveCylinder : public UParticleModuleLocationPrimitiveBase {
	char RadialVelocity : 1; // 0xb0(0x01)
	char UnknownData_B0_1 : 7; // 0xb0(0x01)
	char UnknownData_B1[0x7]; // 0xb1(0x07)
	struct FRawDistributionFloat StartRadius; // 0xb8(0x30)
	struct FRawDistributionFloat StartHeight; // 0xe8(0x30)
	char HeightAxis; // 0x118(0x01)
	char UnknownData_119[0x7]; // 0x119(0x07)
};

// Class Engine.ParticleModuleLocationPrimitiveCylinder_Seeded
// Size: 0x140 (Inherited: 0x120)
struct UParticleModuleLocationPrimitiveCylinder_Seeded : public UParticleModuleLocationPrimitiveCylinder {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x120(0x20)
};

// Class Engine.ParticleModuleLocationPrimitiveSphere
// Size: 0xe0 (Inherited: 0xb0)
struct UParticleModuleLocationPrimitiveSphere : public UParticleModuleLocationPrimitiveBase {
	struct FRawDistributionFloat StartRadius; // 0xb0(0x30)
};

// Class Engine.ParticleModuleLocationPrimitiveSphere_Seeded
// Size: 0x100 (Inherited: 0xe0)
struct UParticleModuleLocationPrimitiveSphere_Seeded : public UParticleModuleLocationPrimitiveSphere {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0xe0(0x20)
};

// Class Engine.ParticleModuleLocationPrimitiveTriangle
// Size: 0x108 (Inherited: 0x30)
struct UParticleModuleLocationPrimitiveTriangle : public UParticleModuleLocationBase {
	struct FRawDistributionVector StartOffset; // 0x30(0x48)
	struct FRawDistributionFloat Height; // 0x78(0x30)
	struct FRawDistributionFloat Angle; // 0xa8(0x30)
	struct FRawDistributionFloat Thickness; // 0xd8(0x30)
};

// Class Engine.ParticleModuleLocationSkelVertSurface
// Size: 0x90 (Inherited: 0x30)
struct UParticleModuleLocationSkelVertSurface : public UParticleModuleLocationBase {
	char SourceType; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	struct FVector UniversalOffset; // 0x34(0x0c)
	char bUpdatePositionEachFrame : 1; // 0x40(0x01)
	char bOrientMeshEmitters : 1; // 0x40(0x01)
	char bInheritBoneVelocity : 1; // 0x40(0x01)
	char UnknownData_40_3 : 5; // 0x40(0x01)
	char UnknownData_41[0x3]; // 0x41(0x03)
	float InheritVelocityScale; // 0x44(0x04)
	struct FName SkelMeshActorParamName; // 0x48(0x08)
	struct TArray<struct FName> ValidAssociatedBones; // 0x50(0x10)
	char bEnforceNormalCheck : 1; // 0x60(0x01)
	char UnknownData_60_1 : 7; // 0x60(0x01)
	char UnknownData_61[0x3]; // 0x61(0x03)
	struct FVector NormalToCompare; // 0x64(0x0c)
	float NormalCheckToleranceDegrees; // 0x70(0x04)
	float NormalCheckTolerance; // 0x74(0x04)
	struct TArray<int32_t> ValidMaterialIndices; // 0x78(0x10)
	char bInheritVertexColor : 1; // 0x88(0x01)
	char bInheritUV : 1; // 0x88(0x01)
	char UnknownData_88_2 : 6; // 0x88(0x01)
	char UnknownData_89[0x3]; // 0x89(0x03)
	uint32_t InheritUVChannel; // 0x8c(0x04)
};

// Class Engine.ParticleModuleLocationWorldOffset_Seeded
// Size: 0xa0 (Inherited: 0x80)
struct UParticleModuleLocationWorldOffset_Seeded : public UParticleModuleLocationWorldOffset {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x80(0x20)
};

// Class Engine.ParticleModuleMeshMaterial
// Size: 0x40 (Inherited: 0x30)
struct UParticleModuleMeshMaterial : public UParticleModuleMaterialBase {
	struct TArray<struct UMaterialInterface*> MeshMaterials; // 0x30(0x10)
};

// Class Engine.ParticleModuleMeshRotation
// Size: 0x80 (Inherited: 0x30)
struct UParticleModuleMeshRotation : public UParticleModuleRotationBase {
	struct FRawDistributionVector StartRotation; // 0x30(0x48)
	char bInheritParent : 1; // 0x78(0x01)
	char UnknownData_78_1 : 7; // 0x78(0x01)
	char UnknownData_79[0x7]; // 0x79(0x07)
};

// Class Engine.ParticleModuleMeshRotation_Seeded
// Size: 0xa0 (Inherited: 0x80)
struct UParticleModuleMeshRotation_Seeded : public UParticleModuleMeshRotation {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x80(0x20)
};

// Class Engine.ParticleModuleMeshRotationRate
// Size: 0x78 (Inherited: 0x30)
struct UParticleModuleMeshRotationRate : public UParticleModuleRotationRateBase {
	struct FRawDistributionVector StartRotationRate; // 0x30(0x48)
};

// Class Engine.ParticleModuleMeshRotationRate_Seeded
// Size: 0x98 (Inherited: 0x78)
struct UParticleModuleMeshRotationRate_Seeded : public UParticleModuleMeshRotationRate {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x78(0x20)
};

// Class Engine.ParticleModuleMeshRotationRateMultiplyLife
// Size: 0x78 (Inherited: 0x30)
struct UParticleModuleMeshRotationRateMultiplyLife : public UParticleModuleRotationRateBase {
	struct FRawDistributionVector LifeMultiplier; // 0x30(0x48)
};

// Class Engine.ParticleModuleMeshRotationRateOverLife
// Size: 0x80 (Inherited: 0x30)
struct UParticleModuleMeshRotationRateOverLife : public UParticleModuleRotationRateBase {
	struct FRawDistributionVector RotRate; // 0x30(0x48)
	char bScaleRotRate : 1; // 0x78(0x01)
	char UnknownData_78_1 : 7; // 0x78(0x01)
	char UnknownData_79[0x7]; // 0x79(0x07)
};

// Class Engine.ParticleModuleOrbitBase
// Size: 0x38 (Inherited: 0x30)
struct UParticleModuleOrbitBase : public UParticleModule {
	char bUseEmitterTime : 1; // 0x30(0x01)
	char UnknownData_30_1 : 7; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// Class Engine.ParticleModuleOrbit
// Size: 0x130 (Inherited: 0x38)
struct UParticleModuleOrbit : public UParticleModuleOrbitBase {
	char ChainMode; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
	struct FRawDistributionVector OffsetAmount; // 0x40(0x48)
	struct FOrbitOptions OffsetOptions; // 0x88(0x04)
	char UnknownData_8C[0x4]; // 0x8c(0x04)
	struct FRawDistributionVector RotationAmount; // 0x90(0x48)
	struct FOrbitOptions RotationOptions; // 0xd8(0x04)
	char UnknownData_DC[0x4]; // 0xdc(0x04)
	struct FRawDistributionVector RotationRateAmount; // 0xe0(0x48)
	struct FOrbitOptions RotationRateOptions; // 0x128(0x04)
	char UnknownData_12C[0x4]; // 0x12c(0x04)
};

// Class Engine.ParticleModuleOrientationAxisLock
// Size: 0x38 (Inherited: 0x30)
struct UParticleModuleOrientationAxisLock : public UParticleModuleOrientationBase {
	char LockAxisFlags; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// Class Engine.ParticleModuleParameterDynamic
// Size: 0x48 (Inherited: 0x30)
struct UParticleModuleParameterDynamic : public UParticleModuleParameterBase {
	struct TArray<struct FEmitterDynamicParameter> DynamicParams; // 0x30(0x10)
	int32_t UpdateFlags; // 0x40(0x04)
	char bUsesVelocity : 1; // 0x44(0x01)
	char UnknownData_44_1 : 7; // 0x44(0x01)
	char UnknownData_45[0x3]; // 0x45(0x03)
};

// Class Engine.ParticleModuleParameterDynamic_Seeded
// Size: 0x68 (Inherited: 0x48)
struct UParticleModuleParameterDynamic_Seeded : public UParticleModuleParameterDynamic {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x48(0x20)
};

// Class Engine.ParticleModulePivotOffset
// Size: 0x38 (Inherited: 0x30)
struct UParticleModulePivotOffset : public UParticleModuleLocationBase {
	struct FVector2D PivotOffset; // 0x30(0x08)
};

// Class Engine.ParticleModuleRequired
// Size: 0x140 (Inherited: 0x30)
struct UParticleModuleRequired : public UParticleModule {
	struct UMaterialInterface* Material; // 0x30(0x08)
	float MinFacingCameraBlendDistance; // 0x38(0x04)
	float MaxFacingCameraBlendDistance; // 0x3c(0x04)
	struct FVector EmitterOrigin; // 0x40(0x0c)
	struct FRotator EmitterRotation; // 0x4c(0x0c)
	char ScreenAlignment; // 0x58(0x01)
	char bUseLocalSpace : 1; // 0x59(0x01)
	char bKillOnDeactivate : 1; // 0x59(0x01)
	char bKillOnCompleted : 1; // 0x59(0x01)
	char UnknownData_59_3 : 5; // 0x59(0x01)
	char SortMode; // 0x5a(0x01)
	char bUseLegacyEmitterTime : 1; // 0x5b(0x01)
	char bRemoveHMDRoll : 1; // 0x5b(0x01)
	char bEmitterDurationUseRange : 1; // 0x5b(0x01)
	char UnknownData_5B_3 : 5; // 0x5b(0x01)
	float EmitterDuration; // 0x5c(0x04)
	struct FRawDistributionFloat SpawnRate; // 0x60(0x30)
	struct TArray<struct FParticleBurst> BurstList; // 0x90(0x10)
	float EmitterDelay; // 0xa0(0x04)
	float EmitterDelayLow; // 0xa4(0x04)
	char bDelayFirstLoopOnly : 1; // 0xa8(0x01)
	char UnknownData_A8_1 : 7; // 0xa8(0x01)
	char InterpolationMethod; // 0xa9(0x01)
	char bScaleUV : 1; // 0xaa(0x01)
	char bEmitterDelayUseRange : 1; // 0xaa(0x01)
	char UnknownData_AA_2 : 6; // 0xaa(0x01)
	char ParticleBurstMethod; // 0xab(0x01)
	char bOverrideSystemMacroUV : 1; // 0xac(0x01)
	char bUseMaxDrawCount : 1; // 0xac(0x01)
	char UnknownData_AC_2 : 6; // 0xac(0x01)
	char OpacitySourceMode; // 0xad(0x01)
	char EmitterNormalsMode; // 0xae(0x01)
	char bOrbitModuleAffectsVelocityAlignment : 1; // 0xaf(0x01)
	char UnknownData_AF_1 : 7; // 0xaf(0x01)
	int32_t SubImages_Horizontal; // 0xb0(0x04)
	int32_t SubImages_Vertical; // 0xb4(0x04)
	float RandomImageTime; // 0xb8(0x04)
	int32_t RandomImageChanges; // 0xbc(0x04)
	struct FVector MacroUVPosition; // 0xc0(0x0c)
	float MacroUVRadius; // 0xcc(0x04)
	enum class EParticleUVFlipMode UVFlippingMode; // 0xd0(0x01)
	char BoundingMode; // 0xd1(0x01)
	char bDurationRecalcEachLoop : 1; // 0xd2(0x01)
	char UnknownData_D2_1 : 7; // 0xd2(0x01)
	char UnknownData_D3[0x1]; // 0xd3(0x01)
	struct FVector NormalsSphereCenter; // 0xd4(0x0c)
	float AlphaThreshold; // 0xe0(0x04)
	int32_t EmitterLoops; // 0xe4(0x04)
	struct UTexture2D* CutoutTexture; // 0xe8(0x08)
	int32_t MaxDrawCount; // 0xf0(0x04)
	float EmitterDurationLow; // 0xf4(0x04)
	struct FVector NormalsCylinderDirection; // 0xf8(0x0c)
	char UnknownData_104[0x4]; // 0x104(0x04)
	struct TArray<struct FName> NamedMaterialOverrides; // 0x108(0x10)
	char UnknownData_118[0x28]; // 0x118(0x28)
};

// Class Engine.ParticleModuleRotation
// Size: 0x60 (Inherited: 0x30)
struct UParticleModuleRotation : public UParticleModuleRotationBase {
	struct FRawDistributionFloat StartRotation; // 0x30(0x30)
};

// Class Engine.ParticleModuleRotation_Seeded
// Size: 0x80 (Inherited: 0x60)
struct UParticleModuleRotation_Seeded : public UParticleModuleRotation {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x60(0x20)
};

// Class Engine.ParticleModuleRotationOverLifetime
// Size: 0x68 (Inherited: 0x30)
struct UParticleModuleRotationOverLifetime : public UParticleModuleRotationBase {
	struct FRawDistributionFloat RotationOverLife; // 0x30(0x30)
	char Scale : 1; // 0x60(0x01)
	char UnknownData_60_1 : 7; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
};

// Class Engine.ParticleModuleRotationRate
// Size: 0x60 (Inherited: 0x30)
struct UParticleModuleRotationRate : public UParticleModuleRotationRateBase {
	struct FRawDistributionFloat StartRotationRate; // 0x30(0x30)
};

// Class Engine.ParticleModuleRotationRate_Seeded
// Size: 0x80 (Inherited: 0x60)
struct UParticleModuleRotationRate_Seeded : public UParticleModuleRotationRate {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x60(0x20)
};

// Class Engine.ParticleModuleRotationRateMultiplyLife
// Size: 0x60 (Inherited: 0x30)
struct UParticleModuleRotationRateMultiplyLife : public UParticleModuleRotationRateBase {
	struct FRawDistributionFloat LifeMultiplier; // 0x30(0x30)
};

// Class Engine.ParticleModuleSize
// Size: 0x78 (Inherited: 0x30)
struct UParticleModuleSize : public UParticleModuleSizeBase {
	struct FRawDistributionVector StartSize; // 0x30(0x48)
};

// Class Engine.ParticleModuleSize_Seeded
// Size: 0x98 (Inherited: 0x78)
struct UParticleModuleSize_Seeded : public UParticleModuleSize {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x78(0x20)
};

// Class Engine.ParticleModuleSizeScaleByTime
// Size: 0x80 (Inherited: 0x30)
struct UParticleModuleSizeScaleByTime : public UParticleModuleSizeBase {
	struct FRawDistributionVector SizeScaleByTime; // 0x30(0x48)
	char bEnableX : 1; // 0x78(0x01)
	char bEnableY : 1; // 0x78(0x01)
	char bEnableZ : 1; // 0x78(0x01)
	char UnknownData_78_3 : 5; // 0x78(0x01)
	char UnknownData_79[0x7]; // 0x79(0x07)
};

// Class Engine.ParticleModuleSizeMultiplyLife
// Size: 0x80 (Inherited: 0x30)
struct UParticleModuleSizeMultiplyLife : public UParticleModuleSizeBase {
	struct FRawDistributionVector LifeMultiplier; // 0x30(0x48)
	char MultiplyX : 1; // 0x78(0x01)
	char MultiplyY : 1; // 0x78(0x01)
	char MultiplyZ : 1; // 0x78(0x01)
	char UnknownData_78_3 : 5; // 0x78(0x01)
	char UnknownData_79[0x7]; // 0x79(0x07)
};

// Class Engine.ParticleModuleSizeScale
// Size: 0x80 (Inherited: 0x30)
struct UParticleModuleSizeScale : public UParticleModuleSizeBase {
	struct FRawDistributionVector SizeScale; // 0x30(0x48)
	char EnableX : 1; // 0x78(0x01)
	char EnableY : 1; // 0x78(0x01)
	char EnableZ : 1; // 0x78(0x01)
	char UnknownData_78_3 : 5; // 0x78(0x01)
	char UnknownData_79[0x7]; // 0x79(0x07)
};

// Class Engine.ParticleModuleSizeScaleBySpeed
// Size: 0x40 (Inherited: 0x30)
struct UParticleModuleSizeScaleBySpeed : public UParticleModuleSizeBase {
	struct FVector2D SpeedScale; // 0x30(0x08)
	struct FVector2D MaxScale; // 0x38(0x08)
};

// Class Engine.ParticleModuleSourceMovement
// Size: 0x78 (Inherited: 0x30)
struct UParticleModuleSourceMovement : public UParticleModuleLocationBase {
	struct FRawDistributionVector SourceMovementScale; // 0x30(0x48)
};

// Class Engine.ParticleModuleSpawnBase
// Size: 0x38 (Inherited: 0x30)
struct UParticleModuleSpawnBase : public UParticleModule {
	char bProcessSpawnRate : 1; // 0x30(0x01)
	char bProcessBurstList : 1; // 0x30(0x01)
	char UnknownData_30_2 : 6; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// Class Engine.ParticleModuleSpawn
// Size: 0xe8 (Inherited: 0x38)
struct UParticleModuleSpawn : public UParticleModuleSpawnBase {
	struct FRawDistributionFloat Rate; // 0x38(0x30)
	struct FRawDistributionFloat RateScale; // 0x68(0x30)
	char ParticleBurstMethod; // 0x98(0x01)
	char UnknownData_99[0x7]; // 0x99(0x07)
	struct TArray<struct FParticleBurst> BurstList; // 0xa0(0x10)
	struct FRawDistributionFloat BurstScale; // 0xb0(0x30)
	char bApplyGlobalSpawnRateScale : 1; // 0xe0(0x01)
	char UnknownData_E0_1 : 7; // 0xe0(0x01)
	char UnknownData_E1[0x7]; // 0xe1(0x07)
};

// Class Engine.ParticleModuleSpawnPerUnit
// Size: 0x78 (Inherited: 0x38)
struct UParticleModuleSpawnPerUnit : public UParticleModuleSpawnBase {
	float UnitScalar; // 0x38(0x04)
	float MovementTolerance; // 0x3c(0x04)
	struct FRawDistributionFloat SpawnPerUnit; // 0x40(0x30)
	float MaxFrameDistance; // 0x70(0x04)
	char bIgnoreSpawnRateWhenMoving : 1; // 0x74(0x01)
	char bIgnoreMovementAlongX : 1; // 0x74(0x01)
	char bIgnoreMovementAlongY : 1; // 0x74(0x01)
	char bIgnoreMovementAlongZ : 1; // 0x74(0x01)
	char UnknownData_74_4 : 4; // 0x74(0x01)
	char UnknownData_75[0x3]; // 0x75(0x03)
};

// Class Engine.ParticleModuleSubUV
// Size: 0x70 (Inherited: 0x30)
struct UParticleModuleSubUV : public UParticleModuleSubUVBase {
	struct USubUVAnimation* Animation; // 0x30(0x08)
	struct FRawDistributionFloat SubImageIndex; // 0x38(0x30)
	char bUseRealTime : 1; // 0x68(0x01)
	char UnknownData_68_1 : 7; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
};

// Class Engine.ParticleModuleSubUVMovie
// Size: 0xb0 (Inherited: 0x70)
struct UParticleModuleSubUVMovie : public UParticleModuleSubUV {
	char bUseEmitterTime : 1; // 0x70(0x01)
	char UnknownData_70_1 : 7; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
	struct FRawDistributionFloat FrameRate; // 0x78(0x30)
	int32_t StartingFrame; // 0xa8(0x04)
	char UnknownData_AC[0x4]; // 0xac(0x04)
};

// Class Engine.ParticleModuleTrailSource
// Size: 0x90 (Inherited: 0x30)
struct UParticleModuleTrailSource : public UParticleModuleTrailBase {
	char SourceMethod; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	struct FName SourceName; // 0x34(0x08)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct FRawDistributionFloat SourceStrength; // 0x40(0x30)
	char bLockSourceStength : 1; // 0x70(0x01)
	char UnknownData_70_1 : 7; // 0x70(0x01)
	char UnknownData_71[0x3]; // 0x71(0x03)
	int32_t SourceOffsetCount; // 0x74(0x04)
	struct TArray<struct FVector> SourceOffsetDefaults; // 0x78(0x10)
	char SelectionMethod; // 0x88(0x01)
	char UnknownData_89[0x3]; // 0x89(0x03)
	char bInheritRotation : 1; // 0x8c(0x01)
	char UnknownData_8C_1 : 7; // 0x8c(0x01)
	char UnknownData_8D[0x3]; // 0x8d(0x03)
};

// Class Engine.ParticleModuleTypeDataAnimTrail
// Size: 0x48 (Inherited: 0x30)
struct UParticleModuleTypeDataAnimTrail : public UParticleModuleTypeDataBase {
	char bDeadTrailsOnDeactivate : 1; // 0x30(0x01)
	char bEnablePreviousTangentRecalculation : 1; // 0x30(0x01)
	char bTangentRecalculationEveryFrame : 1; // 0x30(0x01)
	char UnknownData_30_3 : 5; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	float TilingDistance; // 0x34(0x04)
	float DistanceTessellationStepSize; // 0x38(0x04)
	float TangentTessellationStepSize; // 0x3c(0x04)
	float WidthTessellationStepSize; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
};

// Class Engine.ParticleModuleTypeDataBeam2
// Size: 0x150 (Inherited: 0x30)
struct UParticleModuleTypeDataBeam2 : public UParticleModuleTypeDataBase {
	char BeamMethod; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	int32_t TextureTile; // 0x34(0x04)
	float TextureTileDistance; // 0x38(0x04)
	int32_t Sheets; // 0x3c(0x04)
	int32_t MaxBeamCount; // 0x40(0x04)
	float Speed; // 0x44(0x04)
	int32_t InterpolationPoints; // 0x48(0x04)
	char bAlwaysOn : 1; // 0x4c(0x01)
	char UnknownData_4C_1 : 7; // 0x4c(0x01)
	char UnknownData_4D[0x3]; // 0x4d(0x03)
	int32_t UpVectorStepSize; // 0x50(0x04)
	struct FName BranchParentName; // 0x54(0x08)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
	struct FRawDistributionFloat Distance; // 0x60(0x30)
	char TaperMethod; // 0x90(0x01)
	char UnknownData_91[0x7]; // 0x91(0x07)
	struct FRawDistributionFloat TaperFactor; // 0x98(0x30)
	struct FRawDistributionFloat TaperScale; // 0xc8(0x30)
	char RenderGeometry : 1; // 0xf8(0x01)
	char RenderDirectLine : 1; // 0xf8(0x01)
	char RenderLines : 1; // 0xf8(0x01)
	char RenderTessellation : 1; // 0xf8(0x01)
	char UnknownData_F8_4 : 4; // 0xf8(0x01)
	char UnknownData_F9[0x57]; // 0xf9(0x57)
};

// Class Engine.ParticleModuleTypeDataGpu
// Size: 0x420 (Inherited: 0x30)
struct UParticleModuleTypeDataGpu : public UParticleModuleTypeDataBase {
	struct FGPUSpriteEmitterInfo EmitterInfo; // 0x30(0x280)
	struct FGPUSpriteResourceData ResourceData; // 0x2b0(0x160)
	float CameraMotionBlurAmount; // 0x410(0x04)
	char bClearExistingParticlesOnInit : 1; // 0x414(0x01)
	char UnknownData_414_1 : 7; // 0x414(0x01)
	char UnknownData_415[0xb]; // 0x415(0x0b)
};

// Class Engine.ParticleModuleTypeDataMesh
// Size: 0x98 (Inherited: 0x30)
struct UParticleModuleTypeDataMesh : public UParticleModuleTypeDataBase {
	struct UStaticMesh* Mesh; // 0x30(0x08)
	char UnknownData_38[0x8]; // 0x38(0x08)
	float LODSizeScale; // 0x40(0x04)
	char bUseStaticMeshLODs : 1; // 0x44(0x01)
	char CastShadows : 1; // 0x44(0x01)
	char DoCollisions : 1; // 0x44(0x01)
	char UnknownData_44_3 : 5; // 0x44(0x01)
	char MeshAlignment; // 0x45(0x01)
	char bOverrideMaterial : 1; // 0x46(0x01)
	char bOverrideDefaultMotionBlurSettings : 1; // 0x46(0x01)
	char bEnableMotionBlur : 1; // 0x46(0x01)
	char UnknownData_46_3 : 5; // 0x46(0x01)
	char UnknownData_47[0x1]; // 0x47(0x01)
	struct FRawDistributionVector RollPitchYawRange; // 0x48(0x48)
	char AxisLockOption; // 0x90(0x01)
	char bCameraFacing : 1; // 0x91(0x01)
	char UnknownData_91_1 : 7; // 0x91(0x01)
	char CameraFacingUpAxisOption; // 0x92(0x01)
	char CameraFacingOption; // 0x93(0x01)
	char bApplyParticleRotationAsSpin : 1; // 0x94(0x01)
	char bFaceCameraDirectionRatherThanPosition : 1; // 0x94(0x01)
	char bCollisionsConsiderPartilceSize : 1; // 0x94(0x01)
	char UnknownData_94_3 : 5; // 0x94(0x01)
	char UnknownData_95[0x3]; // 0x95(0x03)
};

// Class Engine.ParticleModuleTypeDataRibbon
// Size: 0x60 (Inherited: 0x30)
struct UParticleModuleTypeDataRibbon : public UParticleModuleTypeDataBase {
	int32_t MaxTessellationBetweenParticles; // 0x30(0x04)
	int32_t SheetsPerTrail; // 0x34(0x04)
	int32_t MaxTrailCount; // 0x38(0x04)
	int32_t MaxParticleInTrailCount; // 0x3c(0x04)
	char bDeadTrailsOnDeactivate : 1; // 0x40(0x01)
	char bDeadTrailsOnSourceLoss : 1; // 0x40(0x01)
	char bClipSourceSegement : 1; // 0x40(0x01)
	char bEnablePreviousTangentRecalculation : 1; // 0x40(0x01)
	char bTangentRecalculationEveryFrame : 1; // 0x40(0x01)
	char bSpawnInitialParticle : 1; // 0x40(0x01)
	char UnknownData_40_6 : 2; // 0x40(0x01)
	char UnknownData_41[0x3]; // 0x41(0x03)
	char RenderAxis; // 0x44(0x01)
	char UnknownData_45[0x3]; // 0x45(0x03)
	float TangentSpawningScalar; // 0x48(0x04)
	char bRenderGeometry : 1; // 0x4c(0x01)
	char bRenderSpawnPoints : 1; // 0x4c(0x01)
	char bRenderTangents : 1; // 0x4c(0x01)
	char bRenderTessellation : 1; // 0x4c(0x01)
	char UnknownData_4C_4 : 4; // 0x4c(0x01)
	char UnknownData_4D[0x3]; // 0x4d(0x03)
	float TilingDistance; // 0x50(0x04)
	float DistanceTessellationStepSize; // 0x54(0x04)
	char bEnableTangentDiffInterpScale : 1; // 0x58(0x01)
	char UnknownData_58_1 : 7; // 0x58(0x01)
	char UnknownData_59[0x3]; // 0x59(0x03)
	float TangentTessellationScalar; // 0x5c(0x04)
};

// Class Engine.ParticleModuleVectorFieldGlobal
// Size: 0x40 (Inherited: 0x30)
struct UParticleModuleVectorFieldGlobal : public UParticleModuleVectorFieldBase {
	char bOverrideGlobalVectorFieldTightness : 1; // 0x30(0x01)
	char UnknownData_30_1 : 7; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	float GlobalVectorFieldScale; // 0x34(0x04)
	float GlobalVectorFieldTightness; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.ParticleModuleVectorFieldLocal
// Size: 0x68 (Inherited: 0x30)
struct UParticleModuleVectorFieldLocal : public UParticleModuleVectorFieldBase {
	struct UVectorField* VectorField; // 0x30(0x08)
	struct FVector RelativeTranslation; // 0x38(0x0c)
	struct FRotator RelativeRotation; // 0x44(0x0c)
	struct FVector RelativeScale3D; // 0x50(0x0c)
	float Intensity; // 0x5c(0x04)
	float Tightness; // 0x60(0x04)
	char bIgnoreComponentTransform : 1; // 0x64(0x01)
	char bTileX : 1; // 0x64(0x01)
	char bTileY : 1; // 0x64(0x01)
	char bTileZ : 1; // 0x64(0x01)
	char bUseFixDT : 1; // 0x64(0x01)
	char UnknownData_64_5 : 3; // 0x64(0x01)
	char UnknownData_65[0x3]; // 0x65(0x03)
};

// Class Engine.ParticleModuleVectorFieldRotation
// Size: 0x48 (Inherited: 0x30)
struct UParticleModuleVectorFieldRotation : public UParticleModuleVectorFieldBase {
	struct FVector MinInitialRotation; // 0x30(0x0c)
	struct FVector MaxInitialRotation; // 0x3c(0x0c)
};

// Class Engine.ParticleModuleVectorFieldRotationRate
// Size: 0x40 (Inherited: 0x30)
struct UParticleModuleVectorFieldRotationRate : public UParticleModuleVectorFieldBase {
	struct FVector RotationRate; // 0x30(0x0c)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.ParticleModuleVectorFieldScale
// Size: 0x68 (Inherited: 0x30)
struct UParticleModuleVectorFieldScale : public UParticleModuleVectorFieldBase {
	struct UDistributionFloat* VectorFieldScale; // 0x30(0x08)
	struct FRawDistributionFloat VectorFieldScaleRaw; // 0x38(0x30)
};

// Class Engine.ParticleModuleVectorFieldScaleOverLife
// Size: 0x68 (Inherited: 0x30)
struct UParticleModuleVectorFieldScaleOverLife : public UParticleModuleVectorFieldBase {
	struct UDistributionFloat* VectorFieldScaleOverLife; // 0x30(0x08)
	struct FRawDistributionFloat VectorFieldScaleOverLifeRaw; // 0x38(0x30)
};

// Class Engine.ParticleModuleVelocityBase
// Size: 0x38 (Inherited: 0x30)
struct UParticleModuleVelocityBase : public UParticleModule {
	char bInWorldSpace : 1; // 0x30(0x01)
	char bApplyOwnerScale : 1; // 0x30(0x01)
	char UnknownData_30_2 : 6; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// Class Engine.ParticleModuleVelocity
// Size: 0xb0 (Inherited: 0x38)
struct UParticleModuleVelocity : public UParticleModuleVelocityBase {
	struct FRawDistributionVector StartVelocity; // 0x38(0x48)
	struct FRawDistributionFloat StartVelocityRadial; // 0x80(0x30)
};

// Class Engine.ParticleModuleVelocity_Seeded
// Size: 0xd0 (Inherited: 0xb0)
struct UParticleModuleVelocity_Seeded : public UParticleModuleVelocity {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0xb0(0x20)
};

// Class Engine.ParticleModuleVelocityCone
// Size: 0xa8 (Inherited: 0x38)
struct UParticleModuleVelocityCone : public UParticleModuleVelocityBase {
	struct FRawDistributionFloat Angle; // 0x38(0x30)
	struct FRawDistributionFloat Velocity; // 0x68(0x30)
	struct FVector Direction; // 0x98(0x0c)
	char UnknownData_A4[0x4]; // 0xa4(0x04)
};

// Class Engine.ParticleModuleVelocityInheritParent
// Size: 0x80 (Inherited: 0x38)
struct UParticleModuleVelocityInheritParent : public UParticleModuleVelocityBase {
	struct FRawDistributionVector Scale; // 0x38(0x48)
};

// Class Engine.ParticleModuleVelocityOverLifetime
// Size: 0x88 (Inherited: 0x38)
struct UParticleModuleVelocityOverLifetime : public UParticleModuleVelocityBase {
	struct FRawDistributionVector VelOverLife; // 0x38(0x48)
	char Absolute : 1; // 0x80(0x01)
	char UnknownData_80_1 : 7; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)
};

// Class Engine.ParticleSystem
// Size: 0x110 (Inherited: 0x30)
struct UParticleSystem : public UFXSystemAsset {
	float UpdateTime_FPS; // 0x30(0x04)
	float UpdateTime_Delta; // 0x34(0x04)
	float WarmupTime; // 0x38(0x04)
	float WarmupTickRate; // 0x3c(0x04)
	struct TArray<struct UParticleEmitter*> Emitters; // 0x40(0x10)
	struct UParticleSystemComponent* PreviewComponent; // 0x50(0x08)
	struct UInterpCurveEdSetup* CurveEdSetup; // 0x58(0x08)
	float LODDistanceCheckTime; // 0x60(0x04)
	float MacroUVRadius; // 0x64(0x04)
	struct TArray<float> LODDistances; // 0x68(0x10)
	struct TArray<struct FParticleSystemLOD> LODSettings; // 0x78(0x10)
	struct FBox FixedRelativeBoundingBox; // 0x88(0x1c)
	float SecondsBeforeInactive; // 0xa4(0x04)
	float Delay; // 0xa8(0x04)
	float DelayLow; // 0xac(0x04)
	char bOrientZAxisTowardCamera : 1; // 0xb0(0x01)
	char bUseFixedRelativeBoundingBox : 1; // 0xb0(0x01)
	char bShouldResetPeakCounts : 1; // 0xb0(0x01)
	char bHasPhysics : 1; // 0xb0(0x01)
	char bUseRealtimeThumbnail : 1; // 0xb0(0x01)
	char ThumbnailImageOutOfDate : 1; // 0xb0(0x01)
	char UnknownData_B0_6 : 2; // 0xb0(0x01)
	char bUseDelayRange : 1; // 0xb1(0x01)
	char bAllowManagedTicking : 1; // 0xb1(0x01)
	char bAutoDeactivate : 1; // 0xb1(0x01)
	char bRegenerateLODDuplicate : 1; // 0xb1(0x01)
	char UnknownData_B1_4 : 4; // 0xb1(0x01)
	char SystemUpdateMode; // 0xb2(0x01)
	char LODMethod; // 0xb3(0x01)
	enum class EParticleSystemInsignificanceReaction InsignificantReaction; // 0xb4(0x01)
	char OcclusionBoundsMethod; // 0xb5(0x01)
	char UnknownData_B6[0x1]; // 0xb6(0x01)
	enum class EParticleSignificanceLevel MaxSignificanceLevel; // 0xb7(0x01)
	uint32_t MinTimeBetweenTicks; // 0xb8(0x04)
	float InsignificanceDelay; // 0xbc(0x04)
	struct FVector MacroUVPosition; // 0xc0(0x0c)
	struct FBox CustomOcclusionBounds; // 0xcc(0x1c)
	struct TArray<struct FLODSoloTrack> SoloTracking; // 0xe8(0x10)
	struct TArray<struct FNamedEmitterMaterial> NamedMaterialSlots; // 0xf8(0x10)
	char UnknownData_108[0x8]; // 0x108(0x08)

	bool ContainsEmitterType(struct UObject* TypeData); // Function Engine.ParticleSystem.ContainsEmitterType
};

// Class Engine.ParticleSystemReplay
// Size: 0x40 (Inherited: 0x28)
struct UParticleSystemReplay : public UObject {
	int32_t ClipIDNumber; // 0x28(0x04)
	char UnknownData_2C[0x14]; // 0x2c(0x14)
};

// Class Engine.PawnNoiseEmitterComponent
// Size: 0xd8 (Inherited: 0xb0)
struct UPawnNoiseEmitterComponent : public UActorComponent {
	char bAIPerceptionSystemCompatibilityMode : 1; // 0xb0(0x01)
	char UnknownData_B0_1 : 7; // 0xb0(0x01)
	char UnknownData_B1[0x3]; // 0xb1(0x03)
	struct FVector LastRemoteNoisePosition; // 0xb4(0x0c)
	float NoiseLifetime; // 0xc0(0x04)
	float LastRemoteNoiseVolume; // 0xc4(0x04)
	float LastRemoteNoiseTime; // 0xc8(0x04)
	float LastLocalNoiseVolume; // 0xcc(0x04)
	float LastLocalNoiseTime; // 0xd0(0x04)
	char UnknownData_D4[0x4]; // 0xd4(0x04)

	void MakeNoise(struct AActor* NoiseMaker, float Loudness, struct FVector NoiseLocation); // Function Engine.PawnNoiseEmitterComponent.MakeNoise
};

// Class Engine.PhysicalAnimationComponent
// Size: 0xf0 (Inherited: 0xb0)
struct UPhysicalAnimationComponent : public UActorComponent {
	float StrengthMultiplyer; // 0xb0(0x04)
	char UnknownData_B4[0x4]; // 0xb4(0x04)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0xb8(0x08)
	char UnknownData_C0[0x30]; // 0xc0(0x30)

	void SetStrengthMultiplyer(float InStrengthMultiplyer); // Function Engine.PhysicalAnimationComponent.SetStrengthMultiplyer
	void SetSkeletalMeshComponent(struct USkeletalMeshComponent* InSkeletalMeshComponent); // Function Engine.PhysicalAnimationComponent.SetSkeletalMeshComponent
	struct FTransform GetBodyTargetTransform(struct FName BodyName); // Function Engine.PhysicalAnimationComponent.GetBodyTargetTransform
	void ApplyPhysicalAnimationSettingsBelow(struct FName BodyName, struct FPhysicalAnimationData PhysicalAnimationData, bool bIncludeSelf); // Function Engine.PhysicalAnimationComponent.ApplyPhysicalAnimationSettingsBelow
	void ApplyPhysicalAnimationSettings(struct FName BodyName, struct FPhysicalAnimationData PhysicalAnimationData); // Function Engine.PhysicalAnimationComponent.ApplyPhysicalAnimationSettings
	void ApplyPhysicalAnimationProfileBelow(struct FName BodyName, struct FName ProfileName, bool bIncludeSelf, bool bClearNotFound); // Function Engine.PhysicalAnimationComponent.ApplyPhysicalAnimationProfileBelow
};

// Class Engine.PhysicalMaterial
// Size: 0x80 (Inherited: 0x28)
struct UPhysicalMaterial : public UObject {
	float Friction; // 0x28(0x04)
	char FrictionCombineMode; // 0x2c(0x01)
	bool bOverrideFrictionCombineMode; // 0x2d(0x01)
	char UnknownData_2E[0x2]; // 0x2e(0x02)
	float Restitution; // 0x30(0x04)
	char RestitutionCombineMode; // 0x34(0x01)
	bool bOverrideRestitutionCombineMode; // 0x35(0x01)
	char UnknownData_36[0x2]; // 0x36(0x02)
	float Density; // 0x38(0x04)
	float RaiseMassToPower; // 0x3c(0x04)
	float DestructibleDamageThresholdScale; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
	struct UPhysicalMaterialPropertyBase* PhysicalMaterialProperty; // 0x48(0x08)
	char SurfaceType; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	float TireFrictionScale; // 0x54(0x04)
	struct TArray<struct FTireFrictionScalePair> TireFrictionScales; // 0x58(0x10)
	char UnknownData_68[0x18]; // 0x68(0x18)
};

// Class Engine.PhysicalMaterialMask
// Size: 0x30 (Inherited: 0x28)
struct UPhysicalMaterialMask : public UObject {
	int32_t UVChannelIndex; // 0x28(0x04)
	char AddressX; // 0x2c(0x01)
	char AddressY; // 0x2d(0x01)
	char UnknownData_2E[0x2]; // 0x2e(0x02)
};

// Class Engine.PhysicsAsset
// Size: 0x138 (Inherited: 0x28)
struct UPhysicsAsset : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct TArray<int32_t> BoundsBodies; // 0x30(0x10)
	struct TArray<struct USkeletalBodySetup*> SkeletalBodySetups; // 0x40(0x10)
	struct TArray<struct UPhysicsConstraintTemplate*> ConstraintSetup; // 0x50(0x10)
	struct FSolverIterations SolverIterations; // 0x60(0x18)
	char bNotForDedicatedServer : 1; // 0x78(0x01)
	char UnknownData_78_1 : 7; // 0x78(0x01)
	char UnknownData_79[0xa7]; // 0x79(0xa7)
	struct UThumbnailInfo* ThumbnailInfo; // 0x120(0x08)
	struct TArray<struct UBodySetup*> BodySetup; // 0x128(0x10)
};

// Class Engine.SkeletalBodySetup
// Size: 0x268 (Inherited: 0x250)
struct USkeletalBodySetup : public UBodySetup {
	bool bSkipScaleFromAnimation; // 0x250(0x01)
	char UnknownData_251[0x7]; // 0x251(0x07)
	struct TArray<struct FPhysicalAnimationProfile> PhysicalAnimationData; // 0x258(0x10)
};

// Class Engine.PhysicsCollisionHandler
// Size: 0x40 (Inherited: 0x28)
struct UPhysicsCollisionHandler : public UObject {
	float ImpactThreshold; // 0x28(0x04)
	float ImpactReFireDelay; // 0x2c(0x04)
	struct USoundBase* DefaultImpactSound; // 0x30(0x08)
	float LastImpactSoundTime; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.PhysicsConstraintActor
// Size: 0x240 (Inherited: 0x220)
struct APhysicsConstraintActor : public ARigidBodyBase {
	struct UPhysicsConstraintComponent* ConstraintComp; // 0x220(0x08)
	struct AActor* ConstraintActor1; // 0x228(0x08)
	struct AActor* ConstraintActor2; // 0x230(0x08)
	char bDisableCollision : 1; // 0x238(0x01)
	char UnknownData_238_1 : 7; // 0x238(0x01)
	char UnknownData_239[0x7]; // 0x239(0x07)
};

// Class Engine.PhysicsConstraintComponent
// Size: 0x410 (Inherited: 0x210)
struct UPhysicsConstraintComponent : public USceneComponent {
	struct AActor* ConstraintActor1; // 0x208(0x08)
	struct FConstrainComponentPropName ComponentName1; // 0x210(0x08)
	struct AActor* ConstraintActor2; // 0x218(0x08)
	struct FConstrainComponentPropName ComponentName2; // 0x220(0x08)
	char UnknownData_230[0x8]; // 0x230(0x08)
	struct UPhysicsConstraintTemplate* ConstraintSetup; // 0x238(0x08)
	struct FMulticastInlineDelegate OnConstraintBroken; // 0x240(0x10)
	struct FConstraintInstance ConstraintInstance; // 0x250(0x1b8)
	char UnknownData_408[0x8]; // 0x408(0x08)

	void SetOrientationDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive); // Function Engine.PhysicsConstraintComponent.SetOrientationDriveTwistAndSwing
	void SetOrientationDriveSLERP(bool bEnableSLERP); // Function Engine.PhysicsConstraintComponent.SetOrientationDriveSLERP
	void SetLinearZLimit(char ConstraintType, float LimitSize); // Function Engine.PhysicsConstraintComponent.SetLinearZLimit
	void SetLinearYLimit(char ConstraintType, float LimitSize); // Function Engine.PhysicsConstraintComponent.SetLinearYLimit
	void SetLinearXLimit(char ConstraintType, float LimitSize); // Function Engine.PhysicsConstraintComponent.SetLinearXLimit
	void SetLinearVelocityTarget(struct FVector InVelTarget); // Function Engine.PhysicsConstraintComponent.SetLinearVelocityTarget
	void SetLinearVelocityDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ); // Function Engine.PhysicsConstraintComponent.SetLinearVelocityDrive
	void SetLinearPositionTarget(struct FVector InPosTarget); // Function Engine.PhysicsConstraintComponent.SetLinearPositionTarget
	void SetLinearPositionDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ); // Function Engine.PhysicsConstraintComponent.SetLinearPositionDrive
	void SetLinearDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit); // Function Engine.PhysicsConstraintComponent.SetLinearDriveParams
	void SetLinearBreakable(bool bLinearBreakable, float LinearBreakThreshold); // Function Engine.PhysicsConstraintComponent.SetLinearBreakable
	void SetDisableCollision(bool bDisableCollision); // Function Engine.PhysicsConstraintComponent.SetDisableCollision
	void SetConstraintReferencePosition(char Frame, struct FVector RefPosition); // Function Engine.PhysicsConstraintComponent.SetConstraintReferencePosition
	void SetConstraintReferenceOrientation(char Frame, struct FVector PriAxis, struct FVector SecAxis); // Function Engine.PhysicsConstraintComponent.SetConstraintReferenceOrientation
	void SetConstraintReferenceFrame(char Frame, struct FTransform RefFrame); // Function Engine.PhysicsConstraintComponent.SetConstraintReferenceFrame
	void SetConstrainedComponents(struct UPrimitiveComponent* Component1, struct FName BoneName1, struct UPrimitiveComponent* Component2, struct FName BoneName2); // Function Engine.PhysicsConstraintComponent.SetConstrainedComponents
	void SetAngularVelocityTarget(struct FVector InVelTarget); // Function Engine.PhysicsConstraintComponent.SetAngularVelocityTarget
	void SetAngularVelocityDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive); // Function Engine.PhysicsConstraintComponent.SetAngularVelocityDriveTwistAndSwing
	void SetAngularVelocityDriveSLERP(bool bEnableSLERP); // Function Engine.PhysicsConstraintComponent.SetAngularVelocityDriveSLERP
	void SetAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive); // Function Engine.PhysicsConstraintComponent.SetAngularVelocityDrive
	void SetAngularTwistLimit(char ConstraintType, float TwistLimitAngle); // Function Engine.PhysicsConstraintComponent.SetAngularTwistLimit
	void SetAngularSwing2Limit(char MotionType, float Swing2LimitAngle); // Function Engine.PhysicsConstraintComponent.SetAngularSwing2Limit
	void SetAngularSwing1Limit(char MotionType, float Swing1LimitAngle); // Function Engine.PhysicsConstraintComponent.SetAngularSwing1Limit
	void SetAngularOrientationTarget(struct FRotator InPosTarget); // Function Engine.PhysicsConstraintComponent.SetAngularOrientationTarget
	void SetAngularOrientationDrive(bool bEnableSwingDrive, bool bEnableTwistDrive); // Function Engine.PhysicsConstraintComponent.SetAngularOrientationDrive
	void SetAngularDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit); // Function Engine.PhysicsConstraintComponent.SetAngularDriveParams
	void SetAngularDriveMode(char DriveMode); // Function Engine.PhysicsConstraintComponent.SetAngularDriveMode
	void SetAngularBreakable(bool bAngularBreakable, float AngularBreakThreshold); // Function Engine.PhysicsConstraintComponent.SetAngularBreakable
	bool IsBroken(); // Function Engine.PhysicsConstraintComponent.IsBroken
	float GetCurrentTwist(); // Function Engine.PhysicsConstraintComponent.GetCurrentTwist
	float GetCurrentSwing2(); // Function Engine.PhysicsConstraintComponent.GetCurrentSwing2
	float GetCurrentSwing1(); // Function Engine.PhysicsConstraintComponent.GetCurrentSwing1
	void GetConstraintForce(struct FVector OutLinearForce, struct FVector OutAngularForce); // Function Engine.PhysicsConstraintComponent.GetConstraintForce
	void BreakConstraint(); // Function Engine.PhysicsConstraintComponent.BreakConstraint
};

// Class Engine.PhysicsConstraintTemplate
// Size: 0x2f8 (Inherited: 0x28)
struct UPhysicsConstraintTemplate : public UObject {
	struct FConstraintInstance DefaultInstance; // 0x28(0x1b8)
	struct TArray<struct FPhysicsConstraintProfileHandle> ProfileHandles; // 0x1e0(0x10)
	struct FConstraintProfileProperties DefaultProfile; // 0x1f0(0x104)
	char UnknownData_2F4[0x4]; // 0x2f4(0x04)
};

// Class Engine.PhysicsHandleComponent
// Size: 0x160 (Inherited: 0xb0)
struct UPhysicsHandleComponent : public UActorComponent {
	struct UPrimitiveComponent* GrabbedComponent; // 0xb0(0x08)
	char UnknownData_B8[0x8]; // 0xb8(0x08)
	char UnknownData_C0_0 : 1; // 0xc0(0x01)
	char bSoftAngularConstraint : 1; // 0xc0(0x01)
	char bSoftLinearConstraint : 1; // 0xc0(0x01)
	char bInterpolateTarget : 1; // 0xc0(0x01)
	char UnknownData_C0_4 : 4; // 0xc0(0x01)
	char UnknownData_C1[0x3]; // 0xc1(0x03)
	float LinearDamping; // 0xc4(0x04)
	float LinearStiffness; // 0xc8(0x04)
	float AngularDamping; // 0xcc(0x04)
	float AngularStiffness; // 0xd0(0x04)
	char UnknownData_D4[0x6c]; // 0xd4(0x6c)
	float InterpolationSpeed; // 0x140(0x04)
	char UnknownData_144[0x1c]; // 0x144(0x1c)

	void SetTargetRotation(struct FRotator NewRotation); // Function Engine.PhysicsHandleComponent.SetTargetRotation
	void SetTargetLocationAndRotation(struct FVector NewLocation, struct FRotator NewRotation); // Function Engine.PhysicsHandleComponent.SetTargetLocationAndRotation
	void SetTargetLocation(struct FVector NewLocation); // Function Engine.PhysicsHandleComponent.SetTargetLocation
	void SetLinearStiffness(float NewLinearStiffness); // Function Engine.PhysicsHandleComponent.SetLinearStiffness
	void SetLinearDamping(float NewLinearDamping); // Function Engine.PhysicsHandleComponent.SetLinearDamping
	void SetInterpolationSpeed(float NewInterpolationSpeed); // Function Engine.PhysicsHandleComponent.SetInterpolationSpeed
	void SetAngularStiffness(float NewAngularStiffness); // Function Engine.PhysicsHandleComponent.SetAngularStiffness
	void SetAngularDamping(float NewAngularDamping); // Function Engine.PhysicsHandleComponent.SetAngularDamping
	void ReleaseComponent(); // Function Engine.PhysicsHandleComponent.ReleaseComponent
	void GrabComponentAtLocationWithRotation(struct UPrimitiveComponent* Component, struct FName InBoneName, struct FVector Location, struct FRotator Rotation); // Function Engine.PhysicsHandleComponent.GrabComponentAtLocationWithRotation
	void GrabComponentAtLocation(struct UPrimitiveComponent* Component, struct FName InBoneName, struct FVector GrabLocation); // Function Engine.PhysicsHandleComponent.GrabComponentAtLocation
	void GrabComponent(struct UPrimitiveComponent* Component, struct FName InBoneName, struct FVector GrabLocation, bool bConstrainRotation); // Function Engine.PhysicsHandleComponent.GrabComponent
	void GetTargetLocationAndRotation(struct FVector TargetLocation, struct FRotator TargetRotation); // Function Engine.PhysicsHandleComponent.GetTargetLocationAndRotation
	struct UPrimitiveComponent* GetGrabbedComponent(); // Function Engine.PhysicsHandleComponent.GetGrabbedComponent
};

// Class Engine.PhysicsSettings
// Size: 0x138 (Inherited: 0x38)
struct UPhysicsSettings : public UDeveloperSettings {
	float DefaultGravityZ; // 0x38(0x04)
	float DefaultTerminalVelocity; // 0x3c(0x04)
	float DefaultFluidFriction; // 0x40(0x04)
	int32_t SimulateScratchMemorySize; // 0x44(0x04)
	int32_t RagdollAggregateThreshold; // 0x48(0x04)
	float TriangleMeshTriangleMinAreaThreshold; // 0x4c(0x04)
	bool bEnableShapeSharing; // 0x50(0x01)
	bool bEnablePCM; // 0x51(0x01)
	bool bEnableStabilization; // 0x52(0x01)
	bool bWarnMissingLocks; // 0x53(0x01)
	bool bEnable2DPhysics; // 0x54(0x01)
	char UnknownData_55[0x3]; // 0x55(0x03)
	struct FRigidBodyErrorCorrection PhysicErrorCorrection; // 0x58(0x34)
	char LockedAxis; // 0x8c(0x01)
	char DefaultDegreesOfFreedom; // 0x8d(0x01)
	char UnknownData_8E[0x2]; // 0x8e(0x02)
	float BounceThresholdVelocity; // 0x90(0x04)
	char FrictionCombineMode; // 0x94(0x01)
	char RestitutionCombineMode; // 0x95(0x01)
	char UnknownData_96[0x2]; // 0x96(0x02)
	float MaxAngularVelocity; // 0x98(0x04)
	float MaxDepenetrationVelocity; // 0x9c(0x04)
	float ContactOffsetMultiplier; // 0xa0(0x04)
	float MinContactOffset; // 0xa4(0x04)
	float MaxContactOffset; // 0xa8(0x04)
	bool bSimulateSkeletalMeshOnDedicatedServer; // 0xac(0x01)
	char DefaultShapeComplexity; // 0xad(0x01)
	bool bDefaultHasComplexCollision; // 0xae(0x01)
	bool bSuppressFaceRemapTable; // 0xaf(0x01)
	bool bSupportUVFromHitResults; // 0xb0(0x01)
	bool bDisableActiveActors; // 0xb1(0x01)
	bool bDisableKinematicStaticPairs; // 0xb2(0x01)
	bool bDisableKinematicKinematicPairs; // 0xb3(0x01)
	bool bDisableCCD; // 0xb4(0x01)
	bool bEnableEnhancedDeterminism; // 0xb5(0x01)
	char UnknownData_B6[0x2]; // 0xb6(0x02)
	float AnimPhysicsMinDeltaTime; // 0xb8(0x04)
	bool bSimulateAnimPhysicsAfterReset; // 0xbc(0x01)
	char UnknownData_BD[0x3]; // 0xbd(0x03)
	float MaxPhysicsDeltaTime; // 0xc0(0x04)
	bool bSubstepping; // 0xc4(0x01)
	bool bSubsteppingAsync; // 0xc5(0x01)
	char UnknownData_C6[0x2]; // 0xc6(0x02)
	float MaxSubstepDeltaTime; // 0xc8(0x04)
	int32_t MaxSubsteps; // 0xcc(0x04)
	float SyncSceneSmoothingFactor; // 0xd0(0x04)
	float InitialAverageFrameRate; // 0xd4(0x04)
	int32_t PhysXTreeRebuildRate; // 0xd8(0x04)
	char UnknownData_DC[0x4]; // 0xdc(0x04)
	struct TArray<struct FPhysicalSurfaceName> PhysicalSurfaces; // 0xe0(0x10)
	struct FBroadphaseSettings DefaultBroadphaseSettings; // 0xf0(0x40)
	struct FChaosPhysicsSettings ChaosSettings; // 0x130(0x03)
	char UnknownData_133[0x5]; // 0x133(0x05)
};

// Class Engine.PhysicsSpringComponent
// Size: 0x230 (Inherited: 0x210)
struct UPhysicsSpringComponent : public USceneComponent {
	float SpringStiffness; // 0x208(0x04)
	float SpringDamping; // 0x20c(0x04)
	float SpringLengthAtRest; // 0x210(0x04)
	float SpringRadius; // 0x214(0x04)
	char SpringChannel; // 0x218(0x01)
	bool bIgnoreSelf; // 0x219(0x01)
	float SpringCompression; // 0x21c(0x04)
	char UnknownData_226[0xa]; // 0x226(0x0a)

	struct FVector GetSpringRestingPoint(); // Function Engine.PhysicsSpringComponent.GetSpringRestingPoint
	struct FVector GetSpringDirection(); // Function Engine.PhysicsSpringComponent.GetSpringDirection
	struct FVector GetSpringCurrentEndPoint(); // Function Engine.PhysicsSpringComponent.GetSpringCurrentEndPoint
	float GetNormalizedCompressionScalar(); // Function Engine.PhysicsSpringComponent.GetNormalizedCompressionScalar
};

// Class Engine.PhysicsThruster
// Size: 0x228 (Inherited: 0x220)
struct APhysicsThruster : public ARigidBodyBase {
	struct UPhysicsThrusterComponent* ThrusterComponent; // 0x220(0x08)
};

// Class Engine.SceneCapture
// Size: 0x230 (Inherited: 0x220)
struct ASceneCapture : public AActor {
	struct UStaticMeshComponent* MeshComp; // 0x220(0x08)
	struct USceneComponent* SceneComponent; // 0x228(0x08)
};

// Class Engine.PlanarReflection
// Size: 0x240 (Inherited: 0x230)
struct APlanarReflection : public ASceneCapture {
	struct UPlanarReflectionComponent* PlanarReflectionComponent; // 0x230(0x08)
	bool bShowPreviewPlane; // 0x238(0x01)
	char UnknownData_239[0x7]; // 0x239(0x07)

	void OnInterpToggle(bool bEnable); // Function Engine.PlanarReflection.OnInterpToggle
};

// Class Engine.SceneCaptureComponent
// Size: 0x2a0 (Inherited: 0x210)
struct USceneCaptureComponent : public USceneComponent {
	enum class ESceneCapturePrimitiveRenderMode PrimitiveRenderMode; // 0x208(0x01)
	char CaptureSource; // 0x209(0x01)
	char bCaptureEveryFrame : 1; // 0x20a(0x01)
	char bCaptureOnMovement : 1; // 0x20a(0x01)
	bool bAlwaysPersistRenderingState; // 0x20b(0x01)
	struct TArray<struct FWeakObjectPtr<struct UPrimitiveComponent>> HiddenComponents; // 0x210(0x10)
	struct TArray<struct AActor*> HiddenActors; // 0x220(0x10)
	struct TArray<struct FWeakObjectPtr<struct UPrimitiveComponent>> ShowOnlyComponents; // 0x230(0x10)
	struct TArray<struct AActor*> ShowOnlyActors; // 0x240(0x10)
	float LODDistanceFactor; // 0x250(0x04)
	float MaxViewDistanceOverride; // 0x254(0x04)
	int32_t CaptureSortPriority; // 0x258(0x04)
	bool bUseRayTracingIfEnabled; // 0x25c(0x01)
	struct TArray<struct FEngineShowFlagsSetting> ShowFlagSettings; // 0x260(0x10)
	char UnknownData_270_2 : 6; // 0x270(0x01)
	char UnknownData_271[0xf]; // 0x271(0x0f)
	struct FString ProfilingEventName; // 0x280(0x10)
	char UnknownData_290[0x10]; // 0x290(0x10)

	void ShowOnlyComponent(struct UPrimitiveComponent* InComponent); // Function Engine.SceneCaptureComponent.ShowOnlyComponent
	void ShowOnlyActorComponents(struct AActor* InActor, bool bIncludeFromChildActors); // Function Engine.SceneCaptureComponent.ShowOnlyActorComponents
	void SetCaptureSortPriority(int32_t NewCaptureSortPriority); // Function Engine.SceneCaptureComponent.SetCaptureSortPriority
	void RemoveShowOnlyComponent(struct UPrimitiveComponent* InComponent); // Function Engine.SceneCaptureComponent.RemoveShowOnlyComponent
	void RemoveShowOnlyActorComponents(struct AActor* InActor, bool bIncludeFromChildActors); // Function Engine.SceneCaptureComponent.RemoveShowOnlyActorComponents
	void HideComponent(struct UPrimitiveComponent* InComponent); // Function Engine.SceneCaptureComponent.HideComponent
	void HideActorComponents(struct AActor* InActor, bool bIncludeFromChildActors); // Function Engine.SceneCaptureComponent.HideActorComponents
	void ClearShowOnlyComponents(); // Function Engine.SceneCaptureComponent.ClearShowOnlyComponents
	void ClearHiddenComponents(); // Function Engine.SceneCaptureComponent.ClearHiddenComponents
};

// Class Engine.PlanarReflectionComponent
// Size: 0x390 (Inherited: 0x2a0)
struct UPlanarReflectionComponent : public USceneCaptureComponent {
	struct UBoxComponent* PreviewBox; // 0x2a0(0x08)
	float NormalDistortionStrength; // 0x2a8(0x04)
	float PrefilterRoughness; // 0x2ac(0x04)
	float PrefilterRoughnessDistance; // 0x2b0(0x04)
	int32_t ScreenPercentage; // 0x2b4(0x04)
	float ExtraFOV; // 0x2b8(0x04)
	float DistanceFromPlaneFadeStart; // 0x2bc(0x04)
	float DistanceFromPlaneFadeEnd; // 0x2c0(0x04)
	float DistanceFromPlaneFadeoutStart; // 0x2c4(0x04)
	float DistanceFromPlaneFadeoutEnd; // 0x2c8(0x04)
	float AngleFromPlaneFadeStart; // 0x2cc(0x04)
	float AngleFromPlaneFadeEnd; // 0x2d0(0x04)
	bool bShowPreviewPlane; // 0x2d4(0x01)
	bool bRenderSceneTwoSided; // 0x2d5(0x01)
	char UnknownData_2D6[0xba]; // 0x2d6(0xba)
};

// Class Engine.PlaneReflectionCaptureComponent
// Size: 0x2a0 (Inherited: 0x280)
struct UPlaneReflectionCaptureComponent : public UReflectionCaptureComponent {
	float InfluenceRadiusScale; // 0x280(0x04)
	char UnknownData_284[0x4]; // 0x284(0x04)
	struct UDrawSphereComponent* PreviewInfluenceRadius; // 0x288(0x08)
	struct UBoxComponent* PreviewCaptureBox; // 0x290(0x08)
	char UnknownData_298[0x8]; // 0x298(0x08)
};

// Class Engine.PlatformEventsComponent
// Size: 0xd0 (Inherited: 0xb0)
struct UPlatformEventsComponent : public UActorComponent {
	struct FMulticastInlineDelegate PlatformChangedToLaptopModeDelegate; // 0xb0(0x10)
	struct FMulticastInlineDelegate PlatformChangedToTabletModeDelegate; // 0xc0(0x10)

	bool SupportsConvertibleLaptops(); // Function Engine.PlatformEventsComponent.SupportsConvertibleLaptops
	void PlatformEventDelegate__DelegateSignature(); // DelegateFunction Engine.PlatformEventsComponent.PlatformEventDelegate__DelegateSignature
	bool IsInTabletMode(); // Function Engine.PlatformEventsComponent.IsInTabletMode
	bool IsInLaptopMode(); // Function Engine.PlatformEventsComponent.IsInLaptopMode
};

// Class Engine.PlatformInterfaceWebResponse
// Size: 0xb0 (Inherited: 0x28)
struct UPlatformInterfaceWebResponse : public UObject {
	struct FString OriginalURL; // 0x28(0x10)
	int32_t ResponseCode; // 0x38(0x04)
	int32_t Tag; // 0x3c(0x04)
	struct FString StringResponse; // 0x40(0x10)
	struct TArray<char> BinaryResponse; // 0x50(0x10)
	char UnknownData_60[0x50]; // 0x60(0x50)

	int32_t GetNumHeaders(); // Function Engine.PlatformInterfaceWebResponse.GetNumHeaders
	struct FString GetHeaderValue(struct FString HeaderName); // Function Engine.PlatformInterfaceWebResponse.GetHeaderValue
	void GetHeader(int32_t HeaderIndex, struct FString Header, struct FString Value); // Function Engine.PlatformInterfaceWebResponse.GetHeader
};

// Class Engine.PluginCommandlet
// Size: 0xa0 (Inherited: 0x80)
struct UPluginCommandlet : public UCommandlet {
	char UnknownData_80[0x20]; // 0x80(0x20)
};

// Class Engine.PointLight
// Size: 0x238 (Inherited: 0x230)
struct APointLight : public ALight {
	struct UPointLightComponent* PointLightComponent; // 0x230(0x08)

	void SetRadius(float NewRadius); // Function Engine.PointLight.SetRadius
	void SetLightFalloffExponent(float NewLightFalloffExponent); // Function Engine.PointLight.SetLightFalloffExponent
};

// Class Engine.PointLightComponent
// Size: 0x370 (Inherited: 0x350)
struct UPointLightComponent : public ULocalLightComponent {
	char bUseInverseSquaredFalloff : 1; // 0x350(0x01)
	char UnknownData_350_1 : 7; // 0x350(0x01)
	char UnknownData_351[0x3]; // 0x351(0x03)
	float LightFalloffExponent; // 0x354(0x04)
	float SourceRadius; // 0x358(0x04)
	float SoftSourceRadius; // 0x35c(0x04)
	float SourceLength; // 0x360(0x04)
	char UnknownData_364[0xc]; // 0x364(0x0c)

	void SetSourceRadius(float bNewValue); // Function Engine.PointLightComponent.SetSourceRadius
	void SetSourceLength(float NewValue); // Function Engine.PointLightComponent.SetSourceLength
	void SetSoftSourceRadius(float bNewValue); // Function Engine.PointLightComponent.SetSoftSourceRadius
	void SetLightFalloffExponent(float NewLightFalloffExponent); // Function Engine.PointLightComponent.SetLightFalloffExponent
};

// Class Engine.Polys
// Size: 0x38 (Inherited: 0x28)
struct UPolys : public UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
};

// Class Engine.PoseableMeshComponent
// Size: 0x7d0 (Inherited: 0x670)
struct UPoseableMeshComponent : public USkinnedMeshComponent {
	char UnknownData_670[0x160]; // 0x670(0x160)

	void SetBoneTransformByName(struct FName BoneName, struct FTransform InTransform, char BoneSpace); // Function Engine.PoseableMeshComponent.SetBoneTransformByName
	void SetBoneScaleByName(struct FName BoneName, struct FVector InScale3D, char BoneSpace); // Function Engine.PoseableMeshComponent.SetBoneScaleByName
	void SetBoneRotationByName(struct FName BoneName, struct FRotator InRotation, char BoneSpace); // Function Engine.PoseableMeshComponent.SetBoneRotationByName
	void SetBoneLocationByName(struct FName BoneName, struct FVector InLocation, char BoneSpace); // Function Engine.PoseableMeshComponent.SetBoneLocationByName
	void ResetBoneTransformByName(struct FName BoneName); // Function Engine.PoseableMeshComponent.ResetBoneTransformByName
	struct FTransform GetBoneTransformByName(struct FName BoneName, char BoneSpace); // Function Engine.PoseableMeshComponent.GetBoneTransformByName
	struct FVector GetBoneScaleByName(struct FName BoneName, char BoneSpace); // Function Engine.PoseableMeshComponent.GetBoneScaleByName
	struct FRotator GetBoneRotationByName(struct FName BoneName, char BoneSpace); // Function Engine.PoseableMeshComponent.GetBoneRotationByName
	struct FVector GetBoneLocationByName(struct FName BoneName, char BoneSpace); // Function Engine.PoseableMeshComponent.GetBoneLocationByName
	void CopyPoseFromSkeletalComponent(struct USkeletalMeshComponent* InComponentToCopy); // Function Engine.PoseableMeshComponent.CopyPoseFromSkeletalComponent
};

// Class Engine.PoseAsset
// Size: 0x120 (Inherited: 0x80)
struct UPoseAsset : public UAnimationAsset {
	struct FPoseDataContainer PoseContainer; // 0x80(0x90)
	bool bAdditivePose; // 0x110(0x01)
	char UnknownData_111[0x3]; // 0x111(0x03)
	int32_t BasePoseIndex; // 0x114(0x04)
	struct FName RetargetSource; // 0x118(0x08)
};

// Class Engine.PoseWatch
// Size: 0x38 (Inherited: 0x28)
struct UPoseWatch : public UObject {
	struct UEdGraphNode* Node; // 0x28(0x08)
	struct FColor PoseWatchColour; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// Class Engine.PostProcessComponent
// Size: 0x760 (Inherited: 0x210)
struct UPostProcessComponent : public USceneComponent {
	struct FPostProcessSettings Settings; // 0x210(0x540)
	float Priority; // 0x750(0x04)
	float BlendRadius; // 0x754(0x04)
	float BlendWeight; // 0x758(0x04)
	char bEnabled : 1; // 0x75c(0x01)
	char bUnbound : 1; // 0x75c(0x01)
	char UnknownData_75C_2 : 6; // 0x75c(0x01)
	char UnknownData_75D[0x3]; // 0x75d(0x03)

	void AddOrUpdateBlendable(struct TScriptInterface<None> InBlendableObject, float InWeight); // Function Engine.PostProcessComponent.AddOrUpdateBlendable
};

// Class Engine.PostProcessVolume
// Size: 0x7b0 (Inherited: 0x258)
struct APostProcessVolume : public AVolume {
	char UnknownData_258[0x8]; // 0x258(0x08)
	struct FPostProcessSettings Settings; // 0x260(0x540)
	float Priority; // 0x7a0(0x04)
	float BlendRadius; // 0x7a4(0x04)
	float BlendWeight; // 0x7a8(0x04)
	char bEnabled : 1; // 0x7ac(0x01)
	char bUnbound : 1; // 0x7ac(0x01)
	char UnknownData_7AC_2 : 6; // 0x7ac(0x01)
	char UnknownData_7AD[0x3]; // 0x7ad(0x03)

	void AddOrUpdateBlendable(struct TScriptInterface<None> InBlendableObject, float InWeight); // Function Engine.PostProcessVolume.AddOrUpdateBlendable
};

// Class Engine.PrecomputedVisibilityOverrideVolume
// Size: 0x288 (Inherited: 0x258)
struct APrecomputedVisibilityOverrideVolume : public AVolume {
	struct TArray<struct AActor*> OverrideVisibleActors; // 0x258(0x10)
	struct TArray<struct AActor*> OverrideInvisibleActors; // 0x268(0x10)
	struct TArray<struct FName> OverrideInvisibleLevels; // 0x278(0x10)
};

// Class Engine.PreviewMeshCollection
// Size: 0x50 (Inherited: 0x30)
struct UPreviewMeshCollection : public UDataAsset {
	char UnknownData_30[0x8]; // 0x30(0x08)
	struct USkeleton* Skeleton; // 0x38(0x08)
	struct TArray<struct FPreviewMeshCollectionEntry> SkeletalMeshes; // 0x40(0x10)
};

// Class Engine.ProxyLODMeshSimplificationSettings
// Size: 0x40 (Inherited: 0x38)
struct UProxyLODMeshSimplificationSettings : public UDeveloperSettings {
	struct FName ProxyLODMeshReductionModuleName; // 0x38(0x08)
};

// Class Engine.RadialForceActor
// Size: 0x228 (Inherited: 0x220)
struct ARadialForceActor : public ARigidBodyBase {
	struct URadialForceComponent* ForceComponent; // 0x220(0x08)

	void ToggleForce(); // Function Engine.RadialForceActor.ToggleForce
	void FireImpulse(); // Function Engine.RadialForceActor.FireImpulse
	void EnableForce(); // Function Engine.RadialForceActor.EnableForce
	void DisableForce(); // Function Engine.RadialForceActor.DisableForce
};

// Class Engine.RadialForceComponent
// Size: 0x240 (Inherited: 0x210)
struct URadialForceComponent : public USceneComponent {
	float Radius; // 0x208(0x04)
	char Falloff; // 0x20c(0x01)
	float ImpulseStrength; // 0x210(0x04)
	char bImpulseVelChange : 1; // 0x214(0x01)
	char bIgnoreOwningActor : 1; // 0x214(0x01)
	float ForceStrength; // 0x218(0x04)
	float DestructibleDamage; // 0x21c(0x04)
	struct TArray<char> ObjectTypesToAffect; // 0x220(0x10)
	char UnknownData_231_2 : 6; // 0x231(0x01)
	char UnknownData_232[0xe]; // 0x232(0x0e)

	void RemoveObjectTypeToAffect(char ObjectType); // Function Engine.RadialForceComponent.RemoveObjectTypeToAffect
	void FireImpulse(); // Function Engine.RadialForceComponent.FireImpulse
	void AddObjectTypeToAffect(char ObjectType); // Function Engine.RadialForceComponent.AddObjectTypeToAffect
};

// Class Engine.RectLight
// Size: 0x238 (Inherited: 0x230)
struct ARectLight : public ALight {
	struct URectLightComponent* RectLightComponent; // 0x230(0x08)
};

// Class Engine.RectLightComponent
// Size: 0x370 (Inherited: 0x350)
struct URectLightComponent : public ULocalLightComponent {
	float SourceWidth; // 0x350(0x04)
	float SourceHeight; // 0x354(0x04)
	float BarnDoorAngle; // 0x358(0x04)
	float BarnDoorLength; // 0x35c(0x04)
	struct UTexture* SourceTexture; // 0x360(0x08)
	char UnknownData_368[0x8]; // 0x368(0x08)

	void SetSourceWidth(float bNewValue); // Function Engine.RectLightComponent.SetSourceWidth
	void SetSourceTexture(struct UTexture* bNewValue); // Function Engine.RectLightComponent.SetSourceTexture
	void SetSourceHeight(float NewValue); // Function Engine.RectLightComponent.SetSourceHeight
	void SetBarnDoorLength(float NewValue); // Function Engine.RectLightComponent.SetBarnDoorLength
	void SetBarnDoorAngle(float NewValue); // Function Engine.RectLightComponent.SetBarnDoorAngle
};

// Class Engine.RendererSettings
// Size: 0xf0 (Inherited: 0x38)
struct URendererSettings : public UDeveloperSettings {
	char bMobileDisableVertexFog : 1; // 0x38(0x01)
	char UnknownData_38_1 : 7; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	int32_t MaxMobileCascades; // 0x3c(0x04)
	char MobileMSAASampleCount; // 0x40(0x01)
	char UnknownData_41[0x3]; // 0x41(0x03)
	char bMobileUseLegacyShadingModel : 1; // 0x44(0x01)
	char bMobileAllowDitheredLODTransition : 1; // 0x44(0x01)
	char bMobileAllowSoftwareOcclusionCulling : 1; // 0x44(0x01)
	char bMobileVirtualTextures : 1; // 0x44(0x01)
	char bDiscardUnusedQualityLevels : 1; // 0x44(0x01)
	char bOcclusionCulling : 1; // 0x44(0x01)
	char UnknownData_44_6 : 2; // 0x44(0x01)
	char UnknownData_45[0x3]; // 0x45(0x03)
	float MinScreenRadiusForLights; // 0x48(0x04)
	float MinScreenRadiusForEarlyZPass; // 0x4c(0x04)
	float MinScreenRadiusForCSMdepth; // 0x50(0x04)
	char bPrecomputedVisibilityWarning : 1; // 0x54(0x01)
	char bTextureStreaming : 1; // 0x54(0x01)
	char bUseDXT5NormalMaps : 1; // 0x54(0x01)
	char bVirtualTextures : 1; // 0x54(0x01)
	char bVirtualTexturedLightmaps : 1; // 0x54(0x01)
	char UnknownData_54_5 : 3; // 0x54(0x01)
	char UnknownData_55[0x3]; // 0x55(0x03)
	uint32_t VirtualTextureTileSize; // 0x58(0x04)
	uint32_t VirtualTextureTileBorderSize; // 0x5c(0x04)
	uint32_t VirtualTextureFeedbackFactor; // 0x60(0x04)
	char bVirtualTextureEnableCompressZlib : 1; // 0x64(0x01)
	char bVirtualTextureEnableCompressCrunch : 1; // 0x64(0x01)
	char bClearCoatEnableSecondNormal : 1; // 0x64(0x01)
	char bAnisotropicBRDF : 1; // 0x64(0x01)
	char UnknownData_64_4 : 4; // 0x64(0x01)
	char UnknownData_65[0x3]; // 0x65(0x03)
	int32_t ReflectionCaptureResolution; // 0x68(0x04)
	char ReflectionEnvironmentLightmapMixBasedOnRoughness : 1; // 0x6c(0x01)
	char bForwardShading : 1; // 0x6c(0x01)
	char bVertexFoggingForOpaque : 1; // 0x6c(0x01)
	char bAllowStaticLighting : 1; // 0x6c(0x01)
	char bUseNormalMapsForStaticLighting : 1; // 0x6c(0x01)
	char bGenerateMeshDistanceFields : 1; // 0x6c(0x01)
	char bEightBitMeshDistanceFields : 1; // 0x6c(0x01)
	char bGenerateLandscapeGIData : 1; // 0x6c(0x01)
	char bCompressMeshDistanceFields : 1; // 0x6d(0x01)
	char UnknownData_6D_1 : 7; // 0x6d(0x01)
	char UnknownData_6E[0x2]; // 0x6e(0x02)
	float TessellationAdaptivePixelsPerTriangle; // 0x70(0x04)
	char bSeparateTranslucency : 1; // 0x74(0x01)
	char UnknownData_74_1 : 7; // 0x74(0x01)
	char UnknownData_75[0x3]; // 0x75(0x03)
	char TranslucentSortPolicy; // 0x78(0x01)
	char UnknownData_79[0x3]; // 0x79(0x03)
	struct FVector TranslucentSortAxis; // 0x7c(0x0c)
	char CustomDepthStencil; // 0x88(0x01)
	char UnknownData_89[0x3]; // 0x89(0x03)
	char bCustomDepthTaaJitter : 1; // 0x8c(0x01)
	char UnknownData_8C_1 : 7; // 0x8c(0x01)
	char UnknownData_8D[0x3]; // 0x8d(0x03)
	char bEnableAlphaChannelInPostProcessing; // 0x90(0x01)
	char UnknownData_91[0x3]; // 0x91(0x03)
	char bDefaultFeatureBloom : 1; // 0x94(0x01)
	char bDefaultFeatureAmbientOcclusion : 1; // 0x94(0x01)
	char bDefaultFeatureAmbientOcclusionStaticFraction : 1; // 0x94(0x01)
	char bDefaultFeatureAutoExposure : 1; // 0x94(0x01)
	char UnknownData_94_4 : 4; // 0x94(0x01)
	char UnknownData_95[0x3]; // 0x95(0x03)
	char DefaultFeatureAutoExposure; // 0x98(0x01)
	char UnknownData_99[0x3]; // 0x99(0x03)
	float DefaultFeatureAutoExposureBias; // 0x9c(0x04)
	char bExtendDefaultLuminanceRangeInAutoExposureSettings : 1; // 0xa0(0x01)
	char bUsePreExposure : 1; // 0xa0(0x01)
	char bEnablePreExposureOnlyInTheEditor : 1; // 0xa0(0x01)
	char bDefaultFeatureMotionBlur : 1; // 0xa0(0x01)
	char bDefaultFeatureLensFlare : 1; // 0xa0(0x01)
	char bTemporalUpsampling : 1; // 0xa0(0x01)
	char bSSGI : 1; // 0xa0(0x01)
	char UnknownData_A1[0x3]; // 0xa1(0x03)
	char DefaultFeatureAntiAliasing; // 0xa4(0x01)
	enum class ELightUnits DefaultLightUnits; // 0xa5(0x01)
	char DefaultBackBufferPixelFormat; // 0xa6(0x01)
	char UnknownData_A7[0x1]; // 0xa7(0x01)
	char bRenderUnbuiltPreviewShadowsInGame : 1; // 0xa8(0x01)
	char bStencilForLODDither : 1; // 0xa8(0x01)
	char UnknownData_A8_2 : 6; // 0xa8(0x01)
	char UnknownData_A9[0x3]; // 0xa9(0x03)
	char EarlyZPass; // 0xac(0x01)
	char UnknownData_AD[0x3]; // 0xad(0x03)
	char bEarlyZPassOnlyMaterialMasking : 1; // 0xb0(0x01)
	char bDBuffer : 1; // 0xb0(0x01)
	char UnknownData_B0_2 : 6; // 0xb0(0x01)
	char UnknownData_B1[0x3]; // 0xb1(0x03)
	char ClearSceneMethod; // 0xb4(0x01)
	char UnknownData_B5[0x3]; // 0xb5(0x03)
	char bBasePassOutputsVelocity : 1; // 0xb8(0x01)
	char bVertexDeformationOutputsVelocity : 1; // 0xb8(0x01)
	char bSelectiveBasePassOutputs : 1; // 0xb8(0x01)
	char bDefaultParticleCutouts : 1; // 0xb8(0x01)
	char UnknownData_B8_4 : 4; // 0xb8(0x01)
	char UnknownData_B9[0x3]; // 0xb9(0x03)
	int32_t GPUSimulationTextureSizeX; // 0xbc(0x04)
	int32_t GPUSimulationTextureSizeY; // 0xc0(0x04)
	char bGlobalClipPlane : 1; // 0xc4(0x01)
	char UnknownData_C4_1 : 7; // 0xc4(0x01)
	char UnknownData_C5[0x3]; // 0xc5(0x03)
	char GBufferFormat; // 0xc8(0x01)
	char UnknownData_C9[0x3]; // 0xc9(0x03)
	char bUseGPUMorphTargets : 1; // 0xcc(0x01)
	char bNvidiaAftermathEnabled : 1; // 0xcc(0x01)
	char bMultiView : 1; // 0xcc(0x01)
	char bMobilePostProcessing : 1; // 0xcc(0x01)
	char bMobileMultiView : 1; // 0xcc(0x01)
	char bMobileUseHWsRGBEncoding : 1; // 0xcc(0x01)
	char bRoundRobinOcclusion : 1; // 0xcc(0x01)
	char bODSCapture : 1; // 0xcc(0x01)
	char bMeshStreaming : 1; // 0xcd(0x01)
	char UnknownData_CD_1 : 7; // 0xcd(0x01)
	char UnknownData_CE[0x2]; // 0xce(0x02)
	float WireframeCullThreshold; // 0xd0(0x04)
	char bEnableRayTracing : 1; // 0xd4(0x01)
	char bEnableRayTracingTextureLOD : 1; // 0xd4(0x01)
	char bSupportStationarySkylight : 1; // 0xd4(0x01)
	char bSupportLowQualityLightmaps : 1; // 0xd4(0x01)
	char bSupportPointLightWholeSceneShadows : 1; // 0xd4(0x01)
	char bSupportAtmosphericFog : 1; // 0xd4(0x01)
	char bSupportSkyAtmosphere : 1; // 0xd4(0x01)
	char bSupportSkyAtmosphereAffectsHeightFog : 1; // 0xd4(0x01)
	char bSupportSkinCacheShaders : 1; // 0xd5(0x01)
	char UnknownData_D5_1 : 7; // 0xd5(0x01)
	char UnknownData_D6[0x2]; // 0xd6(0x02)
	enum class ESkinCacheDefaultBehavior DefaultSkinCacheBehavior; // 0xd8(0x01)
	char UnknownData_D9[0x3]; // 0xd9(0x03)
	float SkinCacheSceneMemoryLimitInMB; // 0xdc(0x04)
	char bMobileEnableStaticAndCSMShadowReceivers : 1; // 0xe0(0x01)
	char bMobileEnableMovableLightCSMShaderCulling : 1; // 0xe0(0x01)
	char bMobileAllowDistanceFieldShadows : 1; // 0xe0(0x01)
	char bMobileAllowMovableDirectionalLights : 1; // 0xe0(0x01)
	char UnknownData_E0_4 : 4; // 0xe0(0x01)
	char UnknownData_E1[0x3]; // 0xe1(0x03)
	uint32_t MobileNumDynamicPointLights; // 0xe4(0x04)
	char bMobileDynamicPointLightsUseStaticBranch : 1; // 0xe8(0x01)
	char bMobileAllowMovableSpotlights : 1; // 0xe8(0x01)
	char bSupport16BitBoneIndex : 1; // 0xe8(0x01)
	char bGPUSkinLimit2BoneInfluences : 1; // 0xe8(0x01)
	char bSupportDepthOnlyIndexBuffers : 1; // 0xe8(0x01)
	char bSupportReversedIndexBuffers : 1; // 0xe8(0x01)
	char bSupportMaterialLayers : 1; // 0xe8(0x01)
	char bLPV : 1; // 0xe8(0x01)
	char UnknownData_E9[0x7]; // 0xe9(0x07)
};

// Class Engine.RendererOverrideSettings
// Size: 0x40 (Inherited: 0x38)
struct URendererOverrideSettings : public UDeveloperSettings {
	char bSupportAllShaderPermutations : 1; // 0x38(0x01)
	char bForceRecomputeTangents : 1; // 0x38(0x01)
	char UnknownData_38_2 : 6; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
};

// Class Engine.RenderThreadInputHandler
// Size: 0x90 (Inherited: 0x28)
struct URenderThreadInputHandler : public UObject {
	char UnknownData_28[0x68]; // 0x28(0x68)
};

// Class Engine.ReporterBase
// Size: 0x30 (Inherited: 0x28)
struct UReporterBase : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class Engine.ReporterGraph
// Size: 0xa8 (Inherited: 0x30)
struct UReporterGraph : public UReporterBase {
	char UnknownData_30[0x78]; // 0x30(0x78)
};

// Class Engine.ReverbEffect
// Size: 0x58 (Inherited: 0x28)
struct UReverbEffect : public UObject {
	float Density; // 0x28(0x04)
	float Diffusion; // 0x2c(0x04)
	float Gain; // 0x30(0x04)
	float GainHF; // 0x34(0x04)
	float DecayTime; // 0x38(0x04)
	float DecayHFRatio; // 0x3c(0x04)
	float ReflectionsGain; // 0x40(0x04)
	float ReflectionsDelay; // 0x44(0x04)
	float LateGain; // 0x48(0x04)
	float LateDelay; // 0x4c(0x04)
	float AirAbsorptionGainHF; // 0x50(0x04)
	float RoomRolloffFactor; // 0x54(0x04)
};

// Class Engine.Rig
// Size: 0x50 (Inherited: 0x28)
struct URig : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct TArray<struct FTransformBase> TransformBases; // 0x30(0x10)
	struct TArray<struct FNode> Nodes; // 0x40(0x10)
};

// Class Engine.RotatingMovementComponent
// Size: 0x110 (Inherited: 0xf0)
struct URotatingMovementComponent : public UMovementComponent {
	struct FRotator RotationRate; // 0xf0(0x0c)
	struct FVector PivotTranslation; // 0xfc(0x0c)
	char bRotationInLocalSpace : 1; // 0x108(0x01)
	char UnknownData_108_1 : 7; // 0x108(0x01)
	char UnknownData_109[0x7]; // 0x109(0x07)
};

// Class Engine.RuntimeOptionsBase
// Size: 0x38 (Inherited: 0x28)
struct URuntimeOptionsBase : public UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
};

// Class Engine.RuntimeVirtualTexture
// Size: 0xa0 (Inherited: 0x28)
struct URuntimeVirtualTexture : public UObject {
	enum class ERuntimeVirtualTextureMaterialType MaterialType; // 0x28(0x01)
	bool bCompressTextures; // 0x29(0x01)
	bool bEnable; // 0x2a(0x01)
	bool bClearTextures; // 0x2b(0x01)
	bool bSinglePhysicalSpace; // 0x2c(0x01)
	bool bPrivateSpace; // 0x2d(0x01)
	bool bEnableScalability; // 0x2e(0x01)
	char UnknownData_2F[0x1]; // 0x2f(0x01)
	int32_t Size; // 0x30(0x04)
	int32_t TileCount; // 0x34(0x04)
	int32_t TileSize; // 0x38(0x04)
	int32_t TileBorderSize; // 0x3c(0x04)
	int32_t StreamLowMips; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
	struct URuntimeVirtualTextureStreamingProxy* StreamingTexture; // 0x48(0x08)
	bool bEnableCompressCrunch; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	int32_t RemoveLowMips; // 0x54(0x04)
	char UnknownData_58[0x48]; // 0x58(0x48)

	int32_t GetTileSize(); // Function Engine.RuntimeVirtualTexture.GetTileSize
	int32_t GetTileCount(); // Function Engine.RuntimeVirtualTexture.GetTileCount
	int32_t GetTileBorderSize(); // Function Engine.RuntimeVirtualTexture.GetTileBorderSize
	int32_t GetSize(); // Function Engine.RuntimeVirtualTexture.GetSize
};

// Class Engine.RuntimeVirtualTextureComponent
// Size: 0x230 (Inherited: 0x210)
struct URuntimeVirtualTextureComponent : public USceneComponent {
	struct URuntimeVirtualTexture* VirtualTexture; // 0x208(0x08)
	bool bUseStreamingLowMipsInEditor; // 0x210(0x01)
	struct AActor* BoundsSourceActor; // 0x218(0x08)
	char UnknownData_221[0xf]; // 0x221(0x0f)

	struct FTransform GetVirtualTextureTransform(); // Function Engine.RuntimeVirtualTextureComponent.GetVirtualTextureTransform
};

// Class Engine.RuntimeVirtualTextureStreamingProxy
// Size: 0x100 (Inherited: 0xe8)
struct URuntimeVirtualTextureStreamingProxy : public UTexture2D {
	struct FVirtualTextureBuildSettings Settings; // 0xe8(0x0c)
	bool bSinglePhysicalSpace; // 0xf4(0x01)
	char UnknownData_F5[0x3]; // 0xf5(0x03)
	uint32_t BuildHash; // 0xf8(0x04)
	char UnknownData_FC[0x4]; // 0xfc(0x04)
};

// Class Engine.RuntimeVirtualTextureVolume
// Size: 0x228 (Inherited: 0x220)
struct ARuntimeVirtualTextureVolume : public AActor {
	struct URuntimeVirtualTextureComponent* VirtualTextureComponent; // 0x220(0x08)
};

// Class Engine.SceneCapture2D
// Size: 0x238 (Inherited: 0x230)
struct ASceneCapture2D : public ASceneCapture {
	struct USceneCaptureComponent2D* CaptureComponent2D; // 0x230(0x08)

	void OnInterpToggle(bool bEnable); // Function Engine.SceneCapture2D.OnInterpToggle
};

// Class Engine.SceneCaptureComponent2D
// Size: 0x890 (Inherited: 0x2a0)
struct USceneCaptureComponent2D : public USceneCaptureComponent {
	char ProjectionType; // 0x2a0(0x01)
	char UnknownData_2A1[0x3]; // 0x2a1(0x03)
	float FOVAngle; // 0x2a4(0x04)
	float OrthoWidth; // 0x2a8(0x04)
	char UnknownData_2AC[0x4]; // 0x2ac(0x04)
	struct UTextureRenderTarget2D* TextureTarget; // 0x2b0(0x08)
	char CompositeMode; // 0x2b8(0x01)
	char UnknownData_2B9[0x7]; // 0x2b9(0x07)
	struct FPostProcessSettings PostProcessSettings; // 0x2c0(0x540)
	float PostProcessBlendWeight; // 0x800(0x04)
	char bOverride_CustomNearClippingPlane : 1; // 0x804(0x01)
	char UnknownData_804_1 : 7; // 0x804(0x01)
	char UnknownData_805[0x3]; // 0x805(0x03)
	float CustomNearClippingPlane; // 0x808(0x04)
	bool bUseCustomProjectionMatrix; // 0x80c(0x01)
	char UnknownData_80D[0x3]; // 0x80d(0x03)
	struct FMatrix CustomProjectionMatrix; // 0x810(0x40)
	bool bEnableClipPlane; // 0x850(0x01)
	char UnknownData_851[0x3]; // 0x851(0x03)
	struct FVector ClipPlaneBase; // 0x854(0x0c)
	struct FVector ClipPlaneNormal; // 0x860(0x0c)
	char bCameraCutThisFrame : 1; // 0x86c(0x01)
	char bConsiderUnrenderedOpaquePixelAsFullyTranslucent : 1; // 0x86c(0x01)
	char UnknownData_86C_2 : 6; // 0x86c(0x01)
	char UnknownData_86D[0x3]; // 0x86d(0x03)
	bool bDisableFlipCopyGLES; // 0x870(0x01)
	char UnknownData_871[0x1f]; // 0x871(0x1f)

	void CaptureScene(); // Function Engine.SceneCaptureComponent2D.CaptureScene
	void AddOrUpdateBlendable(struct TScriptInterface<None> InBlendableObject, float InWeight); // Function Engine.SceneCaptureComponent2D.AddOrUpdateBlendable
};

// Class Engine.SceneCaptureComponentCube
// Size: 0x2d0 (Inherited: 0x2a0)
struct USceneCaptureComponentCube : public USceneCaptureComponent {
	struct UTextureRenderTargetCube* TextureTarget; // 0x2a0(0x08)
	bool bCaptureRotation; // 0x2a8(0x01)
	char UnknownData_2A9[0x7]; // 0x2a9(0x07)
	struct UTextureRenderTargetCube* TextureTargetLeft; // 0x2b0(0x08)
	struct UTextureRenderTargetCube* TextureTargetRight; // 0x2b8(0x08)
	struct UTextureRenderTarget2D* TextureTargetODS; // 0x2c0(0x08)
	float IPD; // 0x2c8(0x04)
	char UnknownData_2CC[0x4]; // 0x2cc(0x04)

	void CaptureScene(); // Function Engine.SceneCaptureComponentCube.CaptureScene
};

// Class Engine.SceneCaptureCube
// Size: 0x238 (Inherited: 0x230)
struct ASceneCaptureCube : public ASceneCapture {
	struct USceneCaptureComponentCube* CaptureComponentCube; // 0x230(0x08)

	void OnInterpToggle(bool bEnable); // Function Engine.SceneCaptureCube.OnInterpToggle
};

// Class Engine.SCS_Node
// Size: 0xd8 (Inherited: 0x28)
struct USCS_Node : public UObject {
	struct UObject* ComponentClass; // 0x28(0x08)
	struct UActorComponent* ComponentTemplate; // 0x30(0x08)
	struct FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x38(0x48)
	struct FName AttachToName; // 0x80(0x08)
	struct FName ParentComponentOrVariableName; // 0x88(0x08)
	struct FName ParentComponentOwnerClassName; // 0x90(0x08)
	bool bIsParentComponentNative; // 0x98(0x01)
	char UnknownData_99[0x7]; // 0x99(0x07)
	struct TArray<struct USCS_Node*> ChildNodes; // 0xa0(0x10)
	struct TArray<struct FBPVariableMetaDataEntry> MetaDataArray; // 0xb0(0x10)
	struct FGuid VariableGuid; // 0xc0(0x10)
	struct FName InternalVariableName; // 0xd0(0x08)
};

// Class Engine.Selection
// Size: 0xa0 (Inherited: 0x28)
struct USelection : public UObject {
	char UnknownData_28[0x78]; // 0x28(0x78)
};

// Class Engine.ServerStatReplicator
// Size: 0x2e8 (Inherited: 0x220)
struct AServerStatReplicator : public AInfo {
	bool bUpdateStatNet; // 0x220(0x01)
	bool bOverwriteClientStats; // 0x221(0x01)
	char UnknownData_222[0x2]; // 0x222(0x02)
	uint32_t Channels; // 0x224(0x04)
	uint32_t InRate; // 0x228(0x04)
	uint32_t OutRate; // 0x22c(0x04)
	char UnknownData_230[0x4]; // 0x230(0x04)
	uint32_t MaxPacketOverhead; // 0x234(0x04)
	uint32_t InRateClientMax; // 0x238(0x04)
	uint32_t InRateClientMin; // 0x23c(0x04)
	uint32_t InRateClientAvg; // 0x240(0x04)
	uint32_t InPacketsClientMax; // 0x244(0x04)
	uint32_t InPacketsClientMin; // 0x248(0x04)
	uint32_t InPacketsClientAvg; // 0x24c(0x04)
	uint32_t OutRateClientMax; // 0x250(0x04)
	uint32_t OutRateClientMin; // 0x254(0x04)
	uint32_t OutRateClientAvg; // 0x258(0x04)
	uint32_t OutPacketsClientMax; // 0x25c(0x04)
	uint32_t OutPacketsClientMin; // 0x260(0x04)
	uint32_t OutPacketsClientAvg; // 0x264(0x04)
	uint32_t NetNumClients; // 0x268(0x04)
	uint32_t InPackets; // 0x26c(0x04)
	uint32_t OutPackets; // 0x270(0x04)
	uint32_t InBunches; // 0x274(0x04)
	uint32_t OutBunches; // 0x278(0x04)
	uint32_t OutLoss; // 0x27c(0x04)
	uint32_t InLoss; // 0x280(0x04)
	uint32_t VoiceBytesSent; // 0x284(0x04)
	uint32_t VoiceBytesRecv; // 0x288(0x04)
	uint32_t VoicePacketsSent; // 0x28c(0x04)
	uint32_t VoicePacketsRecv; // 0x290(0x04)
	uint32_t PercentInVoice; // 0x294(0x04)
	uint32_t PercentOutVoice; // 0x298(0x04)
	uint32_t NumActorChannels; // 0x29c(0x04)
	uint32_t NumConsideredActors; // 0x2a0(0x04)
	uint32_t PrioritizedActors; // 0x2a4(0x04)
	uint32_t NumRelevantActors; // 0x2a8(0x04)
	uint32_t NumRelevantDeletedActors; // 0x2ac(0x04)
	uint32_t NumReplicatedActorAttempts; // 0x2b0(0x04)
	uint32_t NumReplicatedActors; // 0x2b4(0x04)
	uint32_t NumActors; // 0x2b8(0x04)
	uint32_t NumNetActors; // 0x2bc(0x04)
	uint32_t NumDormantActors; // 0x2c0(0x04)
	uint32_t NumInitiallyDormantActors; // 0x2c4(0x04)
	uint32_t NumNetGUIDsAckd; // 0x2c8(0x04)
	uint32_t NumNetGUIDsPending; // 0x2cc(0x04)
	uint32_t NumNetGUIDsUnAckd; // 0x2d0(0x04)
	uint32_t ObjPathBytes; // 0x2d4(0x04)
	uint32_t NetGUIDOutRate; // 0x2d8(0x04)
	uint32_t NetGUIDInRate; // 0x2dc(0x04)
	uint32_t NetSaturated; // 0x2e0(0x04)
	char UnknownData_2E4[0x4]; // 0x2e4(0x04)
};

// Class Engine.ShadowMapTexture2D
// Size: 0xf0 (Inherited: 0xe8)
struct UShadowMapTexture2D : public UTexture2D {
	char ShadowmapFlags; // 0xe8(0x01)
	char UnknownData_E9[0x7]; // 0xe9(0x07)
};

// Class Engine.SimpleConstructionScript
// Size: 0xa0 (Inherited: 0x28)
struct USimpleConstructionScript : public UObject {
	struct TArray<struct USCS_Node*> RootNodes; // 0x28(0x10)
	struct TArray<struct USCS_Node*> AllNodes; // 0x38(0x10)
	struct USCS_Node* DefaultSceneRootNode; // 0x48(0x08)
	char UnknownData_50[0x50]; // 0x50(0x50)
};

// Class Engine.SkeletalMeshActor
// Size: 0x2a8 (Inherited: 0x220)
struct ASkeletalMeshActor : public AActor {
	char UnknownData_220[0x8]; // 0x220(0x08)
	char bShouldDoAnimNotifies : 1; // 0x228(0x01)
	char bWakeOnLevelStart : 1; // 0x228(0x01)
	char UnknownData_228_2 : 6; // 0x228(0x01)
	char UnknownData_229[0x7]; // 0x229(0x07)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x230(0x08)
	struct USkeletalMesh* ReplicatedMesh; // 0x238(0x08)
	struct UPhysicsAsset* ReplicatedPhysAsset; // 0x240(0x08)
	struct UMaterialInterface* ReplicatedMaterial0; // 0x248(0x08)
	struct UMaterialInterface* ReplicatedMaterial1; // 0x250(0x08)
	char UnknownData_258[0x50]; // 0x258(0x50)

	void OnRep_ReplicatedPhysAsset(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedPhysAsset
	void OnRep_ReplicatedMesh(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedMesh
	void OnRep_ReplicatedMaterial1(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial1
	void OnRep_ReplicatedMaterial0(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial0
};

// Class Engine.SkeletalMeshLODSettings
// Size: 0x60 (Inherited: 0x30)
struct USkeletalMeshLODSettings : public UDataAsset {
	struct FPerPlatformInt MinLOD; // 0x30(0x04)
	struct FPerPlatformInt MaxLod; // 0x34(0x04)
	struct FPerPlatformBool DisableBelowMinLodStripping; // 0x38(0x01)
	struct FPerPlatformBool bSupportLODStreaming; // 0x39(0x01)
	char UnknownData_3A[0x2]; // 0x3a(0x02)
	struct FPerPlatformInt MaxNumStreamedLODs; // 0x3c(0x04)
	struct FPerPlatformInt MaxNumOptionalLODs; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
	struct TArray<struct FSkeletalMeshLODGroupSettings> LODGroups; // 0x48(0x10)
	char bOverrideWillNeverMergeMesh : 1; // 0x58(0x01)
	char bWillNeverMergeMesh : 1; // 0x58(0x01)
	char UnknownData_58_2 : 6; // 0x58(0x01)
	char UnknownData_59[0x7]; // 0x59(0x07)

	void SetMinMaxLodToMesh(struct USkeletalMesh* InMesh); // Function Engine.SkeletalMeshLODSettings.SetMinMaxLodToMesh
};

// Class Engine.SkeletalMeshSimplificationSettings
// Size: 0x40 (Inherited: 0x38)
struct USkeletalMeshSimplificationSettings : public UDeveloperSettings {
	struct FName SkeletalMeshReductionModuleName; // 0x38(0x08)
};

// Class Engine.SkeletalMeshSocket
// Size: 0x60 (Inherited: 0x28)
struct USkeletalMeshSocket : public UObject {
	struct FName SocketName; // 0x28(0x08)
	struct FName BoneName; // 0x30(0x08)
	struct FVector RelativeLocation; // 0x38(0x0c)
	struct FRotator RelativeRotation; // 0x44(0x0c)
	struct FVector RelativeScale; // 0x50(0x0c)
	bool bForceAlwaysAnimated; // 0x5c(0x01)
	char UnknownData_5D[0x3]; // 0x5d(0x03)

	void InitializeSocketFromLocation(struct USkeletalMeshComponent* SkelComp, struct FVector WorldLocation, struct FVector WorldNormal); // Function Engine.SkeletalMeshSocket.InitializeSocketFromLocation
	struct FVector GetSocketLocation(struct USkeletalMeshComponent* SkelComp); // Function Engine.SkeletalMeshSocket.GetSocketLocation
};

// Class Engine.SkyAtmosphereComponent
// Size: 0x2e0 (Inherited: 0x210)
struct USkyAtmosphereComponent : public USceneComponent {
	enum class ESkyAtmosphereTransformMode TransformMode; // 0x208(0x01)
	float BottomRadius; // 0x20c(0x04)
	struct FColor GroundAlbedo; // 0x210(0x04)
	float AtmosphereHeight; // 0x214(0x04)
	float MultiScatteringFactor; // 0x218(0x04)
	float RayleighScatteringScale; // 0x21c(0x04)
	struct FLinearColor RayleighScattering; // 0x220(0x10)
	float RayleighExponentialDistribution; // 0x230(0x04)
	float MieScatteringScale; // 0x234(0x04)
	struct FLinearColor MieScattering; // 0x238(0x10)
	float MieAbsorptionScale; // 0x248(0x04)
	struct FLinearColor MieAbsorption; // 0x24c(0x10)
	float MieAnisotropy; // 0x25c(0x04)
	float MieExponentialDistribution; // 0x260(0x04)
	float OtherAbsorptionScale; // 0x264(0x04)
	struct FLinearColor OtherAbsorption; // 0x268(0x10)
	struct FTentDistribution OtherTentDistribution; // 0x278(0x0c)
	struct FLinearColor SkyLuminanceFactor; // 0x284(0x10)
	float AerialPespectiveViewDistanceScale; // 0x294(0x04)
	float HeightFogContribution; // 0x298(0x04)
	float TransmittanceMinLightElevationAngle; // 0x29c(0x04)
	char UnknownData_2A5[0x1f]; // 0x2a5(0x1f)
	struct FGuid bStaticLightingBuiltGUID; // 0x2c4(0x10)
	char UnknownData_2D4[0xc]; // 0x2d4(0x0c)

	void SetSkyLuminanceFactor(struct FLinearColor NewValue); // Function Engine.SkyAtmosphereComponent.SetSkyLuminanceFactor
	void SetRayleighScatteringScale(float NewValue); // Function Engine.SkyAtmosphereComponent.SetRayleighScatteringScale
	void SetRayleighScattering(struct FLinearColor NewValue); // Function Engine.SkyAtmosphereComponent.SetRayleighScattering
	void SetRayleighExponentialDistribution(float NewValue); // Function Engine.SkyAtmosphereComponent.SetRayleighExponentialDistribution
	void SetOtherAbsorptionScale(float NewValue); // Function Engine.SkyAtmosphereComponent.SetOtherAbsorptionScale
	void SetOtherAbsorption(struct FLinearColor NewValue); // Function Engine.SkyAtmosphereComponent.SetOtherAbsorption
	void SetMieScatteringScale(float NewValue); // Function Engine.SkyAtmosphereComponent.SetMieScatteringScale
	void SetMieScattering(struct FLinearColor NewValue); // Function Engine.SkyAtmosphereComponent.SetMieScattering
	void SetMieExponentialDistribution(float NewValue); // Function Engine.SkyAtmosphereComponent.SetMieExponentialDistribution
	void SetMieAnisotropy(float NewValue); // Function Engine.SkyAtmosphereComponent.SetMieAnisotropy
	void SetMieAbsorptionScale(float NewValue); // Function Engine.SkyAtmosphereComponent.SetMieAbsorptionScale
	void SetMieAbsorption(struct FLinearColor NewValue); // Function Engine.SkyAtmosphereComponent.SetMieAbsorption
	void SetHeightFogContribution(float NewValue); // Function Engine.SkyAtmosphereComponent.SetHeightFogContribution
	void SetAerialPespectiveViewDistanceScale(float NewValue); // Function Engine.SkyAtmosphereComponent.SetAerialPespectiveViewDistanceScale
	void OverrideAtmosphereLightDirection(int32_t AtmosphereLightIndex, struct FVector LightDirection); // Function Engine.SkyAtmosphereComponent.OverrideAtmosphereLightDirection
};

// Class Engine.SkyAtmosphere
// Size: 0x228 (Inherited: 0x220)
struct ASkyAtmosphere : public AInfo {
	struct USkyAtmosphereComponent* SkyAtmosphereComponent; // 0x220(0x08)
};

// Class Engine.SkyLightComponent
// Size: 0x410 (Inherited: 0x240)
struct USkyLightComponent : public ULightComponentBase {
	char SourceType; // 0x238(0x01)
	struct UTextureCube* Cubemap; // 0x240(0x08)
	float SourceCubemapAngle; // 0x248(0x04)
	int32_t CubemapResolution; // 0x24c(0x04)
	float SkyDistanceThreshold; // 0x250(0x04)
	bool bCaptureEmissiveOnly; // 0x254(0x01)
	bool bLowerHemisphereIsBlack; // 0x255(0x01)
	char UnknownData_257[0x1]; // 0x257(0x01)
	struct FLinearColor LowerHemisphereColor; // 0x258(0x10)
	float OcclusionMaxDistance; // 0x268(0x04)
	float Contrast; // 0x26c(0x04)
	float OcclusionExponent; // 0x270(0x04)
	float MinOcclusion; // 0x274(0x04)
	struct FColor OcclusionTint; // 0x278(0x04)
	char OcclusionCombineMode; // 0x27c(0x01)
	char UnknownData_27D[0xbb]; // 0x27d(0xbb)
	struct UTextureCube* BlendDestinationCubemap; // 0x338(0x08)
	char UnknownData_340[0xd0]; // 0x340(0xd0)

	void SetVolumetricScatteringIntensity(float NewIntensity); // Function Engine.SkyLightComponent.SetVolumetricScatteringIntensity
	void SetOcclusionTint(struct FColor InTint); // Function Engine.SkyLightComponent.SetOcclusionTint
	void SetOcclusionExponent(float InOcclusionExponent); // Function Engine.SkyLightComponent.SetOcclusionExponent
	void SetOcclusionContrast(float InOcclusionContrast); // Function Engine.SkyLightComponent.SetOcclusionContrast
	void SetMinOcclusion(float InMinOcclusion); // Function Engine.SkyLightComponent.SetMinOcclusion
	void SetLowerHemisphereColor(struct FLinearColor InLowerHemisphereColor); // Function Engine.SkyLightComponent.SetLowerHemisphereColor
	void SetLightColor(struct FLinearColor NewLightColor); // Function Engine.SkyLightComponent.SetLightColor
	void SetIntensity(float NewIntensity); // Function Engine.SkyLightComponent.SetIntensity
	void SetIndirectLightingIntensity(float NewIntensity); // Function Engine.SkyLightComponent.SetIndirectLightingIntensity
	void SetCubemapBlend(struct UTextureCube* SourceCubemap, struct UTextureCube* DestinationCubemap, float InBlendFraction); // Function Engine.SkyLightComponent.SetCubemapBlend
	void SetCubemap(struct UTextureCube* NewCubemap); // Function Engine.SkyLightComponent.SetCubemap
	void RecaptureSky(); // Function Engine.SkyLightComponent.RecaptureSky
};

// Class Engine.SlateBrushAsset
// Size: 0xb0 (Inherited: 0x28)
struct USlateBrushAsset : public UObject {
	struct FSlateBrush Brush; // 0x28(0x88)
};

// Class Engine.SoundAttenuation
// Size: 0x3c8 (Inherited: 0x28)
struct USoundAttenuation : public UObject {
	struct FSoundAttenuationSettings Attenuation; // 0x28(0x3a0)
};

// Class Engine.SoundClass
// Size: 0xc0 (Inherited: 0x28)
struct USoundClass : public UObject {
	struct FSoundClassProperties Properties; // 0x28(0x60)
	struct TArray<struct USoundClass*> ChildClasses; // 0x88(0x10)
	struct TArray<struct FPassiveSoundMixModifier> PassiveSoundMixModifiers; // 0x98(0x10)
	struct FSoundModulation Modulation; // 0xa8(0x10)
	struct USoundClass* ParentClass; // 0xb8(0x08)
};

// Class Engine.SoundConcurrency
// Size: 0x48 (Inherited: 0x28)
struct USoundConcurrency : public UObject {
	struct FSoundConcurrencySettings Concurrency; // 0x28(0x20)
};

// Class Engine.SoundCue
// Size: 0x538 (Inherited: 0x160)
struct USoundCue : public USoundBase {
	char bPrimeOnLoad : 1; // 0x160(0x01)
	char UnknownData_160_1 : 7; // 0x160(0x01)
	char UnknownData_161[0x7]; // 0x161(0x07)
	struct USoundNode* FirstNode; // 0x168(0x08)
	float VolumeMultiplier; // 0x170(0x04)
	float PitchMultiplier; // 0x174(0x04)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x178(0x3a0)
	float SubtitlePriority; // 0x518(0x04)
	char UnknownData_51C[0x4]; // 0x51c(0x04)
	char bOverrideAttenuation : 1; // 0x520(0x01)
	char bExcludeFromRandomNodeBranchCulling : 1; // 0x520(0x01)
	char UnknownData_520_2 : 6; // 0x520(0x01)
	char UnknownData_521[0x3]; // 0x521(0x03)
	int32_t CookedQualityIndex; // 0x524(0x04)
	char bHasPlayWhenSilent : 1; // 0x528(0x01)
	char UnknownData_528_1 : 7; // 0x528(0x01)
	char UnknownData_529[0xf]; // 0x529(0x0f)
};

// Class Engine.SoundEffectSourcePresetChain
// Size: 0x40 (Inherited: 0x28)
struct USoundEffectSourcePresetChain : public UObject {
	struct TArray<struct FSourceEffectChainEntry> Chain; // 0x28(0x10)
	char bPlayEffectChainTails : 1; // 0x38(0x01)
	char UnknownData_38_1 : 7; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
};

// Class Engine.SoundGroups
// Size: 0x88 (Inherited: 0x28)
struct USoundGroups : public UObject {
	struct TArray<struct FSoundGroup> SoundGroupProfiles; // 0x28(0x10)
	char UnknownData_38[0x50]; // 0x38(0x50)
};

// Class Engine.SoundMix
// Size: 0x90 (Inherited: 0x28)
struct USoundMix : public UObject {
	char bApplyEQ : 1; // 0x28(0x01)
	char UnknownData_28_1 : 7; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	float EQPriority; // 0x2c(0x04)
	struct FAudioEQEffect EQSettings; // 0x30(0x40)
	struct TArray<struct FSoundClassAdjuster> SoundClassEffects; // 0x70(0x10)
	float InitialDelay; // 0x80(0x04)
	float FadeInTime; // 0x84(0x04)
	float Duration; // 0x88(0x04)
	float FadeOutTime; // 0x8c(0x04)
};

// Class Engine.SoundNode
// Size: 0x48 (Inherited: 0x28)
struct USoundNode : public UObject {
	struct TArray<struct USoundNode*> ChildNodes; // 0x28(0x10)
	char UnknownData_38[0x10]; // 0x38(0x10)
};

// Class Engine.SoundNodeAttenuation
// Size: 0x3f8 (Inherited: 0x48)
struct USoundNodeAttenuation : public USoundNode {
	struct USoundAttenuation* AttenuationSettings; // 0x48(0x08)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x50(0x3a0)
	char bOverrideAttenuation : 1; // 0x3f0(0x01)
	char UnknownData_3F0_1 : 7; // 0x3f0(0x01)
	char UnknownData_3F1[0x7]; // 0x3f1(0x07)
};

// Class Engine.SoundNodeBranch
// Size: 0x50 (Inherited: 0x48)
struct USoundNodeBranch : public USoundNode {
	struct FName BoolParameterName; // 0x48(0x08)
};

// Class Engine.SoundNodeConcatenator
// Size: 0x58 (Inherited: 0x48)
struct USoundNodeConcatenator : public USoundNode {
	struct TArray<float> InputVolume; // 0x48(0x10)
};

// Class Engine.SoundNodeDelay
// Size: 0x50 (Inherited: 0x48)
struct USoundNodeDelay : public USoundNode {
	float DelayMin; // 0x48(0x04)
	float DelayMax; // 0x4c(0x04)
};

// Class Engine.SoundNodeDialoguePlayer
// Size: 0x70 (Inherited: 0x48)
struct USoundNodeDialoguePlayer : public USoundNode {
	struct FDialogueWaveParameter DialogueWaveParameter; // 0x48(0x20)
	char bLooping : 1; // 0x68(0x01)
	char UnknownData_68_1 : 7; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
};

// Class Engine.SoundNodeDistanceCrossFade
// Size: 0x58 (Inherited: 0x48)
struct USoundNodeDistanceCrossFade : public USoundNode {
	struct TArray<struct FDistanceDatum> CrossFadeInput; // 0x48(0x10)
};

// Class Engine.SoundNodeDoppler
// Size: 0x58 (Inherited: 0x48)
struct USoundNodeDoppler : public USoundNode {
	float DopplerIntensity; // 0x48(0x04)
	bool bUseSmoothing; // 0x4c(0x01)
	char UnknownData_4D[0x3]; // 0x4d(0x03)
	float SmoothingInterpSpeed; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
};

// Class Engine.SoundNodeEnveloper
// Size: 0x190 (Inherited: 0x48)
struct USoundNodeEnveloper : public USoundNode {
	float LoopStart; // 0x48(0x04)
	float LoopEnd; // 0x4c(0x04)
	float DurationAfterLoop; // 0x50(0x04)
	int32_t LoopCount; // 0x54(0x04)
	char bLoopIndefinitely : 1; // 0x58(0x01)
	char bLoop : 1; // 0x58(0x01)
	char UnknownData_58_2 : 6; // 0x58(0x01)
	char UnknownData_59[0x7]; // 0x59(0x07)
	struct UDistributionFloatConstantCurve* VolumeInterpCurve; // 0x60(0x08)
	struct UDistributionFloatConstantCurve* PitchInterpCurve; // 0x68(0x08)
	struct FRuntimeFloatCurve VolumeCurve; // 0x70(0x88)
	struct FRuntimeFloatCurve PitchCurve; // 0xf8(0x88)
	float PitchMin; // 0x180(0x04)
	float PitchMax; // 0x184(0x04)
	float VolumeMin; // 0x188(0x04)
	float VolumeMax; // 0x18c(0x04)
};

// Class Engine.SoundNodeGroupControl
// Size: 0x58 (Inherited: 0x48)
struct USoundNodeGroupControl : public USoundNode {
	struct TArray<int32_t> GroupSizes; // 0x48(0x10)
};

// Class Engine.SoundNodeLooping
// Size: 0x50 (Inherited: 0x48)
struct USoundNodeLooping : public USoundNode {
	int32_t LoopCount; // 0x48(0x04)
	char bLoopIndefinitely : 1; // 0x4c(0x01)
	char UnknownData_4C_1 : 7; // 0x4c(0x01)
	char UnknownData_4D[0x3]; // 0x4d(0x03)
};

// Class Engine.SoundNodeMixer
// Size: 0x58 (Inherited: 0x48)
struct USoundNodeMixer : public USoundNode {
	struct TArray<float> InputVolume; // 0x48(0x10)
};

// Class Engine.SoundNodeModulator
// Size: 0x58 (Inherited: 0x48)
struct USoundNodeModulator : public USoundNode {
	float PitchMin; // 0x48(0x04)
	float PitchMax; // 0x4c(0x04)
	float VolumeMin; // 0x50(0x04)
	float VolumeMax; // 0x54(0x04)
};

// Class Engine.SoundNodeModulatorContinuous
// Size: 0x88 (Inherited: 0x48)
struct USoundNodeModulatorContinuous : public USoundNode {
	struct FModulatorContinuousParams PitchModulationParams; // 0x48(0x20)
	struct FModulatorContinuousParams VolumeModulationParams; // 0x68(0x20)
};

// Class Engine.SoundNodeOscillator
// Size: 0x70 (Inherited: 0x48)
struct USoundNodeOscillator : public USoundNode {
	char bModulateVolume : 1; // 0x48(0x01)
	char bModulatePitch : 1; // 0x48(0x01)
	char UnknownData_48_2 : 6; // 0x48(0x01)
	char UnknownData_49[0x3]; // 0x49(0x03)
	float AmplitudeMin; // 0x4c(0x04)
	float AmplitudeMax; // 0x50(0x04)
	float FrequencyMin; // 0x54(0x04)
	float FrequencyMax; // 0x58(0x04)
	float OffsetMin; // 0x5c(0x04)
	float OffsetMax; // 0x60(0x04)
	float CenterMin; // 0x64(0x04)
	float CenterMax; // 0x68(0x04)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
};

// Class Engine.SoundNodeParamCrossFade
// Size: 0x60 (Inherited: 0x58)
struct USoundNodeParamCrossFade : public USoundNodeDistanceCrossFade {
	struct FName ParamName; // 0x58(0x08)
};

// Class Engine.SoundNodeRandom
// Size: 0x78 (Inherited: 0x48)
struct USoundNodeRandom : public USoundNode {
	struct TArray<float> Weights; // 0x48(0x10)
	struct TArray<bool> HasBeenUsed; // 0x58(0x10)
	int32_t NumRandomUsed; // 0x68(0x04)
	int32_t PreselectAtLevelLoad; // 0x6c(0x04)
	char bShouldExcludeFromBranchCulling : 1; // 0x70(0x01)
	char bSoundCueExcludedFromBranchCulling : 1; // 0x70(0x01)
	char bRandomizeWithoutReplacement : 1; // 0x70(0x01)
	char UnknownData_70_3 : 5; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
};

// Class Engine.SoundNodeSoundClass
// Size: 0x58 (Inherited: 0x48)
struct USoundNodeSoundClass : public USoundNode {
	struct USoundClass* SoundClassOverride; // 0x48(0x08)
	char UnknownData_50[0x8]; // 0x50(0x08)
};

// Class Engine.SoundNodeSwitch
// Size: 0x50 (Inherited: 0x48)
struct USoundNodeSwitch : public USoundNode {
	struct FName IntParameterName; // 0x48(0x08)
};

// Class Engine.SoundNodeWaveParam
// Size: 0x50 (Inherited: 0x48)
struct USoundNodeWaveParam : public USoundNode {
	struct FName WaveParameterName; // 0x48(0x08)
};

// Class Engine.SoundNodeWavePlayer
// Size: 0x80 (Inherited: 0x48)
struct USoundNodeWavePlayer : public USoundNodeAssetReferencer {
	struct TSoftObjectPtr<struct USoundWave> SoundWaveAssetPtr; // 0x48(0x28)
	struct USoundWave* SoundWave; // 0x70(0x08)
	char UnknownData_78_0 : 1; // 0x78(0x01)
	char bLooping : 1; // 0x78(0x01)
	char UnknownData_78_2 : 6; // 0x78(0x01)
	char UnknownData_79[0x7]; // 0x79(0x07)
};

// Class Engine.SoundSourceBus
// Size: 0x328 (Inherited: 0x310)
struct USoundSourceBus : public USoundWave {
	enum class ESourceBusChannels SourceBusChannels; // 0x310(0x01)
	char UnknownData_311[0x3]; // 0x311(0x03)
	float SourceBusDuration; // 0x314(0x04)
	char bAutoDeactivateWhenSilent : 1; // 0x318(0x01)
	char UnknownData_318_1 : 7; // 0x318(0x01)
	char UnknownData_319[0xf]; // 0x319(0x0f)
};

// Class Engine.SoundSubmixBase
// Size: 0x38 (Inherited: 0x28)
struct USoundSubmixBase : public UObject {
	struct TArray<struct USoundSubmixBase*> ChildSubmixes; // 0x28(0x10)
};

// Class Engine.SoundSubmixWithParentBase
// Size: 0x40 (Inherited: 0x38)
struct USoundSubmixWithParentBase : public USoundSubmixBase {
	struct USoundSubmixBase* ParentSubmix; // 0x38(0x08)
};

// Class Engine.SoundSubmix
// Size: 0x88 (Inherited: 0x40)
struct USoundSubmix : public USoundSubmixWithParentBase {
	char bMuteWhenBackgrounded : 1; // 0x40(0x01)
	char UnknownData_40_1 : 7; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
	struct TArray<struct USoundEffectSubmixPreset*> SubmixEffectChain; // 0x48(0x10)
	struct USoundfieldEncodingSettingsBase* AmbisonicsPluginSettings; // 0x58(0x08)
	int32_t EnvelopeFollowerAttackTime; // 0x60(0x04)
	int32_t EnvelopeFollowerReleaseTime; // 0x64(0x04)
	float OutputVolume; // 0x68(0x04)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
	struct FMulticastInlineDelegate OnSubmixRecordedFileDone; // 0x70(0x10)
	char UnknownData_80[0x8]; // 0x80(0x08)

	void StopRecordingOutput(struct UObject* WorldContextObject, enum class EAudioRecordingExportType ExportType, struct FString Name, struct FString Path, struct USoundWave* ExistingSoundWaveToOverwrite); // Function Engine.SoundSubmix.StopRecordingOutput
	void StopEnvelopeFollowing(struct UObject* WorldContextObject); // Function Engine.SoundSubmix.StopEnvelopeFollowing
	void StartRecordingOutput(struct UObject* WorldContextObject, float ExpectedDuration); // Function Engine.SoundSubmix.StartRecordingOutput
	void StartEnvelopeFollowing(struct UObject* WorldContextObject); // Function Engine.SoundSubmix.StartEnvelopeFollowing
	void SetSubmixOutputVolume(struct UObject* WorldContextObject, float InOutputVolume); // Function Engine.SoundSubmix.SetSubmixOutputVolume
	void AddEnvelopeFollowerDelegate(struct UObject* WorldContextObject, struct FDelegate OnSubmixEnvelopeBP); // Function Engine.SoundSubmix.AddEnvelopeFollowerDelegate
};

// Class Engine.SoundfieldSubmix
// Size: 0x68 (Inherited: 0x40)
struct USoundfieldSubmix : public USoundSubmixWithParentBase {
	struct FName SoundfieldEncodingFormat; // 0x40(0x08)
	struct USoundfieldEncodingSettingsBase* EncodingSettings; // 0x48(0x08)
	struct TArray<struct USoundfieldEffectBase*> SoundfieldEffectChain; // 0x50(0x10)
	struct USoundfieldEncodingSettingsBase* EncodingSettingsClass; // 0x60(0x08)
};

// Class Engine.EndpointSubmix
// Size: 0x50 (Inherited: 0x38)
struct UEndpointSubmix : public USoundSubmixBase {
	struct FName EndpointType; // 0x38(0x08)
	struct UAudioEndpointSettingsBase* EndpointSettingsClass; // 0x40(0x08)
	struct UAudioEndpointSettingsBase* EndpointSettings; // 0x48(0x08)
};

// Class Engine.SoundfieldEndpointSubmix
// Size: 0x70 (Inherited: 0x38)
struct USoundfieldEndpointSubmix : public USoundSubmixBase {
	struct FName SoundfieldEndpointType; // 0x38(0x08)
	struct UAudioEndpointSettingsBase* EndpointSettingsClass; // 0x40(0x08)
	struct USoundfieldEndpointSettingsBase* EndpointSettings; // 0x48(0x08)
	struct USoundfieldEncodingSettingsBase* EncodingSettingsClass; // 0x50(0x08)
	struct USoundfieldEncodingSettingsBase* EncodingSettings; // 0x58(0x08)
	struct TArray<struct USoundfieldEffectBase*> SoundfieldEffectChain; // 0x60(0x10)
};

// Class Engine.SpectatorPawnMovement
// Size: 0x158 (Inherited: 0x150)
struct USpectatorPawnMovement : public UFloatingPawnMovement {
	char bIgnoreTimeDilation : 1; // 0x150(0x01)
	char UnknownData_150_1 : 7; // 0x150(0x01)
	char UnknownData_151[0x7]; // 0x151(0x07)
};

// Class Engine.SphereReflectionCapture
// Size: 0x230 (Inherited: 0x228)
struct ASphereReflectionCapture : public AReflectionCapture {
	struct UDrawSphereComponent* DrawCaptureRadius; // 0x228(0x08)
};

// Class Engine.SphereReflectionCaptureComponent
// Size: 0x290 (Inherited: 0x280)
struct USphereReflectionCaptureComponent : public UReflectionCaptureComponent {
	float InfluenceRadius; // 0x280(0x04)
	float CaptureDistanceScale; // 0x284(0x04)
	struct UDrawSphereComponent* PreviewInfluenceRadius; // 0x288(0x08)
};

// Class Engine.SplineComponent
// Size: 0x520 (Inherited: 0x430)
struct USplineComponent : public UPrimitiveComponent {
	struct FSplineCurves SplineCurves; // 0x430(0x68)
	struct FInterpCurveVector SplineInfo; // 0x498(0x18)
	struct FInterpCurveQuat SplineRotInfo; // 0x4b0(0x18)
	struct FInterpCurveVector SplineScaleInfo; // 0x4c8(0x18)
	struct FInterpCurveFloat SplineReparamTable; // 0x4e0(0x18)
	bool bAllowSplineEditingPerInstance; // 0x4f8(0x01)
	char UnknownData_4F9[0x3]; // 0x4f9(0x03)
	int32_t ReparamStepsPerSegment; // 0x4fc(0x04)
	float Duration; // 0x500(0x04)
	bool bStationaryEndpoints; // 0x504(0x01)
	bool bSplineHasBeenEdited; // 0x505(0x01)
	bool bModifiedByConstructionScript; // 0x506(0x01)
	bool bInputSplinePointsToConstructionScript; // 0x507(0x01)
	bool bDrawDebug; // 0x508(0x01)
	bool bClosedLoop; // 0x509(0x01)
	bool bLoopPositionOverride; // 0x50a(0x01)
	char UnknownData_50B[0x1]; // 0x50b(0x01)
	float LoopPosition; // 0x50c(0x04)
	struct FVector DefaultUpVector; // 0x510(0x0c)
	char UnknownData_51C[0x4]; // 0x51c(0x04)

	void UpdateSpline(); // Function Engine.SplineComponent.UpdateSpline
	void SetWorldLocationAtSplinePoint(int32_t PointIndex, struct FVector InLocation); // Function Engine.SplineComponent.SetWorldLocationAtSplinePoint
	void SetUpVectorAtSplinePoint(int32_t PointIndex, struct FVector InUpVector, char CoordinateSpace, bool bUpdateSpline); // Function Engine.SplineComponent.SetUpVectorAtSplinePoint
	void SetUnselectedSplineSegmentColor(struct FLinearColor SegmentColor); // Function Engine.SplineComponent.SetUnselectedSplineSegmentColor
	void SetTangentsAtSplinePoint(int32_t PointIndex, struct FVector InArriveTangent, struct FVector InLeaveTangent, char CoordinateSpace, bool bUpdateSpline); // Function Engine.SplineComponent.SetTangentsAtSplinePoint
	void SetTangentAtSplinePoint(int32_t PointIndex, struct FVector InTangent, char CoordinateSpace, bool bUpdateSpline); // Function Engine.SplineComponent.SetTangentAtSplinePoint
	void SetSplineWorldPoints(struct TArray<struct FVector> Points); // Function Engine.SplineComponent.SetSplineWorldPoints
	void SetSplinePointType(int32_t PointIndex, char Type, bool bUpdateSpline); // Function Engine.SplineComponent.SetSplinePointType
	void SetSplinePoints(struct TArray<struct FVector> Points, char CoordinateSpace, bool bUpdateSpline); // Function Engine.SplineComponent.SetSplinePoints
	void SetSplineLocalPoints(struct TArray<struct FVector> Points); // Function Engine.SplineComponent.SetSplineLocalPoints
	void SetSelectedSplineSegmentColor(struct FLinearColor SegmentColor); // Function Engine.SplineComponent.SetSelectedSplineSegmentColor
	void SetLocationAtSplinePoint(int32_t PointIndex, struct FVector InLocation, char CoordinateSpace, bool bUpdateSpline); // Function Engine.SplineComponent.SetLocationAtSplinePoint
	void SetDrawDebug(bool bShow); // Function Engine.SplineComponent.SetDrawDebug
	void SetDefaultUpVector(struct FVector UpVector, char CoordinateSpace); // Function Engine.SplineComponent.SetDefaultUpVector
	void SetClosedLoopAtPosition(bool bInClosedLoop, float Key, bool bUpdateSpline); // Function Engine.SplineComponent.SetClosedLoopAtPosition
	void SetClosedLoop(bool bInClosedLoop, bool bUpdateSpline); // Function Engine.SplineComponent.SetClosedLoop
	void RemoveSplinePoint(int32_t Index, bool bUpdateSpline); // Function Engine.SplineComponent.RemoveSplinePoint
	bool IsClosedLoop(); // Function Engine.SplineComponent.IsClosedLoop
	struct FVector GetWorldTangentAtDistanceAlongSpline(float Distance); // Function Engine.SplineComponent.GetWorldTangentAtDistanceAlongSpline
	struct FRotator GetWorldRotationAtTime(float Time, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetWorldRotationAtTime
	struct FRotator GetWorldRotationAtDistanceAlongSpline(float Distance); // Function Engine.SplineComponent.GetWorldRotationAtDistanceAlongSpline
	struct FVector GetWorldLocationAtTime(float Time, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetWorldLocationAtTime
	struct FVector GetWorldLocationAtSplinePoint(int32_t PointIndex); // Function Engine.SplineComponent.GetWorldLocationAtSplinePoint
	struct FVector GetWorldLocationAtDistanceAlongSpline(float Distance); // Function Engine.SplineComponent.GetWorldLocationAtDistanceAlongSpline
	struct FVector GetWorldDirectionAtTime(float Time, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetWorldDirectionAtTime
	struct FVector GetWorldDirectionAtDistanceAlongSpline(float Distance); // Function Engine.SplineComponent.GetWorldDirectionAtDistanceAlongSpline
	struct FVector GetVectorPropertyAtSplinePoint(int32_t Index, struct FName PropertyName); // Function Engine.SplineComponent.GetVectorPropertyAtSplinePoint
	struct FVector GetVectorPropertyAtSplineInputKey(float InKey, struct FName PropertyName); // Function Engine.SplineComponent.GetVectorPropertyAtSplineInputKey
	struct FVector GetUpVectorAtTime(float Time, char CoordinateSpace, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetUpVectorAtTime
	struct FVector GetUpVectorAtSplinePoint(int32_t PointIndex, char CoordinateSpace); // Function Engine.SplineComponent.GetUpVectorAtSplinePoint
	struct FVector GetUpVectorAtSplineInputKey(float InKey, char CoordinateSpace); // Function Engine.SplineComponent.GetUpVectorAtSplineInputKey
	struct FVector GetUpVectorAtDistanceAlongSpline(float Distance, char CoordinateSpace); // Function Engine.SplineComponent.GetUpVectorAtDistanceAlongSpline
	struct FTransform GetTransformAtTime(float Time, char CoordinateSpace, bool bUseConstantVelocity, bool bUseScale); // Function Engine.SplineComponent.GetTransformAtTime
	struct FTransform GetTransformAtSplinePoint(int32_t PointIndex, char CoordinateSpace, bool bUseScale); // Function Engine.SplineComponent.GetTransformAtSplinePoint
	struct FTransform GetTransformAtSplineInputKey(float InKey, char CoordinateSpace, bool bUseScale); // Function Engine.SplineComponent.GetTransformAtSplineInputKey
	struct FTransform GetTransformAtDistanceAlongSpline(float Distance, char CoordinateSpace, bool bUseScale); // Function Engine.SplineComponent.GetTransformAtDistanceAlongSpline
	struct FVector GetTangentAtTime(float Time, char CoordinateSpace, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetTangentAtTime
	struct FVector GetTangentAtSplinePoint(int32_t PointIndex, char CoordinateSpace); // Function Engine.SplineComponent.GetTangentAtSplinePoint
	struct FVector GetTangentAtSplineInputKey(float InKey, char CoordinateSpace); // Function Engine.SplineComponent.GetTangentAtSplineInputKey
	struct FVector GetTangentAtDistanceAlongSpline(float Distance, char CoordinateSpace); // Function Engine.SplineComponent.GetTangentAtDistanceAlongSpline
	char GetSplinePointType(int32_t PointIndex); // Function Engine.SplineComponent.GetSplinePointType
	float GetSplineLength(); // Function Engine.SplineComponent.GetSplineLength
	struct FVector GetScaleAtTime(float Time, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetScaleAtTime
	struct FVector GetScaleAtSplinePoint(int32_t PointIndex); // Function Engine.SplineComponent.GetScaleAtSplinePoint
	struct FVector GetScaleAtSplineInputKey(float InKey); // Function Engine.SplineComponent.GetScaleAtSplineInputKey
	struct FVector GetScaleAtDistanceAlongSpline(float Distance); // Function Engine.SplineComponent.GetScaleAtDistanceAlongSpline
	struct FRotator GetRotationAtTime(float Time, char CoordinateSpace, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetRotationAtTime
	struct FRotator GetRotationAtSplinePoint(int32_t PointIndex, char CoordinateSpace); // Function Engine.SplineComponent.GetRotationAtSplinePoint
	struct FRotator GetRotationAtSplineInputKey(float InKey, char CoordinateSpace); // Function Engine.SplineComponent.GetRotationAtSplineInputKey
	struct FRotator GetRotationAtDistanceAlongSpline(float Distance, char CoordinateSpace); // Function Engine.SplineComponent.GetRotationAtDistanceAlongSpline
	float GetRollAtTime(float Time, char CoordinateSpace, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetRollAtTime
	float GetRollAtSplinePoint(int32_t PointIndex, char CoordinateSpace); // Function Engine.SplineComponent.GetRollAtSplinePoint
	float GetRollAtSplineInputKey(float InKey, char CoordinateSpace); // Function Engine.SplineComponent.GetRollAtSplineInputKey
	float GetRollAtDistanceAlongSpline(float Distance, char CoordinateSpace); // Function Engine.SplineComponent.GetRollAtDistanceAlongSpline
	struct FVector GetRightVectorAtTime(float Time, char CoordinateSpace, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetRightVectorAtTime
	struct FVector GetRightVectorAtSplinePoint(int32_t PointIndex, char CoordinateSpace); // Function Engine.SplineComponent.GetRightVectorAtSplinePoint
	struct FVector GetRightVectorAtSplineInputKey(float InKey, char CoordinateSpace); // Function Engine.SplineComponent.GetRightVectorAtSplineInputKey
	struct FVector GetRightVectorAtDistanceAlongSpline(float Distance, char CoordinateSpace); // Function Engine.SplineComponent.GetRightVectorAtDistanceAlongSpline
	int32_t GetNumberOfSplineSegments(); // Function Engine.SplineComponent.GetNumberOfSplineSegments
	int32_t GetNumberOfSplinePoints(); // Function Engine.SplineComponent.GetNumberOfSplinePoints
	struct FVector GetLocationAtTime(float Time, char CoordinateSpace, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetLocationAtTime
	struct FVector GetLocationAtSplinePoint(int32_t PointIndex, char CoordinateSpace); // Function Engine.SplineComponent.GetLocationAtSplinePoint
	struct FVector GetLocationAtSplineInputKey(float InKey, char CoordinateSpace); // Function Engine.SplineComponent.GetLocationAtSplineInputKey
	struct FVector GetLocationAtDistanceAlongSpline(float Distance, char CoordinateSpace); // Function Engine.SplineComponent.GetLocationAtDistanceAlongSpline
	void GetLocationAndTangentAtSplinePoint(int32_t PointIndex, struct FVector Location, struct FVector Tangent, char CoordinateSpace); // Function Engine.SplineComponent.GetLocationAndTangentAtSplinePoint
	void GetLocalLocationAndTangentAtSplinePoint(int32_t PointIndex, struct FVector LocalLocation, struct FVector LocalTangent); // Function Engine.SplineComponent.GetLocalLocationAndTangentAtSplinePoint
	struct FVector GetLeaveTangentAtSplinePoint(int32_t PointIndex, char CoordinateSpace); // Function Engine.SplineComponent.GetLeaveTangentAtSplinePoint
	float GetInputKeyAtDistanceAlongSpline(float Distance); // Function Engine.SplineComponent.GetInputKeyAtDistanceAlongSpline
	float GetFloatPropertyAtSplinePoint(int32_t Index, struct FName PropertyName); // Function Engine.SplineComponent.GetFloatPropertyAtSplinePoint
	float GetFloatPropertyAtSplineInputKey(float InKey, struct FName PropertyName); // Function Engine.SplineComponent.GetFloatPropertyAtSplineInputKey
	float GetDistanceAlongSplineAtSplinePoint(int32_t PointIndex); // Function Engine.SplineComponent.GetDistanceAlongSplineAtSplinePoint
	struct FVector GetDirectionAtTime(float Time, char CoordinateSpace, bool bUseConstantVelocity); // Function Engine.SplineComponent.GetDirectionAtTime
	struct FVector GetDirectionAtSplinePoint(int32_t PointIndex, char CoordinateSpace); // Function Engine.SplineComponent.GetDirectionAtSplinePoint
	struct FVector GetDirectionAtSplineInputKey(float InKey, char CoordinateSpace); // Function Engine.SplineComponent.GetDirectionAtSplineInputKey
	struct FVector GetDirectionAtDistanceAlongSpline(float Distance, char CoordinateSpace); // Function Engine.SplineComponent.GetDirectionAtDistanceAlongSpline
	struct FVector GetDefaultUpVector(char CoordinateSpace); // Function Engine.SplineComponent.GetDefaultUpVector
	struct FVector GetArriveTangentAtSplinePoint(int32_t PointIndex, char CoordinateSpace); // Function Engine.SplineComponent.GetArriveTangentAtSplinePoint
	struct FVector FindUpVectorClosestToWorldLocation(struct FVector WorldLocation, char CoordinateSpace); // Function Engine.SplineComponent.FindUpVectorClosestToWorldLocation
	struct FTransform FindTransformClosestToWorldLocation(struct FVector WorldLocation, char CoordinateSpace, bool bUseScale); // Function Engine.SplineComponent.FindTransformClosestToWorldLocation
	struct FVector FindTangentClosestToWorldLocation(struct FVector WorldLocation, char CoordinateSpace); // Function Engine.SplineComponent.FindTangentClosestToWorldLocation
	struct FVector FindScaleClosestToWorldLocation(struct FVector WorldLocation); // Function Engine.SplineComponent.FindScaleClosestToWorldLocation
	struct FRotator FindRotationClosestToWorldLocation(struct FVector WorldLocation, char CoordinateSpace); // Function Engine.SplineComponent.FindRotationClosestToWorldLocation
	float FindRollClosestToWorldLocation(struct FVector WorldLocation, char CoordinateSpace); // Function Engine.SplineComponent.FindRollClosestToWorldLocation
	struct FVector FindRightVectorClosestToWorldLocation(struct FVector WorldLocation, char CoordinateSpace); // Function Engine.SplineComponent.FindRightVectorClosestToWorldLocation
	struct FVector FindLocationClosestToWorldLocation(struct FVector WorldLocation, char CoordinateSpace); // Function Engine.SplineComponent.FindLocationClosestToWorldLocation
	float FindInputKeyClosestToWorldLocation(struct FVector WorldLocation); // Function Engine.SplineComponent.FindInputKeyClosestToWorldLocation
	struct FVector FindDirectionClosestToWorldLocation(struct FVector WorldLocation, char CoordinateSpace); // Function Engine.SplineComponent.FindDirectionClosestToWorldLocation
	void ClearSplinePoints(bool bUpdateSpline); // Function Engine.SplineComponent.ClearSplinePoints
	void AddSplineWorldPoint(struct FVector Position); // Function Engine.SplineComponent.AddSplineWorldPoint
	void AddSplinePointAtIndex(struct FVector Position, int32_t Index, char CoordinateSpace, bool bUpdateSpline); // Function Engine.SplineComponent.AddSplinePointAtIndex
	void AddSplinePoint(struct FVector Position, char CoordinateSpace, bool bUpdateSpline); // Function Engine.SplineComponent.AddSplinePoint
	void AddSplineLocalPoint(struct FVector Position); // Function Engine.SplineComponent.AddSplineLocalPoint
	void AddPoints(struct TArray<struct FSplinePoint> Points, bool bUpdateSpline); // Function Engine.SplineComponent.AddPoints
	void AddPoint(struct FSplinePoint Point, bool bUpdateSpline); // Function Engine.SplineComponent.AddPoint
};

// Class Engine.SplineMeshActor
// Size: 0x228 (Inherited: 0x220)
struct ASplineMeshActor : public AActor {
	struct USplineMeshComponent* SplineMeshComponent; // 0x220(0x08)
};

// Class Engine.SplineMeshComponent
// Size: 0x570 (Inherited: 0x4d0)
struct USplineMeshComponent : public UStaticMeshComponent {
	char UnknownData_4D0[0x8]; // 0x4d0(0x08)
	struct FSplineMeshParams SplineParams; // 0x4d8(0x58)
	struct FVector SplineUpDir; // 0x530(0x0c)
	float SplineBoundaryMin; // 0x53c(0x04)
	struct FGuid CachedMeshBodySetupGuid; // 0x540(0x10)
	struct UBodySetup* BodySetup; // 0x550(0x08)
	float SplineBoundaryMax; // 0x558(0x04)
	char bAllowSplineEditingPerInstance : 1; // 0x55c(0x01)
	char bSmoothInterpRollScale : 1; // 0x55c(0x01)
	char bMeshDirty : 1; // 0x55c(0x01)
	char UnknownData_55C_3 : 5; // 0x55c(0x01)
	char ForwardAxis; // 0x55d(0x01)
	char UnknownData_55E[0x2]; // 0x55e(0x02)
	float VirtualTextureMainPassMaxDrawDistance; // 0x560(0x04)
	char UnknownData_564[0xc]; // 0x564(0x0c)

	void UpdateMesh(); // Function Engine.SplineMeshComponent.UpdateMesh
	void SetStartTangent(struct FVector StartTangent, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetStartTangent
	void SetStartScale(struct FVector2D StartScale, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetStartScale
	void SetStartRoll(float StartRoll, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetStartRoll
	void SetStartPosition(struct FVector StartPos, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetStartPosition
	void SetStartOffset(struct FVector2D StartOffset, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetStartOffset
	void SetStartAndEnd(struct FVector StartPos, struct FVector StartTangent, struct FVector EndPos, struct FVector EndTangent, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetStartAndEnd
	void SetSplineUpDir(struct FVector InSplineUpDir, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetSplineUpDir
	void SetForwardAxis(char InForwardAxis, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetForwardAxis
	void SetEndTangent(struct FVector EndTangent, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetEndTangent
	void SetEndScale(struct FVector2D EndScale, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetEndScale
	void SetEndRoll(float EndRoll, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetEndRoll
	void SetEndPosition(struct FVector EndPos, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetEndPosition
	void SetEndOffset(struct FVector2D EndOffset, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetEndOffset
	void SetBoundaryMin(float InBoundaryMin, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetBoundaryMin
	void SetBoundaryMax(float InBoundaryMax, bool bUpdateMesh); // Function Engine.SplineMeshComponent.SetBoundaryMax
	struct FVector GetStartTangent(); // Function Engine.SplineMeshComponent.GetStartTangent
	struct FVector2D GetStartScale(); // Function Engine.SplineMeshComponent.GetStartScale
	float GetStartRoll(); // Function Engine.SplineMeshComponent.GetStartRoll
	struct FVector GetStartPosition(); // Function Engine.SplineMeshComponent.GetStartPosition
	struct FVector2D GetStartOffset(); // Function Engine.SplineMeshComponent.GetStartOffset
	struct FVector GetSplineUpDir(); // Function Engine.SplineMeshComponent.GetSplineUpDir
	char GetForwardAxis(); // Function Engine.SplineMeshComponent.GetForwardAxis
	struct FVector GetEndTangent(); // Function Engine.SplineMeshComponent.GetEndTangent
	struct FVector2D GetEndScale(); // Function Engine.SplineMeshComponent.GetEndScale
	float GetEndRoll(); // Function Engine.SplineMeshComponent.GetEndRoll
	struct FVector GetEndPosition(); // Function Engine.SplineMeshComponent.GetEndPosition
	struct FVector2D GetEndOffset(); // Function Engine.SplineMeshComponent.GetEndOffset
	float GetBoundaryMin(); // Function Engine.SplineMeshComponent.GetBoundaryMin
	float GetBoundaryMax(); // Function Engine.SplineMeshComponent.GetBoundaryMax
};

// Class Engine.SpotLightComponent
// Size: 0x380 (Inherited: 0x370)
struct USpotLightComponent : public UPointLightComponent {
	float InnerConeAngle; // 0x368(0x04)
	float OuterConeAngle; // 0x36c(0x04)
	float LightShaftConeAngle; // 0x370(0x04)
	char bCastShadowsOnLowEnd : 1; // 0x374(0x01)
	char UnknownData_37C_1 : 7; // 0x37c(0x01)
	char UnknownData_37D[0x3]; // 0x37d(0x03)

	void SetOuterConeAngle(float NewOuterConeAngle); // Function Engine.SpotLightComponent.SetOuterConeAngle
	void SetInnerConeAngle(float NewInnerConeAngle); // Function Engine.SpotLightComponent.SetInnerConeAngle
};

// Class Engine.StaticMesh
// Size: 0x140 (Inherited: 0x40)
struct UStaticMesh : public UStreamableRenderAsset {
	char UnknownData_40[0x20]; // 0x40(0x20)
	struct FPerPlatformInt MinLOD; // 0x60(0x04)
	float LpvBiasMultiplier; // 0x64(0x04)
	struct TArray<struct FStaticMaterial> StaticMaterials; // 0x68(0x10)
	float LightmapUVDensity; // 0x78(0x04)
	int32_t LightMapResolution; // 0x7c(0x04)
	int32_t LightMapCoordinateIndex; // 0x80(0x04)
	float DistanceFieldSelfShadowBias; // 0x84(0x04)
	struct UBodySetup* BodySetup; // 0x88(0x08)
	struct FName DefaultCreationCollisionProfileName; // 0x90(0x08)
	int32_t LODForCollision; // 0x98(0x04)
	char bGenerateMeshDistanceField : 1; // 0x9c(0x01)
	char bStripComplexCollisionForConsole : 1; // 0x9c(0x01)
	char bHasNavigationData : 1; // 0x9c(0x01)
	char bSupportUniformlyDistributedSampling : 1; // 0x9c(0x01)
	char bSupportPhysicalMaterialMasks : 1; // 0x9c(0x01)
	char bIsBuiltAtRuntime : 1; // 0x9c(0x01)
	char UnknownData_9C_6 : 1; // 0x9c(0x01)
	char bAllowCPUAccess : 1; // 0x9c(0x01)
	char bSupportGpuUniformlyDistributedSampling : 1; // 0x9d(0x01)
	char UnknownData_9D_1 : 7; // 0x9d(0x01)
	char UnknownData_9E[0x22]; // 0x9e(0x22)
	struct TArray<struct UStaticMeshSocket*> Sockets; // 0xc0(0x10)
	char UnknownData_D0[0x10]; // 0xd0(0x10)
	struct FVector PositiveBoundsExtension; // 0xe0(0x0c)
	struct FVector NegativeBoundsExtension; // 0xec(0x0c)
	struct FBoxSphereBounds ExtendedBounds; // 0xf8(0x1c)
	int32_t ElementToIgnoreForTexFactor; // 0x114(0x04)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x118(0x10)
	char UnknownData_128[0x8]; // 0x128(0x08)
	struct UObject* EditableMesh; // 0x130(0x08)
	struct UNavCollisionBase* NavCollision; // 0x138(0x08)

	void RemoveSocket(struct UStaticMeshSocket* Socket); // Function Engine.StaticMesh.RemoveSocket
	int32_t GetNumSections(int32_t InLOD); // Function Engine.StaticMesh.GetNumSections
	int32_t GetNumLODs(); // Function Engine.StaticMesh.GetNumLODs
	void GetMinimumLODForPlatforms(struct TMap<struct FName, int32_t> PlatformMinimumLODs); // Function Engine.StaticMesh.GetMinimumLODForPlatforms
	int32_t GetMinimumLODForPlatform(struct FName PlatformName); // Function Engine.StaticMesh.GetMinimumLODForPlatform
	int32_t GetMaterialIndex(struct FName MaterialSlotName); // Function Engine.StaticMesh.GetMaterialIndex
	struct UMaterialInterface* GetMaterial(int32_t MaterialIndex); // Function Engine.StaticMesh.GetMaterial
	struct FBoxSphereBounds GetBounds(); // Function Engine.StaticMesh.GetBounds
	struct FBox GetBoundingBox(); // Function Engine.StaticMesh.GetBoundingBox
	struct UStaticMeshSocket* FindSocket(struct FName InSocketName); // Function Engine.StaticMesh.FindSocket
	struct UStaticMeshDescription* CreateStaticMeshDescription(struct UObject* Outer); // Function Engine.StaticMesh.CreateStaticMeshDescription
	void BuildFromStaticMeshDescriptions(struct TArray<struct UStaticMeshDescription*> StaticMeshDescriptions, bool bBuildSimpleCollision); // Function Engine.StaticMesh.BuildFromStaticMeshDescriptions
	void AddSocket(struct UStaticMeshSocket* Socket); // Function Engine.StaticMesh.AddSocket
	struct FName AddMaterial(struct UMaterialInterface* Material); // Function Engine.StaticMesh.AddMaterial
};

// Class Engine.StaticMeshSocket
// Size: 0x68 (Inherited: 0x28)
struct UStaticMeshSocket : public UObject {
	struct FName SocketName; // 0x28(0x08)
	struct FVector RelativeLocation; // 0x30(0x0c)
	struct FRotator RelativeRotation; // 0x3c(0x0c)
	struct FVector RelativeScale; // 0x48(0x0c)
	char UnknownData_54[0x4]; // 0x54(0x04)
	struct FString Tag; // 0x58(0x10)
};

// Class Engine.StereoLayerComponent
// Size: 0x2f0 (Inherited: 0x210)
struct UStereoLayerComponent : public USceneComponent {
	char bLiveTexture : 1; // 0x208(0x01)
	char bSupportsDepth : 1; // 0x208(0x01)
	char bNoAlphaChannel : 1; // 0x208(0x01)
	struct UTexture* Texture; // 0x210(0x08)
	struct UTexture* LeftTexture; // 0x218(0x08)
	char bQuadPreserveTextureRatio : 1; // 0x220(0x01)
	char UnknownData_220_4 : 4; // 0x220(0x01)
	char UnknownData_221[0x3]; // 0x221(0x03)
	struct FVector2D QuadSize; // 0x224(0x08)
	struct FBox2D UVRect; // 0x22c(0x14)
	float CylinderRadius; // 0x240(0x04)
	float CylinderOverlayArc; // 0x244(0x04)
	int32_t CylinderHeight; // 0x248(0x04)
	struct FEquirectProps EquirectProps; // 0x24c(0x48)
	char StereoLayerType; // 0x294(0x01)
	char StereoLayerShape; // 0x295(0x01)
	char UnknownData_296[0x2]; // 0x296(0x02)
	struct UStereoLayerShape* Shape; // 0x298(0x08)
	int32_t Priority; // 0x2a0(0x04)
	char UnknownData_2A4[0x4c]; // 0x2a4(0x4c)

	void SetUVRect(struct FBox2D InUVRect); // Function Engine.StereoLayerComponent.SetUVRect
	void SetTexture(struct UTexture* InTexture); // Function Engine.StereoLayerComponent.SetTexture
	void SetQuadSize(struct FVector2D InQuadSize); // Function Engine.StereoLayerComponent.SetQuadSize
	void SetPriority(int32_t InPriority); // Function Engine.StereoLayerComponent.SetPriority
	void SetLeftTexture(struct UTexture* InTexture); // Function Engine.StereoLayerComponent.SetLeftTexture
	void SetEquirectProps(struct FEquirectProps InScaleBiases); // Function Engine.StereoLayerComponent.SetEquirectProps
	void MarkTextureForUpdate(); // Function Engine.StereoLayerComponent.MarkTextureForUpdate
	struct FBox2D GetUVRect(); // Function Engine.StereoLayerComponent.GetUVRect
	struct UTexture* GetTexture(); // Function Engine.StereoLayerComponent.GetTexture
	struct FVector2D GetQuadSize(); // Function Engine.StereoLayerComponent.GetQuadSize
	int32_t GetPriority(); // Function Engine.StereoLayerComponent.GetPriority
	struct UTexture* GetLeftTexture(); // Function Engine.StereoLayerComponent.GetLeftTexture
};

// Class Engine.StereoLayerShapeCylinder
// Size: 0x38 (Inherited: 0x28)
struct UStereoLayerShapeCylinder : public UStereoLayerShape {
	float Radius; // 0x28(0x04)
	float OverlayArc; // 0x2c(0x04)
	int32_t Height; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)

	void SetRadius(float InRadius); // Function Engine.StereoLayerShapeCylinder.SetRadius
	void SetOverlayArc(float InOverlayArc); // Function Engine.StereoLayerShapeCylinder.SetOverlayArc
	void SetHeight(int32_t InHeight); // Function Engine.StereoLayerShapeCylinder.SetHeight
};

// Class Engine.StereoLayerShapeEquirect
// Size: 0x70 (Inherited: 0x28)
struct UStereoLayerShapeEquirect : public UStereoLayerShape {
	struct FBox2D LeftUVRect; // 0x28(0x14)
	struct FBox2D RightUVRect; // 0x3c(0x14)
	struct FVector2D LeftScale; // 0x50(0x08)
	struct FVector2D RightScale; // 0x58(0x08)
	struct FVector2D LeftBias; // 0x60(0x08)
	struct FVector2D RightBias; // 0x68(0x08)

	void SetEquirectProps(struct FEquirectProps InScaleBiases); // Function Engine.StereoLayerShapeEquirect.SetEquirectProps
};

// Class Engine.StringTable
// Size: 0x40 (Inherited: 0x28)
struct UStringTable : public UObject {
	char UnknownData_28[0x18]; // 0x28(0x18)
};

// Class Engine.SubsurfaceProfile
// Size: 0xb8 (Inherited: 0x28)
struct USubsurfaceProfile : public UObject {
	struct FSubsurfaceProfileStruct Settings; // 0x28(0x8c)
	char UnknownData_B4[0x4]; // 0xb4(0x04)
};

// Class Engine.SubUVAnimation
// Size: 0x68 (Inherited: 0x28)
struct USubUVAnimation : public UObject {
	struct UTexture2D* SubUVTexture; // 0x28(0x08)
	int32_t SubImages_Horizontal; // 0x30(0x04)
	int32_t SubImages_Vertical; // 0x34(0x04)
	char BoundingMode; // 0x38(0x01)
	char OpacitySourceMode; // 0x39(0x01)
	char UnknownData_3A[0x2]; // 0x3a(0x02)
	float AlphaThreshold; // 0x3c(0x04)
	char UnknownData_40[0x28]; // 0x40(0x28)
};

// Class Engine.SystemTimeTimecodeProvider
// Size: 0x40 (Inherited: 0x30)
struct USystemTimeTimecodeProvider : public UTimecodeProvider {
	struct FFrameRate FrameRate; // 0x30(0x08)
	bool bGenerateFullFrame; // 0x38(0x01)
	bool bUseHighPerformanceClock; // 0x39(0x01)
	char UnknownData_3A[0x6]; // 0x3a(0x06)
};

// Class Engine.TextPropertyTestObject
// Size: 0x70 (Inherited: 0x28)
struct UTextPropertyTestObject : public UObject {
	struct FText DefaultedText; // 0x28(0x18)
	struct FText UndefaultedText; // 0x40(0x18)
	struct FText TransientText; // 0x58(0x18)
};

// Class Engine.TextRenderActor
// Size: 0x228 (Inherited: 0x220)
struct ATextRenderActor : public AActor {
	struct UTextRenderComponent* TextRender; // 0x220(0x08)
};

// Class Engine.TextRenderComponent
// Size: 0x480 (Inherited: 0x430)
struct UTextRenderComponent : public UPrimitiveComponent {
	struct FText Text; // 0x430(0x18)
	struct UMaterialInterface* TextMaterial; // 0x448(0x08)
	struct UFont* Font; // 0x450(0x08)
	char HorizontalAlignment; // 0x458(0x01)
	char VerticalAlignment; // 0x459(0x01)
	char UnknownData_45A[0x2]; // 0x45a(0x02)
	struct FColor TextRenderColor; // 0x45c(0x04)
	float XScale; // 0x460(0x04)
	float YScale; // 0x464(0x04)
	float WorldSize; // 0x468(0x04)
	float InvDefaultSize; // 0x46c(0x04)
	float HorizSpacingAdjust; // 0x470(0x04)
	float VertSpacingAdjust; // 0x474(0x04)
	char bAlwaysRenderAsText : 1; // 0x478(0x01)
	char UnknownData_478_1 : 7; // 0x478(0x01)
	char UnknownData_479[0x7]; // 0x479(0x07)

	void SetYScale(float Value); // Function Engine.TextRenderComponent.SetYScale
	void SetXScale(float Value); // Function Engine.TextRenderComponent.SetXScale
	void SetWorldSize(float Value); // Function Engine.TextRenderComponent.SetWorldSize
	void SetVertSpacingAdjust(float Value); // Function Engine.TextRenderComponent.SetVertSpacingAdjust
	void SetVerticalAlignment(char Value); // Function Engine.TextRenderComponent.SetVerticalAlignment
	void SetTextRenderColor(struct FColor Value); // Function Engine.TextRenderComponent.SetTextRenderColor
	void SetTextMaterial(struct UMaterialInterface* Material); // Function Engine.TextRenderComponent.SetTextMaterial
	void SetText(struct FString Value); // Function Engine.TextRenderComponent.SetText
	void SetHorizSpacingAdjust(float Value); // Function Engine.TextRenderComponent.SetHorizSpacingAdjust
	void SetHorizontalAlignment(char Value); // Function Engine.TextRenderComponent.SetHorizontalAlignment
	void SetFont(struct UFont* Value); // Function Engine.TextRenderComponent.SetFont
	void K2_SetText(struct FText Value); // Function Engine.TextRenderComponent.K2_SetText
	struct FVector GetTextWorldSize(); // Function Engine.TextRenderComponent.GetTextWorldSize
	struct FVector GetTextLocalSize(); // Function Engine.TextRenderComponent.GetTextLocalSize
};

// Class Engine.Texture2DArray
// Size: 0x110 (Inherited: 0xb8)
struct UTexture2DArray : public UTexture {
	char UnknownData_B8[0x58]; // 0xb8(0x58)
};

// Class Engine.Texture2DDynamic
// Size: 0xd0 (Inherited: 0xb8)
struct UTexture2DDynamic : public UTexture {
	char UnknownData_B8[0x8]; // 0xb8(0x08)
	char Format; // 0xc0(0x01)
	char UnknownData_C1[0xf]; // 0xc1(0x0f)
};

// Class Engine.TextureLightProfile
// Size: 0xf0 (Inherited: 0xe8)
struct UTextureLightProfile : public UTexture2D {
	float Brightness; // 0xe8(0x04)
	float TextureMultiplier; // 0xec(0x04)
};

// Class Engine.TextureRenderTargetCube
// Size: 0xd8 (Inherited: 0xc0)
struct UTextureRenderTargetCube : public UTextureRenderTarget {
	int32_t SizeX; // 0xc0(0x04)
	struct FLinearColor ClearColor; // 0xc4(0x10)
	char OverrideFormat; // 0xd4(0x01)
	char bHDR : 1; // 0xd5(0x01)
	char bForceLinearGamma : 1; // 0xd5(0x01)
	char UnknownData_D5_2 : 6; // 0xd5(0x01)
	char UnknownData_D6[0x2]; // 0xd6(0x02)
};

// Class Engine.TimelineComponent
// Size: 0x150 (Inherited: 0xb0)
struct UTimelineComponent : public UActorComponent {
	struct FTimeline TheTimeline; // 0xb0(0x98)
	char bIgnoreTimeDilation : 1; // 0x148(0x01)
	char UnknownData_148_1 : 7; // 0x148(0x01)
	char UnknownData_149[0x7]; // 0x149(0x07)

	void Stop(); // Function Engine.TimelineComponent.Stop
	void SetVectorCurve(struct UCurveVector* NewVectorCurve, struct FName VectorTrackName); // Function Engine.TimelineComponent.SetVectorCurve
	void SetTimelineLengthMode(char NewLengthMode); // Function Engine.TimelineComponent.SetTimelineLengthMode
	void SetTimelineLength(float NewLength); // Function Engine.TimelineComponent.SetTimelineLength
	void SetPlayRate(float NewRate); // Function Engine.TimelineComponent.SetPlayRate
	void SetPlaybackPosition(float NewPosition, bool bFireEvents, bool bFireUpdate); // Function Engine.TimelineComponent.SetPlaybackPosition
	void SetNewTime(float NewTime); // Function Engine.TimelineComponent.SetNewTime
	void SetLooping(bool bNewLooping); // Function Engine.TimelineComponent.SetLooping
	void SetLinearColorCurve(struct UCurveLinearColor* NewLinearColorCurve, struct FName LinearColorTrackName); // Function Engine.TimelineComponent.SetLinearColorCurve
	void SetIgnoreTimeDilation(bool bNewIgnoreTimeDilation); // Function Engine.TimelineComponent.SetIgnoreTimeDilation
	void SetFloatCurve(struct UCurveFloat* NewFloatCurve, struct FName FloatTrackName); // Function Engine.TimelineComponent.SetFloatCurve
	void ReverseFromEnd(); // Function Engine.TimelineComponent.ReverseFromEnd
	void Reverse(); // Function Engine.TimelineComponent.Reverse
	void PlayFromStart(); // Function Engine.TimelineComponent.PlayFromStart
	void Play(); // Function Engine.TimelineComponent.Play
	void OnRep_Timeline(); // Function Engine.TimelineComponent.OnRep_Timeline
	bool IsReversing(); // Function Engine.TimelineComponent.IsReversing
	bool IsPlaying(); // Function Engine.TimelineComponent.IsPlaying
	bool IsLooping(); // Function Engine.TimelineComponent.IsLooping
	float GetTimelineLength(); // Function Engine.TimelineComponent.GetTimelineLength
	float GetPlayRate(); // Function Engine.TimelineComponent.GetPlayRate
	float GetPlaybackPosition(); // Function Engine.TimelineComponent.GetPlaybackPosition
	bool GetIgnoreTimeDilation(); // Function Engine.TimelineComponent.GetIgnoreTimeDilation
};

// Class Engine.TimelineTemplate
// Size: 0xb0 (Inherited: 0x28)
struct UTimelineTemplate : public UObject {
	float TimelineLength; // 0x28(0x04)
	char LengthMode; // 0x2c(0x01)
	char bAutoPlay : 1; // 0x2d(0x01)
	char bLoop : 1; // 0x2d(0x01)
	char bReplicated : 1; // 0x2d(0x01)
	char bIgnoreTimeDilation : 1; // 0x2d(0x01)
	char UnknownData_2D_4 : 4; // 0x2d(0x01)
	char UnknownData_2E[0x2]; // 0x2e(0x02)
	struct TArray<struct FTTEventTrack> EventTracks; // 0x30(0x10)
	struct TArray<struct FTTFloatTrack> FloatTracks; // 0x40(0x10)
	struct TArray<struct FTTVectorTrack> VectorTracks; // 0x50(0x10)
	struct TArray<struct FTTLinearColorTrack> LinearColorTracks; // 0x60(0x10)
	struct TArray<struct FBPVariableMetaDataEntry> MetaDataArray; // 0x70(0x10)
	struct FGuid TimelineGuid; // 0x80(0x10)
	struct FName VariableName; // 0x90(0x08)
	struct FName DirectionPropertyName; // 0x98(0x08)
	struct FName UpdateFunctionName; // 0xa0(0x08)
	struct FName FinishedFunctionName; // 0xa8(0x08)
};

// Class Engine.TireType
// Size: 0x38 (Inherited: 0x30)
struct UTireType : public UDataAsset {
	float FrictionScale; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// Class Engine.TouchInterface
// Size: 0x58 (Inherited: 0x28)
struct UTouchInterface : public UObject {
	struct TArray<struct FTouchInputControl> Controls; // 0x28(0x10)
	float ActiveOpacity; // 0x38(0x04)
	float InactiveOpacity; // 0x3c(0x04)
	float TimeUntilDeactive; // 0x40(0x04)
	float TimeUntilReset; // 0x44(0x04)
	float ActivationDelay; // 0x48(0x04)
	bool bPreventRecenter; // 0x4c(0x01)
	char UnknownData_4D[0x3]; // 0x4d(0x03)
	float StartupDelay; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
};

// Class Engine.TriggerBase
// Size: 0x228 (Inherited: 0x220)
struct ATriggerBase : public AActor {
	struct UShapeComponent* CollisionComponent; // 0x220(0x08)
};

// Class Engine.UserDefinedEnum
// Size: 0xb0 (Inherited: 0x60)
struct UUserDefinedEnum : public UEnum {
	struct TMap<struct FName, struct FText> DisplayNameMap; // 0x60(0x50)
};

// Class Engine.UserDefinedStruct
// Size: 0x108 (Inherited: 0xc0)
struct UUserDefinedStruct : public UScriptStruct {
	char Status; // 0xc0(0x01)
	char UnknownData_C1[0x3]; // 0xc1(0x03)
	struct FGuid Guid; // 0xc4(0x10)
	char UnknownData_D4[0x34]; // 0xd4(0x34)
};

// Class Engine.UserInterfaceSettings
// Size: 0x268 (Inherited: 0x38)
struct UUserInterfaceSettings : public UDeveloperSettings {
	enum class ERenderFocusRule RenderFocusRule; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
	struct TMap<char, struct FHardwareCursorReference> HardwareCursors; // 0x40(0x50)
	struct TMap<char, struct FSoftClassPath> SoftwareCursors; // 0x90(0x50)
	struct FSoftClassPath DefaultCursor; // 0xe0(0x18)
	struct FSoftClassPath TextEditBeamCursor; // 0xf8(0x18)
	struct FSoftClassPath CrosshairsCursor; // 0x110(0x18)
	struct FSoftClassPath HandCursor; // 0x128(0x18)
	struct FSoftClassPath GrabHandCursor; // 0x140(0x18)
	struct FSoftClassPath GrabHandClosedCursor; // 0x158(0x18)
	struct FSoftClassPath SlashedCircleCursor; // 0x170(0x18)
	float ApplicationScale; // 0x188(0x04)
	enum class EUIScalingRule UIScaleRule; // 0x18c(0x01)
	char UnknownData_18D[0x3]; // 0x18d(0x03)
	struct FSoftClassPath CustomScalingRuleClass; // 0x190(0x18)
	struct FRuntimeFloatCurve UIScaleCurve; // 0x1a8(0x88)
	bool bAllowHighDPIInGameMode; // 0x230(0x01)
	bool bLoadWidgetsOnDedicatedServer; // 0x231(0x01)
	char UnknownData_232[0x6]; // 0x232(0x06)
	struct TArray<struct UObject*> CursorClasses; // 0x238(0x10)
	struct UObject* CustomScalingRuleClassInstance; // 0x248(0x08)
	struct UDPICustomScalingRule* CustomScalingRule; // 0x250(0x08)
	char UnknownData_258[0x10]; // 0x258(0x10)
};

// Class Engine.VectorField
// Size: 0x48 (Inherited: 0x28)
struct UVectorField : public UObject {
	struct FBox Bounds; // 0x28(0x1c)
	float Intensity; // 0x44(0x04)
};

// Class Engine.VectorFieldAnimated
// Size: 0x88 (Inherited: 0x48)
struct UVectorFieldAnimated : public UVectorField {
	struct UTexture2D* Texture; // 0x48(0x08)
	char ConstructionOp; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	int32_t VolumeSizeX; // 0x54(0x04)
	int32_t VolumeSizeY; // 0x58(0x04)
	int32_t VolumeSizeZ; // 0x5c(0x04)
	int32_t SubImagesX; // 0x60(0x04)
	int32_t SubImagesY; // 0x64(0x04)
	int32_t FrameCount; // 0x68(0x04)
	float FramesPerSecond; // 0x6c(0x04)
	char bLoop : 1; // 0x70(0x01)
	char UnknownData_70_1 : 7; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
	struct UVectorFieldStatic* NoiseField; // 0x78(0x08)
	float NoiseScale; // 0x80(0x04)
	float NoiseMax; // 0x84(0x04)
};

// Class Engine.VectorFieldComponent
// Size: 0x460 (Inherited: 0x430)
struct UVectorFieldComponent : public UPrimitiveComponent {
	struct UVectorField* VectorField; // 0x430(0x08)
	float Intensity; // 0x438(0x04)
	float Tightness; // 0x43c(0x04)
	char bPreviewVectorField : 1; // 0x440(0x01)
	char UnknownData_440_1 : 7; // 0x440(0x01)
	char UnknownData_441[0x1f]; // 0x441(0x1f)

	void SetIntensity(float NewIntensity); // Function Engine.VectorFieldComponent.SetIntensity
};

// Class Engine.VectorFieldStatic
// Size: 0x98 (Inherited: 0x48)
struct UVectorFieldStatic : public UVectorField {
	int32_t SizeX; // 0x48(0x04)
	int32_t SizeY; // 0x4c(0x04)
	int32_t SizeZ; // 0x50(0x04)
	bool bAllowCPUAccess; // 0x54(0x01)
	char UnknownData_55[0x33]; // 0x55(0x33)
	struct TArray<struct FVector4> CPUData; // 0x88(0x10)
};

// Class Engine.VectorFieldVolume
// Size: 0x228 (Inherited: 0x220)
struct AVectorFieldVolume : public AActor {
	struct UVectorFieldComponent* VectorFieldComponent; // 0x220(0x08)
};

// Class Engine.LightMapVirtualTexture2D
// Size: 0xf8 (Inherited: 0xe8)
struct ULightMapVirtualTexture2D : public UTexture2D {
	struct TArray<int8_t> TypeToLayer; // 0xe8(0x10)
};

// Class Engine.VirtualTexturePoolConfig
// Size: 0x40 (Inherited: 0x28)
struct UVirtualTexturePoolConfig : public UObject {
	int32_t DefaultSizeInMegabyte; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FVirtualTextureSpacePoolConfig> Pools; // 0x30(0x10)
};

// Class Engine.VoiceChannel
// Size: 0x80 (Inherited: 0x70)
struct UVoiceChannel : public UChannel {
	char UnknownData_70[0x10]; // 0x70(0x10)
};

// Class Engine.VOIPTalker
// Size: 0xe8 (Inherited: 0xb0)
struct UVOIPTalker : public UActorComponent {
	struct FVoiceSettings Settings; // 0xb0(0x18)
	char UnknownData_C8[0x20]; // 0xc8(0x20)

	void RegisterWithPlayerState(struct APlayerState* OwningState); // Function Engine.VOIPTalker.RegisterWithPlayerState
	float GetVoiceLevel(); // Function Engine.VOIPTalker.GetVoiceLevel
	struct UVOIPTalker* CreateTalkerForPlayer(struct APlayerState* OwningState); // Function Engine.VOIPTalker.CreateTalkerForPlayer
	void BPOnTalkingEnd(); // Function Engine.VOIPTalker.BPOnTalkingEnd
	void BPOnTalkingBegin(struct UAudioComponent* AudioComponent); // Function Engine.VOIPTalker.BPOnTalkingBegin
};

// Class Engine.VolumeTexture
// Size: 0x110 (Inherited: 0xb8)
struct UVolumeTexture : public UTexture {
	char UnknownData_B8[0x58]; // 0xb8(0x58)
};

// Class Engine.VolumetricLightmapDensityVolume
// Size: 0x260 (Inherited: 0x258)
struct AVolumetricLightmapDensityVolume : public AVolume {
	struct FInt32Interval AllowedMipLevelRange; // 0x258(0x08)
};

// Class Engine.WindDirectionalSource
// Size: 0x228 (Inherited: 0x220)
struct AWindDirectionalSource : public AInfo {
	struct UWindDirectionalSourceComponent* Component; // 0x220(0x08)
};

// Class Engine.WindDirectionalSourceComponent
// Size: 0x230 (Inherited: 0x210)
struct UWindDirectionalSourceComponent : public USceneComponent {
	float Strength; // 0x208(0x04)
	float Speed; // 0x20c(0x04)
	float MinGustAmount; // 0x210(0x04)
	float MaxGustAmount; // 0x214(0x04)
	float Radius; // 0x218(0x04)
	char bPointWind : 1; // 0x21c(0x01)
	char UnknownData_224_1 : 7; // 0x224(0x01)
	char UnknownData_225[0xb]; // 0x225(0x0b)

	void SetWindType(enum class EWindSourceType InNewType); // Function Engine.WindDirectionalSourceComponent.SetWindType
	void SetStrength(float InNewStrength); // Function Engine.WindDirectionalSourceComponent.SetStrength
	void SetSpeed(float InNewSpeed); // Function Engine.WindDirectionalSourceComponent.SetSpeed
	void SetRadius(float InNewRadius); // Function Engine.WindDirectionalSourceComponent.SetRadius
	void SetMinimumGustAmount(float InNewMinGust); // Function Engine.WindDirectionalSourceComponent.SetMinimumGustAmount
	void SetMaximumGustAmount(float InNewMaxGust); // Function Engine.WindDirectionalSourceComponent.SetMaximumGustAmount
};

// Class Engine.WorldComposition
// Size: 0x68 (Inherited: 0x28)
struct UWorldComposition : public UObject {
	char UnknownData_28[0x20]; // 0x28(0x20)
	struct TArray<struct ULevelStreaming*> TilesStreaming; // 0x48(0x10)
	double TilesStreamingTimeThreshold; // 0x58(0x08)
	bool bLoadAllTilesDuringCinematic; // 0x60(0x01)
	bool bRebaseOriginIn3DSpace; // 0x61(0x01)
	char UnknownData_62[0x2]; // 0x62(0x02)
	float RebaseOriginDistance; // 0x64(0x04)
};

// Class Engine.HierarchicalLODSetup
// Size: 0x60 (Inherited: 0x28)
struct UHierarchicalLODSetup : public UObject {
	struct TArray<struct FHierarchicalSimplification> HierarchicalLODSetup; // 0x28(0x10)
	struct TSoftObjectPtr<struct UMaterialInterface> OverrideBaseMaterial; // 0x38(0x28)
};

