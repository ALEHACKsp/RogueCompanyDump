// WidgetBlueprintGeneratedClass LoggingInStatusTempClone.LoggingInStatusTempClone_C
// Size: 0x530 (Inherited: 0x4e0)
struct ULoggingInStatusTempClone_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UImage* background; // 0x4e8(0x08)
	struct UImage* Gradient; // 0x4f0(0x08)
	struct UImage* Image_106; // 0x4f8(0x08)
	struct UWBP_StandardButtonMedium_C* LogOffBtn; // 0x500(0x08)
	struct UTextBlock* WaitQueueMessage; // 0x508(0x08)
	struct UTextBlock* WaitQueueTitle; // 0x510(0x08)
	struct UOverlay* WaitQueueWrapper; // 0x518(0x08)
	struct UWBP_ThrobberShield_C* WBP_ThrobberShield; // 0x520(0x08)
	struct UPUMG_LoginDataFactory* LoginDataFactory; // 0x528(0x08)

	void SetWaitQueueMessage(struct FLoginQueueInfo LoginQueueInfo); // Function LoggingInStatusTempClone.LoggingInStatusTempClone_C.SetWaitQueueMessage
	void InitializeWidget(struct APUMG_HUD* HUD); // Function LoggingInStatusTempClone.LoggingInStatusTempClone_C.InitializeWidget
	void InitializeWidgetNavigation(); // Function LoggingInStatusTempClone.LoggingInStatusTempClone_C.InitializeWidgetNavigation
	void BndEvt__LogOffBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWidget* Widget); // Function LoggingInStatusTempClone.LoggingInStatusTempClone_C.BndEvt__LogOffBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void ExecuteUbergraph_LoggingInStatusTempClone(int32_t EntryPoint); // Function LoggingInStatusTempClone.LoggingInStatusTempClone_C.ExecuteUbergraph_LoggingInStatusTempClone
};

