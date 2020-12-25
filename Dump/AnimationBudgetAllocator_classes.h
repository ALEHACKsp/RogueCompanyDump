// Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
// Size: 0xb90 (Inherited: 0xb70)
struct USkeletalMeshComponentBudgeted : public USkeletalMeshComponent {
	char UnknownData_B70[0x18]; // 0xb70(0x18)
	char bAutoRegisterWithBudgetAllocator : 1; // 0xb88(0x01)
	char bAutoCalculateSignificance : 1; // 0xb88(0x01)
	char bShouldUseActorRenderedFlag : 1; // 0xb88(0x01)
	char UnknownData_B88_3 : 5; // 0xb88(0x01)
	char UnknownData_B89[0x7]; // 0xb89(0x07)

	void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator); // Function AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator
};

