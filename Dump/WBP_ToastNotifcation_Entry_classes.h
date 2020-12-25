// WidgetBlueprintGeneratedClass WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C
// Size: 0x5b0 (Inherited: 0x4e0)
struct UWBP_ToastNotifcation_Entry_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* OffsetY; // 0x4e8(0x08)
	struct UWidgetAnimation* Outro; // 0x4f0(0x08)
	struct UWidgetAnimation* Wait; // 0x4f8(0x08)
	struct UWidgetAnimation* Intro; // 0x500(0x08)
	struct UImage* AnimFade; // 0x508(0x08)
	struct UImage* AnimSwatch; // 0x510(0x08)
	struct UImage* ColorSwatch; // 0x518(0x08)
	struct UImage* Glow; // 0x520(0x08)
	struct UImage* Icon; // 0x528(0x08)
	struct UTextBlock* Message; // 0x530(0x08)
	struct FToastData ToastData; // 0x538(0x58)
	struct FMulticastInlineDelegate OnRemoveToastNotification; // 0x590(0x10)
	struct FMulticastInlineDelegate FinishedIntroAnimation; // 0x5a0(0x10)

	void SetViewStyle(enum class EToastCategory ToastCategory); // Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.SetViewStyle
	void Construct(); // Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.Construct
	void PlayWaitAnimation(); // Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.PlayWaitAnimation
	void PlayOutroAnimation(); // Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.PlayOutroAnimation
	void HandleOutroAnimFinished(); // Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.HandleOutroAnimFinished
	void ExecuteUbergraph_WBP_ToastNotifcation_Entry(int32_t EntryPoint); // Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.ExecuteUbergraph_WBP_ToastNotifcation_Entry
	void FinishedIntroAnimation__DelegateSignature(); // Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.FinishedIntroAnimation__DelegateSignature
	void OnRemoveToastNotification__DelegateSignature(struct UKSWidget* ToastWidget); // Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.OnRemoveToastNotification__DelegateSignature
};

