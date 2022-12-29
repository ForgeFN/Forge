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

// Enum CommonInput.ECommonGamepadType
enum class ECommonGamepadType : uint8_t
{
	XboxOneController              = 0,
	PS4Controller                  = 1,
	SwitchController               = 2,
	GenericController              = 3,
	Count                          = 4,
	ECommonGamepadType_MAX         = 5
};


// Enum CommonInput.ECommonInputType
enum class ECommonInputType : uint8_t
{
	MouseAndKeyboard               = 0,
	Gamepad                        = 1,
	Touch                          = 2,
	Count                          = 3,
	ECommonInputType_MAX           = 4
};


// Enum CommonInput.ECommonPlatformType
enum class ECommonPlatformType : uint8_t
{
	PC                             = 0,
	Mac                            = 1,
	PS4                            = 2,
	XBox                           = 3,
	IOS                            = 4,
	Android                        = 5,
	Switch                         = 6,
	Count                          = 7,
	ECommonPlatformType_MAX        = 8
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CommonInput.CommonInputPlatformData
// 0x0028
struct FCommonInputPlatformData
{
	bool                                               bSupported;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	ECommonInputType                                   DefaultInputType;                                         // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bSupportsMouseAndKeyboard;                                // 0x0002(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bSupportsGamepad;                                         // 0x0003(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	ECommonGamepadType                                 DefaultGamepadType;                                       // 0x0004(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCanChangeGamepadType;                                    // 0x0005(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bSupportsTouch;                                           // 0x0006(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0007(0x0010) UNKNOWN PROPERTY: ArrayProperty CommonInput.CommonInputPlatformData.ControllerData
	unsigned char                                      UnknownData02[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct CommonInput.CommonInputKeyBrushConfiguration
// 0x00A0
struct FCommonInputKeyBrushConfiguration
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 KeyBrush;                                                 // 0x0018(0x0088) (Edit, NativeAccessSpecifierPublic)
};

// ScriptStruct CommonInput.CommonInputKeySetBrushConfiguration
// 0x0098
struct FCommonInputKeySetBrushConfiguration
{
	TArray<struct FKey>                                Keys;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 KeyBrush;                                                 // 0x0010(0x0088) (Edit, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
