// ScriptStruct SkinnableAnimGraphRuntime.AnimNode_AimOffsetSkinned
// Size: 0x1b0 (Inherited: 0x188)
struct FAnimNode_AimOffsetSkinned : public FAnimNode_RotationOffsetBlendSpace {
	struct FName SkinKeyword; // 0x188(0x08)
	struct UBlendSpaceBase* TargetBlendSpace; // 0x190(0x08)
	struct UBlendSpaceBase* DefaultBlendSpace; // 0x198(0x08)
	char UnknownData_1A0[0x10]; // 0x1a0(0x10)
};

// ScriptStruct SkinnableAnimGraphRuntime.AnimNode_BlendPoseNodeSkinned
// Size: 0xc8 (Inherited: 0x98)
struct FAnimNode_BlendPoseNodeSkinned : public FAnimNode_PoseBlendNode {
	struct FName SkinKeyword; // 0x98(0x08)
	struct UPoseAsset* TargetPose; // 0xa0(0x08)
	bool bUsePoseAssetPinAsFallback; // 0xa8(0x01)
	char UnknownData_A9[0x7]; // 0xa9(0x07)
	struct UPoseAsset* FallbackPose; // 0xb0(0x08)
	char UnknownData_B8[0x10]; // 0xb8(0x10)
};

// ScriptStruct SkinnableAnimGraphRuntime.AnimNode_BlendSpacePlayerSkinned
// Size: 0x1f0 (Inherited: 0xe0)
struct FAnimNode_BlendSpacePlayerSkinned : public FAnimNode_BlendSpacePlayer {
	struct FPoseLink Source; // 0xe0(0x10)
	struct FName SkinKeyword; // 0xf0(0x08)
	float BlendFromSourceTime; // 0xf8(0x04)
	float BlendToSourceTime; // 0xfc(0x04)
	enum class EAlphaBlendOption BlendType; // 0x100(0x01)
	char UnknownData_101[0x7]; // 0x101(0x07)
	struct UCurveFloat* CustomBlendCurve; // 0x108(0x08)
	struct UBlendProfile* BlendProfile; // 0x110(0x08)
	struct FAlphaBlend BlendFromSource; // 0x118(0x30)
	struct FAlphaBlend BlendToSource; // 0x148(0x30)
	struct UBlendSpaceBase* TargetBlendSpace; // 0x178(0x08)
	struct UBlendSpaceBase* LastTargetBlendSpace; // 0x180(0x08)
	bool bLastHadTargetBlendSpace; // 0x188(0x01)
	char UnknownData_189[0x3]; // 0x189(0x03)
	float SourceBlendWeight; // 0x18c(0x04)
	float RemainingBlendTime; // 0x190(0x04)
	char UnknownData_194[0x4]; // 0x194(0x04)
	struct FBlendSampleData PerBoneSampleData; // 0x198(0x40)
	bool bResetSourceOnActivation; // 0x1d8(0x01)
	char UnknownData_1D9[0x17]; // 0x1d9(0x17)
};

// ScriptStruct SkinnableAnimGraphRuntime.AnimNode_BSpaceEvalSkinned
// Size: 0x1f8 (Inherited: 0xe8)
struct FAnimNode_BSpaceEvalSkinned : public FAnimNode_BlendSpaceEvaluator {
	struct FPoseLink Source; // 0xe8(0x10)
	struct FName SkinKeyword; // 0xf8(0x08)
	float BlendFromSourceTime; // 0x100(0x04)
	float BlendToSourceTime; // 0x104(0x04)
	enum class EAlphaBlendOption BlendType; // 0x108(0x01)
	char UnknownData_109[0x7]; // 0x109(0x07)
	struct UCurveFloat* CustomBlendCurve; // 0x110(0x08)
	struct UBlendProfile* BlendProfile; // 0x118(0x08)
	struct FAlphaBlend BlendFromSource; // 0x120(0x30)
	struct FAlphaBlend BlendToSource; // 0x150(0x30)
	struct UBlendSpaceBase* TargetBlendSpace; // 0x180(0x08)
	struct UBlendSpaceBase* LastTargetBlendSpace; // 0x188(0x08)
	bool bLastHadTargetBlendSpace; // 0x190(0x01)
	char UnknownData_191[0x3]; // 0x191(0x03)
	float SourceBlendWeight; // 0x194(0x04)
	float RemainingBlendTime; // 0x198(0x04)
	char UnknownData_19C[0x4]; // 0x19c(0x04)
	struct FBlendSampleData PerBoneSampleData; // 0x1a0(0x40)
	bool bResetSourceOnActivation; // 0x1e0(0x01)
	char UnknownData_1E1[0x17]; // 0x1e1(0x17)
};

// ScriptStruct SkinnableAnimGraphRuntime.AnimNode_SeqEvalSkinned
// Size: 0x160 (Inherited: 0x48)
struct FAnimNode_SeqEvalSkinned : public FAnimNode_SequenceEvaluator {
	struct FPoseLink Source; // 0x48(0x10)
	struct FName SkinKeyword; // 0x58(0x08)
	float BlendFromSourceTime; // 0x60(0x04)
	float BlendToSourceTime; // 0x64(0x04)
	enum class EAlphaBlendOption BlendType; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
	struct UCurveFloat* CustomBlendCurve; // 0x70(0x08)
	struct UBlendProfile* BlendProfile; // 0x78(0x08)
	struct FAlphaBlend BlendFromSource; // 0x80(0x30)
	struct FAlphaBlend BlendToSource; // 0xb0(0x30)
	struct UAnimSequenceBase* TargetSequence; // 0xe0(0x08)
	struct UAnimSequenceBase* LastTargetSequence; // 0xe8(0x08)
	bool bUseSequencePinAsFallback; // 0xf0(0x01)
	bool bLastHadTargetSequence; // 0xf1(0x01)
	char UnknownData_F2[0x2]; // 0xf2(0x02)
	float SourceBlendWeight; // 0xf4(0x04)
	float RemainingBlendTime; // 0xf8(0x04)
	char UnknownData_FC[0x4]; // 0xfc(0x04)
	struct FBlendSampleData PerBoneSampleData; // 0x100(0x40)
	bool bResetSourceOnActivation; // 0x140(0x01)
	char UnknownData_141[0x7]; // 0x141(0x07)
	struct UAnimSequenceBase* FallbackSequence; // 0x148(0x08)
	char UnknownData_150[0x10]; // 0x150(0x10)
};

// ScriptStruct SkinnableAnimGraphRuntime.AnimNode_SeqCurveEvalSkinned
// Size: 0x170 (Inherited: 0x160)
struct FAnimNode_SeqCurveEvalSkinned : public FAnimNode_SeqEvalSkinned {
	struct FName CurveName; // 0x160(0x08)
	char UnknownData_168[0x8]; // 0x168(0x08)
};

// ScriptStruct SkinnableAnimGraphRuntime.AnimNode_SequenceSkinned
// Size: 0x150 (Inherited: 0x30)
struct FAnimNode_SequenceSkinned : public FAnimNode_AssetPlayerBase {
	struct FPoseLink Source; // 0x30(0x10)
	struct FName SkinKeyword; // 0x40(0x08)
	bool bLoopAnimation; // 0x48(0x01)
	char UnknownData_49[0x3]; // 0x49(0x03)
	float PlayRate; // 0x4c(0x04)
	float PlayRateBasis; // 0x50(0x04)
	float StartPosition; // 0x54(0x04)
	float BlendFromSourceTime; // 0x58(0x04)
	float BlendToSourceTime; // 0x5c(0x04)
	enum class EAlphaBlendOption BlendType; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
	struct UCurveFloat* CustomBlendCurve; // 0x68(0x08)
	struct UBlendProfile* BlendProfile; // 0x70(0x08)
	struct FAlphaBlend BlendFromSource; // 0x78(0x30)
	struct FAlphaBlend BlendToSource; // 0xa8(0x30)
	struct UAnimSequenceBase* CurrentSequence; // 0xd8(0x08)
	struct UAnimSequenceBase* LastSequence; // 0xe0(0x08)
	bool bLastHadSequence; // 0xe8(0x01)
	char UnknownData_E9[0x3]; // 0xe9(0x03)
	float SourceBlendWeight; // 0xec(0x04)
	float RemainingBlendTime; // 0xf0(0x04)
	char UnknownData_F4[0x4]; // 0xf4(0x04)
	struct FBlendSampleData PerBoneSampleData; // 0xf8(0x40)
	bool bResetSourceOnActivation; // 0x138(0x01)
	char UnknownData_139[0x17]; // 0x139(0x17)
};

// ScriptStruct SkinnableAnimGraphRuntime.AnimNode_SequenceSkinnedCurvePlay
// Size: 0x158 (Inherited: 0x150)
struct FAnimNode_SequenceSkinnedCurvePlay : public FAnimNode_SequenceSkinned {
	struct FName CurveName; // 0x150(0x08)
};

// ScriptStruct SkinnableAnimGraphRuntime.SkinnedAnimInstanceProxy
// Size: 0x730 (Inherited: 0x6e0)
struct FSkinnedAnimInstanceProxy : public FAnimInstanceProxy {
	char UnknownData_6E0[0x50]; // 0x6e0(0x50)
};

