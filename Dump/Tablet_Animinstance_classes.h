// AnimBlueprintGeneratedClass Tablet_Animinstance.Tablet_Animinstance_C
// Size: 0x832 (Inherited: 0x2c0)
struct UTablet_Animinstance_C : public UKSTabletAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x370(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x398(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x410(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x440(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x4b8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x4e8(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x560(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x590(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x608(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x638(0xb0)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x6e8(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x7f0(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x810(0x20)
	bool Is Fully Opened; // 0x830(0x01)
	bool Is Fully Closed; // 0x831(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function Tablet_Animinstance.Tablet_Animinstance_C.AnimGraph
	bool CheckFullyClosed(); // Function Tablet_Animinstance.Tablet_Animinstance_C.CheckFullyClosed
	bool CheckFullyOpened(); // Function Tablet_Animinstance.Tablet_Animinstance_C.CheckFullyOpened
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Tablet_Animinstance_AnimGraphNode_TransitionResult_C6030DE749FE3B92159BDE9A75441D4B(); // Function Tablet_Animinstance.Tablet_Animinstance_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Tablet_Animinstance_AnimGraphNode_TransitionResult_C6030DE749FE3B92159BDE9A75441D4B
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Tablet_Animinstance_AnimGraphNode_TransitionResult_663822E3415C75ED19679CB91FC56195(); // Function Tablet_Animinstance.Tablet_Animinstance_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Tablet_Animinstance_AnimGraphNode_TransitionResult_663822E3415C75ED19679CB91FC56195
	void AnimNotify_BecomeFullyOpened(); // Function Tablet_Animinstance.Tablet_Animinstance_C.AnimNotify_BecomeFullyOpened
	void AnimNotify_EndFullyOpened(); // Function Tablet_Animinstance.Tablet_Animinstance_C.AnimNotify_EndFullyOpened
	void AnimNotify_BecomeFullyClosed(); // Function Tablet_Animinstance.Tablet_Animinstance_C.AnimNotify_BecomeFullyClosed
	void AnimNotify_EndFullyClosed(); // Function Tablet_Animinstance.Tablet_Animinstance_C.AnimNotify_EndFullyClosed
	void ExecuteUbergraph_Tablet_Animinstance(int32_t EntryPoint); // Function Tablet_Animinstance.Tablet_Animinstance_C.ExecuteUbergraph_Tablet_Animinstance
};

