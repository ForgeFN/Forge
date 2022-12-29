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

// Class TimeManagement.TimeSynchronizationSource
// 0x0008 (0x0030 - 0x0028)
class UTimeSynchronizationSource : public UObject
{
public:
	bool                                               bUseForSynchronization;                                   // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                FrameOffset;                                              // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TimeManagement.TimeSynchronizationSource");
		return ptr;
	}

};


// Class TimeManagement.FixedFrameRateCustomTimeStep
// 0x0008 (0x0030 - 0x0028)
class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep
{
public:
	struct FFrameRate                                  FixedFrameRate;                                           // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TimeManagement.FixedFrameRateCustomTimeStep");
		return ptr;
	}

};


// Class TimeManagement.TimeManagementBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TimeManagement.TimeManagementBlueprintLibrary");
		return ptr;
	}


	static struct FFrameTime TransformTime(struct FFrameTime SourceTime, struct FFrameRate SourceRate, struct FFrameRate DestinationRate);
	static struct FFrameNumber Subtract_FrameNumberInteger(struct FFrameNumber A, int B);
	static struct FFrameNumber Subtract_FrameNumberFrameNumber(struct FFrameNumber A, struct FFrameNumber B);
	static struct FFrameTime SnapFrameTimeToRate(struct FFrameTime SourceTime, struct FFrameRate SourceRate, struct FFrameRate SnapToRate);
	static struct FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, struct FFrameRate FrameRate);
	static struct FFrameNumber Multiply_FrameNumberInteger(struct FFrameNumber A, int B);
	static bool IsValid_MultipleOf(struct FFrameRate InFrameRate, struct FFrameRate OtherFramerate);
	static bool IsValid_Framerate(struct FFrameRate InFrameRate);
	static struct FTimecode GetTimecode();
	static struct FFrameNumber Divide_FrameNumberInteger(struct FFrameNumber A, int B);
	static struct FString Conv_TimecodeToString(struct FTimecode InTimecode, bool bForceSignDisplay);
	static float Conv_QualifiedFrameTimeToSeconds(struct FQualifiedFrameTime InFrameTime);
	static float Conv_FrameRateToSeconds(struct FFrameRate InFrameRate);
	static int Conv_FrameNumberToInteger(struct FFrameNumber InFrameNumber);
	static struct FFrameNumber Add_FrameNumberInteger(struct FFrameNumber A, int B);
	static struct FFrameNumber Add_FrameNumberFrameNumber(struct FFrameNumber A, struct FFrameNumber B);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
