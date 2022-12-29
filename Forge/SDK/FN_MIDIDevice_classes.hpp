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

// Class MIDIDevice.MIDIDeviceController
// 0x0038 (0x0060 - 0x0028)
class UMIDIDeviceController : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MIDIDevice.MIDIDeviceController.OnMIDIEvent
	int                                                DeviceID;                                                 // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     DeviceName;                                               // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MIDIDevice.MIDIDeviceController");
		return ptr;
	}

};


// Class MIDIDevice.MIDIDeviceInputController
// 0x0098 (0x00C0 - 0x0028)
class UMIDIDeviceInputController : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MIDIDevice.MIDIDeviceInputController.OnMIDINoteOn
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MIDIDevice.MIDIDeviceInputController.OnMIDINoteOff
	unsigned char                                      UnknownData02[0x10];                                      // 0x0048(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MIDIDevice.MIDIDeviceInputController.OnMIDIPitchBend
	unsigned char                                      UnknownData03[0x10];                                      // 0x0058(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MIDIDevice.MIDIDeviceInputController.OnMIDIAftertouch
	unsigned char                                      UnknownData04[0x10];                                      // 0x0068(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MIDIDevice.MIDIDeviceInputController.OnMIDIControlChange
	unsigned char                                      UnknownData05[0x10];                                      // 0x0078(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MIDIDevice.MIDIDeviceInputController.OnMIDIProgramChange
	unsigned char                                      UnknownData06[0x10];                                      // 0x0088(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MIDIDevice.MIDIDeviceInputController.OnMIDIChannelAftertouch
	int                                                DeviceID;                                                 // 0x0098(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData07[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FString                                     DeviceName;                                               // 0x00A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData08[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MIDIDevice.MIDIDeviceInputController");
		return ptr;
	}

};


// Class MIDIDevice.MIDIDeviceManager
// 0x0000 (0x0028 - 0x0028)
class UMIDIDeviceManager : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MIDIDevice.MIDIDeviceManager");
		return ptr;
	}


	static void GetMIDIOutputDeviceIDByName(struct FString DeviceName, int* DeviceID);
	static void GetMIDIInputDeviceIDByName(struct FString DeviceName, int* DeviceID);
	static void GetDefaultIMIDIOutputDeviceID(int* DeviceID);
	static void GetDefaultIMIDIInputDeviceID(int* DeviceID);
	static void FindMIDIDevices(TArray<struct FFoundMIDIDevice>* OutMIDIDevices);
	static void FindAllMIDIDeviceInfo(TArray<struct FMIDIDeviceInfo>* OutMIDIInputDevices, TArray<struct FMIDIDeviceInfo>* OutMIDIOutputDevices);
	static class UMIDIDeviceOutputController* CreateMIDIDeviceOutputController(int DeviceID);
	static class UMIDIDeviceInputController* CreateMIDIDeviceInputController(int DeviceID, int MIDIBufferSize);
	static class UMIDIDeviceController* CreateMIDIDeviceController(int DeviceID, int MIDIBufferSize);
};


// Class MIDIDevice.MIDIDeviceOutputController
// 0x0020 (0x0048 - 0x0028)
class UMIDIDeviceOutputController : public UObject
{
public:
	int                                                DeviceID;                                                 // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     DeviceName;                                               // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MIDIDevice.MIDIDeviceOutputController");
		return ptr;
	}


	void SendMIDIProgramChange(int Channel, int ProgramNumber);
	void SendMIDIPitchBend(int Channel, int Pitch);
	void SendMIDINoteOn(int Channel, int Note, int Velocity);
	void SendMIDINoteOff(int Channel, int Note, int Velocity);
	void SendMIDINoteAftertouch(int Channel, int Note, float Amount);
	void SendMIDIEvent(EMIDIEventType EventType, int Channel, int data1, int data2);
	void SendMIDIControlChange(int Channel, int Type, int Value);
	void SendMIDIChannelAftertouch(int Channel, float Amount);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
