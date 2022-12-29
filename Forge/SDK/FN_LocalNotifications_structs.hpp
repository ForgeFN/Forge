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

// Enum LocalNotifications.ELocalNotificationEventType
enum class ELocalNotificationEventType : uint8_t
{
	None                           = 0,
	FirstLogin                     = 1,
	Max                            = 2
};


// Enum LocalNotifications.ELocalNotificationParams
enum class ELocalNotificationParams : uint8_t
{
	BestHour24ToNotify             = 0,
	SpecificFireDateTime           = 1,
	HoursSinceLastSession          = 2,
	HoursAfterEvent_Max            = 3,
	HoursAfterEvent_Min            = 4,
	Max                            = 5
};


// Enum LocalNotifications.ELocalNotificationType
enum class ELocalNotificationType : uint8_t
{
	SpecificDateTime               = 0,
	RangeDateTime                  = 1,
	Max                            = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LocalNotifications.LocalNotificationData
// 0x0090
struct FLocalNotificationData
{
	bool                                               Enable;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ELocalNotificationType                             Type;                                                     // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ELocalNotificationEventType                        EventType;                                                // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0003(0x0005) MISSED OFFSET
	TMap<ELocalNotificationParams, struct FString>     ParamsByName;                                             // 0x0008(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               LocalTime;                                                // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	struct FString                                     TitleKey;                                                 // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BodyKey;                                                  // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ActivationEvent;                                          // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
