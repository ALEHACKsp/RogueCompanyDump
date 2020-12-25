// Class MovieSceneCapture.MovieSceneCaptureProtocolBase
// Size: 0x58 (Inherited: 0x28)
struct UMovieSceneCaptureProtocolBase : public UObject {
	char UnknownData_28[0x28]; // 0x28(0x28)
	enum class EMovieSceneCaptureProtocolState State; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)

	bool IsCapturing(); // Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
	enum class EMovieSceneCaptureProtocolState GetState(); // Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
};

// Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
// Size: 0x90 (Inherited: 0x58)
struct UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase {
	struct FString Filename; // 0x58(0x10)
	char UnknownData_68[0x28]; // 0x68(0x28)
};

// Class MovieSceneCapture.CompositionGraphCaptureProtocol
// Size: 0xc0 (Inherited: 0x58)
struct UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase {
	struct FCompositionGraphCapturePasses IncludeRenderPasses; // 0x58(0x10)
	bool bCaptureFramesInHDR; // 0x68(0x01)
	char UnknownData_69[0x3]; // 0x69(0x03)
	int32_t HDRCompressionQuality; // 0x6c(0x04)
	char CaptureGamut; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
	struct FSoftObjectPath PostProcessingMaterial; // 0x78(0x18)
	bool bDisableScreenPercentage; // 0x90(0x01)
	char UnknownData_91[0x7]; // 0x91(0x07)
	struct UMaterialInterface* PostProcessingMaterialPtr; // 0x98(0x08)
	char UnknownData_A0[0x20]; // 0xa0(0x20)
};

// Class MovieSceneCapture.FrameGrabberProtocol
// Size: 0x68 (Inherited: 0x58)
struct UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase {
	char UnknownData_58[0x10]; // 0x58(0x10)
};

// Class MovieSceneCapture.ImageSequenceProtocol
// Size: 0xd8 (Inherited: 0x68)
struct UImageSequenceProtocol : public UFrameGrabberProtocol {
	char UnknownData_68[0x70]; // 0x68(0x70)
};

// Class MovieSceneCapture.CompressedImageSequenceProtocol
// Size: 0xe0 (Inherited: 0xd8)
struct UCompressedImageSequenceProtocol : public UImageSequenceProtocol {
	int32_t CompressionQuality; // 0xd8(0x04)
	char UnknownData_DC[0x4]; // 0xdc(0x04)
};

// Class MovieSceneCapture.ImageSequenceProtocol_EXR
// Size: 0xe8 (Inherited: 0xd8)
struct UImageSequenceProtocol_EXR : public UImageSequenceProtocol {
	bool bCompressed; // 0xd8(0x01)
	char CaptureGamut; // 0xd9(0x01)
	char UnknownData_DA[0xe]; // 0xda(0x0e)
};

// Class MovieSceneCapture.MovieSceneCapture
// Size: 0x220 (Inherited: 0x28)
struct UMovieSceneCapture : public UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
	struct FSoftClassPath ImageCaptureProtocolType; // 0x38(0x18)
	struct FSoftClassPath AudioCaptureProtocolType; // 0x50(0x18)
	struct UMovieSceneImageCaptureProtocolBase* ImageCaptureProtocol; // 0x68(0x08)
	struct UMovieSceneAudioCaptureProtocolBase* AudioCaptureProtocol; // 0x70(0x08)
	struct FMovieSceneCaptureSettings Settings; // 0x78(0x70)
	bool bUseSeparateProcess; // 0xe8(0x01)
	bool bCloseEditorWhenCaptureStarts; // 0xe9(0x01)
	char UnknownData_EA[0x6]; // 0xea(0x06)
	struct FString AdditionalCommandLineArguments; // 0xf0(0x10)
	struct FString InheritedCommandLineArguments; // 0x100(0x10)
	char UnknownData_110[0x110]; // 0x110(0x110)

	void SetImageCaptureProtocolType(struct UMovieSceneCaptureProtocolBase* ProtocolType); // Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
	void SetAudioCaptureProtocolType(struct UMovieSceneCaptureProtocolBase* ProtocolType); // Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
	struct UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
	struct UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
};

// Class MovieSceneCapture.LevelCapture
// Size: 0x240 (Inherited: 0x220)
struct ULevelCapture : public UMovieSceneCapture {
	bool bAutoStartCapture; // 0x220(0x01)
	char UnknownData_221[0xb]; // 0x221(0x0b)
	struct FGuid PrerequisiteActorId; // 0x22c(0x10)
	char UnknownData_23C[0x4]; // 0x23c(0x04)
};

// Class MovieSceneCapture.UserDefinedCaptureProtocol
// Size: 0xd8 (Inherited: 0x58)
struct UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase {
	struct UWorld* World; // 0x58(0x08)
	char UnknownData_60[0x78]; // 0x60(0x78)

	void StopCapturingFinalPixels(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels
	void StartCapturingFinalPixels(struct FCapturedPixelsID StreamID); // Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
	void ResolveBuffer(struct UTexture* Buffer, struct FCapturedPixelsID BufferID); // Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
	void OnWarmUp(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp
	void OnTick(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick
	void OnStartCapture(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture
	bool OnSetup(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
	void OnPreTick(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick
	void OnPixelsReceived(struct FCapturedPixels Pixels, struct FCapturedPixelsID ID, struct FFrameMetrics FrameMetrics); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived
	void OnPauseCapture(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture
	void OnFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize
	void OnCaptureFrame(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame
	bool OnCanFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
	void OnBeginFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize
	struct FFrameMetrics GetCurrentFrameMetrics(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
	struct FString GenerateFilename(struct FFrameMetrics InFrameMetrics); // Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
};

// Class MovieSceneCapture.UserDefinedImageCaptureProtocol
// Size: 0xe0 (Inherited: 0xd8)
struct UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol {
	enum class EDesiredImageFormat Format; // 0xd8(0x01)
	bool bEnableCompression; // 0xd9(0x01)
	char UnknownData_DA[0x2]; // 0xda(0x02)
	int32_t CompressionQuality; // 0xdc(0x04)

	void WriteImageToDisk(struct FCapturedPixels PixelData, struct FCapturedPixelsID StreamID, struct FFrameMetrics FrameMetrics, bool bCopyImageData); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
	struct FString GenerateFilenameForCurrentFrame(); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
	struct FString GenerateFilenameForBuffer(struct UTexture* Buffer, struct FCapturedPixelsID StreamID); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
};

// Class MovieSceneCapture.VideoCaptureProtocol
// Size: 0x80 (Inherited: 0x68)
struct UVideoCaptureProtocol : public UFrameGrabberProtocol {
	bool bUseCompression; // 0x68(0x01)
	char UnknownData_69[0x3]; // 0x69(0x03)
	float CompressionQuality; // 0x6c(0x04)
	char UnknownData_70[0x10]; // 0x70(0x10)
};

