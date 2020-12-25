// Enum VivoxCore.DeviceType
enum class DeviceType : uint8_t {
	NullDevice,
	SpecificDevice,
	DefaultSystemDevice,
	DefaultCommunicationDevice,
	DeviceType_MAX,
};

// Enum VivoxCore.EAudioFadeModel
enum class EAudioFadeModel : uint8_t {
	InverseByDistance,
	LinearByDistance,
	ExponentialByDistance,
	EAudioFadeModel_MAX,
};

// Enum VivoxCore.ChannelType
enum class ChannelType : uint8_t {
	NonPositional,
	Positional,
	Echo,
	ChannelType_MAX,
};

// Enum VivoxCore.ConnectionState
enum class ConnectionState : uint8_t {
	Disconnected,
	Connecting,
	Connected,
	Disconnecting,
	ConnectionState_MAX,
};

// Enum VivoxCore.ParticipantSpeakingUpdateRate
enum class ParticipantSpeakingUpdateRate : uint8_t {
	StateChange,
	Never,
	Update1Hz,
	Update5Hz,
	Update10Hz,
	ParticipantSpeakingUpdateRate_MAX,
};

// Enum VivoxCore.TransmissionMode
enum class TransmissionMode : uint8_t {
	None,
	Single,
	All,
	TransmissionMode_MAX,
};

// Enum VivoxCore.SubscriptionReply
enum class SubscriptionReply : uint8_t {
	Allow,
	Block,
	SubscriptionReply_MAX,
};

// Enum VivoxCore.SubscriptionMode
enum class SubscriptionMode : uint8_t {
	Accept,
	Block,
	Defer,
	SubscriptionMode_MAX,
};

// Enum VivoxCore.LoginState
enum class LoginState : uint8_t {
	LoggedOut,
	LoggingIn,
	LoggedIn,
	LoggingOut,
	LoginState_MAX,
};

// Enum VivoxCore.TTSMessageState
enum class TTSMessageState : uint8_t {
	Playing,
	Enqueued,
	TTSMessageState_MAX,
};

// Enum VivoxCore.TTSDestination
enum class TTSDestination : uint8_t {
	Default,
	RemoteTransmission,
	LocalPlayback,
	RemoteTransmissionWithLocalPlayback,
	QueuedRemoteTransmission,
	QueuedLocalPlayback,
	QueuedRemoteTransmissionWithLocalPlayback,
	ScreenReader,
	TTSDestination_MAX,
};

// Enum VivoxCore.PresenceStatus
enum class PresenceStatus : uint8_t {
	Unavailable,
	Available,
	Chat,
	DoNotDisturb,
	Away,
	ExtendedAway,
	PresenceStatus_MAX,
};

