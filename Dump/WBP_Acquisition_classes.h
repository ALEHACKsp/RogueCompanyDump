// WidgetBlueprintGeneratedClass WBP_Acquisition.WBP_Acquisition_C
// Size: 0x5a8 (Inherited: 0x4e0)
struct UWBP_Acquisition_C : public UKSPurchaseConfirmationWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* OnShow; // 0x4e8(0x08)
	struct USizeBox* 1pxBar; // 0x4f0(0x08)
	struct USizeBox* 1pxBar_2; // 0x4f8(0x08)
	struct UWBP_Header1_C* AcquireTypeHeader; // 0x500(0x08)
	struct UImage* BottomBar; // 0x508(0x08)
	struct UWrapBox* BundleContents; // 0x510(0x08)
	struct UScrollBox* contents; // 0x518(0x08)
	struct UImage* Gradient; // 0x520(0x08)
	struct UWBP_ItemInfoContainer_Centered_C* ItemInfoContainer; // 0x528(0x08)
	struct UWBP_AsyncIcon_C* ItemPreview2D; // 0x530(0x08)
	struct UBorder* RarityElementWrapper; // 0x538(0x08)
	struct UImage* ScanLines; // 0x540(0x08)
	struct UTextBlock* Title; // 0x548(0x08)
	struct UOverlay* TitleDisplay; // 0x550(0x08)
	struct UImage* TopBar; // 0x558(0x08)
	struct UTextBlock* UnlockedItemText; // 0x560(0x08)
	struct UPUMG_StoreItem* StoreItem; // 0x568(0x08)
	struct AKSLobbyCharacter* AcquisitionCharacter; // 0x570(0x08)
	struct TArray<struct UWBP_KSCosmeticItemDisplay_C*> AcquisitionItemWidgets; // 0x578(0x10)
	bool NewVar_1; // 0x588(0x01)
	char UnknownData_589[0x7]; // 0x589(0x07)
	struct UAkAudioEvent* ShowAcquisitionSFX; // 0x590(0x08)
	struct UKSSkinBundle* CurrentSkin; // 0x598(0x08)
	struct UKSJobItem* CurrentCharacterJob; // 0x5a0(0x08)

	void SetTitle(struct UKSItem* KSItem); // Function WBP_Acquisition.WBP_Acquisition_C.SetTitle
	void Set Preview Image(struct UKSItem* KSItem); // Function WBP_Acquisition.WBP_Acquisition_C.Set Preview Image
	void GetJobForItem(struct UKSItem* Item, struct UKSJobItem* Character); // Function WBP_Acquisition.WBP_Acquisition_C.GetJobForItem
	void TrySetPreferredDefaultSkin(struct AKSLobbyCharacter* Character, struct UKSItem* Item); // Function WBP_Acquisition.WBP_Acquisition_C.TrySetPreferredDefaultSkin
	void SetEmote(struct UKSItem* EmoteItem); // Function WBP_Acquisition.WBP_Acquisition_C.SetEmote
	void OnGamepadItemHover(struct UPUMG_StoreItem* Item, struct UKSWidget* Widget); // Function WBP_Acquisition.WBP_Acquisition_C.OnGamepadItemHover
	void DisplayStoreItem(struct UPUMG_StoreItem* StoreItem); // Function WBP_Acquisition.WBP_Acquisition_C.DisplayStoreItem
	void DisplayModelOrImageForItem(struct UKSItem* Item); // Function WBP_Acquisition.WBP_Acquisition_C.DisplayModelOrImageForItem
	void SetSkinOrRogueModel(struct UKSSkinBundle* SkinBundle); // Function WBP_Acquisition.WBP_Acquisition_C.SetSkinOrRogueModel
	void ClearModels(); // Function WBP_Acquisition.WBP_Acquisition_C.ClearModels
	void SetAcquisitionDisplay(struct UKSAcquisition* Acquistion); // Function WBP_Acquisition.WBP_Acquisition_C.SetAcquisitionDisplay
	bool NavigateBack(); // Function WBP_Acquisition.WBP_Acquisition_C.NavigateBack
	void PreConstruct(bool IsDesignTime); // Function WBP_Acquisition.WBP_Acquisition_C.PreConstruct
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_Acquisition.WBP_Acquisition_C.InitializeWidget
	void OnBackPrompt(); // Function WBP_Acquisition.WBP_Acquisition_C.OnBackPrompt
	void InitializeWidgetNavigation(); // Function WBP_Acquisition.WBP_Acquisition_C.InitializeWidgetNavigation
	void OnShown(); // Function WBP_Acquisition.WBP_Acquisition_C.OnShown
	void OnHide(); // Function WBP_Acquisition.WBP_Acquisition_C.OnHide
	void ExecuteUbergraph_WBP_Acquisition(int32_t EntryPoint); // Function WBP_Acquisition.WBP_Acquisition_C.ExecuteUbergraph_WBP_Acquisition
};

