#pragma once

// Fortnite (11.00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Engine.ETextGender
enum class ETextGender : uint8_t
{
	Masculine                      = 0,
	Feminine                       = 1,
	Neuter                         = 2,
	ETextGender_MAX                = 3
};


// Enum Engine.EFormatArgumentType
enum class EFormatArgumentType : uint8_t
{
	Int                            = 0,
	UInt                           = 1,
	Float                          = 2,
	Double                         = 3,
	Text                           = 4,
	Gender                         = 5,
	EFormatArgumentType_MAX        = 6
};


// Enum Engine.EEndPlayReason
enum class EEndPlayReason : uint8_t
{
	Destroyed                      = 0,
	LevelTransition                = 1,
	EndPlayInEditor                = 2,
	RemovedFromWorld               = 3,
	Quit                           = 4,
	EEndPlayReason_MAX             = 5
};


// Enum Engine.ETickingGroup
enum class ETickingGroup : uint8_t
{
	TG_PrePhysics                  = 0,
	TG_StartPhysics                = 1,
	TG_DuringPhysics               = 2,
	TG_EndPhysics                  = 3,
	TG_PostPhysics                 = 4,
	TG_PostUpdateWork              = 5,
	TG_LastDemotable               = 6,
	TG_NewlySpawned                = 7,
	TG_MAX                         = 8
};


// Enum Engine.EComponentCreationMethod
enum class EComponentCreationMethod : uint8_t
{
	Native                         = 0,
	SimpleConstructionScript       = 1,
	UserConstructionScript         = 2,
	Instance                       = 3,
	EComponentCreationMethod_MAX   = 4
};


// Enum Engine.ETemperatureSeverityType
enum class ETemperatureSeverityType : uint8_t
{
	Unknown                        = 0,
	Good                           = 1,
	Bad                            = 2,
	Serious                        = 3,
	Critical                       = 4,
	NumSeverities                  = 5,
	ETemperatureSeverityType_MAX   = 6
};


// Enum Engine.EPlaneConstraintAxisSetting
enum class EPlaneConstraintAxisSetting : uint8_t
{
	Custom                         = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	UseGlobalPhysicsSetting        = 4,
	EPlaneConstraintAxisSetting_MAX = 5
};


// Enum Engine.EInterpToBehaviourType
enum class EInterpToBehaviourType : uint8_t
{
	OneShot                        = 0,
	OneShot_Reverse                = 1,
	Loop_Reset                     = 2,
	PingPong                       = 3,
	EInterpToBehaviourType_MAX     = 4
};


// Enum Engine.ETeleportType
enum class ETeleportType : uint8_t
{
	None                           = 0,
	TeleportPhysics                = 1,
	ResetPhysics                   = 2,
	ETeleportType_MAX              = 3
};


// Enum Engine.EPlatformInterfaceDataType
enum class EPlatformInterfaceDataType : uint8_t
{
	PIDT_None                      = 0,
	PIDT_Int                       = 1,
	PIDT_Float                     = 2,
	PIDT_String                    = 3,
	PIDT_Object                    = 4,
	PIDT_Custom                    = 5,
	PIDT_MAX                       = 6
};


// Enum Engine.EMovementMode
enum class EMovementMode : uint8_t
{
	MOVE_None                      = 0,
	MOVE_Walking                   = 1,
	MOVE_NavWalking                = 2,
	MOVE_Falling                   = 3,
	MOVE_Swimming                  = 4,
	MOVE_Flying                    = 5,
	MOVE_Custom                    = 6,
	MOVE_MAX                       = 7
};


// Enum Engine.ENetworkFailure
enum class ENetworkFailure : uint8_t
{
	NetDriverAlreadyExists         = 0,
	NetDriverCreateFailure         = 1,
	NetDriverListenFailure         = 2,
	ConnectionLost                 = 3,
	ConnectionTimeout              = 4,
	FailureReceived                = 5,
	OutdatedClient                 = 6,
	OutdatedServer                 = 7,
	PendingConnectionFailure       = 8,
	NetGuidMismatch                = 9,
	NetChecksumMismatch            = 10,
	ENetworkFailure_MAX            = 11
};


// Enum Engine.ETravelFailure
enum class ETravelFailure : uint8_t
{
	NoLevel                        = 0,
	LoadMapFailure                 = 1,
	InvalidURL                     = 2,
	PackageMissing                 = 3,
	PackageVersion                 = 4,
	NoDownload                     = 5,
	TravelFailure                  = 6,
	CheatCommands                  = 7,
	PendingNetGameCreateFailure    = 8,
	CloudSaveFailure               = 9,
	ServerTravelFailure            = 10,
	ClientTravelFailure            = 11,
	ETravelFailure_MAX             = 12
};


// Enum Engine.EScreenOrientation
enum class EScreenOrientation : uint8_t
{
	Unknown                        = 0,
	Portrait                       = 1,
	PortraitUpsideDown             = 2,
	LandscapeLeft                  = 3,
	LandscapeRight                 = 4,
	FaceUp                         = 5,
	FaceDown                       = 6,
	EScreenOrientation_MAX         = 7
};


// Enum Engine.EApplicationState
enum class EApplicationState : uint8_t
{
	Unknown                        = 0,
	Inactive                       = 1,
	Background                     = 2,
	Active                         = 3,
	EApplicationState_MAX          = 4
};


// Enum Engine.EObjectTypeQuery
enum class EObjectTypeQuery : uint8_t
{
	ObjectTypeQuery1               = 0,
	ObjectTypeQuery2               = 1,
	ObjectTypeQuery3               = 2,
	ObjectTypeQuery4               = 3,
	ObjectTypeQuery5               = 4,
	ObjectTypeQuery6               = 5,
	ObjectTypeQuery7               = 6,
	ObjectTypeQuery8               = 7,
	ObjectTypeQuery9               = 8,
	ObjectTypeQuery10              = 9,
	ObjectTypeQuery11              = 10,
	ObjectTypeQuery12              = 11,
	ObjectTypeQuery13              = 12,
	ObjectTypeQuery14              = 13,
	ObjectTypeQuery15              = 14,
	ObjectTypeQuery16              = 15,
	ObjectTypeQuery17              = 16,
	ObjectTypeQuery18              = 17,
	ObjectTypeQuery19              = 18,
	ObjectTypeQuery20              = 19,
	ObjectTypeQuery21              = 20,
	ObjectTypeQuery22              = 21,
	ObjectTypeQuery23              = 22,
	ObjectTypeQuery24              = 23,
	ObjectTypeQuery25              = 24,
	ObjectTypeQuery26              = 25,
	ObjectTypeQuery27              = 26,
	ObjectTypeQuery28              = 27,
	ObjectTypeQuery29              = 28,
	ObjectTypeQuery30              = 29,
	ObjectTypeQuery31              = 30,
	ObjectTypeQuery32              = 31,
	ObjectTypeQuery_MAX            = 32,
	EObjectTypeQuery_MAX           = 33
};


// Enum Engine.EDrawDebugTrace
enum class EDrawDebugTrace : uint8_t
{
	None                           = 0,
	ForOneFrame                    = 1,
	ForDuration                    = 2,
	Persistent                     = 3,
	EDrawDebugTrace_MAX            = 4
};


// Enum Engine.ETraceTypeQuery
enum class ETraceTypeQuery : uint8_t
{
	TraceTypeQuery1                = 0,
	TraceTypeQuery2                = 1,
	TraceTypeQuery3                = 2,
	TraceTypeQuery4                = 3,
	TraceTypeQuery5                = 4,
	TraceTypeQuery6                = 5,
	TraceTypeQuery7                = 6,
	TraceTypeQuery8                = 7,
	TraceTypeQuery9                = 8,
	TraceTypeQuery10               = 9,
	TraceTypeQuery11               = 10,
	TraceTypeQuery12               = 11,
	TraceTypeQuery13               = 12,
	TraceTypeQuery14               = 13,
	TraceTypeQuery15               = 14,
	TraceTypeQuery16               = 15,
	TraceTypeQuery17               = 16,
	TraceTypeQuery18               = 17,
	TraceTypeQuery19               = 18,
	TraceTypeQuery20               = 19,
	TraceTypeQuery21               = 20,
	TraceTypeQuery22               = 21,
	TraceTypeQuery23               = 22,
	TraceTypeQuery24               = 23,
	TraceTypeQuery25               = 24,
	TraceTypeQuery26               = 25,
	TraceTypeQuery27               = 26,
	TraceTypeQuery28               = 27,
	TraceTypeQuery29               = 28,
	TraceTypeQuery30               = 29,
	TraceTypeQuery31               = 30,
	TraceTypeQuery32               = 31,
	TraceTypeQuery_MAX             = 32,
	ETraceTypeQuery_MAX            = 33
};


// Enum Engine.EMoveComponentAction
enum class EMoveComponentAction : uint8_t
{
	Move                           = 0,
	Stop                           = 1,
	Return                         = 2,
	EMoveComponentAction_MAX       = 3
};


// Enum Engine.EQuitPreference
enum class EQuitPreference : uint8_t
{
	Quit                           = 0,
	Background                     = 1,
	EQuitPreference_MAX            = 2
};


// Enum Engine.EMouseLockMode
enum class EMouseLockMode : uint8_t
{
	DoNotLock                      = 0,
	LockOnCapture                  = 1,
	LockAlways                     = 2,
	LockInFullscreen               = 3,
	EMouseLockMode_MAX             = 4
};


// Enum Engine.EWindowTitleBarMode
enum class EWindowTitleBarMode : uint8_t
{
	Overlay                        = 0,
	VerticalBox                    = 1,
	EWindowTitleBarMode_MAX        = 2
};


// Enum Engine.ERoundingMode
enum class ERoundingMode : uint8_t
{
	HalfToEven                     = 0,
	HalfFromZero                   = 1,
	HalfToZero                     = 2,
	FromZero                       = 3,
	ToZero                         = 4,
	ToNegativeInfinity             = 5,
	ToPositiveInfinity             = 6,
	ERoundingMode_MAX              = 7
};


// Enum Engine.EInputEvent
enum class EInputEvent : uint8_t
{
	IE_Pressed                     = 0,
	IE_Released                    = 1,
	IE_Repeat                      = 2,
	IE_DoubleClick                 = 3,
	IE_Axis                        = 4,
	IE_MAX                         = 5
};


// Enum Engine.EFastArraySerializerDeltaFlags
enum class EFastArraySerializerDeltaFlags : uint8_t
{
	None                           = 0,
	HasBeenSerialized              = 1,
	HasDeltaBeenRequested          = 2,
	IsUsingDeltaSerialization      = 3,
	EFastArraySerializerDeltaFlags_MAX = 4
};


// Enum Engine.EPhysicalSurface
enum class EPhysicalSurface : uint8_t
{
	SurfaceType_Default            = 0,
	SurfaceType1                   = 1,
	SurfaceType2                   = 2,
	SurfaceType3                   = 3,
	SurfaceType4                   = 4,
	SurfaceType5                   = 5,
	SurfaceType6                   = 6,
	SurfaceType7                   = 7,
	SurfaceType8                   = 8,
	SurfaceType9                   = 9,
	SurfaceType10                  = 10,
	SurfaceType11                  = 11,
	SurfaceType12                  = 12,
	SurfaceType13                  = 13,
	SurfaceType14                  = 14,
	SurfaceType15                  = 15,
	SurfaceType16                  = 16,
	SurfaceType17                  = 17,
	SurfaceType18                  = 18,
	SurfaceType19                  = 19,
	SurfaceType20                  = 20,
	SurfaceType21                  = 21,
	SurfaceType22                  = 22,
	SurfaceType23                  = 23,
	SurfaceType24                  = 24,
	SurfaceType25                  = 25,
	SurfaceType26                  = 26,
	SurfaceType27                  = 27,
	SurfaceType28                  = 28,
	SurfaceType29                  = 29,
	SurfaceType30                  = 30,
	SurfaceType31                  = 31,
	SurfaceType32                  = 32,
	SurfaceType33                  = 33,
	SurfaceType34                  = 34,
	SurfaceType35                  = 35,
	SurfaceType36                  = 36,
	SurfaceType37                  = 37,
	SurfaceType38                  = 38,
	SurfaceType39                  = 39,
	SurfaceType40                  = 40,
	SurfaceType41                  = 41,
	SurfaceType42                  = 42,
	SurfaceType43                  = 43,
	SurfaceType44                  = 44,
	SurfaceType45                  = 45,
	SurfaceType46                  = 46,
	SurfaceType47                  = 47,
	SurfaceType48                  = 48,
	SurfaceType49                  = 49,
	SurfaceType50                  = 50,
	SurfaceType51                  = 51,
	SurfaceType52                  = 52,
	SurfaceType53                  = 53,
	SurfaceType54                  = 54,
	SurfaceType55                  = 55,
	SurfaceType56                  = 56,
	SurfaceType57                  = 57,
	SurfaceType58                  = 58,
	SurfaceType59                  = 59,
	SurfaceType60                  = 60,
	SurfaceType61                  = 61,
	SurfaceType62                  = 62,
	SurfaceType_Max                = 63,
	EPhysicalSurface_MAX           = 64
};


// Enum Engine.ENetRole
enum class ENetRole : uint8_t
{
	ROLE_None                      = 0,
	ROLE_SimulatedProxy            = 1,
	ROLE_AutonomousProxy           = 2,
	ROLE_Authority                 = 3,
	ROLE_MAX                       = 4
};


// Enum Engine.EAttachLocation
enum class EAttachLocation : uint8_t
{
	KeepRelativeOffset             = 0,
	KeepWorldPosition              = 1,
	SnapToTarget                   = 2,
	SnapToTargetIncludingScale     = 3,
	EAttachLocation_MAX            = 4
};


// Enum Engine.EAttachmentRule
enum class EAttachmentRule : uint8_t
{
	KeepRelative                   = 0,
	KeepWorld                      = 1,
	SnapToTarget                   = 2,
	EAttachmentRule_MAX            = 3
};


// Enum Engine.EDetachmentRule
enum class EDetachmentRule : uint8_t
{
	KeepRelative                   = 0,
	KeepWorld                      = 1,
	EDetachmentRule_MAX            = 2
};


// Enum Engine.ENetDormancy
enum class ENetDormancy : uint8_t
{
	DORM_Never                     = 0,
	DORM_Awake                     = 1,
	DORM_DormantAll                = 2,
	DORM_DormantPartial            = 3,
	DORM_Initial                   = 4,
	DORM_MAX                       = 5
};


// Enum Engine.EAutoReceiveInput
enum class EAutoReceiveInput : uint8_t
{
	Disabled                       = 0,
	Player0                        = 1,
	Player1                        = 2,
	Player2                        = 3,
	Player3                        = 4,
	Player4                        = 5,
	Player5                        = 6,
	Player6                        = 7,
	Player7                        = 8,
	EAutoReceiveInput_MAX          = 9
};


// Enum Engine.ESpawnActorCollisionHandlingMethod
enum class ESpawnActorCollisionHandlingMethod : uint8_t
{
	Undefined                      = 0,
	AlwaysSpawn                    = 1,
	AdjustIfPossibleButAlwaysSpawn = 2,
	AdjustIfPossibleButDontSpawnIfColliding = 3,
	DontSpawnIfColliding           = 4,
	ESpawnActorCollisionHandlingMethod_MAX = 5
};


// Enum Engine.ERotatorQuantization
enum class ERotatorQuantization : uint8_t
{
	ByteComponents                 = 0,
	ShortComponents                = 1,
	ERotatorQuantization_MAX       = 2
};


// Enum Engine.EVectorQuantization
enum class EVectorQuantization : uint8_t
{
	RoundWholeNumber               = 0,
	RoundOneDecimal                = 1,
	RoundTwoDecimals               = 2,
	EVectorQuantization_MAX        = 3
};


// Enum Engine.EActorUpdateOverlapsMethod
enum class EActorUpdateOverlapsMethod : uint8_t
{
	UseConfigDefault               = 0,
	AlwaysUpdate                   = 1,
	OnlyUpdateMovable              = 2,
	NeverUpdate                    = 3,
	EActorUpdateOverlapsMethod_MAX = 4
};


// Enum Engine.ECameraAnimPlaySpace
enum class ECameraAnimPlaySpace : uint8_t
{
	CameraLocal                    = 0,
	World                          = 1,
	UserDefined                    = 2,
	ECameraAnimPlaySpace_MAX       = 3
};


// Enum Engine.EViewTargetBlendFunction
enum class EViewTargetBlendFunction : uint8_t
{
	VTBlend_Linear                 = 0,
	VTBlend_Cubic                  = 1,
	VTBlend_EaseIn                 = 2,
	VTBlend_EaseOut                = 3,
	VTBlend_EaseInOut              = 4,
	VTBlend_MAX                    = 5
};


// Enum Engine.ETravelType
enum class ETravelType : uint8_t
{
	TRAVEL_Absolute                = 0,
	TRAVEL_Partial                 = 1,
	TRAVEL_Relative                = 2,
	TRAVEL_MAX                     = 3
};


// Enum Engine.ECollisionChannel
enum class ECollisionChannel : uint8_t
{
	ECC_WorldStatic                = 0,
	ECC_WorldDynamic               = 1,
	ECC_Pawn                       = 2,
	ECC_Visibility                 = 3,
	ECC_Camera                     = 4,
	ECC_PhysicsBody                = 5,
	ECC_Vehicle                    = 6,
	ECC_Destructible               = 7,
	ECC_EngineTraceChannel1        = 8,
	ECC_EngineTraceChannel2        = 9,
	ECC_EngineTraceChannel3        = 10,
	ECC_EngineTraceChannel4        = 11,
	ECC_EngineTraceChannel5        = 12,
	ECC_EngineTraceChannel6        = 13,
	ECC_GameTraceChannel1          = 14,
	ECC_GameTraceChannel2          = 15,
	ECC_GameTraceChannel3          = 16,
	ECC_GameTraceChannel4          = 17,
	ECC_GameTraceChannel5          = 18,
	ECC_GameTraceChannel6          = 19,
	ECC_GameTraceChannel7          = 20,
	ECC_GameTraceChannel8          = 21,
	ECC_GameTraceChannel9          = 22,
	ECC_GameTraceChannel10         = 23,
	ECC_GameTraceChannel11         = 24,
	ECC_GameTraceChannel12         = 25,
	ECC_GameTraceChannel13         = 26,
	ECC_GameTraceChannel14         = 27,
	ECC_GameTraceChannel15         = 28,
	ECC_GameTraceChannel16         = 29,
	ECC_GameTraceChannel17         = 30,
	ECC_GameTraceChannel18         = 31,
	ECC_OverlapAll_Deprecated      = 32,
	ECC_MAX                        = 33
};


// Enum Engine.EControllerAnalogStick
enum class EControllerAnalogStick : uint8_t
{
	CAS_LeftStick                  = 0,
	CAS_RightStick                 = 1,
	CAS_MAX                        = 2
};


// Enum Engine.EDynamicForceFeedbackAction
enum class EDynamicForceFeedbackAction : uint8_t
{
	Start                          = 0,
	Update                         = 1,
	Stop                           = 2,
	EDynamicForceFeedbackAction_MAX = 3
};


// Enum Engine.ERelativeTransformSpace
enum class ERelativeTransformSpace : uint8_t
{
	RTS_World                      = 0,
	RTS_Actor                      = 1,
	RTS_Component                  = 2,
	RTS_ParentBoneSpace            = 3,
	RTS_MAX                        = 4
};


// Enum Engine.EComponentMobility
enum class EComponentMobility : uint8_t
{
	Static                         = 0,
	Stationary                     = 1,
	Movable                        = 2,
	EComponentMobility_MAX         = 3
};


// Enum Engine.EDetailMode
enum class EDetailMode : uint8_t
{
	DM_Low                         = 0,
	DM_Medium                      = 1,
	DM_High                        = 2,
	DM_MAX                         = 3
};


// Enum Engine.EAlphaBlendOption
enum class EAlphaBlendOption : uint8_t
{
	Linear                         = 0,
	Cubic                          = 1,
	HermiteCubic                   = 2,
	Sinusoidal                     = 3,
	QuadraticInOut                 = 4,
	CubicInOut                     = 5,
	QuarticInOut                   = 6,
	QuinticInOut                   = 7,
	CircularIn                     = 8,
	CircularOut                    = 9,
	CircularInOut                  = 10,
	ExpIn                          = 11,
	ExpOut                         = 12,
	ExpInOut                       = 13,
	Custom                         = 14,
	EAlphaBlendOption_MAX          = 15
};


// Enum Engine.EAnimGroupRole
enum class EAnimGroupRole : uint8_t
{
	CanBeLeader                    = 0,
	AlwaysFollower                 = 1,
	AlwaysLeader                   = 2,
	TransitionLeader               = 3,
	TransitionFollower             = 4,
	EAnimGroupRole_MAX             = 5
};


// Enum Engine.AnimationKeyFormat
enum class EAnimationKeyFormat : uint8_t
{
	AKF_ConstantKeyLerp            = 0,
	AKF_VariableKeyLerp            = 1,
	AKF_PerTrackCompression        = 2,
	AKF_MAX                        = 3
};


// Enum Engine.ERawCurveTrackTypes
enum class ERawCurveTrackTypes : uint8_t
{
	RCT_Float                      = 0,
	RCT_Vector                     = 1,
	RCT_Transform                  = 2,
	RCT_MAX                        = 3
};


// Enum Engine.EAnimAssetCurveFlags
enum class EAnimAssetCurveFlags : uint8_t
{
	AACF_DriveMorphTarget_DEPRECATED = 0,
	AACF_DriveAttribute_DEPRECATED = 1,
	AACF_Editable                  = 2,
	AACF_DriveMaterial_DEPRECATED  = 3,
	AACF_Metadata                  = 4,
	AACF_DriveTrack                = 5,
	AACF_Disabled                  = 6,
	AACF_MAX                       = 7
};


// Enum Engine.AnimationCompressionFormat
enum class EAnimationCompressionFormat : uint8_t
{
	ACF_None                       = 0,
	ACF_Float96NoW                 = 1,
	ACF_Fixed48NoW                 = 2,
	ACF_IntervalFixed32NoW         = 3,
	ACF_Fixed32NoW                 = 4,
	ACF_Float32NoW                 = 5,
	ACF_Identity                   = 6,
	ACF_MAX                        = 7
};


// Enum Engine.EAdditiveBasePoseType
enum class EAdditiveBasePoseType : uint8_t
{
	ABPT_None                      = 0,
	ABPT_RefPose                   = 1,
	ABPT_AnimScaled                = 2,
	ABPT_AnimFrame                 = 3,
	ABPT_MAX                       = 4
};


// Enum Engine.ERootMotionMode
enum class ERootMotionMode : uint8_t
{
	NoRootMotionExtraction         = 0,
	IgnoreRootMotion               = 1,
	RootMotionFromEverything       = 2,
	RootMotionFromMontagesOnly     = 3,
	ERootMotionMode_MAX            = 4
};


// Enum Engine.ERootMotionRootLock
enum class ERootMotionRootLock : uint8_t
{
	RefPose                        = 0,
	AnimFirstFrame                 = 1,
	Zero                           = 2,
	ERootMotionRootLock_MAX        = 3
};


// Enum Engine.EMontagePlayReturnType
enum class EMontagePlayReturnType : uint8_t
{
	MontageLength                  = 0,
	Duration                       = 1,
	EMontagePlayReturnType_MAX     = 2
};


// Enum Engine.EDrawDebugItemType
enum class EDrawDebugItemType : uint8_t
{
	DirectionalArrow               = 0,
	Sphere                         = 1,
	Line                           = 2,
	OnScreenMessage                = 3,
	CoordinateSystem               = 4,
	EDrawDebugItemType_MAX         = 5
};


// Enum Engine.EAnimLinkMethod
enum class EAnimLinkMethod : uint8_t
{
	Absolute                       = 0,
	Relative                       = 1,
	Proportional                   = 2,
	EAnimLinkMethod_MAX            = 3
};


// Enum Engine.EMontageSubStepResult
enum class EMontageSubStepResult : uint8_t
{
	Moved                          = 0,
	NotMoved                       = 1,
	InvalidSection                 = 2,
	InvalidMontage                 = 3,
	EMontageSubStepResult_MAX      = 4
};


// Enum Engine.EAnimNotifyEventType
enum class EAnimNotifyEventType : uint8_t
{
	Begin                          = 0,
	End                            = 1,
	EAnimNotifyEventType_MAX       = 2
};


// Enum Engine.EEvaluatorMode
enum class EEvaluatorMode : uint8_t
{
	EM_Standard                    = 0,
	EM_Freeze                      = 1,
	EM_DelayedFreeze               = 2,
	EM_MAX                         = 3
};


// Enum Engine.EEvaluatorDataSource
enum class EEvaluatorDataSource : uint8_t
{
	EDS_SourcePose                 = 0,
	EDS_DestinationPose            = 1,
	EDS_MAX                        = 2
};


// Enum Engine.ECopyType
enum class ECopyType : uint8_t
{
	MemCopy                        = 0,
	BoolProperty                   = 1,
	StructProperty                 = 2,
	ObjectProperty                 = 3,
	ECopyType_MAX                  = 4
};


// Enum Engine.EPostCopyOperation
enum class EPostCopyOperation : uint8_t
{
	None                           = 0,
	LogicalNegateBool              = 1,
	EPostCopyOperation_MAX         = 2
};


// Enum Engine.EPinHidingMode
enum class EPinHidingMode : uint8_t
{
	NeverAsPin                     = 0,
	PinHiddenByDefault             = 1,
	PinShownByDefault              = 2,
	AlwaysAsPin                    = 3,
	EPinHidingMode_MAX             = 4
};


// Enum Engine.AnimPhysCollisionType
enum class EAnimPhysCollisionType : uint8_t
{
	CoM                            = 0,
	CustomSphere                   = 1,
	InnerSphere                    = 2,
	OuterSphere                    = 3,
	AnimPhysCollisionType_MAX      = 4
};


// Enum Engine.AnimPhysTwistAxis
enum class EAnimPhysTwistAxis : uint8_t
{
	AxisX                          = 0,
	AxisY                          = 1,
	AxisZ                          = 2,
	AnimPhysTwistAxis_MAX          = 3
};


// Enum Engine.ETypeAdvanceAnim
enum class ETypeAdvanceAnim : uint8_t
{
	ETAA_Default                   = 0,
	ETAA_Finished                  = 1,
	ETAA_Looped                    = 2,
	ETAA_MAX                       = 3
};


// Enum Engine.ETransitionLogicType
enum class ETransitionLogicType : uint8_t
{
	TLT_StandardBlend              = 0,
	TLT_Custom                     = 1,
	TLT_MAX                        = 2
};


// Enum Engine.ETransitionBlendMode
enum class ETransitionBlendMode : uint8_t
{
	TBM_Linear                     = 0,
	TBM_Cubic                      = 1,
	TBM_MAX                        = 2
};


// Enum Engine.EComponentType
enum class EComponentType : uint8_t
{
	None                           = 0,
	TranslationX                   = 1,
	TranslationY                   = 2,
	TranslationZ                   = 3,
	RotationX                      = 4,
	RotationY                      = 5,
	RotationZ                      = 6,
	Scale                          = 7,
	ScaleX                         = 8,
	ScaleY                         = 9,
	ScaleZ                         = 10,
	EComponentType_MAX             = 11
};


// Enum Engine.EAxisOption
enum class EAxisOption : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	X_Neg                          = 3,
	Y_Neg                          = 4,
	Z_Neg                          = 5,
	Custom                         = 6,
	EAxisOption_MAX                = 7
};


// Enum Engine.EAnimInterpolationType
enum class EAnimInterpolationType : uint8_t
{
	Linear                         = 0,
	Step                           = 1,
	EAnimInterpolationType_MAX     = 2
};


// Enum Engine.ECurveBlendOption
enum class ECurveBlendOption : uint8_t
{
	MaxWeight                      = 0,
	NormalizeByWeight              = 1,
	BlendByWeight                  = 2,
	ECurveBlendOption_MAX          = 3
};


// Enum Engine.EAdditiveAnimationType
enum class EAdditiveAnimationType : uint8_t
{
	AAT_None                       = 0,
	AAT_LocalSpaceBase             = 1,
	AAT_RotationOffsetMeshSpace    = 2,
	AAT_MAX                        = 3
};


// Enum Engine.ENotifyFilterType
enum class ENotifyFilterType : uint8_t
{
	NoFiltering                    = 0,
	LOD                            = 1,
	ENotifyFilterType_MAX          = 2
};


// Enum Engine.EMontageNotifyTickType
enum class EMontageNotifyTickType : uint8_t
{
	Queued                         = 0,
	BranchingPoint                 = 1,
	EMontageNotifyTickType_MAX     = 2
};


// Enum Engine.EBoneRotationSource
enum class EBoneRotationSource : uint8_t
{
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation     = 1,
	BRS_CopyFromTarget             = 2,
	BRS_MAX                        = 3
};


// Enum Engine.EBoneControlSpace
enum class EBoneControlSpace : uint8_t
{
	BCS_WorldSpace                 = 0,
	BCS_ComponentSpace             = 1,
	BCS_ParentBoneSpace            = 2,
	BCS_BoneSpace                  = 3,
	BCS_MAX                        = 4
};


// Enum Engine.EBoneAxis
enum class EBoneAxis : uint8_t
{
	BA_X                           = 0,
	BA_Y                           = 1,
	BA_Z                           = 2,
	BA_MAX                         = 3
};


// Enum Engine.EPrimaryAssetCookRule
enum class EPrimaryAssetCookRule : uint8_t
{
	Unknown                        = 0,
	NeverCook                      = 1,
	DevelopmentCook                = 2,
	DevelopmentAlwaysCook          = 3,
	AlwaysCook                     = 4,
	EPrimaryAssetCookRule_MAX      = 5
};


// Enum Engine.EAttenuationShape
enum class EAttenuationShape : uint8_t
{
	Sphere                         = 0,
	Capsule                        = 1,
	Box                            = 2,
	Cone                           = 3,
	EAttenuationShape_MAX          = 4
};


// Enum Engine.EAttenuationDistanceModel
enum class EAttenuationDistanceModel : uint8_t
{
	Linear                         = 0,
	Logarithmic                    = 1,
	Inverse                        = 2,
	LogReverse                     = 3,
	NaturalSound                   = 4,
	Custom                         = 5,
	EAttenuationDistanceModel_MAX  = 6
};


// Enum Engine.EMonoChannelUpmixMethod
enum class EMonoChannelUpmixMethod : uint8_t
{
	Linear                         = 0,
	EqualPower                     = 1,
	FullVolume                     = 2,
	EMonoChannelUpmixMethod_MAX    = 3
};


// Enum Engine.EPanningMethod
enum class EPanningMethod : uint8_t
{
	Linear                         = 0,
	EqualPower                     = 1,
	EPanningMethod_MAX             = 2
};


// Enum Engine.EVoiceSampleRate
enum class EVoiceSampleRate : uint8_t
{
	Low16000Hz                     = 0,
	Normal24000Hz                  = 1,
	EVoiceSampleRate_MAX           = 2
};


// Enum Engine.ReverbPreset
enum class EReverbPreset : uint8_t
{
	REVERB_Default                 = 0,
	REVERB_Bathroom                = 1,
	REVERB_StoneRoom               = 2,
	REVERB_Auditorium              = 3,
	REVERB_ConcertHall             = 4,
	REVERB_Cave                    = 5,
	REVERB_Hallway                 = 6,
	REVERB_StoneCorridor           = 7,
	REVERB_Alley                   = 8,
	REVERB_Forest                  = 9,
	REVERB_City                    = 10,
	REVERB_Mountains               = 11,
	REVERB_Quarry                  = 12,
	REVERB_Plain                   = 13,
	REVERB_ParkingLot              = 14,
	REVERB_SewerPipe               = 15,
	REVERB_Underwater              = 16,
	REVERB_SmallRoom               = 17,
	REVERB_MediumRoom              = 18,
	REVERB_LargeRoom               = 19,
	REVERB_MediumHall              = 20,
	REVERB_LargeHall               = 21,
	REVERB_Plate                   = 22,
	REVERB_MAX                     = 23
};


// Enum Engine.EBlendableLocation
enum class EBlendableLocation : uint8_t
{
	BL_AfterTonemapping            = 0,
	BL_BeforeTonemapping           = 1,
	BL_BeforeTranslucency          = 2,
	BL_ReplacingTonemapper         = 3,
	BL_SSRInput                    = 4,
	BL_MAX                         = 5
};


// Enum Engine.ENotifyTriggerMode
enum class ENotifyTriggerMode : uint8_t
{
	AllAnimations                  = 0,
	HighestWeightedAnimation       = 1,
	None                           = 2,
	ENotifyTriggerMode_MAX         = 3
};


// Enum Engine.EBlendSpaceAxis
enum class EBlendSpaceAxis : uint8_t
{
	BSA_None                       = 0,
	BSA_X                          = 1,
	BSA_Y                          = 2,
	BSA_Max                        = 3
};


// Enum Engine.EBlueprintNativizationFlag
enum class EBlueprintNativizationFlag : uint8_t
{
	Disabled                       = 0,
	Dependency                     = 1,
	ExplicitlyEnabled              = 2,
	EBlueprintNativizationFlag_MAX = 3
};


// Enum Engine.EBlueprintCompileMode
enum class EBlueprintCompileMode : uint8_t
{
	Default                        = 0,
	Development                    = 1,
	FinalRelease                   = 2,
	EBlueprintCompileMode_MAX      = 3
};


// Enum Engine.EBlueprintType
enum class EBlueprintType : uint8_t
{
	BPTYPE_Normal                  = 0,
	BPTYPE_Const                   = 1,
	BPTYPE_MacroLibrary            = 2,
	BPTYPE_Interface               = 3,
	BPTYPE_LevelScript             = 4,
	BPTYPE_FunctionLibrary         = 5,
	BPTYPE_MAX                     = 6
};


// Enum Engine.EBlueprintStatus
enum class EBlueprintStatus : uint8_t
{
	BS_Unknown                     = 0,
	BS_Dirty                       = 1,
	BS_Error                       = 2,
	BS_UpToDate                    = 3,
	BS_BeingCreated                = 4,
	BS_UpToDateWithWarnings        = 5,
	BS_MAX                         = 6
};


// Enum Engine.EDOFMode
enum class EDOFMode : uint8_t
{
	Default                        = 0,
	SixDOF                         = 1,
	YZPlane                        = 2,
	XZPlane                        = 3,
	XYPlane                        = 4,
	CustomPlane                    = 5,
	None                           = 6,
	EDOFMode_MAX                   = 7
};


// Enum Engine.EBodyCollisionResponse
enum class EBodyCollisionResponse : uint8_t
{
	BodyCollision_Enabled          = 0,
	BodyCollision_Disabled         = 1,
	BodyCollision_MAX              = 2
};


// Enum Engine.EPhysicsType
enum class EPhysicsType : uint8_t
{
	PhysType_Default               = 0,
	PhysType_Kinematic             = 1,
	PhysType_Simulated             = 2,
	PhysType_MAX                   = 3
};


// Enum Engine.ECollisionTraceFlag
enum class ECollisionTraceFlag : uint8_t
{
	CTF_UseDefault                 = 0,
	CTF_UseSimpleAndComplex        = 1,
	CTF_UseSimpleAsComplex         = 2,
	CTF_UseComplexAsSimple         = 3,
	CTF_MAX                        = 4
};


// Enum Engine.EBrushType
enum class EBrushType : uint8_t
{
	Brush_Default                  = 0,
	Brush_Add                      = 1,
	Brush_Subtract                 = 2,
	Brush_MAX                      = 3
};


// Enum Engine.ECsgOper
enum class ECsgOper : uint8_t
{
	CSG_Active                     = 0,
	CSG_Add                        = 1,
	CSG_Subtract                   = 2,
	CSG_Intersect                  = 3,
	CSG_Deintersect                = 4,
	CSG_None                       = 5,
	CSG_MAX                        = 6
};


// Enum Engine.EInitialOscillatorOffset
enum class EInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom               = 0,
	EOO_OffsetZero                 = 1,
	EOO_MAX                        = 2
};


// Enum Engine.EOscillatorWaveform
enum class EOscillatorWaveform : uint8_t
{
	SineWave                       = 0,
	PerlinNoise                    = 1,
	EOscillatorWaveform_MAX        = 2
};


// Enum Engine.ECameraAlphaBlendMode
enum class ECameraAlphaBlendMode : uint8_t
{
	CABM_Linear                    = 0,
	CABM_Cubic                     = 1,
	CABM_MAX                       = 2
};


// Enum Engine.ECameraProjectionMode
enum class ECameraProjectionMode : uint8_t
{
	Perspective                    = 0,
	Orthographic                   = 1,
	ECameraProjectionMode_MAX      = 2
};


// Enum Engine.ECloudStorageDelegate
enum class ECloudStorageDelegate : uint8_t
{
	CSD_KeyValueReadComplete       = 0,
	CSD_KeyValueWriteComplete      = 1,
	CSD_ValueChanged               = 2,
	CSD_DocumentQueryComplete      = 3,
	CSD_DocumentReadComplete       = 4,
	CSD_DocumentWriteComplete      = 5,
	CSD_DocumentConflictDetected   = 6,
	CSD_MAX                        = 7
};


// Enum Engine.EAngularDriveMode
enum class EAngularDriveMode : uint8_t
{
	SLERP                          = 0,
	TwistAndSwing                  = 1,
	EAngularDriveMode_MAX          = 2
};


// Enum Engine.ELinearConstraintMotion
enum class ELinearConstraintMotion : uint8_t
{
	LCM_Free                       = 0,
	LCM_Limited                    = 1,
	LCM_Locked                     = 2,
	LCM_MAX                        = 3
};


// Enum Engine.ECurveTableMode
enum class ECurveTableMode : uint8_t
{
	Empty                          = 0,
	SimpleCurves                   = 1,
	RichCurves                     = 2,
	ECurveTableMode_MAX            = 3
};


// Enum Engine.EEvaluateCurveTableResult
enum class EEvaluateCurveTableResult : uint8_t
{
	RowFound                       = 0,
	RowNotFound                    = 1,
	EEvaluateCurveTableResult_MAX  = 2
};


// Enum Engine.EGrammaticalNumber
enum class EGrammaticalNumber : uint8_t
{
	Singular                       = 0,
	Plural                         = 1,
	EGrammaticalNumber_MAX         = 2
};


// Enum Engine.EGrammaticalGender
enum class EGrammaticalGender : uint8_t
{
	Neuter                         = 0,
	Masculine                      = 1,
	Feminine                       = 2,
	Mixed                          = 3,
	EGrammaticalGender_MAX         = 4
};


// Enum Engine.DistributionParamMode
enum class EDistributionParamMode : uint8_t
{
	DPM_Normal                     = 0,
	DPM_Abs                        = 1,
	DPM_Direct                     = 2,
	DPM_MAX                        = 3
};


// Enum Engine.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : uint8_t
{
	EDVMF_Same                     = 0,
	EDVMF_Different                = 1,
	EDVMF_Mirror                   = 2,
	EDVMF_MAX                      = 3
};


// Enum Engine.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : uint8_t
{
	EDVLF_None                     = 0,
	EDVLF_XY                       = 1,
	EDVLF_XZ                       = 2,
	EDVLF_YZ                       = 3,
	EDVLF_XYZ                      = 4,
	EDVLF_MAX                      = 5
};


// Enum Engine.ENodeEnabledState
enum class ENodeEnabledState : uint8_t
{
	Enabled                        = 0,
	Disabled                       = 1,
	DevelopmentOnly                = 2,
	ENodeEnabledState_MAX          = 3
};


// Enum Engine.ENodeAdvancedPins
enum class ENodeAdvancedPins : uint8_t
{
	NoPins                         = 0,
	Shown                          = 1,
	Hidden                         = 2,
	ENodeAdvancedPins_MAX          = 3
};


// Enum Engine.ENodeTitleType
enum class ENodeTitleType : uint8_t
{
	FullTitle                      = 0,
	ListView                       = 1,
	EditableTitle                  = 2,
	MenuTitle                      = 3,
	MAX_TitleTypes                 = 4,
	ENodeTitleType_MAX             = 5
};


// Enum Engine.EPinContainerType
enum class EPinContainerType : uint8_t
{
	None                           = 0,
	Array                          = 1,
	Set                            = 2,
	Map                            = 3,
	EPinContainerType_MAX          = 4
};


// Enum Engine.EEdGraphPinDirection
enum class EEdGraphPinDirection : uint8_t
{
	EGPD_Input                     = 0,
	EGPD_Output                    = 1,
	EGPD_MAX                       = 2
};


// Enum Engine.EBlueprintPinStyleType
enum class EBlueprintPinStyleType : uint8_t
{
	BPST_Original                  = 0,
	BPST_VariantA                  = 1,
	BPST_MAX                       = 2
};


// Enum Engine.ECanCreateConnectionResponse
enum class ECanCreateConnectionResponse : uint8_t
{
	CONNECT_RESPONSE_MAKE          = 0,
	CONNECT_RESPONSE_DISALLOW      = 1,
	CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
	CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
	CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
	CONNECT_RESPONSE_MAX           = 6
};


// Enum Engine.EGraphType
enum class EGraphType : uint8_t
{
	GT_Function                    = 0,
	GT_Ubergraph                   = 1,
	GT_Macro                       = 2,
	GT_Animation                   = 3,
	GT_StateMachine                = 4,
	GT_MAX                         = 5
};


// Enum Engine.EConsoleType
enum class EConsoleType : uint8_t
{
	Any                            = 0,
	Mobile                         = 1,
	MAX                            = 2
};


// Enum Engine.ETransitionType
enum class ETransitionType : uint8_t
{
	None                           = 0,
	Paused                         = 1,
	Loading                        = 2,
	Saving                         = 3,
	Connecting                     = 4,
	Precaching                     = 5,
	WaitingToConnect               = 6,
	MAX                            = 7
};


// Enum Engine.EFullyLoadPackageType
enum class EFullyLoadPackageType : uint8_t
{
	FULLYLOAD_Map                  = 0,
	FULLYLOAD_Game_PreLoadClass    = 1,
	FULLYLOAD_Game_PostLoadClass   = 2,
	FULLYLOAD_Always               = 3,
	FULLYLOAD_Mutator              = 4,
	FULLYLOAD_MAX                  = 5
};


// Enum Engine.EViewModeIndex
enum class EViewModeIndex : uint8_t
{
	VMI_BrushWireframe             = 0,
	VMI_Wireframe                  = 1,
	VMI_Unlit                      = 2,
	VMI_Lit                        = 3,
	VMI_Lit_DetailLighting         = 4,
	VMI_LightingOnly               = 5,
	VMI_LightComplexity            = 6,
	VMI_ShaderComplexity           = 7,
	VMI_LightmapDensity            = 8,
	VMI_LitLightmapDensity         = 9,
	VMI_ReflectionOverride         = 10,
	VMI_VisualizeBuffer            = 11,
	VMI_StationaryLightOverlap     = 12,
	VMI_CollisionPawn              = 13,
	VMI_CollisionVisibility        = 14,
	VMI_LODColoration              = 15,
	VMI_QuadOverdraw               = 16,
	VMI_PrimitiveDistanceAccuracy  = 17,
	VMI_MeshUVDensityAccuracy      = 18,
	VMI_ShaderComplexityWithQuadOverdraw = 19,
	VMI_HLODColoration             = 20,
	VMI_GroupLODColoration         = 21,
	VMI_MaterialTextureScaleAccuracy = 22,
	VMI_RequiredTextureResolution  = 23,
	VMI_PathTracing                = 24,
	VMI_RayTracingDebug            = 25,
	VMI_Max                        = 26,
	VMI_Unknown                    = 27
};


// Enum Engine.EDemoPlayFailure
enum class EDemoPlayFailure : uint8_t
{
	Generic                        = 0,
	DemoNotFound                   = 1,
	Corrupt                        = 2,
	InvalidVersion                 = 3,
	InitBase                       = 4,
	GameSpecificHeader             = 5,
	ReplayStreamerInternal         = 6,
	LoadMap                        = 7,
	Serialization                  = 8,
	EDemoPlayFailure_MAX           = 9
};


// Enum Engine.ENetworkLagState
enum class ENetworkLagState : uint8_t
{
	NotLagging                     = 0,
	Lagging                        = 1,
	ENetworkLagState_MAX           = 2
};


// Enum Engine.EMouseCaptureMode
enum class EMouseCaptureMode : uint8_t
{
	NoCapture                      = 0,
	CapturePermanently             = 1,
	CapturePermanently_IncludingInitialMouseDown = 2,
	CaptureDuringMouseDown         = 3,
	CaptureDuringRightMouseDown    = 4,
	EMouseCaptureMode_MAX          = 5
};


// Enum Engine.ECustomTimeStepSynchronizationState
enum class ECustomTimeStepSynchronizationState : uint8_t
{
	Closed                         = 0,
	Error                          = 1,
	Synchronized                   = 2,
	Synchronizing                  = 3,
	ECustomTimeStepSynchronizationState_MAX = 4
};


// Enum Engine.EMeshBufferAccess
enum class EMeshBufferAccess : uint8_t
{
	Default                        = 0,
	ForceCPUAndGPU                 = 1,
	EMeshBufferAccess_MAX          = 2
};


// Enum Engine.EConstraintFrame
enum class EConstraintFrame : uint8_t
{
	Frame1                         = 0,
	Frame2                         = 1,
	EConstraintFrame_MAX           = 2
};


// Enum Engine.EAngularConstraintMotion
enum class EAngularConstraintMotion : uint8_t
{
	ACM_Free                       = 0,
	ACM_Limited                    = 1,
	ACM_Locked                     = 2,
	ACM_MAX                        = 3
};


// Enum Engine.EComponentSocketType
enum class EComponentSocketType : uint8_t
{
	Invalid                        = 0,
	Bone                           = 1,
	Socket                         = 2,
	EComponentSocketType_MAX       = 3
};


// Enum Engine.EWalkableSlopeBehavior
enum class EWalkableSlopeBehavior : uint8_t
{
	WalkableSlope_Default          = 0,
	WalkableSlope_Increase         = 1,
	WalkableSlope_Decrease         = 2,
	WalkableSlope_Unwalkable       = 3,
	WalkableSlope_Max              = 4
};


// Enum Engine.EAutoPossessAI
enum class EAutoPossessAI : uint8_t
{
	Disabled                       = 0,
	PlacedInWorld                  = 1,
	Spawned                        = 2,
	PlacedInWorldOrSpawned         = 3,
	EAutoPossessAI_MAX             = 4
};


// Enum Engine.EUpdateRateShiftBucket
enum class EUpdateRateShiftBucket : uint8_t
{
	ShiftBucket0                   = 0,
	ShiftBucket1                   = 1,
	ShiftBucket2                   = 2,
	ShiftBucket3                   = 3,
	ShiftBucket4                   = 4,
	ShiftBucket5                   = 5,
	ShiftBucketMax                 = 6,
	EUpdateRateShiftBucket_MAX     = 7
};


// Enum Engine.EShadowMapFlags
enum class EShadowMapFlags : uint8_t
{
	SMF_None                       = 0,
	SMF_Streamed                   = 1,
	SMF_MAX                        = 2
};


// Enum Engine.ELightMapPaddingType
enum class ELightMapPaddingType : uint8_t
{
	LMPT_NormalPadding             = 0,
	LMPT_PrePadding                = 1,
	LMPT_NoPadding                 = 2,
	LMPT_MAX                       = 3
};


// Enum Engine.ECollisionEnabled
enum class ECollisionEnabled : uint8_t
{
	NoCollision                    = 0,
	QueryOnly                      = 1,
	PhysicsOnly                    = 2,
	QueryAndPhysics                = 3,
	ECollisionEnabled_MAX          = 4
};


// Enum Engine.ETimelineSigType
enum class ETimelineSigType : uint8_t
{
	ETS_EventSignature             = 0,
	ETS_FloatSignature             = 1,
	ETS_VectorSignature            = 2,
	ETS_LinearColorSignature       = 3,
	ETS_InvalidSignature           = 4,
	ETS_MAX                        = 5
};


// Enum Engine.ESleepFamily
enum class ESleepFamily : uint8_t
{
	Normal                         = 0,
	Sensitive                      = 1,
	Custom                         = 2,
	ESleepFamily_MAX               = 3
};


// Enum Engine.ERadialImpulseFalloff
enum class ERadialImpulseFalloff : uint8_t
{
	RIF_Constant                   = 0,
	RIF_Linear                     = 1,
	RIF_MAX                        = 2
};


// Enum Engine.EFilterInterpolationType
enum class EFilterInterpolationType : uint8_t
{
	BSIT_Average                   = 0,
	BSIT_Linear                    = 1,
	BSIT_Cubic                     = 2,
	BSIT_MAX                       = 3
};


// Enum Engine.ECollisionResponse
enum class ECollisionResponse : uint8_t
{
	ECR_Ignore                     = 0,
	ECR_Overlap                    = 1,
	ECR_Block                      = 2,
	ECR_MAX                        = 3
};


// Enum Engine.EOverlapFilterOption
enum class EOverlapFilterOption : uint8_t
{
	OverlapFilter_All              = 0,
	OverlapFilter_DynamicOnly      = 1,
	OverlapFilter_StaticOnly       = 2,
	OverlapFilter_MAX              = 3
};


// Enum Engine.ENetworkSmoothingMode
enum class ENetworkSmoothingMode : uint8_t
{
	Disabled                       = 0,
	Linear                         = 1,
	Exponential                    = 2,
	Replay                         = 3,
	ENetworkSmoothingMode_MAX      = 4
};


// Enum Engine.ELightingBuildQuality
enum class ELightingBuildQuality : uint8_t
{
	Quality_Preview                = 0,
	Quality_Medium                 = 1,
	Quality_High                   = 2,
	Quality_Production             = 3,
	Quality_MAX                    = 4
};


// Enum Engine.EMaterialStencilCompare
enum class EMaterialStencilCompare : uint8_t
{
	MSC_Less                       = 0,
	MSC_LessEqual                  = 1,
	MSC_Greater                    = 2,
	MSC_GreaterEqual               = 3,
	MSC_Equal                      = 4,
	MSC_NotEqual                   = 5,
	MSC_Never                      = 6,
	MSC_Always                     = 7,
	MSC_Count                      = 8,
	MSC_MAX                        = 9
};


// Enum Engine.EMaterialSamplerType
enum class EMaterialSamplerType : uint8_t
{
	SAMPLERTYPE_Color              = 0,
	SAMPLERTYPE_Grayscale          = 1,
	SAMPLERTYPE_Alpha              = 2,
	SAMPLERTYPE_Normal             = 3,
	SAMPLERTYPE_Masks              = 4,
	SAMPLERTYPE_DistanceFieldFont  = 5,
	SAMPLERTYPE_LinearColor        = 6,
	SAMPLERTYPE_LinearGrayscale    = 7,
	SAMPLERTYPE_External           = 8,
	SAMPLERTYPE_MAX                = 9
};


// Enum Engine.EMaterialTessellationMode
enum class EMaterialTessellationMode : uint8_t
{
	MTM_NoTessellation             = 0,
	MTM_FlatTessellation           = 1,
	MTM_PNTriangles                = 2,
	MTM_MAX                        = 3
};


// Enum Engine.EMaterialShadingModel
enum class EMaterialShadingModel : uint8_t
{
	MSM_Unlit                      = 0,
	MSM_DefaultLit                 = 1,
	MSM_Subsurface                 = 2,
	MSM_PreintegratedSkin          = 3,
	MSM_ClearCoat                  = 4,
	MSM_SubsurfaceProfile          = 5,
	MSM_TwoSidedFoliage            = 6,
	MSM_Hair                       = 7,
	MSM_Cloth                      = 8,
	MSM_Eye                        = 9,
	MSM_NUM                        = 10,
	MSM_FromMaterialExpression     = 11,
	MSM_MAX                        = 12
};


// Enum Engine.EParticleCollisionMode
enum class EParticleCollisionMode : uint8_t
{
	SceneDepth                     = 0,
	DistanceField                  = 1,
	EParticleCollisionMode_MAX     = 2
};


// Enum Engine.ETrailWidthMode
enum class ETrailWidthMode : uint8_t
{
	ETrailWidthMode_FromCentre     = 0,
	ETrailWidthMode_FromFirst      = 1,
	ETrailWidthMode_FromSecond     = 2,
	ETrailWidthMode_MAX            = 3
};


// Enum Engine.EGBufferFormat
enum class EGBufferFormat : uint8_t
{
	Force8BitsPerChannel           = 0,
	Default                        = 1,
	HighPrecisionNormals           = 2,
	Force16BitsPerChannel          = 3,
	EGBufferFormat_MAX             = 4
};


// Enum Engine.ESceneCaptureCompositeMode
enum class ESceneCaptureCompositeMode : uint8_t
{
	SCCM_Overwrite                 = 0,
	SCCM_Additive                  = 1,
	SCCM_Composite                 = 2,
	SCCM_MAX                       = 3
};


// Enum Engine.ESceneCaptureSource
enum class ESceneCaptureSource : uint8_t
{
	SCS_SceneColorHDR              = 0,
	SCS_SceneColorHDRNoAlpha       = 1,
	SCS_FinalColorLDR              = 2,
	SCS_SceneColorSceneDepth       = 3,
	SCS_SceneDepth                 = 4,
	SCS_DeviceDepth                = 5,
	SCS_Normal                     = 6,
	SCS_BaseColor                  = 7,
	SCS_MAX                        = 8
};


// Enum Engine.ETranslucentSortPolicy
enum class ETranslucentSortPolicy : uint8_t
{
	SortByDistance                 = 0,
	SortByProjectedZ               = 1,
	SortAlongAxis                  = 2,
	ETranslucentSortPolicy_MAX     = 3
};


// Enum Engine.ERefractionMode
enum class ERefractionMode : uint8_t
{
	RM_IndexOfRefraction           = 0,
	RM_PixelNormalOffset           = 1,
	RM_MAX                         = 2
};


// Enum Engine.ETranslucencyLightingMode
enum class ETranslucencyLightingMode : uint8_t
{
	TLM_VolumetricNonDirectional   = 0,
	TLM_VolumetricDirectional      = 1,
	TLM_VolumetricPerVertexNonDirectional = 2,
	TLM_VolumetricPerVertexDirectional = 3,
	TLM_Surface                    = 4,
	TLM_SurfacePerPixelLighting    = 5,
	TLM_MAX                        = 6
};


// Enum Engine.ESamplerSourceMode
enum class ESamplerSourceMode : uint8_t
{
	SSM_FromTextureAsset           = 0,
	SSM_Wrap_WorldGroupSettings    = 1,
	SSM_Clamp_WorldGroupSettings   = 2,
	SSM_MAX                        = 3
};


// Enum Engine.EBlendMode
enum class EBlendMode : uint8_t
{
	BLEND_Opaque                   = 0,
	BLEND_Masked                   = 1,
	BLEND_Translucent              = 2,
	BLEND_Additive                 = 3,
	BLEND_Modulate                 = 4,
	BLEND_AlphaComposite           = 5,
	BLEND_MAX                      = 6
};


// Enum Engine.EOcclusionCombineMode
enum class EOcclusionCombineMode : uint8_t
{
	OCM_Minimum                    = 0,
	OCM_Multiply                   = 1,
	OCM_MAX                        = 2
};


// Enum Engine.ELightmapType
enum class ELightmapType : uint8_t
{
	Default                        = 0,
	ForceSurface                   = 1,
	ForceVolumetric                = 2,
	ELightmapType_MAX              = 3
};


// Enum Engine.EIndirectLightingCacheQuality
enum class EIndirectLightingCacheQuality : uint8_t
{
	ILCQ_Off                       = 0,
	ILCQ_Point                     = 1,
	ILCQ_Volume                    = 2,
	ILCQ_MAX                       = 3
};


// Enum Engine.ESceneDepthPriorityGroup
enum class ESceneDepthPriorityGroup : uint8_t
{
	SDPG_World                     = 0,
	SDPG_Foreground                = 1,
	SDPG_MAX                       = 2
};


// Enum Engine.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8_t
{
	AspectRatio_MaintainYFOV       = 0,
	AspectRatio_MaintainXFOV       = 1,
	AspectRatio_MajorAxisFOV       = 2,
	AspectRatio_MAX                = 3
};


// Enum Engine.EFontCacheType
enum class EFontCacheType : uint8_t
{
	Offline                        = 0,
	Runtime                        = 1,
	EFontCacheType_MAX             = 2
};


// Enum Engine.EFontImportCharacterSet
enum class EFontImportCharacterSet : uint8_t
{
	FontICS_Default                = 0,
	FontICS_Ansi                   = 1,
	FontICS_Symbol                 = 2,
	FontICS_MAX                    = 3
};


// Enum Engine.EStandbyType
enum class EStandbyType : uint8_t
{
	STDBY_Rx                       = 0,
	STDBY_Tx                       = 1,
	STDBY_BadPing                  = 2,
	STDBY_MAX                      = 3
};


// Enum Engine.ESuggestProjVelocityTraceOption
enum class ESuggestProjVelocityTraceOption : uint8_t
{
	DoNotTrace                     = 0,
	TraceFullPath                  = 1,
	OnlyTraceWhileAscending        = 2,
	ESuggestProjVelocityTraceOption_MAX = 3
};


// Enum Engine.EWindowMode
enum class EWindowMode : uint8_t
{
	Fullscreen                     = 0,
	WindowedFullscreen             = 1,
	Windowed                       = 2,
	EWindowMode_MAX                = 3
};


// Enum Engine.EImportanceWeight
enum class EImportanceWeight : uint8_t
{
	Luminance                      = 0,
	Red                            = 1,
	Green                          = 2,
	Blue                           = 3,
	Alpha                          = 4,
	EImportanceWeight_MAX          = 5
};


// Enum Engine.EAdManagerDelegate
enum class EAdManagerDelegate : uint8_t
{
	AMD_ClickedBanner              = 0,
	AMD_UserClosedAd               = 1,
	AMD_MAX                        = 2
};


// Enum Engine.EAnimAlphaInputType
enum class EAnimAlphaInputType : uint8_t
{
	Float                          = 0,
	Bool                           = 1,
	Curve                          = 2,
	EAnimAlphaInputType_MAX        = 3
};


// Enum Engine.ETrackActiveCondition
enum class ETrackActiveCondition : uint8_t
{
	ETAC_Always                    = 0,
	ETAC_GoreEnabled               = 1,
	ETAC_GoreDisabled              = 2,
	ETAC_MAX                       = 3
};


// Enum Engine.EInterpTrackMoveRotMode
enum class EInterpTrackMoveRotMode : uint8_t
{
	IMR_Keyframed                  = 0,
	IMR_LookAtGroup                = 1,
	IMR_Ignore                     = 2,
	IMR_MAX                        = 3
};


// Enum Engine.EInterpMoveAxis
enum class EInterpMoveAxis : uint8_t
{
	AXIS_TranslationX              = 0,
	AXIS_TranslationY              = 1,
	AXIS_TranslationZ              = 2,
	AXIS_RotationX                 = 3,
	AXIS_RotationY                 = 4,
	AXIS_RotationZ                 = 5,
	AXIS_MAX                       = 6
};


// Enum Engine.ETrackToggleAction
enum class ETrackToggleAction : uint8_t
{
	ETTA_Off                       = 0,
	ETTA_On                        = 1,
	ETTA_Toggle                    = 2,
	ETTA_Trigger                   = 3,
	ETTA_MAX                       = 4
};


// Enum Engine.EVisibilityTrackCondition
enum class EVisibilityTrackCondition : uint8_t
{
	EVTC_Always                    = 0,
	EVTC_GoreEnabled               = 1,
	EVTC_GoreDisabled              = 2,
	EVTC_MAX                       = 3
};


// Enum Engine.EVisibilityTrackAction
enum class EVisibilityTrackAction : uint8_t
{
	EVTA_Hide                      = 0,
	EVTA_Show                      = 1,
	EVTA_Toggle                    = 2,
	EVTA_MAX                       = 3
};


// Enum Engine.ESlateGesture
enum class ESlateGesture : uint8_t
{
	None                           = 0,
	Scroll                         = 1,
	Magnify                        = 2,
	Swipe                          = 3,
	Rotate                         = 4,
	LongPress                      = 5,
	ESlateGesture_MAX              = 6
};


// Enum Engine.ELerpInterpolationMode
enum class ELerpInterpolationMode : uint8_t
{
	QuatInterp                     = 0,
	EulerInterp                    = 1,
	DualQuatInterp                 = 2,
	ELerpInterpolationMode_MAX     = 3
};


// Enum Engine.EEasingFunc
enum class EEasingFunc : uint8_t
{
	Linear                         = 0,
	Step                           = 1,
	SinusoidalIn                   = 2,
	SinusoidalOut                  = 3,
	SinusoidalInOut                = 4,
	EaseIn                         = 5,
	EaseOut                        = 6,
	EaseInOut                      = 7,
	ExpoIn                         = 8,
	ExpoOut                        = 9,
	ExpoInOut                      = 10,
	CircularIn                     = 11,
	CircularOut                    = 12,
	CircularInOut                  = 13,
	EEasingFunc_MAX                = 14
};


// Enum Engine.EStreamingVolumeUsage
enum class EStreamingVolumeUsage : uint8_t
{
	SVB_Loading                    = 0,
	SVB_LoadingAndVisibility       = 1,
	SVB_VisibilityBlockingOnLoad   = 2,
	SVB_BlockingOnLoad             = 3,
	SVB_LoadingNotVisible          = 4,
	SVB_MAX                        = 5
};


// Enum Engine.EMaterialDecalResponse
enum class EMaterialDecalResponse : uint8_t
{
	MDR_None                       = 0,
	MDR_ColorNormalRoughness       = 1,
	MDR_Color                      = 2,
	MDR_ColorNormal                = 3,
	MDR_ColorRoughness             = 4,
	MDR_Normal                     = 5,
	MDR_NormalRoughness            = 6,
	MDR_Roughness                  = 7,
	MDR_MAX                        = 8
};


// Enum Engine.EDecalBlendMode
enum class EDecalBlendMode : uint8_t
{
	DBM_Translucent                = 0,
	DBM_Stain                      = 1,
	DBM_Normal                     = 2,
	DBM_Emissive                   = 3,
	DBM_DBuffer_ColorNormalRoughness = 4,
	DBM_DBuffer_Color              = 5,
	DBM_DBuffer_ColorNormal        = 6,
	DBM_DBuffer_ColorRoughness     = 7,
	DBM_DBuffer_Normal             = 8,
	DBM_DBuffer_NormalRoughness    = 9,
	DBM_DBuffer_Roughness          = 10,
	DBM_DBuffer_Emissive           = 11,
	DBM_DBuffer_AlphaComposite     = 12,
	DBM_DBuffer_EmissiveAlphaComposite = 13,
	DBM_Volumetric_DistanceFunction = 14,
	DBM_AlphaComposite             = 15,
	DBM_AmbientOcclusion           = 16,
	DBM_MAX                        = 17
};


// Enum Engine.ETextureColorChannel
enum class ETextureColorChannel : uint8_t
{
	TCC_Red                        = 0,
	TCC_Green                      = 1,
	TCC_Blue                       = 2,
	TCC_Alpha                      = 3,
	TCC_MAX                        = 4
};


// Enum Engine.EMaterialAttributeBlend
enum class EMaterialAttributeBlend : uint8_t
{
	Blend                          = 0,
	UseA                           = 1,
	UseB                           = 2,
	EMaterialAttributeBlend_MAX    = 3
};


// Enum Engine.EChannelMaskParameterColor
enum class EChannelMaskParameterColor : uint8_t
{
	Red                            = 0,
	Green                          = 1,
	Blue                           = 2,
	Alpha                          = 3,
	EChannelMaskParameterColor_MAX = 4
};


// Enum Engine.EClampMode
enum class EClampMode : uint8_t
{
	CMODE_Clamp                    = 0,
	CMODE_ClampMin                 = 1,
	CMODE_ClampMax                 = 2,
	CMODE_MAX                      = 3
};


// Enum Engine.ECustomMaterialOutputType
enum class ECustomMaterialOutputType : uint8_t
{
	CMOT_Float1                    = 0,
	CMOT_Float2                    = 1,
	CMOT_Float3                    = 2,
	CMOT_Float4                    = 3,
	CMOT_MAX                       = 4
};


// Enum Engine.EDepthOfFieldFunctionValue
enum class EDepthOfFieldFunctionValue : uint8_t
{
	TDOF_NearAndFarMask            = 0,
	TDOF_NearMask                  = 1,
	TDOF_FarMask                   = 2,
	TDOF_CircleOfConfusionRadius   = 3,
	TDOF_MAX                       = 4
};


// Enum Engine.EFunctionInputType
enum class EFunctionInputType : uint8_t
{
	FunctionInput_Scalar           = 0,
	FunctionInput_Vector2          = 1,
	FunctionInput_Vector3          = 2,
	FunctionInput_Vector4          = 3,
	FunctionInput_Texture2D        = 4,
	FunctionInput_TextureCube      = 5,
	FunctionInput_VolumeTexture    = 6,
	FunctionInput_StaticBool       = 7,
	FunctionInput_MaterialAttributes = 8,
	FunctionInput_TextureExternal  = 9,
	FunctionInput_MAX              = 10
};


// Enum Engine.ENoiseFunction
enum class ENoiseFunction : uint8_t
{
	NOISEFUNCTION_SimplexTex       = 0,
	NOISEFUNCTION_GradientTex      = 1,
	NOISEFUNCTION_GradientTex3D    = 2,
	NOISEFUNCTION_GradientALU      = 3,
	NOISEFUNCTION_ValueALU         = 4,
	NOISEFUNCTION_VoronoiALU       = 5,
	NOISEFUNCTION_MAX              = 6
};


// Enum Engine.EMaterialSceneAttributeInputMode
enum class EMaterialSceneAttributeInputMode : uint8_t
{
	Coordinates                    = 0,
	OffsetFraction                 = 1,
	EMaterialSceneAttributeInputMode_MAX = 2
};


// Enum Engine.ESpeedTreeLODType
enum class ESpeedTreeLODType : uint8_t
{
	STLOD_Pop                      = 0,
	STLOD_Smooth                   = 1,
	STLOD_MAX                      = 2
};


// Enum Engine.ESpeedTreeWindType
enum class ESpeedTreeWindType : uint8_t
{
	STW_None                       = 0,
	STW_Fastest                    = 1,
	STW_Fast                       = 2,
	STW_Better                     = 3,
	STW_Best                       = 4,
	STW_Palm                       = 5,
	STW_BestPlus                   = 6,
	STW_MAX                        = 7
};


// Enum Engine.ESpeedTreeGeometryType
enum class ESpeedTreeGeometryType : uint8_t
{
	STG_Branch                     = 0,
	STG_Frond                      = 1,
	STG_Leaf                       = 2,
	STG_FacingLeaf                 = 3,
	STG_Billboard                  = 4,
	STG_MAX                        = 5
};


// Enum Engine.EMaterialExposedTextureProperty
enum class EMaterialExposedTextureProperty : uint8_t
{
	TMTM_TextureSize               = 0,
	TMTM_TexelSize                 = 1,
	TMTM_MAX                       = 2
};


// Enum Engine.ETextureMipValueMode
enum class ETextureMipValueMode : uint8_t
{
	TMVM_None                      = 0,
	TMVM_MipLevel                  = 1,
	TMVM_MipBias                   = 2,
	TMVM_Derivative                = 3,
	TMVM_MAX                       = 4
};


// Enum Engine.EMaterialVectorCoordTransform
enum class EMaterialVectorCoordTransform : uint8_t
{
	TRANSFORM_Tangent              = 0,
	TRANSFORM_Local                = 1,
	TRANSFORM_World                = 2,
	TRANSFORM_View                 = 3,
	TRANSFORM_Camera               = 4,
	TRANSFORM_ParticleWorld        = 5,
	TRANSFORM_MAX                  = 6
};


// Enum Engine.EMaterialVectorCoordTransformSource
enum class EMaterialVectorCoordTransformSource : uint8_t
{
	TRANSFORMSOURCE_Tangent        = 0,
	TRANSFORMSOURCE_Local          = 1,
	TRANSFORMSOURCE_World          = 2,
	TRANSFORMSOURCE_View           = 3,
	TRANSFORMSOURCE_Camera         = 4,
	TRANSFORMSOURCE_ParticleWorld  = 5,
	TRANSFORMSOURCE_MAX            = 6
};


// Enum Engine.EMaterialPositionTransformSource
enum class EMaterialPositionTransformSource : uint8_t
{
	TRANSFORMPOSSOURCE_Local       = 0,
	TRANSFORMPOSSOURCE_World       = 1,
	TRANSFORMPOSSOURCE_TranslatedWorld = 2,
	TRANSFORMPOSSOURCE_View        = 3,
	TRANSFORMPOSSOURCE_Camera      = 4,
	TRANSFORMPOSSOURCE_Particle    = 5,
	TRANSFORMPOSSOURCE_MAX         = 6
};


// Enum Engine.EVectorNoiseFunction
enum class EVectorNoiseFunction : uint8_t
{
	VNF_CellnoiseALU               = 0,
	VNF_VectorALU                  = 1,
	VNF_GradientALU                = 2,
	VNF_CurlALU                    = 3,
	VNF_VoronoiALU                 = 4,
	VNF_MAX                        = 5
};


// Enum Engine.EMaterialExposedViewProperty
enum class EMaterialExposedViewProperty : uint8_t
{
	MEVP_BufferSize                = 0,
	MEVP_FieldOfView               = 1,
	MEVP_TanHalfFieldOfView        = 2,
	MEVP_ViewSize                  = 3,
	MEVP_WorldSpaceViewPosition    = 4,
	MEVP_WorldSpaceCameraPosition  = 5,
	MEVP_ViewportOffset            = 6,
	MEVP_MAX                       = 7
};


// Enum Engine.EWorldPositionIncludedOffsets
enum class EWorldPositionIncludedOffsets : uint8_t
{
	WPT_Default                    = 0,
	WPT_ExcludeAllShaderOffsets    = 1,
	WPT_CameraRelative             = 2,
	WPT_CameraRelativeNoOffsets    = 3,
	WPT_MAX                        = 4
};


// Enum Engine.EMaterialFunctionUsage
enum class EMaterialFunctionUsage : uint8_t
{
	Default                        = 0,
	MaterialLayer                  = 1,
	MaterialLayerBlend             = 2,
	EMaterialFunctionUsage_MAX     = 3
};


// Enum Engine.EMaterialUsage
enum class EMaterialUsage : uint8_t
{
	MATUSAGE_SkeletalMesh          = 0,
	MATUSAGE_ParticleSprites       = 1,
	MATUSAGE_BeamTrails            = 2,
	MATUSAGE_MeshParticles         = 3,
	MATUSAGE_StaticLighting        = 4,
	MATUSAGE_MorphTargets          = 5,
	MATUSAGE_SplineMesh            = 6,
	MATUSAGE_InstancedStaticMeshes = 7,
	MATUSAGE_Clothing              = 8,
	MATUSAGE_NiagaraSprites        = 9,
	MATUSAGE_NiagaraRibbons        = 10,
	MATUSAGE_NiagaraMeshParticles  = 11,
	MATUSAGE_GeometryCache         = 12,
	MATUSAGE_MAX                   = 13
};


// Enum Engine.EMaterialParameterAssociation
enum class EMaterialParameterAssociation : uint8_t
{
	LayerParameter                 = 0,
	BlendParameter                 = 1,
	GlobalParameter                = 2,
	EMaterialParameterAssociation_MAX = 3
};


// Enum Engine.EMaterialMergeType
enum class EMaterialMergeType : uint8_t
{
	MaterialMergeType_Default      = 0,
	MaterialMergeType_Simplygon    = 1,
	MaterialMergeType_MAX          = 2
};


// Enum Engine.ETextureSizingType
enum class ETextureSizingType : uint8_t
{
	TextureSizingType_UseSingleTextureSize = 0,
	TextureSizingType_UseAutomaticBiasedSizes = 1,
	TextureSizingType_UseManualOverrideTextureSize = 2,
	TextureSizingType_UseSimplygonAutomaticSizing = 3,
	TextureSizingType_MAX          = 4
};


// Enum Engine.ESceneTextureId
enum class ESceneTextureId : uint8_t
{
	PPI_SceneColor                 = 0,
	PPI_SceneDepth                 = 1,
	PPI_DiffuseColor               = 2,
	PPI_SpecularColor              = 3,
	PPI_SubsurfaceColor            = 4,
	PPI_BaseColor                  = 5,
	PPI_Specular                   = 6,
	PPI_Metallic                   = 7,
	PPI_WorldNormal                = 8,
	PPI_SeparateTranslucency       = 9,
	PPI_Opacity                    = 10,
	PPI_Roughness                  = 11,
	PPI_MaterialAO                 = 12,
	PPI_CustomDepth                = 13,
	PPI_PostProcessInput0          = 14,
	PPI_PostProcessInput1          = 15,
	PPI_PostProcessInput2          = 16,
	PPI_PostProcessInput3          = 17,
	PPI_PostProcessInput4          = 18,
	PPI_PostProcessInput5          = 19,
	PPI_PostProcessInput6          = 20,
	PPI_DecalMask                  = 21,
	PPI_ShadingModelColor          = 22,
	PPI_ShadingModelID             = 23,
	PPI_AmbientOcclusion           = 24,
	PPI_CustomStencil              = 25,
	PPI_StoredBaseColor            = 26,
	PPI_StoredSpecular             = 27,
	PPI_Velocity                   = 28,
	PPI_MAX                        = 29
};


// Enum Engine.EMaterialDomain
enum class EMaterialDomain : uint8_t
{
	MD_Surface                     = 0,
	MD_DeferredDecal               = 1,
	MD_LightFunction               = 2,
	MD_Volume                      = 3,
	MD_PostProcess                 = 4,
	MD_UI                          = 5,
	MD_MAX                         = 6
};


// Enum Engine.EMeshInstancingReplacementMethod
enum class EMeshInstancingReplacementMethod : uint8_t
{
	RemoveOriginalActors           = 0,
	KeepOriginalActorsAsEditorOnly = 1,
	EMeshInstancingReplacementMethod_MAX = 2
};


// Enum Engine.EUVOutput
enum class EUVOutput : uint8_t
{
	DoNotOutputChannel             = 0,
	OutputChannel                  = 1,
	EUVOutput_MAX                  = 2
};


// Enum Engine.EMeshMergeType
enum class EMeshMergeType : uint8_t
{
	MeshMergeType_Default          = 0,
	MeshMergeType_MergeActor       = 1,
	MeshMergeType_MAX              = 2
};


// Enum Engine.EMeshLODSelectionType
enum class EMeshLODSelectionType : uint8_t
{
	AllLODs                        = 0,
	SpecificLOD                    = 1,
	CalculateLOD                   = 2,
	LowestDetailLOD                = 3,
	EMeshLODSelectionType_MAX      = 4
};


// Enum Engine.EProxyNormalComputationMethod
enum class EProxyNormalComputationMethod : uint8_t
{
	AngleWeighted                  = 0,
	AreaWeighted                   = 1,
	EqualWeighted                  = 2,
	EProxyNormalComputationMethod_MAX = 3
};


// Enum Engine.ELandscapeCullingPrecision
enum class ELandscapeCullingPrecision : uint8_t
{
	High                           = 0,
	Medium                         = 1,
	Low                            = 2,
	ELandscapeCullingPrecision_MAX = 3
};


// Enum Engine.EStaticMeshReductionTerimationCriterion
enum class EStaticMeshReductionTerimationCriterion : uint8_t
{
	Triangles                      = 0,
	Vertices                       = 1,
	Any                            = 2,
	EStaticMeshReductionTerimationCriterion_MAX = 3
};


// Enum Engine.EMeshFeatureImportance
enum class EMeshFeatureImportance : uint8_t
{
	Off                            = 0,
	Lowest                         = 1,
	Low                            = 2,
	Normal                         = 3,
	High                           = 4,
	Highest                        = 5,
	EMeshFeatureImportance_MAX     = 6
};


// Enum Engine.EVertexPaintAxis
enum class EVertexPaintAxis : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	EVertexPaintAxis_MAX           = 3
};


// Enum Engine.EMicroTransactionResult
enum class EMicroTransactionResult : uint8_t
{
	MTR_Succeeded                  = 0,
	MTR_Failed                     = 1,
	MTR_Canceled                   = 2,
	MTR_RestoredFromServer         = 3,
	MTR_MAX                        = 4
};


// Enum Engine.EMicroTransactionDelegate
enum class EMicroTransactionDelegate : uint8_t
{
	MTD_PurchaseQueryComplete      = 0,
	MTD_PurchaseComplete           = 1,
	MTD_MAX                        = 2
};


// Enum Engine.FNavigationSystemRunMode
enum class EFNavigationSystemRunMode : uint8_t
{
	InvalidMode                    = 0,
	GameMode                       = 1,
	EditorMode                     = 2,
	SimulationMode                 = 3,
	PIEMode                        = 4,
	FNavigationSystemRunMode_MAX   = 5
};


// Enum Engine.ENavigationQueryResult
enum class ENavigationQueryResult : uint8_t
{
	Invalid                        = 0,
	Error                          = 1,
	Fail                           = 2,
	Success                        = 3,
	ENavigationQueryResult_MAX     = 4
};


// Enum Engine.ENavPathEvent
enum class ENavPathEvent : uint8_t
{
	Cleared                        = 0,
	NewPath                        = 1,
	UpdatedDueToGoalMoved          = 2,
	UpdatedDueToNavigationChanged  = 3,
	Invalidated                    = 4,
	RePathFailed                   = 5,
	MetaPathUpdate                 = 6,
	Custom                         = 7,
	ENavPathEvent_MAX              = 8
};


// Enum Engine.ENavDataGatheringModeConfig
enum class ENavDataGatheringModeConfig : uint8_t
{
	Invalid                        = 0,
	Instant                        = 1,
	Lazy                           = 2,
	ENavDataGatheringModeConfig_MAX = 3
};


// Enum Engine.ENavDataGatheringMode
enum class ENavDataGatheringMode : uint8_t
{
	Default                        = 0,
	Instant                        = 1,
	Lazy                           = 2,
	ENavDataGatheringMode_MAX      = 3
};


// Enum Engine.ENavigationOptionFlag
enum class ENavigationOptionFlag : uint8_t
{
	Default                        = 0,
	Enable                         = 1,
	Disable                        = 2,
	MAX                            = 3
};


// Enum Engine.ENavLinkDirection
enum class ENavLinkDirection : uint8_t
{
	BothWays                       = 0,
	LeftToRight                    = 1,
	RightToLeft                    = 2,
	ENavLinkDirection_MAX          = 3
};


// Enum Engine.EEmitterRenderMode
enum class EEmitterRenderMode : uint8_t
{
	ERM_Normal                     = 0,
	ERM_Point                      = 1,
	ERM_Cross                      = 2,
	ERM_LightsOnly                 = 3,
	ERM_None                       = 4,
	ERM_MAX                        = 5
};


// Enum Engine.EParticleSubUVInterpMethod
enum class EParticleSubUVInterpMethod : uint8_t
{
	PSUVIM_None                    = 0,
	PSUVIM_Linear                  = 1,
	PSUVIM_Linear_Blend            = 2,
	PSUVIM_Random                  = 3,
	PSUVIM_Random_Blend            = 4,
	PSUVIM_MAX                     = 5
};


// Enum Engine.EParticleBurstMethod
enum class EParticleBurstMethod : uint8_t
{
	EPBM_Instant                   = 0,
	EPBM_Interpolated              = 1,
	EPBM_MAX                       = 2
};


// Enum Engine.EParticleSystemInsignificanceReaction
enum class EParticleSystemInsignificanceReaction : uint8_t
{
	Auto                           = 0,
	Complete                       = 1,
	DisableTick                    = 2,
	DisableTickAndKill             = 3,
	Num                            = 4,
	EParticleSystemInsignificanceReaction_MAX = 5
};


// Enum Engine.EParticleSignificanceLevel
enum class EParticleSignificanceLevel : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Critical                       = 3,
	Num                            = 4,
	EParticleSignificanceLevel_MAX = 5
};


// Enum Engine.EParticleDetailMode
enum class EParticleDetailMode : uint8_t
{
	PDM_Low                        = 0,
	PDM_Medium                     = 1,
	PDM_High                       = 2,
	PDM_MAX                        = 3
};


// Enum Engine.EParticleSourceSelectionMethod
enum class EParticleSourceSelectionMethod : uint8_t
{
	EPSSM_Random                   = 0,
	EPSSM_Sequential               = 1,
	EPSSM_MAX                      = 2
};


// Enum Engine.EModuleType
enum class EModuleType : uint8_t
{
	EPMT_General                   = 0,
	EPMT_TypeData                  = 1,
	EPMT_Beam                      = 2,
	EPMT_Trail                     = 3,
	EPMT_Spawn                     = 4,
	EPMT_Required                  = 5,
	EPMT_Event                     = 6,
	EPMT_Light                     = 7,
	EPMT_SubUV                     = 8,
	EPMT_MAX                       = 9
};


// Enum Engine.EAttractorParticleSelectionMethod
enum class EAttractorParticleSelectionMethod : uint8_t
{
	EAPSM_Random                   = 0,
	EAPSM_Sequential               = 1,
	EAPSM_MAX                      = 2
};


// Enum Engine.Beam2SourceTargetTangentMethod
enum class EBeam2SourceTargetTangentMethod : uint8_t
{
	PEB2STTM_Direct                = 0,
	PEB2STTM_UserSet               = 1,
	PEB2STTM_Distribution          = 2,
	PEB2STTM_Emitter               = 3,
	PEB2STTM_MAX                   = 4
};


// Enum Engine.Beam2SourceTargetMethod
enum class EBeam2SourceTargetMethod : uint8_t
{
	PEB2STM_Default                = 0,
	PEB2STM_UserSet                = 1,
	PEB2STM_Emitter                = 2,
	PEB2STM_Particle               = 3,
	PEB2STM_Actor                  = 4,
	PEB2STM_MAX                    = 5
};


// Enum Engine.BeamModifierType
enum class EBeamModifierType : uint8_t
{
	PEB2MT_Source                  = 0,
	PEB2MT_Target                  = 1,
	PEB2MT_MAX                     = 2
};


// Enum Engine.EParticleCameraOffsetUpdateMethod
enum class EParticleCameraOffsetUpdateMethod : uint8_t
{
	EPCOUM_DirectSet               = 0,
	EPCOUM_Additive                = 1,
	EPCOUM_Scalar                  = 2,
	EPCOUM_MAX                     = 3
};


// Enum Engine.EParticleCollisionComplete
enum class EParticleCollisionComplete : uint8_t
{
	EPCC_Kill                      = 0,
	EPCC_Freeze                    = 1,
	EPCC_HaltCollisions            = 2,
	EPCC_FreezeTranslation         = 3,
	EPCC_FreezeRotation            = 4,
	EPCC_FreezeMovement            = 5,
	EPCC_MAX                       = 6
};


// Enum Engine.EParticleCollisionResponse
enum class EParticleCollisionResponse : uint8_t
{
	Bounce                         = 0,
	Stop                           = 1,
	Kill                           = 2,
	EParticleCollisionResponse_MAX = 3
};


// Enum Engine.ELocationBoneSocketSelectionMethod
enum class ELocationBoneSocketSelectionMethod : uint8_t
{
	BONESOCKETSEL_Sequential       = 0,
	BONESOCKETSEL_Random           = 1,
	BONESOCKETSEL_MAX              = 2
};


// Enum Engine.ELocationBoneSocketSource
enum class ELocationBoneSocketSource : uint8_t
{
	BONESOCKETSOURCE_Bones         = 0,
	BONESOCKETSOURCE_Sockets       = 1,
	BONESOCKETSOURCE_MAX           = 2
};


// Enum Engine.ELocationEmitterSelectionMethod
enum class ELocationEmitterSelectionMethod : uint8_t
{
	ELESM_Random                   = 0,
	ELESM_Sequential               = 1,
	ELESM_MAX                      = 2
};


// Enum Engine.CylinderHeightAxis
enum class ECylinderHeightAxis : uint8_t
{
	PMLPC_HEIGHTAXIS_X             = 0,
	PMLPC_HEIGHTAXIS_Y             = 1,
	PMLPC_HEIGHTAXIS_Z             = 2,
	PMLPC_HEIGHTAXIS_MAX           = 3
};


// Enum Engine.ELocationSkelVertSurfaceSource
enum class ELocationSkelVertSurfaceSource : uint8_t
{
	VERTSURFACESOURCE_Vert         = 0,
	VERTSURFACESOURCE_Surface      = 1,
	VERTSURFACESOURCE_MAX          = 2
};


// Enum Engine.EOrbitChainMode
enum class EOrbitChainMode : uint8_t
{
	EOChainMode_Add                = 0,
	EOChainMode_Scale              = 1,
	EOChainMode_Link               = 2,
	EOChainMode_MAX                = 3
};


// Enum Engine.EParticleAxisLock
enum class EParticleAxisLock : uint8_t
{
	EPAL_NONE                      = 0,
	EPAL_X                         = 1,
	EPAL_Y                         = 2,
	EPAL_Z                         = 3,
	EPAL_NEGATIVE_X                = 4,
	EPAL_NEGATIVE_Y                = 5,
	EPAL_NEGATIVE_Z                = 6,
	EPAL_ROTATE_X                  = 7,
	EPAL_ROTATE_Y                  = 8,
	EPAL_ROTATE_Z                  = 9,
	EPAL_MAX                       = 10
};


// Enum Engine.EEmitterDynamicParameterValue
enum class EEmitterDynamicParameterValue : uint8_t
{
	EDPV_UserSet                   = 0,
	EDPV_AutoSet                   = 1,
	EDPV_VelocityX                 = 2,
	EDPV_VelocityY                 = 3,
	EDPV_VelocityZ                 = 4,
	EDPV_VelocityMag               = 5,
	EDPV_MAX                       = 6
};


// Enum Engine.EEmitterNormalsMode
enum class EEmitterNormalsMode : uint8_t
{
	ENM_CameraFacing               = 0,
	ENM_Spherical                  = 1,
	ENM_Cylindrical                = 2,
	ENM_MAX                        = 3
};


// Enum Engine.EParticleSortMode
enum class EParticleSortMode : uint8_t
{
	PSORTMODE_None                 = 0,
	PSORTMODE_ViewProjDepth        = 1,
	PSORTMODE_DistanceToView       = 2,
	PSORTMODE_Age_OldestFirst      = 3,
	PSORTMODE_Age_NewestFirst      = 4,
	PSORTMODE_MAX                  = 5
};


// Enum Engine.EParticleUVFlipMode
enum class EParticleUVFlipMode : uint8_t
{
	None                           = 0,
	FlipUV                         = 1,
	FlipUOnly                      = 2,
	FlipVOnly                      = 3,
	RandomFlipUV                   = 4,
	RandomFlipUOnly                = 5,
	RandomFlipVOnly                = 6,
	RandomFlipUVIndependent        = 7,
	EParticleUVFlipMode_MAX        = 8
};


// Enum Engine.ETrail2SourceMethod
enum class ETrail2SourceMethod : uint8_t
{
	PET2SRCM_Default               = 0,
	PET2SRCM_Particle              = 1,
	PET2SRCM_Actor                 = 2,
	PET2SRCM_MAX                   = 3
};


// Enum Engine.EBeamTaperMethod
enum class EBeamTaperMethod : uint8_t
{
	PEBTM_None                     = 0,
	PEBTM_Full                     = 1,
	PEBTM_Partial                  = 2,
	PEBTM_MAX                      = 3
};


// Enum Engine.EBeam2Method
enum class EBeam2Method : uint8_t
{
	PEB2M_Distance                 = 0,
	PEB2M_Target                   = 1,
	PEB2M_Branch                   = 2,
	PEB2M_MAX                      = 3
};


// Enum Engine.EMeshCameraFacingOptions
enum class EMeshCameraFacingOptions : uint8_t
{
	XAxisFacing_NoUp               = 0,
	XAxisFacing_ZUp                = 1,
	XAxisFacing_NegativeZUp        = 2,
	XAxisFacing_YUp                = 3,
	XAxisFacing_NegativeYUp        = 4,
	LockedAxis_ZAxisFacing         = 5,
	LockedAxis_NegativeZAxisFacing = 6,
	LockedAxis_YAxisFacing         = 7,
	LockedAxis_NegativeYAxisFacing = 8,
	VelocityAligned_ZAxisFacing    = 9,
	VelocityAligned_NegativeZAxisFacing = 10,
	VelocityAligned_YAxisFacing    = 11,
	VelocityAligned_NegativeYAxisFacing = 12,
	EMeshCameraFacingOptions_MAX   = 13
};


// Enum Engine.EMeshCameraFacingUpAxis
enum class EMeshCameraFacingUpAxis : uint8_t
{
	CameraFacing_NoneUP            = 0,
	CameraFacing_ZUp               = 1,
	CameraFacing_NegativeZUp       = 2,
	CameraFacing_YUp               = 3,
	CameraFacing_NegativeYUp       = 4,
	CameraFacing_MAX               = 5
};


// Enum Engine.EMeshScreenAlignment
enum class EMeshScreenAlignment : uint8_t
{
	PSMA_MeshFaceCameraWithRoll    = 0,
	PSMA_MeshFaceCameraWithSpin    = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX                       = 3
};


// Enum Engine.ETrailsRenderAxisOption
enum class ETrailsRenderAxisOption : uint8_t
{
	Trails_CameraUp                = 0,
	Trails_SourceUp                = 1,
	Trails_WorldUp                 = 2,
	Trails_MAX                     = 3
};


// Enum Engine.EParticleScreenAlignment
enum class EParticleScreenAlignment : uint8_t
{
	PSA_FacingCameraPosition       = 0,
	PSA_Square                     = 1,
	PSA_Rectangle                  = 2,
	PSA_Velocity                   = 3,
	PSA_AwayFromCenter             = 4,
	PSA_TypeSpecific               = 5,
	PSA_FacingCameraDistanceBlend  = 6,
	PSA_MAX                        = 7
};


// Enum Engine.EParticleSystemOcclusionBoundsMethod
enum class EParticleSystemOcclusionBoundsMethod : uint8_t
{
	EPSOBM_None                    = 0,
	EPSOBM_ParticleBounds          = 1,
	EPSOBM_CustomBounds            = 2,
	EPSOBM_MAX                     = 3
};


// Enum Engine.ParticleSystemLODMethod
enum class EParticleSystemLODMethod : uint8_t
{
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX    = 3
};


// Enum Engine.EParticleSystemUpdateMode
enum class EParticleSystemUpdateMode : uint8_t
{
	EPSUM_RealTime                 = 0,
	EPSUM_FixedTime                = 1,
	EPSUM_MAX                      = 2
};


// Enum Engine.EParticleEventType
enum class EParticleEventType : uint8_t
{
	EPET_Any                       = 0,
	EPET_Spawn                     = 1,
	EPET_Death                     = 2,
	EPET_Collision                 = 3,
	EPET_Burst                     = 4,
	EPET_Blueprint                 = 5,
	EPET_MAX                       = 6
};


// Enum Engine.ParticleReplayState
enum class EParticleReplayState : uint8_t
{
	PRS_Disabled                   = 0,
	PRS_Capturing                  = 1,
	PRS_Replaying                  = 2,
	PRS_MAX                        = 3
};


// Enum Engine.EParticleSysParamType
enum class EParticleSysParamType : uint8_t
{
	PSPT_None                      = 0,
	PSPT_Scalar                    = 1,
	PSPT_ScalarRand                = 2,
	PSPT_Vector                    = 3,
	PSPT_VectorRand                = 4,
	PSPT_Color                     = 5,
	PSPT_Actor                     = 6,
	PSPT_Material                  = 7,
	PSPT_MAX                       = 8
};


// Enum Engine.ESettingsLockedAxis
enum class ESettingsLockedAxis : uint8_t
{
	None                           = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	Invalid                        = 4,
	ESettingsLockedAxis_MAX        = 5
};


// Enum Engine.ESettingsDOF
enum class ESettingsDOF : uint8_t
{
	Full3D                         = 0,
	YZPlane                        = 1,
	XZPlane                        = 2,
	XYPlane                        = 3,
	ESettingsDOF_MAX               = 4
};


// Enum Engine.EFrictionCombineMode
enum class EFrictionCombineMode : uint8_t
{
	Average                        = 0,
	Min                            = 1,
	Multiply                       = 2,
	Max                            = 3
};


// Enum Engine.ERendererStencilMask
enum class ERendererStencilMask : uint8_t
{
	ERSM_Default                   = 0,
	ERSM_255                       = 1,
	ERSM_1                         = 2,
	ERSM_2                         = 3,
	ERSM_4                         = 4,
	ERSM_8                         = 5,
	ERSM_16                        = 6,
	ERSM_32                        = 7,
	ERSM_64                        = 8,
	ERSM_128                       = 9,
	ERSM_MAX                       = 10
};


// Enum Engine.EHasCustomNavigableGeometry
enum class EHasCustomNavigableGeometry : uint8_t
{
	No                             = 0,
	Yes                            = 1,
	EvenIfNotCollidable            = 2,
	DontExport                     = 3,
	EHasCustomNavigableGeometry_MAX = 4
};


// Enum Engine.ECanBeCharacterBase
enum class ECanBeCharacterBase : uint8_t
{
	ECB_No                         = 0,
	ECB_Yes                        = 1,
	ECB_Owner                      = 2,
	ECB_MAX                        = 3
};


// Enum Engine.ERichCurveExtrapolation
enum class ERichCurveExtrapolation : uint8_t
{
	RCCE_Cycle                     = 0,
	RCCE_CycleWithOffset           = 1,
	RCCE_Oscillate                 = 2,
	RCCE_Linear                    = 3,
	RCCE_Constant                  = 4,
	RCCE_None                      = 5,
	RCCE_MAX                       = 6
};


// Enum Engine.ERichCurveInterpMode
enum class ERichCurveInterpMode : uint8_t
{
	RCIM_Linear                    = 0,
	RCIM_Constant                  = 1,
	RCIM_Cubic                     = 2,
	RCIM_None                      = 3,
	RCIM_MAX                       = 4
};


// Enum Engine.EReflectionSourceType
enum class EReflectionSourceType : uint8_t
{
	CapturedScene                  = 0,
	SpecifiedCubemap               = 1,
	EReflectionSourceType_MAX      = 2
};


// Enum Engine.EDefaultBackBufferPixelFormat
enum class EDefaultBackBufferPixelFormat : uint8_t
{
	DBBPF_B8G8R8A8                 = 0,
	DBBPF_A16B16G16R16_DEPRECATED  = 1,
	DBBPF_FloatRGB_DEPRECATED      = 2,
	DBBPF_FloatRGBA                = 3,
	DBBPF_A2B10G10R10              = 4,
	DBBPF_MAX                      = 5
};


// Enum Engine.EAutoExposureMethodUI
enum class EAutoExposureMethodUI : uint8_t
{
	AEM_Histogram                  = 0,
	AEM_Basic                      = 1,
	AEM_Manual                     = 2,
	AEM_MAX                        = 3
};


// Enum Engine.EAlphaChannelMode
enum class EAlphaChannelMode : uint8_t
{
	Disabled                       = 0,
	LinearColorSpaceOnly           = 1,
	AllowThroughTonemapper         = 2,
	EAlphaChannelMode_MAX          = 3
};


// Enum Engine.EEarlyZPass
enum class EEarlyZPass : uint8_t
{
	None                           = 0,
	OpaqueOnly                     = 1,
	OpaqueAndMasked                = 2,
	Auto                           = 3,
	EEarlyZPass_MAX                = 4
};


// Enum Engine.ECustomDepthStencil
enum class ECustomDepthStencil : uint8_t
{
	Disabled                       = 0,
	Enabled                        = 1,
	EnabledOnDemand                = 2,
	EnabledWithStencil             = 3,
	ECustomDepthStencil_MAX        = 4
};


// Enum Engine.EMobileMSAASampleCount
enum class EMobileMSAASampleCount : uint8_t
{
	One                            = 0,
	Two                            = 1,
	Four                           = 2,
	Eight                          = 3,
	EMobileMSAASampleCount_MAX     = 4
};


// Enum Engine.ECompositingSampleCount
enum class ECompositingSampleCount : uint8_t
{
	One                            = 0,
	Two                            = 1,
	Four                           = 2,
	Eight                          = 3,
	ECompositingSampleCount_MAX    = 4
};


// Enum Engine.EClearSceneOptions
enum class EClearSceneOptions : uint8_t
{
	NoClear                        = 0,
	HardwareClear                  = 1,
	QuadAtMaxZ                     = 2,
	EClearSceneOptions_MAX         = 3
};


// Enum Engine.EReporterLineStyle
enum class EReporterLineStyle : uint8_t
{
	Line                           = 0,
	Dash                           = 1,
	EReporterLineStyle_MAX         = 2
};


// Enum Engine.ELegendPosition
enum class ELegendPosition : uint8_t
{
	Outside                        = 0,
	Inside                         = 1,
	ELegendPosition_MAX            = 2
};


// Enum Engine.EGraphDataStyle
enum class EGraphDataStyle : uint8_t
{
	Lines                          = 0,
	Filled                         = 1,
	EGraphDataStyle_MAX            = 2
};


// Enum Engine.EGraphAxisStyle
enum class EGraphAxisStyle : uint8_t
{
	Lines                          = 0,
	Notches                        = 1,
	Grid                           = 2,
	EGraphAxisStyle_MAX            = 3
};


// Enum Engine.ERichCurveKeyTimeCompressionFormat
enum class ERichCurveKeyTimeCompressionFormat : uint8_t
{
	RCKTCF_uint16                  = 0,
	RCKTCF_float32                 = 1,
	RCKTCF_MAX                     = 2
};


// Enum Engine.ERichCurveCompressionFormat
enum class ERichCurveCompressionFormat : uint8_t
{
	RCCF_Empty                     = 0,
	RCCF_Constant                  = 1,
	RCCF_Linear                    = 2,
	RCCF_Cubic                     = 3,
	RCCF_Mixed                     = 4,
	RCCF_MAX                       = 5
};


// Enum Engine.ERichCurveTangentWeightMode
enum class ERichCurveTangentWeightMode : uint8_t
{
	RCTWM_WeightedNone             = 0,
	RCTWM_WeightedArrive           = 1,
	RCTWM_WeightedLeave            = 2,
	RCTWM_WeightedBoth             = 3,
	RCTWM_MAX                      = 4
};


// Enum Engine.ERichCurveTangentMode
enum class ERichCurveTangentMode : uint8_t
{
	RCTM_Auto                      = 0,
	RCTM_User                      = 1,
	RCTM_Break                     = 2,
	RCTM_None                      = 3,
	RCTM_MAX                       = 4
};


// Enum Engine.EConstraintTransform
enum class EConstraintTransform : uint8_t
{
	Absolute                       = 0,
	Relative                       = 1,
	EConstraintTransform_MAX       = 2
};


// Enum Engine.EControlConstraint
enum class EControlConstraint : uint8_t
{
	Orientation                    = 0,
	Translation                    = 1,
	MAX                            = 2
};


// Enum Engine.ERootMotionFinishVelocityMode
enum class ERootMotionFinishVelocityMode : uint8_t
{
	MaintainLastRootMotionVelocity = 0,
	SetVelocity                    = 1,
	ClampVelocity                  = 2,
	ERootMotionFinishVelocityMode_MAX = 3
};


// Enum Engine.ERootMotionSourceSettingsFlags
enum class ERootMotionSourceSettingsFlags : uint8_t
{
	UseSensitiveLiftoffCheck       = 0,
	DisablePartialEndTick          = 1,
	ERootMotionSourceSettingsFlags_MAX = 2
};


// Enum Engine.ERootMotionSourceStatusFlags
enum class ERootMotionSourceStatusFlags : uint8_t
{
	Prepared                       = 0,
	Finished                       = 1,
	MarkedForRemoval               = 2,
	ERootMotionSourceStatusFlags_MAX = 3
};


// Enum Engine.ERootMotionAccumulateMode
enum class ERootMotionAccumulateMode : uint8_t
{
	Override                       = 0,
	Additive                       = 1,
	ERootMotionAccumulateMode_MAX  = 2
};


// Enum Engine.EReflectedAndRefractedRayTracedShadows
enum class EReflectedAndRefractedRayTracedShadows : uint8_t
{
	Disabled                       = 0,
	Hard_shadows                   = 1,
	Area_shadows                   = 2,
	EReflectedAndRefractedRayTracedShadows_MAX = 3
};


// Enum Engine.ETranslucencyType
enum class ETranslucencyType : uint8_t
{
	Raster                         = 0,
	RayTracing                     = 1,
	ETranslucencyType_MAX          = 2
};


// Enum Engine.EReflectionsType
enum class EReflectionsType : uint8_t
{
	ScreenSpace                    = 0,
	RayTracing                     = 1,
	EReflectionsType_MAX           = 2
};


// Enum Engine.ELightUnits
enum class ELightUnits : uint8_t
{
	Unitless                       = 0,
	Candelas                       = 1,
	Lumens                         = 2,
	ELightUnits_MAX                = 3
};


// Enum Engine.EBloomMethod
enum class EBloomMethod : uint8_t
{
	BM_SOG                         = 0,
	BM_FFT                         = 1,
	BM_MAX                         = 2
};


// Enum Engine.EAutoExposureMethod
enum class EAutoExposureMethod : uint8_t
{
	AEM_Histogram                  = 0,
	AEM_Basic                      = 1,
	AEM_Manual                     = 2,
	AEM_MAX                        = 3
};


// Enum Engine.EAntiAliasingMethod
enum class EAntiAliasingMethod : uint8_t
{
	AAM_None                       = 0,
	AAM_FXAA                       = 1,
	AAM_TemporalAA                 = 2,
	AAM_MSAA                       = 3,
	AAM_MAX                        = 4
};


// Enum Engine.EDepthOfFieldMethod
enum class EDepthOfFieldMethod : uint8_t
{
	DOFM_BokehDOF                  = 0,
	DOFM_Gaussian                  = 1,
	DOFM_CircleDOF                 = 2,
	DOFM_MAX                       = 3
};


// Enum Engine.ESceneCapturePrimitiveRenderMode
enum class ESceneCapturePrimitiveRenderMode : uint8_t
{
	PRM_LegacySceneCapture         = 0,
	PRM_RenderScenePrimitives      = 1,
	PRM_UseShowOnlyList            = 2,
	PRM_MAX                        = 3
};


// Enum Engine.EMaterialProperty
enum class EMaterialProperty : uint8_t
{
	MP_EmissiveColor               = 0,
	MP_Opacity                     = 1,
	MP_OpacityMask                 = 2,
	MP_DiffuseColor                = 3,
	MP_SpecularColor               = 4,
	MP_BaseColor                   = 5,
	MP_Metallic                    = 6,
	MP_Specular                    = 7,
	MP_Roughness                   = 8,
	MP_Normal                      = 9,
	MP_WorldPositionOffset         = 10,
	MP_WorldDisplacement           = 11,
	MP_TessellationMultiplier      = 12,
	MP_SubsurfaceColor             = 13,
	MP_CustomData0                 = 14,
	MP_CustomData1                 = 15,
	MP_AmbientOcclusion            = 16,
	MP_Refraction                  = 17,
	MP_CustomizedUVs0              = 18,
	MP_CustomizedUVs1              = 19,
	MP_CustomizedUVs2              = 20,
	MP_CustomizedUVs3              = 21,
	MP_CustomizedUVs4              = 22,
	MP_CustomizedUVs5              = 23,
	MP_CustomizedUVs6              = 24,
	MP_CustomizedUVs7              = 25,
	MP_PixelDepthOffset            = 26,
	MP_ShadingModel                = 27,
	MP_MaterialAttributes          = 28,
	MP_CustomOutput                = 29,
	MP_MAX                         = 30
};


// Enum Engine.EPhysicsTransformUpdateMode
enum class EPhysicsTransformUpdateMode : uint8_t
{
	SimulationUpatesComponentTransform = 0,
	ComponentTransformIsKinematic  = 1,
	EPhysicsTransformUpdateMode_MAX = 2
};


// Enum Engine.EAnimationMode
enum class EAnimationMode : uint8_t
{
	AnimationBlueprint             = 0,
	AnimationSingleNode            = 1,
	AnimationCustomMode            = 2,
	EAnimationMode_MAX             = 3
};


// Enum Engine.EKinematicBonesUpdateToPhysics
enum class EKinematicBonesUpdateToPhysics : uint8_t
{
	SkipSimulatingBones            = 0,
	SkipAllBones                   = 1,
	EKinematicBonesUpdateToPhysics_MAX = 2
};


// Enum Engine.EAnimCurveType
enum class EAnimCurveType : uint8_t
{
	AttributeCurve                 = 0,
	MaterialCurve                  = 1,
	MorphTargetCurve               = 2,
	MaxAnimCurveType               = 3,
	EAnimCurveType_MAX             = 4
};


// Enum Engine.EBoneFilterActionOption
enum class EBoneFilterActionOption : uint8_t
{
	Remove                         = 0,
	Keep                           = 1,
	Invalid                        = 2,
	EBoneFilterActionOption_MAX    = 3
};


// Enum Engine.SkeletalMeshOptimizationImportance
enum class ESkeletalMeshOptimizationImportance : uint8_t
{
	SMOI_Off                       = 0,
	SMOI_Lowest                    = 1,
	SMOI_Low                       = 2,
	SMOI_Normal                    = 3,
	SMOI_High                      = 4,
	SMOI_Highest                   = 5,
	SMOI_MAX                       = 6
};


// Enum Engine.SkeletalMeshOptimizationType
enum class ESkeletalMeshOptimizationType : uint8_t
{
	SMOT_NumOfTriangles            = 0,
	SMOT_MaxDeviation              = 1,
	SMOT_TriangleOrDeviation       = 2,
	SMOT_MAX                       = 3
};


// Enum Engine.SkeletalMeshTerminationCriterion
enum class ESkeletalMeshTerminationCriterion : uint8_t
{
	SMTC_NumOfTriangles            = 0,
	SMTC_NumOfVerts                = 1,
	SMTC_TriangleOrVert            = 2,
	SMTC_AbsNumOfTriangles         = 3,
	SMTC_AbsNumOfVerts             = 4,
	SMTC_AbsTriangleOrVert         = 5,
	SMTC_MAX                       = 6
};


// Enum Engine.EBoneTranslationRetargetingMode
enum class EBoneTranslationRetargetingMode : uint8_t
{
	Animation                      = 0,
	Skeleton                       = 1,
	AnimationScaled                = 2,
	AnimationRelative              = 3,
	OrientAndScale                 = 4,
	EBoneTranslationRetargetingMode_MAX = 5
};


// Enum Engine.EBoneSpaces
enum class EBoneSpaces : uint8_t
{
	WorldSpace                     = 0,
	ComponentSpace                 = 1,
	EBoneSpaces_MAX                = 2
};


// Enum Engine.EVisibilityBasedAnimTickOption
enum class EVisibilityBasedAnimTickOption : uint8_t
{
	AlwaysTickPoseAndRefreshBones  = 0,
	AlwaysTickPose                 = 1,
	OnlyTickMontagesWhenNotRendered = 2,
	OnlyTickPoseWhenRendered       = 3,
	EVisibilityBasedAnimTickOption_MAX = 4
};


// Enum Engine.EPhysBodyOp
enum class EPhysBodyOp : uint8_t
{
	PBO_None                       = 0,
	PBO_Term                       = 1,
	PBO_MAX                        = 2
};


// Enum Engine.EBoneVisibilityStatus
enum class EBoneVisibilityStatus : uint8_t
{
	BVS_HiddenByParent             = 0,
	BVS_Visible                    = 1,
	BVS_ExplicitlyHidden           = 2,
	BVS_MAX                        = 3
};


// Enum Engine.ESkyLightSourceType
enum class ESkyLightSourceType : uint8_t
{
	SLS_CapturedScene              = 0,
	SLS_SpecifiedCubemap           = 1,
	SLS_MAX                        = 2
};


// Enum Engine.EReverbSendMethod
enum class EReverbSendMethod : uint8_t
{
	Linear                         = 0,
	CustomCurve                    = 1,
	Manual                         = 2,
	EReverbSendMethod_MAX          = 3
};


// Enum Engine.EAirAbsorptionMethod
enum class EAirAbsorptionMethod : uint8_t
{
	Linear                         = 0,
	CustomCurve                    = 1,
	EAirAbsorptionMethod_MAX       = 2
};


// Enum Engine.ESoundSpatializationAlgorithm
enum class ESoundSpatializationAlgorithm : uint8_t
{
	SPATIALIZATION_Default         = 0,
	SPATIALIZATION_HRTF            = 1,
	SPATIALIZATION_MAX             = 2
};


// Enum Engine.ESoundDistanceCalc
enum class ESoundDistanceCalc : uint8_t
{
	SOUNDDISTANCE_Normal           = 0,
	SOUNDDISTANCE_InfiniteXYPlane  = 1,
	SOUNDDISTANCE_InfiniteXZPlane  = 2,
	SOUNDDISTANCE_InfiniteYZPlane  = 3,
	SOUNDDISTANCE_MAX              = 4
};


// Enum Engine.EAudioOutputTarget
enum class EAudioOutputTarget : uint8_t
{
	Speaker                        = 0,
	Controller                     = 1,
	ControllerFallbackToSpeaker    = 2,
	EAudioOutputTarget_MAX         = 3
};


// Enum Engine.EMaxConcurrentResolutionRule
enum class EMaxConcurrentResolutionRule : uint8_t
{
	PreventNew                     = 0,
	StopOldest                     = 1,
	StopFarthestThenPreventNew     = 2,
	StopFarthestThenOldest         = 3,
	StopLowestPriority             = 4,
	StopQuietest                   = 5,
	StopLowestPriorityThenPreventNew = 6,
	EMaxConcurrentResolutionRule_MAX = 7
};


// Enum Engine.ESoundGroup
enum class ESoundGroup : uint8_t
{
	SOUNDGROUP_Default             = 0,
	SOUNDGROUP_Effects             = 1,
	SOUNDGROUP_UI                  = 2,
	SOUNDGROUP_Music               = 3,
	SOUNDGROUP_Voice               = 4,
	SOUNDGROUP_GameSoundGroup1     = 5,
	SOUNDGROUP_GameSoundGroup2     = 6,
	SOUNDGROUP_GameSoundGroup3     = 7,
	SOUNDGROUP_GameSoundGroup4     = 8,
	SOUNDGROUP_GameSoundGroup5     = 9,
	SOUNDGROUP_GameSoundGroup6     = 10,
	SOUNDGROUP_GameSoundGroup7     = 11,
	SOUNDGROUP_GameSoundGroup8     = 12,
	SOUNDGROUP_GameSoundGroup9     = 13,
	SOUNDGROUP_GameSoundGroup10    = 14,
	SOUNDGROUP_GameSoundGroup11    = 15,
	SOUNDGROUP_GameSoundGroup12    = 16,
	SOUNDGROUP_GameSoundGroup13    = 17,
	SOUNDGROUP_GameSoundGroup14    = 18,
	SOUNDGROUP_GameSoundGroup15    = 19,
	SOUNDGROUP_GameSoundGroup16    = 20,
	SOUNDGROUP_GameSoundGroup17    = 21,
	SOUNDGROUP_GameSoundGroup18    = 22,
	SOUNDGROUP_GameSoundGroup19    = 23,
	SOUNDGROUP_GameSoundGroup20    = 24,
	SOUNDGROUP_MAX                 = 25
};


// Enum Engine.ModulationParamMode
enum class EModulationParamMode : uint8_t
{
	MPM_Normal                     = 0,
	MPM_Abs                        = 1,
	MPM_Direct                     = 2,
	MPM_MAX                        = 3
};


// Enum Engine.ESourceBusChannels
enum class ESourceBusChannels : uint8_t
{
	Mono                           = 0,
	Stereo                         = 1,
	ESourceBusChannels_MAX         = 2
};


// Enum Engine.ESourceBusSendLevelControlMethod
enum class ESourceBusSendLevelControlMethod : uint8_t
{
	Linear                         = 0,
	CustomCurve                    = 1,
	Manual                         = 2,
	ESourceBusSendLevelControlMethod_MAX = 3
};


// Enum Engine.ESendLevelControlMethod
enum class ESendLevelControlMethod : uint8_t
{
	Linear                         = 0,
	CustomCurve                    = 1,
	Manual                         = 2,
	ESendLevelControlMethod_MAX    = 3
};


// Enum Engine.EAudioRecordingExportType
enum class EAudioRecordingExportType : uint8_t
{
	SoundWave                      = 0,
	WavFile                        = 1,
	EAudioRecordingExportType_MAX  = 2
};


// Enum Engine.ESubmixChannelFormat
enum class ESubmixChannelFormat : uint8_t
{
	Device                         = 0,
	Stereo                         = 1,
	Quad                           = 2,
	FiveDotOne                     = 3,
	SevenDotOne                    = 4,
	Ambisonics                     = 5,
	Count                          = 6,
	ESubmixChannelFormat_MAX       = 7
};


// Enum Engine.ESoundWaveFFTSize
enum class ESoundWaveFFTSize : uint8_t
{
	VerySmall_64                   = 0,
	Small_256                      = 1,
	Medium_512                     = 2,
	Large_1024                     = 3,
	VeryLarge_2048                 = 4,
	ESoundWaveFFTSize_MAX          = 5
};


// Enum Engine.EDecompressionType
enum class EDecompressionType : uint8_t
{
	DTYPE_Setup                    = 0,
	DTYPE_Invalid                  = 1,
	DTYPE_Preview                  = 2,
	DTYPE_Native                   = 3,
	DTYPE_RealTime                 = 4,
	DTYPE_Procedural               = 5,
	DTYPE_Xenon                    = 6,
	DTYPE_Streaming                = 7,
	DTYPE_MAX                      = 8
};


// Enum Engine.ESplineCoordinateSpace
enum class ESplineCoordinateSpace : uint8_t
{
	Local                          = 0,
	World                          = 1,
	ESplineCoordinateSpace_MAX     = 2
};


// Enum Engine.ESplinePointType
enum class ESplinePointType : uint8_t
{
	Linear                         = 0,
	Curve                          = 1,
	Constant                       = 2,
	CurveClamped                   = 3,
	CurveCustomTangent             = 4,
	ESplinePointType_MAX           = 5
};


// Enum Engine.ESplineMeshAxis
enum class ESplineMeshAxis : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	ESplineMeshAxis_MAX            = 3
};


// Enum Engine.EOptimizationType
enum class EOptimizationType : uint8_t
{
	OT_NumOfTriangles              = 0,
	OT_MaxDeviation                = 1,
	OT_MAX                         = 2
};


// Enum Engine.EImportanceLevel
enum class EImportanceLevel : uint8_t
{
	IL_Off                         = 0,
	IL_Lowest                      = 1,
	IL_Low                         = 2,
	IL_Normal                      = 3,
	IL_High                        = 4,
	IL_Highest                     = 5,
	TEMP_BROKEN2                   = 6,
	EImportanceLevel_MAX           = 7
};


// Enum Engine.ENormalMode
enum class ENormalMode : uint8_t
{
	NM_PreserveSmoothingGroups     = 0,
	NM_RecalculateNormals          = 1,
	NM_RecalculateNormalsSmooth    = 2,
	NM_RecalculateNormalsHard      = 3,
	TEMP_BROKEN                    = 4,
	ENormalMode_MAX                = 5
};


// Enum Engine.EStereoLayerShape
enum class EStereoLayerShape : uint8_t
{
	SLSH_QuadLayer                 = 0,
	SLSH_CylinderLayer             = 1,
	SLSH_CubemapLayer              = 2,
	SLSH_MAX                       = 3
};


// Enum Engine.EStereoLayerType
enum class EStereoLayerType : uint8_t
{
	SLT_WorldLocked                = 0,
	SLT_TrackerLocked              = 1,
	SLT_FaceLocked                 = 2,
	SLT_MAX                        = 3
};


// Enum Engine.EOpacitySourceMode
enum class EOpacitySourceMode : uint8_t
{
	OSM_Alpha                      = 0,
	OSM_ColorBrightness            = 1,
	OSM_RedChannel                 = 2,
	OSM_GreenChannel               = 3,
	OSM_BlueChannel                = 4,
	OSM_MAX                        = 5
};


// Enum Engine.ESubUVBoundingVertexCount
enum class ESubUVBoundingVertexCount : uint8_t
{
	BVC_FourVertices               = 0,
	BVC_EightVertices              = 1,
	BVC_MAX                        = 2
};


// Enum Engine.EVerticalTextAligment
enum class EVerticalTextAligment : uint8_t
{
	EVRTA_TextTop                  = 0,
	EVRTA_TextCenter               = 1,
	EVRTA_TextBottom               = 2,
	EVRTA_QuadTop                  = 3,
	EVRTA_MAX                      = 4
};


// Enum Engine.EHorizTextAligment
enum class EHorizTextAligment : uint8_t
{
	EHTA_Left                      = 0,
	EHTA_Center                    = 1,
	EHTA_Right                     = 2,
	EHTA_MAX                       = 3
};


// Enum Engine.ETextureCompressionQuality
enum class ETextureCompressionQuality : uint8_t
{
	TCQ_Default                    = 0,
	TCQ_Lowest                     = 1,
	TCQ_Low                        = 2,
	TCQ_Medium                     = 3,
	TCQ_High                       = 4,
	TCQ_Highest                    = 5,
	TCQ_MAX                        = 6
};


// Enum Engine.ETextureSourceFormat
enum class ETextureSourceFormat : uint8_t
{
	TSF_Invalid                    = 0,
	TSF_G8                         = 1,
	TSF_BGRA8                      = 2,
	TSF_BGRE8                      = 3,
	TSF_RGBA16                     = 4,
	TSF_RGBA16F                    = 5,
	TSF_RGBA8                      = 6,
	TSF_RGBE8                      = 7,
	TSF_MAX                        = 8
};


// Enum Engine.ETextureSourceArtType
enum class ETextureSourceArtType : uint8_t
{
	TSAT_Uncompressed              = 0,
	TSAT_PNGCompressed             = 1,
	TSAT_DDSFile                   = 2,
	TSAT_MAX                       = 3
};


// Enum Engine.ETextureMipCount
enum class ETextureMipCount : uint8_t
{
	TMC_ResidentMips               = 0,
	TMC_AllMips                    = 1,
	TMC_AllMipsBiased              = 2,
	TMC_MAX                        = 3
};


// Enum Engine.ECompositeTextureMode
enum class ECompositeTextureMode : uint8_t
{
	CTM_Disabled                   = 0,
	CTM_NormalRoughnessToRed       = 1,
	CTM_NormalRoughnessToGreen     = 2,
	CTM_NormalRoughnessToBlue      = 3,
	CTM_NormalRoughnessToAlpha     = 4,
	CTM_MAX                        = 5
};


// Enum Engine.TextureAddress
enum class ETextureAddress : uint8_t
{
	TA_Wrap                        = 0,
	TA_Clamp                       = 1,
	TA_Mirror                      = 2,
	TA_MAX                         = 3
};


// Enum Engine.TextureFilter
enum class ETextureFilter : uint8_t
{
	TF_Nearest                     = 0,
	TF_Bilinear                    = 1,
	TF_Trilinear                   = 2,
	TF_Default                     = 3,
	TF_MAX                         = 4
};


// Enum Engine.TextureCompressionSettings
enum class ETextureCompressionSettings : uint8_t
{
	TC_Default                     = 0,
	TC_Normalmap                   = 1,
	TC_Masks                       = 2,
	TC_Grayscale                   = 3,
	TC_Displacementmap             = 4,
	TC_VectorDisplacementmap       = 5,
	TC_HDR                         = 6,
	TC_EditorIcon                  = 7,
	TC_Alpha                       = 8,
	TC_DistanceFieldFont           = 9,
	TC_HDR_Compressed              = 10,
	TC_BC7                         = 11,
	TC_MAX                         = 12
};


// Enum Engine.ETextureMipLoadOptions
enum class ETextureMipLoadOptions : uint8_t
{
	Default                        = 0,
	AllMips                        = 1,
	OnlyFirstMip                   = 2,
	ETextureMipLoadOptions_MAX     = 3
};


// Enum Engine.ETextureSamplerFilter
enum class ETextureSamplerFilter : uint8_t
{
	Point                          = 0,
	Bilinear                       = 1,
	Trilinear                      = 2,
	AnisotropicPoint               = 3,
	AnisotropicLinear              = 4,
	ETextureSamplerFilter_MAX      = 5
};


// Enum Engine.ETexturePowerOfTwoSetting
enum class ETexturePowerOfTwoSetting : uint8_t
{
	None                           = 0,
	PadToPowerOfTwo                = 1,
	PadToSquarePowerOfTwo          = 2,
	ETexturePowerOfTwoSetting_MAX  = 3
};


// Enum Engine.TextureMipGenSettings
enum class ETextureMipGenSettings : uint8_t
{
	TMGS_FromTextureGroup          = 0,
	TMGS_SimpleAverage             = 1,
	TMGS_Sharpen0                  = 2,
	TMGS_Sharpen1                  = 3,
	TMGS_Sharpen2                  = 4,
	TMGS_Sharpen3                  = 5,
	TMGS_Sharpen4                  = 6,
	TMGS_Sharpen5                  = 7,
	TMGS_Sharpen6                  = 8,
	TMGS_Sharpen7                  = 9,
	TMGS_Sharpen8                  = 10,
	TMGS_Sharpen9                  = 11,
	TMGS_Sharpen10                 = 12,
	TMGS_NoMipmaps                 = 13,
	TMGS_LeaveExistingMips         = 14,
	TMGS_Blur1                     = 15,
	TMGS_Blur2                     = 16,
	TMGS_Blur3                     = 17,
	TMGS_Blur4                     = 18,
	TMGS_Blur5                     = 19,
	TMGS_MAX                       = 20
};


// Enum Engine.TextureGroup
enum class ETextureGroup : uint8_t
{
	TEXTUREGROUP_World             = 0,
	TEXTUREGROUP_WorldNormalMap    = 1,
	TEXTUREGROUP_WorldSpecular     = 2,
	TEXTUREGROUP_Character         = 3,
	TEXTUREGROUP_CharacterNormalMap = 4,
	TEXTUREGROUP_CharacterSpecular = 5,
	TEXTUREGROUP_Weapon            = 6,
	TEXTUREGROUP_WeaponNormalMap   = 7,
	TEXTUREGROUP_WeaponSpecular    = 8,
	TEXTUREGROUP_Vehicle           = 9,
	TEXTUREGROUP_VehicleNormalMap  = 10,
	TEXTUREGROUP_VehicleSpecular   = 11,
	TEXTUREGROUP_Cinematic         = 12,
	TEXTUREGROUP_Effects           = 13,
	TEXTUREGROUP_EffectsNotFiltered = 14,
	TEXTUREGROUP_Skybox            = 15,
	TEXTUREGROUP_UI                = 16,
	TEXTUREGROUP_Lightmap          = 17,
	TEXTUREGROUP_RenderTarget      = 18,
	TEXTUREGROUP_MobileFlattened   = 19,
	TEXTUREGROUP_ProcBuilding_Face = 20,
	TEXTUREGROUP_ProcBuilding_LightMap = 21,
	TEXTUREGROUP_Shadowmap         = 22,
	TEXTUREGROUP_ColorLookupTable  = 23,
	TEXTUREGROUP_Terrain_Heightmap = 24,
	TEXTUREGROUP_Terrain_Weightmap = 25,
	TEXTUREGROUP_Bokeh             = 26,
	TEXTUREGROUP_IESLightProfile   = 27,
	TEXTUREGROUP_Pixels2D          = 28,
	TEXTUREGROUP_HierarchicalLOD   = 29,
	TEXTUREGROUP_Impostor          = 30,
	TEXTUREGROUP_ImpostorNormalDepth = 31,
	TEXTUREGROUP_Project01         = 32,
	TEXTUREGROUP_Project02         = 33,
	TEXTUREGROUP_Project03         = 34,
	TEXTUREGROUP_Project04         = 35,
	TEXTUREGROUP_Project05         = 36,
	TEXTUREGROUP_Project06         = 37,
	TEXTUREGROUP_Project07         = 38,
	TEXTUREGROUP_Project08         = 39,
	TEXTUREGROUP_Project09         = 40,
	TEXTUREGROUP_Project10         = 41,
	TEXTUREGROUP_MAX               = 42
};


// Enum Engine.ETextureRenderTargetFormat
enum class ETextureRenderTargetFormat : uint8_t
{
	RTF_R8                         = 0,
	RTF_RG8                        = 1,
	RTF_RGBA8                      = 2,
	RTF_R16f                       = 3,
	RTF_RG16f                      = 4,
	RTF_RGBA16f                    = 5,
	RTF_R32f                       = 6,
	RTF_RG32f                      = 7,
	RTF_RGBA32f                    = 8,
	RTF_RGB10A2                    = 9,
	RTF_MAX                        = 10
};


// Enum Engine.ETimecodeProviderSynchronizationState
enum class ETimecodeProviderSynchronizationState : uint8_t
{
	Closed                         = 0,
	Error                          = 1,
	Synchronized                   = 2,
	Synchronizing                  = 3,
	ETimecodeProviderSynchronizationState_MAX = 4
};


// Enum Engine.ETimelineDirection
enum class ETimelineDirection : uint8_t
{
	Forward                        = 0,
	Backward                       = 1,
	ETimelineDirection_MAX         = 2
};


// Enum Engine.ETimelineLengthMode
enum class ETimelineLengthMode : uint8_t
{
	TL_TimelineLength              = 0,
	TL_LastKeyFrame                = 1,
	TL_MAX                         = 2
};


// Enum Engine.ETimeStretchCurveMapping
enum class ETimeStretchCurveMapping : uint8_t
{
	T_Original                     = 0,
	T_TargetMin                    = 1,
	T_TargetMax                    = 2,
	MAX                            = 3
};


// Enum Engine.ETwitterIntegrationDelegate
enum class ETwitterIntegrationDelegate : uint8_t
{
	TID_AuthorizeComplete          = 0,
	TID_TweetUIComplete            = 1,
	TID_RequestComplete            = 2,
	TID_MAX                        = 3
};


// Enum Engine.ETwitterRequestMethod
enum class ETwitterRequestMethod : uint8_t
{
	TRM_Get                        = 0,
	TRM_Post                       = 1,
	TRM_Delete                     = 2,
	TRM_MAX                        = 3
};


// Enum Engine.EUserDefinedStructureStatus
enum class EUserDefinedStructureStatus : uint8_t
{
	UDSS_UpToDate                  = 0,
	UDSS_Dirty                     = 1,
	UDSS_Error                     = 2,
	UDSS_Duplicate                 = 3,
	UDSS_MAX                       = 4
};


// Enum Engine.EUIScalingRule
enum class EUIScalingRule : uint8_t
{
	ShortestSide                   = 0,
	LongestSide                    = 1,
	Horizontal                     = 2,
	Vertical                       = 3,
	Custom                         = 4,
	EUIScalingRule_MAX             = 5
};


// Enum Engine.ERenderFocusRule
enum class ERenderFocusRule : uint8_t
{
	Always                         = 0,
	NonPointer                     = 1,
	NavigationOnly                 = 2,
	Never                          = 3,
	ERenderFocusRule_MAX           = 4
};


// Enum Engine.EVectorFieldConstructionOp
enum class EVectorFieldConstructionOp : uint8_t
{
	VFCO_Extrude                   = 0,
	VFCO_Revolve                   = 1,
	VFCO_MAX                       = 2
};


// Enum Engine.PageTableFormat
enum class EPageTableFormat : uint8_t
{
	PTF_16                         = 0,
	PTF_32                         = 1,
	PTF_MAX                        = 2
};


// Enum Engine.EWindSourceType
enum class EWindSourceType : uint8_t
{
	Directional                    = 0,
	Point                          = 1,
	EWindSourceType_MAX            = 2
};


// Enum Engine.EPSCPoolMethod
enum class EPSCPoolMethod : uint8_t
{
	None                           = 0,
	AutoRelease                    = 1,
	ManualRelease                  = 2,
	ManualRelease_OnComplete       = 3,
	FreeInPool                     = 4,
	EPSCPoolMethod_MAX             = 5
};


// Enum Engine.EVolumeLightingMethod
enum class EVolumeLightingMethod : uint8_t
{
	VLM_VolumetricLightmap         = 0,
	VLM_SparseVolumeLightingSamples = 1,
	VLM_MAX                        = 2
};


// Enum Engine.EVisibilityAggressiveness
enum class EVisibilityAggressiveness : uint8_t
{
	VIS_LeastAggressive            = 0,
	VIS_ModeratelyAggressive       = 1,
	VIS_MostAggressive             = 2,
	VIS_Max                        = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Engine.TickFunction
// 0x0028
struct FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TEnumAsByte<ETickingGroup>                         TickGroup;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ETickingGroup>                         EndTickGroup;                                             // 0x0009(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bTickEvenWhenPaused : 1;                                  // 0x000A(0x0001) (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCanEverTick : 1;                                         // 0x000A(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bStartWithTickEnabled : 1;                                // 0x000A(0x0001) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowTickOnDedicatedServer : 1;                          // 0x000A(0x0001) (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
	float                                              TickInterval;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.ActorComponentTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FActorComponentTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SimpleMemberReference
// 0x0020
struct FSimpleMemberReference
{
	class UObject*                                     MemberParent;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MemberName;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       MemberGuid;                                               // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.Vector_NetQuantize
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantize : public FVector
{

};

// ScriptStruct Engine.Vector_NetQuantizeNormal
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantizeNormal : public FVector
{

};

// ScriptStruct Engine.HitResult
// 0x0088
struct FHitResult
{
	unsigned char                                      bBlockingHit : 1;                                         // 0x0000(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bStartPenetrating : 1;                                    // 0x0000(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                FaceIndex;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Distance;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         Location;                                                 // 0x0010(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         ImpactPoint;                                              // 0x001C(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   Normal;                                                   // 0x0028(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   ImpactNormal;                                             // 0x0034(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         TraceStart;                                               // 0x0040(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         TraceEnd;                                                 // 0x004C(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	float                                              PenetrationDepth;                                         // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Item;                                                     // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UPhysicalMaterial>            PhysMaterial;                                             // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UPrimitiveComponent>          Component;                                                // 0x0070(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BoneName;                                                 // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MyBoneName;                                               // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.LightingChannels
// 0x0001
struct FLightingChannels
{
	unsigned char                                      bChannel0 : 1;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bChannel1 : 1;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bChannel2 : 1;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.CustomPrimitiveData
// 0x0010
struct FCustomPrimitiveData
{
	TArray<float>                                      Data;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.CollisionResponseContainer
// 0x0020
struct FCollisionResponseContainer
{
	TEnumAsByte<ECollisionResponse>                    WorldStatic;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionResponse>                    WorldDynamic;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionResponse>                    Pawn;                                                     // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionResponse>                    Visibility;                                               // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionResponse>                    Camera;                                                   // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionResponse>                    PhysicsBody;                                              // 0x0005(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionResponse>                    Vehicle;                                                  // 0x0006(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionResponse>                    Destructible;                                             // 0x0007(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel1;                                      // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel2;                                      // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel3;                                      // 0x000A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel4;                                      // 0x000B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel5;                                      // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel6;                                      // 0x000D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel1;                                        // 0x000E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel2;                                        // 0x000F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel3;                                        // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel4;                                        // 0x0011(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel5;                                        // 0x0012(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel6;                                        // 0x0013(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel7;                                        // 0x0014(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel8;                                        // 0x0015(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel9;                                        // 0x0016(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel10;                                       // 0x0017(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel11;                                       // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel12;                                       // 0x0019(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel13;                                       // 0x001A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel14;                                       // 0x001B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel15;                                       // 0x001C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel16;                                       // 0x001D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel17;                                       // 0x001E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel18;                                       // 0x001F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ResponseChannel
// 0x000C
struct FResponseChannel
{
	struct FName                                       Channel;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionResponse>                    Response;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.CollisionResponse
// 0x0030
struct FCollisionResponse
{
	struct FCollisionResponseContainer                 ResponseToChannels;                                       // 0x0000(0x0020) (Transient, NoDestructor, NativeAccessSpecifierPrivate)
	TArray<struct FResponseChannel>                    ResponseArray;                                            // 0x0020(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
};

// ScriptStruct Engine.WalkableSlopeOverride
// 0x0010
struct FWalkableSlopeOverride
{
	TEnumAsByte<EWalkableSlopeBehavior>                WalkableSlopeBehavior;                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              WalkableSlopeAngle;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.BodyInstance
// 0x0110
struct FBodyInstance
{
	unsigned char                                      UnknownData00[0x6];                                       // 0x0000(0x0006) MISSED OFFSET
	TEnumAsByte<ECollisionChannel>                     ObjectType;                                               // 0x0006(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
	TEnumAsByte<ECollisionEnabled>                     CollisionEnabled;                                         // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0009(0x0001) MISSED OFFSET
	ESleepFamily                                       SleepFamily;                                              // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EDOFMode>                              DOFMode;                                                  // 0x000B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseCCD : 1;                                              // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNotifyRigidBodyCollision : 1;                            // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03 : 1;                                        // 0x000C(0x0001)
	unsigned char                                      bSimulatePhysics : 1;                                     // 0x000C(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideMass : 1;                                        // 0x000C(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableGravity : 1;                                       // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAutoWeld : 1;                                            // 0x000C(0x0001) (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bStartAwake : 1;                                          // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGenerateWakeEvents : 1;                                  // 0x000D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUpdateMassWhenScaleChanges : 1;                          // 0x000D(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLockTranslation : 1;                                     // 0x000D(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLockRotation : 1;                                        // 0x000D(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLockXTranslation : 1;                                    // 0x000D(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLockYTranslation : 1;                                    // 0x000D(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLockZTranslation : 1;                                    // 0x000D(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLockXRotation : 1;                                       // 0x000D(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLockYRotation : 1;                                       // 0x000E(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLockZRotation : 1;                                       // 0x000E(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideMaxAngularVelocity : 1;                          // 0x000E(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04 : 2;                                        // 0x000E(0x0001)
	unsigned char                                      bOverrideMaxDepenetrationVelocity : 1;                    // 0x000E(0x0001) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bOverrideWalkableSlopeOnInstance : 1;                     // 0x000E(0x0001) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bInterpolateWhenSubStepping : 1;                          // 0x000E(0x0001) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0xD];                                       // 0x000F(0x000D) MISSED OFFSET
	struct FName                                       CollisionProfileName;                                     // 0x001C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      PositionSolverIterationCount;                             // 0x0024(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      VelocitySolverIterationCount;                             // 0x0025(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	struct FCollisionResponse                          CollisionResponses;                                       // 0x0028(0x0030) (Edit, NativeAccessSpecifierPrivate)
	float                                              MaxDepenetrationVelocity;                                 // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MassInKgOverride;                                         // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData07[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
	float                                              LinearDamping;                                            // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngularDamping;                                           // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CustomDOFPlaneNormal;                                     // 0x0070(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     COMNudge;                                                 // 0x007C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MassScale;                                                // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InertiaTensorScale;                                       // 0x008C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData08[0x10];                                      // 0x0098(0x0010) MISSED OFFSET
	struct FWalkableSlopeOverride                      WalkableSlopeOverride;                                    // 0x00A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	class UPhysicalMaterial*                           PhysMaterialOverride;                                     // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxAngularVelocity;                                       // 0x00C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CustomSleepThresholdMultiplier;                           // 0x00C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StabilizationThresholdMultiplier;                         // 0x00C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PhysicsBlendWeight;                                       // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData09[0x40];                                      // 0x00D0(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.SkelMeshComponentLODInfo
// 0x0028
struct FSkelMeshComponentLODInfo
{
	TArray<bool>                                       HiddenMaterials;                                          // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.SkelMeshSkinWeightInfo
// 0x0028
struct FSkelMeshSkinWeightInfo
{
	int                                                Bones[0x8];                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Weights[0x8];                                             // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.SingleAnimationPlayData
// 0x0018
struct FSingleAnimationPlayData
{
	class UAnimationAsset*                             AnimToPlay;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSavedLooping : 1;                                        // 0x0008(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSavedPlaying : 1;                                        // 0x0008(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              SavedPosition;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SavedPlayRate;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.PoseSnapshot
// 0x0038
struct FPoseSnapshot
{
	TArray<struct FTransform>                          LocalTransforms;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               BoneNames;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FName                                       SkeletalMeshName;                                         // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SnapshotName;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsValid;                                                 // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.AnimNotifyEventReference
// 0x0010
struct FAnimNotifyEventReference
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UObject*                                     NotifySource;                                             // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct Engine.AnimNotifyArray
// 0x0010
struct FAnimNotifyArray
{
	TArray<struct FAnimNotifyEventReference>           Notifies;                                                 // 0x0000(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.AnimNotifyQueue
// 0x0070
struct FAnimNotifyQueue
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	TArray<struct FAnimNotifyEventReference>           AnimNotifies;                                             // 0x0010(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TMap<struct FName, struct FAnimNotifyArray>        UnfilteredMontageAnimNotifies;                            // 0x0020(0x0050) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.AnimLinkableElement
// 0x0030
struct FAnimLinkableElement
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UAnimMontage*                                LinkedMontage;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                SlotIndex;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                SegmentIndex;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<EAnimLinkMethod>                       LinkMethod;                                               // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<EAnimLinkMethod>                       CachedLinkMethod;                                         // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	float                                              SegmentBeginTime;                                         // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SegmentLength;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LinkValue;                                                // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimSequenceBase*                           LinkedSequence;                                           // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// ScriptStruct Engine.AnimNotifyEvent
// 0x0088 (0x00B8 - 0x0030)
struct FAnimNotifyEvent : public FAnimLinkableElement
{
	float                                              DisplayTime;                                              // 0x0030(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TriggerTimeOffset;                                        // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndTriggerTimeOffset;                                     // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TriggerWeightThreshold;                                   // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NotifyName;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimNotify*                                 Notify;                                                   // 0x0048(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimNotifyState*                            NotifyStateClass;                                         // 0x0050(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                 // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FAnimLinkableElement                        EndLink;                                                  // 0x0060(0x0030) (NativeAccessSpecifierPublic)
	bool                                               bConvertedFromBranchingPoint;                             // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EMontageNotifyTickType>                MontageTickType;                                          // 0x0091(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0092(0x0002) MISSED OFFSET
	float                                              NotifyTriggerChance;                                      // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ENotifyFilterType>                     NotifyFilterType;                                         // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	int                                                NotifyFilterLOD;                                          // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTriggerOnDedicatedServer;                                // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTriggerOnFollower;                                       // 0x00A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x2];                                       // 0x00A2(0x0002) MISSED OFFSET
	int                                                TrackIndex;                                               // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x10];                                      // 0x00A8(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.MarkerSyncAnimPosition
// 0x0014
struct FMarkerSyncAnimPosition
{
	struct FName                                       PreviousMarkerName;                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NextMarkerName;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PositionBetweenMarkers;                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ActorTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FActorTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.RepMovement
// 0x0034
struct FRepMovement
{
	struct FVector                                     LinearVelocity;                                           // 0x0000(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AngularVelocity;                                          // 0x000C(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                 // 0x0018(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                 // 0x0024(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSimulatedPhysicSleep : 1;                                // 0x0030(0x0001) (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRepPhysics : 1;                                          // 0x0030(0x0001) (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EVectorQuantization                                LocationQuantizationLevel;                                // 0x0031(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EVectorQuantization                                VelocityQuantizationLevel;                                // 0x0032(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERotatorQuantization                               RotationQuantizationLevel;                                // 0x0033(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.Vector_NetQuantize100
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantize100 : public FVector
{

};

// ScriptStruct Engine.RepAttachment
// 0x0040
struct FRepAttachment
{
	class AActor*                                      AttachParent;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                      LocationOffset;                                           // 0x0008(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                      RelativeScale3D;                                          // 0x0014(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    RotationOffset;                                           // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       AttachSocket;                                             // 0x002C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class USceneComponent*                             AttachComponent;                                          // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ActiveForceFeedbackEffect
// 0x0018
struct FActiveForceFeedbackEffect
{
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ViewTargetTransitionParams
// 0x0010
struct FViewTargetTransitionParams
{
	float                                              BlendTime;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EViewTargetBlendFunction>              BlendFunction;                                            // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              BlendExp;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLockOutgoing : 1;                                        // 0x000C(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.UpdateLevelVisibilityLevelInfo
// 0x0014
struct FUpdateLevelVisibilityLevelInfo
{
	struct FName                                       PackageName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Filename;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsVisible : 1;                                           // 0x0010(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.UniqueNetIdRepl
// 0x0027 (0x0028 - 0x0001)
struct FUniqueNetIdRepl : public FUniqueNetIdWrapper
{
	unsigned char                                      UnknownData00[0x17];                                      // 0x0001(0x0017) MISSED OFFSET
	TArray<unsigned char>                              ReplicationBytes;                                         // 0x0018(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
};

// ScriptStruct Engine.LatentActionInfo
// 0x0018
struct FLatentActionInfo
{
	int                                                Linkage;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UUID;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ExecutionFunction;                                        // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     CallbackTarget;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.UpdateLevelStreamingLevelStatus
// 0x0010
struct FUpdateLevelStreamingLevelStatus
{
	struct FName                                       PackageName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LODIndex;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNewShouldBeLoaded : 1;                                   // 0x000C(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNewShouldBeVisible : 1;                                  // 0x000C(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNewShouldBlockOnLoad : 1;                                // 0x000C(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ForceFeedbackParameters
// 0x000C
struct FForceFeedbackParameters
{
	struct FName                                       Tag;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLooping;                                                 // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreTimeDilation;                                      // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayWhilePaused;                                         // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.ChannelDefinition
// 0x0028
struct FChannelDefinition
{
	struct FName                                       ChannelName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ClassName;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ChannelClass;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StaticChannelIndex;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTickOnCreate;                                            // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bServerOpen;                                              // 0x001D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bClientOpen;                                              // 0x001E(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInitialServer;                                           // 0x001F(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInitialClient;                                           // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.StatColorMapEntry
// 0x0008
struct FStatColorMapEntry
{
	float                                              In;                                                       // 0x0000(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      Out;                                                      // 0x0004(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.StatColorMapping
// 0x0028
struct FStatColorMapping
{
	struct FString                                     StatName;                                                 // 0x0000(0x0010) (ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FStatColorMapEntry>                  ColorMap;                                                 // 0x0010(0x0010) (ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)
	unsigned char                                      DisableBlend : 1;                                         // 0x0020(0x0001) (Config, GlobalConfig, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.GameNameRedirect
// 0x0010
struct FGameNameRedirect
{
	struct FName                                       OldGameName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NewGameName;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ClassRedirect
// 0x003C
struct FClassRedirect
{
	struct FName                                       ObjectName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       OldClassName;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NewClassName;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       OldSubobjName;                                            // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NewSubobjName;                                            // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NewClassClass;                                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NewClassPackage;                                          // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InstanceOnly;                                             // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.PluginRedirect
// 0x0020
struct FPluginRedirect
{
	struct FString                                     OldPluginName;                                            // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NewPluginName;                                            // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.StructRedirect
// 0x0010
struct FStructRedirect
{
	struct FName                                       OldStructName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NewStructName;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.DirectoryPath
// 0x0010
struct FDirectoryPath
{
	struct FString                                     Path;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.DropNoteInfo
// 0x0028
struct FDropNoteInfo
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Comment;                                                  // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.NetDriverDefinition
// 0x0018
struct FNetDriverDefinition
{
	struct FName                                       DefName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DriverClassName;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DriverClassNameFallback;                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.BlueprintComponentChangedPropertyInfo
// 0x0018
struct FBlueprintComponentChangedPropertyInfo
{
	struct FName                                       PropertyName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ArrayIndex;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class Ustruct*                                     PropertyScope;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.BlueprintCookedComponentInstancingData
// 0x0050
struct FBlueprintCookedComponentInstancingData
{
	bool                                               bHasValidCookedData;                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FBlueprintComponentChangedPropertyInfo> ChangedPropertyList;                                      // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0018(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.DebugTextInfo
// 0x0060
struct FDebugTextInfo
{
	class AActor*                                      SrcActor;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SrcActorOffset;                                           // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SrcActorDesiredOffset;                                    // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DebugText;                                                // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeRemaining;                                            // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      TextColor;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAbsoluteLocation : 1;                                    // 0x003C(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bKeepAttachedToActor : 1;                                 // 0x003C(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawShadow : 1;                                          // 0x003C(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FVector                                     OrigActorLocation;                                        // 0x0040(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class UFont*                                       Font;                                                     // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FontScale;                                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ExpressionInput
// 0x000C
struct FExpressionInput
{
	int                                                OutputIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ExpressionName;                                           // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.BasedMovementInfo
// 0x0030
struct FBasedMovementInfo
{
	class UPrimitiveComponent*                         MovementBase;                                             // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BoneName;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                      Location;                                                 // 0x0010(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bServerHasBaseComponent;                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRelativeRotation;                                        // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bServerHasVelocity;                                       // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSourceSettings
// 0x0001
struct FRootMotionSourceSettings
{
	unsigned char                                      Flags;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.Vector_NetQuantize10
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantize10 : public FVector
{

};

// ScriptStruct Engine.RootMotionSourceGroup
// 0x00F8
struct alignas(8) FRootMotionSourceGroup
{
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0000(0x00E8) MISSED OFFSET
	unsigned char                                      bHasAdditiveSources : 1;                                  // 0x00E8(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bHasOverrideSources : 1;                                  // 0x00E8(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsAdditiveVelocityApplied : 1;                           // 0x00E8(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRootMotionSourceSettings                   LastAccumulatedSettings;                                  // 0x00E9(0x0001) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00EA(0x0002) MISSED OFFSET
	struct FVector_NetQuantize10                       LastPreAdditiveVelocity;                                  // 0x00EC(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.RootMotionMovementParams
// 0x0040
struct FRootMotionMovementParams
{
	bool                                               bHasRootMotion;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              BlendWeight;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  RootMotionTransform;                                      // 0x0010(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.RepRootMotionMontage
// 0x0158
struct FRepRootMotionMontage
{
	bool                                               bIsActive;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UAnimMontage*                                AnimMontage;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Position;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                      Location;                                                 // 0x0014(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                 // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UPrimitiveComponent*                         MovementBase;                                             // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MovementBaseBoneName;                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRelativePosition;                                        // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRelativeRotation;                                        // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	struct FRootMotionSourceGroup                      AuthoritativeRootMotion;                                  // 0x0048(0x00F8) (NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                       Acceleration;                                             // 0x0140(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                       LinearVelocity;                                           // 0x014C(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.SimulatedRootMotionReplicatedMove
// 0x0160
struct FSimulatedRootMotionReplicatedMove
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FRepRootMotionMontage                       RootMotion;                                               // 0x0008(0x0158) (ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.SplineCurves
// 0x0068
struct FSplineCurves
{
	struct FInterpCurveVector                          Position;                                                 // 0x0000(0x0018) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterpCurveQuat                            Rotation;                                                 // 0x0018(0x0018) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterpCurveVector                          Scale;                                                    // 0x0030(0x0018) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterpCurveFloat                           ReparamTable;                                             // 0x0048(0x0018) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USplineMetadata*                             MetaData;                                                 // 0x0060(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.SplinePoint
// 0x0044
struct FSplinePoint
{
	float                                              InputKey;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Position;                                                 // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ArriveTangent;                                            // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LeaveTangent;                                             // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                 // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Scale;                                                    // 0x0034(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ESplinePointType>                      Type;                                                     // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.MovementProperties
// 0x0001
struct FMovementProperties
{
	unsigned char                                      bCanCrouch : 1;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCanJump : 1;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCanWalk : 1;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCanSwim : 1;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCanFly : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.NavAgentProperties
// 0x002F (0x0030 - 0x0001)
struct FNavAgentProperties : public FMovementProperties
{
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              AgentRadius;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AgentHeight;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AgentStepHeight;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NavWalkingSearchHeightScale;                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FSoftClassPath                              PreferredNavData;                                         // 0x0018(0x0018) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.SoundConcurrencySettings
// 0x0020
struct FSoundConcurrencySettings
{
	int                                                MaxCount;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLimitToOwner : 1;                                        // 0x0004(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	TEnumAsByte<EMaxConcurrentResolutionRule>          ResolutionRule;                                           // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              VolumeScale;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              VolumeScaleAttackTime;                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bVolumeScaleCanRelease : 1;                               // 0x0014(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              VolumeScaleReleaseTime;                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VoiceStealReleaseTime;                                    // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.KeyHandleMap
// 0x0060
struct FKeyHandleMap
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Engine.IndexedCurve
// 0x0068
struct FIndexedCurve
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FKeyHandleMap                               KeyHandlesToIndices;                                      // 0x0008(0x0060) (Transient, Protected, NativeAccessSpecifierProtected)
};

// ScriptStruct Engine.RealCurve
// 0x0008 (0x0070 - 0x0068)
struct FRealCurve : public FIndexedCurve
{
	TEnumAsByte<ERichCurveExtrapolation>               PreInfinityExtrap;                                        // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ERichCurveExtrapolation>               PostInfinityExtrap;                                       // 0x0069(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x006A(0x0002) MISSED OFFSET
	float                                              DefaultValue;                                             // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.RichCurveKey
// 0x001C
struct FRichCurveKey
{
	TEnumAsByte<ERichCurveInterpMode>                  InterpMode;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ERichCurveTangentMode>                 TangentMode;                                              // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ERichCurveTangentWeightMode>           TangentWeightMode;                                        // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	float                                              Time;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ArriveTangent;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ArriveTangentWeight;                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LeaveTangent;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LeaveTangentWeight;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.RichCurve
// 0x0010 (0x0080 - 0x0070)
struct FRichCurve : public FRealCurve
{
	TArray<struct FRichCurveKey>                       Keys;                                                     // 0x0070(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.RuntimeFloatCurve
// 0x0088
struct FRuntimeFloatCurve
{
	struct FRichCurve                                  EditorCurveData;                                          // 0x0000(0x0080) (NativeAccessSpecifierPublic)
	class UCurveFloat*                                 ExternalCurve;                                            // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.SoundSubmixSendInfo
// 0x00B0
struct FSoundSubmixSendInfo
{
	ESendLevelControlMethod                            SendLevelControlMethod;                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class USoundSubmix*                                SoundSubmix;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SendLevel;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinSendLevel;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSendLevel;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinSendDistance;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSendDistance;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          CustomSendLevelCurve;                                     // 0x0028(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.SoundSourceBusSendInfo
// 0x00B0
struct FSoundSourceBusSendInfo
{
	ESourceBusSendLevelControlMethod                   SourceBusSendLevelControlMethod;                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class USoundSourceBus*                             SoundSourceBus;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SendLevel;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinSendLevel;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSendLevel;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinSendDistance;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSendDistance;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          CustomSendLevelCurve;                                     // 0x0028(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.BaseAttenuationSettings
// 0x00B0
struct FBaseAttenuationSettings
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	EAttenuationDistanceModel                          DistanceAlgorithm;                                        // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EAttenuationShape>                     AttenuationShape;                                         // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              dBAttenuationAtMax;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AttenuationShapeExtents;                                  // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ConeOffset;                                               // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FalloffDistance;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          CustomAttenuationCurve;                                   // 0x0028(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.SoundAttenuationPluginSettings
// 0x0030
struct FSoundAttenuationPluginSettings
{
	TArray<class USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray;                        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UOcclusionPluginSourceSettingsBase*>  OcclusionPluginSettingsArray;                             // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UReverbPluginSourceSettingsBase*>     ReverbPluginSettingsArray;                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.SoundAttenuationSettings
// 0x0238 (0x02E8 - 0x00B0)
struct FSoundAttenuationSettings : public FBaseAttenuationSettings
{
	unsigned char                                      bAttenuate : 1;                                           // 0x00B0(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSpatialize : 1;                                          // 0x00B0(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAttenuateWithLPF : 1;                                    // 0x00B0(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableListenerFocus : 1;                                 // 0x00B0(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableFocusInterpolation : 1;                            // 0x00B0(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableOcclusion : 1;                                     // 0x00B0(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseComplexCollisionForOcclusion : 1;                     // 0x00B0(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableReverbSend : 1;                                    // 0x00B0(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bApplyNormalizationToStereoSounds : 1;                    // 0x00B1(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableLogFrequencyScaling : 1;                           // 0x00B1(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ESoundSpatializationAlgorithm>         SpatializationAlgorithm;                                  // 0x00B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAirAbsorptionMethod                               AbsorptionMethod;                                         // 0x00B3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionChannel>                     OcclusionTraceChannel;                                    // 0x00B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EReverbSendMethod                                  ReverbSendMethod;                                         // 0x00B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00B6(0x0002) MISSED OFFSET
	float                                              OmniRadius;                                               // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StereoSpread;                                             // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPFRadiusMin;                                             // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPFRadiusMax;                                             // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                          CustomLowpassAirAbsorptionCurve;                          // 0x00C8(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                          CustomHighpassAirAbsorptionCurve;                         // 0x0150(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              LPFFrequencyAtMin;                                        // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPFFrequencyAtMax;                                        // 0x01DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HPFFrequencyAtMin;                                        // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HPFFrequencyAtMax;                                        // 0x01E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FocusAzimuth;                                             // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NonFocusAzimuth;                                          // 0x01EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FocusDistanceScale;                                       // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NonFocusDistanceScale;                                    // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FocusPriorityScale;                                       // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NonFocusPriorityScale;                                    // 0x01FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FocusVolumeAttenuation;                                   // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NonFocusVolumeAttenuation;                                // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FocusAttackInterpSpeed;                                   // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FocusReleaseInterpSpeed;                                  // 0x020C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OcclusionLowPassFilterFrequency;                          // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OcclusionVolumeAttenuation;                               // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OcclusionInterpolationTime;                               // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReverbWetLevelMin;                                        // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReverbWetLevelMax;                                        // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReverbDistanceMin;                                        // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReverbDistanceMax;                                        // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ManualReverbSendLevel;                                    // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                          CustomReverbSendCurve;                                    // 0x0230(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSoundAttenuationPluginSettings             PluginSettings;                                           // 0x02B8(0x0030) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.EngineShowFlagsSetting
// 0x0018
struct FEngineShowFlagsSetting
{
	struct FString                                     ShowFlagName;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Enabled;                                                  // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.WeightedBlendable
// 0x0010
struct FWeightedBlendable
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UObject*                                     Object;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.WeightedBlendables
// 0x0010
struct FWeightedBlendables
{
	TArray<struct FWeightedBlendable>                  Array;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.PostProcessSettings
// 0x0530
struct FPostProcessSettings
{
	unsigned char                                      bOverride_WhiteTemp : 1;                                  // 0x0000(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_WhiteTint : 1;                                  // 0x0000(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ColorSaturation : 1;                            // 0x0000(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ColorContrast : 1;                              // 0x0000(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ColorGamma : 1;                                 // 0x0000(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ColorGain : 1;                                  // 0x0000(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ColorOffset : 1;                                // 0x0000(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ColorSaturationShadows : 1;                     // 0x0000(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ColorContrastShadows : 1;                       // 0x0001(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ColorGammaShadows : 1;                          // 0x0001(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ColorGainShadows : 1;                           // 0x0001(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ColorOffsetShadows : 1;                         // 0x0001(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ColorSaturationMidtones : 1;                    // 0x0001(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ColorContrastMidtones : 1;                      // 0x0001(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ColorGammaMidtones : 1;                         // 0x0001(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ColorGainMidtones : 1;                          // 0x0001(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ColorOffsetMidtones : 1;                        // 0x0002(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ColorSaturationHighlights : 1;                  // 0x0002(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ColorContrastHighlights : 1;                    // 0x0002(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ColorGammaHighlights : 1;                       // 0x0002(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ColorGainHighlights : 1;                        // 0x0002(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ColorOffsetHighlights : 1;                      // 0x0002(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ColorCorrectionShadowsMax : 1;                  // 0x0002(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ColorCorrectionHighlightsMin : 1;               // 0x0002(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_BlueCorrection : 1;                             // 0x0003(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ExpandGamut : 1;                                // 0x0003(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmWhitePoint : 1;                             // 0x0003(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmSaturation : 1;                             // 0x0003(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmChannelMixerRed : 1;                        // 0x0003(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmChannelMixerGreen : 1;                      // 0x0003(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmChannelMixerBlue : 1;                       // 0x0003(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmContrast : 1;                               // 0x0003(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmDynamicRange : 1;                           // 0x0004(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmHealAmount : 1;                             // 0x0004(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmToeAmount : 1;                              // 0x0004(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmShadowTint : 1;                             // 0x0004(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmShadowTintBlend : 1;                        // 0x0004(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmShadowTintAmount : 1;                       // 0x0004(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmSlope : 1;                                  // 0x0004(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmToe : 1;                                    // 0x0004(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmShoulder : 1;                               // 0x0005(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmBlackClip : 1;                              // 0x0005(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_FilmWhiteClip : 1;                              // 0x0005(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_SceneColorTint : 1;                             // 0x0005(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_SceneFringeIntensity : 1;                       // 0x0005(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ChromaticAberrationStartOffset : 1;             // 0x0005(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AmbientCubemapTint : 1;                         // 0x0005(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AmbientCubemapIntensity : 1;                    // 0x0005(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_BloomMethod : 1;                                // 0x0006(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_BloomIntensity : 1;                             // 0x0006(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_BloomThreshold : 1;                             // 0x0006(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_Bloom1Tint : 1;                                 // 0x0006(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_Bloom1Size : 1;                                 // 0x0006(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_Bloom2Size : 1;                                 // 0x0006(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_Bloom2Tint : 1;                                 // 0x0006(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_Bloom3Tint : 1;                                 // 0x0006(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_Bloom3Size : 1;                                 // 0x0007(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_Bloom4Tint : 1;                                 // 0x0007(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_Bloom4Size : 1;                                 // 0x0007(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_Bloom5Tint : 1;                                 // 0x0007(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_Bloom5Size : 1;                                 // 0x0007(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_Bloom6Tint : 1;                                 // 0x0007(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_Bloom6Size : 1;                                 // 0x0007(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_BloomSizeScale : 1;                             // 0x0007(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_BloomConvolutionTexture : 1;                    // 0x0008(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_BloomConvolutionSize : 1;                       // 0x0008(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_BloomConvolutionCenterUV : 1;                   // 0x0008(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_BloomConvolutionPreFilter : 1;                  // 0x0008(0x0001) (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_BloomConvolutionPreFilterMin : 1;               // 0x0008(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_BloomConvolutionPreFilterMax : 1;               // 0x0008(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_BloomConvolutionPreFilterMult : 1;              // 0x0008(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_BloomConvolutionBufferScale : 1;                // 0x0008(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_BloomDirtMaskIntensity : 1;                     // 0x0009(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_BloomDirtMaskTint : 1;                          // 0x0009(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_BloomDirtMask : 1;                              // 0x0009(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_CameraShutterSpeed : 1;                         // 0x0009(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_CameraISO : 1;                                  // 0x0009(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AutoExposureMethod : 1;                         // 0x0009(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AutoExposureLowPercent : 1;                     // 0x0009(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AutoExposureHighPercent : 1;                    // 0x0009(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AutoExposureMinBrightness : 1;                  // 0x000A(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AutoExposureMaxBrightness : 1;                  // 0x000A(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AutoExposureCalibrationConstant : 1;            // 0x000A(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AutoExposureSpeedUp : 1;                        // 0x000A(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AutoExposureSpeedDown : 1;                      // 0x000A(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AutoExposureBias : 1;                           // 0x000A(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AutoExposureBiasCurve : 1;                      // 0x000A(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_HistogramLogMin : 1;                            // 0x000A(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_HistogramLogMax : 1;                            // 0x000B(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LensFlareIntensity : 1;                         // 0x000B(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LensFlareTint : 1;                              // 0x000B(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LensFlareTints : 1;                             // 0x000B(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LensFlareBokehSize : 1;                         // 0x000B(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LensFlareBokehShape : 1;                        // 0x000B(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LensFlareThreshold : 1;                         // 0x000B(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_VignetteIntensity : 1;                          // 0x000B(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_GrainIntensity : 1;                             // 0x000C(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_GrainJitter : 1;                                // 0x000C(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AmbientOcclusionIntensity : 1;                  // 0x000C(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AmbientOcclusionStaticFraction : 1;             // 0x000C(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AmbientOcclusionRadius : 1;                     // 0x000C(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AmbientOcclusionFadeDistance : 1;               // 0x000C(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AmbientOcclusionFadeRadius : 1;                 // 0x000C(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AmbientOcclusionDistance : 1;                   // 0x000C(0x0001) (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AmbientOcclusionRadiusInWS : 1;                 // 0x000D(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AmbientOcclusionPower : 1;                      // 0x000D(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AmbientOcclusionBias : 1;                       // 0x000D(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AmbientOcclusionQuality : 1;                    // 0x000D(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AmbientOcclusionMipBlend : 1;                   // 0x000D(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AmbientOcclusionMipScale : 1;                   // 0x000D(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_AmbientOcclusionMipThreshold : 1;               // 0x000D(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	unsigned char                                      bOverride_RayTracingAOSamplesPerPixel : 1;                // 0x0010(0x0001) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	unsigned char                                      bOverride_LPVIntensity : 1;                               // 0x0014(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LPVDirectionalOcclusionIntensity : 1;           // 0x0014(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LPVDirectionalOcclusionRadius : 1;              // 0x0014(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LPVDiffuseOcclusionExponent : 1;                // 0x0014(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LPVSpecularOcclusionExponent : 1;               // 0x0014(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LPVDiffuseOcclusionIntensity : 1;               // 0x0014(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LPVSpecularOcclusionIntensity : 1;              // 0x0014(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LPVSize : 1;                                    // 0x0014(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LPVSecondaryOcclusionIntensity : 1;             // 0x0015(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LPVSecondaryBounceIntensity : 1;                // 0x0015(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LPVGeometryVolumeBias : 1;                      // 0x0015(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LPVVplInjectionBias : 1;                        // 0x0015(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LPVEmissiveInjectionIntensity : 1;              // 0x0015(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LPVFadeRange : 1;                               // 0x0015(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_LPVDirectionalOcclusionFadeRange : 1;           // 0x0015(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_IndirectLightingColor : 1;                      // 0x0015(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_IndirectLightingIntensity : 1;                  // 0x0016(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ColorGradingIntensity : 1;                      // 0x0016(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ColorGradingLUT : 1;                            // 0x0016(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldFocalDistance : 1;                  // 0x0016(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldFstop : 1;                          // 0x0016(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldMinFstop : 1;                       // 0x0016(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldBladeCount : 1;                     // 0x0016(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldSensorWidth : 1;                    // 0x0016(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldDepthBlurRadius : 1;                // 0x0017(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldDepthBlurAmount : 1;                // 0x0017(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldFocalRegion : 1;                    // 0x0017(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldNearTransitionRegion : 1;           // 0x0017(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldFarTransitionRegion : 1;            // 0x0017(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldScale : 1;                          // 0x0017(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldMaxBokehSize : 1;                   // 0x0017(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldNearBlurSize : 1;                   // 0x0017(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldFarBlurSize : 1;                    // 0x0018(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldMethod : 1;                         // 0x0018(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MobileHQGaussian : 1;                           // 0x0018(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldBokehShape : 1;                     // 0x0018(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldOcclusion : 1;                      // 0x0018(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldColorThreshold : 1;                 // 0x0018(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldSizeThreshold : 1;                  // 0x0018(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldSkyFocusDistance : 1;               // 0x0018(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DepthOfFieldVignetteSize : 1;                   // 0x0019(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MotionBlurAmount : 1;                           // 0x0019(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MotionBlurMax : 1;                              // 0x0019(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MotionBlurTargetFPS : 1;                        // 0x0019(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MotionBlurPerObjectSize : 1;                    // 0x0019(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ScreenPercentage : 1;                           // 0x0019(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ScreenSpaceReflectionIntensity : 1;             // 0x0019(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ScreenSpaceReflectionQuality : 1;               // 0x0019(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ScreenSpaceReflectionMaxRoughness : 1;          // 0x001A(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ScreenSpaceReflectionRoughnessScale : 1;        // 0x001A(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
	unsigned char                                      bOverride_ReflectionsType : 1;                            // 0x001C(0x0001) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_RayTracingReflectionsMaxRoughness : 1;          // 0x001C(0x0001) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_RayTracingReflectionsMaxBounces : 1;            // 0x001C(0x0001) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_RayTracingReflectionsSamplesPerPixel : 1;       // 0x001C(0x0001) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_RayTracingReflectionsShadows : 1;               // 0x001C(0x0001) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_TranslucencyType : 1;                           // 0x001C(0x0001) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_RayTracingTranslucencyMaxRoughness : 1;         // 0x001C(0x0001) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_RayTracingTranslucencyRefractionRays : 1;       // 0x001C(0x0001) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_RayTracingTranslucencySamplesPerPixel : 1;      // 0x001D(0x0001) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_RayTracingTranslucencyShadows : 1;              // 0x001D(0x0001) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_RayTracingTranslucencyRefraction : 1;           // 0x001D(0x0001) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_RayTracingGI : 1;                               // 0x001D(0x0001) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_RayTracingGIMaxBounces : 1;                     // 0x001D(0x0001) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_RayTracingGISamplesPerPixel : 1;                // 0x001D(0x0001) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_PathTracingMaxBounces : 1;                      // 0x001D(0x0001) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_PathTracingSamplesPerPixel : 1;                 // 0x001D(0x0001) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
	unsigned char                                      bMobileHQGaussian : 1;                                    // 0x0020(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EBloomMethod>                          BloomMethod;                                              // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EAutoExposureMethod>                   AutoExposureMethod;                                       // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EDepthOfFieldMethod>                   DepthOfFieldMethod;                                       // 0x0023(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WhiteTemp;                                                // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WhiteTint;                                                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FVector4                                    ColorSaturation;                                          // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    ColorContrast;                                            // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    ColorGamma;                                               // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    ColorGain;                                                // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    ColorOffset;                                              // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    ColorSaturationShadows;                                   // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    ColorContrastShadows;                                     // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    ColorGammaShadows;                                        // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    ColorGainShadows;                                         // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    ColorOffsetShadows;                                       // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    ColorSaturationMidtones;                                  // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    ColorContrastMidtones;                                    // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    ColorGammaMidtones;                                       // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    ColorGainMidtones;                                        // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    ColorOffsetMidtones;                                      // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    ColorSaturationHighlights;                                // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    ColorContrastHighlights;                                  // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    ColorGammaHighlights;                                     // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    ColorGainHighlights;                                      // 0x0150(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    ColorOffsetHighlights;                                    // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ColorCorrectionHighlightsMin;                             // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ColorCorrectionShadowsMax;                                // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlueCorrection;                                           // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExpandGamut;                                              // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FilmSlope;                                                // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FilmToe;                                                  // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FilmShoulder;                                             // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FilmBlackClip;                                            // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FilmWhiteClip;                                            // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                FilmWhitePoint;                                           // 0x0194(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                FilmShadowTint;                                           // 0x01A4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FilmShadowTintBlend;                                      // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FilmShadowTintAmount;                                     // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FilmSaturation;                                           // 0x01BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                FilmChannelMixerRed;                                      // 0x01C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                FilmChannelMixerGreen;                                    // 0x01D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                FilmChannelMixerBlue;                                     // 0x01E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FilmContrast;                                             // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FilmToeAmount;                                            // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FilmHealAmount;                                           // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FilmDynamicRange;                                         // 0x01FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                SceneColorTint;                                           // 0x0200(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SceneFringeIntensity;                                     // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChromaticAberrationStartOffset;                           // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BloomIntensity;                                           // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BloomThreshold;                                           // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BloomSizeScale;                                           // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Bloom1Size;                                               // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Bloom2Size;                                               // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Bloom3Size;                                               // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Bloom4Size;                                               // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Bloom5Size;                                               // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Bloom6Size;                                               // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Bloom1Tint;                                               // 0x023C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Bloom2Tint;                                               // 0x024C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Bloom3Tint;                                               // 0x025C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Bloom4Tint;                                               // 0x026C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Bloom5Tint;                                               // 0x027C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Bloom6Tint;                                               // 0x028C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BloomConvolutionSize;                                     // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  BloomConvolutionTexture;                                  // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   BloomConvolutionCenterUV;                                 // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BloomConvolutionPreFilterMin;                             // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BloomConvolutionPreFilterMax;                             // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BloomConvolutionPreFilterMult;                            // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BloomConvolutionBufferScale;                              // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                                    BloomDirtMask;                                            // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BloomDirtMaskIntensity;                                   // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                BloomDirtMaskTint;                                        // 0x02CC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                AmbientCubemapTint;                                       // 0x02DC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AmbientCubemapIntensity;                                  // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureCube*                                AmbientCubemap;                                           // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CameraShutterSpeed;                                       // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CameraISO;                                                // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldFstop;                                        // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldMinFstop;                                     // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DepthOfFieldBladeCount;                                   // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AutoExposureBias;                                         // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 AutoExposureBiasCurve;                                    // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AutoExposureLowPercent;                                   // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AutoExposureHighPercent;                                  // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AutoExposureMinBrightness;                                // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AutoExposureMaxBrightness;                                // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AutoExposureSpeedUp;                                      // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AutoExposureSpeedDown;                                    // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HistogramLogMin;                                          // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HistogramLogMax;                                          // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AutoExposureCalibrationConstant;                          // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LensFlareIntensity;                                       // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                LensFlareTint;                                            // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LensFlareBokehSize;                                       // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LensFlareThreshold;                                       // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                                    LensFlareBokehShape;                                      // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                LensFlareTints[0x8];                                      // 0x0360(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VignetteIntensity;                                        // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GrainJitter;                                              // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GrainIntensity;                                           // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AmbientOcclusionIntensity;                                // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AmbientOcclusionStaticFraction;                           // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AmbientOcclusionRadius;                                   // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      AmbientOcclusionRadiusInWS : 1;                           // 0x03F8(0x0001) (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x3];                                       // 0x03F9(0x0003) MISSED OFFSET
	float                                              AmbientOcclusionFadeDistance;                             // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AmbientOcclusionFadeRadius;                               // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AmbientOcclusionDistance;                                 // 0x0404(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AmbientOcclusionPower;                                    // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AmbientOcclusionBias;                                     // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AmbientOcclusionQuality;                                  // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AmbientOcclusionMipBlend;                                 // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AmbientOcclusionMipScale;                                 // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AmbientOcclusionMipThreshold;                             // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RayTracingAOSamplesPerPixel;                              // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                IndirectLightingColor;                                    // 0x0424(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IndirectLightingIntensity;                                // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      RayTracingGI : 1;                                         // 0x0438(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0439(0x0003) MISSED OFFSET
	int                                                RayTracingGIMaxBounces;                                   // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RayTracingGISamplesPerPixel;                              // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ColorGradingIntensity;                                    // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                                    ColorGradingLUT;                                          // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldSensorWidth;                                  // 0x0450(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldFocalDistance;                                // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldDepthBlurAmount;                              // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldDepthBlurRadius;                              // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldFocalRegion;                                  // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldNearTransitionRegion;                         // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldFarTransitionRegion;                          // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldScale;                                        // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldMaxBokehSize;                                 // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldNearBlurSize;                                 // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldFarBlurSize;                                  // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldOcclusion;                                    // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                                    DepthOfFieldBokehShape;                                   // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldColorThreshold;                               // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldSizeThreshold;                                // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldSkyFocusDistance;                             // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOfFieldVignetteSize;                                 // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MotionBlurAmount;                                         // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MotionBlurMax;                                            // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MotionBlurTargetFPS;                                      // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MotionBlurPerObjectSize;                                  // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPVIntensity;                                             // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPVVplInjectionBias;                                      // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPVSize;                                                  // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPVSecondaryOcclusionIntensity;                           // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPVSecondaryBounceIntensity;                              // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPVGeometryVolumeBias;                                    // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPVEmissiveInjectionIntensity;                            // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPVDirectionalOcclusionIntensity;                         // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPVDirectionalOcclusionRadius;                            // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPVDiffuseOcclusionExponent;                              // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPVSpecularOcclusionExponent;                             // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPVDiffuseOcclusionIntensity;                             // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPVSpecularOcclusionIntensity;                            // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EReflectionsType                                   ReflectionsType;                                          // 0x04DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData07[0x3];                                       // 0x04DD(0x0003) MISSED OFFSET
	float                                              ScreenSpaceReflectionIntensity;                           // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScreenSpaceReflectionQuality;                             // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScreenSpaceReflectionMaxRoughness;                        // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RayTracingReflectionsMaxRoughness;                        // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RayTracingReflectionsMaxBounces;                          // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RayTracingReflectionsSamplesPerPixel;                     // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EReflectedAndRefractedRayTracedShadows             RayTracingReflectionsShadows;                             // 0x04F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETranslucencyType                                  TranslucencyType;                                         // 0x04F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData08[0x2];                                       // 0x04FA(0x0002) MISSED OFFSET
	float                                              RayTracingTranslucencyMaxRoughness;                       // 0x04FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RayTracingTranslucencyRefractionRays;                     // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RayTracingTranslucencySamplesPerPixel;                    // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EReflectedAndRefractedRayTracedShadows             RayTracingTranslucencyShadows;                            // 0x0508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      RayTracingTranslucencyRefraction : 1;                     // 0x0509(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData09[0x2];                                       // 0x050A(0x0002) MISSED OFFSET
	int                                                PathTracingMaxBounces;                                    // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PathTracingSamplesPerPixel;                               // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPVFadeRange;                                             // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LPVDirectionalOcclusionFadeRange;                         // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScreenPercentage;                                         // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWeightedBlendables                         WeightedBlendables;                                       // 0x0520(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.GeomSelection
// 0x000C
struct FGeomSelection
{
	int                                                Type;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Index;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SelectionIndex;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.LevelStreamingWrapper
// 0x0008
struct FLevelStreamingWrapper
{
	class ULevelStreaming*                             StreamingLevel;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct Engine.StreamingLevelsToConsider
// 0x0028
struct FStreamingLevelsToConsider
{
	TArray<struct FLevelStreamingWrapper>              StreamingLevels;                                          // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.LevelCollection
// 0x0078
struct FLevelCollection
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AGameStateBase*                              GameState;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNetDriver*                                  NetDriver;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDemoNetDriver*                              DemoNetDriver;                                            // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULevel*                                      PersistentLevel;                                          // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0028(0x0050) UNKNOWN PROPERTY: SetProperty Engine.LevelCollection.Levels
};

// ScriptStruct Engine.PSCPoolElem
// 0x0010
struct FPSCPoolElem
{
	class UParticleSystemComponent*                    PSC;                                                      // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.PSCPool
// 0x0038
struct FPSCPool
{
	TArray<struct FPSCPoolElem>                        FreeElements;                                             // 0x0000(0x0010) (ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UParticleSystemComponent*>            InUseComponents_Auto;                                     // 0x0010(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UParticleSystemComponent*>            InUseComponents_Manual;                                   // 0x0020(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.WorldPSCPool
// 0x0058
struct FWorldPSCPool
{
	TMap<class UParticleSystem*, struct FPSCPool>      WorldParticleSystemPools;                                 // 0x0000(0x0050) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.NavAgentSelector
// 0x0004
struct FNavAgentSelector
{
	unsigned char                                      bSupportsAgent0 : 1;                                      // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent1 : 1;                                      // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent2 : 1;                                      // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent3 : 1;                                      // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent4 : 1;                                      // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent5 : 1;                                      // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent6 : 1;                                      // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent7 : 1;                                      // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent8 : 1;                                      // 0x0001(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent9 : 1;                                      // 0x0001(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent10 : 1;                                     // 0x0001(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent11 : 1;                                     // 0x0001(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent12 : 1;                                     // 0x0001(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent13 : 1;                                     // 0x0001(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent14 : 1;                                     // 0x0001(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent15 : 1;                                     // 0x0001(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.StaticMeshComponentLODInfo
// 0x00B0
struct FStaticMeshComponentLODInfo
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0000(0x00B0) MISSED OFFSET
};

// ScriptStruct Engine.StreamingTextureBuildInfo
// 0x000C
struct FStreamingTextureBuildInfo
{
	uint32_t                                           PackedRelativeBox;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TextureLevelIndex;                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TexelFactor;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.LightmassPrimitiveSettings
// 0x0018
struct FLightmassPrimitiveSettings
{
	unsigned char                                      bUseTwoSidedLighting : 1;                                 // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShadowIndirectOnly : 1;                                  // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseEmissiveForStaticLighting : 1;                        // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseVertexNormalForHemisphereGather : 1;                  // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              EmissiveLightFalloffExponent;                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EmissiveLightExplicitInfluenceRadius;                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EmissiveBoost;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DiffuseBoost;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FullyOccludedSamplesFraction;                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.DebugDisplayProperty
// 0x0020
struct FDebugDisplayProperty
{
	class UObject*                                     Obj;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      WithinClass;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.MinimalViewInfo
// 0x0580
struct FMinimalViewInfo
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              FOV;                                                      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DesiredFOV;                                               // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OrthoWidth;                                               // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OrthoNearClipPlane;                                       // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OrthoFarClipPlane;                                        // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AspectRatio;                                              // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bConstrainAspectRatio : 1;                                // 0x0030(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseFieldOfViewForLOD : 1;                                // 0x0030(0x0001) (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	TEnumAsByte<ECameraProjectionMode>                 ProjectionMode;                                           // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              PostProcessBlendWeight;                                   // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FPostProcessSettings                        PostProcessSettings;                                      // 0x0040(0x0530) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector2D                                   OffCenterProjectionOffset;                                // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0578(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.CameraCacheEntry
// 0x0590
struct FCameraCacheEntry
{
	float                                              Timestamp;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FMinimalViewInfo                            POV;                                                      // 0x0010(0x0580) (NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.TViewTarget
// 0x05A0
struct FTViewTarget
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FMinimalViewInfo                            POV;                                                      // 0x0010(0x0580) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class APlayerState*                                PlayerState;                                              // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0598(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.FindFloorResult
// 0x0094
struct FFindFloorResult
{
	unsigned char                                      bBlockingHit : 1;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bWalkableFloor : 1;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLineTrace : 1;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              FloorDist;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LineDist;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  HitResult;                                                // 0x000C(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.NavAvoidanceMask
// 0x0004
struct FNavAvoidanceMask
{
	unsigned char                                      bGroup0 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup1 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup2 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup3 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup4 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup5 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup6 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup7 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup8 : 1;                                              // 0x0001(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup9 : 1;                                              // 0x0001(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup10 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup11 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup12 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup13 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup14 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup15 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup16 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup17 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup18 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup19 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup20 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup21 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup22 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup23 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup24 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup25 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup26 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup27 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup28 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup29 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup30 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGroup31 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.CharacterMovementComponentPostPhysicsTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FCharacterMovementComponentPostPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.NavigationLinkBase
// 0x0038
struct FNavigationLinkBase
{
	float                                              LeftProjectHeight;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxFallDownLength;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ENavLinkDirection>                     Direction;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	float                                              SnapRadius;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SnapHeight;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNavAgentSelector                           SupportedAgents;                                          // 0x0018(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent0 : 1;                                      // 0x001C(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent1 : 1;                                      // 0x001C(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent2 : 1;                                      // 0x001C(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent3 : 1;                                      // 0x001C(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent4 : 1;                                      // 0x001C(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent5 : 1;                                      // 0x001C(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent6 : 1;                                      // 0x001C(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent7 : 1;                                      // 0x001C(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent8 : 1;                                      // 0x001D(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent9 : 1;                                      // 0x001D(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent10 : 1;                                     // 0x001D(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent11 : 1;                                     // 0x001D(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent12 : 1;                                     // 0x001D(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent13 : 1;                                     // 0x001D(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent14 : 1;                                     // 0x001D(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent15 : 1;                                     // 0x001D(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
	unsigned char                                      bUseSnapHeight : 1;                                       // 0x0020(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSnapToCheapestArea : 1;                                  // 0x0020(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCustomFlag0 : 1;                                         // 0x0020(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCustomFlag1 : 1;                                         // 0x0020(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCustomFlag2 : 1;                                         // 0x0020(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCustomFlag3 : 1;                                         // 0x0020(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCustomFlag4 : 1;                                         // 0x0020(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCustomFlag5 : 1;                                         // 0x0020(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCustomFlag6 : 1;                                         // 0x0021(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCustomFlag7 : 1;                                         // 0x0021(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
	class UClass*                                      AreaClass;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.NavigationLink
// 0x0018 (0x0050 - 0x0038)
struct FNavigationLink : public FNavigationLinkBase
{
	struct FVector                                     Left;                                                     // 0x0038(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Right;                                                    // 0x0044(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.NavigationSegmentLink
// 0x0030 (0x0068 - 0x0038)
struct FNavigationSegmentLink : public FNavigationLinkBase
{
	struct FVector                                     LeftStart;                                                // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LeftEnd;                                                  // 0x0044(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RightStart;                                               // 0x0050(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RightEnd;                                                 // 0x005C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.KeyBind
// 0x0030
struct FKeyBind
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Command;                                                  // 0x0018(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Control : 1;                                              // 0x0028(0x0001) (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Shift : 1;                                                // 0x0028(0x0001) (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Alt : 1;                                                  // 0x0028(0x0001) (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Cmd : 1;                                                  // 0x0028(0x0001) (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIgnoreCtrl : 1;                                          // 0x0028(0x0001) (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIgnoreShift : 1;                                         // 0x0028(0x0001) (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIgnoreAlt : 1;                                           // 0x0028(0x0001) (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIgnoreCmd : 1;                                           // 0x0028(0x0001) (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDisabled : 1;                                            // 0x0029(0x0001) (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
};

// ScriptStruct Engine.AudioComponentParam
// 0x0020
struct FAudioComponentParam
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FloatParam;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               BoolParam;                                                // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                IntParam;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class USoundWave*                                  SoundWaveParam;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.SoundWaveSpectralData
// 0x000C
struct FSoundWaveSpectralData
{
	float                                              FrequencyHz;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Magnitude;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NormalizedMagnitude;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.SoundWaveSpectralDataPerSound
// 0x0020
struct FSoundWaveSpectralDataPerSound
{
	TArray<struct FSoundWaveSpectralData>              SpectralData;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              PlaybackTime;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class USoundWave*                                  SoundWave;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.SoundWaveEnvelopeDataPerSound
// 0x0010
struct FSoundWaveEnvelopeDataPerSound
{
	float                                              Envelope;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlaybackTime;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundWave*                                  SoundWave;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ReverbSettings
// 0x0020
struct FReverbSettings
{
	bool                                               bApplyReverb;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UReverbEffect*                               ReverbEffect;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSubmixPreset*                    ReverbPluginEffect;                                       // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Volume;                                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeTime;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.InteriorSettings
// 0x0024
struct FInteriorSettings
{
	bool                                               bIsWorldSettings;                                         // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ExteriorVolume;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExteriorTime;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExteriorLPF;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExteriorLPFTime;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InteriorVolume;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InteriorTime;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InteriorLPF;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InteriorLPFTime;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.BroadphaseSettings
// 0x0040
struct FBroadphaseSettings
{
	bool                                               bUseMBPOnClient;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseMBPOnServer;                                          // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseMBPOuterBounds;                                       // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FBox                                        MBPBounds;                                                // 0x0004(0x001C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FBox                                        MBPOuterBounds;                                           // 0x0020(0x001C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint32_t                                           MBPNumSubdivs;                                            // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.NetViewer
// 0x0030
struct FNetViewer
{
	class UNetConnection*                              Connection;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      InViewer;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ViewTarget;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ViewLocation;                                             // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ViewDir;                                                  // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.InstancedStaticMeshInstanceData
// 0x0040
struct FInstancedStaticMeshInstanceData
{
	struct FMatrix                                     Transform;                                                // 0x0000(0x0040) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.InstancedStaticMeshMappingInfo
// 0x0008
struct FInstancedStaticMeshMappingInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.LightmassMaterialInterfaceSettings
// 0x0014
struct FLightmassMaterialInterfaceSettings
{
	unsigned char                                      bCastShadowAsMasked : 1;                                  // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              EmissiveBoost;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DiffuseBoost;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExportResolutionScale;                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideCastShadowAsMasked : 1;                          // 0x0010(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideEmissiveBoost : 1;                               // 0x0010(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideDiffuseBoost : 1;                                // 0x0010(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideExportResolutionScale : 1;                       // 0x0010(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.MaterialTextureInfo
// 0x0010
struct FMaterialTextureInfo
{
	float                                              SamplingScale;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UVChannelIndex;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TextureName;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.MaterialParameterInfo
// 0x0010
struct FMaterialParameterInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EMaterialParameterAssociation>         Association;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                Index;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ScalarParameterValue
// 0x0024
struct FScalarParameterValue
{
	struct FMaterialParameterInfo                      ParameterInfo;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ParameterValue;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ExpressionGUID;                                           // 0x0014(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.VectorParameterValue
// 0x0030
struct FVectorParameterValue
{
	struct FMaterialParameterInfo                      ParameterInfo;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                ParameterValue;                                           // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ExpressionGUID;                                           // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.TextureParameterValue
// 0x0028
struct FTextureParameterValue
{
	struct FMaterialParameterInfo                      ParameterInfo;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UTexture*                                    ParameterValue;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ExpressionGUID;                                           // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.FontParameterValue
// 0x0030
struct FFontParameterValue
{
	struct FMaterialParameterInfo                      ParameterInfo;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UFont*                                       FontValue;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FontPage;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ExpressionGUID;                                           // 0x001C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
// 0x0008
struct FMaterialInstanceBasePropertyOverrides
{
	unsigned char                                      bOverride_OpacityMaskClipValue : 1;                       // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_BlendMode : 1;                                  // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_ShadingModel : 1;                               // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_DitheredLODTransition : 1;                      // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_CastDynamicShadowAsMasked : 1;                  // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_TwoSided : 1;                                   // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      TwoSided : 1;                                             // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      DitheredLODTransition : 1;                                // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCastDynamicShadowAsMasked : 1;                           // 0x0001(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EBlendMode>                            BlendMode;                                                // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EMaterialShadingModel>                 ShadingModel;                                             // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OpacityMaskClipValue;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.StaticSwitchParameter
// 0x0024
struct FStaticSwitchParameter
{
	struct FMaterialParameterInfo                      ParameterInfo;                                            // 0x0000(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	bool                                               Value;                                                    // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverride;                                                // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	struct FGuid                                       ExpressionGUID;                                           // 0x0014(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.StaticComponentMaskParameter
// 0x0028
struct FStaticComponentMaskParameter
{
	struct FMaterialParameterInfo                      ParameterInfo;                                            // 0x0000(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	bool                                               R;                                                        // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               G;                                                        // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               B;                                                        // 0x0012(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               A;                                                        // 0x0013(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverride;                                                // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FGuid                                       ExpressionGUID;                                           // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.StaticTerrainLayerWeightParameter
// 0x002C
struct FStaticTerrainLayerWeightParameter
{
	struct FMaterialParameterInfo                      ParameterInfo;                                            // 0x0000(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bOverride;                                                // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FGuid                                       ExpressionGUID;                                           // 0x0014(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeightmapIndex;                                           // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWeightBasedBlend;                                        // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.MaterialLayersFunctions
// 0x0040
struct FMaterialLayersFunctions
{
	TArray<class UMaterialFunctionInterface*>          Layers;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UMaterialFunctionInterface*>          Blends;                                                   // 0x0010(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<bool>                                       LayerStates;                                              // 0x0020(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     KeyString;                                                // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.StaticMaterialLayersParameter
// 0x0068
struct FStaticMaterialLayersParameter
{
	struct FMaterialParameterInfo                      ParameterInfo;                                            // 0x0000(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	struct FMaterialLayersFunctions                    Value;                                                    // 0x0010(0x0040) (NativeAccessSpecifierPublic)
	bool                                               bOverride;                                                // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	struct FGuid                                       ExpressionGUID;                                           // 0x0054(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.StaticParameterSet
// 0x0040
struct FStaticParameterSet
{
	TArray<struct FStaticSwitchParameter>              StaticSwitchParameters;                                   // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FStaticComponentMaskParameter>       StaticComponentMaskParameters;                            // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FStaticTerrainLayerWeightParameter>  TerrainLayerWeightParameters;                             // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FStaticMaterialLayersParameter>      MaterialLayersParameters;                                 // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.SoundWaveSpectralDataEntry
// 0x0008
struct FSoundWaveSpectralDataEntry
{
	float                                              Magnitude;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NormalizedMagnitude;                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.SoundWaveSpectralTimeData
// 0x0018
struct FSoundWaveSpectralTimeData
{
	TArray<struct FSoundWaveSpectralDataEntry>         Data;                                                     // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              TimeSec;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.SoundWaveEnvelopeTimeData
// 0x0008
struct FSoundWaveEnvelopeTimeData
{
	float                                              Amplitude;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeSec;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.SubtitleCue
// 0x0020
struct FSubtitleCue
{
	struct FText                                       Text;                                                     // 0x0000(0x0018) (Edit, NativeAccessSpecifierPublic)
	float                                              Time;                                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.InterpolationParameter
// 0x0008
struct FInterpolationParameter
{
	float                                              InterpolationTime;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EFilterInterpolationType>              InterpolationType;                                        // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.BoneReference
// 0x0010
struct FBoneReference
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.PerBoneInterpolation
// 0x0014
struct FPerBoneInterpolation
{
	struct FBoneReference                              BoneReference;                                            // 0x0000(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              InterpolationSpeedPerSec;                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.BlendSample
// 0x0018
struct FBlendSample
{
	class UAnimSequence*                               Animation;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SampleValue;                                              // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RateScale;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.EditorElement
// 0x0018
struct FEditorElement
{
	int                                                Indices[0x3];                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Weights[0x3];                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.BlendParameter
// 0x0020
struct FBlendParameter
{
	struct FString                                     DisplayName;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              min;                                                      // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              max;                                                      // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GridNum;                                                  // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimGroupInfo
// 0x0018
struct FAnimGroupInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.BakedStateExitTransition
// 0x0020
struct FBakedStateExitTransition
{
	int                                                CanTakeDelegateIndex;                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CustomResultNodeIndex;                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TransitionIndex;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDesiredTransitionReturnValue;                            // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutomaticRemainingTimeRule;                              // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	TArray<int>                                        PoseEvaluatorLinks;                                       // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.BakedAnimationState
// 0x0048
struct FBakedAnimationState
{
	struct FName                                       StateName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBakedStateExitTransition>           Transitions;                                              // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                StateRootNodeIndex;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartNotify;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndNotify;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FullyBlendedNotify;                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAConduit;                                              // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                EntryRuleNodeIndex;                                       // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        PlayerNodeIndices;                                        // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bAlwaysResetOnEntry;                                      // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.AnimationStateBase
// 0x0008
struct FAnimationStateBase
{
	struct FName                                       StateName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.AnimationTransitionBetweenStates
// 0x0038 (0x0040 - 0x0008)
struct FAnimationTransitionBetweenStates : public FAnimationStateBase
{
	int                                                PreviousState;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NextState;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CrossfadeDuration;                                        // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartNotify;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndNotify;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InterruptNotify;                                          // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAlphaBlendOption                                  BlendMode;                                                // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class UCurveFloat*                                 CustomCurve;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendProfile*                               BlendProfile;                                             // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ETransitionLogicType>                  LogicType;                                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.BakedAnimationStateMachine
// 0x0030
struct FBakedAnimationStateMachine
{
	struct FName                                       MachineName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InitialState;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FBakedAnimationState>                States;                                                   // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAnimationTransitionBetweenStates>   Transitions;                                              // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.CachedPoseIndices
// 0x0010
struct FCachedPoseIndices
{
	TArray<int>                                        OrderedSavedPoseNodeIndices;                              // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ExposedValueCopyRecord
// 0x0038
struct FExposedValueCopyRecord
{
	struct FName                                       SourcePropertyName;                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SourceSubPropertyName;                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SourceArrayIndex;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInstanceIsTarget;                                        // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPostCopyOperation                                 PostCopyOperation;                                        // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECopyType                                          CopyType;                                                 // 0x0016(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0017(0x0001) MISSED OFFSET
	class UProperty*                                   DestProperty;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DestArrayIndex;                                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Size;                                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UProperty*                                   CachedSourceProperty;                                     // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UProperty*                                   CachedSourceStructSubProperty;                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ExposedValueHandler
// 0x0030
struct FExposedValueHandler
{
	struct FName                                       BoundFunction;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FExposedValueCopyRecord>             CopyRecords;                                              // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	class UFunction*                                   Function;                                                 // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStructProperty*                             ValueHandlerNodeProperty;                                 // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.AnimBlueprintFunction
// 0x0068
struct FAnimBlueprintFunction
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Group;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutputPoseNodeIndex;                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FName>                               InputPoseNames;                                           // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        InputPoseNodeIndices;                                     // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0038(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.SmartName
// 0x000C
struct FSmartName
{
	struct FName                                       DisplayName;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimCurveBase
// 0x0018
struct FAnimCurveBase
{
	struct FName                                       LastObservedName;                                         // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSmartName                                  Name;                                                     // 0x0008(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	int                                                CurveTypeFlags;                                           // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct Engine.FloatCurve
// 0x0080 (0x0098 - 0x0018)
struct FFloatCurve : public FAnimCurveBase
{
	struct FRichCurve                                  FloatCurve;                                               // 0x0018(0x0080) (NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.RawCurveTracks
// 0x0010
struct FRawCurveTracks
{
	TArray<struct FFloatCurve>                         FloatCurves;                                              // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.AnimSegment
// 0x0020
struct FAnimSegment
{
	class UAnimSequenceBase*                           AnimReference;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartPos;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnimStartTime;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnimEndTime;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnimPlayRate;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LoopingCount;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimTrack
// 0x0010
struct FAnimTrack
{
	TArray<struct FAnimSegment>                        AnimSegments;                                             // 0x0000(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.AlphaBlend
// 0x0030
struct FAlphaBlend
{
	class UCurveFloat*                                 CustomCurve;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              BlendTime;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x18];                                      // 0x000C(0x0018) MISSED OFFSET
	EAlphaBlendOption                                  BlendOption;                                              // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0025(0x000B) MISSED OFFSET
};

// ScriptStruct Engine.AnimSyncMarker
// 0x000C
struct FAnimSyncMarker
{
	struct FName                                       MarkerName;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                     // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.MarkerSyncData
// 0x0020
struct FMarkerSyncData
{
	TArray<struct FAnimSyncMarker>                     AuthoredSyncMarkers;                                      // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.CompositeSection
// 0x0028 (0x0058 - 0x0030)
struct FCompositeSection : public FAnimLinkableElement
{
	struct FName                                       SectionName;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartTime;                                                // 0x0038(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NextSectionName;                                          // 0x003C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<class UAnimMetaData*>                       MetaData;                                                 // 0x0048(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.SlotAnimationTrack
// 0x0018
struct FSlotAnimationTrack
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimTrack                                  AnimTrack;                                                // 0x0008(0x0010) (Edit, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.BranchingPoint
// 0x0010 (0x0040 - 0x0030)
struct FBranchingPoint : public FAnimLinkableElement
{
	struct FName                                       EventName;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DisplayTime;                                              // 0x0038(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TriggerTimeOffset;                                        // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.BranchingPointMarker
// 0x000C
struct FBranchingPointMarker
{
	int                                                NotifyIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TriggerTime;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EAnimNotifyEventType>                  NotifyEventType;                                          // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.TimeStretchCurveMarker
// 0x0010
struct FTimeStretchCurveMarker
{
	float                                              Time[0x3];                                                // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.TimeStretchCurve
// 0x0028
struct FTimeStretchCurve
{
	float                                              SamplingRate;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              CurveValueMinPrecision;                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FTimeStretchCurveMarker>             Markers;                                                  // 0x0008(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
	float                                              Sum_dT_i_by_C_i[0x3];                                     // 0x0018(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.TrackToSkeletonMap
// 0x0004
struct FTrackToSkeletonMap
{
	int                                                BoneTreeIndex;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.AnimSetMeshLinkup
// 0x0010
struct FAnimSetMeshLinkup
{
	TArray<int>                                        BoneToTrackTable;                                         // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.PrimaryAssetRules
// 0x0010
struct FPrimaryAssetRules
{
	int                                                Priority;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bApplyRecursively;                                        // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                ChunkId;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPrimaryAssetCookRule                              CookRule;                                                 // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.PrimaryAssetTypeInfo
// 0x0088
struct FPrimaryAssetTypeInfo
{
	struct FName                                       PrimaryAssetType;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty Engine.PrimaryAssetTypeInfo.AssetBaseClass
	class UClass*                                      AssetBaseClassLoaded;                                     // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasBlueprintClasses;                                     // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsEditorOnly;                                            // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	TArray<struct FDirectoryPath>                      Directories;                                              // 0x0040(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FSoftObjectPath>                     SpecificAssets;                                           // 0x0050(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FPrimaryAssetRules                          Rules;                                                    // 0x0060(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             AssetScanPaths;                                           // 0x0070(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	bool                                               bIsDynamicAsset;                                          // 0x0080(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	int                                                NumberOfAssets;                                           // 0x0084(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.PrimaryAssetRulesOverride
// 0x0020
struct FPrimaryAssetRulesOverride
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPrimaryAssetRules                          Rules;                                                    // 0x0010(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.PrimaryAssetRulesCustomOverride
// 0x0038
struct FPrimaryAssetRulesCustomOverride
{
	struct FPrimaryAssetType                           PrimaryAssetType;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDirectoryPath                              FilterDirectory;                                          // 0x0008(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FString                                     FilterString;                                             // 0x0018(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPrimaryAssetRules                          Rules;                                                    // 0x0028(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.AssetManagerRedirect
// 0x0020
struct FAssetManagerRedirect
{
	struct FString                                     Old;                                                      // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     New;                                                      // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.AssetMapping
// 0x0010
struct FAssetMapping
{
	class UAnimationAsset*                             SourceAsset;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimationAsset*                             TargetAsset;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.AtmospherePrecomputeParameters
// 0x002C
struct FAtmospherePrecomputeParameters
{
	float                                              DensityHeight;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DecayHeight;                                              // 0x0004(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxScatteringOrder;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TransmittanceTexWidth;                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TransmittanceTexHeight;                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IrradianceTexWidth;                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IrradianceTexHeight;                                      // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InscatterAltitudeSampleNum;                               // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InscatterMuNum;                                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InscatterMuSNum;                                          // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InscatterNuNum;                                           // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.AudioQualitySettings
// 0x0020
struct FAudioQualitySettings
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (Edit, NativeAccessSpecifierPublic)
	int                                                MaxChannels;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.EditorMapPerformanceTestDefinition
// 0x0020
struct FEditorMapPerformanceTestDefinition
{
	struct FSoftObjectPath                             PerformanceTestmap;                                       // 0x0000(0x0018) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TestTimer;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.FilePath
// 0x0010
struct FFilePath
{
	struct FString                                     FilePath;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ImportFactorySettingValues
// 0x0020
struct FImportFactorySettingValues
{
	struct FString                                     SettingName;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.EditorImportWorkflowDefinition
// 0x0020
struct FEditorImportWorkflowDefinition
{
	struct FFilePath                                   ImportFilePath;                                           // 0x0000(0x0010) (Edit, Config, NativeAccessSpecifierPublic)
	TArray<struct FImportFactorySettingValues>         FactorySettings;                                          // 0x0010(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.BuildPromotionImportWorkflowSettings
// 0x0150
struct FBuildPromotionImportWorkflowSettings
{
	struct FEditorImportWorkflowDefinition             Diffuse;                                                  // 0x0000(0x0020) (Edit, Config, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition             Normal;                                                   // 0x0020(0x0020) (Edit, Config, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition             StaticMesh;                                               // 0x0040(0x0020) (Edit, Config, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition             ReimportStaticMesh;                                       // 0x0060(0x0020) (Edit, Config, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition             BlendShapeMesh;                                           // 0x0080(0x0020) (Edit, Config, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition             MorphMesh;                                                // 0x00A0(0x0020) (Edit, Config, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition             SkeletalMesh;                                             // 0x00C0(0x0020) (Edit, Config, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition             Animation;                                                // 0x00E0(0x0020) (Edit, Config, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition             Sound;                                                    // 0x0100(0x0020) (Edit, Config, NativeAccessSpecifierPublic)
	struct FEditorImportWorkflowDefinition             SurroundSound;                                            // 0x0120(0x0020) (Edit, Config, NativeAccessSpecifierPublic)
	TArray<struct FEditorImportWorkflowDefinition>     OtherAssetsToImport;                                      // 0x0140(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.BuildPromotionOpenAssetSettings
// 0x0060
struct FBuildPromotionOpenAssetSettings
{
	struct FFilePath                                   BlueprintAsset;                                           // 0x0000(0x0010) (Edit, Config, NativeAccessSpecifierPublic)
	struct FFilePath                                   MaterialAsset;                                            // 0x0010(0x0010) (Edit, Config, NativeAccessSpecifierPublic)
	struct FFilePath                                   ParticleSystemAsset;                                      // 0x0020(0x0010) (Edit, Config, NativeAccessSpecifierPublic)
	struct FFilePath                                   SkeletalMeshAsset;                                        // 0x0030(0x0010) (Edit, Config, NativeAccessSpecifierPublic)
	struct FFilePath                                   StaticMeshAsset;                                          // 0x0040(0x0010) (Edit, Config, NativeAccessSpecifierPublic)
	struct FFilePath                                   TextureAsset;                                             // 0x0050(0x0010) (Edit, Config, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.BuildPromotionNewProjectSettings
// 0x0020
struct FBuildPromotionNewProjectSettings
{
	struct FDirectoryPath                              NewProjectFolderOverride;                                 // 0x0000(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FString                                     NewProjectNameOverride;                                   // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.BuildPromotionTestSettings
// 0x01F0
struct FBuildPromotionTestSettings
{
	struct FFilePath                                   DefaultStaticMeshAsset;                                   // 0x0000(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FBuildPromotionImportWorkflowSettings       ImportWorkflow;                                           // 0x0010(0x0150) (Edit, NativeAccessSpecifierPublic)
	struct FBuildPromotionOpenAssetSettings            OpenAssets;                                               // 0x0160(0x0060) (Edit, NativeAccessSpecifierPublic)
	struct FBuildPromotionNewProjectSettings           NewProjectSettings;                                       // 0x01C0(0x0020) (Edit, NativeAccessSpecifierPublic)
	struct FFilePath                                   SourceControlMaterial;                                    // 0x01E0(0x0010) (Edit, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.MaterialEditorPromotionSettings
// 0x0030
struct FMaterialEditorPromotionSettings
{
	struct FFilePath                                   DefaultMaterialAsset;                                     // 0x0000(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FFilePath                                   DefaultDiffuseTexture;                                    // 0x0010(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FFilePath                                   DefaultNormalTexture;                                     // 0x0020(0x0010) (Edit, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ParticleEditorPromotionSettings
// 0x0010
struct FParticleEditorPromotionSettings
{
	struct FFilePath                                   DefaultParticleAsset;                                     // 0x0000(0x0010) (Edit, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.BlueprintEditorPromotionSettings
// 0x0030
struct FBlueprintEditorPromotionSettings
{
	struct FFilePath                                   FirstMeshPath;                                            // 0x0000(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FFilePath                                   SecondMeshPath;                                           // 0x0010(0x0010) (Edit, NativeAccessSpecifierPublic)
	struct FFilePath                                   DefaultParticleAsset;                                     // 0x0020(0x0010) (Edit, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ExternalToolDefinition
// 0x0060
struct FExternalToolDefinition
{
	struct FString                                     ToolName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilePath                                   ExecutablePath;                                           // 0x0010(0x0010) (Edit, Config, NativeAccessSpecifierPublic)
	struct FString                                     CommandLineOptions;                                       // 0x0020(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDirectoryPath                              WorkingDirectory;                                         // 0x0030(0x0010) (Edit, Config, NativeAccessSpecifierPublic)
	struct FString                                     ScriptExtension;                                          // 0x0040(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDirectoryPath                              ScriptDirectory;                                          // 0x0050(0x0010) (Edit, Config, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.EditorImportExportTestDefinition
// 0x0038
struct FEditorImportExportTestDefinition
{
	struct FFilePath                                   ImportFilePath;                                           // 0x0000(0x0010) (Edit, Config, NativeAccessSpecifierPublic)
	struct FString                                     ExportFileExtension;                                      // 0x0010(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSkipExport;                                              // 0x0020(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<struct FImportFactorySettingValues>         FactorySettings;                                          // 0x0028(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.LaunchOnTestSettings
// 0x0020
struct FLaunchOnTestSettings
{
	struct FFilePath                                   LaunchOnTestmap;                                          // 0x0000(0x0010) (Edit, Config, NativeAccessSpecifierPublic)
	struct FString                                     DeviceID;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.BoneNode
// 0x0010
struct FBoneNode
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ParentIndex;                                              // 0x0008(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EBoneTranslationRetargetingMode>       TranslationRetargetingMode;                               // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.VirtualBone
// 0x0018
struct FVirtualBone
{
	struct FName                                       SourceBoneName;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TargetBoneName;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       VirtualBoneName;                                          // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.SmartNameContainer
// 0x0050
struct FSmartNameContainer
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Engine.AnimSlotGroup
// 0x0018
struct FAnimSlotGroup
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               SlotNames;                                                // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.BlendProfileBoneEntry
// 0x0014
struct FBlendProfileBoneEntry
{
	struct FBoneReference                              BoneReference;                                            // 0x0000(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              BlendScale;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.KShapeElem
// 0x0030
struct FKShapeElem
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              RestOffset;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Name;                                                     // 0x000C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	unsigned char                                      bContributeToMass : 1;                                    // 0x0018(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x17];                                      // 0x0019(0x0017) MISSED OFFSET
};

// ScriptStruct Engine.KSphereElem
// 0x0010 (0x0040 - 0x0030)
struct FKSphereElem : public FKShapeElem
{
	struct FVector                                     Center;                                                   // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                   // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.KBoxElem
// 0x0028 (0x0058 - 0x0030)
struct FKBoxElem : public FKShapeElem
{
	struct FVector                                     Center;                                                   // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                 // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              X;                                                        // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Y;                                                        // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Z;                                                        // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.KSphylElem
// 0x0020 (0x0050 - 0x0030)
struct FKSphylElem : public FKShapeElem
{
	struct FVector                                     Center;                                                   // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                 // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Radius;                                                   // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Length;                                                   // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.KConvexElem
// 0x0070 (0x00A0 - 0x0030)
struct FKConvexElem : public FKShapeElem
{
	TArray<struct FVector>                             VertexData;                                               // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBox                                        ElemBox;                                                  // 0x0040(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0060(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0090(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.KTaperedCapsuleElem
// 0x0028 (0x0058 - 0x0030)
struct FKTaperedCapsuleElem : public FKShapeElem
{
	struct FVector                                     Center;                                                   // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                 // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Radius0;                                                  // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius1;                                                  // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Length;                                                   // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.KAggregateGeom
// 0x0058
struct FKAggregateGeom
{
	TArray<struct FKSphereElem>                        SphereElems;                                              // 0x0000(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FKBoxElem>                           BoxElems;                                                 // 0x0010(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FKSphylElem>                         SphylElems;                                               // 0x0020(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FKConvexElem>                        ConvexElems;                                              // 0x0030(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FKTaperedCapsuleElem>                TaperedCapsuleElems;                                      // 0x0040(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.BranchFilter
// 0x000C
struct FBranchFilter
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BlendDepth;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.InputBlendPose
// 0x0010
struct FInputBlendPose
{
	TArray<struct FBranchFilter>                       BranchFilters;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.BuilderPoly
// 0x0020
struct FBuilderPoly
{
	TArray<int>                                        VertexIndices;                                            // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                Direction;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ItemName;                                                 // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PolyFlags;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.PooledCameraShakes
// 0x0010
struct FPooledCameraShakes
{
	TArray<class UCameraShake*>                        PooledShakes;                                             // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.FOscillator
// 0x000C
struct FFOscillator
{
	float                                              Amplitude;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Frequency;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EInitialOscillatorOffset>              InitialOffset;                                            // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOscillatorWaveform                                Waveform;                                                 // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.ROscillator
// 0x0024
struct FROscillator
{
	struct FFOscillator                                Pitch;                                                    // 0x0000(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                                Yaw;                                                      // 0x000C(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                                Roll;                                                     // 0x0018(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.VOscillator
// 0x0024
struct FVOscillator
{
	struct FFOscillator                                X;                                                        // 0x0000(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                                Y;                                                        // 0x000C(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                                Z;                                                        // 0x0018(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.CanvasUVTri
// 0x0060
struct FCanvasUVTri
{
	struct FVector2D                                   V0_Pos;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   V0_UV;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                V0_Color;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   V1_Pos;                                                   // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   V1_UV;                                                    // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                V1_Color;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   V2_Pos;                                                   // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   V2_UV;                                                    // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                V2_Color;                                                 // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.DelegateArray
// 0x0010
struct FDelegateArray
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty Engine.DelegateArray.Delegates
};

// ScriptStruct Engine.CollisionResponseTemplate
// 0x0060
struct FCollisionResponseTemplate
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionEnabled>                     CollisionEnabled;                                         // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FName                                       ObjectTypeName;                                           // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FResponseChannel>                    CustomResponses;                                          // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     HelpMessage;                                              // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanModify;                                               // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x27];                                      // 0x0039(0x0027) MISSED OFFSET
};

// ScriptStruct Engine.CustomChannelSetup
// 0x0010
struct FCustomChannelSetup
{
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionResponse>                    DefaultResponse;                                          // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTraceType;                                               // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStaticObject;                                            // 0x000E(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.CustomProfile
// 0x0018
struct FCustomProfile
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FResponseChannel>                    CustomResponses;                                          // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.Redirector
// 0x0010
struct FRedirector
{
	struct FName                                       OldName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NewName;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.BlueprintComponentDelegateBinding
// 0x0018
struct FBlueprintComponentDelegateBinding
{
	struct FName                                       ComponentPropertyName;                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DelegatePropertyName;                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FunctionNameToBind;                                       // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.CullDistanceSizePair
// 0x0008
struct FCullDistanceSizePair
{
	float                                              Size;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CullDistance;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.NamedCurveValue
// 0x000C
struct FNamedCurveValue
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.TableRowBase
// 0x0008
struct FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.DebugCameraControllerSettingsViewModeIndex
// 0x0010
struct FDebugCameraControllerSettingsViewModeIndex
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TEnumAsByte<EViewModeIndex>                        ViewModeIndex;                                            // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.RollbackNetStartupActorInfo
// 0x00A0
struct FRollbackNetStartupActorInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UObject*                                     Archetype;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
	class ULevel*                                      Level;                                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x60];                                      // 0x0030(0x0060) MISSED OFFSET
	TArray<class UObject*>                             ObjReferences;                                            // 0x0090(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.MulticastRecordOptions
// 0x0018
struct FMulticastRecordOptions
{
	struct FString                                     FuncPathName;                                             // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bServerSkip;                                              // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bClientSkip;                                              // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct Engine.TextureLODGroup
// 0x0054
struct FTextureLODGroup
{
	TEnumAsByte<ETextureGroup>                         Group;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0001(0x000B) MISSED OFFSET
	int                                                LODBias;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LODBias_Smaller;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LODBias_Smallest;                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0018(0x0004) MISSED OFFSET
	int                                                NumStreamedMips;                                          // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ETextureMipGenSettings>                MipGenSettings;                                           // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                MinLODSize;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxLODSize;                                               // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxLODSize_Smaller;                                       // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxLODSize_Smallest;                                      // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OptionalLODBias;                                          // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OptionalMaxLODSize;                                       // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FName                                       MinMagFilter;                                             // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MipFilter;                                                // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureMipLoadOptions                             MipLoadOptions;                                           // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DuplicateNonOptionalMips;                                 // 0x0051(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.DialogueContext
// 0x0018
struct FDialogueContext
{
	class UDialogueVoice*                              Speaker;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UDialogueVoice*>                      Targets;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.DialogueContextMapping
// 0x0038
struct FDialogueContextMapping
{
	struct FDialogueContext                            Context;                                                  // 0x0000(0x0018) (Edit, NativeAccessSpecifierPublic)
	class USoundWave*                                  SoundWave;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LocalizationKeyFormat;                                    // 0x0020(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogueSoundWaveProxy*                     Proxy;                                                    // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.LightmassLightSettings
// 0x000C
struct FLightmassLightSettings
{
	float                                              IndirectLightingSaturation;                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShadowExponent;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseAreaShadowsForStationaryLight;                        // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LightmassDirectionalLightSettings
// 0x0004 (0x0010 - 0x000C)
struct FLightmassDirectionalLightSettings : public FLightmassLightSettings
{
	float                                              LightSourceAngle;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.EdGraphTerminalType
// 0x001C
struct FEdGraphTerminalType
{
	struct FName                                       TerminalCategory;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TerminalSubCategory;                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UObject>                      TerminalSubCategoryObject;                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTerminalIsConst;                                         // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTerminalIsWeakPointer;                                   // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.EdGraphPinType
// 0x0058
struct FEdGraphPinType
{
	struct FName                                       PinCategory;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PinSubCategory;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UObject>                      PinSubCategoryObject;                                     // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSimpleMemberReference                      PinSubCategoryMemberReference;                            // 0x0018(0x0020) (NoDestructor, NativeAccessSpecifierPublic)
	struct FEdGraphTerminalType                        PinValueType;                                             // 0x0038(0x001C) (NoDestructor, NativeAccessSpecifierPublic)
	EPinContainerType                                  ContainerType;                                            // 0x0054(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsArray : 1;                                             // 0x0055(0x0001) (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bIsReference : 1;                                         // 0x0055(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsConst : 1;                                             // 0x0055(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsWeakPointer : 1;                                       // 0x0055(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0056(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.ExponentialHeightFogData
// 0x000C
struct FExponentialHeightFogData
{
	float                                              FogDensity;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FogHeightFalloff;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FogHeightOffset;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.FontCharacter
// 0x0018
struct FFontCharacter
{
	int                                                StartU;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartV;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                USize;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VSize;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      TextureIndex;                                             // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                VerticalOffset;                                           // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.FontImportOptionsData
// 0x00B0
struct FFontImportOptionsData
{
	struct FString                                     FontName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Height;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableAntialiasing : 1;                                  // 0x0014(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableBold : 1;                                          // 0x0014(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableItalic : 1;                                        // 0x0014(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableUnderline : 1;                                     // 0x0014(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAlphaOnly : 1;                                           // 0x0014(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	TEnumAsByte<EFontImportCharacterSet>               CharacterSet;                                             // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FString                                     Chars;                                                    // 0x0020(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UnicodeRange;                                             // 0x0030(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharsFilePath;                                            // 0x0040(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharsFileWildcard;                                        // 0x0050(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCreatePrintableOnly : 1;                                 // 0x0060(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIncludeASCIIRange : 1;                                   // 0x0060(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	struct FLinearColor                                ForegroundColor;                                          // 0x0064(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableDropShadow : 1;                                    // 0x0074(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	int                                                TexturePageWidth;                                         // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TexturePageMaxHeight;                                     // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                XPadding;                                                 // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                YPadding;                                                 // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ExtendBoxTop;                                             // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ExtendBoxBottom;                                          // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ExtendBoxRight;                                           // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ExtendBoxLeft;                                            // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableLegacyMode : 1;                                    // 0x0098(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	int                                                Kerning;                                                  // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseDistanceFieldAlpha : 1;                               // 0x00A0(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	int                                                DistanceFieldScaleFactor;                                 // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceFieldScanRadiusScale;                             // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ForceFeedbackAttenuationSettings
// 0x0000 (0x00B0 - 0x00B0)
struct FForceFeedbackAttenuationSettings : public FBaseAttenuationSettings
{

};

// ScriptStruct Engine.ForceFeedbackChannelDetails
// 0x0090
struct FForceFeedbackChannelDetails
{
	unsigned char                                      bAffectsLeftLarge : 1;                                    // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectsLeftSmall : 1;                                    // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectsRightLarge : 1;                                   // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectsRightSmall : 1;                                   // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FRuntimeFloatCurve                          Curve;                                                    // 0x0008(0x0088) (Edit, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.PredictProjectilePathParams
// 0x0060
struct FPredictProjectilePathParams
{
	struct FVector                                     StartLocation;                                            // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LaunchVelocity;                                           // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTraceWithCollision;                                      // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              ProjectileRadius;                                         // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSimTime;                                               // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTraceWithChannel;                                        // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ActorsToIgnore;                                           // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                              SimFrequency;                                             // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OverrideGravityZ;                                         // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              DrawDebugTime;                                            // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTraceComplex;                                            // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.PredictProjectilePathPointData
// 0x001C
struct FPredictProjectilePathPointData
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Velocity;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                     // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.PredictProjectilePathResult
// 0x00B8
struct FPredictProjectilePathResult
{
	TArray<struct FPredictProjectilePathPointData>     PathData;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	struct FPredictProjectilePathPointData             LastTraceDestination;                                     // 0x0010(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FHitResult                                  HitResult;                                                // 0x002C(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.HapticFeedbackDetails_Curve
// 0x0110
struct FHapticFeedbackDetails_Curve
{
	struct FRuntimeFloatCurve                          Frequency;                                                // 0x0000(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                          Amplitude;                                                // 0x0088(0x0088) (Edit, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.HLODProxyMesh
// 0x0030
struct FHLODProxyMesh
{
	TLazyObjectPtr<class ALODActor>                    LODActor;                                                 // 0x0000(0x001C) (Edit, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UStaticMesh*                                 StaticMesh;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       Key;                                                      // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct Engine.ImportanceTexture
// 0x0050
struct FImportanceTexture
{
	struct FIntPoint                                   Size;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumMips;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<float>                                      MarginalCDF;                                              // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      ConditionalCDF;                                           // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FColor>                              TextureData;                                              // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UTexture2D>                   Texture;                                                  // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EImportanceWeight>                     Weighting;                                                // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.ComponentKey
// 0x0020
struct FComponentKey
{
	class UClass*                                      OwnerClass;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       SCSVariableName;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                       AssociatedGuid;                                           // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct Engine.ComponentOverrideRecord
// 0x0080
struct FComponentOverrideRecord
{
	class UClass*                                      ComponentClass;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                             ComponentTemplate;                                        // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FComponentKey                               ComponentKey;                                             // 0x0010(0x0020) (NoDestructor, NativeAccessSpecifierPublic)
	struct FBlueprintCookedComponentInstancingData     CookedComponentInstancingData;                            // 0x0030(0x0050) (NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.BlueprintInputDelegateBinding
// 0x0004
struct FBlueprintInputDelegateBinding
{
	unsigned char                                      bConsumeInput : 1;                                        // 0x0000(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bExecuteWhenPaused : 1;                                   // 0x0000(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideParentBinding : 1;                               // 0x0000(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintInputActionDelegateBinding
// 0x0014 (0x0018 - 0x0004)
struct FBlueprintInputActionDelegateBinding : public FBlueprintInputDelegateBinding
{
	struct FName                                       InputActionName;                                          // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EInputEvent>                           InputKeyEvent;                                            // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FName                                       FunctionNameToBind;                                       // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.BlueprintInputAxisDelegateBinding
// 0x0010 (0x0014 - 0x0004)
struct FBlueprintInputAxisDelegateBinding : public FBlueprintInputDelegateBinding
{
	struct FName                                       InputAxisName;                                            // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FunctionNameToBind;                                       // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.BlueprintInputAxisKeyDelegateBinding
// 0x0024 (0x0028 - 0x0004)
struct FBlueprintInputAxisKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FKey                                        AxisKey;                                                  // 0x0008(0x0018) (HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FunctionNameToBind;                                       // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.CachedKeyToActionInfo
// 0x0070
struct FCachedKeyToActionInfo
{
	class UPlayerInput*                                PlayerInput;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0008(0x0068) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintInputKeyDelegateBinding
// 0x0034 (0x0038 - 0x0004)
struct FBlueprintInputKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FInputChord                                 InputChord;                                               // 0x0008(0x0020) (HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EInputEvent>                           InputKeyEvent;                                            // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FName                                       FunctionNameToBind;                                       // 0x002C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.InputAxisProperties
// 0x0010
struct FInputAxisProperties
{
	float                                              DeadZone;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Sensitivity;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Exponent;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bInvert : 1;                                              // 0x000C(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.InputAxisConfigEntry
// 0x0018
struct FInputAxisConfigEntry
{
	struct FName                                       AxisKeyName;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputAxisProperties                        AxisProperties;                                           // 0x0008(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.InputActionKeyMapping
// 0x0028
struct FInputActionKeyMapping
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShift : 1;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCtrl : 1;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAlt : 1;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCmd : 1;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FKey                                        Key;                                                      // 0x0010(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.InputAxisKeyMapping
// 0x0028
struct FInputAxisKeyMapping
{
	struct FName                                       AxisName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scale;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FKey                                        Key;                                                      // 0x0010(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.BlueprintInputTouchDelegateBinding
// 0x000C (0x0010 - 0x0004)
struct FBlueprintInputTouchDelegateBinding : public FBlueprintInputDelegateBinding
{
	TEnumAsByte<EInputEvent>                           InputKeyEvent;                                            // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FName                                       FunctionNameToBind;                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.CurveEdEntry
// 0x0038
struct FCurveEdEntry
{
	class UObject*                                     CurveObject;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      CurveColor;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     CurveName;                                                // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                bHideCurve;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                bColorCurve;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                bFloatingPointColorCurve;                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                bClamp;                                                   // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ClampLow;                                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ClampHigh;                                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.CurveEdTab
// 0x0030
struct FCurveEdTab
{
	struct FString                                     TabName;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCurveEdEntry>                       Curves;                                                   // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              ViewStartInput;                                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ViewEndInput;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ViewStartOutput;                                          // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ViewEndOutput;                                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.InterpControlPoint
// 0x001C
struct FInterpControlPoint
{
	struct FVector                                     PositionControlPoint;                                     // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPositionIsRelative;                                      // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xF];                                       // 0x000D(0x000F) MISSED OFFSET
};

// ScriptStruct Engine.AnimControlTrackKey
// 0x0020
struct FAnimControlTrackKey
{
	float                                              StartTime;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UAnimSequence*                               AnimSeq;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnimStartOffset;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnimEndOffset;                                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnimPlayRate;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLooping : 1;                                             // 0x001C(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReverse : 1;                                             // 0x001C(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.BoolTrackKey
// 0x0008
struct FBoolTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Value : 1;                                                // 0x0004(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.DirectorTrackCut
// 0x0014
struct FDirectorTrackCut
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TransitionTime;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TargetCamGroup;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ShotNumber;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.EventTrackKey
// 0x000C
struct FEventTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       EventName;                                                // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.PrimitiveMaterialRef
// 0x0018
struct FPrimitiveMaterialRef
{
	class UPrimitiveComponent*                         Primitive;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDecalComponent*                             Decal;                                                    // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ElementIndex;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.InterpLookupPoint
// 0x000C
struct FInterpLookupPoint
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.InterpLookupTrack
// 0x0010
struct FInterpLookupTrack
{
	TArray<struct FInterpLookupPoint>                  Points;                                                   // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ParticleReplayTrackKey
// 0x000C
struct FParticleReplayTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ClipIDNumber;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.SoundTrackKey
// 0x0018
struct FSoundTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Volume;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Pitch;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class USoundBase*                                  Sound;                                                    // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ToggleTrackKey
// 0x0008
struct FToggleTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ETrackToggleAction>                    ToggleAction;                                             // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.VisibilityTrackKey
// 0x0008
struct FVisibilityTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EVisibilityTrackAction>                Action;                                                   // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EVisibilityTrackCondition>             ActiveCondition;                                          // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.VectorSpringState
// 0x0018
struct FVectorSpringState
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.FloatSpringState
// 0x0008
struct FFloatSpringState
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.DrawToRenderTargetContext
// 0x0010
struct FDrawToRenderTargetContext
{
	class UTextureRenderTarget2D*                      RenderTarget;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.UserActivity
// 0x0018
struct FUserActivity
{
	struct FString                                     ActionName;                                               // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.GenericStruct
// 0x0004
struct FGenericStruct
{
	int                                                Data;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.CollisionProfileName
// 0x0008
struct FCollisionProfileName
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.TimerHandle
// 0x0008
struct FTimerHandle
{
	uint64_t                                           Handle;                                                   // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct Engine.DebugFloatHistory
// 0x0020
struct FDebugFloatHistory
{
	TArray<float>                                      Samples;                                                  // 0x0000(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	float                                              MaxSamples;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinValue;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxValue;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoAdjustMinMax;                                        // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.FormatArgumentData
// 0x0040
struct FFormatArgumentData
{
	struct FString                                     ArgumentName;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EFormatArgumentType>                   ArgumentValueType;                                        // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FText                                       ArgumentValue;                                            // 0x0018(0x0018) (Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	int                                                ArgumentValueInt;                                         // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ArgumentValueFloat;                                       // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextGender                                        ArgumentValueGender;                                      // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.LayerActorStats
// 0x0010
struct FLayerActorStats
{
	class UClass*                                      Type;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Total;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ReplicatedStaticActorDestructionInfo
// 0x0038
struct FReplicatedStaticActorDestructionInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
	class UClass*                                      ObjClass;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.LightmassPointLightSettings
// 0x0000 (0x000C - 0x000C)
struct FLightmassPointLightSettings : public FLightmassLightSettings
{

};

// ScriptStruct Engine.MaterialInput
// 0x000C
struct FMaterialInput
{
	int                                                OutputIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ExpressionName;                                           // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ScalarMaterialInput
// 0x0000 (0x000C - 0x000C)
struct FScalarMaterialInput : public FMaterialInput
{

};

// ScriptStruct Engine.VectorMaterialInput
// 0x0000 (0x000C - 0x000C)
struct FVectorMaterialInput : public FMaterialInput
{

};

// ScriptStruct Engine.ColorMaterialInput
// 0x0000 (0x000C - 0x000C)
struct FColorMaterialInput : public FMaterialInput
{

};

// ScriptStruct Engine.MaterialShadingModelField
// 0x0002
struct FMaterialShadingModelField
{
	uint16_t                                           ShadingModelField;                                        // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct Engine.MaterialAttributesInput
// 0x0004 (0x0010 - 0x000C)
struct FMaterialAttributesInput : public FExpressionInput
{
	int                                                PropertyConnectedBitmask;                                 // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ShadingModelMaterialInput
// 0x0000 (0x000C - 0x000C)
struct FShadingModelMaterialInput : public FMaterialInput
{

};

// ScriptStruct Engine.MaterialFunctionInfo
// 0x0018
struct FMaterialFunctionInfo
{
	struct FGuid                                       StateId;                                                  // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialFunctionInterface*                  Function;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.MaterialParameterCollectionInfo
// 0x0018
struct FMaterialParameterCollectionInfo
{
	struct FGuid                                       StateId;                                                  // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialParameterCollection*                ParameterCollection;                                      // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.MaterialSpriteElement
// 0x0028
struct FMaterialSpriteElement
{
	class UMaterialInterface*                          Material;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 DistanceToOpacityCurve;                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSizeIsInScreenSpace : 1;                                 // 0x0010(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              BaseSizeX;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BaseSizeY;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 DistanceToSizeCurve;                                      // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.CustomInput
// 0x001C
struct FCustomInput
{
	struct FName                                       InputName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExpressionInput                            Input;                                                    // 0x0008(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0014(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.CollectionParameterBase
// 0x0018
struct FCollectionParameterBase
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ID;                                                       // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.CollectionScalarParameter
// 0x0004 (0x001C - 0x0018)
struct FCollectionScalarParameter : public FCollectionParameterBase
{
	float                                              DefaultValue;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.CollectionVectorParameter
// 0x0010 (0x0028 - 0x0018)
struct FCollectionVectorParameter : public FCollectionParameterBase
{
	struct FLinearColor                                DefaultValue;                                             // 0x0018(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.InterpGroupActorInfo
// 0x0018
struct FInterpGroupActorInfo
{
	struct FName                                       ObjectName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              Actors;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.CameraCutInfo
// 0x0010
struct FCameraCutInfo
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Timestamp;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.PurchaseInfo
// 0x0040
struct FPurchaseInfo
{
	struct FString                                     Identifier;                                               // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                              // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayDescription;                                       // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayPrice;                                             // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.NetworkEmulationProfileDescription
// 0x0020
struct FNetworkEmulationProfileDescription
{
	struct FString                                     ProfileName;                                              // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Tooltip;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.NodeItem
// 0x0040
struct FNodeItem
{
	struct FName                                       ParentName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.DistributionLookupTable
// 0x0028
struct FDistributionLookupTable
{
	unsigned char                                      Op;                                                       // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      EntryCount;                                               // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      EntryStride;                                              // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SubEntryStride;                                           // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeScale;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeBias;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<float>                                      Values;                                                   // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      LockFlag;                                                 // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.RawDistribution
// 0x0028
struct FRawDistribution
{
	struct FDistributionLookupTable                    Table;                                                    // 0x0000(0x0028) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.RawDistributionVector
// 0x0028 (0x0050 - 0x0028)
struct FRawDistributionVector : public FRawDistribution
{
	float                                              MinValue;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              MaxValue;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     MinValueVec;                                              // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     MaxValueVec;                                              // 0x003C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDistributionVector*                         Distribution;                                             // 0x0048(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.RawDistributionFloat
// 0x0010 (0x0038 - 0x0028)
struct FRawDistributionFloat : public FRawDistribution
{
	float                                              MinValue;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              MaxValue;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDistributionFloat*                          Distribution;                                             // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.BeamModifierOptions
// 0x0004
struct FBeamModifierOptions
{
	unsigned char                                      bModify : 1;                                              // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bScale : 1;                                               // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLock : 1;                                                // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ParticleRandomSeedInfo
// 0x0020
struct FParticleRandomSeedInfo
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGetSeedFromInstance : 1;                                 // 0x0008(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bInstanceSeedIsIndex : 1;                                 // 0x0008(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bResetSeedOnEmitterLooping : 1;                           // 0x0008(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRandomlySelectSeedArray : 1;                             // 0x0008(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<int>                                        RandomSeeds;                                              // 0x0010(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ParticleEvent_GenerateInfo
// 0x0028
struct FParticleEvent_GenerateInfo
{
	TEnumAsByte<EParticleEventType>                    Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Frequency;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ParticleFrequency;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      FirstTimeOnly : 1;                                        // 0x000C(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      LastTimeOnly : 1;                                         // 0x000C(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UseReflectedImpactVector : 1;                             // 0x000C(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseOrbitOffset : 1;                                      // 0x000C(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FName                                       CustomName;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UParticleModuleEventSendToGame*>      ParticleModuleEventsToSendToGame;                         // 0x0018(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.LocationBoneSocketInfo
// 0x0014
struct FLocationBoneSocketInfo
{
	struct FName                                       BoneSocketName;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Offset;                                                   // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.OrbitOptions
// 0x0004
struct FOrbitOptions
{
	unsigned char                                      bProcessDuringSpawn : 1;                                  // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bProcessDuringUpdate : 1;                                 // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseEmitterTime : 1;                                      // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.EmitterDynamicParameter
// 0x0050
struct FEmitterDynamicParameter
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseEmitterTime : 1;                                      // 0x0008(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSpawnTimeOnly : 1;                                       // 0x0008(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	TEnumAsByte<EEmitterDynamicParameterValue>         ValueMethod;                                              // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	unsigned char                                      bScaleVelocityByParamValue : 1;                           // 0x0010(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FRawDistributionFloat                       ParamValue;                                               // 0x0018(0x0038) (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ParticleBurst
// 0x000C
struct FParticleBurst
{
	int                                                Count;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CountLow;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.GPUSpriteLocalVectorFieldInfo
// 0x0070
struct FGPUSpriteLocalVectorFieldInfo
{
	class UVectorField*                                Field;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    MinInitialRotation;                                       // 0x0040(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    MaxInitialRotation;                                       // 0x004C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    RotationRate;                                             // 0x0058(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Intensity;                                                // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Tightness;                                                // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIgnoreComponentTransform : 1;                            // 0x006C(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bTileX : 1;                                               // 0x006C(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bTileY : 1;                                               // 0x006C(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bTileZ : 1;                                               // 0x006C(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseFixDT : 1;                                            // 0x006C(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.FloatDistribution
// 0x0028
struct FFloatDistribution
{
	struct FDistributionLookupTable                    Table;                                                    // 0x0000(0x0028) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.GPUSpriteEmitterInfo
// 0x02C0
struct FGPUSpriteEmitterInfo
{
	class UParticleModuleRequired*                     RequiredModule;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleModuleSpawn*                        SpawnModule;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleModuleSpawnPerUnit*                 SpawnPerUnitModule;                                       // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UParticleModule*>                     SpawnModules;                                             // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FGPUSpriteLocalVectorFieldInfo              LocalVectorField;                                         // 0x0030(0x0070) (NoDestructor, NativeAccessSpecifierPublic)
	struct FFloatDistribution                          VectorFieldScale;                                         // 0x00A0(0x0028) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatDistribution                          DragCoefficient;                                          // 0x00C8(0x0028) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatDistribution                          PointAttractorStrength;                                   // 0x00F0(0x0028) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatDistribution                          Resilience;                                               // 0x0118(0x0028) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ConstantAcceleration;                                     // 0x0140(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     PointAttractorPosition;                                   // 0x014C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PointAttractorRadiusSq;                                   // 0x0158(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OrbitOffsetBase;                                          // 0x015C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OrbitOffsetRange;                                         // 0x0168(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   InvMaxSize;                                               // 0x0174(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InvRotationRateScale;                                     // 0x017C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxLifetime;                                              // 0x0180(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxParticleCount;                                         // 0x0184(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EParticleScreenAlignment>              ScreenAlignment;                                          // 0x0188(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EParticleAxisLock>                     LockAxisFlag;                                             // 0x0189(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x018A(0x0002) MISSED OFFSET
	unsigned char                                      bEnableCollision : 1;                                     // 0x018C(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x018D(0x0003) MISSED OFFSET
	TEnumAsByte<EParticleCollisionMode>                CollisionMode;                                            // 0x0190(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0191(0x0003) MISSED OFFSET
	unsigned char                                      bRemoveHMDRoll : 1;                                       // 0x0194(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0195(0x0003) MISSED OFFSET
	float                                              MinFacingCameraBlendDistance;                             // 0x0198(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxFacingCameraBlendDistance;                             // 0x019C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRawDistributionVector                      DynamicColor;                                             // 0x01A0(0x0050) (ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                       DynamicAlpha;                                             // 0x01F0(0x0038) (ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FRawDistributionVector                      DynamicColorScale;                                        // 0x0228(0x0050) (ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                       DynamicAlphaScale;                                        // 0x0278(0x0038) (ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x10];                                      // 0x02B0(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.GPUSpriteResourceData
// 0x0160
struct FGPUSpriteResourceData
{
	TArray<struct FColor>                              QuantizedColorSamples;                                    // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FColor>                              QuantizedMiscSamples;                                     // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FColor>                              QuantizedSimulationAttrSamples;                           // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector4                                    ColorScale;                                               // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    ColorBias;                                                // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    MiscScale;                                                // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    MiscBias;                                                 // 0x0060(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    SimulationAttrCurveScale;                                 // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    SimulationAttrCurveBias;                                  // 0x0080(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    SubImageSize;                                             // 0x0090(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    SizeBySpeed;                                              // 0x00A0(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ConstantAcceleration;                                     // 0x00B0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OrbitOffsetBase;                                          // 0x00BC(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OrbitOffsetRange;                                         // 0x00C8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OrbitFrequencyBase;                                       // 0x00D4(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OrbitFrequencyRange;                                      // 0x00E0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OrbitPhaseBase;                                           // 0x00EC(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OrbitPhaseRange;                                          // 0x00F8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GlobalVectorFieldScale;                                   // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GlobalVectorFieldTightness;                               // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PerParticleVectorFieldScale;                              // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PerParticleVectorFieldBias;                               // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DragCoefficientScale;                                     // 0x0114(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DragCoefficientBias;                                      // 0x0118(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ResilienceScale;                                          // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ResilienceBias;                                           // 0x0120(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CollisionRadiusScale;                                     // 0x0124(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CollisionRadiusBias;                                      // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CollisionTimeBias;                                        // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CollisionRandomSpread;                                    // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CollisionRandomDistribution;                              // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OneMinusFriction;                                         // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RotationRateScale;                                        // 0x013C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CameraMotionBlurAmount;                                   // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EParticleScreenAlignment>              ScreenAlignment;                                          // 0x0144(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EParticleAxisLock>                     LockAxisFlag;                                             // 0x0145(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0146(0x0002) MISSED OFFSET
	struct FVector2D                                   PivotOffset;                                              // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRemoveHMDRoll : 1;                                       // 0x0150(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0151(0x0003) MISSED OFFSET
	float                                              MinFacingCameraBlendDistance;                             // 0x0154(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxFacingCameraBlendDistance;                             // 0x0158(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ParticleSystemLOD
// 0x0001
struct FParticleSystemLOD
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.LODSoloTrack
// 0x0010
struct FLODSoloTrack
{
	TArray<unsigned char>                              SoloEnableSetting;                                        // 0x0000(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.NamedEmitterMaterial
// 0x0010
struct FNamedEmitterMaterial
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          Material;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ParticleSysParam
// 0x0080
struct FParticleSysParam
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EParticleSysParamType>                 ParamType;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              Scalar;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scalar_Low;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Vector;                                                   // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Vector_Low;                                               // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      Color;                                                    // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                    // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          Material;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0040(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.PhysicalAnimationData
// 0x0024
struct FPhysicalAnimationData
{
	struct FName                                       BodyName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsLocalSimulation : 1;                                   // 0x0008(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              OrientationStrength;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngularVelocityStrength;                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PositionStrength;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VelocityStrength;                                         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxLinearForce;                                           // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxAngularForce;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.TireFrictionScalePair
// 0x0010
struct FTireFrictionScalePair
{
	class UTireType*                                   TireType;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FrictionScale;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.PhysicalAnimationProfile
// 0x002C
struct FPhysicalAnimationProfile
{
	struct FName                                       ProfileName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPhysicalAnimationData                      PhysicalAnimationData;                                    // 0x0008(0x0024) (Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ConstrainComponentPropName
// 0x0008
struct FConstrainComponentPropName
{
	struct FName                                       ComponentName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ConstraintBaseParams
// 0x0014
struct FConstraintBaseParams
{
	float                                              Stiffness;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Damping;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Restitution;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ContactDistance;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSoftConstraint : 1;                                      // 0x0010(0x0001) (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LinearConstraint
// 0x0008 (0x001C - 0x0014)
struct FLinearConstraint : public FConstraintBaseParams
{
	float                                              Limit;                                                    // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ELinearConstraintMotion>               XMotion;                                                  // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ELinearConstraintMotion>               YMotion;                                                  // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ELinearConstraintMotion>               ZMotion;                                                  // 0x001A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.ConeConstraint
// 0x000C (0x0020 - 0x0014)
struct FConeConstraint : public FConstraintBaseParams
{
	float                                              Swing1LimitDegrees;                                       // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Swing2LimitDegrees;                                       // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EAngularConstraintMotion>              Swing1Motion;                                             // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EAngularConstraintMotion>              Swing2Motion;                                             // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.TwistConstraint
// 0x0008 (0x001C - 0x0014)
struct FTwistConstraint : public FConstraintBaseParams
{
	float                                              TwistLimitDegrees;                                        // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EAngularConstraintMotion>              TwistMotion;                                              // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ConstraintDrive
// 0x0010
struct FConstraintDrive
{
	float                                              Stiffness;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Damping;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxForce;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnablePositionDrive : 1;                                 // 0x000C(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableVelocityDrive : 1;                                 // 0x000C(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LinearDriveConstraint
// 0x004C
struct FLinearDriveConstraint
{
	struct FVector                                     PositionTarget;                                           // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     VelocityTarget;                                           // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConstraintDrive                            XDrive;                                                   // 0x0018(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FConstraintDrive                            YDrive;                                                   // 0x0028(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FConstraintDrive                            ZDrive;                                                   // 0x0038(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bEnablePositionDrive : 1;                                 // 0x0048(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.AngularDriveConstraint
// 0x004C
struct FAngularDriveConstraint
{
	struct FConstraintDrive                            TwistDrive;                                               // 0x0000(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FConstraintDrive                            SwingDrive;                                               // 0x0010(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FConstraintDrive                            SlerpDrive;                                               // 0x0020(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    OrientationTarget;                                        // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     AngularVelocityTarget;                                    // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EAngularDriveMode>                     AngularDriveMode;                                         // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ConstraintProfileProperties
// 0x0104
struct FConstraintProfileProperties
{
	float                                              ProjectionLinearTolerance;                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ProjectionAngularTolerance;                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LinearBreakThreshold;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngularBreakThreshold;                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearConstraint                           LinearLimit;                                              // 0x0010(0x001C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FConeConstraint                             ConeLimit;                                                // 0x002C(0x0020) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FTwistConstraint                            TwistLimit;                                               // 0x004C(0x001C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearDriveConstraint                      LinearDrive;                                              // 0x0068(0x004C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAngularDriveConstraint                     AngularDrive;                                             // 0x00B4(0x004C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bDisableCollision : 1;                                    // 0x0100(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bParentDominates : 1;                                     // 0x0100(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableProjection : 1;                                    // 0x0100(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAngularBreakable : 1;                                    // 0x0100(0x0001) (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLinearBreakable : 1;                                     // 0x0100(0x0001) (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0101(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ConstraintInstance
// 0x01B8
struct FConstraintInstance
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	struct FName                                       JointName;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ConstraintBone1;                                          // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ConstraintBone2;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Pos1;                                                     // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     PriAxis1;                                                 // 0x003C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SecAxis1;                                                 // 0x0048(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Pos2;                                                     // 0x0054(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     PriAxis2;                                                 // 0x0060(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SecAxis2;                                                 // 0x006C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    AngularRotationOffset;                                    // 0x0078(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bScaleLinearLimits : 1;                                   // 0x0084(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0085(0x0007) MISSED OFFSET
	struct FConstraintProfileProperties                ProfileInstance;                                          // 0x008C(0x0104) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0190(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.PhysicsConstraintProfileHandle
// 0x010C
struct FPhysicsConstraintProfileHandle
{
	struct FConstraintProfileProperties                ProfileProperties;                                        // 0x0000(0x0104) (NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       ProfileName;                                              // 0x0104(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.RigidBodyErrorCorrection
// 0x0034
struct FRigidBodyErrorCorrection
{
	float                                              PingExtrapolation;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PingLimit;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ErrorPerLinearDifference;                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ErrorPerAngularDifference;                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxRestoredStateError;                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxLinearHardSnapDistance;                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PositionLerp;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngleLerp;                                                // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LinearVelocityCoefficient;                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngularVelocityCoefficient;                               // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ErrorAccumulationSeconds;                                 // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ErrorAccumulationDistanceSq;                              // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ErrorAccumulationSimilarity;                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.PhysicalSurfaceName
// 0x000C
struct FPhysicalSurfaceName
{
	TEnumAsByte<EPhysicalSurface>                      Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.PoseData
// 0x0070
struct FPoseData
{
	TArray<struct FTransform>                          LocalSpacePose;                                           // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<int, int>                                     TrackToBufferIndex;                                       // 0x0010(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      CurveData;                                                // 0x0060(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.PoseDataContainer
// 0x0090
struct FPoseDataContainer
{
	TArray<struct FSmartName>                          PoseNames;                                                // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FName>                               Tracks;                                                   // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<struct FName, int>                            TrackMap;                                                 // 0x0020(0x0050) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FPoseData>                           Poses;                                                    // 0x0070(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FAnimCurveBase>                      Curves;                                                   // 0x0080(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
};

// ScriptStruct Engine.PreviewMeshCollectionEntry
// 0x0028
struct FPreviewMeshCollectionEntry
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Engine.PreviewMeshCollectionEntry.SkeletalMesh
};

// ScriptStruct Engine.CollectionReference
// 0x0008
struct FCollectionReference
{
	struct FName                                       CollectionName;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.RigTransformConstraint
// 0x0010
struct FRigTransformConstraint
{
	TEnumAsByte<EConstraintTransform>                  TranformType;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       ParentSpace;                                              // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Weight;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.TransformBaseConstraint
// 0x0010
struct FTransformBaseConstraint
{
	TArray<struct FRigTransformConstraint>             TransformConstraints;                                     // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.TransformBase
// 0x0028
struct FTransformBase
{
	struct FName                                       Node;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransformBaseConstraint                    Constraints[0x2];                                         // 0x0008(0x0010) (Edit, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.Node
// 0x0060
struct FNode
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ParentName;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                              // 0x0040(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAdvanced;                                                // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0051(0x000F) MISSED OFFSET
};

// ScriptStruct Engine.BPVariableMetaDataEntry
// 0x0018
struct FBPVariableMetaDataEntry
{
	struct FName                                       DataKey;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DataValue;                                                // 0x0008(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.MeshUVChannelInfo
// 0x0014
struct FMeshUVChannelInfo
{
	bool                                               bInitialized;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideDensities;                                       // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              LocalUVDensities[0x4];                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.SkeletalMaterial
// 0x0028
struct FSkeletalMaterial
{
	class UMaterialInterface*                          MaterialInterface;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MaterialSlotName;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMeshUVChannelInfo                          UVChannelData;                                            // 0x0010(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.BoneMirrorInfo
// 0x0008
struct FBoneMirrorInfo
{
	int                                                SourceIndex;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EAxis>                                 BoneFlipAxis;                                             // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.PerPlatformFloat
// 0x0004
struct FPerPlatformFloat
{
	float                                              Default;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.SkeletalMeshOptimizationSettings
// 0x003C
struct FSkeletalMeshOptimizationSettings
{
	TEnumAsByte<ESkeletalMeshTerminationCriterion>     TerminationCriterion;                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              NumOfTrianglesPercentage;                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NumOfVertPercentage;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           MaxNumOfTriangles;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           MaxNumOfVerts;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDeviationPercentage;                                   // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ESkeletalMeshOptimizationType>         ReductionMethod;                                          // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   SilhouetteImportance;                                     // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   TextureImportance;                                        // 0x001A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   ShadingImportance;                                        // 0x001B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   SkinningImportance;                                       // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRemapMorphTargets : 1;                                   // 0x001D(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRecalcNormals : 1;                                       // 0x001D(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
	float                                              WeldingThreshold;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NormalsThreshold;                                         // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxBonesPerVertex;                                        // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnforceBoneBoundaries : 1;                               // 0x002C(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	float                                              VolumeImportance;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLockEdges : 1;                                           // 0x0034(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	int                                                BaseLOD;                                                  // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.SkeletalMeshLODInfo
// 0x00A8
struct FSkeletalMeshLODInfo
{
	struct FPerPlatformFloat                           ScreenSize;                                               // 0x0000(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              LODHysteresis;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        LODMaterialMap;                                           // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FSkeletalMeshOptimizationSettings           ReductionSettings;                                        // 0x0018(0x003C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FBoneReference>                      BonesToRemove;                                            // 0x0058(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                      BonesToPrioritize;                                        // 0x0068(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              WeightOfPrioritization;                                   // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	class UAnimSequence*                               BakePose;                                                 // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               BakePoseOverride;                                         // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SourceImportFilename;                                     // 0x0090(0x0010) (Edit, ZeroConstructor, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bHasBeenSimplified : 1;                                   // 0x00A0(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bHasPerLODVertexColors : 1;                               // 0x00A0(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowCPUAccess : 1;                                      // 0x00A0(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportUniformlyDistributedSampling : 1;                 // 0x00A0(0x0001) (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.PerPlatformInt
// 0x0004
struct FPerPlatformInt
{
	int                                                Default;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.PerPlatformBool
// 0x0001
struct FPerPlatformBool
{
	bool                                               Default;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionMaterialFilter
// 0x0008
struct FSkeletalMeshSamplingRegionMaterialFilter
{
	struct FName                                       MaterialName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionBoneFilter
// 0x000C
struct FSkeletalMeshSamplingRegionBoneFilter
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIncludeOrExclude : 1;                                    // 0x0008(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bApplyToChildren : 1;                                     // 0x0008(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshSamplingRegion
// 0x0030
struct FSkeletalMeshSamplingRegion
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LODIndex;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportUniformlyDistributedSampling : 1;                 // 0x000C(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	TArray<struct FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters;                                          // 0x0010(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSkeletalMeshSamplingRegionBoneFilter> BoneFilters;                                              // 0x0020(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.SkeletalMeshSamplingLODBuiltData
// 0x0048
struct FSkeletalMeshSamplingLODBuiltData
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionBuiltData
// 0x0078
struct FSkeletalMeshSamplingRegionBuiltData
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshSamplingBuiltData
// 0x0020
struct FSkeletalMeshSamplingBuiltData
{
	TArray<struct FSkeletalMeshSamplingLODBuiltData>   WholeMeshBuiltData;                                       // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData;                                          // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.SkeletalMeshSamplingInfo
// 0x0030
struct FSkeletalMeshSamplingInfo
{
	TArray<struct FSkeletalMeshSamplingRegion>         Regions;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FSkeletalMeshSamplingBuiltData              BuiltData;                                                // 0x0010(0x0020) (NativeAccessSpecifierPrivate)
};

// ScriptStruct Engine.SkinWeightProfileInfo
// 0x0010
struct FSkinWeightProfileInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerPlatformBool                            DefaultProfile;                                           // 0x0008(0x0001) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FPerPlatformInt                             DefaultProfileFromLODIndex;                               // 0x000C(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.BoneFilter
// 0x000C
struct FBoneFilter
{
	bool                                               bExcludeSelf;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       BoneName;                                                 // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.SkeletalMeshLODGroupSettings
// 0x0080
struct FSkeletalMeshLODGroupSettings
{
	struct FPerPlatformFloat                           ScreenSize;                                               // 0x0000(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              LODHysteresis;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EBoneFilterActionOption                            BoneFilterActionOption;                                   // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<struct FBoneFilter>                         BoneList;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               BonesToPrioritize;                                        // 0x0020(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              WeightOfPrioritization;                                   // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UAnimSequence*                               BakePose;                                                 // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSkeletalMeshOptimizationSettings           ReductionSettings;                                        // 0x0040(0x003C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.SoundClassProperties
// 0x002C
struct FSoundClassProperties
{
	float                                              Volume;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Pitch;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StereoBleed;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LFEBleed;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VoiceCenterChannelVolume;                                 // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RadioFilterVolume;                                        // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RadioFilterVolumeThreshold;                               // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bApplyEffects : 1;                                        // 0x001C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAlwaysPlay : 1;                                          // 0x001C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsUISound : 1;                                           // 0x001C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsMusic : 1;                                             // 0x001C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReverb : 1;                                              // 0x001C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              Default2DReverbSendAmount;                                // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCenterChannelOnly : 1;                                   // 0x0024(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bApplyAmbientVolumes : 1;                                 // 0x0024(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	TEnumAsByte<EAudioOutputTarget>                    OutputTarget;                                             // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.PassiveSoundMixModifier
// 0x0010
struct FPassiveSoundMixModifier
{
	class USoundMix*                                   SoundMix;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinVolumeThreshold;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxVolumeThreshold;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.SourceEffectChainEntry
// 0x0010
struct FSourceEffectChainEntry
{
	class USoundEffectSourcePreset*                    Preset;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bBypass : 1;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.SoundGroup
// 0x0020
struct FSoundGroup
{
	TEnumAsByte<ESoundGroup>                           SoundGroup;                                               // 0x0000(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     DisplayName;                                              // 0x0008(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAlwaysDecompressOnLoad : 1;                              // 0x0018(0x0001) (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              DecompressedDuration;                                     // 0x001C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.AudioEQEffect
// 0x0038
struct FAudioEQEffect
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              FrequencyCenter0;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Gain0;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Bandwidth0;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FrequencyCenter1;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Gain1;                                                    // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Bandwidth1;                                               // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FrequencyCenter2;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Gain2;                                                    // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Bandwidth2;                                               // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FrequencyCenter3;                                         // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Gain3;                                                    // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Bandwidth3;                                               // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.SoundClassAdjuster
// 0x0018
struct FSoundClassAdjuster
{
	class USoundClass*                                 SoundClassObject;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VolumeAdjuster;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PitchAdjuster;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bApplyToChildren : 1;                                     // 0x0010(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              VoiceCenterChannelVolumeAdjuster;                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.DialogueWaveParameter
// 0x0020
struct FDialogueWaveParameter
{
	class UDialogueWave*                               DialogueWave;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDialogueContext                            Context;                                                  // 0x0008(0x0018) (Edit, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.DistanceDatum
// 0x0014
struct FDistanceDatum
{
	float                                              FadeInDistanceStart;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeInDistanceEnd;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeOutDistanceStart;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeOutDistanceEnd;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Volume;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ModulatorContinuousParams
// 0x0020
struct FModulatorContinuousParams
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Default;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinInput;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxInput;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinOutput;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxOutput;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EModulationParamMode>                  ParamMode;                                                // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.SplineMeshParams
// 0x0058
struct FSplineMeshParams
{
	struct FVector                                     StartPos;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     StartTangent;                                             // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   StartScale;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartRoll;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   StartOffset;                                              // 0x0024(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     EndPos;                                                   // 0x002C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     EndTangent;                                               // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   EndScale;                                                 // 0x0044(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndRoll;                                                  // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   EndOffset;                                                // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.StaticMaterial
// 0x0030
struct FStaticMaterial
{
	class UMaterialInterface*                          MaterialInterface;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MaterialSlotName;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ImportedMaterialSlotName;                                 // 0x0010(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMeshUVChannelInfo                          UVChannelData;                                            // 0x0018(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.SubsurfaceProfileStruct
// 0x0050
struct FSubsurfaceProfileStruct
{
	float                                              ScatterRadius;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                SubsurfaceColor;                                          // 0x0004(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                FalloffColor;                                             // 0x0014(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                BoundaryColorBleed;                                       // 0x0024(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtinctionScale;                                          // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NormalScale;                                              // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScatteringDistribution;                                   // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IOR;                                                      // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Roughness0;                                               // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Roughness1;                                               // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LobeMix;                                                  // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.TimelineEventEntry
// 0x0014
struct FTimelineEventEntry
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0004(0x0010) UNKNOWN PROPERTY: DelegateProperty Engine.TimelineEventEntry.EventFunc
};

// ScriptStruct Engine.TimelineVectorTrack
// 0x0040
struct FTimelineVectorTrack
{
	class UCurveVector*                                VectorCurve;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) UNKNOWN PROPERTY: DelegateProperty Engine.TimelineVectorTrack.InterpFunc
	struct FName                                       TrackName;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       VectorPropertyName;                                       // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStructProperty*                             VectorProperty;                                           // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.TimelineFloatTrack
// 0x0040
struct FTimelineFloatTrack
{
	class UCurveFloat*                                 FloatCurve;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) UNKNOWN PROPERTY: DelegateProperty Engine.TimelineFloatTrack.InterpFunc
	struct FName                                       TrackName;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FloatPropertyName;                                        // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFloatProperty*                              FloatProperty;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.TimelineLinearColorTrack
// 0x0040
struct FTimelineLinearColorTrack
{
	class UCurveLinearColor*                           LinearColorCurve;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) UNKNOWN PROPERTY: DelegateProperty Engine.TimelineLinearColorTrack.InterpFunc
	struct FName                                       TrackName;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       LinearColorPropertyName;                                  // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStructProperty*                             LinearColorProperty;                                      // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.Timeline
// 0x0098
struct FTimeline
{
	TEnumAsByte<ETimelineLengthMode>                   LengthMode;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bLooping : 1;                                             // 0x0001(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bReversePlayback : 1;                                     // 0x0001(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bPlaying : 1;                                             // 0x0001(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              Length;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              PlayRate;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              Position;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FTimelineEventEntry>                 Events;                                                   // 0x0010(0x0010) (ZeroConstructor, RepSkip, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FTimelineVectorTrack>                InterpVectors;                                            // 0x0020(0x0010) (ZeroConstructor, RepSkip, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FTimelineFloatTrack>                 InterpFloats;                                             // 0x0030(0x0010) (ZeroConstructor, RepSkip, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FTimelineLinearColorTrack>           InterpLinearColors;                                       // 0x0040(0x0010) (ZeroConstructor, RepSkip, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0050(0x0010) UNKNOWN PROPERTY: DelegateProperty Engine.Timeline.TimelinePostUpdateFunc
	unsigned char                                      UnknownData02[0x10];                                      // 0x0060(0x0010) UNKNOWN PROPERTY: DelegateProperty Engine.Timeline.TimelineFinishedFunc
	TWeakObjectPtr<class UObject>                      PropertySetObject;                                        // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       DirectionPropertyName;                                    // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0080(0x0010) MISSED OFFSET
	class UProperty*                                   DirectionProperty;                                        // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct Engine.TTTrackBase
// 0x0018
struct FTTTrackBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FName                                       TrackName;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bIsExternalCurve;                                         // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.TTEventTrack
// 0x0010 (0x0028 - 0x0018)
struct FTTEventTrack : public FTTTrackBase
{
	struct FName                                       FunctionName;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 CurveKeys;                                                // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.TTPropertyTrack
// 0x0008 (0x0020 - 0x0018)
struct FTTPropertyTrack : public FTTTrackBase
{
	struct FName                                       PropertyName;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct Engine.TTFloatTrack
// 0x0008 (0x0028 - 0x0020)
struct FTTFloatTrack : public FTTPropertyTrack
{
	class UCurveFloat*                                 CurveFloat;                                               // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.TTVectorTrack
// 0x0008 (0x0028 - 0x0020)
struct FTTVectorTrack : public FTTPropertyTrack
{
	class UCurveVector*                                CurveVector;                                              // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.TTLinearColorTrack
// 0x0008 (0x0028 - 0x0020)
struct FTTLinearColorTrack : public FTTPropertyTrack
{
	class UCurveLinearColor*                           CurveLinearColor;                                         // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.TouchInputControl
// 0x0068
struct FTouchInputControl
{
	class UTexture2D*                                  Image1;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  Image2;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Center;                                                   // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   VisualSize;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ThumbSize;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   InteractionSize;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   InputScale;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        MainInputKey;                                             // 0x0038(0x0018) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        AltInputKey;                                              // 0x0050(0x0018) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.HardwareCursorReference
// 0x0010
struct FHardwareCursorReference
{
	struct FName                                       CursorPath;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   HotSpot;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.VirtualTextureLayer
// 0x0004
struct FVirtualTextureLayer
{
	TEnumAsByte<ETextureSourceFormat>                  Format;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCompressed;                                              // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasAlpha;                                                // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ETextureCompressionSettings>           CompressionSettings;                                      // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.VoiceSettings
// 0x0018
struct FVoiceSettings
{
	class USceneComponent*                             ComponentToAttachTo;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAttenuation*                           AttenuationSettings;                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*               SourceEffectChain;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.MaterialProxySettings
// 0x0074
struct FMaterialProxySettings
{
	struct FIntPoint                                   TextureSize;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GutterSpace;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MetallicConstant;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RoughnessConstant;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpecularConstant;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OpacityConstant;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OpacityMaskConstant;                                      // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AmbientOcclusionConstant;                                 // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ETextureSizingType>                    TextureSizingType;                                        // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EMaterialMergeType>                    MaterialMergeType;                                        // 0x0025(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EBlendMode>                            BlendMode;                                                // 0x0026(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowTwoSidedMaterial : 1;                               // 0x0027(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNormalMap : 1;                                           // 0x0027(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bMetallicMap : 1;                                         // 0x0027(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRoughnessMap : 1;                                        // 0x0027(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSpecularMap : 1;                                         // 0x0027(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEmissiveMap : 1;                                         // 0x0027(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOpacityMap : 1;                                          // 0x0027(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOpacityMaskMap : 1;                                      // 0x0027(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAmbientOcclusionMap : 1;                                 // 0x0028(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FIntPoint                                   DiffuseTextureSize;                                       // 0x002C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                                   NormalTextureSize;                                        // 0x0034(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                                   MetallicTextureSize;                                      // 0x003C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                                   RoughnessTextureSize;                                     // 0x0044(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                                   SpecularTextureSize;                                      // 0x004C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                                   EmissiveTextureSize;                                      // 0x0054(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                                   OpacityTextureSize;                                       // 0x005C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                                   OpacityMaskTextureSize;                                   // 0x0064(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                                   AmbientOcclusionTextureSize;                              // 0x006C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.MeshProxySettings
// 0x0094
struct FMeshProxySettings
{
	int                                                ScreenSize;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VoxelSize;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMaterialProxySettings                      MaterialSettings;                                         // 0x0008(0x0074) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              MergeDistance;                                            // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      UnresolvedGeometryColor;                                  // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxRayCastDist;                                           // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HardAngleThreshold;                                       // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LightMapResolution;                                       // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EProxyNormalComputationMethod>         NormalCalculationMethod;                                  // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ELandscapeCullingPrecision>            LandscapeCullingPrecision;                                // 0x0091(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCalculateCorrectLODModel : 1;                            // 0x0092(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideVoxelSize : 1;                                   // 0x0092(0x0001) (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideTransferDistance : 1;                            // 0x0092(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseHardAngleThreshold : 1;                               // 0x0092(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bComputeLightMapResolution : 1;                           // 0x0092(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRecalculateNormals : 1;                                  // 0x0092(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseLandscapeCulling : 1;                                 // 0x0092(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowAdjacency : 1;                                      // 0x0092(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowDistanceField : 1;                                  // 0x0093(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReuseMeshLightmapUVs : 1;                                // 0x0093(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCreateCollision : 1;                                     // 0x0093(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowVertexColors : 1;                                   // 0x0093(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGenerateLightmapUVs : 1;                                 // 0x0093(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.MeshMergingSettings
// 0x008C
struct FMeshMergingSettings
{
	int                                                TargetLightMapResolution;                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EUVOutput                                          OutputUVs[0x8];                                           // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMaterialProxySettings                      MaterialSettings;                                         // 0x000C(0x0074) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int                                                GutterSize;                                               // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SpecificLOD;                                              // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMeshLODSelectionType                              LODSelectionType;                                         // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGenerateLightMapUV : 1;                                  // 0x0089(0x0001) (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bComputedLightMapResolution : 1;                          // 0x0089(0x0001) (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPivotPointAtZero : 1;                                    // 0x0089(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bMergePhysicsData : 1;                                    // 0x0089(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bMergeMaterials : 1;                                      // 0x0089(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCreateMergedMaterial : 1;                                // 0x0089(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bBakeVertexDataToMesh : 1;                                // 0x0089(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseVertexDataForBakingMaterial : 1;                      // 0x0089(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseTextureBinning : 1;                                   // 0x008A(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReuseMeshLightmapUVs : 1;                                // 0x008A(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bMergeEquivalentMaterials : 1;                            // 0x008A(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseLandscapeCulling : 1;                                 // 0x008A(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIncludeImposters : 1;                                    // 0x008A(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowDistanceField : 1;                                  // 0x008A(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x008B(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.HierarchicalSimplification
// 0x0138
struct FHierarchicalSimplification
{
	float                                              TransitionScreenSize;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OverrideDrawDistance;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseOverrideDrawDistance : 1;                             // 0x0008(0x0001) (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowSpecificExclusion : 1;                              // 0x0008(0x0001) (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSimplifyMesh : 1;                                        // 0x0008(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOnlyGenerateClustersForVolumes : 1;                      // 0x0008(0x0001) (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReusePreviousLevelClusters : 1;                          // 0x0008(0x0001) (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FMeshProxySettings                          ProxySetting;                                             // 0x000C(0x0094) (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FMeshMergingSettings                        MergeSetting;                                             // 0x00A0(0x008C) (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                              DesiredBoundRadius;                                       // 0x012C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DesiredFillingPercentage;                                 // 0x0130(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinNumberOfActorsToBuild;                                 // 0x0134(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.VectorDistribution
// 0x0028
struct FVectorDistribution
{
	struct FDistributionLookupTable                    Table;                                                    // 0x0000(0x0028) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.Vector4Distribution
// 0x0028
struct FVector4Distribution
{
	struct FDistributionLookupTable                    Table;                                                    // 0x0000(0x0028) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.FloatRK4SpringInterpolator
// 0x0008
struct FFloatRK4SpringInterpolator
{
	float                                              StiffnessConstant;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DampeningRatio;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.VectorRK4SpringInterpolator
// 0x0008
struct FVectorRK4SpringInterpolator
{
	float                                              StiffnessConstant;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DampeningRatio;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ExpressionOutput
// 0x0008
struct FExpressionOutput
{
	struct FName                                       OutputName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.Vector2MaterialInput
// 0x0000 (0x000C - 0x000C)
struct FVector2MaterialInput : public FMaterialInput
{

};

// ScriptStruct Engine.BranchingPointNotifyPayload
// 0x0020
struct FBranchingPointNotifyPayload
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.PlatformInterfaceData
// 0x0030
struct FPlatformInterfaceData
{
	struct FName                                       DataName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EPlatformInterfaceDataType>            Type;                                                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                IntValue;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FloatValue;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     StringValue;                                              // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ObjectValue;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.PlatformInterfaceDelegateResult
// 0x0038
struct FPlatformInterfaceDelegateResult
{
	bool                                               bSuccessful;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FPlatformInterfaceData                      Data;                                                     // 0x0008(0x0030) (NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.DataTableRowHandle
// 0x0010
struct FDataTableRowHandle
{
	class UDataTable*                                  DataTable;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RowName;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.FastArraySerializerItem
// 0x000C
struct FFastArraySerializerItem
{
	int                                                ReplicationID;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReplicationKey;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MostRecentArrayReplicationKey;                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.CurveTableRowHandle
// 0x0010
struct FCurveTableRowHandle
{
	class UCurveTable*                                 CurveTable;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RowName;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.FastArraySerializer
// 0x0108
struct FFastArraySerializer
{
	unsigned char Pad0[0x50];
	int IDCounter;
	int ArrayReplicationKey;
	unsigned char Pad1[0x50];
	unsigned char Pad2[0x50];

	void MarkItemDirty(FFastArraySerializerItem& Item)
	{
		if (Item.ReplicationID == -1)
		{
			Item.ReplicationID = ++IDCounter;
			if (IDCounter == -1)
			{
				IDCounter++;
			}
		}

		Item.ReplicationKey++;
		MarkArrayDirty();
	}

	void MarkArrayDirty()
	{
		IncrementArrayReplicationKey();

		CachedNumItems = -1;
		CachedNumItemsToConsiderForWriting = -1;
	}

	void IncrementArrayReplicationKey()
	{
		ArrayReplicationKey++;
		if (ArrayReplicationKey == -1)
		{
			ArrayReplicationKey++;
		}
	}

	int CachedNumItems;
	int CachedNumItemsToConsiderForWriting;
	EFastArraySerializerDeltaFlags DeltaFlags;
};

// ScriptStruct Engine.AnimNode_Base
// 0x0010
struct FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.PoseLinkBase
// 0x0010
struct FPoseLinkBase
{
	int                                                LinkID;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.PoseLink
// 0x0000 (0x0010 - 0x0010)
struct FPoseLink : public FPoseLinkBase
{

};

// ScriptStruct Engine.AnimInstanceProxy
// 0x06D0
struct FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x6D0];                                     // 0x0000(0x06D0) MISSED OFFSET
};

// ScriptStruct Engine.KeyHandleLookupTable
// 0x0060
struct FKeyHandleLookupTable
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_CustomProperty
// 0x0048 (0x0058 - 0x0010)
struct FAnimNode_CustomProperty : public FAnimNode_Base
{
	TArray<struct FName>                               SourcePropertyNames;                                      // 0x0010(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FName>                               DestPropertyNames;                                        // 0x0020(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UObject*                                     TargetInstance;                                           // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UProperty*>                           SourceProperties;                                         // 0x0038(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UProperty*>                           DestProperties;                                           // 0x0048(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
};

// ScriptStruct Engine.ActorComponentDuplicatedObjectData
// 0x0010
struct FActorComponentDuplicatedObjectData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ActorComponentInstanceData
// 0x0058
struct FActorComponentInstanceData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UObject*                                     SourceComponentTemplate;                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EComponentCreationMethod                           SourceComponentCreationMethod;                            // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                SourceComponentTypeSerializedIndex;                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<unsigned char>                              SavedProperties;                                          // 0x0018(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FActorComponentDuplicatedObjectData> DuplicatedObjects;                                        // 0x0028(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UObject*>                             ReferencedObjects;                                        // 0x0038(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FName>                               ReferencedNames;                                          // 0x0048(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// ScriptStruct Engine.InputRange
// 0x0008
struct FInputRange
{
	float                                              min;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              max;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.InputScaleBiasClamp
// 0x0030
struct FInputScaleBiasClamp
{
	bool                                               bMapRange;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bClampResult;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInterpResult;                                            // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FInputRange                                 InRange;                                                  // 0x0004(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputRange                                 OutRange;                                                 // 0x000C(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Scale;                                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Bias;                                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ClampMin;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ClampMax;                                                 // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterpSpeedIncreasing;                                    // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterpSpeedDecreasing;                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.InputAlphaBoolBlend
// 0x0048
struct FInputAlphaBoolBlend
{
	float                                              BlendInTime;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendOutTime;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAlphaBlendOption                                  BlendOption;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInitialized;                                             // 0x0009(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	class UCurveFloat*                                 CustomCurve;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAlphaBlend                                 AlphaBlend;                                               // 0x0018(0x0030) (Transient, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.InputScaleBias
// 0x0008
struct FInputScaleBias
{
	float                                              Scale;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Bias;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ComponentSpacePoseLink
// 0x0000 (0x0010 - 0x0010)
struct FComponentSpacePoseLink : public FPoseLinkBase
{

};

// ScriptStruct Engine.CachedAnimStateData
// 0x001C
struct FCachedAnimStateData
{
	struct FName                                       StateMachineName;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       StateName;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0010(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.CachedAnimStateArray
// 0x0018
struct FCachedAnimStateArray
{
	TArray<struct FCachedAnimStateData>                States;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_AssetPlayerBase
// 0x0020 (0x0030 - 0x0010)
struct FAnimNode_AssetPlayerBase : public FAnimNode_Base
{
	int                                                GroupIndex;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EAnimGroupRole>                        GroupRole;                                                // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreForRelevancyTest;                                  // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	float                                              BlendWeight;                                              // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              InternalTimeAccumulator;                                  // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.PerBoneBlendWeight
// 0x0008
struct FPerBoneBlendWeight
{
	int                                                SourceIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendWeight;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.AnimNode_Root
// 0x0020 (0x0030 - 0x0010)
struct FAnimNode_Root : public FAnimNode_Base
{
	struct FPoseLink                                   Result;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       Name;                                                     // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Group;                                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.AnimCurveParam
// 0x000C
struct FAnimCurveParam
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.SceneComponentInstanceData
// 0x0050 (0x00A8 - 0x0058)
struct FSceneComponentInstanceData : public FActorComponentInstanceData
{
	TMap<class USceneComponent*, struct FTransform>    AttachedInstanceComponents;                               // 0x0058(0x0050) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.AnimationGroupReference
// 0x000C
struct FAnimationGroupReference
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EAnimGroupRole>                        GroupRole;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.AnimGroupInstance
// 0x0070
struct FAnimGroupInstance
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct Engine.AnimTickRecord
// 0x0048
struct FAnimTickRecord
{
	class UAnimationAsset*                             SourceAsset;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.BlendFilter
// 0x0078
struct FBlendFilter
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct Engine.BlendSampleData
// 0x0040
struct FBlendSampleData
{
	int                                                SampleDataIndex;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UAnimSequence*                               Animation;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TotalWeight;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PreviousTime;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SamplePlayRate;                                           // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0020(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.AnimationRecordingSettings
// 0x0010
struct FAnimationRecordingSettings
{
	bool                                               bRecordInWorldSpace;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemoveRootAnimation;                                     // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoSaveAsset;                                           // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	float                                              SampleRate;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Length;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ERichCurveInterpMode>                  InterpMode;                                               // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ERichCurveTangentMode>                 TangentMode;                                              // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.ComponentSpacePose
// 0x0020
struct FComponentSpacePose
{
	TArray<struct FTransform>                          Transforms;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               Names;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.LocalSpacePose
// 0x0020
struct FLocalSpacePose
{
	TArray<struct FTransform>                          Transforms;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               Names;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.NamedTransform
// 0x0040
struct FNamedTransform
{
	struct FTransform                                  Value;                                                    // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       Name;                                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.NamedColor
// 0x000C
struct FNamedColor
{
	struct FColor                                      Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Name;                                                     // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.NamedVector
// 0x0014
struct FNamedVector
{
	struct FVector                                     Value;                                                    // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Name;                                                     // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.NamedFloat
// 0x000C
struct FNamedFloat
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Name;                                                     // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.AnimParentNodeAssetOverride
// 0x0018
struct FAnimParentNodeAssetOverride
{
	class UAnimationAsset*                             NewAsset;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ParentNodeGuid;                                           // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.AnimBlueprintDebugData
// 0x0001
struct FAnimBlueprintDebugData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.AnimationFrameSnapshot
// 0x0001
struct FAnimationFrameSnapshot
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.StateMachineDebugData
// 0x00B0
struct FStateMachineDebugData
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0000(0x00B0) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionExtractionStep
// 0x0010
struct FRootMotionExtractionStep
{
	class UAnimSequence*                               AnimSequence;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartPosition;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndPosition;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.CompressedSegment
// 0x0010
struct FCompressedSegment
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.VectorCurve
// 0x0180 (0x0198 - 0x0018)
struct FVectorCurve : public FAnimCurveBase
{
	struct FRichCurve                                  FloatCurves[0x3];                                         // 0x0018(0x0080) (NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.TransformCurve
// 0x04C8 (0x04E0 - 0x0018)
struct FTransformCurve : public FAnimCurveBase
{
	struct FVectorCurve                                TranslationCurve;                                         // 0x0018(0x0198) (NativeAccessSpecifierPublic)
	struct FVectorCurve                                RotationCurve;                                            // 0x01B0(0x0198) (NativeAccessSpecifierPublic)
	struct FVectorCurve                                ScaleCurve;                                               // 0x0348(0x0198) (NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.SlotEvaluationPose
// 0x0040
struct FSlotEvaluationPose
{
	TEnumAsByte<EAdditiveAnimationType>                AdditiveType;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Weight;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.A2Pose
// 0x0010
struct FA2Pose
{
	TArray<struct FTransform>                          Bones;                                                    // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.A2CSPose
// 0x0018 (0x0028 - 0x0010)
struct FA2CSPose : public FA2Pose
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
	TArray<unsigned char>                              ComponentSpaceFlags;                                      // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
};

// ScriptStruct Engine.QueuedDrawDebugItem
// 0x0068
struct FQueuedDrawDebugItem
{
	TEnumAsByte<EDrawDebugItemType>                    ItemType;                                                 // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     StartLoc;                                                 // 0x0004(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     EndLoc;                                                   // 0x0010(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Center;                                                   // 0x001C(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                 // 0x0028(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Radius;                                                   // 0x0034(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Size;                                                     // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Segments;                                                 // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      Color;                                                    // 0x0040(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPersistentLines;                                         // 0x0044(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              LifeTime;                                                 // 0x0048(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Thickness;                                                // 0x004C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                  // 0x0050(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   TextScale;                                                // 0x0060(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.AnimMontageInstance
// 0x01A8
struct FAnimMontageInstance
{
	class UAnimMontage*                                Montage;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
	bool                                               bPlaying;                                                 // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              DefaultBlendTimeMultiplier;                               // 0x002C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0xB8];                                      // 0x0030(0x00B8) MISSED OFFSET
	TArray<int>                                        NextSections;                                             // 0x00E8(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<int>                                        PrevSections;                                             // 0x00F8(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0108(0x0010) MISSED OFFSET
	TArray<struct FAnimNotifyEvent>                    ActiveStateBranchingPoints;                               // 0x0118(0x0010) (ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	float                                              Position;                                                 // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              PlayRate;                                                 // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAlphaBlend                                 Blend;                                                    // 0x0130(0x0030) (Transient, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData04[0x20];                                      // 0x0160(0x0020) MISSED OFFSET
	int                                                DisableRootMotionCount;                                   // 0x0180(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData05[0x24];                                      // 0x0184(0x0024) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_ApplyMeshSpaceAdditive
// 0x0038 (0x0048 - 0x0010)
struct FAnimNode_ApplyMeshSpaceAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPoseLink                                   Additive;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                    // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0034(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int                                                LODThreshold;                                             // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SubInstance
// 0x0038 (0x0090 - 0x0058)
struct FAnimNode_SubInstance : public FAnimNode_CustomProperty
{
	TArray<struct FPoseLink>                           InputPoses;                                               // 0x0058(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               InputPoseNames;                                           // 0x0068(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	class UClass*                                      InstanceClass;                                            // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Tag;                                                      // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_Layer
// 0x0010 (0x00A0 - 0x0090)
struct FAnimNode_Layer : public FAnimNode_SubInstance
{
	class UClass*                                      Interface;                                                // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Layer;                                                    // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.AnimNode_SaveCachedPose
// 0x00A8 (0x00B8 - 0x0010)
struct FAnimNode_SaveCachedPose : public FAnimNode_Base
{
	struct FPoseLink                                   Pose;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       CachePoseName;                                            // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x90];                                      // 0x0028(0x0090) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SequencePlayer
// 0x0048 (0x0078 - 0x0030)
struct FAnimNode_SequencePlayer : public FAnimNode_AssetPlayerBase
{
	class UAnimSequenceBase*                           Sequence;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayRateBasis;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayRate;                                                 // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                        PlayRateScaleBiasClamp;                                   // 0x0040(0x0030) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              StartPosition;                                            // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLoopAnimation;                                           // 0x0074(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_StateMachine
// 0x00A0 (0x00B0 - 0x0010)
struct FAnimNode_StateMachine : public FAnimNode_Base
{
	int                                                StateMachineIndexInClass;                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxTransitionsPerFrame;                                   // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSkipFirstUpdateTransition;                               // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReinitializeOnBecomingRelevant;                          // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x96];                                      // 0x001A(0x0096) MISSED OFFSET
};

// ScriptStruct Engine.AnimationPotentialTransition
// 0x0030
struct FAnimationPotentialTransition
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.AnimationActiveTransitionEntry
// 0x00C8
struct FAnimationActiveTransitionEntry
{
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0000(0x00B8) MISSED OFFSET
	class UBlendProfile*                               BlendProfile;                                             // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SubInput
// 0x0060 (0x0070 - 0x0010)
struct FAnimNode_SubInput : public FAnimNode_Base
{
	struct FName                                       Name;                                                     // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Graph;                                                    // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPoseLink                                   InputPose;                                                // 0x0020(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
// 0x0048 (0x0058 - 0x0010)
struct FAnimNode_TransitionPoseEvaluator : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0010(0x0038) MISSED OFFSET
	int                                                FramesToCachePose;                                        // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TEnumAsByte<EEvaluatorDataSource>                  DataSource;                                               // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EEvaluatorMode>                        EvaluatorMode;                                            // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_TransitionResult
// 0x0018 (0x0028 - 0x0010)
struct FAnimNode_TransitionResult : public FAnimNode_Base
{
	bool                                               bCanEnterTransition;                                      // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0011(0x0017) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_UseCachedPose
// 0x0018 (0x0028 - 0x0010)
struct FAnimNode_UseCachedPose : public FAnimNode_Base
{
	struct FPoseLink                                   LinkToCachingNode;                                        // 0x0010(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       CachePoseName;                                            // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
// 0x0010 (0x0020 - 0x0010)
struct FAnimNode_ConvertLocalToComponentSpace : public FAnimNode_Base
{
	struct FPoseLink                                   LocalPose;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
// 0x0010 (0x0020 - 0x0010)
struct FAnimNode_ConvertComponentToLocalSpace : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     ComponentPose;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.CompressedTrack
// 0x0038
struct FCompressedTrack
{
	TArray<unsigned char>                              ByteStream;                                               // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      Times;                                                    // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              Mins[0x3];                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Ranges[0x3];                                              // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.CurveTrack
// 0x0018
struct FCurveTrack
{
	struct FName                                       CurveName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      CurveWeights;                                             // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ScaleTrack
// 0x0020
struct FScaleTrack
{
	TArray<struct FVector>                             ScaleKeys;                                                // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      Times;                                                    // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.RotationTrack
// 0x0020
struct FRotationTrack
{
	TArray<struct FQuat>                               RotKeys;                                                  // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      Times;                                                    // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.TranslationTrack
// 0x0020
struct FTranslationTrack
{
	TArray<struct FVector>                             PosKeys;                                                  // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      Times;                                                    // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.RawAnimSequenceTrack
// 0x0030
struct FRawAnimSequenceTrack
{
	TArray<struct FVector>                             PosKeys;                                                  // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FQuat>                               RotKeys;                                                  // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             ScaleKeys;                                                // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.AnimSequenceTrackContainer
// 0x0020
struct FAnimSequenceTrackContainer
{
	TArray<struct FRawAnimSequenceTrack>               AnimationTracks;                                          // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               TrackNames;                                               // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.AnimSingleNodeInstanceProxy
// 0x0150 (0x0820 - 0x06D0)
struct FAnimSingleNodeInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x150];                                     // 0x06D0(0x0150) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SingleNode
// 0x0020 (0x0030 - 0x0010)
struct FAnimNode_SingleNode : public FAnimNode_Base
{
	struct FPoseLink                                   SourcePose;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.AnimationTransitionRule
// 0x0010
struct FAnimationTransitionRule
{
	struct FName                                       RuleToExecute;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TransitionReturnVal;                                      // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                TransitionIndex;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.AnimationState
// 0x0020 (0x0028 - 0x0008)
struct FAnimationState : public FAnimationStateBase
{
	TArray<struct FAnimationTransitionRule>            Transitions;                                              // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                StateRootNodeIndex;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartNotify;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndNotify;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FullyBlendedNotify;                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.AnimNotifyTrack
// 0x0038
struct FAnimNotifyTrack
{
	struct FName                                       TrackName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                TrackColor;                                               // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0018(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.PerBoneBlendWeights
// 0x0010
struct FPerBoneBlendWeights
{
	TArray<struct FPerBoneBlendWeight>                 BoneBlendWeights;                                         // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.AssetImportInfo
// 0x0001
struct FAssetImportInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.AtmospherePrecomputeInstanceData
// 0x01E0 (0x0288 - 0x00A8)
struct FAtmospherePrecomputeInstanceData : public FSceneComponentInstanceData
{
	unsigned char                                      UnknownData00[0x1E0];                                     // 0x00A8(0x01E0) MISSED OFFSET
};

// ScriptStruct Engine.NavAvoidanceData
// 0x003C
struct FNavAvoidanceData
{
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0000(0x003C) MISSED OFFSET
};

// ScriptStruct Engine.GridBlendSample
// 0x001C
struct FGridBlendSample
{
	struct FEditorElement                              GridElement;                                              // 0x0000(0x0018) (NoDestructor, NativeAccessSpecifierPublic)
	float                                              BlendWeight;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.BPEditorBookmarkNode
// 0x0038
struct FBPEditorBookmarkNode
{
	struct FGuid                                       NodeGuid;                                                 // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ParentGuid;                                               // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       DisplayName;                                              // 0x0020(0x0018) (NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.EditedDocumentInfo
// 0x0030
struct FEditedDocumentInfo
{
	struct FSoftObjectPath                             EditedObjectPath;                                         // 0x0000(0x0018) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   SavedViewOffset;                                          // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SavedZoomAmount;                                          // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UObject*                                     EditedObject;                                             // 0x0028(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct Engine.BPInterfaceDescription
// 0x0018
struct FBPInterfaceDescription
{
	class UClass*                                      Interface;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UEdGraph*>                            Graphs;                                                   // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.BPVariableDescription
// 0x00D0
struct FBPVariableDescription
{
	struct FName                                       VarName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       VarGuid;                                                  // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEdGraphPinType                             VarType;                                                  // 0x0018(0x0058) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     FriendlyName;                                             // 0x0070(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Category;                                                 // 0x0080(0x0018) (Edit, NativeAccessSpecifierPublic)
	uint64_t                                           PropertyFlags;                                            // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RepNotifyFunc;                                            // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ELifetimeCondition>                    ReplicationCondition;                                     // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	TArray<struct FBPVariableMetaDataEntry>            MetaDataArray;                                            // 0x00B0(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     DefaultValue;                                             // 0x00C0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.BlueprintMacroCosmeticInfo
// 0x0001
struct FBlueprintMacroCosmeticInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.CompilerNativizationOptions
// 0x0080
struct FCompilerNativizationOptions
{
	struct FName                                       PlatformName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ServerOnlyPlatform;                                       // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ClientOnlyPlatform;                                       // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bExcludeMonolithicHeaders;                                // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5];                                       // 0x000B(0x0005) MISSED OFFSET
	TArray<struct FName>                               ExcludedModules;                                          // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0020(0x0050) UNKNOWN PROPERTY: SetProperty Engine.CompilerNativizationOptions.ExcludedAssets
	TArray<struct FString>                             ExcludedFolderPaths;                                      // 0x0070(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.EventGraphFastCallPair
// 0x0010
struct FEventGraphFastCallPair
{
	class UFunction*                                   FunctionToPatch;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EventGraphCallOffset;                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintDebugData
// 0x0001
struct FBlueprintDebugData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.PointerToUberGraphFrame
// 0x0008
struct FPointerToUberGraphFrame
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.DebuggingInfoForSingleFunction
// 0x0190
struct FDebuggingInfoForSingleFunction
{
	unsigned char                                      UnknownData00[0x190];                                     // 0x0000(0x0190) MISSED OFFSET
};

// ScriptStruct Engine.NodeToCodeAssociation
// 0x0014
struct FNodeToCodeAssociation
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.AnimCurveType
// 0x0002
struct FAnimCurveType
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.BookmarkBaseJumpToSettings
// 0x0001
struct FBookmarkBaseJumpToSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.BookmarkJumpToSettings
// 0x0000 (0x0001 - 0x0001)
struct FBookmarkJumpToSettings : public FBookmarkBaseJumpToSettings
{

};

// ScriptStruct Engine.Bookmark2DJumpToSettings
// 0x0001
struct FBookmark2DJumpToSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.CachedAnimTransitionData
// 0x0024
struct FCachedAnimTransitionData
{
	struct FName                                       StateMachineName;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FromStateName;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ToStateName;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0018(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.CachedAnimRelevancyData
// 0x001C
struct FCachedAnimRelevancyData
{
	struct FName                                       StateMachineName;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       StateName;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0010(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.CachedAnimAssetPlayerData
// 0x0018
struct FCachedAnimAssetPlayerData
{
	struct FName                                       StateMachineName;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       StateName;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.DummySpacerCameraTypes
// 0x0001
struct FDummySpacerCameraTypes
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.CanvasIcon
// 0x0018
struct FCanvasIcon
{
	class UTexture*                                    Texture;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              U;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              V;                                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UL;                                                       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VL;                                                       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.WrappedStringElement
// 0x0018
struct FWrappedStringElement
{
	struct FString                                     Value;                                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   LineExtent;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.TextSizingParameters
// 0x0028
struct FTextSizingParameters
{
	float                                              DrawX;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DrawY;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DrawXL;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DrawYL;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Scaling;                                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFont*                                       DrawFont;                                                 // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   SpacingAdjust;                                            // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ChildActorAttachedActorInfo
// 0x0040
struct FChildActorAttachedActorInfo
{
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SocketName;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  RelativeTransform;                                        // 0x0010(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ChildActorComponentInstanceData
// 0x0028 (0x00D0 - 0x00A8)
struct FChildActorComponentInstanceData : public FSceneComponentInstanceData
{
	struct FName                                       ChildActorName;                                           // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FChildActorAttachedActorInfo>        AttachedActors;                                           // 0x00B0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.AutoCompleteNode
// 0x0028
struct FAutoCompleteNode
{
	int                                                IndexChar;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<int>                                        AutoCompleteListIndices;                                  // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.RuntimeCurveLinearColor
// 0x0208
struct FRuntimeCurveLinearColor
{
	struct FRichCurve                                  ColorCurves[0x4];                                         // 0x0000(0x0080) (NativeAccessSpecifierPublic)
	class UCurveLinearColor*                           ExternalCurve;                                            // 0x0200(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.DataTableCategoryHandle
// 0x0018
struct FDataTableCategoryHandle
{
	class UDataTable*                                  DataTable;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ColumnName;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RowContents;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.LevelNameAndTime
// 0x0018
struct FLevelNameAndTime
{
	struct FString                                     LevelName;                                                // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           LevelChangeTimeInMS;                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.GraphReference
// 0x0020
struct FGraphReference
{
	class UEdGraph*                                    MacroGraph;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBlueprint*                                  GraphBlueprint;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                       GraphGuid;                                                // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// ScriptStruct Engine.EdGraphPinReference
// 0x0018
struct FEdGraphPinReference
{
	TWeakObjectPtr<class UEdGraphNode>                 OwningNode;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                       PinId;                                                    // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct Engine.EdGraphSchemaAction
// 0x0100
struct FEdGraphSchemaAction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FText                                       MenuDescription;                                          // 0x0008(0x0018) (NativeAccessSpecifierPrivate)
	struct FText                                       TooltipDescription;                                       // 0x0020(0x0018) (NativeAccessSpecifierPrivate)
	struct FText                                       Category;                                                 // 0x0038(0x0018) (NativeAccessSpecifierPrivate)
	struct FText                                       Keywords;                                                 // 0x0050(0x0018) (NativeAccessSpecifierPrivate)
	int                                                Grouping;                                                 // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SectionId;                                                // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             MenuDescriptionArray;                                     // 0x0070(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             FullSearchTitlesArray;                                    // 0x0080(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             FullSearchKeywordsArray;                                  // 0x0090(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             FullSearchCategoryArray;                                  // 0x00A0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             LocalizedMenuDescriptionArray;                            // 0x00B0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             LocalizedFullSearchTitlesArray;                           // 0x00C0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             LocalizedFullSearchKeywordsArray;                         // 0x00D0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             LocalizedFullSearchCategoryArray;                         // 0x00E0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     SearchText;                                               // 0x00F0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.EdGraphSchemaAction_NewNode
// 0x0008 (0x0108 - 0x0100)
struct FEdGraphSchemaAction_NewNode : public FEdGraphSchemaAction
{
	class UEdGraphNode*                                NodeTemplate;                                             // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ScreenMessageString
// 0x0030
struct FScreenMessageString
{
	uint64_t                                           Key;                                                      // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ScreenMessage;                                            // 0x0008(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      DisplayColor;                                             // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeToDisplay;                                            // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CurrentTimeDisplayed;                                     // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   TextScale;                                                // 0x0024(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.URL
// 0x0068
struct FURL
{
	struct FString                                     Protocol;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Host;                                                     // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Valid;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Map;                                                      // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RedirectUrl;                                              // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Op;                                                       // 0x0048(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     Portal;                                                   // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.FullyLoadedPackagesInfo
// 0x0038
struct FFullyLoadedPackagesInfo
{
	TEnumAsByte<EFullyLoadPackageType>                 FullyLoadType;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     Tag;                                                      // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               PackagesToLoad;                                           // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UObject*>                             LoadedObjects;                                            // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.LevelStreamingStatus
// 0x0010
struct FLevelStreamingStatus
{
	struct FName                                       PackageName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShouldBeLoaded : 1;                                      // 0x0008(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShouldBeVisible : 1;                                     // 0x0008(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	uint32_t                                           LODIndex;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.NamedNetDriver
// 0x0010
struct FNamedNetDriver
{
	class UNetDriver*                                  NetDriver;                                                // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.WorldContext
// 0x0280
struct FWorldContext
{
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0000(0x00D0) MISSED OFFSET
	struct FURL                                        LastURL;                                                  // 0x00D0(0x0068) (NativeAccessSpecifierPublic)
	struct FURL                                        LastRemoteURL;                                            // 0x0138(0x0068) (NativeAccessSpecifierPublic)
	class UPendingNetGame*                             PendingNetGame;                                           // 0x01A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFullyLoadedPackagesInfo>            PackagesToFullyLoad;                                      // 0x01A8(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x01B8(0x0010) MISSED OFFSET
	TArray<class ULevel*>                              LoadedLevelsForPendingMapChange;                          // 0x01C8(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x18];                                      // 0x01D8(0x0018) MISSED OFFSET
	TArray<class UObjectReferencer*>                   ObjectReferencers;                                        // 0x01F0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FLevelStreamingStatus>               PendingLevelStreamingStatusUpdates;                       // 0x0200(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	class UGameViewportClient*                         GameViewport;                                             // 0x0210(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameInstance*                               OwningGameInstance;                                       // 0x0218(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNamedNetDriver>                     ActiveNetDrivers;                                         // 0x0220(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x50];                                      // 0x0230(0x0050) MISSED OFFSET
};

// ScriptStruct Engine.ExposureSettings
// 0x0008
struct FExposureSettings
{
	float                                              FixedEV100;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFixed;                                                   // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.TickPrerequisite
// 0x0010
struct FTickPrerequisite
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.DepthFieldGlowInfo
// 0x0024
struct FDepthFieldGlowInfo
{
	unsigned char                                      bEnableGlow : 1;                                          // 0x0000(0x0001) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FLinearColor                                GlowColor;                                                // 0x0004(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   GlowOuterRadius;                                          // 0x0014(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   GlowInnerRadius;                                          // 0x001C(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.FontRenderInfo
// 0x0028
struct FFontRenderInfo
{
	unsigned char                                      bClipText : 1;                                            // 0x0000(0x0001) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableShadow : 1;                                        // 0x0000(0x0001) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FDepthFieldGlowInfo                         GlowInfo;                                                 // 0x0004(0x0024) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ComponentReference
// 0x0018
struct FComponentReference
{
	class AActor*                                      OtherActor;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ComponentProperty;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.DamageEvent
// 0x0010
struct FEngine_FDamageEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UClass*                                      DamageTypeClass;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.RadialDamageParams
// 0x0014
struct FRadialDamageParams
{
	float                                              BaseDamage;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumDamage;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InnerRadius;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OuterRadius;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageFalloff;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.RadialDamageEvent
// 0x0030 (0x0040 - 0x0010)
struct FRadialDamageEvent : public FEngine_FDamageEvent
{
	struct FRadialDamageParams                         Params;                                                   // 0x0010(0x0014) (NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Origin;                                                   // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHitResult>                          ComponentHits;                                            // 0x0030(0x0010) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.PointDamageEvent
// 0x0098 (0x00A8 - 0x0010)
struct FPointDamageEvent : public FEngine_FDamageEvent
{
	float                                              Damage;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   ShotDirection;                                            // 0x0014(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	struct FHitResult                                  HitInfo;                                                  // 0x0020(0x0088) (IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.MeshBuildSettings
// 0x0030
struct FMeshBuildSettings
{
	unsigned char                                      bUseMikkTSpace : 1;                                       // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRecomputeNormals : 1;                                    // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRecomputeTangents : 1;                                   // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRemoveDegenerates : 1;                                   // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bBuildAdjacencyBuffer : 1;                                // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bBuildReversedIndexBuffer : 1;                            // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseHighPrecisionTangentBasis : 1;                        // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseFullPrecisionUVs : 1;                                 // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGenerateLightmapUVs : 1;                                 // 0x0001(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGenerateDistanceFieldAsIfTwoSided : 1;                   // 0x0001(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                MinLightmapResolution;                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SrcLightmapIndex;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DstLightmapIndex;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BuildScale;                                               // 0x0010(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     BuildScale3D;                                             // 0x0014(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceFieldResolutionScale;                             // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UStaticMesh*                                 DistanceFieldReplacementMesh;                             // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.POV
// 0x001C
struct FPOV
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              FOV;                                                      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.AnimUpdateRateParameters
// 0x0088
struct FAnimUpdateRateParameters
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
	EUpdateRateShiftBucket                             ShiftBucket;                                              // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bInterpolateSkippedFrames : 1;                            // 0x0002(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShouldUseLodMap : 1;                                     // 0x0002(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShouldUseMinLod : 1;                                     // 0x0002(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSkipUpdate : 1;                                          // 0x0002(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSkipEvaluation : 1;                                      // 0x0002(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	int                                                UpdateRate;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EvaluationRate;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TickedPoseOffestTime;                                     // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AdditionalTime;                                           // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	int                                                BaseNonRenderedUpdateRate;                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxEvalRateForInterpolation;                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      BaseVisibleDistanceFactorThesholds;                       // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<int, int>                                     LODToFrameSkipMap;                                        // 0x0030(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                SkippedUpdateFrames;                                      // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkippedEvalFrames;                                        // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.AnimSlotDesc
// 0x000C
struct FAnimSlotDesc
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumChannels;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.AnimSlotInfo
// 0x0018
struct FAnimSlotInfo
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      ChannelWeights;                                           // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.MTDResult
// 0x0010
struct FMTDResult
{
	struct FVector                                     Direction;                                                // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Distance;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.OverlapResult
// 0x0018
struct FOverlapResult
{
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UPrimitiveComponent>          Component;                                                // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0010(0x0004) MISSED OFFSET
	unsigned char                                      bBlockingHit : 1;                                         // 0x0014(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.SwarmDebugOptions
// 0x0004
struct FSwarmDebugOptions
{
	unsigned char                                      bDistributionEnabled : 1;                                 // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bForceContentExport : 1;                                  // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bInitialized : 1;                                         // 0x0000(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LightmassDebugOptions
// 0x0010
struct FLightmassDebugOptions
{
	unsigned char                                      bDebugMode : 1;                                           // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bStatsEnabled : 1;                                        // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGatherBSPSurfacesAcrossComponents : 1;                   // 0x0000(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              CoplanarTolerance;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseImmediateImport : 1;                                  // 0x0008(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bImmediateProcessMappings : 1;                            // 0x0008(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSortMappings : 1;                                        // 0x0008(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDumpBinaryFiles : 1;                                     // 0x0008(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDebugMaterials : 1;                                      // 0x0008(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPadMappings : 1;                                         // 0x0008(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDebugPaddings : 1;                                       // 0x0008(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOnlyCalcDebugTexelMappings : 1;                          // 0x0008(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseRandomColors : 1;                                     // 0x0009(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bColorBordersGreen : 1;                                   // 0x0009(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bColorByExecutionTime : 1;                                // 0x0009(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              ExecutionTimeDivisor;                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.BasedPosition
// 0x0038
struct FBasedPosition
{
	class AActor*                                      Base;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Position;                                                 // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CachedBaseLocation;                                       // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    CachedBaseRotation;                                       // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     CachedTransPosition;                                      // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.FractureEffect
// 0x0010
struct FFractureEffect
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  Sound;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.RigidBodyContactInfo
// 0x0030
struct FRigidBodyContactInfo
{
	struct FVector                                     ContactPosition;                                          // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ContactNormal;                                            // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ContactPenetration;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           PhysMaterial[0x2];                                        // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.CollisionImpactData
// 0x0028
struct FCollisionImpactData
{
	TArray<struct FRigidBodyContactInfo>               ContactInfos;                                             // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                                     TotalNormalImpulse;                                       // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TotalFrictionImpulse;                                     // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.RigidBodyState
// 0x0040
struct FRigidBodyState
{
	struct FVector_NetQuantize100                      Position;                                                 // 0x0000(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FQuat                                       Quaternion;                                               // 0x0010(0x0010) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                      LinVel;                                                   // 0x0020(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                      AngVel;                                                   // 0x002C(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      Flags;                                                    // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.ActiveHapticFeedbackEffect
// 0x0018
struct FActiveHapticFeedbackEffect
{
	class UHapticFeedbackEffect_Base*                  HapticEffect;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ClusterNode
// 0x0040
struct FClusterNode
{
	struct FVector                                     BoundMin;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FirstChild;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     BoundMax;                                                 // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LastChild;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FirstInstance;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LastInstance;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     MinInstanceScale;                                         // 0x0028(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     MaxInstanceScale;                                         // 0x0034(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ClusterNode_DEPRECATED
// 0x0028
struct FClusterNode_DEPRECATED
{
	struct FVector                                     BoundMin;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FirstChild;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     BoundMax;                                                 // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LastChild;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FirstInstance;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LastInstance;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.InstancedStaticMeshLightMapInstanceData
// 0x0040
struct FInstancedStaticMeshLightMapInstanceData
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                               MapBuildDataIds;                                          // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.InstancedStaticMeshComponentInstanceData
// 0x0088 (0x0130 - 0x00A8)
struct FInstancedStaticMeshComponentInstanceData : public FSceneComponentInstanceData
{
	class UStaticMesh*                                 StaticMesh;                                               // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInstancedStaticMeshLightMapInstanceData    CachedStaticLighting;                                     // 0x00B0(0x0040) (NativeAccessSpecifierPublic)
	TArray<struct FInstancedStaticMeshInstanceData>    PerInstanceSMData;                                        // 0x00F0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0100(0x0020) MISSED OFFSET
	int                                                InstancingRandomSeed;                                     // 0x0120(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0124(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.IntegralKey
// 0x0008
struct FIntegralKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Value;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.IntegralCurve
// 0x0018 (0x0080 - 0x0068)
struct FIntegralCurve : public FIndexedCurve
{
	TArray<struct FIntegralKey>                        Keys;                                                     // 0x0068(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	int                                                DefaultValue;                                             // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bUseDefaultValueBeforeFirstKey;                           // 0x007C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.InterpEdSelKey
// 0x0018
struct FInterpEdSelKey
{
	class UInterpGroup*                                Group;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterpTrack*                                Track;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                KeyIndex;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UnsnappedPosition;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.CameraPreviewInfo
// 0x0030
struct FCameraPreviewInfo
{
	class UClass*                                      PawnClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               AnimSeq;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                 // 0x0010(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class APawn*                                       PawnInst;                                                 // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.SubTrackGroup
// 0x0028
struct FSubTrackGroup
{
	struct FString                                     GroupName;                                                // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        TrackIndices;                                             // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      bIsCollapsed : 1;                                         // 0x0020(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsSelected : 1;                                          // 0x0020(0x0001) (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.SupportedSubTrackInfo
// 0x0020
struct FSupportedSubTrackInfo
{
	class UClass*                                      SupportedClass;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SubTrackName;                                             // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GroupIndex;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.LatentActionManager
// 0x0060
struct FLatentActionManager
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Engine.LevelSimplificationDetails
// 0x0104
struct FLevelSimplificationDetails
{
	bool                                               bCreatePackagePerAsset;                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              DetailsPercentage;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMaterialProxySettings                      StaticMeshMaterialSettings;                               // 0x0008(0x0074) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bOverrideLandscapeExportLOD;                              // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	int                                                LandscapeExportLOD;                                       // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMaterialProxySettings                      LandscapeMaterialSettings;                                // 0x0084(0x0074) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bBakeFoliageToLandscape;                                  // 0x00F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBakeGrassToLandscape;                                    // 0x00F9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGenerateMeshNormalMap;                                   // 0x00FA(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGenerateMeshMetallicMap;                                 // 0x00FB(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGenerateMeshRoughnessMap;                                // 0x00FC(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGenerateMeshSpecularMap;                                 // 0x00FD(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGenerateLandscapeNormalMap;                              // 0x00FE(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGenerateLandscapeMetallicMap;                            // 0x00FF(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGenerateLandscapeRoughnessMap;                           // 0x0100(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGenerateLandscapeSpecularMap;                            // 0x0101(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0102(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.StreamableTextureInstance
// 0x0028
struct FStreamableTextureInstance
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.DynamicTextureInstance
// 0x0010 (0x0038 - 0x0028)
struct FDynamicTextureInstance : public FStreamableTextureInstance
{
	class UTexture2D*                                  Texture;                                                  // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAttached;                                                // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              OriginalRadius;                                           // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.PrecomputedLightInstanceData
// 0x0058 (0x0100 - 0x00A8)
struct FPrecomputedLightInstanceData : public FSceneComponentInstanceData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x00B0(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FGuid                                       LightGuid;                                                // 0x00E0(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PreviewShadowMapChannel;                                  // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00F4(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.BatchedPoint
// 0x0028
struct FBatchedPoint
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                    // 0x000C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PointSize;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RemainingLifeTime;                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      DepthPriority;                                            // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.BatchedLine
// 0x0034
struct FBatchedLine
{
	struct FVector                                     Start;                                                    // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     End;                                                      // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                    // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Thickness;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RemainingLifeTime;                                        // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      DepthPriority;                                            // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ClientReceiveData
// 0x0040
struct FClientReceiveData
{
	class APlayerController*                           LocalPC;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MessageType;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MessageIndex;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     MessageString;                                            // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerState*                                RelatedPlayerState_1_2;                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerState*                                RelatedPlayerState_2_3;                                   // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     OptionalObject;                                           // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ParameterGroupData
// 0x0018
struct FParameterGroupData
{
	struct FString                                     GroupName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GroupSortPriority;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.FunctionExpressionOutput
// 0x0020
struct FFunctionExpressionOutput
{
	class UMaterialExpressionFunctionOutput*           ExpressionOutput;                                         // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ExpressionOutputId;                                       // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExpressionOutput                           Output;                                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.FunctionExpressionInput
// 0x0030
struct FFunctionExpressionInput
{
	class UMaterialExpressionFunctionInput*            ExpressionInput;                                          // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ExpressionInputId;                                        // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExpressionInput                            Input;                                                    // 0x0018(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0024(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.ScalarParameterAtlasInstanceData
// 0x0058
struct FScalarParameterAtlasInstanceData
{
	bool                                               bIsUsedAsAtlasPosition;                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0001(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Engine.ScalarParameterAtlasInstanceData.Curve
	unsigned char                                      UnknownData02[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Engine.ScalarParameterAtlasInstanceData.Atlas
};

// ScriptStruct Engine.MemberReference
// 0x0038
struct FMemberReference
{
	class UObject*                                     MemberParent;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     MemberScope;                                              // 0x0008(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       MemberName;                                               // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                       MemberGuid;                                               // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bSelfContext;                                             // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bWasDeprecated;                                           // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct Engine.MeshInstancingSettings
// 0x0010
struct FMeshInstancingSettings
{
	class UClass*                                      ActorClassToUse;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InstanceReplacementThreshold;                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMeshInstancingReplacementMethod                   MeshReplacementMethod;                                    // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSkipMeshesWithVertexColors;                              // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseHLODVolumes;                                          // 0x000E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.MeshReductionSettings
// 0x0024
struct FMeshReductionSettings
{
	float                                              PercentTriangles;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PercentVertices;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDeviation;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PixelError;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WeldingThreshold;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HardAngleThreshold;                                       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BaseLODModel;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EMeshFeatureImportance>                SilhouetteImportance;                                     // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EMeshFeatureImportance>                TextureImportance;                                        // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EMeshFeatureImportance>                ShadingImportance;                                        // 0x001E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRecalculateNormals : 1;                                  // 0x001F(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGenerateUniqueLightmapUVs : 1;                           // 0x001F(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bKeepSymmetry : 1;                                        // 0x001F(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bVisibilityAided : 1;                                     // 0x001F(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCullOccluded : 1;                                        // 0x001F(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EStaticMeshReductionTerimationCriterion            TerminationCriterion;                                     // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EMeshFeatureImportance>                VisibilityAggressiveness;                                 // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EMeshFeatureImportance>                VertexColorImportance;                                    // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0023(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.NameCurveKey
// 0x000C
struct FNameCurveKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Value;                                                    // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.NameCurve
// 0x0010 (0x0078 - 0x0068)
struct FNameCurve : public FIndexedCurve
{
	TArray<struct FNameCurveKey>                       Keys;                                                     // 0x0068(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.NavDataConfig
// 0x0048 (0x0078 - 0x0030)
struct FNavDataConfig : public FNavAgentProperties
{
	struct FName                                       Name;                                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      Color;                                                    // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DefaultQueryExtent;                                       // 0x003C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      NavigationDataClass;                                      // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0050(0x0028) UNKNOWN PROPERTY: SoftClassProperty Engine.NavDataConfig.NavDataClass
};

// ScriptStruct Engine.PacketSimulationSettings
// 0x0030
struct FPacketSimulationSettings
{
	int                                                PktLoss;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PktLossMaxSize;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PktLossMinSize;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PktOrder;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PktDup;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PktLag;                                                   // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PktLagVariance;                                           // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PktLagMin;                                                // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PktLagMax;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PktIncomingLagMin;                                        // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PktIncomingLagMax;                                        // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PktIncomingLoss;                                          // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ParticleCurvePair
// 0x0018
struct FParticleCurvePair
{
	struct FString                                     CurveName;                                                // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     CurveObject;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.BeamTargetData
// 0x000C
struct FBeamTargetData
{
	struct FName                                       TargetName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TargetPercentage;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ParticleSystemWorldManagerTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FParticleSystemWorldManagerTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.ParticleSystemReplayFrame
// 0x0010
struct FParticleSystemReplayFrame
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ParticleEmitterReplayFrame
// 0x0010
struct FParticleEmitterReplayFrame
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.PlayerMuteList
// 0x0038
struct FPlayerMuteList
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
	bool                                               bHasVoiceHandshakeCompleted;                              // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                VoiceChannelIdx;                                          // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.PreviewAttachedObjectPair
// 0x0038
struct FPreviewAttachedObjectPair
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Engine.PreviewAttachedObjectPair.AttachedObject
	class UObject*                                     Object;                                                   // 0x0028(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       AttachedTo;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.PreviewAssetAttachContainer
// 0x0010
struct FPreviewAssetAttachContainer
{
	TArray<struct FPreviewAttachedObjectPair>          AttachedObjects;                                          // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
};

// ScriptStruct Engine.PrimitiveComponentInstanceData
// 0x0048 (0x00F0 - 0x00A8)
struct FPrimitiveComponentInstanceData : public FSceneComponentInstanceData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
	struct FTransform                                  ComponentTransform;                                       // 0x00B0(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	int                                                VisibilityId;                                             // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	class UPrimitiveComponent*                         LODParent;                                                // 0x00E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct Engine.SpriteCategoryInfo
// 0x0038
struct FSpriteCategoryInfo
{
	struct FName                                       Category;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (NativeAccessSpecifierPublic)
	struct FText                                       Description;                                              // 0x0020(0x0018) (NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.CompressedRichCurve
// 0x0018
struct FCompressedRichCurve
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSourceStatus
// 0x0001
struct FRootMotionSourceStatus
{
	unsigned char                                      Flags;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.RootMotionFinishVelocitySettings
// 0x0014
struct FRootMotionFinishVelocitySettings
{
	ERootMotionFinishVelocityMode                      Mode;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     SetVelocity;                                              // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ClampVelocity;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.RootMotionSource
// 0x00A0
struct FRootMotionSource
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	uint16_t                                           Priority;                                                 // 0x0010(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           LocalID;                                                  // 0x0012(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERootMotionAccumulateMode                          AccumulateMode;                                           // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FName                                       InstanceName;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartTime;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CurrentTime;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PreviousTime;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRootMotionSourceStatus                     Status;                                                   // 0x0030(0x0001) (NoDestructor, NativeAccessSpecifierPublic)
	struct FRootMotionSourceSettings                   Settings;                                                 // 0x0031(0x0001) (NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bInLocalSpace;                                            // 0x0032(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0xD];                                       // 0x0033(0x000D) MISSED OFFSET
	struct FRootMotionMovementParams                   RootMotionParams;                                         // 0x0040(0x0040) (NoDestructor, NativeAccessSpecifierPublic)
	struct FRootMotionFinishVelocitySettings           FinishVelocityParams;                                     // 0x0080(0x0014) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0xC];                                       // 0x0094(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSource_JumpForce
// 0x0030 (0x00D0 - 0x00A0)
struct FRootMotionSource_JumpForce : public FRootMotionSource
{
	struct FRotator                                    Rotation;                                                 // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Distance;                                                 // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Height;                                                   // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisableTimeout;                                          // 0x00AC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	class UCurveVector*                                PathOffsetCurve;                                          // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 TimeMappingCurve;                                         // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSource_MoveToDynamicForce
// 0x0030 (0x00D0 - 0x00A0)
struct FRootMotionSource_MoveToDynamicForce : public FRootMotionSource
{
	struct FVector                                     StartLocation;                                            // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InitialTargetLocation;                                    // 0x00A4(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TargetLocation;                                           // 0x00B0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRestrictSpeedToExpected;                                 // 0x00BC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	class UCurveVector*                                PathOffsetCurve;                                          // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 TimeMappingCurve;                                         // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.RootMotionSource_MoveToForce
// 0x0020 (0x00C0 - 0x00A0)
struct FRootMotionSource_MoveToForce : public FRootMotionSource
{
	struct FVector                                     StartLocation;                                            // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TargetLocation;                                           // 0x00A4(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRestrictSpeedToExpected;                                 // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	class UCurveVector*                                PathOffsetCurve;                                          // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.RootMotionSource_RadialForce
// 0x0040 (0x00E0 - 0x00A0)
struct FRootMotionSource_RadialForce : public FRootMotionSource
{
	struct FVector                                     Location;                                                 // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	class AActor*                                      LocationActor;                                            // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                   // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Strength;                                                 // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPush;                                                  // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNoZForce;                                                // 0x00B9(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00BA(0x0006) MISSED OFFSET
	class UCurveFloat*                                 StrengthDistanceFalloff;                                  // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 StrengthOverTime;                                         // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseFixedWorldDirection;                                  // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	struct FRotator                                    FixedWorldDirection;                                      // 0x00D4(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.RootMotionSource_ConstantForce
// 0x0010 (0x00B0 - 0x00A0)
struct FRootMotionSource_ConstantForce : public FRootMotionSource
{
	struct FVector                                     Force;                                                    // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 StrengthOverTime;                                         // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.CameraExposureSettings
// 0x0038
struct FCameraExposureSettings
{
	TEnumAsByte<EAutoExposureMethod>                   Method;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              LowPercent;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HighPercent;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinBrightness;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxBrightness;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpeedUp;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpeedDown;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Bias;                                                     // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 BiasCurve;                                                // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HistogramLogMin;                                          // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HistogramLogMax;                                          // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CalibrationConstant;                                      // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.GaussianSumBloomSettings
// 0x0084
struct FGaussianSumBloomSettings
{
	float                                              Intensity;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Threshold;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SizeScale;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Filter1Size;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Filter2Size;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Filter3Size;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Filter4Size;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Filter5Size;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Filter6Size;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Filter1Tint;                                              // 0x0024(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Filter2Tint;                                              // 0x0034(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Filter3Tint;                                              // 0x0044(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Filter4Tint;                                              // 0x0054(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Filter5Tint;                                              // 0x0064(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Filter6Tint;                                              // 0x0074(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ConvolutionBloomSettings
// 0x0028
struct FConvolutionBloomSettings
{
	class UTexture2D*                                  Texture;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Size;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   CenterUV;                                                 // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PreFilterMin;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PreFilterMax;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PreFilterMult;                                            // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BufferScale;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.LensBloomSettings
// 0x00B8
struct FLensBloomSettings
{
	struct FGaussianSumBloomSettings                   GaussianSum;                                              // 0x0000(0x0084) (Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FConvolutionBloomSettings                   Convolution;                                              // 0x0088(0x0028) (Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<EBloomMethod>                          Method;                                                   // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.LensImperfectionSettings
// 0x0020
struct FLensImperfectionSettings
{
	class UTexture*                                    DirtMask;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DirtMaskIntensity;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                DirtMaskTint;                                             // 0x000C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.LensSettings
// 0x00E0
struct FLensSettings
{
	struct FLensBloomSettings                          Bloom;                                                    // 0x0000(0x00B8) (Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	struct FLensImperfectionSettings                   Imperfections;                                            // 0x00B8(0x0020) (Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ChromaticAberration;                                      // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.FilmStockSettings
// 0x0014
struct FFilmStockSettings
{
	float                                              Slope;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Toe;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Shoulder;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlackClip;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WhiteClip;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ColorGradePerRangeSettings
// 0x0050
struct FColorGradePerRangeSettings
{
	struct FVector4                                    Saturation;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    Contrast;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    Gamma;                                                    // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    Gain;                                                     // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    Offset;                                                   // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ColorGradingSettings
// 0x0150
struct FColorGradingSettings
{
	struct FColorGradePerRangeSettings                 Global;                                                   // 0x0000(0x0050) (Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	struct FColorGradePerRangeSettings                 Shadows;                                                  // 0x0050(0x0050) (Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	struct FColorGradePerRangeSettings                 Midtones;                                                 // 0x00A0(0x0050) (Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	struct FColorGradePerRangeSettings                 Highlights;                                               // 0x00F0(0x0050) (Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ShadowsMax;                                               // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HighlightsMin;                                            // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0148(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SimpleCurveKey
// 0x0008
struct FSimpleCurveKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.SimpleCurve
// 0x0018 (0x0088 - 0x0070)
struct FSimpleCurve : public FRealCurve
{
	TEnumAsByte<ERichCurveInterpMode>                  InterpMode;                                               // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	TArray<struct FSimpleCurveKey>                     Keys;                                                     // 0x0078(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ClothPhysicsProperties_Legacy
// 0x0050
struct FClothPhysicsProperties_Legacy
{
	float                                              VerticalResistance;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HorizontalResistance;                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BendResistance;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShearResistance;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Friction;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Damping;                                                  // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TetherStiffness;                                          // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TetherLimit;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Drag;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StiffnessFrequency;                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GravityScale;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MassScale;                                                // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InertiaBlend;                                             // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SelfCollisionThickness;                                   // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SelfCollisionSquashScale;                                 // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SelfCollisionStiffness;                                   // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SolverFrequency;                                          // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FiberCompression;                                         // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FiberExpansion;                                           // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FiberResistance;                                          // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ClothingAssetData_Legacy
// 0x0078
struct FClothingAssetData_Legacy
{
	struct FName                                       AssetName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ApexFileName;                                             // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bClothPropertiesChanged;                                  // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FClothPhysicsProperties_Legacy              PhysicsProperties;                                        // 0x001C(0x0050) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xC];                                       // 0x006C(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshClothBuildParams
// 0x0058
struct FSkeletalMeshClothBuildParams
{
	TWeakObjectPtr<class UClothingAssetBase>           TargetAsset;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TargetLod;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemapParameters;                                         // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FString                                     AssetName;                                                // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LODIndex;                                                 // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SourceSection;                                            // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemoveFromMesh;                                          // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData02[0x28];                                      // 0x0029(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Engine.SkeletalMeshClothBuildParams.PhysicsAsset
};

// ScriptStruct Engine.BoneMirrorExport
// 0x0014
struct FBoneMirrorExport
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SourceBoneName;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EAxis>                                 BoneFlipAxis;                                             // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshComponentClothTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FSkeletalMeshComponentClothTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshComponentEndPhysicsTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FSkeletalMeshComponentEndPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.NameMapping
// 0x0010
struct FNameMapping
{
	struct FName                                       NodeName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BoneName;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.RigConfiguration
// 0x0018
struct FRigConfiguration
{
	class URig*                                        Rig;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNameMapping>                        BoneMappingTable;                                         // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.BoneReductionSetting
// 0x0010
struct FBoneReductionSetting
{
	TArray<struct FName>                               BonesToRemove;                                            // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.ReferencePose
// 0x0018
struct FReferencePose
{
	struct FName                                       PoseName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          ReferencePose;                                            // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.SkeletonToMeshLinkup
// 0x0020
struct FSkeletonToMeshLinkup
{
	TArray<int>                                        SkeletonToMeshTable;                                      // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        MeshToSkeletonTable;                                      // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.PrecomputedSkyLightInstanceData
// 0x00B8 (0x0160 - 0x00A8)
struct FPrecomputedSkyLightInstanceData : public FSceneComponentInstanceData
{
	struct FGuid                                       LightGuid;                                                // 0x00A8(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AverageBrightness;                                        // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xA4];                                      // 0x00BC(0x00A4) MISSED OFFSET
};

// ScriptStruct Engine.SmartNameMapping
// 0x0060
struct FSmartNameMapping
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Engine.CurveMetaData
// 0x0020
struct FCurveMetaData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.SoundClassEditorData
// 0x0008
struct FSoundClassEditorData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SoundNodeEditorData
// 0x0008
struct FSoundNodeEditorData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.StreamedAudioPlatformData
// 0x0020
struct FStreamedAudioPlatformData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.SplineInstanceData
// 0x00D8 (0x0180 - 0x00A8)
struct FSplineInstanceData : public FSceneComponentInstanceData
{
	bool                                               bSplineHasBeenEdited;                                     // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	struct FSplineCurves                               SplineCurves;                                             // 0x00B0(0x0068) (NativeAccessSpecifierPublic)
	struct FSplineCurves                               SplineCurvesPreUCS;                                       // 0x0118(0x0068) (NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.SplineMeshInstanceData
// 0x0030 (0x00D8 - 0x00A8)
struct FSplineMeshInstanceData : public FSceneComponentInstanceData
{
	struct FVector                                     StartPos;                                                 // 0x00A8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     EndPos;                                                   // 0x00B4(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     StartTangent;                                             // 0x00C0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     EndTangent;                                               // 0x00CC(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.MaterialRemapIndex
// 0x0018
struct FMaterialRemapIndex
{
	uint32_t                                           ImportVersionKey;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<int>                                        MaterialRemap;                                            // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.AssetEditorOrbitCameraPosition
// 0x0028
struct FAssetEditorOrbitCameraPosition
{
	bool                                               bIsSet;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     CamOrbitPoint;                                            // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CamOrbitZoom;                                             // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    CamOrbitRotation;                                         // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.MeshSectionInfo
// 0x0008
struct FMeshSectionInfo
{
	int                                                MaterialIndex;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableCollision;                                         // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCastShadow;                                              // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.MeshSectionInfoMap
// 0x0050
struct FMeshSectionInfoMap
{
	TMap<uint32_t, struct FMeshSectionInfo>            Map;                                                      // 0x0000(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.StaticMeshSourceModel
// 0x0070
struct FStaticMeshSourceModel
{
	struct FMeshBuildSettings                          BuildSettings;                                            // 0x0000(0x0030) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMeshReductionSettings                      ReductionSettings;                                        // 0x0030(0x0024) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              LODDistance;                                              // 0x0054(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerPlatformFloat                           ScreenSize;                                               // 0x0058(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     SourceImportFilename;                                     // 0x0060(0x0010) (Edit, ZeroConstructor, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.StaticMeshOptimizationSettings
// 0x001C
struct FStaticMeshOptimizationSettings
{
	TEnumAsByte<EOptimizationType>                     ReductionMethod;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              NumOfTrianglesPercentage;                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDeviationPercentage;                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WeldingThreshold;                                         // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRecalcNormals;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              NormalsThreshold;                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SilhouetteImportance;                                     // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      TextureImportance;                                        // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ShadingImportance;                                        // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.PaintedVertex
// 0x0020
struct FPaintedVertex
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      Color;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    Normal;                                                   // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.StaticMeshVertexColorLODData
// 0x0028
struct FStaticMeshVertexColorLODData
{
	TArray<struct FPaintedVertex>                      PaintedVertices;                                          // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FColor>                              VertexBufferColors;                                       // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	uint32_t                                           LODIndex;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.StaticMeshComponentInstanceData
// 0x0040 (0x0130 - 0x00F0)
struct FStaticMeshComponentInstanceData : public FPrimitiveComponentInstanceData
{
	class UStaticMesh*                                 StaticMesh;                                               // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FStaticMeshVertexColorLODData>       VertexColorLODs;                                          // 0x00F8(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                               CachedStaticLighting;                                     // 0x0108(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FStreamingTextureBuildInfo>          StreamingTextureData;                                     // 0x0118(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0128(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.StringCurveKey
// 0x0018
struct FStringCurveKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Value;                                                    // 0x0008(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.StringCurve
// 0x0020 (0x0088 - 0x0068)
struct FStringCurve : public FIndexedCurve
{
	struct FString                                     DefaultValue;                                             // 0x0068(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FStringCurveKey>                     Keys;                                                     // 0x0078(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Engine.TexturePlatformData
// 0x0030
struct FTexturePlatformData
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.TextureSource
// 0x00A0
struct FTextureSource
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct Engine.StreamingRenderAssetPrimitiveInfo
// 0x0030
struct FStreamingRenderAssetPrimitiveInfo
{
	class UStreamableRenderAsset*                      RenderAsset;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoxSphereBounds                            Bounds;                                                   // 0x0008(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              TexelFactor;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           PackedRelativeBox;                                        // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowInvalidTexelFactorWhenUnregistered : 1;             // 0x002C(0x0001) (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.TimeStretchCurveInstance
// 0x0030
struct FTimeStretchCurveInstance
{
	bool                                               bHasValidData;                                            // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x2F];                                      // 0x0001(0x002F) MISSED OFFSET
};

// ScriptStruct Engine.EndPhysicsTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FEndPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.StartPhysicsTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FStartPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.LevelViewportInfo
// 0x0020
struct FLevelViewportInfo
{
	struct FVector                                     CamPosition;                                              // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    CamRotation;                                              // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              CamOrthoZoom;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CamUpdated;                                               // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LightmassWorldInfoSettings
// 0x004C
struct FLightmassWorldInfoSettings
{
	float                                              StaticLightingLevelScale;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumIndirectLightingBounces;                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumSkyLightingBounces;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IndirectLightingQuality;                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IndirectLightingSmoothness;                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      EnvironmentColor;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EnvironmentIntensity;                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EmissiveBoost;                                            // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DiffuseBoost;                                             // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EVolumeLightingMethod>                 VolumeLightingMethod;                                     // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseAmbientOcclusion : 1;                                 // 0x0025(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGenerateAmbientOcclusionMaterialMask : 1;                // 0x0025(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bVisualizeMaterialDiffuse : 1;                            // 0x0025(0x0001) (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bVisualizeAmbientOcclusion : 1;                           // 0x0025(0x0001) (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCompressLightmaps : 1;                                   // 0x0025(0x0001) (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	float                                              VolumetricLightmapDetailCellSize;                         // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VolumetricLightmapMaximumBrickMemoryMb;                   // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VolumetricLightmapSphericalHarmonicSmoothing;             // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VolumeLightSamplePlacementScale;                          // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DirectIlluminationOcclusionFraction;                      // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IndirectIlluminationOcclusionFraction;                    // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OcclusionExponent;                                        // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FullyOccludedSamplesFraction;                             // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxOcclusionDistance;                                     // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
