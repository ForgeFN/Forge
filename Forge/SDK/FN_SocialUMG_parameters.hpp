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

// Function SocialUMG.SocialChatContainer.SendCurrentMessage
struct USocialChatContainer_SendCurrentMessage_Params
{
};

// Function SocialUMG.SocialChatContainer.OnChatOpenChanged
struct USocialChatContainer_OnChatOpenChanged_Params
{
	bool                                               bShouldBeOpen;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SocialUMG.SocialChatContainer.HandleRightTabPressed
struct USocialChatContainer_HandleRightTabPressed_Params
{
};

// Function SocialUMG.SocialChatContainer.HandleLeftTabPressed
struct USocialChatContainer_HandleLeftTabPressed_Params
{
};

// Function SocialUMG.SocialChatContainer.FocusEditableText
struct USocialChatContainer_FocusEditableText_Params
{
};

// Function SocialUMG.SocialChatContainer.DynamicHandleMessageTextCommitted
struct USocialChatContainer_DynamicHandleMessageTextCommitted_Params
{
	struct FText                                       MessageText;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SocialUMG.SocialChatMessageEntry.OnMessageSet
struct USocialChatMessageEntry_OnMessageSet_Params
{
};

// Function SocialUMG.SocialChatMessageEntry.CanInteract
struct USocialChatMessageEntry_CanInteract_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SocialUMG.SocialGroupListEntry.HandleGetMenuContent
struct USocialGroupListEntry_HandleGetMenuContent_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SocialUMG.SocialInteractionButton.OnInteractionSet
struct USocialInteractionButton_OnInteractionSet_Params
{
};

// Function SocialUMG.SocialInteractionButton.IsPlatformOnlyFriend
struct USocialInteractionButton_IsPlatformOnlyFriend_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SocialUMG.SocialInteractionButton.GetInteractionName
struct USocialInteractionButton_GetInteractionName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SocialUMG.SocialActionMenu.OnOpened
struct USocialActionMenu_OnOpened_Params
{
};

// Function SocialUMG.SocialInteractionMenu.OnToggleConfirmation
struct USocialInteractionMenu_OnToggleConfirmation_Params
{
	bool                                               bIsVisible;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SocialUMG.SocialInteractionMenu.GetFirstEntryToCenter
struct USocialInteractionMenu_GetFirstEntryToCenter_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SocialUMG.SocialNameTextBlock.SetNickNameColor
struct USocialNameTextBlock_SetNickNameColor_Params
{
	struct FColor                                      InColor;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SocialUMG.SocialListInteractableEntryBase.HandleGetMenuContent
struct USocialListInteractableEntryBase_HandleGetMenuContent_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SocialUMG.SocialListEntry_SocialUser.OnUserPresenceChanged
struct USocialListEntry_SocialUser_OnUserPresenceChanged_Params
{
	EOnlineStatus                                      OnlineStatus;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
