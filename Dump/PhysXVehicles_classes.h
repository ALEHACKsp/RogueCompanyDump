// Class PhysXVehicles.WheeledVehicleMovementComponent
// Size: 0x290 (Inherited: 0x138)
struct UWheeledVehicleMovementComponent : public UPawnMovementComponent {
	char UnknownData_138[0x8]; // 0x138(0x08)
	char bDeprecatedSpringOffsetMode : 1; // 0x140(0x01)
	char bReverseAsBrake : 1; // 0x140(0x01)
	char bUseRVOAvoidance : 1; // 0x140(0x01)
	char bRawHandbrakeInput : 1; // 0x140(0x01)
	char bRawGearUpInput : 1; // 0x140(0x01)
	char bRawGearDownInput : 1; // 0x140(0x01)
	char UnknownData_140_6 : 2; // 0x140(0x01)
	char UnknownData_141[0x3]; // 0x141(0x03)
	char bWasAvoidanceUpdated : 1; // 0x144(0x01)
	char UnknownData_144_1 : 7; // 0x144(0x01)
	char UnknownData_145[0x3]; // 0x145(0x03)
	float Mass; // 0x148(0x04)
	char UnknownData_14C[0x4]; // 0x14c(0x04)
	struct TArray<struct FWheelSetup> WheelSetups; // 0x150(0x10)
	float DragCoefficient; // 0x160(0x04)
	float ChassisWidth; // 0x164(0x04)
	float ChassisHeight; // 0x168(0x04)
	float DragArea; // 0x16c(0x04)
	float EstimatedMaxEngineSpeed; // 0x170(0x04)
	float MaxEngineRPM; // 0x174(0x04)
	float DebugDragMagnitude; // 0x178(0x04)
	struct FVector InertiaTensorScale; // 0x17c(0x0c)
	float MinNormalizedTireLoad; // 0x188(0x04)
	float MinNormalizedTireLoadFiltered; // 0x18c(0x04)
	float MaxNormalizedTireLoad; // 0x190(0x04)
	float MaxNormalizedTireLoadFiltered; // 0x194(0x04)
	float ThresholdLongitudinalSpeed; // 0x198(0x04)
	int32_t LowForwardSpeedSubStepCount; // 0x19c(0x04)
	int32_t HighForwardSpeedSubStepCount; // 0x1a0(0x04)
	char UnknownData_1A4[0x4]; // 0x1a4(0x04)
	struct TArray<struct UVehicleWheel*> Wheels; // 0x1a8(0x10)
	char UnknownData_1B8[0x18]; // 0x1b8(0x18)
	float RVOAvoidanceRadius; // 0x1d0(0x04)
	float RVOAvoidanceHeight; // 0x1d4(0x04)
	float AvoidanceConsiderationRadius; // 0x1d8(0x04)
	float RVOSteeringStep; // 0x1dc(0x04)
	float RVOThrottleStep; // 0x1e0(0x04)
	int32_t AvoidanceUID; // 0x1e4(0x04)
	struct FNavAvoidanceMask AvoidanceGroup; // 0x1e8(0x04)
	struct FNavAvoidanceMask GroupsToAvoid; // 0x1ec(0x04)
	struct FNavAvoidanceMask GroupsToIgnore; // 0x1f0(0x04)
	float AvoidanceWeight; // 0x1f4(0x04)
	struct FVector PendingLaunchVelocity; // 0x1f8(0x0c)
	struct FReplicatedVehicleState ReplicatedState; // 0x204(0x14)
	char UnknownData_218[0x4]; // 0x218(0x04)
	float RawSteeringInput; // 0x21c(0x04)
	float RawThrottleInput; // 0x220(0x04)
	float RawBrakeInput; // 0x224(0x04)
	float SteeringInput; // 0x228(0x04)
	float ThrottleInput; // 0x22c(0x04)
	float BrakeInput; // 0x230(0x04)
	float HandbrakeInput; // 0x234(0x04)
	float IdleBrakeInput; // 0x238(0x04)
	float StopThreshold; // 0x23c(0x04)
	float WrongDirectionThreshold; // 0x240(0x04)
	struct FVehicleInputRate ThrottleInputRate; // 0x244(0x08)
	struct FVehicleInputRate BrakeInputRate; // 0x24c(0x08)
	struct FVehicleInputRate HandbrakeInputRate; // 0x254(0x08)
	struct FVehicleInputRate SteeringInputRate; // 0x25c(0x08)
	char UnknownData_264[0x24]; // 0x264(0x24)
	struct AController* OverrideController; // 0x288(0x08)

	void SetUseAutoGears(bool bUseAuto); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears
	void SetThrottleInput(float Throttle); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput
	void SetTargetGear(int32_t GearNum, bool bImmediate); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear
	void SetSteeringInput(float Steering); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput
	void SetHandbrakeInput(bool bNewHandbrake); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput
	void SetGroupsToIgnoreMask(struct FNavAvoidanceMask GroupMask); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask
	void SetGroupsToIgnore(int32_t GroupFlags); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore
	void SetGroupsToAvoidMask(struct FNavAvoidanceMask GroupMask); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask
	void SetGroupsToAvoid(int32_t GroupFlags); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid
	void SetGearUp(bool bNewGearUp); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp
	void SetGearDown(bool bNewGearDown); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown
	void SetBrakeInput(float Brake); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput
	void SetAvoidanceGroupMask(struct FNavAvoidanceMask GroupMask); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask
	void SetAvoidanceGroup(int32_t GroupFlags); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup
	void SetAvoidanceEnabled(bool bEnable); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32_t CurrentGear); // Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState
	bool GetUseAutoGears(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears
	int32_t GetTargetGear(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear
	float GetForwardSpeed(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed
	float GetEngineRotationSpeed(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed
	float GetEngineMaxRotationSpeed(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
	int32_t GetCurrentGear(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear
};

// Class PhysXVehicles.TireConfig
// Size: 0x50 (Inherited: 0x30)
struct UTireConfig : public UDataAsset {
	float FrictionScale; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
	struct TArray<struct FTireConfigMaterialFriction> TireFrictionScales; // 0x38(0x10)
	char UnknownData_48[0x8]; // 0x48(0x08)
};

// Class PhysXVehicles.VehicleAnimInstance
// Size: 0x980 (Inherited: 0x270)
struct UVehicleAnimInstance : public UAnimInstance {
	char UnknownData_270[0x700]; // 0x270(0x700)
	struct UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent; // 0x970(0x08)
	char UnknownData_978[0x8]; // 0x978(0x08)

	struct AWheeledVehicle* GetVehicle(); // Function PhysXVehicles.VehicleAnimInstance.GetVehicle
};

// Class PhysXVehicles.VehicleWheel
// Size: 0xf0 (Inherited: 0x28)
struct UVehicleWheel : public UObject {
	struct UStaticMesh* CollisionMesh; // 0x28(0x08)
	bool bDontCreateShape; // 0x30(0x01)
	bool bAutoAdjustCollisionSize; // 0x31(0x01)
	char UnknownData_32[0x2]; // 0x32(0x02)
	struct FVector Offset; // 0x34(0x0c)
	float ShapeRadius; // 0x40(0x04)
	float ShapeWidth; // 0x44(0x04)
	float Mass; // 0x48(0x04)
	float DampingRate; // 0x4c(0x04)
	float SteerAngle; // 0x50(0x04)
	bool bAffectedByHandbrake; // 0x54(0x01)
	char UnknownData_55[0x3]; // 0x55(0x03)
	struct UTireType* TireType; // 0x58(0x08)
	struct UTireConfig* TireConfig; // 0x60(0x08)
	float LatStiffMaxLoad; // 0x68(0x04)
	float LatStiffValue; // 0x6c(0x04)
	float LongStiffValue; // 0x70(0x04)
	float SuspensionForceOffset; // 0x74(0x04)
	float SuspensionMaxRaise; // 0x78(0x04)
	float SuspensionMaxDrop; // 0x7c(0x04)
	float SuspensionNaturalFrequency; // 0x80(0x04)
	float SuspensionDampingRatio; // 0x84(0x04)
	char SweepType; // 0x88(0x01)
	char UnknownData_89[0x3]; // 0x89(0x03)
	float MaxBrakeTorque; // 0x8c(0x04)
	float MaxHandBrakeTorque; // 0x90(0x04)
	char UnknownData_94[0x4]; // 0x94(0x04)
	struct UWheeledVehicleMovementComponent* VehicleSim; // 0x98(0x08)
	int32_t WheelIndex; // 0xa0(0x04)
	float DebugLongSlip; // 0xa4(0x04)
	float DebugLatSlip; // 0xa8(0x04)
	float DebugNormalizedTireLoad; // 0xac(0x04)
	char UnknownData_B0[0x4]; // 0xb0(0x04)
	float DebugWheelTorque; // 0xb4(0x04)
	float DebugLongForce; // 0xb8(0x04)
	float DebugLatForce; // 0xbc(0x04)
	struct FVector Location; // 0xc0(0x0c)
	struct FVector OldLocation; // 0xcc(0x0c)
	struct FVector Velocity; // 0xd8(0x0c)
	char UnknownData_E4[0xc]; // 0xe4(0x0c)

	bool IsInAir(); // Function PhysXVehicles.VehicleWheel.IsInAir
	float GetSuspensionOffset(); // Function PhysXVehicles.VehicleWheel.GetSuspensionOffset
	float GetSteerAngle(); // Function PhysXVehicles.VehicleWheel.GetSteerAngle
	float GetRotationAngle(); // Function PhysXVehicles.VehicleWheel.GetRotationAngle
};

// Class PhysXVehicles.WheeledVehicle
// Size: 0x290 (Inherited: 0x280)
struct AWheeledVehicle : public APawn {
	struct USkeletalMeshComponent* Mesh; // 0x280(0x08)
	struct UWheeledVehicleMovementComponent* VehicleMovement; // 0x288(0x08)
};

// Class PhysXVehicles.WheeledVehicleMovementComponent4W
// Size: 0x408 (Inherited: 0x290)
struct UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent {
	struct FVehicleEngineData EngineSetup; // 0x290(0xa0)
	struct FVehicleDifferential4WData DifferentialSetup; // 0x330(0x1c)
	float AckermannAccuracy; // 0x34c(0x04)
	struct FVehicleTransmissionData TransmissionSetup; // 0x350(0x30)
	struct FRuntimeFloatCurve SteeringCurve; // 0x380(0x88)
};

