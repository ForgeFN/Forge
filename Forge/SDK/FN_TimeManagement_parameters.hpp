#pragma once

// Fortnite (11.00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime
struct UTimeManagementBlueprintLibrary_TransformTime_Params
{
	struct FFrameTime                                  SourceTime;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                                  SourceRate;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                                  DestinationRate;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameTime                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger
struct UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Params
{
	struct FFrameNumber                                A;                                                        // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber
struct UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Params
{
	struct FFrameNumber                                A;                                                        // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                B;                                                        // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate
struct UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Params
{
	struct FFrameTime                                  SourceTime;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                                  SourceRate;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                                  SnapToRate;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameTime                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
struct UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Params
{
	float                                              TimeInSeconds;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                                  FrameRate;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameTime                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger
struct UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Params
{
	struct FFrameNumber                                A;                                                        // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf
struct UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Params
{
	struct FFrameRate                                  InFrameRate;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                                  OtherFramerate;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate
struct UTimeManagementBlueprintLibrary_IsValid_Framerate_Params
{
	struct FFrameRate                                  InFrameRate;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode
struct UTimeManagementBlueprintLibrary_GetTimecode_Params
{
	struct FTimecode                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger
struct UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Params
{
	struct FFrameNumber                                A;                                                        // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString
struct UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Params
{
	struct FTimecode                                   InTimecode;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceSignDisplay;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
struct UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Params
{
	struct FQualifiedFrameTime                         InFrameTime;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
struct UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Params
{
	struct FFrameRate                                  InFrameRate;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger
struct UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Params
{
	struct FFrameNumber                                InFrameNumber;                                            // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger
struct UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Params
{
	struct FFrameNumber                                A;                                                        // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber
struct UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Params
{
	struct FFrameNumber                                A;                                                        // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                B;                                                        // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
