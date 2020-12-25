// Class DataTableSkinsCommon.DynamicSkinTable
// Size: 0x240 (Inherited: 0x28)
struct UDynamicSkinTable : public UObject {
	struct TArray<struct FDataTableInfo> ActiveDataTables; // 0x28(0x10)
	struct TArray<struct FDataTableInfo> InactiveDataTables; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFinishedAllPendingLoadsDel; // 0x48(0x10)
	char UnknownData_58[0x1d0]; // 0x58(0x1d0)
	struct TScriptInterface<None> SkinTagAsset; // 0x228(0x10)
	char UnknownData_238[0x8]; // 0x238(0x08)

	void RemoveDataTables(struct TArray<struct UDataTable*> InTables); // Function DataTableSkinsCommon.DynamicSkinTable.RemoveDataTables
	void RemoveDataTable(struct UDataTable* InTable); // Function DataTableSkinsCommon.DynamicSkinTable.RemoveDataTable
	bool IsTablePendingAssetLoad(); // Function DataTableSkinsCommon.DynamicSkinTable.IsTablePendingAssetLoad
	struct UTexture* GetTexture(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.DynamicSkinTable.GetTexture
	struct UStaticMesh* GetStaticMesh(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.DynamicSkinTable.GetStaticMesh
	struct USkeletalMesh* GetSkeletalMesh(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.DynamicSkinTable.GetSkeletalMesh
	struct USelectiveAkAudioEvent* GetSelectiveAudioEvent(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.DynamicSkinTable.GetSelectiveAudioEvent
	struct UPoseAsset* GetPoseAsset(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.DynamicSkinTable.GetPoseAsset
	struct UPhysicsAsset* GetPhysicsAsset(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.DynamicSkinTable.GetPhysicsAsset
	struct UParticleSystem* GetParticleSystem(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.DynamicSkinTable.GetParticleSystem
	struct FName GetNameField(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.DynamicSkinTable.GetNameField
	struct UMaterialInterface* GetMaterialInterface(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.DynamicSkinTable.GetMaterialInterface
	struct FLinearColor GetLinearColor(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.DynamicSkinTable.GetLinearColor
	int32_t GetInt(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.DynamicSkinTable.GetInt
	float GetFloat(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.DynamicSkinTable.GetFloat
	struct UObject* GetClass(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.DynamicSkinTable.GetClass
	bool GetBool(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.DynamicSkinTable.GetBool
	struct UAkAudioEvent* GetAudioEvent(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.DynamicSkinTable.GetAudioEvent
	struct UAnimSequence* GetAnimSequence(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.DynamicSkinTable.GetAnimSequence
	struct UAnimMontage* GetAnimMontage(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.DynamicSkinTable.GetAnimMontage
	struct UBlendSpace* GetAnimBlendSpace(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.DynamicSkinTable.GetAnimBlendSpace
	struct UAnimationAsset* GetAnimationAsset(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.DynamicSkinTable.GetAnimationAsset
	struct UAimOffsetBlendSpace* GetAnimAimOffset(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.DynamicSkinTable.GetAnimAimOffset
	void GetAllKeywords(struct TSet<struct FName> InOutKeywords); // Function DataTableSkinsCommon.DynamicSkinTable.GetAllKeywords
	void AddDataTableWithQuery(struct UDataTable* InTable, int32_t InPriority, struct FGameplayTagQuery InQuery); // Function DataTableSkinsCommon.DynamicSkinTable.AddDataTableWithQuery
	void AddDataTables(struct TArray<struct FDataTableInfo> InTableInfos); // Function DataTableSkinsCommon.DynamicSkinTable.AddDataTables
	void AddDataTable(struct UDataTable* InTable, int32_t InPriority); // Function DataTableSkinsCommon.DynamicSkinTable.AddDataTable
};

// Class DataTableSkinsCommon.MultiSkinObject
// Size: 0x1d0 (Inherited: 0x28)
struct UMultiSkinObject : public UObject {
	struct TArray<struct UMultiSkinObject*> ParentSkinnedObjects; // 0x28(0x10)
	struct TArray<struct FWeakObjectPtr<struct UMultiSkinObject>> ChildSkinnedObjects; // 0x38(0x10)
	struct TSet<struct FName> SubscribedKeywords; // 0x48(0x50)
	bool bSubscribeToAllKeywords; // 0x98(0x01)
	char UnknownData_99[0x7]; // 0x99(0x07)
	struct TSet<struct FName> SubscribedMaterialPrefixes; // 0xa0(0x50)
	char UnknownData_F0[0x18]; // 0xf0(0x18)
	struct FMulticastInlineDelegate OnFinishedAllPendingLoadsDel; // 0x108(0x10)
	char UnknownData_118[0x18]; // 0x118(0x18)
	struct TMap<int32_t, struct FDynamicSkinTableMapEntry> DynamicSkinTables; // 0x130(0x50)
	struct TMap<struct FName, struct FCachedRowsEntry> CachedRows; // 0x180(0x50)

	void UnsubscribeToKeywords(struct TArray<struct FName> InKeywords); // Function DataTableSkinsCommon.MultiSkinObject.UnsubscribeToKeywords
	void UnsubscribeToKeyword(struct FName InKeyword); // Function DataTableSkinsCommon.MultiSkinObject.UnsubscribeToKeyword
	void UnsubscribeToAllKeywords(); // Function DataTableSkinsCommon.MultiSkinObject.UnsubscribeToAllKeywords
	void SubscribeToKeywords(struct TArray<struct FName> InKeywords); // Function DataTableSkinsCommon.MultiSkinObject.SubscribeToKeywords
	void SubscribeToKeyword(struct FName InKeyword); // Function DataTableSkinsCommon.MultiSkinObject.SubscribeToKeyword
	void SubscribeToAllKeywords(); // Function DataTableSkinsCommon.MultiSkinObject.SubscribeToAllKeywords
	void RemoveParent(struct UMultiSkinObject* InParent); // Function DataTableSkinsCommon.MultiSkinObject.RemoveParent
	struct UTexture* GetTexture(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.MultiSkinObject.GetTexture
	struct UStaticMesh* GetStaticMesh(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.MultiSkinObject.GetStaticMesh
	struct USkeletalMesh* GetSkeletalMesh(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.MultiSkinObject.GetSkeletalMesh
	struct USelectiveAkAudioEvent* GetSelectiveAudioEvent(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.MultiSkinObject.GetSelectiveAudioEvent
	struct UPoseAsset* GetPoseAsset(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.MultiSkinObject.GetPoseAsset
	struct UPhysicsAsset* GetPhysicsAsset(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.MultiSkinObject.GetPhysicsAsset
	struct UParticleSystem* GetParticleSystem(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.MultiSkinObject.GetParticleSystem
	struct FName GetNameField(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.MultiSkinObject.GetNameField
	struct UMaterialInterface* GetMaterialInterface(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.MultiSkinObject.GetMaterialInterface
	struct FLinearColor GetLinearColor(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.MultiSkinObject.GetLinearColor
	int32_t GetInt(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.MultiSkinObject.GetInt
	float GetFloat(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.MultiSkinObject.GetFloat
	struct UObject* GetClass(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.MultiSkinObject.GetClass
	bool GetBool(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.MultiSkinObject.GetBool
	struct UAkAudioEvent* GetAudioEvent(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.MultiSkinObject.GetAudioEvent
	struct UAnimSequence* GetAnimSequence(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.MultiSkinObject.GetAnimSequence
	struct UAnimMontage* GetAnimMontage(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.MultiSkinObject.GetAnimMontage
	struct UBlendSpace* GetAnimBlendSpace(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.MultiSkinObject.GetAnimBlendSpace
	struct UAimOffsetBlendSpace* GetAnimAimOffset(struct FName RowName, int32_t Priority); // Function DataTableSkinsCommon.MultiSkinObject.GetAnimAimOffset
	void GetAllSkinKeywords(struct TSet<struct FName> InOutKeywords); // Function DataTableSkinsCommon.MultiSkinObject.GetAllSkinKeywords
	void AddParent(struct UMultiSkinObject* InParent); // Function DataTableSkinsCommon.MultiSkinObject.AddParent
};

// Class DataTableSkinsCommon.SkinnableSkeletalMeshComponent
// Size: 0xce0 (Inherited: 0xb90)
struct USkinnableSkeletalMeshComponent : public USkeletalMeshComponentBudgeted {
	bool bDelaySkinUpdatesUntilTick; // 0xb90(0x01)
	bool bSkinUpdateIsQueued; // 0xb91(0x01)
	char UnknownData_B92[0x2]; // 0xb92(0x02)
	struct FName SkeletalMeshKeyword; // 0xb94(0x08)
	char UnknownData_B9C[0x4]; // 0xb9c(0x04)
	struct USkeletalMesh* FailSafeSkeletalMesh; // 0xba0(0x08)
	struct FName PhysicsAssetKeyword; // 0xba8(0x08)
	struct UPhysicsAsset* FailSafePhysicsAsset; // 0xbb0(0x08)
	struct FName AnimInstanceClassKeyword; // 0xbb8(0x08)
	struct UAnimInstance* FailSafeAnimClass; // 0xbc0(0x08)
	struct UAnimInstance* LastSkinnedAnimClass; // 0xbc8(0x08)
	bool bForceAnimationUpdateOnSkinUpdate; // 0xbd0(0x01)
	char UnknownData_BD1[0x7]; // 0xbd1(0x07)
	struct UMultiSkinObject* SkinObject; // 0xbd8(0x08)
	struct FMulticastInlineDelegate OnAnimInitializedOnSkinnableMeshDel; // 0xbe0(0x10)
	char UnknownData_BF0[0x30]; // 0xbf0(0x30)
	bool bAllowMaterialSkinning; // 0xc20(0x01)
	char UnknownData_C21[0x7]; // 0xc21(0x07)
	struct TArray<struct FString> MaterialSkinningPrefixes; // 0xc28(0x10)
	struct TSet<struct FName> MaterialSkinningPrefixes_New; // 0xc38(0x50)
	char UnknownData_C88[0x48]; // 0xc88(0x48)
	int32_t ForcedLodModel_Skinned; // 0xcd0(0x04)
	char UnknownData_CD4[0xc]; // 0xcd4(0x0c)

	void StaticSetForcedLOD(struct USkinnedMeshComponent* InMeshComp, int32_t InForcedLOD); // Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.StaticSetForcedLOD
	void SetSkeletalMeshKeyword(struct FName InKeyword, struct USkeletalMesh* InFailSafeSkeletalMesh); // Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetSkeletalMeshKeyword
	void SetPhysicsAssetKeyword(struct FName InKeyword, struct UPhysicsAsset* InFailSafePhysicsAsset); // Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPhysicsAssetKeyword
	int32_t SetPersistentVectorParameterOnAllMaterials(struct FName ParameterName, struct FLinearColor ParameterValue); // Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentVectorParameterOnAllMaterials
	int32_t SetPersistentVectorParameter(int32_t MaterialSlot, struct FName ParameterName, struct FLinearColor ParameterValue); // Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentVectorParameter
	int32_t SetPersistentTextureParameterOnAllMaterials(struct FName ParameterName, struct UTexture* ParameterValue); // Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentTextureParameterOnAllMaterials
	int32_t SetPersistentTextureParameter(int32_t MaterialSlot, struct FName ParameterName, struct UTexture* ParameterValue); // Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentTextureParameter
	int32_t SetPersistentScalarParameterOnAllMaterials(struct FName ParameterName, float ParameterValue); // Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentScalarParameterOnAllMaterials
	int32_t SetPersistentScalarParameter(int32_t MaterialSlot, struct FName ParameterName, float ParameterValue); // Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetPersistentScalarParameter
	void SetForcedLOD_Skinned(int32_t InNewForcedLOD); // Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetForcedLOD_Skinned
	void SetAnimClassKeyword(struct FName InKeyword, struct UAnimInstance* InFailSafeAnimClass); // Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.SetAnimClassKeyword
	void RemovePersistentMaterialParameter(int32_t ParameterId); // Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.RemovePersistentMaterialParameter
	struct UMultiSkinObject* GetSkinObject(); // Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.GetSkinObject
	void ForwardAnimInitialized(); // Function DataTableSkinsCommon.SkinnableSkeletalMeshComponent.ForwardAnimInitialized
};

// Class DataTableSkinsCommon.SkinnableMergedMeshComponent
// Size: 0xd20 (Inherited: 0xce0)
struct USkinnableMergedMeshComponent : public USkinnableSkeletalMeshComponent {
	struct TArray<struct FName> CompositeSkeletalMeshKeywords; // 0xcd8(0x10)
	bool bAlwaysUseTheFailsafeMeshWhileMerging; // 0xce8(0x01)
	bool bDelayFullSkinUpdateUntilMeshMergingIsComplete; // 0xce9(0x01)
	struct USkeletalMesh* BestPlaceHolderMesh; // 0xcf0(0x08)
	bool bMergeMarkedComplete; // 0xcf8(0x01)
	char UnknownData_CFB[0x5]; // 0xcfb(0x05)
	struct USkeletalMesh* CachedMergeResult; // 0xd00(0x08)
	char UnknownData_D08[0x18]; // 0xd08(0x18)

	void SetSkeletalMeshKeywords(struct TArray<struct FName> InKeywords, struct USkeletalMesh* InFailSafeSkeletalMesh); // Function DataTableSkinsCommon.SkinnableMergedMeshComponent.SetSkeletalMeshKeywords
	void RemoveSkeletalMeshKeyword(struct FName InKeyword); // Function DataTableSkinsCommon.SkinnableMergedMeshComponent.RemoveSkeletalMeshKeyword
	void AddSkeletalMeshKeyword(struct FName InKeyword); // Function DataTableSkinsCommon.SkinnableMergedMeshComponent.AddSkeletalMeshKeyword
};

// Class DataTableSkinsCommon.SkinObjectManagerComponent
// Size: 0x150 (Inherited: 0xb0)
struct USkinObjectManagerComponent : public UActorComponent {
	struct TMap<struct FName, struct UMultiSkinObject*> SkinObjects; // 0xb0(0x50)
	struct TSet<struct UMultiSkinObject*> SkinObjectsSet; // 0x100(0x50)
};

