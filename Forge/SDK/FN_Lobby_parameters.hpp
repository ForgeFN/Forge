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

// Function Lobby.LobbyBeaconClient.ServerSetPartyOwner
struct ALobbyBeaconClient_ServerSetPartyOwner_Params
{
	struct FUniqueNetIdRepl                            InUniqueId;                                               // (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                            InPartyOwnerId;                                           // (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer
struct ALobbyBeaconClient_ServerNotifyJoiningServer_Params
{
};

// Function Lobby.LobbyBeaconClient.ServerLoginPlayer
struct ALobbyBeaconClient_ServerLoginPlayer_Params
{
	struct FString                                     InSessionId;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                            InUniqueId;                                               // (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UrlString;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Lobby.LobbyBeaconClient.ServerKickPlayer
struct ALobbyBeaconClient_ServerKickPlayer_Params
{
	struct FUniqueNetIdRepl                            PlayerToKick;                                             // (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Reason;                                                   // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby
struct ALobbyBeaconClient_ServerDisconnectFromLobby_Params
{
};

// Function Lobby.LobbyBeaconClient.ServerCheat
struct ALobbyBeaconClient_ServerCheat_Params
{
	struct FString                                     Msg;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Lobby.LobbyBeaconClient.ClientWasKicked
struct ALobbyBeaconClient_ClientWasKicked_Params
{
	struct FText                                       KickReason;                                               // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Lobby.LobbyBeaconClient.ClientSetInviteFlags
struct ALobbyBeaconClient_ClientSetInviteFlags_Params
{
	struct FJoinabilitySettings                        Settings;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Lobby.LobbyBeaconClient.ClientPlayerLeft
struct ALobbyBeaconClient_ClientPlayerLeft_Params
{
	struct FUniqueNetIdRepl                            InUniqueId;                                               // (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Lobby.LobbyBeaconClient.ClientPlayerJoined
struct ALobbyBeaconClient_ClientPlayerJoined_Params
{
	struct FText                                       NewPlayerName;                                            // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                            InUniqueId;                                               // (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Lobby.LobbyBeaconClient.ClientLoginComplete
struct ALobbyBeaconClient_ClientLoginComplete_Params
{
	struct FUniqueNetIdRepl                            InUniqueId;                                               // (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Lobby.LobbyBeaconClient.ClientJoinGame
struct ALobbyBeaconClient_ClientJoinGame_Params
{
};

// Function Lobby.LobbyBeaconClient.ClientAckJoiningServer
struct ALobbyBeaconClient_ClientAckJoiningServer_Params
{
};

// Function Lobby.LobbyBeaconPlayerState.OnRep_UniqueId
struct ALobbyBeaconPlayerState_OnRep_UniqueId_Params
{
};

// Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner
struct ALobbyBeaconPlayerState_OnRep_PartyOwner_Params
{
};

// Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby
struct ALobbyBeaconPlayerState_OnRep_InLobby_Params
{
};

// Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining
struct ALobbyBeaconState_OnRep_WaitForPlayersTimeRemaining_Params
{
};

// Function Lobby.LobbyBeaconState.OnRep_LobbyStarted
struct ALobbyBeaconState_OnRep_LobbyStarted_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
