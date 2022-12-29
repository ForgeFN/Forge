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

// Function MIDIDevice.MIDIDeviceManager.GetMIDIOutputDeviceIDByName
struct UMIDIDeviceManager_GetMIDIOutputDeviceIDByName_Params
{
	struct FString                                     DeviceName;                                               // (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DeviceID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MIDIDevice.MIDIDeviceManager.GetMIDIInputDeviceIDByName
struct UMIDIDeviceManager_GetMIDIInputDeviceIDByName_Params
{
	struct FString                                     DeviceName;                                               // (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DeviceID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MIDIDevice.MIDIDeviceManager.GetDefaultIMIDIOutputDeviceID
struct UMIDIDeviceManager_GetDefaultIMIDIOutputDeviceID_Params
{
	int                                                DeviceID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MIDIDevice.MIDIDeviceManager.GetDefaultIMIDIInputDeviceID
struct UMIDIDeviceManager_GetDefaultIMIDIInputDeviceID_Params
{
	int                                                DeviceID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MIDIDevice.MIDIDeviceManager.FindMIDIDevices
struct UMIDIDeviceManager_FindMIDIDevices_Params
{
	TArray<struct FFoundMIDIDevice>                    OutMIDIDevices;                                           // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MIDIDevice.MIDIDeviceManager.FindAllMIDIDeviceInfo
struct UMIDIDeviceManager_FindAllMIDIDeviceInfo_Params
{
	TArray<struct FMIDIDeviceInfo>                     OutMIDIInputDevices;                                      // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMIDIDeviceInfo>                     OutMIDIOutputDevices;                                     // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceOutputController
struct UMIDIDeviceManager_CreateMIDIDeviceOutputController_Params
{
	int                                                DeviceID;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMIDIDeviceOutputController*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceInputController
struct UMIDIDeviceManager_CreateMIDIDeviceInputController_Params
{
	int                                                DeviceID;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MIDIBufferSize;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMIDIDeviceInputController*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceController
struct UMIDIDeviceManager_CreateMIDIDeviceController_Params
{
	int                                                DeviceID;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MIDIBufferSize;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMIDIDeviceController*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIProgramChange
struct UMIDIDeviceOutputController_SendMIDIProgramChange_Params
{
	int                                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ProgramNumber;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIPitchBend
struct UMIDIDeviceOutputController_SendMIDIPitchBend_Params
{
	int                                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOn
struct UMIDIDeviceOutputController_SendMIDINoteOn_Params
{
	int                                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Note;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOff
struct UMIDIDeviceOutputController_SendMIDINoteOff_Params
{
	int                                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Note;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteAftertouch
struct UMIDIDeviceOutputController_SendMIDINoteAftertouch_Params
{
	int                                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Note;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIEvent
struct UMIDIDeviceOutputController_SendMIDIEvent_Params
{
	EMIDIEventType                                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                data1;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                data2;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIControlChange
struct UMIDIDeviceOutputController_SendMIDIControlChange_Params
{
	int                                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIChannelAftertouch
struct UMIDIDeviceOutputController_SendMIDIChannelAftertouch_Params
{
	int                                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
