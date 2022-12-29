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

// Enum AnimGraphRuntime.ESphericalLimitType
enum class ESphericalLimitType : uint8_t
{
	Inner                          = 0,
	Outer                          = 1,
	ESphericalLimitType_MAX        = 2
};


// Enum AnimGraphRuntime.AnimPhysSimSpaceType
enum class EAnimPhysSimSpaceType : uint8_t
{
	Component                      = 0,
	Actor                          = 1,
	World                          = 2,
	RootRelative                   = 3,
	BoneRelative                   = 4,
	AnimPhysSimSpaceType_MAX       = 5
};


// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class EAnimPhysLinearConstraintType : uint8_t
{
	Free                           = 0,
	Limited                        = 1,
	AnimPhysLinearConstraintType_MAX = 2
};


// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class EAnimPhysAngularConstraintType : uint8_t
{
	Angular                        = 0,
	Cone                           = 1,
	AnimPhysAngularConstraintType_MAX = 2
};


// Enum AnimGraphRuntime.EDrivenDestinationMode
enum class EDrivenDestinationMode : uint8_t
{
	Bone                           = 0,
	MorphTarget                    = 1,
	MaterialParameter              = 2,
	EDrivenDestinationMode_MAX     = 3
};


// Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class EDrivenBoneModificationMode : uint8_t
{
	AddToInput                     = 0,
	ReplaceComponent               = 1,
	AddToRefPose                   = 2,
	EDrivenBoneModificationMode_MAX = 3
};


// Enum AnimGraphRuntime.EConstraintOffsetOption
enum class EConstraintOffsetOption : uint8_t
{
	None                           = 0,
	Offset_RefPose                 = 1,
	EConstraintOffsetOption_MAX    = 2
};


// Enum AnimGraphRuntime.CopyBoneDeltaMode
enum class ECopyBoneDeltaMode : uint8_t
{
	Accumulate                     = 0,
	Copy                           = 1,
	CopyBoneDeltaMode_MAX          = 2
};


// Enum AnimGraphRuntime.EInterpolationBlend
enum class EInterpolationBlend : uint8_t
{
	Linear                         = 0,
	Cubic                          = 1,
	Sinusoidal                     = 2,
	EaseInOutExponent2             = 3,
	EaseInOutExponent3             = 4,
	EaseInOutExponent4             = 5,
	EaseInOutExponent5             = 6,
	MAX                            = 7
};


// Enum AnimGraphRuntime.EBoneModificationMode
enum class EBoneModificationMode : uint8_t
{
	BMM_Ignore                     = 0,
	BMM_Replace                    = 1,
	BMM_Additive                   = 2,
	BMM_MAX                        = 3
};


// Enum AnimGraphRuntime.EModifyCurveApplyMode
enum class EModifyCurveApplyMode : uint8_t
{
	Add                            = 0,
	Scale                          = 1,
	Blend                          = 2,
	WeightedMovingAverage          = 3,
	RemapCurve                     = 4,
	EModifyCurveApplyMode_MAX      = 5
};


// Enum AnimGraphRuntime.EPoseDriverOutput
enum class EPoseDriverOutput : uint8_t
{
	DrivePoses                     = 0,
	DriveCurves                    = 1,
	EPoseDriverOutput_MAX          = 2
};


// Enum AnimGraphRuntime.EPoseDriverSource
enum class EPoseDriverSource : uint8_t
{
	Rotation                       = 0,
	Translation                    = 1,
	EPoseDriverSource_MAX          = 2
};


// Enum AnimGraphRuntime.EPoseDriverType
enum class EPoseDriverType : uint8_t
{
	SwingAndTwist                  = 0,
	SwingOnly                      = 1,
	Translation                    = 2,
	EPoseDriverType_MAX            = 3
};


// Enum AnimGraphRuntime.ESnapshotSourceMode
enum class ESnapshotSourceMode : uint8_t
{
	NamedSnapshot                  = 0,
	SnapshotPin                    = 1,
	ESnapshotSourceMode_MAX        = 2
};


// Enum AnimGraphRuntime.ERefPoseType
enum class ERefPoseType : uint8_t
{
	EIT_LocalSpace                 = 0,
	EIT_Additive                   = 1,
	EIT_MAX                        = 2
};


// Enum AnimGraphRuntime.ESimulationSpace
enum class ESimulationSpace : uint8_t
{
	ComponentSpace                 = 0,
	WorldSpace                     = 1,
	BaseBoneSpace                  = 2,
	ESimulationSpace_MAX           = 3
};


// Enum AnimGraphRuntime.EScaleChainInitialLength
enum class EScaleChainInitialLength : uint8_t
{
	FixedDefaultLengthValue        = 0,
	Distance                       = 1,
	ChainLength                    = 2,
	EScaleChainInitialLength_MAX   = 3
};


// Enum AnimGraphRuntime.ESequenceEvalReinit
enum class ESequenceEvalReinit : uint8_t
{
	NoReset                        = 0,
	StartPosition                  = 1,
	ExplicitTime                   = 2,
	ESequenceEvalReinit_MAX        = 3
};


// Enum AnimGraphRuntime.ESplineBoneAxis
enum class ESplineBoneAxis : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	ESplineBoneAxis_MAX            = 3
};


// Enum AnimGraphRuntime.ERotationComponent
enum class ERotationComponent : uint8_t
{
	EulerX                         = 0,
	EulerY                         = 1,
	EulerZ                         = 2,
	QuaternionAngle                = 3,
	SwingAngle                     = 4,
	TwistAngle                     = 5,
	ERotationComponent_MAX         = 6
};


// Enum AnimGraphRuntime.EEasingFuncType
enum class EEasingFuncType : uint8_t
{
	Linear                         = 0,
	Sinusoidal                     = 1,
	Cubic                          = 2,
	QuadraticInOut                 = 3,
	CubicInOut                     = 4,
	HermiteCubic                   = 5,
	QuarticInOut                   = 6,
	QuinticInOut                   = 7,
	CircularIn                     = 8,
	CircularOut                    = 9,
	CircularInOut                  = 10,
	ExpIn                          = 11,
	ExpOut                         = 12,
	ExpInOut                       = 13,
	CustomCurve                    = 14,
	EEasingFuncType_MAX            = 15
};


// Enum AnimGraphRuntime.ERBFNormalizeMethod
enum class ERBFNormalizeMethod : uint8_t
{
	OnlyNormalizeAboveOne          = 0,
	AlwaysNormalize                = 1,
	NormalizeWithinMedian          = 2,
	ERBFNormalizeMethod_MAX        = 3
};


// Enum AnimGraphRuntime.ERBFDistanceMethod
enum class ERBFDistanceMethod : uint8_t
{
	Euclidean                      = 0,
	Quaternion                     = 1,
	SwingAngle                     = 2,
	DefaultMethod                  = 3,
	ERBFDistanceMethod_MAX         = 4
};


// Enum AnimGraphRuntime.ERBFFunctionType
enum class ERBFFunctionType : uint8_t
{
	Gaussian                       = 0,
	Exponential                    = 1,
	Linear                         = 2,
	Cubic                          = 3,
	Quintic                        = 4,
	DefaultFunction                = 5,
	ERBFFunctionType_MAX           = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimGraphRuntime.PositionHistory
// 0x0030
struct FPositionHistory
{
	TArray<struct FVector>                             Positions;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              Range;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0014(0x001C) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
// 0x01C0 (0x0890 - 0x06D0)
struct FAnimSequencerInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x1C0];                                     // 0x06D0(0x01C0) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// 0x00B8 (0x00C8 - 0x0010)
struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     ComponentPose;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int                                                LODThreshold;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ActualAlpha;                                              // 0x0024(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAnimAlphaInputType                                AlphaInputType;                                           // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlphaBoolEnabled;                                        // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	float                                              Alpha;                                                    // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0030(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputAlphaBoolBlend                        AlphaBoolBlend;                                           // 0x0038(0x0048) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       AlphaCurveName;                                           // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                        AlphaScaleBiasClamp;                                      // 0x0088(0x0030) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00B8(0x0010) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
// 0x0050
struct FRandomPlayerSequenceEntry
{
	class UAnimSequence*                               Sequence;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChanceToPlay;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinLoopCount;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxLoopCount;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinPlayrate;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxPlayrate;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FAlphaBlend                                 BlendIn;                                                  // 0x0020(0x0030) (Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
// 0x0058 (0x0068 - 0x0010)
struct FAnimNode_RandomPlayer : public FAnimNode_Base
{
	TArray<struct FRandomPlayerSequenceEntry>          Entries;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x44];                                      // 0x0020(0x0044) MISSED OFFSET
	bool                                               bShuffleMode;                                             // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// 0x00B0 (0x00E0 - 0x0030)
struct FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase
{
	float                                              X;                                                        // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Y;                                                        // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Z;                                                        // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayRate;                                                 // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLoop;                                                    // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bResetPlayTimeWhenBlendSpaceChanges;                      // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	float                                              StartPosition;                                            // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpaceBase*                             BlendSpace;                                               // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x88];                                      // 0x0050(0x0088) MISSED OFFSET
	class UBlendSpaceBase*                             PreviousBlendSpace;                                       // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
// 0x00D0 (0x01B0 - 0x00E0)
struct FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x00E0(0x0060) MISSED OFFSET
	struct FPoseLink                                   BasePose;                                                 // 0x0140(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int                                                LODThreshold;                                             // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SourceSocketName;                                         // 0x0154(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PivotSocketName;                                          // 0x015C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LookAtLocation;                                           // 0x0164(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SocketAxis;                                               // 0x0170(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                    // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0180(0x0030) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
// 0x0048
struct FAnimPhysConstraintSetup
{
	EAnimPhysLinearConstraintType                      LinearXLimitType;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAnimPhysLinearConstraintType                      LinearYLimitType;                                         // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAnimPhysLinearConstraintType                      LinearZLimitType;                                         // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FVector                                     LinearAxesMin;                                            // 0x0004(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LinearAxesMax;                                            // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAnimPhysAngularConstraintType                     AngularConstraintType;                                    // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAnimPhysTwistAxis                                 TwistAxis;                                                // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAnimPhysTwistAxis                                 AngularTargetAxis;                                        // 0x001E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x1];                                       // 0x001F(0x0001) MISSED OFFSET
	float                                              ConeAngle;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AngularLimitsMin;                                         // 0x0024(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AngularLimitsMax;                                         // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AngularTarget;                                            // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
// 0x0024
struct FAnimPhysSphericalLimit
{
	struct FBoneReference                              DrivingBone;                                              // 0x0000(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     SphereLocalOffset;                                        // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LimitRadius;                                              // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESphericalLimitType                                LimitType;                                                // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
// 0x0040
struct FAnimPhysPlanarLimit
{
	struct FBoneReference                              DrivingBone;                                              // 0x0000(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  PlaneTransform;                                           // 0x0010(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimGraphRuntime.RotationRetargetingInfo
// 0x0130
struct FRotationRetargetingInfo
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
	struct FTransform                                  Source;                                                   // 0x0010(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Target;                                                   // 0x0040(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	ERotationComponent                                 RotationComponent;                                        // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	struct FVector                                     TwistAxis;                                                // 0x0074(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseAbsoluteAngle;                                        // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	float                                              SourceMinimum;                                            // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SourceMaximum;                                            // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TargetMinimum;                                            // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TargetMaximum;                                            // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EEasingFuncType                                    EasingType;                                               // 0x0094(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
	struct FRuntimeFloatCurve                          CustomCurve;                                              // 0x0098(0x0088) (Edit, NativeAccessSpecifierPublic)
	bool                                               bFlipEasing;                                              // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	float                                              EasingWeight;                                             // 0x0124(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bClamp;                                                   // 0x0128(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0129(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
// 0x0378 (0x0440 - 0x00C8)
struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
{
	float                                              LinearDampingOverride;                                    // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngularDampingOverride;                                   // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x60];                                      // 0x00D0(0x0060) MISSED OFFSET
	struct FBoneReference                              RelativeSpaceBone;                                        // 0x0130(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              BoundBone;                                                // 0x0140(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              ChainEnd;                                                 // 0x0150(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     BoxExtents;                                               // 0x0160(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LocalJointOffset;                                         // 0x016C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GravityScale;                                             // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     GravityOverride;                                          // 0x017C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LinearSpringConstant;                                     // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngularSpringConstant;                                    // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WindScale;                                                // 0x0190(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ComponentLinearAccScale;                                  // 0x0194(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ComponentLinearVelScale;                                  // 0x01A0(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ComponentAppliedLinearAccClamp;                           // 0x01AC(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngularBiasOverride;                                      // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumSolverIterationsPreUpdate;                             // 0x01BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumSolverIterationsPostUpdate;                            // 0x01C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimPhysConstraintSetup                    ConstraintSetup;                                          // 0x01C4(0x0048) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x020C(0x0004) MISSED OFFSET
	TArray<struct FAnimPhysSphericalLimit>             SphericalLimits;                                          // 0x0210(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              SphereCollisionRadius;                                    // 0x0220(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ExternalForce;                                            // 0x0224(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAnimPhysPlanarLimit>                PlanarLimits;                                             // 0x0230(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	EAnimPhysCollisionType                             CollisionType;                                            // 0x0240(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAnimPhysSimSpaceType                              SimulationSpace;                                          // 0x0241(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0242(0x0002) MISSED OFFSET
	unsigned char                                      bUseSphericalLimits : 1;                                  // 0x0244(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsePlanarLimit : 1;                                      // 0x0244(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDoUpdate : 1;                                            // 0x0244(0x0001) (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDoEval : 1;                                              // 0x0244(0x0001) (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideLinearDamping : 1;                               // 0x0244(0x0001) (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideAngularBias : 1;                                 // 0x0244(0x0001) (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideAngularDamping : 1;                              // 0x0244(0x0001) (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableWind : 1;                                          // 0x0244(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03 : 1;                                        // 0x0245(0x0001)
	unsigned char                                      bUseGravityOverride : 1;                                  // 0x0245(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLinearSpring : 1;                                        // 0x0245(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAngularSpring : 1;                                       // 0x0245(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bChain : 1;                                               // 0x0245(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0xA];                                       // 0x0246(0x000A) MISSED OFFSET
	struct FRotationRetargetingInfo                    RetargetingSettings;                                      // 0x0250(0x0130) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0xC0];                                      // 0x0380(0x00C0) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
// 0x00B8 (0x00C8 - 0x0010)
struct FAnimNode_ApplyAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPoseLink                                   Additive;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                    // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0034(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int                                                LODThreshold;                                             // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputAlphaBoolBlend                        AlphaBoolBlend;                                           // 0x0040(0x0048) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       AlphaCurveName;                                           // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                        AlphaScaleBiasClamp;                                      // 0x0090(0x0030) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C0(0x0004) MISSED OFFSET
	EAnimAlphaInputType                                AlphaInputType;                                           // 0x00C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlphaBoolEnabled;                                        // 0x00C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00C6(0x0002) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AngularRangeLimit
// 0x0028
struct FAngularRangeLimit
{
	struct FVector                                     LimitMin;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LimitMax;                                                 // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                              Bone;                                                     // 0x0018(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
// 0x0020 (0x00E8 - 0x00C8)
struct FAnimNode_ApplyLimits : public FAnimNode_SkeletalControlBase
{
	TArray<struct FAngularRangeLimit>                  AngularRangeLimits;                                       // 0x00C8(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             AngularOffsets;                                           // 0x00D8(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
// 0x0024
struct FBlendBoneByChannelEntry
{
	struct FBoneReference                              SourceBone;                                               // 0x0000(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              TargetBone;                                               // 0x0010(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bBlendTranslation;                                        // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBlendRotation;                                           // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBlendScale;                                              // 0x0022(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0023(0x0001) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
// 0x0058 (0x0068 - 0x0010)
struct FAnimNode_BlendBoneByChannel : public FAnimNode_Base
{
	struct FPoseLink                                   A;                                                        // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPoseLink                                   B;                                                        // 0x0020(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FBlendBoneByChannelEntry>            BoneDefinitions;                                          // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
	float                                              Alpha;                                                    // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0058(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<EBoneControlSpace>                     TransformsSpace;                                          // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// 0x0088 (0x0098 - 0x0010)
struct FAnimNode_BlendListBase : public FAnimNode_Base
{
	TArray<struct FPoseLink>                           BlendPose;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      BlendTime;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	EAlphaBlendOption                                  BlendType;                                                // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bResetChildOnActivation;                                  // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
	class UCurveFloat*                                 CustomBlendCurve;                                         // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendProfile*                               BlendProfile;                                             // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0048(0x0050) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
// 0x0008 (0x00A0 - 0x0098)
struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{
	bool                                               bActiveValue;                                             // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
// 0x0018 (0x00B0 - 0x0098)
struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{
	TArray<int>                                        EnumToPoseIndex;                                          // 0x0098(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      ActiveEnumValue;                                          // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
// 0x0008 (0x00A0 - 0x0098)
struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{
	int                                                ActiveChildIndex;                                         // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
// 0x0008 (0x00E8 - 0x00E0)
struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{
	float                                              NormalizedTime;                                           // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// 0x0050 (0x0118 - 0x00C8)
struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                               // 0x00C8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 DrivingCurve;                                             // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Multiplier;                                               // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RangeMin;                                                 // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RangeMax;                                                 // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RemappedMin;                                              // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RemappedMax;                                              // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ParameterName;                                            // 0x00F4(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                              TargetBone;                                               // 0x00FC(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	EDrivenDestinationMode                             DestinationMode;                                          // 0x010C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDrivenBoneModificationMode                        ModificationMode;                                         // 0x010D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EComponentType>                        SourceComponent;                                          // 0x010E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseRange : 1;                                            // 0x010F(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetTranslationX : 1;                            // 0x010F(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetTranslationY : 1;                            // 0x010F(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetTranslationZ : 1;                            // 0x010F(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetRotationX : 1;                               // 0x010F(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetRotationY : 1;                               // 0x010F(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetRotationZ : 1;                               // 0x010F(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetScaleX : 1;                                  // 0x010F(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetScaleY : 1;                                  // 0x0110(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectTargetScaleZ : 1;                                  // 0x0110(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.SocketReference
// 0x0040
struct FSocketReference
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
	struct FName                                       SocketName;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.BoneSocketTarget
// 0x0060
struct FBoneSocketTarget
{
	bool                                               bUseSocket;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FBoneReference                              BoneReference;                                            // 0x0004(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
	struct FSocketReference                            SocketReference;                                          // 0x0020(0x0040) (Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
// 0x00B8 (0x0180 - 0x00C8)
struct FAnimNode_CCDIK : public FAnimNode_SkeletalControlBase
{
	struct FVector                                     EffectorLocation;                                         // 0x00C8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EBoneControlSpace>                     EffectorLocationSpace;                                    // 0x00D4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xB];                                       // 0x00D5(0x000B) MISSED OFFSET
	struct FBoneSocketTarget                           EffectorTarget;                                           // 0x00E0(0x0060) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              TipBone;                                                  // 0x0140(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              RootBone;                                                 // 0x0150(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Precision;                                                // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxIterations;                                            // 0x0164(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStartFromTail;                                           // 0x0168(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableRotationLimit;                                     // 0x0169(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x6];                                       // 0x016A(0x0006) MISSED OFFSET
	TArray<float>                                      RotationLimitPerJoints;                                   // 0x0170(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPrivate)
};

// ScriptStruct AnimGraphRuntime.Constraint
// 0x001C
struct FConstraint
{
	struct FBoneReference                              TargetBone;                                               // 0x0000(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	EConstraintOffsetOption                            OffsetOption;                                             // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	char                           TransformType;                                            // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                        PerAxis;                                                  // 0x0012(0x0003) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0015(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_Constraint
// 0x0040 (0x0108 - 0x00C8)
struct FAnimNode_Constraint : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             // 0x00C8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FConstraint>                         ConstraintSetup;                                          // 0x00D8(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      ConstraintWeights;                                        // 0x00E8(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F8(0x0010) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// 0x0028 (0x00F0 - 0x00C8)
struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                               // 0x00C8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              TargetBone;                                               // 0x00D8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bCopyTranslation;                                         // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCopyRotation;                                            // 0x00E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCopyScale;                                               // 0x00EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EBoneControlSpace>                     ControlSpace;                                             // 0x00EB(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
// 0x0030 (0x00F8 - 0x00C8)
struct FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                               // 0x00C8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              TargetBone;                                               // 0x00D8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bCopyTranslation;                                         // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCopyRotation;                                            // 0x00E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCopyScale;                                               // 0x00EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECopyBoneDeltaMode                                 CopyMode;                                                 // 0x00EB(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TranslationMultiplier;                                    // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RotationMultiplier;                                       // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScaleMultiplier;                                          // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// 0x0130 (0x0140 - 0x0010)
struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
{
	TWeakObjectPtr<class USkeletalMeshComponent>       SourceMeshComponent;                                      // 0x0010(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseAttachedParent;                                       // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCopyCurves;                                              // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x126];                                     // 0x001A(0x0126) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
// 0x0030 (0x0040 - 0x0010)
struct FAnimNode_CurveSource : public FAnimNode_Base
{
	struct FPoseLink                                   SourcePose;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       SourceBinding;                                            // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TScriptInterface<class UCurveSourceInterface>      CurveSource;                                              // 0x0030(0x0010) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// 0x00C8 (0x0190 - 0x00C8)
struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	struct FTransform                                  EffectorTransform;                                        // 0x00D0(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneSocketTarget                           EffectorTarget;                                           // 0x0100(0x0060) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              TipBone;                                                  // 0x0160(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              RootBone;                                                 // 0x0170(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Precision;                                                // 0x0180(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxIterations;                                            // 0x0184(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EBoneControlSpace>                     EffectorTransformSpace;                                   // 0x0188(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EBoneRotationSource>                   EffectorRotationSource;                                   // 0x0189(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x6];                                       // 0x018A(0x0006) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// 0x0058 (0x0120 - 0x00C8)
struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              RightHandFK;                                              // 0x00C8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              LeftHandFK;                                               // 0x00D8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              RightHandIK;                                              // 0x00E8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              LeftHandIK;                                               // 0x00F8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                      IKBonesToMove;                                            // 0x0108(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              HandFKWeight;                                             // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
// 0x00B0 (0x00C0 - 0x0010)
struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FPoseLink>                           BlendPoses;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FInputBlendPose>                     LayerSetup;                                               // 0x0030(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      BlendWeights;                                             // 0x0040(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bMeshSpaceRotationBlend;                                  // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMeshSpaceScaleBlend;                                     // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECurveBlendOption>                     CurveBlendOption;                                         // 0x0052(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBlendRootMotionBasedOnRootBone;                          // 0x0053(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	int                                                LODThreshold;                                             // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	TArray<struct FPerBoneBlendWeight>                 PerBoneBlendWeights;                                      // 0x0060(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FGuid                                       SkeletonGuid;                                             // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                       VirtualBoneGuid;                                          // 0x0080(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0090(0x0030) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
// 0x002C
struct FAnimLegIKDefinition
{
	struct FBoneReference                              IKFootBone;                                               // 0x0000(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              FKFootBone;                                               // 0x0010(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	int                                                NumBonesInLimb;                                           // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinRotationAngle;                                         // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EAxis>                                 FootBoneForwardAxis;                                      // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EAxis>                                 HingeRotationAxis;                                        // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableRotationLimit;                                     // 0x002A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableKneeTwistCorrection;                               // 0x002B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimGraphRuntime.AnimNode_LegIK
// 0x0030 (0x00F8 - 0x00C8)
struct FAnimNode_LegIK : public FAnimNode_SkeletalControlBase
{
	float                                              ReachPrecision;                                           // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxIterations;                                            // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAnimLegIKDefinition>                LegsDefinition;                                           // 0x00D0(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x18];                                      // 0x00E0(0x0018) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimLegIKData
// 0x00A0
struct FAnimLegIKData
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.IKChain
// 0x0038
struct FIKChain
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.IKChainLink
// 0x003C
struct FIKChainLink
{
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0000(0x003C) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// 0x00E8 (0x01B0 - 0x00C8)
struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             // 0x00C8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
	struct FBoneSocketTarget                           LookAtTarget;                                             // 0x00E0(0x0060) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     LookAtLocation;                                           // 0x0140(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAxis                                       LookAt_Axis;                                              // 0x014C(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bUseLookUpAxis;                                           // 0x015C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EInterpolationBlend>                   InterpolationType;                                        // 0x015D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x015E(0x0002) MISSED OFFSET
	struct FAxis                                       LookUp_Axis;                                              // 0x0160(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              LookAtClamp;                                              // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterpolationTime;                                        // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterpolationTriggerThreashold;                           // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x34];                                      // 0x017C(0x0034) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
// 0x0028 (0x0038 - 0x0010)
struct FAnimNode_MakeDynamicAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPoseLink                                   Additive;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bMeshSpaceAdditive;                                       // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// 0x0040 (0x0108 - 0x00C8)
struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             // 0x00C8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Translation;                                              // 0x00D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                 // 0x00E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Scale;                                                    // 0x00F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EBoneModificationMode>                 TranslationMode;                                          // 0x00FC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EBoneModificationMode>                 RotationMode;                                             // 0x00FD(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EBoneModificationMode>                 ScaleMode;                                                // 0x00FE(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EBoneControlSpace>                     TranslationSpace;                                         // 0x00FF(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EBoneControlSpace>                     RotationSpace;                                            // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EBoneControlSpace>                     ScaleSpace;                                               // 0x0101(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0102(0x0006) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
// 0x0048 (0x0058 - 0x0010)
struct FAnimNode_ModifyCurve : public FAnimNode_Base
{
	struct FPoseLink                                   SourcePose;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	TArray<float>                                      CurveValues;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               CurveNames;                                               // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
	float                                              Alpha;                                                    // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EModifyCurveApplyMode                              ApplyMode;                                                // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
// 0x0040 (0x0050 - 0x0010)
struct FAnimNode_MultiWayBlend : public FAnimNode_Base
{
	TArray<struct FPoseLink>                           Poses;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      DesiredAlphas;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0040(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAdditiveNode;                                            // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNormalizeAlpha;                                          // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// 0x0038 (0x0100 - 0x00C8)
struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToObserve;                                            // 0x00C8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<EBoneControlSpace>                     DisplaySpace;                                             // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRelativeToRefPose;                                       // 0x00D9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00DA(0x0002) MISSED OFFSET
	struct FVector                                     Translation;                                              // 0x00DC(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                 // 0x00E8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Scale;                                                    // 0x00F4(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
// 0x0048 (0x0078 - 0x0030)
struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
{
	class UPoseAsset*                                  PoseAsset;                                                // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0038(0x0040) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
// 0x0020 (0x0098 - 0x0078)
struct FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
{
	struct FPoseLink                                   SourcePose;                                               // 0x0078(0x0010) (Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	EAlphaBlendOption                                  BlendOption;                                              // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	class UCurveFloat*                                 CustomCurve;                                              // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
// 0x0018 (0x0090 - 0x0078)
struct FAnimNode_PoseByName : public FAnimNode_PoseHandler
{
	struct FName                                       PoseName;                                                 // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PoseWeight;                                               // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0084(0x000C) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.PoseDriverTransform
// 0x0018
struct FPoseDriverTransform
{
	struct FVector                                     TargetTranslation;                                        // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    TargetRotation;                                           // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimGraphRuntime.PoseDriverTarget
// 0x00C0
struct FPoseDriverTarget
{
	TArray<struct FPoseDriverTransform>                BoneTransforms;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FRotator                                    TargetRotation;                                           // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              TargetScale;                                              // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERBFDistanceMethod                                 DistanceMethod;                                           // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERBFFunctionType                                   FunctionType;                                             // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bApplyCustomCurve;                                        // 0x0022(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0023(0x0005) MISSED OFFSET
	struct FRichCurve                                  CustomCurve;                                              // 0x0028(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FName                                       DrivenName;                                               // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	bool                                               bIsHidden;                                                // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.RBFParams
// 0x0028
struct FRBFParams
{
	int                                                TargetDimensions;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERBFFunctionType                                   Function;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERBFDistanceMethod                                 DistanceMethod;                                           // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EBoneAxis>                             TwistAxis;                                                // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
	float                                              WeightThreshold;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERBFNormalizeMethod                                NormalizeMethod;                                          // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FVector                                     MedianReference;                                          // 0x0014(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MedianMin;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MedianMax;                                                // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
// 0x00B0 (0x0128 - 0x0078)
struct FAnimNode_PoseDriver : public FAnimNode_PoseHandler
{
	struct FPoseLink                                   SourcePose;                                               // 0x0078(0x0010) (Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                      SourceBones;                                              // 0x0088(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                      OnlyDriveBones;                                           // 0x0098(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPoseDriverTarget>                   PoseTargets;                                              // 0x00A8(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x30];                                      // 0x00B8(0x0030) MISSED OFFSET
	struct FBoneReference                              EvalSpaceBone;                                            // 0x00E8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FRBFParams                                  RBFParams;                                                // 0x00F8(0x0028) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	EPoseDriverSource                                  DriveSource;                                              // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPoseDriverOutput                                  DriveOutput;                                              // 0x0121(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOnlyDriveSelectedBones : 1;                              // 0x0122(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0123(0x0005) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
// 0x0080 (0x0090 - 0x0010)
struct FAnimNode_PoseSnapshot : public FAnimNode_Base
{
	struct FName                                       SnapshotName;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPoseSnapshot                               Snapshot;                                                 // 0x0018(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	ESnapshotSourceMode                                Mode;                                                     // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3F];                                      // 0x0051(0x003F) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
// 0x0000 (0x0010 - 0x0010)
struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
// 0x0008 (0x0018 - 0x0010)
struct FAnimNode_RefPose : public FAnimNode_Base
{
	TEnumAsByte<ERefPoseType>                          RefPoseType;                                              // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
// 0x0010 (0x00D8 - 0x00C8)
struct FAnimNode_ResetRoot : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
// 0x0498 (0x0560 - 0x00C8)
struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
{
	class UPhysicsAsset*                               OverridePhysicsAsset;                                     // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x98];                                      // 0x00D0(0x0098) MISSED OFFSET
	struct FVector                                     OverrideWorldGravity;                                     // 0x0168(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ExternalForce;                                            // 0x0174(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ComponentLinearAccScale;                                  // 0x0180(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ComponentLinearVelScale;                                  // 0x018C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ComponentAppliedLinearAccClamp;                           // 0x0198(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CachedBoundsScale;                                        // 0x01A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                              BaseBoneRef;                                              // 0x01A8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionChannel>                     OverlapChannel;                                           // 0x01B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESimulationSpace                                   SimulationSpace;                                          // 0x01B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceDisableCollisionBetweenConstraintBodies;            // 0x01BA(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x1];                                       // 0x01BB(0x0001) MISSED OFFSET
	unsigned char                                      bEnableWorldGeometry : 1;                                 // 0x01BC(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideWorldGravity : 1;                                // 0x01BC(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bTransferBoneVelocities : 1;                              // 0x01BC(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFreezeIncomingPoseOnStart : 1;                           // 0x01BC(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bClampLinearTranslationLimitToRefPose : 1;                // 0x01BC(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3A3];                                     // 0x01BD(0x03A3) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
// 0x0090 (0x00A0 - 0x0010)
struct FAnimNode_RotateRootBone : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Pitch;                                                    // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Yaw;                                                      // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                        PitchScaleBiasClamp;                                      // 0x0028(0x0030) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                        YawScaleBiasClamp;                                        // 0x0058(0x0030) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    MeshToComponent;                                          // 0x0088(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0094(0x000C) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// 0x0028 (0x00F0 - 0x00C8)
struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              TargetBone;                                               // 0x00C8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              SourceBone;                                               // 0x00D8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Multiplier;                                               // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EBoneAxis>                             RotationAxisToRefer;                                      // 0x00EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAdditive;                                              // 0x00ED(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00EE(0x0002) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// 0x00A8 (0x0188 - 0x00E0)
struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{
	struct FPoseLink                                   BasePose;                                                 // 0x00E0(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int                                                LODThreshold;                                             // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                    // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x00F8(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputAlphaBoolBlend                        AlphaBoolBlend;                                           // 0x0100(0x0048) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       AlphaCurveName;                                           // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                        AlphaScaleBiasClamp;                                      // 0x0150(0x0030) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0180(0x0004) MISSED OFFSET
	EAnimAlphaInputType                                AlphaInputType;                                           // 0x0184(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlphaBoolEnabled;                                        // 0x0185(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0186(0x0002) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
// 0x0068 (0x0078 - 0x0010)
struct FAnimNode_ScaleChainLength : public FAnimNode_Base
{
	struct FPoseLink                                   InputPose;                                                // 0x0010(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              DefaultChainLength;                                       // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                              ChainStartBone;                                           // 0x0024(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              ChainEndBone;                                             // 0x0034(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     TargetLocation;                                           // 0x0044(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Alpha;                                                    // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0058(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	EScaleChainInitialLength                           ChainInitialLength;                                       // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0061(0x0017) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase
{
	class UAnimSequenceBase*                           Sequence;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExplicitTime;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldLoop;                                              // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTeleportToExplicitTime;                                  // 0x003D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ESequenceEvalReinit>                   ReinitializationBehavior;                                 // 0x003E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x003F(0x0001) MISSED OFFSET
	float                                              StartPosition;                                            // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_Slot
// 0x0038 (0x0048 - 0x0010)
struct FAnimNode_Slot : public FAnimNode_Base
{
	struct FPoseLink                                   Source;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       SlotName;                                                 // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlwaysUpdateSourcePose;                                  // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0029(0x001F) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
// 0x0198 (0x0260 - 0x00C8)
struct FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              StartBone;                                                // 0x00C8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              EndBone;                                                  // 0x00D8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	ESplineBoneAxis                                    BoneAxis;                                                 // 0x00E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoCalculateSpline;                                     // 0x00E9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00EA(0x0002) MISSED OFFSET
	int                                                PointCount;                                               // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          ControlPoints;                                            // 0x00F0(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              Roll;                                                     // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TwistStart;                                               // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TwistEnd;                                                 // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	struct FAlphaBlend                                 TwistBlend;                                               // 0x0110(0x0030) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Stretch;                                                  // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Offset;                                                   // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x118];                                     // 0x0148(0x0118) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
// 0x0014
struct FSplineIKCachedBoneData
{
	struct FBoneReference                              Bone;                                                     // 0x0000(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	int                                                RefSkeletonIndex;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// 0x0060 (0x0128 - 0x00C8)
struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SpringBone;                                               // 0x00C8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              MaxDisplacement;                                          // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpringStiffness;                                          // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpringDamping;                                            // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ErrorResetThresh;                                         // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x00E8(0x003C) MISSED OFFSET
	unsigned char                                      bLimitDisplacement : 1;                                   // 0x0124(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bTranslateX : 1;                                          // 0x0124(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bTranslateY : 1;                                          // 0x0124(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bTranslateZ : 1;                                          // 0x0124(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRotateX : 1;                                             // 0x0124(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRotateY : 1;                                             // 0x0124(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRotateZ : 1;                                             // 0x0124(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0125(0x0003) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_StateResult
// 0x0000 (0x0030 - 0x0030)
struct FAnimNode_StateResult : public FAnimNode_Root
{

};

// ScriptStruct AnimGraphRuntime.RotationLimit
// 0x0018
struct FRotationLimit
{
	struct FVector                                     LimitMin;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LimitMax;                                                 // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Trail
// 0x01A8 (0x0270 - 0x00C8)
struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x00C8(0x0038) MISSED OFFSET
	struct FBoneReference                              TrailBone;                                                // 0x0100(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ChainLength;                                              // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EAxis>                                 ChainBoneAxis;                                            // 0x0114(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bInvertChainBoneAxis : 1;                                 // 0x0115(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLimitStretch : 1;                                        // 0x0115(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLimitRotation : 1;                                       // 0x0115(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsePlanarLimit : 1;                                      // 0x0115(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bActorSpaceFakeVel : 1;                                   // 0x0115(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReorientParentToChild : 1;                               // 0x0115(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0116(0x0002) MISSED OFFSET
	float                                              MaxDeltaTime;                                             // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           UnwindingSize;                                            // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RelaxationSpeedScale;                                     // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          TrailRelaxationSpeed;                                     // 0x0128(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                        RelaxationSpeedScaleInputProcessor;                       // 0x01B0(0x0030) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FRotationLimit>                      RotationLimits;                                           // 0x01E0(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             RotationOffsets;                                          // 0x01F0(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAnimPhysPlanarLimit>                PlanarLimits;                                             // 0x0200(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              StretchLimit;                                             // 0x0210(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     FakeVelocity;                                             // 0x0214(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                              BaseJoint;                                                // 0x0220(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              LastBoneRotationAnimAlphaBlend;                           // 0x0230(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3C];                                      // 0x0234(0x003C) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
// 0x0020
struct FReferenceBoneFrame
{
	struct FBoneReference                              Bone;                                                     // 0x0000(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAxis                                       Axis;                                                     // 0x0010(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
// 0x0070 (0x0138 - 0x00C8)
struct FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
{
	struct FReferenceBoneFrame                         BaseFrame;                                                // 0x00C8(0x0020) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FReferenceBoneFrame                         TwistFrame;                                               // 0x00E8(0x0020) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAxis                                       TwistPlaneNormalAxis;                                     // 0x0108(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              RangeMax;                                                 // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RemappedMin;                                              // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RemappedMax;                                              // 0x0120(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimCurveParam                             Curve;                                                    // 0x0124(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0130(0x0008) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// 0x0118 (0x01E0 - 0x00C8)
struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              IKBone;                                                   // 0x00C8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              StartStretchRatio;                                        // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxStretchScale;                                          // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     EffectorLocation;                                         // 0x00E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	struct FBoneSocketTarget                           EffectorTarget;                                           // 0x00F0(0x0060) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     JointTargetLocation;                                      // 0x0150(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
	struct FBoneSocketTarget                           JointTarget;                                              // 0x0160(0x0060) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAxis                                       TwistAxis;                                                // 0x01C0(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<EBoneControlSpace>                     EffectorLocationSpace;                                    // 0x01D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EBoneControlSpace>                     JointTargetLocationSpace;                                 // 0x01D1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowStretching : 1;                                     // 0x01D2(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bTakeRotationFromEffectorSpace : 1;                       // 0x01D2(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bMaintainEffectorRelRot : 1;                              // 0x01D2(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowTwist : 1;                                          // 0x01D2(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0xD];                                       // 0x01D3(0x000D) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
// 0x00B8 (0x00C8 - 0x0010)
struct FAnimNode_TwoWayBlend : public FAnimNode_Base
{
	struct FPoseLink                                   A;                                                        // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPoseLink                                   B;                                                        // 0x0020(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	EAnimAlphaInputType                                AlphaInputType;                                           // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAlphaBoolEnabled : 1;                                    // 0x0031(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00 : 2;                                        // 0x0031(0x0001)
	unsigned char                                      bResetChildOnActivation : 1;                              // 0x0031(0x0001) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	float                                              Alpha;                                                    // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0038(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputAlphaBoolBlend                        AlphaBoolBlend;                                           // 0x0040(0x0048) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       AlphaCurveName;                                           // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                        AlphaScaleBiasClamp;                                      // 0x0090(0x0030) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.RBFEntry
// 0x0010
struct FRBFEntry
{
	TArray<float>                                      Values;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimGraphRuntime.RBFTarget
// 0x0090 (0x00A0 - 0x0010)
struct FRBFTarget : public FRBFEntry
{
	float                                              ScaleFactor;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bApplyCustomCurve;                                        // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FRichCurve                                  CustomCurve;                                              // 0x0018(0x0080) (Edit, NativeAccessSpecifierPublic)
	ERBFDistanceMethod                                 DistanceMethod;                                           // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERBFFunctionType                                   FunctionType;                                             // 0x0099(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x6];                                       // 0x009A(0x0006) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
