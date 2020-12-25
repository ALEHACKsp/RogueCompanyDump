// WidgetBlueprintGeneratedClass WBP_PlatformIcon.WBP_PlatformIcon_C
// Size: 0x4f1 (Inherited: 0x4e0)
struct UWBP_PlatformIcon_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UImage* Icon; // 0x4e8(0x08)
	enum class EKSPlatformType Platform; // 0x4f0(0x01)

	void SetPlatform(enum class EKSPlatformType Platform); // Function WBP_PlatformIcon.WBP_PlatformIcon_C.SetPlatform
	void PreConstruct(bool IsDesignTime); // Function WBP_PlatformIcon.WBP_PlatformIcon_C.PreConstruct
	void Construct(); // Function WBP_PlatformIcon.WBP_PlatformIcon_C.Construct
	void ExecuteUbergraph_WBP_PlatformIcon(int32_t EntryPoint); // Function WBP_PlatformIcon.WBP_PlatformIcon_C.ExecuteUbergraph_WBP_PlatformIcon
};

