// DynamicClass CharacterEmotionComponent.CharacterEmotionComponent_C
// Size: 0x2b0 (Inherited: 0x238)
struct UCharacterEmotionComponent_C : public UKSEmotionComponent {
	float CachedPlayerHealth; // 0x238(0x04)
	float PainedDuration; // 0x23c(0x04)
	int32_t FocusedId; // 0x240(0x04)
	int32_t DeadId; // 0x244(0x04)
	int32_t WoundedId; // 0x248(0x04)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate; // 0x24c(0x10)
	char UnknownData_25C[0x4]; // 0x25c(0x04)
	struct AKSCharacter* K2Node_DynamicCast_AsKSCharacter; // 0x260(0x08)
	bool K2Node_DynamicCast_bSuccess; // 0x268(0x01)
	char UnknownData_269[0x3]; // 0x269(0x03)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2; // 0x26c(0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3; // 0x27c(0x10)
	char UnknownData_28C[0x4]; // 0x28c(0x04)
	struct AKSCharacterBase* K2Node_DynamicCast_AsKSCharacter_Base; // 0x290(0x08)
	bool K2Node_DynamicCast_bSuccess_2; // 0x298(0x01)
	char UnknownData_299[0x3]; // 0x299(0x03)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4; // 0x29c(0x10)
	char UnknownData_2AC[0x4]; // 0x2ac(0x04)

	void ReceiveBeginPlay(); // Function CharacterEmotionComponent.CharacterEmotionComponent_C.ReceiveBeginPlay
	void Player Downed Changed(struct AKSCharacter* bpp__Character__pf); // Function CharacterEmotionComponent.CharacterEmotionComponent_C.Player Downed Changed
	void Check Death State(); // Function CharacterEmotionComponent.CharacterEmotionComponent_C.Check Death State
	void Character Health Changed(struct AKSCharacterBase* bpp__KSCharacter__pf); // Function CharacterEmotionComponent.CharacterEmotionComponent_C.Character Health Changed
	void Character Aim State Changed(enum class EKSCharacterAimMode bpp__NewParam__pf); // Function CharacterEmotionComponent.CharacterEmotionComponent_C.Character Aim State Changed
	void OnHealthChanged__DelegateSignature(struct AKSCharacterBase* bpp__Character__pf); // DelegateFunction CharacterEmotionComponent.CharacterEmotionComponent_C.OnHealthChanged__DelegateSignature
	void OnDeathStateChanged__DelegateSignature(); // DelegateFunction CharacterEmotionComponent.CharacterEmotionComponent_C.OnDeathStateChanged__DelegateSignature
	void OnCharacterDownedChanged__DelegateSignature(struct AKSCharacter* bpp__Character__pf); // DelegateFunction CharacterEmotionComponent.CharacterEmotionComponent_C.OnCharacterDownedChanged__DelegateSignature
	void OnAimStateChange__DelegateSignature(enum class EKSCharacterAimMode bpp__NewAimMode__pf); // DelegateFunction CharacterEmotionComponent.CharacterEmotionComponent_C.OnAimStateChange__DelegateSignature
};

