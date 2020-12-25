// WidgetBlueprintGeneratedClass WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C
// Size: 0x580 (Inherited: 0x4e0)
struct UWBP_PlayerIdentity_Full_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UVerticalBox* LargeAvatarWrapper; // 0x4e8(0x08)
	struct UWidgetSwitcher* NameLoadingSwitcher; // 0x4f0(0x08)
	struct UScaleBox* NameLoadingWrapper; // 0x4f8(0x08)
	struct UTextBlock* PlayerNameText; // 0x500(0x08)
	struct UWBP_ThrobberHorizontal_C* PlayerNameThrobber; // 0x508(0x08)
	struct UHorizontalBox* PlayerNameWrapper; // 0x510(0x08)
	struct UWBP_RogueMasteryPortrait_C* RogueMasteryPortrait; // 0x518(0x08)
	struct UCanvasPanel* RogueMasteryWrapper; // 0x520(0x08)
	struct USizeBox* SmallAvatarWrapper; // 0x528(0x08)
	struct USizeBox* TitleWrapper; // 0x530(0x08)
	struct UWBP_PlayerIdentity_Avatar_C* WBP_PlayerIdentity_Avatar; // 0x538(0x08)
	struct UWBP_PlayerIdentity_Avatar_C* WBP_PlayerIdentity_Avatar_339; // 0x540(0x08)
	struct UWBP_PlayerIdentity_Banner_C* WBP_PlayerIdentity_Banner; // 0x548(0x08)
	struct UWBP_PlayerIdentity_PlayerLevel_C* WBP_PlayerIdentity_PlayerLevel; // 0x550(0x08)
	struct UWBP_PlayerIdentity_Title_C* WBP_PlayerIdentity_Title; // 0x558(0x08)
	char LayoutType; // 0x560(0x01)
	char UnknownData_561[0x7]; // 0x561(0x07)
	struct UKSPlayerInfo* Bound Player Info; // 0x568(0x08)
	char NameHorizontalAlignment; // 0x570(0x01)
	char UnknownData_571[0x7]; // 0x571(0x07)
	struct AKSPlayerState* Bound Player State; // 0x578(0x08)

	void Populate Lobby Player(struct UKSPlayerInfo* KS Player Info); // Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Populate Lobby Player
	void Update Title(bool Use Game State Data); // Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Update Title
	void Set From Player Info(struct UKSPlayerInfo* KS Player Info, bool Use Game State Data); // Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Set From Player Info
	void Update Border(bool Use Game State Data); // Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Update Border
	void Update Banner(bool Use Game State Data); // Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Update Banner
	void Update Avatar(bool Use Game State Data); // Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Update Avatar
	void Update Level(); // Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Update Level
	void Update Current Name(); // Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Update Current Name
	void Populate Game Player(struct AKSPlayerState* KSPlayerState); // Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Populate Game Player
	void Apply Layout Type(char Layout Type); // Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Apply Layout Type
	void SetInitialView(); // Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.SetInitialView
	void PreConstruct(bool IsDesignTime); // Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.PreConstruct
	void Construct(); // Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.Construct
	void ExecuteUbergraph_WBP_PlayerIdentity_Full(int32_t EntryPoint); // Function WBP_PlayerIdentity_Full.WBP_PlayerIdentity_Full_C.ExecuteUbergraph_WBP_PlayerIdentity_Full
};

