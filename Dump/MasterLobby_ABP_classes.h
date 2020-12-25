// AnimBlueprintGeneratedClass MasterLobby_ABP.MasterLobby_ABP_C
// Size: 0x22e9 (Inherited: 0x1010)
struct UMasterLobby_ABP_C : public UKSCharacterAnimInst {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1010(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x1018(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x1048(0x78)
	struct FAnimNode_SequenceSkinned AnimGraphNode_SequenceSkinned; // 0x10c0(0x150)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1210(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1240(0xb0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3; // 0x12f0(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3; // 0x1310(0x20)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x1330(0xc0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x13f0(0x78)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone_2; // 0x1468(0xf0)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone; // 0x1558(0xf0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0x1648(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x1700(0x28)
	bool __CustomProperty_bIsLobby_90FBADB5424A5A00D7B0F4B018D67A66; // 0x1728(0x01)
	bool __CustomProperty_bIsServer_90FBADB5424A5A00D7B0F4B018D67A66; // 0x1729(0x01)
	char UnknownData_172A[0x6]; // 0x172a(0x06)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_SubInstance; // 0x1730(0xa0)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x17d0(0x48)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x1818(0xa0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x18b8(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x18d8(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x18f8(0x108)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x1a00(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x1ab8(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x1ae0(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1b08(0xa0)
	char UnknownData_1BA8[0x8]; // 0x1ba8(0x08)
	struct FAnimNode_RigidBodySkipServer AnimGraphNode_RigidBodySkipServer; // 0x1bb0(0x590)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x2140(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2160(0x20)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x2180(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x2238(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x2260(0x28)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x2288(0x48)
	float R_Prop_Lock_Alpha; // 0x22d0(0x04)
	float L_Prop_Lock_Alpha; // 0x22d4(0x04)
	bool bIsServer; // 0x22d8(0x01)
	bool SkinUseCharacterScale; // 0x22d9(0x01)
	char UnknownData_22DA[0x2]; // 0x22da(0x02)
	struct FVector CharacterScale; // 0x22dc(0x0c)
	bool ChildPhysicsAssetEnable; // 0x22e8(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function MasterLobby_ABP.MasterLobby_ABP_C.AnimGraph
	void AnimNotify_Lobby_Unlock_LProp(); // Function MasterLobby_ABP.MasterLobby_ABP_C.AnimNotify_Lobby_Unlock_LProp
	void AnimNotify_Lobby_Unlock_RProp(); // Function MasterLobby_ABP.MasterLobby_ABP_C.AnimNotify_Lobby_Unlock_RProp
	void AnimNotify_Lobby_Lock_LProp(); // Function MasterLobby_ABP.MasterLobby_ABP_C.AnimNotify_Lobby_Lock_LProp
	void AnimNotify_Lobby_Lock_RProp(); // Function MasterLobby_ABP.MasterLobby_ABP_C.AnimNotify_Lobby_Lock_RProp
	void BlueprintInitializeAnimation(); // Function MasterLobby_ABP.MasterLobby_ABP_C.BlueprintInitializeAnimation
	void Set Skinned Local Parameters(struct TSet<struct FName> Keywords); // Function MasterLobby_ABP.MasterLobby_ABP_C.Set Skinned Local Parameters
	void ExecuteUbergraph_MasterLobby_ABP(int32_t EntryPoint); // Function MasterLobby_ABP.MasterLobby_ABP_C.ExecuteUbergraph_MasterLobby_ABP
};

