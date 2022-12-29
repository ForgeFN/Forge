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

// Function MIDIDevice.MIDIDeviceManager.GetMIDIOutputDeviceIDByName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 DeviceName                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            DeviceID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMIDIDeviceManager::GetMIDIOutputDeviceIDByName(struct FString DeviceName, int* DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceManager.GetMIDIOutputDeviceIDByName");

	UMIDIDeviceManager_GetMIDIOutputDeviceIDByName_Params params;
	params.DeviceName = DeviceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeviceID != nullptr)
		*DeviceID = params.DeviceID;
}


// Function MIDIDevice.MIDIDeviceManager.GetMIDIInputDeviceIDByName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 DeviceName                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            DeviceID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMIDIDeviceManager::GetMIDIInputDeviceIDByName(struct FString DeviceName, int* DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceManager.GetMIDIInputDeviceIDByName");

	UMIDIDeviceManager_GetMIDIInputDeviceIDByName_Params params;
	params.DeviceName = DeviceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeviceID != nullptr)
		*DeviceID = params.DeviceID;
}


// Function MIDIDevice.MIDIDeviceManager.GetDefaultIMIDIOutputDeviceID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            DeviceID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMIDIDeviceManager::GetDefaultIMIDIOutputDeviceID(int* DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceManager.GetDefaultIMIDIOutputDeviceID");

	UMIDIDeviceManager_GetDefaultIMIDIOutputDeviceID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeviceID != nullptr)
		*DeviceID = params.DeviceID;
}


// Function MIDIDevice.MIDIDeviceManager.GetDefaultIMIDIInputDeviceID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            DeviceID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMIDIDeviceManager::GetDefaultIMIDIInputDeviceID(int* DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceManager.GetDefaultIMIDIInputDeviceID");

	UMIDIDeviceManager_GetDefaultIMIDIInputDeviceID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeviceID != nullptr)
		*DeviceID = params.DeviceID;
}


// Function MIDIDevice.MIDIDeviceManager.FindMIDIDevices
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FFoundMIDIDevice> OutMIDIDevices                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMIDIDeviceManager::FindMIDIDevices(TArray<struct FFoundMIDIDevice>* OutMIDIDevices)
{
	static auto fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceManager.FindMIDIDevices");

	UMIDIDeviceManager_FindMIDIDevices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMIDIDevices != nullptr)
		*OutMIDIDevices = params.OutMIDIDevices;
}


// Function MIDIDevice.MIDIDeviceManager.FindAllMIDIDeviceInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FMIDIDeviceInfo> OutMIDIInputDevices            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FMIDIDeviceInfo> OutMIDIOutputDevices           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMIDIDeviceManager::FindAllMIDIDeviceInfo(TArray<struct FMIDIDeviceInfo>* OutMIDIInputDevices, TArray<struct FMIDIDeviceInfo>* OutMIDIOutputDevices)
{
	static auto fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceManager.FindAllMIDIDeviceInfo");

	UMIDIDeviceManager_FindAllMIDIDeviceInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMIDIInputDevices != nullptr)
		*OutMIDIInputDevices = params.OutMIDIInputDevices;
	if (OutMIDIOutputDevices != nullptr)
		*OutMIDIOutputDevices = params.OutMIDIOutputDevices;
}


// Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceOutputController
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            DeviceID                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMIDIDeviceOutputController* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMIDIDeviceOutputController* UMIDIDeviceManager::CreateMIDIDeviceOutputController(int DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceOutputController");

	UMIDIDeviceManager_CreateMIDIDeviceOutputController_Params params;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceInputController
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            DeviceID                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MIDIBufferSize                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMIDIDeviceInputController* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMIDIDeviceInputController* UMIDIDeviceManager::CreateMIDIDeviceInputController(int DeviceID, int MIDIBufferSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceInputController");

	UMIDIDeviceManager_CreateMIDIDeviceInputController_Params params;
	params.DeviceID = DeviceID;
	params.MIDIBufferSize = MIDIBufferSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceController
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            DeviceID                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MIDIBufferSize                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMIDIDeviceController*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMIDIDeviceController* UMIDIDeviceManager::CreateMIDIDeviceController(int DeviceID, int MIDIBufferSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceController");

	UMIDIDeviceManager_CreateMIDIDeviceController_Params params;
	params.DeviceID = DeviceID;
	params.MIDIBufferSize = MIDIBufferSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIProgramChange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ProgramNumber                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMIDIDeviceOutputController::SendMIDIProgramChange(int Channel, int ProgramNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceOutputController.SendMIDIProgramChange");

	UMIDIDeviceOutputController_SendMIDIProgramChange_Params params;
	params.Channel = Channel;
	params.ProgramNumber = ProgramNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIPitchBend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Pitch                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMIDIDeviceOutputController::SendMIDIPitchBend(int Channel, int Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceOutputController.SendMIDIPitchBend");

	UMIDIDeviceOutputController_SendMIDIPitchBend_Params params;
	params.Channel = Channel;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Note                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Velocity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMIDIDeviceOutputController::SendMIDINoteOn(int Channel, int Note, int Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOn");

	UMIDIDeviceOutputController_SendMIDINoteOn_Params params;
	params.Channel = Channel;
	params.Note = Note;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOff
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Note                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Velocity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMIDIDeviceOutputController::SendMIDINoteOff(int Channel, int Note, int Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOff");

	UMIDIDeviceOutputController_SendMIDINoteOff_Params params;
	params.Channel = Channel;
	params.Note = Note;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteAftertouch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Note                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Amount                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMIDIDeviceOutputController::SendMIDINoteAftertouch(int Channel, int Note, float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteAftertouch");

	UMIDIDeviceOutputController_SendMIDINoteAftertouch_Params params;
	params.Channel = Channel;
	params.Note = Note;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EMIDIEventType                 EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            data1                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            data2                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMIDIDeviceOutputController::SendMIDIEvent(EMIDIEventType EventType, int Channel, int data1, int data2)
{
	static auto fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceOutputController.SendMIDIEvent");

	UMIDIDeviceOutputController_SendMIDIEvent_Params params;
	params.EventType = EventType;
	params.Channel = Channel;
	params.data1 = data1;
	params.data2 = data2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIControlChange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMIDIDeviceOutputController::SendMIDIControlChange(int Channel, int Type, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceOutputController.SendMIDIControlChange");

	UMIDIDeviceOutputController_SendMIDIControlChange_Params params;
	params.Channel = Channel;
	params.Type = Type;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIChannelAftertouch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Amount                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMIDIDeviceOutputController::SendMIDIChannelAftertouch(int Channel, float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceOutputController.SendMIDIChannelAftertouch");

	UMIDIDeviceOutputController_SendMIDIChannelAftertouch_Params params;
	params.Channel = Channel;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
