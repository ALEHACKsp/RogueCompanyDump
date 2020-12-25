// Class AkAudio.AkAcousticPortal
// Size: 0x2e8 (Inherited: 0x258)
struct AAkAcousticPortal : public AVolume {
	enum class AkAcousticPortalState InitialState; // 0x258(0x01)
	char UnknownData_259[0x3]; // 0x259(0x03)
	float ObstructionRefreshInterval; // 0x25c(0x04)
	char ObstructionCollisionChannel; // 0x260(0x01)
	char UnknownData_261[0x87]; // 0x261(0x87)

	void OpenPortal(); // Function AkAudio.AkAcousticPortal.OpenPortal
	enum class AkAcousticPortalState GetCurrentState(); // Function AkAudio.AkAcousticPortal.GetCurrentState
	void ClosePortal(); // Function AkAudio.AkAcousticPortal.ClosePortal
};

// Class AkAudio.AkAudioType
// Size: 0x40 (Inherited: 0x28)
struct UAkAudioType : public UObject {
	uint32_t ShortID; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct UObject*> UserData; // 0x30(0x10)
};

// Class AkAudio.AkAmbientSound
// Size: 0x260 (Inherited: 0x220)
struct AAkAmbientSound : public AActor {
	struct UAkAudioEvent* AkAudioEvent; // 0x220(0x08)
	struct UAkComponent* AkComponent; // 0x228(0x08)
	bool StopWhenOwnerIsDestroyed; // 0x230(0x01)
	bool AutoPost; // 0x231(0x01)
	bool ForceNoTickingOnAkComponent; // 0x232(0x01)
	char UnknownData_233[0x2d]; // 0x233(0x2d)

	void StopAmbientSound(); // Function AkAudio.AkAmbientSound.StopAmbientSound
	void StartAmbientSound(); // Function AkAudio.AkAmbientSound.StartAmbientSound
};

// Class AkAudio.AkAndroidInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkAndroidInitializationSettings : public UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkAndroidAdvancedInitializationSettings AdvancedSettings; // 0xb8(0x40)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering
};

// Class AkAudio.AkPlatformInfo
// Size: 0x70 (Inherited: 0x28)
struct UAkPlatformInfo : public UObject {
	char UnknownData_28[0x48]; // 0x28(0x48)
};

// Class AkAudio.AkAssetData
// Size: 0x68 (Inherited: 0x28)
struct UAkAssetData : public UObject {
	char UnknownData_28[0x40]; // 0x28(0x40)
};

// Class AkAudio.AkAssetDataWithMedia
// Size: 0x88 (Inherited: 0x68)
struct UAkAssetDataWithMedia : public UAkAssetData {
	struct TArray<struct TSoftObjectPtr<struct UAkMediaAsset>> MediaList; // 0x68(0x10)
	char UnknownData_78[0x10]; // 0x78(0x10)
};

// Class AkAudio.AkAssetPlatformData
// Size: 0x30 (Inherited: 0x28)
struct UAkAssetPlatformData : public UObject {
	struct UAkAssetData* CurrentAssetData; // 0x28(0x08)
};

// Class AkAudio.AkAssetBase
// Size: 0x58 (Inherited: 0x40)
struct UAkAssetBase : public UAkAudioType {
	struct UAkAssetPlatformData* PlatformAssetData; // 0x40(0x08)
	char UnknownData_48[0x10]; // 0x48(0x10)
};

// Class AkAudio.AkAudioBank
// Size: 0xc8 (Inherited: 0x58)
struct UAkAudioBank : public UAkAssetBase {
	bool AutoLoad; // 0x58(0x01)
	char UnknownData_59[0x7]; // 0x59(0x07)
	struct TMap<struct FString, struct TSoftObjectPtr<struct UAkAssetPlatformData>> LocalizedPlatformAssetDataMap; // 0x60(0x50)
	struct UAkAssetPlatformData* CurrentLocalizedPlatformAssetData; // 0xb0(0x08)
	char UnknownData_B8[0x10]; // 0xb8(0x10)
};

// Class AkAudio.AkAssetDataSwitchContainerData
// Size: 0x80 (Inherited: 0x28)
struct UAkAssetDataSwitchContainerData : public UObject {
	struct TSoftObjectPtr<struct UAkGroupValue> GroupValue; // 0x28(0x28)
	struct TArray<struct TSoftObjectPtr<struct UAkMediaAsset>> MediaList; // 0x50(0x10)
	struct TArray<struct UAkAssetDataSwitchContainerData*> Children; // 0x60(0x10)
	char UnknownData_70[0x10]; // 0x70(0x10)
};

// Class AkAudio.AkAssetDataSwitchContainer
// Size: 0xa8 (Inherited: 0x88)
struct UAkAssetDataSwitchContainer : public UAkAssetDataWithMedia {
	struct TArray<struct UAkAssetDataSwitchContainerData*> SwitchContainers; // 0x88(0x10)
	char UnknownData_98[0x10]; // 0x98(0x10)
};

// Class AkAudio.AkAudioEventData
// Size: 0x130 (Inherited: 0xa8)
struct UAkAudioEventData : public UAkAssetDataSwitchContainer {
	float MaxAttenuationRadius; // 0xa8(0x04)
	bool IsInfinite; // 0xac(0x01)
	char UnknownData_AD[0x3]; // 0xad(0x03)
	float MinimumDuration; // 0xb0(0x04)
	float MaximumDuration; // 0xb4(0x04)
	struct TMap<struct FString, struct UAkAssetDataSwitchContainer*> LocalizedMedia; // 0xb8(0x50)
	char UnknownData_108[0x28]; // 0x108(0x28)
};

// Class AkAudio.AkAudioEvent
// Size: 0xd0 (Inherited: 0x58)
struct UAkAudioEvent : public UAkAssetBase {
	float AutomaticMaxAttenuationRadius; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
	struct TMap<struct FString, struct TSoftObjectPtr<struct UAkAssetPlatformData>> LocalizedPlatformAssetDataMap; // 0x60(0x50)
	struct UAkAudioBank* RequiredBank; // 0xb0(0x08)
	struct UAkAssetPlatformData* CurrentLocalizedPlatformData; // 0xb8(0x08)
	char UnknownData_C0[0x10]; // 0xc0(0x10)

	float MinimumDuration(); // Function AkAudio.AkAudioEvent.MinimumDuration
	float MaximumDuration(); // Function AkAudio.AkAudioEvent.MaximumDuration
	float MaxAttenuationRadius(); // Function AkAudio.AkAudioEvent.MaxAttenuationRadius
	bool IsInfinite(); // Function AkAudio.AkAudioEvent.IsInfinite
	float GetMaxAttenuationRadius(); // Function AkAudio.AkAudioEvent.GetMaxAttenuationRadius
};

// Class AkAudio.AkGameObject
// Size: 0x230 (Inherited: 0x210)
struct UAkGameObject : public USceneComponent {
	struct UAkAudioEvent* AkAudioEvent; // 0x208(0x08)
	struct FString EventName; // 0x210(0x10)
	char UnknownData_228[0x8]; // 0x228(0x08)

	void Stop(); // Function AkAudio.AkGameObject.Stop
	void PostAssociatedAkEventAsync(struct UObject* WorldContextObject, int32_t CallbackMask, struct FDelegate PostEventCallback, struct TArray<struct FAkExternalSourceInfo> ExternalSources, struct FLatentActionInfo LatentInfo, int32_t PlayingID); // Function AkAudio.AkGameObject.PostAssociatedAkEventAsync
	int32_t PostAssociatedAkEvent(int32_t CallbackMask, struct FDelegate PostEventCallback, struct TArray<struct FAkExternalSourceInfo> ExternalSources); // Function AkAudio.AkGameObject.PostAssociatedAkEvent
	void PostAkEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, int32_t PlayingID, int32_t CallbackMask, struct FDelegate PostEventCallback, struct TArray<struct FAkExternalSourceInfo> ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameObject.PostAkEventAsync
	int32_t PostAkEvent(struct UAkAudioEvent* AkEvent, int32_t CallbackMask, struct FDelegate PostEventCallback, struct TArray<struct FAkExternalSourceInfo> ExternalSources, struct FString in_EventName); // Function AkAudio.AkGameObject.PostAkEvent
};

// Class AkAudio.AkComponent
// Size: 0x3f0 (Inherited: 0x230)
struct UAkComponent : public UAkGameObject {
	bool bUseSpatialAudio; // 0x228(0x01)
	char OcclusionCollisionChannel; // 0x230(0x01)
	char UnknownData_232[0x2]; // 0x232(0x02)
	char EnableSpotReflectors : 1; // 0x234(0x01)
	char UnknownData_234_1 : 7; // 0x234(0x01)
	char UnknownData_235[0x3]; // 0x235(0x03)
	struct UAkAuxBus* EarlyReflectionAuxBus; // 0x238(0x08)
	struct FString EarlyReflectionAuxBusName; // 0x240(0x10)
	int32_t EarlyReflectionOrder; // 0x250(0x04)
	float EarlyReflectionBusSendGain; // 0x254(0x04)
	float EarlyReflectionMaxPathLength; // 0x258(0x04)
	float roomReverbAuxBusGain; // 0x25c(0x04)
	int32_t diffractionMaxEdges; // 0x260(0x04)
	int32_t diffractionMaxPaths; // 0x264(0x04)
	float diffractionMaxPathLength; // 0x268(0x04)
	char DrawFirstOrderReflections : 1; // 0x26c(0x01)
	char DrawSecondOrderReflections : 1; // 0x26c(0x01)
	char DrawHigherOrderReflections : 1; // 0x26c(0x01)
	char DrawDiffraction : 1; // 0x26c(0x01)
	char UnknownData_26C_4 : 4; // 0x26c(0x01)
	char UnknownData_26D[0x3]; // 0x26d(0x03)
	bool StopWhenOwnerDestroyed; // 0x270(0x01)
	char UnknownData_271[0x3]; // 0x271(0x03)
	float CurrentMaxAttenuation; // 0x274(0x04)
	float AttenuationScalingFactor; // 0x278(0x04)
	float OcclusionRefreshInterval; // 0x27c(0x04)
	bool bUseReverbVolumes; // 0x280(0x01)
	char UnknownData_281[0x16f]; // 0x281(0x16f)

	void UseReverbVolumes(bool inUseReverbVolumes); // Function AkAudio.AkComponent.UseReverbVolumes
	void UseEarlyReflections(struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, struct FString AuxBusName); // Function AkAudio.AkComponent.UseEarlyReflections
	void SetSwitch(struct UAkSwitchValue* SwitchValue, struct FString SwitchGroup, struct FString SwitchState); // Function AkAudio.AkComponent.SetSwitch
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed); // Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed
	void SetRTPCValue(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, struct FString RTPC); // Function AkAudio.AkComponent.SetRTPCValue
	void SetOutputBusVolume(float BusVolume); // Function AkAudio.AkComponent.SetOutputBusVolume
	void SetListeners(struct TArray<struct UAkComponent*> Listeners); // Function AkAudio.AkComponent.SetListeners
	void SetEarlyReflectionsVolume(float SendVolume); // Function AkAudio.AkComponent.SetEarlyReflectionsVolume
	void SetEarlyReflectionsAuxBus(struct FString AuxBusName); // Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus
	void SetAttenuationScalingFactor(float Value); // Function AkAudio.AkComponent.SetAttenuationScalingFactor
	void PostTrigger(struct UAkTrigger* TriggerValue, struct FString Trigger); // Function AkAudio.AkComponent.PostTrigger
	void PostAssociatedAkEventAndWaitForEndAsync(int32_t PlayingID, struct TArray<struct FAkExternalSourceInfo> ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync
	int32_t PostAssociatedAkEventAndWaitForEnd(struct TArray<struct FAkExternalSourceInfo> ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
	int32_t PostAkEventByName(struct FString in_EventName); // Function AkAudio.AkComponent.PostAkEventByName
	void PostAkEventAndWaitForEndAsync(struct UAkAudioEvent* AkEvent, int32_t PlayingID, struct TArray<struct FAkExternalSourceInfo> ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync
	int32_t PostAkEventAndWaitForEnd(struct UAkAudioEvent* AkEvent, struct FString in_EventName, struct TArray<struct FAkExternalSourceInfo> ExternalSources, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAkEventAndWaitForEnd
	void GetRTPCValue(struct UAkRtpc* RTPCValue, enum class ERTPCValueType InputValueType, float Value, enum class ERTPCValueType OutputValueType, struct FString RTPC, int32_t PlayingID); // Function AkAudio.AkComponent.GetRTPCValue
	float GetAttenuationRadius(); // Function AkAudio.AkComponent.GetAttenuationRadius
};

// Class AkAudio.AkAudioInputComponent
// Size: 0x400 (Inherited: 0x3f0)
struct UAkAudioInputComponent : public UAkComponent {
	char UnknownData_3F0[0x10]; // 0x3f0(0x10)

	int32_t PostAssociatedAudioInputEvent(); // Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent
};

// Class AkAudio.AkAuxBus
// Size: 0x60 (Inherited: 0x58)
struct UAkAuxBus : public UAkAssetBase {
	struct UAkAudioBank* RequiredBank; // 0x58(0x08)
};

// Class AkAudio.AkCheckBox
// Size: 0xbb8 (Inherited: 0x128)
struct UAkCheckBox : public UContentWidget {
	char UnknownData_128[0x420]; // 0x128(0x420)
	enum class ECheckBoxState CheckedState; // 0x548(0x01)
	char UnknownData_549[0x3]; // 0x549(0x03)
	struct FDelegate CheckedStateDelegate; // 0x54c(0x10)
	char UnknownData_55C[0x4]; // 0x55c(0x04)
	struct FCheckBoxStyle WidgetStyle; // 0x560(0x580)
	char HorizontalAlignment; // 0xae0(0x01)
	bool IsFocusable; // 0xae1(0x01)
	char UnknownData_AE2[0x6]; // 0xae2(0x06)
	struct FAkBoolPropertyToControl ThePropertyToControl; // 0xae8(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0xaf8(0x40)
	struct FMulticastInlineDelegate AkOnCheckStateChanged; // 0xb38(0x10)
	struct FMulticastInlineDelegate OnItemDropped; // 0xb48(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0xb58(0x10)
	char UnknownData_B68[0x50]; // 0xb68(0x50)

	void SetIsChecked(bool InIsChecked); // Function AkAudio.AkCheckBox.SetIsChecked
	void SetCheckedState(enum class ECheckBoxState InCheckedState); // Function AkAudio.AkCheckBox.SetCheckedState
	void SetAkItemId(struct FGuid ItemId); // Function AkAudio.AkCheckBox.SetAkItemId
	void SetAkBoolProperty(struct FString ItemProperty); // Function AkAudio.AkCheckBox.SetAkBoolProperty
	bool IsPressed(); // Function AkAudio.AkCheckBox.IsPressed
	bool IsChecked(); // Function AkAudio.AkCheckBox.IsChecked
	enum class ECheckBoxState GetCheckedState(); // Function AkAudio.AkCheckBox.GetCheckedState
	struct FString GetAkProperty(); // Function AkAudio.AkCheckBox.GetAkProperty
	struct FGuid GetAkItemId(); // Function AkAudio.AkCheckBox.GetAkItemId
};

// Class AkAudio.AkCallbackInfo
// Size: 0x30 (Inherited: 0x28)
struct UAkCallbackInfo : public UObject {
	struct UAkComponent* AkComponent; // 0x28(0x08)
};

// Class AkAudio.AkEventCallbackInfo
// Size: 0x38 (Inherited: 0x30)
struct UAkEventCallbackInfo : public UAkCallbackInfo {
	int32_t PlayingID; // 0x30(0x04)
	int32_t EventID; // 0x34(0x04)
};

// Class AkAudio.AkMIDIEventCallbackInfo
// Size: 0x40 (Inherited: 0x38)
struct UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo {
	char UnknownData_38[0x8]; // 0x38(0x08)

	enum class EAkMidiEventType GetType(); // Function AkAudio.AkMIDIEventCallbackInfo.GetType
	bool GetProgramChange(struct FAkMidiProgramChange AsProgramChange); // Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange
	bool GetPitchBend(struct FAkMidiPitchBend AsPitchBend); // Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend
	bool GetNoteOn(struct FAkMidiNoteOnOff AsNoteOn); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn
	bool GetNoteOff(struct FAkMidiNoteOnOff AsNoteOff); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff
	bool GetNoteAftertouch(struct FAkMidiNoteAftertouch AsNoteAftertouch); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch
	bool GetGeneric(struct FAkMidiGeneric AsGeneric); // Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric
	bool GetChannelAftertouch(struct FAkMidiChannelAftertouch AsChannelAftertouch); // Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch
	char GetChannel(); // Function AkAudio.AkMIDIEventCallbackInfo.GetChannel
	bool GetCc(struct FAkMidiCc AsCc); // Function AkAudio.AkMIDIEventCallbackInfo.GetCc
};

// Class AkAudio.AkMarkerCallbackInfo
// Size: 0x50 (Inherited: 0x38)
struct UAkMarkerCallbackInfo : public UAkEventCallbackInfo {
	int32_t Identifier; // 0x38(0x04)
	int32_t Position; // 0x3c(0x04)
	struct FString Label; // 0x40(0x10)
};

// Class AkAudio.AkDurationCallbackInfo
// Size: 0x50 (Inherited: 0x38)
struct UAkDurationCallbackInfo : public UAkEventCallbackInfo {
	float Duration; // 0x38(0x04)
	float EstimatedDuration; // 0x3c(0x04)
	int32_t AudioNodeID; // 0x40(0x04)
	int32_t MediaID; // 0x44(0x04)
	bool bStreaming; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
};

// Class AkAudio.AkMusicSyncCallbackInfo
// Size: 0x70 (Inherited: 0x30)
struct UAkMusicSyncCallbackInfo : public UAkCallbackInfo {
	int32_t PlayingID; // 0x30(0x04)
	struct FAkSegmentInfo SegmentInfo; // 0x34(0x24)
	enum class EAkCallbackType MusicSyncType; // 0x58(0x01)
	char UnknownData_59[0x7]; // 0x59(0x07)
	struct FString UserCueName; // 0x60(0x10)
};

// Class AkAudio.AkGeometryComponent
// Size: 0x330 (Inherited: 0x210)
struct UAkGeometryComponent : public USceneComponent {
	enum class AkMeshType MeshType; // 0x208(0x01)
	int32_t LOD; // 0x20c(0x04)
	struct TMap<struct UMaterialInterface*, struct FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride; // 0x210(0x50)
	struct FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride; // 0x260(0x10)
	char bEnableDiffraction : 1; // 0x270(0x01)
	char bEnableDiffractionOnBoundaryEdges : 1; // 0x270(0x01)
	char UnknownData_275_2 : 6; // 0x275(0x01)
	char UnknownData_276[0x2]; // 0x276(0x02)
	struct AActor* AssociatedRoom; // 0x278(0x08)
	char UnknownData_280[0x8]; // 0x280(0x08)
	struct FAkGeometryData GeometryData; // 0x288(0x50)
	char UnknownData_2D8[0x58]; // 0x2d8(0x58)

	void UpdateGeometry(); // Function AkAudio.AkGeometryComponent.UpdateGeometry
	void RemoveGeometry(); // Function AkAudio.AkGeometryComponent.RemoveGeometry
	void ConvertMesh(); // Function AkAudio.AkGeometryComponent.ConvertMesh
};

// Class AkAudio.AkGroupValue
// Size: 0x58 (Inherited: 0x40)
struct UAkGroupValue : public UAkAudioType {
	uint32_t GroupShortID; // 0x40(0x04)
	char UnknownData_44[0x14]; // 0x44(0x14)
};

// Class AkAudio.AkHololensInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkHololensInitializationSettings : public UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkHololensAdvancedInitializationSettings AdvancedSettings; // 0xb8(0x40)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering
};

// Class AkAudio.AkInitBankAssetData
// Size: 0x98 (Inherited: 0x88)
struct UAkInitBankAssetData : public UAkAssetDataWithMedia {
	struct TArray<struct FAkPluginInfo> PluginInfos; // 0x88(0x10)
};

// Class AkAudio.AkInitBank
// Size: 0x78 (Inherited: 0x58)
struct UAkInitBank : public UAkAssetBase {
	struct TArray<struct FString> AvailableAudioCultures; // 0x58(0x10)
	struct FString DefaultLanguage; // 0x68(0x10)
};

// Class AkAudio.AkIOSInitializationSettings
// Size: 0x100 (Inherited: 0x28)
struct UAkIOSInitializationSettings : public UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkAudioSession AudioSession; // 0x90(0x0c)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0(0x28)
	struct FAkAdvancedInitializationSettings AdvancedSettings; // 0xc8(0x34)
	char UnknownData_FC[0x4]; // 0xfc(0x04)
};

// Class AkAudio.AkItemBoolProperties
// Size: 0x150 (Inherited: 0x110)
struct UAkItemBoolProperties : public UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x110(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x120(0x10)
	char UnknownData_130[0x20]; // 0x130(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkItemBoolProperties.SetSearchText
	struct FString GetSelectedProperty(); // Function AkAudio.AkItemBoolProperties.GetSelectedProperty
	struct FString GetSearchText(); // Function AkAudio.AkItemBoolProperties.GetSearchText
};

// Class AkAudio.AkItemProperties
// Size: 0x150 (Inherited: 0x110)
struct UAkItemProperties : public UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x110(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x120(0x10)
	char UnknownData_130[0x20]; // 0x130(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkItemProperties.SetSearchText
	struct FString GetSelectedProperty(); // Function AkAudio.AkItemProperties.GetSelectedProperty
	struct FString GetSearchText(); // Function AkAudio.AkItemProperties.GetSearchText
};

// Class AkAudio.AkLateReverbComponent
// Size: 0x280 (Inherited: 0x210)
struct UAkLateReverbComponent : public USceneComponent {
	char bEnable : 1; // 0x208(0x01)
	struct UAkAuxBus* AuxBus; // 0x210(0x08)
	struct FString AuxBusName; // 0x218(0x10)
	float SendLevel; // 0x228(0x04)
	float FadeRate; // 0x22c(0x04)
	float Priority; // 0x230(0x04)
	char UnknownData_234_1 : 7; // 0x234(0x01)
	char UnknownData_235[0x3]; // 0x235(0x03)
	struct UAkLateReverbComponent* NextLowerPriorityComponent; // 0x238(0x08)
	char UnknownData_240[0x40]; // 0x240(0x40)
};

// Class AkAudio.AkLinuxInitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkLinuxInitializationSettings : public UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xb8(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering
};

// Class AkAudio.AkLuminInitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkLuminInitializationSettings : public UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xb8(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkLuminInitializationSettings.MigrateMultiCoreRendering
};

// Class AkAudio.AkMacInitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkMacInitializationSettings : public UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xb8(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering
};

// Class AkAudio.AkMediaAssetData
// Size: 0x40 (Inherited: 0x28)
struct UAkMediaAssetData : public UObject {
	bool IsStreamed; // 0x28(0x01)
	bool UseDeviceMemory; // 0x29(0x01)
	char UnknownData_2A[0x16]; // 0x2a(0x16)
};

// Class AkAudio.AkMediaAsset
// Size: 0x58 (Inherited: 0x28)
struct UAkMediaAsset : public UObject {
	uint32_t ID; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct UObject*> UserData; // 0x30(0x10)
	struct UAkMediaAssetData* CurrentMediaAssetData; // 0x40(0x08)
	char UnknownData_48[0x10]; // 0x48(0x10)
};

// Class AkAudio.AkPS4InitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkPS4InitializationSettings : public UObject {
	struct FAkCommonInitializationSettings CommonSettings; // 0x28(0x60)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x88(0x28)
	struct FAkPS4AdvancedInitializationSettings AdvancedSettings; // 0xb0(0x40)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering
};

// Class AkAudio.AkPS5InitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkPS5InitializationSettings : public UObject {
	struct FAkCommonInitializationSettings CommonSettings; // 0x28(0x60)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x88(0x28)
	struct FAkPS5AdvancedInitializationSettings AdvancedSettings; // 0xb0(0x44)
	char UnknownData_F4[0x4]; // 0xf4(0x04)
};

// Class AkAudio.AkReverbVolume
// Size: 0x290 (Inherited: 0x258)
struct AAkReverbVolume : public AVolume {
	char bEnabled : 1; // 0x258(0x01)
	char UnknownData_258_1 : 7; // 0x258(0x01)
	char UnknownData_259[0x7]; // 0x259(0x07)
	struct UAkAuxBus* AuxBus; // 0x260(0x08)
	struct FString AuxBusName; // 0x268(0x10)
	float SendLevel; // 0x278(0x04)
	float FadeRate; // 0x27c(0x04)
	float Priority; // 0x280(0x04)
	char UnknownData_284[0x4]; // 0x284(0x04)
	struct UAkLateReverbComponent* LateReverbComponent; // 0x288(0x08)
};

// Class AkAudio.AkRoomComponent
// Size: 0x250 (Inherited: 0x230)
struct UAkRoomComponent : public UAkGameObject {
	char bEnable : 1; // 0x228(0x01)
	struct UAkRoomComponent* NextLowerPriorityComponent; // 0x230(0x08)
	float Priority; // 0x238(0x04)
	float WallOcclusion; // 0x23c(0x04)
	float AuxSendLevel; // 0x240(0x04)
	bool AutoPost; // 0x244(0x01)
	char UnknownData_245_1 : 7; // 0x245(0x01)
	char UnknownData_246[0xa]; // 0x246(0x0a)
};

// Class AkAudio.AkSettings
// Size: 0x158 (Inherited: 0x28)
struct UAkSettings : public UObject {
	char MaxSimultaneousReverbVolumes; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct FFilePath WwiseProjectPath; // 0x30(0x10)
	struct FDirectoryPath WwiseSoundDataFolder; // 0x40(0x10)
	bool bAutoConnectToWAAPI; // 0x50(0x01)
	char DefaultOcclusionCollisionChannel; // 0x51(0x01)
	char UnknownData_52[0x6]; // 0x52(0x06)
	struct TMap<struct TSoftObjectPtr<struct UPhysicalMaterial>, struct FAkGeometrySurfacePropertiesToMap> AkGeometryMap; // 0x58(0x50)
	bool SplitSwitchContainerMedia; // 0xa8(0x01)
	bool UseEventBasedPackaging; // 0xa9(0x01)
	bool EnableAutomaticAssetSynchronization; // 0xaa(0x01)
	char UnknownData_AB[0x5]; // 0xab(0x05)
	struct FString CommandletCommitMessage; // 0xb0(0x10)
	struct TMap<struct FString, struct FString> UnrealCultureToWwiseCulture; // 0xc0(0x50)
	bool AskedToUseNewAssetManagement; // 0x110(0x01)
	bool bEnableMultiCoreRendering; // 0x111(0x01)
	bool MigratedEnableMultiCoreRendering; // 0x112(0x01)
	char UnknownData_113[0x5]; // 0x113(0x05)
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x118(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x128(0x10)
	char UnknownData_138[0x20]; // 0x138(0x20)
};

// Class AkAudio.AkSettingsPerUser
// Size: 0x60 (Inherited: 0x28)
struct UAkSettingsPerUser : public UObject {
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x28(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x38(0x10)
	struct FString WaapiIPAddress; // 0x48(0x10)
	uint32_t WaapiPort; // 0x58(0x04)
	bool AutoSyncSelection; // 0x5c(0x01)
	bool SuppressWwiseProjectPathWarnings; // 0x5d(0x01)
	bool SoundDataGenerationSkipLanguage; // 0x5e(0x01)
	char UnknownData_5F[0x1]; // 0x5f(0x01)
};

// Class AkAudio.AkSlider
// Size: 0x538 (Inherited: 0x110)
struct UAkSlider : public UWidget {
	float Value; // 0x110(0x04)
	struct FDelegate ValueDelegate; // 0x114(0x10)
	char UnknownData_124[0x4]; // 0x124(0x04)
	struct FSliderStyle WidgetStyle; // 0x128(0x340)
	char Orientation; // 0x468(0x01)
	char UnknownData_469[0x3]; // 0x469(0x03)
	struct FLinearColor SliderBarColor; // 0x46c(0x10)
	struct FLinearColor SliderHandleColor; // 0x47c(0x10)
	bool IndentHandle; // 0x48c(0x01)
	bool Locked; // 0x48d(0x01)
	char UnknownData_48E[0x2]; // 0x48e(0x02)
	float StepSize; // 0x490(0x04)
	bool IsFocusable; // 0x494(0x01)
	char UnknownData_495[0x3]; // 0x495(0x03)
	struct FAkPropertyToControl ThePropertyToControl; // 0x498(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0x4a8(0x40)
	struct FMulticastInlineDelegate OnValueChanged; // 0x4e8(0x10)
	struct FMulticastInlineDelegate OnItemDropped; // 0x4f8(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0x508(0x10)
	char UnknownData_518[0x20]; // 0x518(0x20)

	void SetValue(float InValue); // Function AkAudio.AkSlider.SetValue
	void SetStepSize(float InValue); // Function AkAudio.AkSlider.SetStepSize
	void SetSliderHandleColor(struct FLinearColor InValue); // Function AkAudio.AkSlider.SetSliderHandleColor
	void SetSliderBarColor(struct FLinearColor InValue); // Function AkAudio.AkSlider.SetSliderBarColor
	void SetLocked(bool InValue); // Function AkAudio.AkSlider.SetLocked
	void SetIndentHandle(bool InValue); // Function AkAudio.AkSlider.SetIndentHandle
	void SetAkSliderItemProperty(struct FString ItemProperty); // Function AkAudio.AkSlider.SetAkSliderItemProperty
	void SetAkSliderItemId(struct FGuid ItemId); // Function AkAudio.AkSlider.SetAkSliderItemId
	float GetValue(); // Function AkAudio.AkSlider.GetValue
	struct FString GetAkSliderItemProperty(); // Function AkAudio.AkSlider.GetAkSliderItemProperty
	struct FGuid GetAkSliderItemId(); // Function AkAudio.AkSlider.GetAkSliderItemId
};

// Class AkAudio.AkSpatialAudioVolume
// Size: 0x270 (Inherited: 0x258)
struct AAkSpatialAudioVolume : public AVolume {
	struct UAkSurfaceReflectorSetComponent* SurfaceReflectorSet; // 0x258(0x08)
	struct UAkLateReverbComponent* LateReverb; // 0x260(0x08)
	struct UAkRoomComponent* Room; // 0x268(0x08)
};

// Class AkAudio.AkSpotReflector
// Size: 0x248 (Inherited: 0x220)
struct AAkSpotReflector : public AActor {
	struct UAkAuxBus* EarlyReflectionAuxBus; // 0x220(0x08)
	struct FString EarlyReflectionAuxBusName; // 0x228(0x10)
	struct UAkAcousticTexture* AcousticTexture; // 0x238(0x08)
	float DistanceScalingFactor; // 0x240(0x04)
	float Level; // 0x244(0x04)
};

// Class AkAudio.AkSurfaceReflectorSetComponent
// Size: 0x240 (Inherited: 0x210)
struct UAkSurfaceReflectorSetComponent : public USceneComponent {
	char bEnableSurfaceReflectors : 1; // 0x208(0x01)
	struct TArray<struct FAkPoly> AcousticPolys; // 0x210(0x10)
	char bEnableDiffraction : 1; // 0x220(0x01)
	char bEnableDiffractionOnBoundaryEdges : 1; // 0x220(0x01)
	char UnknownData_220_3 : 5; // 0x220(0x01)
	char UnknownData_221[0x7]; // 0x221(0x07)
	struct AActor* AssociatedRoom; // 0x228(0x08)
	char UnknownData_230[0x10]; // 0x230(0x10)

	void UpdateSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet
	void SendSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet
	void RemoveSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet
};

// Class AkAudio.AkSwitchInitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkSwitchInitializationSettings : public UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkCommunicationSettingsWithCommSelection CommunicationSettings; // 0x90(0x28)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xb8(0x38)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering
};

// Class AkAudio.AkTVOSInitializationSettings
// Size: 0x100 (Inherited: 0x28)
struct UAkTVOSInitializationSettings : public UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkAudioSession AudioSession; // 0x90(0x0c)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0(0x28)
	struct FAkAdvancedInitializationSettings AdvancedSettings; // 0xc8(0x34)
	char UnknownData_FC[0x4]; // 0xfc(0x04)
};

// Class AkAudio.AkWindowsInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkWindowsInitializationSettings : public UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkWindowsAdvancedInitializationSettings AdvancedSettings; // 0xb8(0x40)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering
};

// Class AkAudio.AkWinGDKInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkWinGDKInitializationSettings : public UObject {
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkWinGDKAdvancedInitializationSettings AdvancedSettings; // 0xb8(0x40)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkWinGDKInitializationSettings.MigrateMultiCoreRendering
};

// Class AkAudio.AkWwiseTree
// Size: 0x150 (Inherited: 0x110)
struct UAkWwiseTree : public UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x110(0x10)
	struct FMulticastInlineDelegate OnItemDragged; // 0x120(0x10)
	char UnknownData_130[0x20]; // 0x130(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkWwiseTree.SetSearchText
	struct FAkWwiseObjectDetails GetSelectedItem(); // Function AkAudio.AkWwiseTree.GetSelectedItem
	struct FString GetSearchText(); // Function AkAudio.AkWwiseTree.GetSearchText
};

// Class AkAudio.AkWwiseTreeSelector
// Size: 0x170 (Inherited: 0x110)
struct UAkWwiseTreeSelector : public UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x110(0x10)
	struct FMulticastInlineDelegate OnItemDragged; // 0x120(0x10)
	char UnknownData_130[0x40]; // 0x130(0x40)
};

// Class AkAudio.AkXboxOneGDKInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkXboxOneGDKInitializationSettings : public UObject {
	struct FAkCommonInitializationSettings CommonSettings; // 0x28(0x60)
	struct FAkXboxOneGDKApuHeapInitializationSettings ApuHeapSettings; // 0x88(0x08)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkXboxOneGDKAdvancedInitializationSettings AdvancedSettings; // 0xb8(0x3c)
	char UnknownData_F4[0x4]; // 0xf4(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkXboxOneGDKInitializationSettings.MigrateMultiCoreRendering
};

// Class AkAudio.AkXboxOneInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkXboxOneInitializationSettings : public UObject {
	struct FAkCommonInitializationSettings CommonSettings; // 0x28(0x60)
	struct FAkXboxOneApuHeapInitializationSettings ApuHeapSettings; // 0x88(0x08)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkXboxOneAdvancedInitializationSettings AdvancedSettings; // 0xb8(0x3c)
	char UnknownData_F4[0x4]; // 0xf4(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering
};

// Class AkAudio.AkXSXInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkXSXInitializationSettings : public UObject {
	struct FAkCommonInitializationSettings CommonSettings; // 0x28(0x60)
	struct FAkXSXApuHeapInitializationSettings ApuHeapSettings; // 0x88(0x08)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	struct FAkXSXAdvancedInitializationSettings AdvancedSettings; // 0xb8(0x3c)
	char UnknownData_F4[0x4]; // 0xf4(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkXSXInitializationSettings.MigrateMultiCoreRendering
};

// Class AkAudio.InterpTrackAkAudioEvent
// Size: 0xa8 (Inherited: 0x90)
struct UInterpTrackAkAudioEvent : public UInterpTrackVectorBase {
	struct TArray<struct FAkAudioEventTrackKey> Events; // 0x90(0x10)
	char bContinueEventOnMatineeEnd : 1; // 0xa0(0x01)
	char UnknownData_A0_1 : 7; // 0xa0(0x01)
	char UnknownData_A1[0x7]; // 0xa1(0x07)
};

// Class AkAudio.InterpTrackAkAudioRTPC
// Size: 0xa8 (Inherited: 0x90)
struct UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase {
	struct FString Param; // 0x90(0x10)
	char bPlayOnReverse : 1; // 0xa0(0x01)
	char bContinueRTPCOnMatineeEnd : 1; // 0xa0(0x01)
	char UnknownData_A0_2 : 6; // 0xa0(0x01)
	char UnknownData_A1[0x7]; // 0xa1(0x07)
};

// Class AkAudio.InterpTrackInstAkAudioEvent
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstAkAudioEvent : public UInterpTrackInst {
	float LastUpdatePosition; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// Class AkAudio.InterpTrackInstAkAudioRTPC
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstAkAudioRTPC : public UInterpTrackInst {
	float LastUpdatePosition; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// Class AkAudio.MovieSceneAkAudioEventSection
// Size: 0x1c8 (Inherited: 0xe0)
struct UMovieSceneAkAudioEventSection : public UMovieSceneSection {
	char UnknownData_E0[0x40]; // 0xe0(0x40)
	struct UAkAudioEvent* Event; // 0x120(0x08)
	bool RetriggerEvent; // 0x128(0x01)
	char UnknownData_129[0x3]; // 0x129(0x03)
	int32_t ScrubTailLengthMs; // 0x12c(0x04)
	bool StopAtSectionEnd; // 0x130(0x01)
	char UnknownData_131[0x7]; // 0x131(0x07)
	struct FString EventName; // 0x138(0x10)
	char UnknownData_148[0x20]; // 0x148(0x20)
	float MaxSourceDuration; // 0x168(0x04)
	char UnknownData_16C[0x4]; // 0x16c(0x04)
	struct FString MaxDurationSourceID; // 0x170(0x10)
	char UnknownData_180[0x48]; // 0x180(0x48)
};

// Class AkAudio.MovieSceneAkTrack
// Size: 0x70 (Inherited: 0x58)
struct UMovieSceneAkTrack : public UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x58(0x10)
	char bIsAMasterTrack : 1; // 0x68(0x01)
	char UnknownData_68_1 : 7; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
};

// Class AkAudio.MovieSceneAkAudioRTPCSection
// Size: 0x248 (Inherited: 0xe0)
struct UMovieSceneAkAudioRTPCSection : public UMovieSceneSection {
	struct UAkRtpc* RTPC; // 0xe0(0x08)
	struct FString Name; // 0xe8(0x10)
	struct FRichCurve FloatCurve; // 0xf8(0x80)
	struct FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper; // 0x178(0x30)
	struct FMovieSceneFloatChannel RTPCChannel; // 0x1a8(0xa0)
};

// Class AkAudio.PostEventAsync
// Size: 0xa0 (Inherited: 0x30)
struct UPostEventAsync : public UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate Completed; // 0x30(0x10)
	char UnknownData_40[0x60]; // 0x40(0x60)

	struct UPostEventAsync* PostEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t CallbackMask, struct FDelegate PostEventCallback, struct TArray<struct FAkExternalSourceInfo> ExternalSources, bool bStopWhenAttachedToDestroyed); // Function AkAudio.PostEventAsync.PostEventAsync
	void PollPostEventFuture(); // Function AkAudio.PostEventAsync.PollPostEventFuture
};

// Class AkAudio.PostEventAtLocationAsync
// Size: 0x80 (Inherited: 0x30)
struct UPostEventAtLocationAsync : public UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate Completed; // 0x30(0x10)
	char UnknownData_40[0x40]; // 0x40(0x40)

	struct UPostEventAtLocationAsync* PostEventAtLocationAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation); // Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync
	void PollPostEventFuture(); // Function AkAudio.PostEventAtLocationAsync.PollPostEventFuture
};

