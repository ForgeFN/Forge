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

// Class LiveLinkInterface.LiveLinkSourceSettings
// 0x0010 (0x0038 - 0x0028)
class ULiveLinkSourceSettings : public UObject
{
public:
	ELiveLinkSourceMode                                Mode;                                                     // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FLiveLinkInterpolationSettings              InterpolationSettings;                                    // 0x002C(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FLiveLinkTimeSynchronizationSettings        TimeSynchronizationSettings;                              // 0x0030(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkSourceSettings");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkCurveRemapSettings
// 0x0050 (0x0088 - 0x0038)
class ULiveLinkCurveRemapSettings : public ULiveLinkSourceSettings
{
public:
	struct FLiveLinkCurveConversionSettings            CurveConversionSettings;                                  // 0x0038(0x0050) (Edit, Config, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkCurveRemapSettings");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkSourceFactory
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkSourceFactory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkSourceFactory");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
