// WidgetBlueprintGeneratedClass WBP_Notification_Icon.WBP_Notification_Icon_C
// Size: 0x4b0 (Inherited: 0x4a0)
struct UWBP_Notification_Icon_C : public UPUMG_Widget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a0(0x08)
	struct UWBP_CallToAction_C* WBP_CallToAction; // 0x4a8(0x08)

	void Construct(); // Function WBP_Notification_Icon.WBP_Notification_Icon_C.Construct
	void OnShown(); // Function WBP_Notification_Icon.WBP_Notification_Icon_C.OnShown
	void OnHide(); // Function WBP_Notification_Icon.WBP_Notification_Icon_C.OnHide
	void HandleShown(); // Function WBP_Notification_Icon.WBP_Notification_Icon_C.HandleShown
	void HandleHide(); // Function WBP_Notification_Icon.WBP_Notification_Icon_C.HandleHide
	void ExecuteUbergraph_WBP_Notification_Icon(int32_t EntryPoint); // Function WBP_Notification_Icon.WBP_Notification_Icon_C.ExecuteUbergraph_WBP_Notification_Icon
};

