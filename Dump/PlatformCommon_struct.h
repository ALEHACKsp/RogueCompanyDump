// Enum PlatformCommon.EPCOM_SessionUpdateEvent
enum class EPCOM_SessionUpdateEvent : uint8_t {
	Unknown,
	JoinFailure,
	JoinFailure_NoOpenConnections,
	JoinFailure_SessionNotAvailable,
	JoinSuccess,
	EPCOM_MAX,
};

// Enum PlatformCommon.EPCOM_PrivilegeStatus
enum class EPCOM_PrivilegeStatus : uint8_t {
	Unchecked,
	Pending,
	Denied,
	Allowed,
	EPCOM_MAX,
};

