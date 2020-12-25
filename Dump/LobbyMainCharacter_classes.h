// BlueprintGeneratedClass LobbyMainCharacter.LobbyMainCharacter_C
// Size: 0x3740 (Inherited: 0x36a0)
struct ALobbyMainCharacter_C : public AKSLobbyCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x36a0(0x08)
	char LobbyProp01_Timeline__Direction_311B7F8B46533A11B70CFAA92E9DA987; // 0x36a8(0x01)
	char UnknownData_36A9[0x7]; // 0x36a9(0x07)
	struct UTimelineComponent* LobbyProp01_Timeline; // 0x36b0(0x08)
	char LobbyWeapon02_Timeline__Direction_6E3E791441C09FAF955C7099C1934001; // 0x36b8(0x01)
	char UnknownData_36B9[0x7]; // 0x36b9(0x07)
	struct UTimelineComponent* LobbyWeapon02_Timeline; // 0x36c0(0x08)
	char LobbyWeapon01_Timeline__Direction_A9FF0C36405CB79CE4A5609C33E7F935; // 0x36c8(0x01)
	char UnknownData_36C9[0x7]; // 0x36c9(0x07)
	struct UTimelineComponent* LobbyWeapon01_Timeline; // 0x36d0(0x08)
	struct TArray<struct FName> LobbyFidgetKeywordArray; // 0x36d8(0x10)
	char UnknownData_36E8[0x8]; // 0x36e8(0x08)
	struct FTransform Transform Reset; // 0x36f0(0x30)
	float Lobby Anim total duration; // 0x3720(0x04)
	char UnknownData_3724[0x4]; // 0x3724(0x04)
	struct FTimerHandle Lobby Anim timer; // 0x3728(0x08)
	bool Loop montage; // 0x3730(0x01)
	char UnknownData_3731[0x3]; // 0x3731(0x03)
	int32_t NewVar_1; // 0x3734(0x04)
	enum class EKSLobbyCharacterAnimationPose Lobby Character Animation Pose; // 0x3738(0x01)
	char UnknownData_3739[0x3]; // 0x3739(0x03)
	float Lobby Anim Starting Time; // 0x373c(0x04)

	void Randomize Lobby Idle anim start(); // Function LobbyMainCharacter.LobbyMainCharacter_C.Randomize Lobby Idle anim start
	void Make Lobby Fidget Keyword Array(); // Function LobbyMainCharacter.LobbyMainCharacter_C.Make Lobby Fidget Keyword Array
	void Parse Lobby Fidget Animation(struct TArray<struct FName> LobbyFidgetKeywordArray, enum class EKSLobbyCharacterAnimationPose Lobby Character Animation Pose); // Function LobbyMainCharacter.LobbyMainCharacter_C.Parse Lobby Fidget Animation
	void Get Montage Position of Lobby Characater(float Position); // Function LobbyMainCharacter.LobbyMainCharacter_C.Get Montage Position of Lobby Characater
	void Init Body Apparel(); // Function LobbyMainCharacter.LobbyMainCharacter_C.Init Body Apparel
	void LobbyWeapon01_Timeline__FinishedFunc(); // Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyWeapon01_Timeline__FinishedFunc
	void LobbyWeapon01_Timeline__UpdateFunc(); // Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyWeapon01_Timeline__UpdateFunc
	void LobbyWeapon02_Timeline__FinishedFunc(); // Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyWeapon02_Timeline__FinishedFunc
	void LobbyWeapon02_Timeline__UpdateFunc(); // Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyWeapon02_Timeline__UpdateFunc
	void LobbyProp01_Timeline__FinishedFunc(); // Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyProp01_Timeline__FinishedFunc
	void LobbyProp01_Timeline__UpdateFunc(); // Function LobbyMainCharacter.LobbyMainCharacter_C.LobbyProp01_Timeline__UpdateFunc
	void OnNotifyEnd_AA177F3D4F176F58A7691D84D8C329C7(struct FName NotifyName, int32_t MontageInstanceID); // Function LobbyMainCharacter.LobbyMainCharacter_C.OnNotifyEnd_AA177F3D4F176F58A7691D84D8C329C7
	void OnNotifyBegin_AA177F3D4F176F58A7691D84D8C329C7(struct FName NotifyName, int32_t MontageInstanceID); // Function LobbyMainCharacter.LobbyMainCharacter_C.OnNotifyBegin_AA177F3D4F176F58A7691D84D8C329C7
	void OnInterrupted_AA177F3D4F176F58A7691D84D8C329C7(struct FName NotifyName, int32_t MontageInstanceID); // Function LobbyMainCharacter.LobbyMainCharacter_C.OnInterrupted_AA177F3D4F176F58A7691D84D8C329C7
	void OnBlendOut_AA177F3D4F176F58A7691D84D8C329C7(struct FName NotifyName, int32_t MontageInstanceID); // Function LobbyMainCharacter.LobbyMainCharacter_C.OnBlendOut_AA177F3D4F176F58A7691D84D8C329C7
	void OnCompleted_AA177F3D4F176F58A7691D84D8C329C7(struct FName NotifyName, int32_t MontageInstanceID); // Function LobbyMainCharacter.LobbyMainCharacter_C.OnCompleted_AA177F3D4F176F58A7691D84D8C329C7
	void StopRightPropEffect(); // Function LobbyMainCharacter.LobbyMainCharacter_C.StopRightPropEffect
	void PlayRightPropEffect(float Duration, struct FName MaterialParameter, struct UCurveFloat* FloatCurve); // Function LobbyMainCharacter.LobbyMainCharacter_C.PlayRightPropEffect
	void StopLeftPropEffect(); // Function LobbyMainCharacter.LobbyMainCharacter_C.StopLeftPropEffect
	void PlayLeftPropEffect(float Duration, struct FName MaterialParameter, struct UCurveFloat* FloatCurve); // Function LobbyMainCharacter.LobbyMainCharacter_C.PlayLeftPropEffect
	void StopScenePropEffect(); // Function LobbyMainCharacter.LobbyMainCharacter_C.StopScenePropEffect
	void PlayScenePropEffect(float Duration, struct FName MaterialParameter, struct UCurveFloat* FloatCurve); // Function LobbyMainCharacter.LobbyMainCharacter_C.PlayScenePropEffect
	void ReceiveBeginPlay(); // Function LobbyMainCharacter.LobbyMainCharacter_C.ReceiveBeginPlay
	void Add Body Apparel As Parent(struct USkinnableSkeletalMeshComponent* Skinnable Mesh Component); // Function LobbyMainCharacter.LobbyMainCharacter_C.Add Body Apparel As Parent
	void PlayLobbyCharacterMontage(); // Function LobbyMainCharacter.LobbyMainCharacter_C.PlayLobbyCharacterMontage
	void StopLobbyCharacterMontage(); // Function LobbyMainCharacter.LobbyMainCharacter_C.StopLobbyCharacterMontage
	void InitializeLobbyCharacterAnimation(); // Function LobbyMainCharacter.LobbyMainCharacter_C.InitializeLobbyCharacterAnimation
	void ExecuteUbergraph_LobbyMainCharacter(int32_t EntryPoint); // Function LobbyMainCharacter.LobbyMainCharacter_C.ExecuteUbergraph_LobbyMainCharacter
};

