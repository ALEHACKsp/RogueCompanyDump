// WidgetBlueprintGeneratedClass WBP_PartyModule.WBP_PartyModule_C
// Size: 0x570 (Inherited: 0x4e0)
struct UWBP_PartyModule_C : public UKSPartyManagerWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWBP_LeaveParty_C* LeaveParty; // 0x4e8(0x08)
	struct UWBP_PartyModuleCardSlot_C* SlotA; // 0x4f0(0x08)
	struct UWBP_PartyModuleCardSlot_C* SlotB; // 0x4f8(0x08)
	struct UWBP_PartyModuleCardSlot_C* SlotC; // 0x500(0x08)
	struct UWBP_PartyModuleCardSlot_C* SlotD; // 0x508(0x08)
	struct UWBP_Header3_C* WBP_Header3_C; // 0x510(0x08)
	struct UWBP_ModuleHeader_C* WBP_ModuleHeader; // 0x518(0x08)
	struct UWBP_Social_Snapshot_C* WBP_Social_Snapshot; // 0x520(0x08)
	struct UWBP_VoiceActivityContainer_C* WBP_VoiceActivityContainer; // 0x528(0x08)
	struct FMulticastInlineDelegate OnPlayerCardSelected; // 0x530(0x10)
	struct TArray<struct FPUMG_PartyMemberData> CachedPartyMembers; // 0x540(0x10)
	struct FMulticastInlineDelegate OnPlayerCardBackButton; // 0x550(0x10)
	struct FMulticastInlineDelegate OnpartyLeaveVisibilityChange; // 0x560(0x10)

	void GetPrimaryFocus(struct UWBP_Social_Snapshot_C* Primary Focus); // Function WBP_PartyModule.WBP_PartyModule_C.GetPrimaryFocus
	void FindPlayerCardByVoiceId(struct FString VoiceId, struct UWBP_player_card_module_C* PlayerCard); // Function WBP_PartyModule.WBP_PartyModule_C.FindPlayerCardByVoiceId
	void Get Navigation Widgets(struct TArray<struct UPUMG_Widget*> Return Value); // Function WBP_PartyModule.WBP_PartyModule_C.Get Navigation Widgets
	void Get Other Party Members(struct TArray<struct FPUMG_PartyMemberData> Party Members, struct TArray<struct FPUMG_PartyMemberData> Return Value); // Function WBP_PartyModule.WBP_PartyModule_C.Get Other Party Members
	void ApplyPartyData(struct TArray<struct FPUMG_PartyMemberData> PartyMembers); // Function WBP_PartyModule.WBP_PartyModule_C.ApplyPartyData
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_PartyModule.WBP_PartyModule_C.InitializeWidget
	void VoiceParticipantAdded(struct FString AccountId); // Function WBP_PartyModule.WBP_PartyModule_C.VoiceParticipantAdded
	void VoiceParticipantRemoved(struct FString AccountId); // Function WBP_PartyModule.WBP_PartyModule_C.VoiceParticipantRemoved
	void VoiceParticipantUpdated(struct FString AccountId, bool IsTalking, bool IsMuted); // Function WBP_PartyModule.WBP_PartyModule_C.VoiceParticipantUpdated
	void VoiceStateChange(enum class EKSVoiceActivityAudioState State); // Function WBP_PartyModule.WBP_PartyModule_C.VoiceStateChange
	void Handle Player Card Clicked(struct UWBP_player_card_module_C* Selected Player Card); // Function WBP_PartyModule.WBP_PartyModule_C.Handle Player Card Clicked
	void Handle Player Card Back(); // Function WBP_PartyModule.WBP_PartyModule_C.Handle Player Card Back
	void HandlePartyLeaveVisibilityChange(bool Visible); // Function WBP_PartyModule.WBP_PartyModule_C.HandlePartyLeaveVisibilityChange
	void ExecuteUbergraph_WBP_PartyModule(int32_t EntryPoint); // Function WBP_PartyModule.WBP_PartyModule_C.ExecuteUbergraph_WBP_PartyModule
	void OnPartyLeaveVisibilityChange__DelegateSignature(bool Visible); // Function WBP_PartyModule.WBP_PartyModule_C.OnPartyLeaveVisibilityChange__DelegateSignature
	void OnPlayerCardBackButton__DelegateSignature(); // Function WBP_PartyModule.WBP_PartyModule_C.OnPlayerCardBackButton__DelegateSignature
	void OnPlayerCardSelected__DelegateSignature(struct UWBP_player_card_module_C* Selected Player Card); // Function WBP_PartyModule.WBP_PartyModule_C.OnPlayerCardSelected__DelegateSignature
};

