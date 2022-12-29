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

// Function SocialUMG.SocialChatContainer.SendCurrentMessage
// (Final, Native, Public, BlueprintCallable)

void USocialChatContainer::SendCurrentMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialUMG.SocialChatContainer.SendCurrentMessage");

	USocialChatContainer_SendCurrentMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialUMG.SocialChatContainer.OnChatOpenChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bShouldBeOpen                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USocialChatContainer::OnChatOpenChanged(bool bShouldBeOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialUMG.SocialChatContainer.OnChatOpenChanged");

	USocialChatContainer_OnChatOpenChanged_Params params;
	params.bShouldBeOpen = bShouldBeOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialUMG.SocialChatContainer.HandleRightTabPressed
// (Final, Native, Public, BlueprintCallable)

void USocialChatContainer::HandleRightTabPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialUMG.SocialChatContainer.HandleRightTabPressed");

	USocialChatContainer_HandleRightTabPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialUMG.SocialChatContainer.HandleLeftTabPressed
// (Final, Native, Public, BlueprintCallable)

void USocialChatContainer::HandleLeftTabPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialUMG.SocialChatContainer.HandleLeftTabPressed");

	USocialChatContainer_HandleLeftTabPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialUMG.SocialChatContainer.FocusEditableText
// (Final, Native, Public, BlueprintCallable)

void USocialChatContainer::FocusEditableText()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialUMG.SocialChatContainer.FocusEditableText");

	USocialChatContainer_FocusEditableText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialUMG.SocialChatContainer.DynamicHandleMessageTextCommitted
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FText                   MessageText                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USocialChatContainer::DynamicHandleMessageTextCommitted(struct FText MessageText, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialUMG.SocialChatContainer.DynamicHandleMessageTextCommitted");

	USocialChatContainer_DynamicHandleMessageTextCommitted_Params params;
	params.MessageText = MessageText;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialUMG.SocialChatMessageEntry.OnMessageSet
// (Event, Protected, BlueprintEvent)

void USocialChatMessageEntry::OnMessageSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialUMG.SocialChatMessageEntry.OnMessageSet");

	USocialChatMessageEntry_OnMessageSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialUMG.SocialChatMessageEntry.CanInteract
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USocialChatMessageEntry::CanInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialUMG.SocialChatMessageEntry.CanInteract");

	USocialChatMessageEntry_CanInteract_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SocialUMG.SocialGroupListEntry.HandleGetMenuContent
// (Final, Native, Protected)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* USocialGroupListEntry::HandleGetMenuContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialUMG.SocialGroupListEntry.HandleGetMenuContent");

	USocialGroupListEntry_HandleGetMenuContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SocialUMG.SocialInteractionButton.OnInteractionSet
// (Event, Protected, BlueprintEvent)

void USocialInteractionButton::OnInteractionSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialUMG.SocialInteractionButton.OnInteractionSet");

	USocialInteractionButton_OnInteractionSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialUMG.SocialInteractionButton.IsPlatformOnlyFriend
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USocialInteractionButton::IsPlatformOnlyFriend()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialUMG.SocialInteractionButton.IsPlatformOnlyFriend");

	USocialInteractionButton_IsPlatformOnlyFriend_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SocialUMG.SocialInteractionButton.GetInteractionName
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FName USocialInteractionButton::GetInteractionName()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialUMG.SocialInteractionButton.GetInteractionName");

	USocialInteractionButton_GetInteractionName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SocialUMG.SocialActionMenu.OnOpened
// (Event, Protected, BlueprintEvent)

void USocialActionMenu::OnOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialUMG.SocialActionMenu.OnOpened");

	USocialActionMenu_OnOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialUMG.SocialInteractionMenu.OnToggleConfirmation
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsVisible                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USocialInteractionMenu::OnToggleConfirmation(bool bIsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialUMG.SocialInteractionMenu.OnToggleConfirmation");

	USocialInteractionMenu_OnToggleConfirmation_Params params;
	params.bIsVisible = bIsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialUMG.SocialInteractionMenu.GetFirstEntryToCenter
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* USocialInteractionMenu::GetFirstEntryToCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialUMG.SocialInteractionMenu.GetFirstEntryToCenter");

	USocialInteractionMenu_GetFirstEntryToCenter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SocialUMG.SocialNameTextBlock.SetNickNameColor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                  InColor                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USocialNameTextBlock::SetNickNameColor(struct FColor InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialUMG.SocialNameTextBlock.SetNickNameColor");

	USocialNameTextBlock_SetNickNameColor_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialUMG.SocialListInteractableEntryBase.HandleGetMenuContent
// (Final, Native, Protected)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* USocialListInteractableEntryBase::HandleGetMenuContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialUMG.SocialListInteractableEntryBase.HandleGetMenuContent");

	USocialListInteractableEntryBase_HandleGetMenuContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SocialUMG.SocialListEntry_SocialUser.OnUserPresenceChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// EOnlineStatus                  OnlineStatus                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USocialListEntry_SocialUser::OnUserPresenceChanged(EOnlineStatus OnlineStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialUMG.SocialListEntry_SocialUser.OnUserPresenceChanged");

	USocialListEntry_SocialUser_OnUserPresenceChanged_Params params;
	params.OnlineStatus = OnlineStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
