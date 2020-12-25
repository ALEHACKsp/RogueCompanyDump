// Class LiveLinkMovieScene.MovieSceneLiveLinkSection
// Size: 0x220 (Inherited: 0xe0)
struct UMovieSceneLiveLinkSection : public UMovieSceneSection {
	struct FLiveLinkSubjectPreset SubjectPreset; // 0xe0(0x38)
	struct TArray<bool> ChannelMask; // 0x118(0x10)
	struct TArray<struct UMovieSceneLiveLinkSubSection*> SubSections; // 0x128(0x10)
	char UnknownData_138[0x10]; // 0x138(0x10)
	struct FName SubjectName; // 0x148(0x08)
	struct FLiveLinkFrameData TemplateToPush; // 0x150(0x90)
	struct FLiveLinkRefSkeleton RefSkeleton; // 0x1e0(0x20)
	struct TArray<struct FName> CurveNames; // 0x200(0x10)
	struct TArray<struct FMovieSceneFloatChannel> PropertyFloatChannels; // 0x210(0x10)
};

// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSection
// Size: 0x50 (Inherited: 0x28)
struct UMovieSceneLiveLinkSubSection : public UObject {
	struct FLiveLinkSubSectionData SubSectionData; // 0x28(0x10)
	struct ULiveLinkRole* SubjectRole; // 0x38(0x08)
	char UnknownData_40[0x10]; // 0x40(0x10)
};

// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionAnimation
// Size: 0x60 (Inherited: 0x50)
struct UMovieSceneLiveLinkSubSectionAnimation : public UMovieSceneLiveLinkSubSection {
	char UnknownData_50[0x10]; // 0x50(0x10)
};

// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionBasicRole
// Size: 0x60 (Inherited: 0x50)
struct UMovieSceneLiveLinkSubSectionBasicRole : public UMovieSceneLiveLinkSubSection {
	char UnknownData_50[0x10]; // 0x50(0x10)
};

// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionProperties
// Size: 0x60 (Inherited: 0x50)
struct UMovieSceneLiveLinkSubSectionProperties : public UMovieSceneLiveLinkSubSection {
	char UnknownData_50[0x10]; // 0x50(0x10)
};

// Class LiveLinkMovieScene.MovieSceneLiveLinkTrack
// Size: 0x90 (Inherited: 0x88)
struct UMovieSceneLiveLinkTrack : public UMovieScenePropertyTrack {
	struct ULiveLinkRole* TrackRole; // 0x88(0x08)
};

