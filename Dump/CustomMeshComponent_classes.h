// Class CustomMeshComponent.CustomMeshComponent
// Size: 0x470 (Inherited: 0x460)
struct UCustomMeshComponent : public UMeshComponent {
	char UnknownData_460[0x10]; // 0x460(0x10)

	bool SetCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle> Triangles); // Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
	void ClearCustomMeshTriangles(); // Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles
	void AddCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle> Triangles); // Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
};

