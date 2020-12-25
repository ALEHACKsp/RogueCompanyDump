// WidgetBlueprintGeneratedClass WBP_LaunchCinematic.WBP_LaunchCinematic_C
// Size: 0x5b0 (Inherited: 0x538)
struct UWBP_LaunchCinematic_C : public UKSMediaPlayerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x538(0x08)
	struct UWidgetAnimation* FadeOutThrobber; // 0x540(0x08)
	struct UWidgetAnimation* FadeInThrobber; // 0x548(0x08)
	struct UWidgetAnimation* FadeOutMediaTexture; // 0x550(0x08)
	struct UWidgetAnimation* FadeInMediaTexture; // 0x558(0x08)
	struct UImage* CinematicMediaTexture; // 0x560(0x08)
	struct UGamepadPromptBasic_C* GamepadPromptBasic; // 0x568(0x08)
	struct UButton* HitTarget; // 0x570(0x08)
	struct UWBP_ThrobberShield_C* WBP_ThrobberShield; // 0x578(0x08)
	struct UMediaPlayer* MediaPlayer; // 0x580(0x08)
	struct FText Msg_SkipPrompt; // 0x588(0x18)
	struct UAkAudioEvent* AudioStartEvent; // 0x5a0(0x08)
	struct UAkAudioEvent* AudioStopEvent; // 0x5a8(0x08)

	bool IsActiveView(); // Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.IsActiveView
	void StopVideoPlayback(); // Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.StopVideoPlayback
	void StopAudioPlayback(); // Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.StopAudioPlayback
	void HandleOnClicked(); // Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleOnClicked
	void PlayAnimationSmoothly(struct UWidgetAnimation* InAnimation); // Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.PlayAnimationSmoothly
	void FinishPlayback(); // Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.FinishPlayback
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnKeyDown
	void SetPromptKeyDisplay(); // Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.SetPromptKeyDisplay
	void GetPromptKeys(struct TArray<struct FKey> SkipPromptKeys); // Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.GetPromptKeys
	void IsSkipKey(struct FKeyEvent InInput, bool IsSkipKey); // Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.IsSkipKey
	void TogglePromptDisplay(bool ShouldShow); // Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.TogglePromptDisplay
	void WhenCinematicDone(); // Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.WhenCinematicDone
	void OnReadyForPlayback(struct UPlatformMediaSource* PlatformMediaSource, struct UAkAudioEvent* PlayEvent, struct UAkAudioEvent* StopEvent); // Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnReadyForPlayback
	void OnShouldShowPromptChanged(bool bCanSkipEntry); // Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnShouldShowPromptChanged
	void InitializeWidgetNavigation(); // Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.InitializeWidgetNavigation
	void HandleInputStateChanged(char InputState); // Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleInputStateChanged
	void OnShown(); // Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnShown
	void FadeTextureIn(); // Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.FadeTextureIn
	void FadeTextureOut(); // Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.FadeTextureOut
	void HandleFadeOutAnimFinished(); // Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleFadeOutAnimFinished
	void OnBeginLoadingPlaylist(); // Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnBeginLoadingPlaylist
	void OnEndLoadingPlaylist(); // Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnEndLoadingPlaylist
	void OnHide(); // Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnHide
	void HandleOnMediaOpened(struct FString OpenedUrl); // Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleOnMediaOpened
	void HandleOnMediaOpenFailed(struct FString FailedUrl); // Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleOnMediaOpenFailed
	void ExecuteUbergraph_WBP_LaunchCinematic(int32_t EntryPoint); // Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.ExecuteUbergraph_WBP_LaunchCinematic
};

