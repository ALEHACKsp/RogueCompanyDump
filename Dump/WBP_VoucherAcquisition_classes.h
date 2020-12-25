// WidgetBlueprintGeneratedClass WBP_VoucherAcquisition.WBP_VoucherAcquisition_C
// Size: 0x584 (Inherited: 0x4e0)
struct UWBP_VoucherAcquisition_C : public UKSVoucherAcquisition {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* OnShow; // 0x4e8(0x08)
	struct UWBP_StandardButtonMedium_C* ClaimButton; // 0x4f0(0x08)
	struct UKSAsyncImage* DLCImage; // 0x4f8(0x08)
	struct UScaleBox* FullSplashBG; // 0x500(0x08)
	struct UImage* Image; // 0x508(0x08)
	struct UImage* Image_139; // 0x510(0x08)
	struct UHorizontalBox* MultipleVoucherContainer; // 0x518(0x08)
	struct UScrollBox* MultipleVoucherScrollBox; // 0x520(0x08)
	struct UOverlay* Overlay_52; // 0x528(0x08)
	struct UCanvasPanel* RedeemingOverlay; // 0x530(0x08)
	struct UTextBlock* Subtitle; // 0x538(0x08)
	struct UThrobber* Throbber_164; // 0x540(0x08)
	struct UWBP_Header1_C* WBP_Header1; // 0x548(0x08)
	struct UWBP_ModalPopupContainer_C* WBP_ModalPopupContainer; // 0x550(0x08)
	struct UPUMG_StoreItem* DLCVoucher; // 0x558(0x08)
	bool IsRedeeming; // 0x560(0x01)
	char UnknownData_561[0x7]; // 0x561(0x07)
	struct UAkAudioEvent* ShowVoucherAcquisitionSFX; // 0x568(0x08)
	struct TArray<struct UPUMG_StoreItem*> VoucherItems; // 0x570(0x10)
	float ScrollDirection; // 0x580(0x04)

	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.OnKeyDown
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.OnKeyUp
	void DisplayVoucherAcquisitions(); // Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.DisplayVoucherAcquisitions
	bool AttemptGetAcquisition(); // Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.AttemptGetAcquisition
	void OnRedeemDLC(struct UWidget* Widget); // Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.OnRedeemDLC
	bool NavigateBack(); // Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.NavigateBack
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.Tick
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.InitializeWidget
	void InitializeWidgetNavigation(); // Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.InitializeWidgetNavigation
	void OnShown(); // Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.OnShown
	void PreConstruct(bool IsDesignTime); // Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.PreConstruct
	void ExecuteUbergraph_WBP_VoucherAcquisition(int32_t EntryPoint); // Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.ExecuteUbergraph_WBP_VoucherAcquisition
};

