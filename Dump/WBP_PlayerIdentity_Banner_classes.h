// WidgetBlueprintGeneratedClass WBP_PlayerIdentity_Banner.WBP_PlayerIdentity_Banner_C
// Size: 0x4f0 (Inherited: 0x4e0)
struct UWBP_PlayerIdentity_Banner_C : public UKSWidget {
	struct UWBP_AsyncIcon_C* BannerIcon; // 0x4e0(0x08)
	struct UWBP_AsyncIcon_C* BorderIcon; // 0x4e8(0x08)

	void HideBorder(); // Function WBP_PlayerIdentity_Banner.WBP_PlayerIdentity_Banner_C.HideBorder
	void SetBorder(struct TSoftObjectPtr<struct UTexture2D> Texture); // Function WBP_PlayerIdentity_Banner.WBP_PlayerIdentity_Banner_C.SetBorder
	void SetBanner(struct TSoftObjectPtr<struct UTexture2D> Texture); // Function WBP_PlayerIdentity_Banner.WBP_PlayerIdentity_Banner_C.SetBanner
};

