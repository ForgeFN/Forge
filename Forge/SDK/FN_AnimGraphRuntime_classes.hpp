#pragma once

// Fortnite (11.00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AnimGraphRuntime.AnimCustomInstance
// 0x0000 (0x0270 - 0x0270)
class UAnimCustomInstance : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.AnimCustomInstance");
		return ptr;
	}

};


// Class AnimGraphRuntime.AnimSequencerInstance
// 0x0000 (0x0270 - 0x0270)
class UAnimSequencerInstance : public UAnimCustomInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.AnimSequencerInstance");
		return ptr;
	}

};


// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_PlayMontageNotify : public UAnimNotify
{
public:
	struct FName                                       NotifyName;                                               // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.AnimNotify_PlayMontageNotify");
		return ptr;
	}

};


// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// 0x0008 (0x0038 - 0x0030)
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{
public:
	struct FName                                       NotifyName;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow");
		return ptr;
	}

};


// Class AnimGraphRuntime.KismetAnimationLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.KismetAnimationLibrary");
		return ptr;
	}


	static void K2_TwoBoneIK(struct FVector RootPos, struct FVector JointPos, struct FVector EndPos, struct FVector JointTarget, struct FVector Effector, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale, struct FVector* OutJointPos, struct FVector* OutEndPos);
	static void K2_StartProfilingTimer();
	static struct FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ);
	static float K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax);
	static struct FTransform K2_LookAt(struct FTransform CurrentTransform, struct FVector TargetPosition, struct FVector LookAtVector, bool bUseUpVector, struct FVector UpVector, float ClampConeInDegree);
	static float K2_EndProfilingTimer(bool bLog, struct FString LogPrefix);
	static float K2_DistanceBetweenTwoSocketsAndMapRange(class USkeletalMeshComponent* Component, struct FName SocketOrBoneNameA, TEnumAsByte<ERelativeTransformSpace> SocketSpaceA, struct FName SocketOrBoneNameB, TEnumAsByte<ERelativeTransformSpace> SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax);
	static struct FVector K2_DirectionBetweenSockets(class USkeletalMeshComponent* Component, struct FName SocketOrBoneNameFrom, struct FName SocketOrBoneNameTo);
	static float K2_CalculateVelocityFromSockets(float DeltaSeconds, class USkeletalMeshComponent* Component, struct FName SocketOrBoneName, struct FName ReferenceSocketOrBone, TEnumAsByte<ERelativeTransformSpace> SocketSpace, struct FVector OffsetInBoneSpace, int NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, struct FRuntimeFloatCurve CustomCurve, struct FPositionHistory* History);
	static float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, struct FVector Position, int NumberOfSamples, float VelocityMin, float VelocityMax, struct FPositionHistory* History);
};


// Class AnimGraphRuntime.PlayMontageCallbackProxy
// 0x0080 (0x00A8 - 0x0028)
class UPlayMontageCallbackProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AnimGraphRuntime.PlayMontageCallbackProxy.OnCompleted
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AnimGraphRuntime.PlayMontageCallbackProxy.OnBlendOut
	unsigned char                                      UnknownData02[0x10];                                      // 0x0048(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AnimGraphRuntime.PlayMontageCallbackProxy.OnInterrupted
	unsigned char                                      UnknownData03[0x10];                                      // 0x0058(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBegin
	unsigned char                                      UnknownData04[0x10];                                      // 0x0068(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEnd
	unsigned char                                      UnknownData05[0x30];                                      // 0x0078(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.PlayMontageCallbackProxy");
		return ptr;
	}


	void OnNotifyEndReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload BranchingPointNotifyPayload);
	void OnNotifyBeginReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload BranchingPointNotifyPayload);
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	static class UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
