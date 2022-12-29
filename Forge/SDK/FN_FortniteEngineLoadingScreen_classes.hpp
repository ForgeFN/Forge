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

// Class FortniteEngineLoadingScreen.FortniteUserInterfaceSettings
// 0x0550 (0x0588 - 0x0038)
class UFortniteUserInterfaceSettings : public UDeveloperSettings
{
public:
	struct FRuntimeFloatCurve                          WidthScaleCurve;                                          // 0x0038(0x0088) (Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                          HeightScaleCurve;                                         // 0x00C0(0x0088) (Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                          WidthScaleCurve_iOS_InGame;                               // 0x0148(0x0088) (Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                          HeightScaleCurve_iOS_InGame;                              // 0x01D0(0x0088) (Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                          WidthScaleCurve_iOS_FrontEnd;                             // 0x0258(0x0088) (Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                          HeightScaleCurve_iOS_FrontEnd;                            // 0x02E0(0x0088) (Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                          WidthScaleCurve_Android_InGame;                           // 0x0368(0x0088) (Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                          HeightScaleCurve_Android_InGame;                          // 0x03F0(0x0088) (Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                          WidthScaleCurve_Android_FrontEnd;                         // 0x0478(0x0088) (Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                          HeightScaleCurve_Android_FrontEnd;                        // 0x0500(0x0088) (Edit, Config, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FortniteEngineLoadingScreen.FortniteUserInterfaceSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
