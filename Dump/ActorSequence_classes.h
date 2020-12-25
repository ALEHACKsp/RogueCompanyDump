// Class ActorSequence.ActorSequence
// Size: 0x370 (Inherited: 0x348)
struct UActorSequence : public UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x348(0x08)
	struct FActorSequenceObjectReferenceMap ObjectReferences; // 0x350(0x20)
};

// Class ActorSequence.ActorSequenceComponent
// Size: 0xd8 (Inherited: 0xb0)
struct UActorSequenceComponent : public UActorComponent {
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0xb0(0x14)
	char UnknownData_C4[0x4]; // 0xc4(0x04)
	struct UActorSequence* Sequence; // 0xc8(0x08)
	struct UActorSequencePlayer* SequencePlayer; // 0xd0(0x08)
};

