// Enum KillstreakAnimGraphRuntime.EPoseMirrorPlane
enum class EPoseMirrorPlane : uint8_t {
	XZ,
	XY,
	YZ,
	EPoseMirrorPlane_MAX,
};

// Enum KillstreakAnimGraphRuntime.ERecoilAllowMirror
enum class ERecoilAllowMirror : uint8_t {
	Both,
	UnmirroredOnly,
	MirroredOnly,
	ERecoilAllowMirror_MAX,
};

// Enum KillstreakAnimGraphRuntime.ERecoilStart
enum class ERecoilStart : uint8_t {
	ERS_SpecifyOffset,
	ERS_Random,
	ERS_SpecifyOffsetRandom,
};

// ScriptStruct KillstreakAnimGraphRuntime.BoneMirrorConfig
// Size: 0x20 (Inherited: 0x00)
struct FBoneMirrorConfig {
	struct TArray<struct FBoneReference> UnpairedMirrorBones; // 0x00(0x10)
	struct TArray<struct FBoneMirrorPair> PairedMirrorBones; // 0x10(0x10)
};

// ScriptStruct KillstreakAnimGraphRuntime.BoneMirrorPair
// Size: 0x2c (Inherited: 0x00)
struct FBoneMirrorPair {
	struct FBoneReference BoneOne; // 0x00(0x10)
	struct FBoneReference BoneTwo; // 0x10(0x10)
	struct FVector RotationFlipAxis; // 0x20(0x0c)
};

// ScriptStruct KillstreakAnimGraphRuntime.KSAnimNode_Mirror
// Size: 0x110 (Inherited: 0xc8)
struct FKSAnimNode_Mirror : public FAnimNode_SkeletalControlBase {
	struct FBoneMirrorConfig BoneMirrorConfig; // 0xc8(0x20)
	enum class EPoseMirrorPlane MirrorPlane; // 0xe8(0x01)
	bool bAlternateMirroring; // 0xe9(0x01)
	char UnknownData_EA[0x6]; // 0xea(0x06)
	struct FBoneMirrorConfig MirrorConfigCache; // 0xf0(0x20)
};

// ScriptStruct KillstreakAnimGraphRuntime.KSAnimNode_OrientationWarp
// Size: 0x110 (Inherited: 0xc8)
struct FKSAnimNode_OrientationWarp : public FAnimNode_SkeletalControlBase {
	float Angle; // 0xc8(0x04)
	float OrientationAlphaOverride; // 0xcc(0x04)
	struct FAnimOrientationWarpDefinition WarpSettings; // 0xd0(0x38)
	bool bUseOrientationAlphaOverride; // 0x108(0x01)
	char UnknownData_109[0x7]; // 0x109(0x07)
};

// ScriptStruct KillstreakAnimGraphRuntime.AnimOrientationWarpDefinition
// Size: 0x38 (Inherited: 0x00)
struct FAnimOrientationWarpDefinition {
	char YawRotationAxis; // 0x00(0x01)
	bool UseBoneSpaceForSpineWarp; // 0x01(0x01)
	char UnknownData_2[0x2]; // 0x02(0x02)
	float OrientationAlpha; // 0x04(0x04)
	struct TArray<struct FBoneReference> SpineBones; // 0x08(0x10)
	struct FBoneReference IkFootRoot; // 0x18(0x10)
	struct TArray<struct FBoneReference> IkFootBones; // 0x28(0x10)
};

// ScriptStruct KillstreakAnimGraphRuntime.KSAnimNode_Recoil
// Size: 0x1b0 (Inherited: 0xc8)
struct FKSAnimNode_Recoil : public FAnimNode_SkeletalControlBase {
	struct FBoneReference m_BoneToRecoil; // 0xc8(0x10)
	bool m_bBoneSpaceRecoil; // 0xd8(0x01)
	char UnknownData_D9[0x3]; // 0xd9(0x03)
	float RotTimeToGo; // 0xdc(0x04)
	float PosTimeToGo; // 0xe0(0x04)
	struct FRecoilInfo m_Recoil; // 0xe4(0x60)
	bool m_bApplyControl; // 0x144(0x01)
	char UnknownData_145[0x3]; // 0x145(0x03)
	float m_fBlendInTime; // 0x148(0x04)
	float m_fBlendInRemainingTime; // 0x14c(0x04)
	struct FVector m_vBlendLoc; // 0x150(0x0c)
	struct FRotator m_rBlendRot; // 0x15c(0x0c)
	struct FRotator RotOffset; // 0x168(0x0c)
	char UnknownData_174[0xc]; // 0x174(0x0c)
	struct FVector LocOffset; // 0x180(0x0c)
	char UnknownData_18C[0xc]; // 0x18c(0x0c)
	int32_t m_nFireImpulseCounter; // 0x198(0x04)
	enum class ERecoilAllowMirror m_eMirrorPermissions; // 0x19c(0x01)
	enum class EPoseMirrorPlane m_eMirrorPlane; // 0x19d(0x01)
	char UnknownData_19E[0x2]; // 0x19e(0x02)
	struct FVector m_vRotationFlipAxis; // 0x1a0(0x0c)
	int32_t m_nInternalFireImpulseCounter; // 0x1ac(0x04)
};

// ScriptStruct KillstreakAnimGraphRuntime.RecoilInfo
// Size: 0x60 (Inherited: 0x00)
struct FRecoilInfo {
	float TimeDurationPos; // 0x00(0x04)
	float TimeDurationRot; // 0x04(0x04)
	struct FVector RotAmplitude; // 0x08(0x0c)
	struct FVector RotFrequency; // 0x14(0x0c)
	struct FRecoilParams RotParams; // 0x20(0x10)
	struct FVector LocAmplitude; // 0x30(0x0c)
	struct FVector LocFrequency; // 0x3c(0x0c)
	struct FRecoilParams LocParams; // 0x48(0x10)
	float BlendInTime; // 0x58(0x04)
	bool Enabled; // 0x5c(0x01)
	bool Mirrored; // 0x5d(0x01)
	char UnknownData_5E[0x2]; // 0x5e(0x02)
};

// ScriptStruct KillstreakAnimGraphRuntime.RecoilParams
// Size: 0x10 (Inherited: 0x00)
struct FRecoilParams {
	struct FVector PhaseOffset; // 0x00(0x0c)
	char X; // 0x0c(0x01)
	char Y; // 0x0d(0x01)
	char Z; // 0x0e(0x01)
	char UnknownData_F[0x1]; // 0x0f(0x01)
};

// ScriptStruct KillstreakAnimGraphRuntime.KSAnimNode_SpeedWarp
// Size: 0x120 (Inherited: 0xc8)
struct FKSAnimNode_SpeedWarp : public FAnimNode_SkeletalControlBase {
	float SpeedScaling; // 0xc8(0x04)
	struct FVector SpeedWarpForwardAxis; // 0xcc(0x0c)
	struct FAnimSpeedWarpDefinition SpeedWarpSettings; // 0xd8(0x48)
};

// ScriptStruct KillstreakAnimGraphRuntime.AnimSpeedWarpDefinition
// Size: 0x48 (Inherited: 0x00)
struct FAnimSpeedWarpDefinition {
	struct FBoneReference IkFootRootBone; // 0x00(0x10)
	struct TArray<struct FBoneReference> IkFootBones; // 0x10(0x10)
	struct FBoneReference PelvisBone; // 0x20(0x10)
	float PelvisAdjustmentAlpha; // 0x30(0x04)
	int32_t PelvisAdjustmentMaxIterations; // 0x34(0x04)
	float PelvisAdjustmentStiffness; // 0x38(0x04)
	float PelvisAdjustmentDamping; // 0x3c(0x04)
	struct FName DisableSpeedWarpCurveName; // 0x40(0x08)
};

// ScriptStruct KillstreakAnimGraphRuntime.RecoilProfile
// Size: 0x1ec (Inherited: 0x00)
struct FRecoilProfile {
	struct FRecoilInfo PelvisRecoil; // 0x00(0x60)
	struct FRecoilInfo SpineRecoil; // 0x60(0x60)
	struct FRecoilInfo NeckRecoil; // 0xc0(0x60)
	struct FRecoilInfo HandRecoil; // 0x120(0x60)
	struct FRecoilInfo RightClavicleRecoil; // 0x180(0x60)
	float Spine1RecoilAlpha; // 0x1e0(0x04)
	float Spine2RecoilAlpha; // 0x1e4(0x04)
	float Spine3RecoilAlpha; // 0x1e8(0x04)
};

