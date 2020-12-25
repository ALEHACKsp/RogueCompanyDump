// WidgetBlueprintGeneratedClass WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C
// Size: 0x549 (Inherited: 0x520)
struct UWBP_ToastNotification_Manager_C : public UKSToastNotificationWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UVerticalBox* ChallengeNotificationContainer; // 0x528(0x08)
	struct UVerticalBox* NotificationContainer; // 0x530(0x08)
	struct TArray<struct FText> LocalizeTexts; // 0x538(0x10)
	bool CanDisplaySocialToasts; // 0x548(0x01)

	void PushAwardsEarnedInMatch(); // Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.PushAwardsEarnedInMatch
	void DisplayChallengeToast(struct UWBP_Toast2_C* Toast); // Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.DisplayChallengeToast
	void DisplayToast(struct UWBP_ToastNotifcation_Entry_C* Toast); // Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.DisplayToast
	void OnToastNotificationReceived(struct FToastData ToastData); // Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.OnToastNotificationReceived
	void HandleToastNotificationRemove(struct UKSWidget* ToastNotification); // Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.HandleToastNotificationRemove
	void OnToastIntroAnimFinished(); // Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.OnToastIntroAnimFinished
	void Construct(); // Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.Construct
	void HandleChallengeToastNotificationRemove(struct UKSWidget* ToastNotification); // Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.HandleChallengeToastNotificationRemove
	void ExecuteUbergraph_WBP_ToastNotification_Manager(int32_t EntryPoint); // Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.ExecuteUbergraph_WBP_ToastNotification_Manager
};

