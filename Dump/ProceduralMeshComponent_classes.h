// Class ProceduralMeshComponent.ProceduralMeshComponent
// Size: 0x4c0 (Inherited: 0x460)
struct UProceduralMeshComponent : public UMeshComponent {
	bool bUseComplexAsSimpleCollision; // 0x460(0x01)
	bool bUseAsyncCooking; // 0x461(0x01)
	char UnknownData_462[0x6]; // 0x462(0x06)
	struct UBodySetup* ProcMeshBodySetup; // 0x468(0x08)
	struct TArray<struct FProcMeshSection> ProcMeshSections; // 0x470(0x10)
	struct TArray<struct FKConvexElem> CollisionConvexElems; // 0x480(0x10)
	struct FBoxSphereBounds LocalBounds; // 0x490(0x1c)
	char UnknownData_4AC[0x4]; // 0x4ac(0x04)
	struct TArray<struct UBodySetup*> AsyncBodySetupQueue; // 0x4b0(0x10)

	void UpdateMeshSection_LinearColor(int32_t SectionIndex, struct TArray<struct FVector> Vertices, struct TArray<struct FVector> Normals, struct TArray<struct FVector2D> UV0, struct TArray<struct FVector2D> UV1, struct TArray<struct FVector2D> UV2, struct TArray<struct FVector2D> UV3, struct TArray<struct FLinearColor> VertexColors, struct TArray<struct FProcMeshTangent> Tangents); // Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
	void UpdateMeshSection(int32_t SectionIndex, struct TArray<struct FVector> Vertices, struct TArray<struct FVector> Normals, struct TArray<struct FVector2D> UV0, struct TArray<struct FColor> VertexColors, struct TArray<struct FProcMeshTangent> Tangents); // Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
	void SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility); // Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
	bool IsMeshSectionVisible(int32_t SectionIndex); // Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
	int32_t GetNumSections(); // Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
	void CreateMeshSection_LinearColor(int32_t SectionIndex, struct TArray<struct FVector> Vertices, struct TArray<int32_t> Triangles, struct TArray<struct FVector> Normals, struct TArray<struct FVector2D> UV0, struct TArray<struct FVector2D> UV1, struct TArray<struct FVector2D> UV2, struct TArray<struct FVector2D> UV3, struct TArray<struct FLinearColor> VertexColors, struct TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision); // Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
	void CreateMeshSection(int32_t SectionIndex, struct TArray<struct FVector> Vertices, struct TArray<int32_t> Triangles, struct TArray<struct FVector> Normals, struct TArray<struct FVector2D> UV0, struct TArray<struct FColor> VertexColors, struct TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision); // Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
	void ClearMeshSection(int32_t SectionIndex); // Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
	void ClearCollisionConvexMeshes(); // Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes
	void ClearAllMeshSections(); // Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections
	void AddCollisionConvexMesh(struct TArray<struct FVector> ConvexVerts); // Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
};

