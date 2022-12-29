// Fortnite (11.00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameTime              SourceTime                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameRate              SourceRate                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameRate              DestinationRate                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameTime              ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFrameTime UTimeManagementBlueprintLibrary::TransformTime(struct FFrameTime SourceTime, struct FFrameRate SourceRate, struct FFrameRate DestinationRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime");

	UTimeManagementBlueprintLibrary_TransformTime_Params params;
	params.SourceTime = SourceTime;
	params.SourceRate = SourceRate;
	params.DestinationRate = DestinationRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber            A                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            B                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber            ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFrameNumber UTimeManagementBlueprintLibrary::Subtract_FrameNumberInteger(struct FFrameNumber A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger");

	UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber            A                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber            B                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber            ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFrameNumber UTimeManagementBlueprintLibrary::Subtract_FrameNumberFrameNumber(struct FFrameNumber A, struct FFrameNumber B)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber");

	UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameTime              SourceTime                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameRate              SourceRate                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameRate              SnapToRate                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameTime              ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFrameTime UTimeManagementBlueprintLibrary::SnapFrameTimeToRate(struct FFrameTime SourceTime, struct FFrameRate SourceRate, struct FFrameRate SnapToRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate");

	UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Params params;
	params.SourceTime = SourceTime;
	params.SourceRate = SourceRate;
	params.SnapToRate = SnapToRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          TimeInSeconds                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameRate              FrameRate                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameTime              ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFrameTime UTimeManagementBlueprintLibrary::Multiply_SecondsFrameRate(float TimeInSeconds, struct FFrameRate FrameRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate");

	UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Params params;
	params.TimeInSeconds = TimeInSeconds;
	params.FrameRate = FrameRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber            A                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            B                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber            ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFrameNumber UTimeManagementBlueprintLibrary::Multiply_FrameNumberInteger(struct FFrameNumber A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger");

	UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameRate              InFrameRate                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameRate              OtherFramerate                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTimeManagementBlueprintLibrary::IsValid_MultipleOf(struct FFrameRate InFrameRate, struct FFrameRate OtherFramerate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf");

	UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Params params;
	params.InFrameRate = InFrameRate;
	params.OtherFramerate = OtherFramerate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameRate              InFrameRate                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTimeManagementBlueprintLibrary::IsValid_Framerate(struct FFrameRate InFrameRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate");

	UTimeManagementBlueprintLibrary_IsValid_Framerate_Params params;
	params.InFrameRate = InFrameRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTimecode               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTimecode UTimeManagementBlueprintLibrary::GetTimecode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode");

	UTimeManagementBlueprintLibrary_GetTimecode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber            A                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            B                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber            ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFrameNumber UTimeManagementBlueprintLibrary::Divide_FrameNumberInteger(struct FFrameNumber A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger");

	UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTimecode               InTimecode                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bForceSignDisplay              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FString UTimeManagementBlueprintLibrary::Conv_TimecodeToString(struct FTimecode InTimecode, bool bForceSignDisplay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString");

	UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Params params;
	params.InTimecode = InTimecode;
	params.bForceSignDisplay = bForceSignDisplay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FQualifiedFrameTime     InFrameTime                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTimeManagementBlueprintLibrary::Conv_QualifiedFrameTimeToSeconds(struct FQualifiedFrameTime InFrameTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds");

	UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Params params;
	params.InFrameTime = InFrameTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameRate              InFrameRate                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTimeManagementBlueprintLibrary::Conv_FrameRateToSeconds(struct FFrameRate InFrameRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds");

	UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Params params;
	params.InFrameRate = InFrameRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber            InFrameNumber                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int UTimeManagementBlueprintLibrary::Conv_FrameNumberToInteger(struct FFrameNumber InFrameNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger");

	UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Params params;
	params.InFrameNumber = InFrameNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber            A                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            B                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber            ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFrameNumber UTimeManagementBlueprintLibrary::Add_FrameNumberInteger(struct FFrameNumber A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger");

	UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber            A                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber            B                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameNumber            ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFrameNumber UTimeManagementBlueprintLibrary::Add_FrameNumberFrameNumber(struct FFrameNumber A, struct FFrameNumber B)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber");

	UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
