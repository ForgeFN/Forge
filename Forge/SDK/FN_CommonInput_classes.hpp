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

// Class CommonInput.CommonInputSettings
// 0x0180 (0x01A8 - 0x0028)
class UCommonInputSettings : public UObject
{
public:
	bool                                               bAutoLoadData;                                            // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0029(0x0028) UNKNOWN PROPERTY: SoftClassProperty CommonInput.CommonInputSettings.InputData
	struct FCommonInputPlatformData                    CommonInputPlatformData[0x7];                             // 0x0058(0x0028) (Edit, Config, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0170(0x0008) MISSED OFFSET
	class UClass*                                      InputDataClass;                                           // 0x0178(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FCommonInputPlatformData                    CurrentPlatform;                                          // 0x0180(0x0028) (Transient, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonInput.CommonInputSettings");
		return ptr;
	}

};


// Class CommonInput.CommonInputSubsystem
// 0x00A8 (0x00D8 - 0x0030)
class UCommonInputSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonInput.CommonInputSubsystem.OnInputMethodChanged
	unsigned char                                      UnknownData01[0x20];                                      // 0x0040(0x0020) MISSED OFFSET
	ECommonInputType                                   LastInputType;                                            // 0x0060(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	ECommonInputType                                   CurrentInputType;                                         // 0x0061(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	ECommonGamepadType                                 GamepadInputType;                                         // 0x0062(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0063(0x0005) MISSED OFFSET
	TMap<struct FName, ECommonInputType>               CurrentInputLocks;                                        // 0x0068(0x0050) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData03[0x18];                                      // 0x00B8(0x0018) MISSED OFFSET
	bool                                               bIsGamepadSimulatedClick;                                 // 0x00D0(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData04[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonInput.CommonInputSubsystem");
		return ptr;
	}


	bool ShouldShowInputKeys();
	void SetGamepadInputType(ECommonGamepadType InGamepadInputType);
	void SetCurrentInputType(ECommonInputType NewInputType);
	bool IsUsingPointerInput();
	void InputMethodChangedDelegate__DelegateSignature(ECommonInputType bNewInputType);
	ECommonInputType GetDefaultInputType();
	ECommonInputType GetCurrentInputType();
	ECommonGamepadType GetCurrentGamepadType();
};


// Class CommonInput.CommonUIInputData
// 0x0010 (0x0038 - 0x0028)
class UCommonUIInputData : public UObject
{
public:
	struct FDataTableRowHandle                         DefaultClickAction;                                       // 0x0028(0x0010) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonInput.CommonUIInputData");
		return ptr;
	}

};


// Class CommonInput.CommonInputControllerData
// 0x0078 (0x00A0 - 0x0028)
class UCommonInputControllerData : public UObject
{
public:
	ECommonInputType                                   InputType;                                                // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECommonGamepadType                                 GamepadType;                                              // 0x0029(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x002A(0x0028) UNKNOWN PROPERTY: SoftObjectProperty CommonInput.CommonInputControllerData.ControllerTexture
	unsigned char                                      UnknownData02[0x28];                                      // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty CommonInput.CommonInputControllerData.ControllerButtonMaskTexture
	TArray<struct FCommonInputKeyBrushConfiguration>   InputBrushDataMap;                                        // 0x0080(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FCommonInputKeySetBrushConfiguration> InputBrushKeySets;                                        // 0x0090(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonInput.CommonInputControllerData");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
