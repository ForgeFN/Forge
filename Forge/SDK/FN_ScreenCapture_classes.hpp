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

// Class ScreenCapture.ScreenCaptureContext
// 0x00A8 (0x00D0 - 0x0028)
class UScreenCaptureContext : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty ScreenCapture.ScreenCaptureContext.OnCaptureFinishedDelegate
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty ScreenCapture.ScreenCaptureContext.OnCaptureInterruptedDelegate
	unsigned char                                      UnknownData02[0x10];                                      // 0x0048(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty ScreenCapture.ScreenCaptureContext.OnVideoSavedToAlbumDelegate
	unsigned char                                      UnknownData03[0x10];                                      // 0x0058(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty ScreenCapture.ScreenCaptureContext.OnScreenshotCapturedDelegate
	unsigned char                                      UnknownData04[0x58];                                      // 0x0068(0x0058) MISSED OFFSET
	class UTexture2D*                                  PreviewImage;                                             // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ScreenCapture.ScreenCaptureContext");
		return ptr;
	}


	void ToggleMicrophoneRecording(bool bEnableMicrophone);
	void TakeScreenshot();
	void StopCapture(bool bIsCaptureInterrupted);
	void StartCapture(bool bInRecordAppAudio, bool bGeneratePreviewImage);
	bool SaveToAlbum(struct FString LocalFilePath);
	bool RemoveFile(struct FString LocalFilePath);
	bool IsRecording();
	static class UScreenCaptureContext* CreateScreenCaptureContext(class UObject* WorldContextObject);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
