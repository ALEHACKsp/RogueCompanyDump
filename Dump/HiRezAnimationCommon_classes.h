// Class HiRezAnimationCommon.HRA_AnimNotify_PlayCameraAnim
// Size: 0x58 (Inherited: 0x38)
struct UHRA_AnimNotify_PlayCameraAnim : public UAnimNotify {
	struct UCameraShake* CameraShake; // 0x38(0x08)
	float Scale; // 0x40(0x04)
	char Space; // 0x44(0x01)
	char UnknownData_45[0x3]; // 0x45(0x03)
	struct FRotator CustomPlaySpace; // 0x48(0x0c)
	char UnknownData_54[0x4]; // 0x54(0x04)
};

