// Class LiveLinkComponents.LiveLinkControllerBase
// Size: 0x30 (Inherited: 0x28)
struct ULiveLinkControllerBase : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class LiveLinkComponents.LiveLinkComponentController
// Size: 0x158 (Inherited: 0xb0)
struct ULiveLinkComponentController : public UActorComponent {
	struct FLiveLinkSubjectRepresentation SubjectRepresentation; // 0xb0(0x10)
	struct TMap<struct ULiveLinkRole*, struct ULiveLinkControllerBase*> ControllerMap; // 0xc0(0x50)
	bool bUpdateInEditor; // 0x110(0x01)
	char UnknownData_111[0x7]; // 0x111(0x07)
	struct FMulticastInlineDelegate OnLiveLinkUpdated; // 0x118(0x10)
	struct FComponentReference ComponentToControl; // 0x128(0x28)
	char UnknownData_150[0x8]; // 0x150(0x08)
};

// Class LiveLinkComponents.LiveLinkComponentSettings
// Size: 0x78 (Inherited: 0x28)
struct ULiveLinkComponentSettings : public UObject {
	struct TMap<struct ULiveLinkRole*, struct ULiveLinkControllerBase*> DefaultControllerForRole; // 0x28(0x50)
};

// Class LiveLinkComponents.LiveLinkTransformController
// Size: 0x38 (Inherited: 0x30)
struct ULiveLinkTransformController : public ULiveLinkControllerBase {
	struct FLiveLinkTransformControllerData TransformData; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

