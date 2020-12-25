// Class GeometryCache.GeometryCache
// Size: 0x68 (Inherited: 0x28)
struct UGeometryCache : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct TArray<struct UMaterialInterface*> Materials; // 0x30(0x10)
	struct TArray<struct UGeometryCacheTrack*> Tracks; // 0x40(0x10)
	char UnknownData_50[0x10]; // 0x50(0x10)
	int32_t StartFrame; // 0x60(0x04)
	int32_t EndFrame; // 0x64(0x04)
};

// Class GeometryCache.GeometryCacheActor
// Size: 0x228 (Inherited: 0x220)
struct AGeometryCacheActor : public AActor {
	struct UGeometryCacheComponent* GeometryCacheComponent; // 0x220(0x08)

	struct UGeometryCacheComponent* GetGeometryCacheComponent(); // Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
};

// Class GeometryCache.GeometryCacheCodecBase
// Size: 0x38 (Inherited: 0x28)
struct UGeometryCacheCodecBase : public UObject {
	struct TArray<int32_t> TopologyRanges; // 0x28(0x10)
};

// Class GeometryCache.GeometryCacheCodecRaw
// Size: 0x40 (Inherited: 0x38)
struct UGeometryCacheCodecRaw : public UGeometryCacheCodecBase {
	int32_t DummyProperty; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class GeometryCache.GeometryCacheCodecV1
// Size: 0x40 (Inherited: 0x38)
struct UGeometryCacheCodecV1 : public UGeometryCacheCodecBase {
	char UnknownData_38[0x8]; // 0x38(0x08)
};

// Class GeometryCache.GeometryCacheComponent
// Size: 0x4b0 (Inherited: 0x460)
struct UGeometryCacheComponent : public UMeshComponent {
	struct UGeometryCache* GeometryCache; // 0x458(0x08)
	bool bRunning; // 0x460(0x01)
	bool bLooping; // 0x461(0x01)
	float StartTimeOffset; // 0x464(0x04)
	float PlaybackSpeed; // 0x468(0x04)
	int32_t NumTracks; // 0x46c(0x04)
	float ElapsedTime; // 0x470(0x04)
	char UnknownData_47A[0x2a]; // 0x47a(0x2a)
	float Duration; // 0x4a4(0x04)
	bool bManualTick; // 0x4a8(0x01)
	char UnknownData_4A9[0x7]; // 0x4a9(0x07)

	void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping); // Function GeometryCache.GeometryCacheComponent.TickAtThisTime
	void Stop(); // Function GeometryCache.GeometryCacheComponent.Stop
	void SetStartTimeOffset(float NewStartTimeOffset); // Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset
	void SetPlaybackSpeed(float NewPlaybackSpeed); // Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
	void SetLooping(bool bNewLooping); // Function GeometryCache.GeometryCacheComponent.SetLooping
	bool SetGeometryCache(struct UGeometryCache* NewGeomCache); // Function GeometryCache.GeometryCacheComponent.SetGeometryCache
	void PlayReversedFromEnd(); // Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
	void PlayReversed(); // Function GeometryCache.GeometryCacheComponent.PlayReversed
	void PlayFromStart(); // Function GeometryCache.GeometryCacheComponent.PlayFromStart
	void Play(); // Function GeometryCache.GeometryCacheComponent.Play
	void Pause(); // Function GeometryCache.GeometryCacheComponent.Pause
	bool IsPlayingReversed(); // Function GeometryCache.GeometryCacheComponent.IsPlayingReversed
	bool IsPlaying(); // Function GeometryCache.GeometryCacheComponent.IsPlaying
	bool IsLooping(); // Function GeometryCache.GeometryCacheComponent.IsLooping
	float GetStartTimeOffset(); // Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset
	float GetPlaybackSpeed(); // Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
	float GetPlaybackDirection(); // Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection
	int32_t GetNumberOfFrames(); // Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames
	float GetDuration(); // Function GeometryCache.GeometryCacheComponent.GetDuration
	float GetAnimationTime(); // Function GeometryCache.GeometryCacheComponent.GetAnimationTime
};

// Class GeometryCache.GeometryCacheTrack
// Size: 0x58 (Inherited: 0x28)
struct UGeometryCacheTrack : public UObject {
	float Duration; // 0x28(0x04)
	char UnknownData_2C[0x2c]; // 0x2c(0x2c)
};

// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// Size: 0x80 (Inherited: 0x58)
struct UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack {
	uint32_t NumMeshSamples; // 0x58(0x04)
	char UnknownData_5C[0x24]; // 0x5c(0x24)

	void AddMeshSample(struct FGeometryCacheMeshData MeshData, float SampleTime); // Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
};

// Class GeometryCache.GeometryCacheTrackStreamable
// Size: 0xd0 (Inherited: 0x58)
struct UGeometryCacheTrackStreamable : public UGeometryCacheTrack {
	struct UGeometryCacheCodecBase* Codec; // 0x58(0x08)
	char UnknownData_60[0x68]; // 0x60(0x68)
	float StartSampleTime; // 0xc8(0x04)
	char UnknownData_CC[0x4]; // 0xcc(0x04)
};

// Class GeometryCache.GeometryCacheTrack_TransformAnimation
// Size: 0x100 (Inherited: 0x58)
struct UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack {
	char UnknownData_58[0xa8]; // 0x58(0xa8)

	void SetMesh(struct FGeometryCacheMeshData NewMeshData); // Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
};

// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// Size: 0x100 (Inherited: 0x58)
struct UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack {
	char UnknownData_58[0xa8]; // 0x58(0xa8)

	void SetMesh(struct FGeometryCacheMeshData NewMeshData); // Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
};

