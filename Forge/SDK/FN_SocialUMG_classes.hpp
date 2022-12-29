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

// Class SocialUMG.SocialChatChannelTab
// 0x0010 (0x0B50 - 0x0B40)
class USocialChatChannelTab : public UCommonButton
{
public:
	class USocialChatChannel*                          ChatChannel;                                              // 0x0B40(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            CommonText_ChannelName;                                   // 0x0B48(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialChatChannelTab");
		return ptr;
	}

};


// Class SocialUMG.SocialChatContainer
// 0x0058 (0x0280 - 0x0228)
class USocialChatContainer : public UUserWidget
{
public:
	class USocialChatManager*                          ChatManager;                                              // 0x0228(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class USocialChatChannel*>                  JoinedChannels;                                           // 0x0230(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	class USocialChatChannel*                          ActiveChannel;                                            // 0x0240(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonGroup*                          TabButtonGroup;                                           // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0250(0x0008) MISSED OFFSET
	class USocialChatMessageList*                      ChatList_Messages;                                        // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USocialChatEditableText*                     ChatEditableText_MessageEntry;                            // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButton*                               Button_SendMessage;                                       // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                            EntryBox_JoinedChannels;                                  // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScrollBox*                                  ScrollBox_Channels;                                       // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialChatContainer");
		return ptr;
	}


	void SendCurrentMessage();
	void OnChatOpenChanged(bool bShouldBeOpen);
	void HandleRightTabPressed();
	void HandleLeftTabPressed();
	void FocusEditableText();
	void DynamicHandleMessageTextCommitted(struct FText MessageText, TEnumAsByte<ETextCommit> CommitMethod);
};


// Class SocialUMG.SocialChatEditableText
// 0x04E0 (0x05E0 - 0x0100)
class USocialChatEditableText : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0100(0x0020) MISSED OFFSET
	struct FEditableTextStyle                          EditableTextStyle;                                        // 0x0120(0x0218) (Edit, NativeAccessSpecifierPrivate)
	struct FTextBlockStyle                             AutoCompleteStyle;                                        // 0x0338(0x0268) (Edit, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x40];                                      // 0x05A0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialChatEditableText");
		return ptr;
	}

};


// Class SocialUMG.SocialChatMessageEntry
// 0x0148 (0x0370 - 0x0228)
class USocialChatMessageEntry : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0228(0x0018) MISSED OFFSET
	struct FSocialChatMessageEntryStyle                DefaultStyle;                                             // 0x0240(0x0120) (Edit, Protected, NativeAccessSpecifierProtected)
	class UCommonRichTextBlock*                        RichText_Message;                                         // 0x0360(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UButton*                                     Button_MessageButton;                                     // 0x0368(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialChatMessageEntry");
		return ptr;
	}


	void OnMessageSet();
	bool CanInteract();
};


// Class SocialUMG.SocialChatMessageList
// 0x00F0 (0x0300 - 0x0210)
class USocialChatMessageList : public UListViewBase
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0210(0x00C0) MISSED OFFSET
	bool                                               bIsFocusable;                                             // 0x02D0(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02D1(0x0007) MISSED OFFSET
	class USocialChatChannel*                          ActiveChannel;                                            // 0x02D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x20];                                      // 0x02E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialChatMessageList");
		return ptr;
	}

};


// Class SocialUMG.SocialGroupListEntry
// 0x0028 (0x0B68 - 0x0B40)
class USocialGroupListEntry : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0B40(0x0008) MISSED OFFSET
	class UClass*                                      ActionMenuClass;                                          // 0x0B48(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialGroupChannel*                         SocialGroup;                                              // 0x0B50(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  Text_GroupName;                                           // 0x0B58(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMenuAnchor*                                 MenuAnchor_Actions;                                       // 0x0B60(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialGroupListEntry");
		return ptr;
	}


	class UWidget* HandleGetMenuContent();
};


// Class SocialUMG.SocialGroupTreeView
// 0x0020 (0x03D8 - 0x03B8)
class USocialGroupTreeView : public UTreeView
{
public:
	class UClass*                                      GroupEntryWidgetClass;                                    // 0x03B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      UserEntryWidgetClass;                                     // 0x03C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ActionMenuClass;                                          // 0x03C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USocialInteractionMenu*                      ActionMenu;                                               // 0x03D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialGroupTreeView");
		return ptr;
	}

};


// Class SocialUMG.SocialInteractionButton
// 0x0060 (0x0BA0 - 0x0B40)
class USocialInteractionButton : public UCommonButton
{
public:
	struct FLinearColor                                DefaultIndicatorColor;                                    // 0x0B40(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                AlertingIndicatorColor;                                   // 0x0B50(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0B60(0x0030) MISSED OFFSET
	class UCommonTextBlock*                            Text_InteractionName;                                     // 0x0B90(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBorder*                                     Border_InteractionIndicator;                              // 0x0B98(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialInteractionButton");
		return ptr;
	}


	void OnInteractionSet();
	bool IsPlatformOnlyFriend();
	struct FName GetInteractionName();
};


// Class SocialUMG.SocialActionMenu
// 0x0020 (0x0248 - 0x0228)
class USocialActionMenu : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0228(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialActionMenu");
		return ptr;
	}


	void OnOpened();
};


// Class SocialUMG.SocialInteractionMenu
// 0x0068 (0x02B0 - 0x0248)
class USocialInteractionMenu : public USocialActionMenu
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0248(0x0030) MISSED OFFSET
	class UDynamicEntryBox*                            EntryBox_PositiveInteractions;                            // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDynamicEntryBox*                            EntryBox_NegativeInteractions;                            // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USpacer*                                     Spacer_InteractionSeparator;                              // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonWidgetSwitcher*                       Switcher_Confirmation;                                    // 0x0290(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  Text_ConfirmationLabel;                                   // 0x0298(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButton*                               Button_Confirm;                                           // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButton*                               Button_Decline;                                           // 0x02A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialInteractionMenu");
		return ptr;
	}


	void OnToggleConfirmation(bool bIsVisible);
	class UWidget* GetFirstEntryToCenter();
};


// Class SocialUMG.SocialNameTextBlock
// 0x0080 (0x0718 - 0x0698)
class USocialNameTextBlock : public UCommonRichTextBlock
{
public:
	class USocialUser*                                 SocialUser;                                               // 0x0698(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinDesiredSize;                                           // 0x06A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxDesiredSize;                                           // 0x06A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bShowNickName;                                            // 0x06A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EPlatformIconDisplayRule                           PlatformIconDisplayRule;                                  // 0x06A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bNickNameInNextLine;                                      // 0x06AA(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bOverwriteNickNameColorAndSize;                           // 0x06AB(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FColor                                      NickNameColor;                                            // 0x06AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                NickNameFontSize;                                         // 0x06B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bFlippingNickName;                                        // 0x06B4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06B5(0x0003) MISSED OFFSET
	float                                              DisplayTime;                                              // 0x06B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              NickNameDisplayTime;                                      // 0x06BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FadeInDuration;                                           // 0x06C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FadeOutDuration;                                          // 0x06C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x50];                                      // 0x06C8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialNameTextBlock");
		return ptr;
	}


	void SetNickNameColor(struct FColor InColor);
};


// Class SocialUMG.DesignerPreviewChatChannel
// 0x0068 (0x0150 - 0x00E8)
class UDesignerPreviewChatChannel : public USocialChatChannel
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00E8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.DesignerPreviewChatChannel");
		return ptr;
	}

};


// Class SocialUMG.SocialListEntryBase
// 0x0018 (0x0B58 - 0x0B40)
class USocialListEntryBase : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0B40(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialListEntryBase");
		return ptr;
	}

};


// Class SocialUMG.SocialListInteractableEntryBase
// 0x0010 (0x0B68 - 0x0B58)
class USocialListInteractableEntryBase : public USocialListEntryBase
{
public:
	class UClass*                                      ActionMenuClass;                                          // 0x0B58(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMenuAnchor*                                 MenuAnchor_Actions;                                       // 0x0B60(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialListInteractableEntryBase");
		return ptr;
	}


	class UWidget* HandleGetMenuContent();
};


// Class SocialUMG.SocialListUserEntryBase
// 0x0020 (0x0B88 - 0x0B68)
class USocialListUserEntryBase : public USocialListInteractableEntryBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0B68(0x0008) MISSED OFFSET
	class USocialNameTextBlock*                        Text_SocialName;                                          // 0x0B70(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonRichTextBlock*                        Text_RichPresence;                                        // 0x0B78(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      Image_EncourageEpicFriend;                                // 0x0B80(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialListUserEntryBase");
		return ptr;
	}

};


// Class SocialUMG.SocialListEntry_SocialUser
// 0x0000 (0x0B88 - 0x0B88)
class USocialListEntry_SocialUser : public USocialListUserEntryBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialListEntry_SocialUser");
		return ptr;
	}


	void OnUserPresenceChanged(EOnlineStatus OnlineStatus);
};


// Class SocialUMG.SocialUserListHeaderEntry
// 0x0010 (0x0B68 - 0x0B58)
class USocialUserListHeaderEntry : public USocialListEntryBase
{
public:
	class UTextBlock*                                  Text_ListName;                                            // 0x0B58(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  Text_NumEntries;                                          // 0x0B60(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialUserListHeaderEntry");
		return ptr;
	}

};


// Class SocialUMG.SocialUserListView
// 0x00E8 (0x02F8 - 0x0210)
class USocialUserListView : public UListViewBase
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0210(0x00E0) MISSED OFFSET
	float                                              EntrySpacing;                                             // 0x02F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02F4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialUserListView");
		return ptr;
	}

};


// Class SocialUMG.SocialUserTreeView
// 0x0100 (0x03F8 - 0x02F8)
class USocialUserTreeView : public USocialUserListView
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x02F8(0x0070) MISSED OFFSET
	class UClass*                                      UserEntryWidgetClass;                                     // 0x0368(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      InviteEntryWidgetClass;                                   // 0x0370(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0378(0x0028) MISSED OFFSET
	class USocialActionMenu*                           ActiveActionMenu;                                         // 0x03A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class UClass*, class USocialActionMenu*>      CachedActionMenuPool;                                     // 0x03A8(0x0050) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SocialUMG.SocialUserTreeView");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
