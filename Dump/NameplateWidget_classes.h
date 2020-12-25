// DynamicClass NameplateWidget.NameplateWidget_C
// Size: 0x4c8 (Inherited: 0x238)
struct UNameplateWidget_C : public UUserWidget {
	char UnknownData_238[0x8]; // 0x238(0x08)
	struct UWidgetAnimation* DamagePulse; // 0x240(0x08)
	struct UImage* DownedArrow; // 0x248(0x08)
	struct UWidgetSwitcher* DownedPlayer; // 0x250(0x08)
	struct UInvalidationBox* InvalidationBox_1; // 0x258(0x08)
	struct UPlayerHealthMeter_C* PlayerHealthMeter; // 0x260(0x08)
	struct UTextBlock* PlayerName; // 0x268(0x08)
	struct UImage* RogueIcon; // 0x270(0x08)
	struct APlayerState* Nameplate_PlayerState; // 0x278(0x08)
	struct AKSCharacter* Nameplate_Character; // 0x280(0x08)
	bool Killcam_Enabled; // 0x288(0x01)
	char UnknownData_289[0x3]; // 0x289(0x03)
	struct FName HoverState; // 0x28c(0x08)
	float ResidualFadeAlpha; // 0x294(0x04)
	float ResidualFadeDelayTime; // 0x298(0x04)
	struct FVector2D DamageLerpEndpoints; // 0x29c(0x08)
	float ResidualFadeTime; // 0x2a4(0x04)
	float Manual Tick Delta Time; // 0x2a8(0x04)
	float ResidualFadeDelayTimer; // 0x2ac(0x04)
	float DamageLerpAlpha; // 0x2b0(0x04)
	float ResidualFadePower; // 0x2b4(0x04)
	float DamageLerpPower; // 0x2b8(0x04)
	float DamageLerpTime; // 0x2bc(0x04)
	float PreviousHealth; // 0x2c0(0x04)
	struct FPlayerHealthMeterState CurrentMeterState; // 0x2c4(0x18)
	bool HasDeferredUpdate; // 0x2dc(0x01)
	char UnknownData_2DD[0x3]; // 0x2dd(0x03)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate; // 0x2e0(0x10)
	struct AKSPlayerState* K2Node_CustomEvent_PlayerState_2; // 0x2f0(0x08)
	bool Temp_bool_Variable; // 0x2f8(0x01)
	char UnknownData_2F9[0x3]; // 0x2f9(0x03)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2; // 0x2fc(0x10)
	char UnknownData_30C[0x4]; // 0x30c(0x04)
	struct AKSPlayerState* K2Node_DynamicCast_AsKSPlayer_State; // 0x310(0x08)
	bool K2Node_DynamicCast_bSuccess; // 0x318(0x01)
	char UnknownData_319[0x7]; // 0x319(0x07)
	struct AKSPlayerState* K2Node_CustomEvent_PlayerState_3; // 0x320(0x08)
	bool K2Node_CustomEvent_IsEnabled; // 0x328(0x01)
	enum class ESlateVisibility Temp_byte_Variable; // 0x329(0x01)
	char UnknownData_32A[0x6]; // 0x32a(0x06)
	struct AKSCharacterBase* K2Node_CustomEvent_Character; // 0x330(0x08)
	struct AKSCharacterBase* K2Node_CustomEvent_Character_2; // 0x338(0x08)
	struct AKSCharacter* K2Node_DynamicCast_AsKSCharacter; // 0x340(0x08)
	bool K2Node_DynamicCast_bSuccess_2; // 0x348(0x01)
	char UnknownData_349[0x7]; // 0x349(0x07)
	struct AKSGameState* K2Node_DynamicCast_AsKSGame_State; // 0x350(0x08)
	bool K2Node_DynamicCast_bSuccess_3; // 0x358(0x01)
	char UnknownData_359[0x3]; // 0x359(0x03)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3; // 0x35c(0x10)
	char UnknownData_36C[0x4]; // 0x36c(0x04)
	struct AKSPlayerState* K2Node_CustomEvent_PlayerState; // 0x370(0x08)
	struct AKSGameState* K2Node_DynamicCast_AsKSGame_State_2; // 0x378(0x08)
	bool K2Node_DynamicCast_bSuccess_4; // 0x380(0x01)
	char UnknownData_381[0x7]; // 0x381(0x07)
	struct UKSPlayerMod* K2Node_CustomEvent_Mod_2; // 0x388(0x08)
	struct UKSPlayerModInstance* K2Node_CustomEvent_ModInstance_2; // 0x390(0x08)
	struct UKSPlayerMod* K2Node_CustomEvent_Mod; // 0x398(0x08)
	struct UKSPlayerModInstance* K2Node_CustomEvent_ModInstance; // 0x3a0(0x08)
	struct APlayerState* K2Node_Event_PlayerState; // 0x3a8(0x08)
	struct AKSCharacter* K2Node_Event_Character; // 0x3b0(0x08)
	bool CallFunc_Player_Is_Blinded_Is_Blind; // 0x3b8(0x01)
	bool CallFunc_Should_Show_Enemy_Nameplate_ShouldShow; // 0x3b9(0x01)
	char UnknownData_3BA[0x2]; // 0x3ba(0x02)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4; // 0x3bc(0x10)
	char UnknownData_3CC[0x4]; // 0x3cc(0x04)
	struct UKSLocalPlayer* K2Node_DynamicCast_AsKSLocal_Player; // 0x3d0(0x08)
	bool K2Node_DynamicCast_bSuccess_5; // 0x3d8(0x01)
	char UnknownData_3D9[0x7]; // 0x3d9(0x07)
	struct UObject* Temp_object_Variable; // 0x3e0(0x08)
	struct UTexture2D* K2Node_DynamicCast_AsTexture_2D; // 0x3e8(0x08)
	bool K2Node_DynamicCast_bSuccess_6; // 0x3f0(0x01)
	bool Temp_bool_Has_Been_Initd_Variable; // 0x3f1(0x01)
	enum class ESlateVisibility Temp_byte_Variable_2; // 0x3f2(0x01)
	char UnknownData_3F3[0x1]; // 0x3f3(0x01)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_5; // 0x3f4(0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_6; // 0x404(0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_7; // 0x414(0x10)
	bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x424(0x01)
	char UnknownData_425[0x3]; // 0x425(0x03)
	float Temp_float_Variable; // 0x428(0x04)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_8; // 0x42c(0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_9; // 0x43c(0x10)
	char UnknownData_44C[0x4]; // 0x44c(0x04)
	struct AKSPlayerState* K2Node_DynamicCast_AsKSPlayer_State_2; // 0x450(0x08)
	bool K2Node_DynamicCast_bSuccess_7; // 0x458(0x01)
	char UnknownData_459[0x7]; // 0x459(0x07)
	struct UObject* K2Node_CustomEvent_Loaded; // 0x460(0x08)
	bool Temp_bool_IsClosed_Variable; // 0x468(0x01)
	char UnknownData_469[0x3]; // 0x469(0x03)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_10; // 0x46c(0x10)
	float Temp_float_Variable_2; // 0x47c(0x04)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_11; // 0x480(0x10)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_12; // 0x490(0x10)
	bool Temp_bool_Variable_2; // 0x4a0(0x01)
	char UnknownData_4A1[0x3]; // 0x4a1(0x03)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_13; // 0x4a4(0x10)
	float K2Node_Select_Default; // 0x4b4(0x04)
	struct AKSPlayerState* K2Node_DynamicCast_AsKSPlayer_State_3; // 0x4b8(0x08)
	bool K2Node_DynamicCast_bSuccess_8; // 0x4c0(0x01)
	enum class ESlateVisibility K2Node_Select_Default_2; // 0x4c1(0x01)
	char UnknownData_4C2[0x6]; // 0x4c2(0x06)

	void Should Show Enemy Nameplate(bool bpp__ShouldShow__pf); // Function NameplateWidget.NameplateWidget_C.Should Show Enemy Nameplate
	void SetNamePlateColor(struct AKSPlayerState* bpp__PlayerxState__pfT); // Function NameplateWidget.NameplateWidget_C.SetNamePlateColor
	void Player Is Blinded(bool bpp__IsxBlind__pfT); // Function NameplateWidget.NameplateWidget_C.Player Is Blinded
	void OnUnhovered(); // Function NameplateWidget.NameplateWidget_C.OnUnhovered
	void OnPossession(struct APlayerState* bpp__PlayerState__pf, struct AKSCharacter* bpp__Character__pf); // Function NameplateWidget.NameplateWidget_C.OnPossession
	void OnPlayerUINeedsUpdate(struct AKSPlayerState* bpp__PlayerState__pf); // Function NameplateWidget.NameplateWidget_C.OnPlayerUINeedsUpdate
	void OnPlayerDownedChanged_Event(struct AKSPlayerState* bpp__PlayerState__pf); // Function NameplateWidget.NameplateWidget_C.OnPlayerDownedChanged_Event
	void OnModRemoved(struct UKSPlayerMod* bpp__Mod__pf, struct UKSPlayerModInstance* bpp__ModInstance__pf); // Function NameplateWidget.NameplateWidget_C.OnModRemoved
	void OnModAdded(struct UKSPlayerMod* bpp__Mod__pf, struct UKSPlayerModInstance* bpp__ModInstance__pf); // Function NameplateWidget.NameplateWidget_C.OnModAdded
	void OnLoaded_F5BCD8C84871643FB2979DA9F519484F(struct UObject* bpp__Loaded__pf); // Function NameplateWidget.NameplateWidget_C.OnLoaded_F5BCD8C84871643FB2979DA9F519484F
	void OnKillCamEnabled(bool bpp__IsEnabled__pf); // Function NameplateWidget.NameplateWidget_C.OnKillCamEnabled
	void OnHovered(); // Function NameplateWidget.NameplateWidget_C.OnHovered
	void OnDead(struct AKSPlayerState* bpp__PlayerState__pf); // Function NameplateWidget.NameplateWidget_C.OnDead
	void Manual Tick(); // Function NameplateWidget.NameplateWidget_C.Manual Tick
	void Handle Overheal Changed(struct AKSCharacterBase* bpp__Character__pf__const); // Function NameplateWidget.NameplateWidget_C.Handle Overheal Changed
	void Handle Job Changed(); // Function NameplateWidget.NameplateWidget_C.Handle Job Changed
	void HandleNameChanged(struct AKSPlayerState* bpp__InKSPlayerState__pf); // Function NameplateWidget.NameplateWidget_C.HandleNameChanged
	void ExecuteUbergraph_NameplateWidget_8(int32_t bpp__EntryPoint__pf); // Function NameplateWidget.NameplateWidget_C.ExecuteUbergraph_NameplateWidget_8
	void ExecuteUbergraph_NameplateWidget_13(int32_t bpp__EntryPoint__pf); // Function NameplateWidget.NameplateWidget_C.ExecuteUbergraph_NameplateWidget_13
	void Destruct(); // Function NameplateWidget.NameplateWidget_C.Destruct
	void Deferred Player State Open(); // Function NameplateWidget.NameplateWidget_C.Deferred Player State Open
	void Construct(); // Function NameplateWidget.NameplateWidget_C.Construct
	void CheckMods(struct AKSPlayerState* bpp__PlayerState__pf); // Function NameplateWidget.NameplateWidget_C.CheckMods
	void CharacterHealthChange(struct AKSCharacterBase* bpp__Character__pf__const); // Function NameplateWidget.NameplateWidget_C.CharacterHealthChange
	void OnUIRelevantPlayerStateChanged__DelegateSignature(struct AKSPlayerState* bpp__PlayerState__pf); // DelegateFunction NameplateWidget.NameplateWidget_C.OnUIRelevantPlayerStateChanged__DelegateSignature
	void OnPlayerEliminated__DelegateSignature(struct AKSPlayerState* bpp__PlayerState__pf); // DelegateFunction NameplateWidget.NameplateWidget_C.OnPlayerEliminated__DelegateSignature
	void OnPlayerDownedChanged__DelegateSignature(struct AKSPlayerState* bpp__PlayerState__pf); // DelegateFunction NameplateWidget.NameplateWidget_C.OnPlayerDownedChanged__DelegateSignature
	void OnModRemoved__DelegateSignature(struct UKSPlayerMod* bpp__Mod__pf, struct UKSPlayerModInstance* bpp__ModInstance__pf); // DelegateFunction NameplateWidget.NameplateWidget_C.OnModRemoved__DelegateSignature
	void OnModAdded__DelegateSignature(struct UKSPlayerMod* bpp__Mod__pf, struct UKSPlayerModInstance* bpp__ModInstance__pf); // DelegateFunction NameplateWidget.NameplateWidget_C.OnModAdded__DelegateSignature
	void OnKSPlayerStateTeamChanged__DelegateSignature(struct AKSPlayerState* bpp__KSPlayerState__pf); // DelegateFunction NameplateWidget.NameplateWidget_C.OnKSPlayerStateTeamChanged__DelegateSignature
	void OnKSPlayerStateNameChanged__DelegateSignature(struct AKSPlayerState* bpp__KSPlayerState__pf); // DelegateFunction NameplateWidget.NameplateWidget_C.OnKSPlayerStateNameChanged__DelegateSignature
	void OnKillCamEnabled__DelegateSignature(bool bpp__bEnabled__pf); // DelegateFunction NameplateWidget.NameplateWidget_C.OnKillCamEnabled__DelegateSignature
	void OnJobChanged__DelegateSignature(); // DelegateFunction NameplateWidget.NameplateWidget_C.OnJobChanged__DelegateSignature
	void OnHealthChanged__DelegateSignature(struct AKSCharacterBase* bpp__Character__pf); // DelegateFunction NameplateWidget.NameplateWidget_C.OnHealthChanged__DelegateSignature
};

