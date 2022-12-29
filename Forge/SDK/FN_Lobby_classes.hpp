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

// Class Lobby.LobbyBeaconClient
// 0x0088 (0x0320 - 0x0298)
class ALobbyBeaconClient : public AOnlineBeaconClient
{
public:
	class ALobbyBeaconState*                           LobbyState;                                               // 0x0298(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ALobbyBeaconPlayerState*                     PlayerState;                                              // 0x02A0(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x02A8(0x0001) MISSED OFFSET
	ELobbyBeaconJoinState                              LobbyJoinServerState;                                     // 0x02A9(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x76];                                      // 0x02AA(0x0076) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Lobby.LobbyBeaconClient");
		return ptr;
	}


	void ServerSetPartyOwner(struct FUniqueNetIdRepl InUniqueId, struct FUniqueNetIdRepl InPartyOwnerId);
	void ServerNotifyJoiningServer();
	void ServerLoginPlayer(struct FString InSessionId, struct FUniqueNetIdRepl InUniqueId, struct FString UrlString);
	void ServerKickPlayer(struct FUniqueNetIdRepl PlayerToKick, struct FText Reason);
	void ServerDisconnectFromLobby();
	void ServerCheat(struct FString Msg);
	void ClientWasKicked(struct FText KickReason);
	void ClientSetInviteFlags(struct FJoinabilitySettings Settings);
	void ClientPlayerLeft(struct FUniqueNetIdRepl InUniqueId);
	void ClientPlayerJoined(struct FText NewPlayerName, struct FUniqueNetIdRepl InUniqueId);
	void ClientLoginComplete(struct FUniqueNetIdRepl InUniqueId, bool bWasSuccessful);
	void ClientJoinGame();
	void ClientAckJoiningServer();
};


// Class Lobby.LobbyBeaconHost
// 0x0038 (0x0278 - 0x0240)
class ALobbyBeaconHost : public AOnlineBeaconHostObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0240(0x0008) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0240(0x0028) UNKNOWN PROPERTY: SoftClassProperty Lobby.LobbyBeaconHost.LobbyStateClass
	class ALobbyBeaconState*                           LobbyState;                                               // 0x0270(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Lobby.LobbyBeaconHost");
		return ptr;
	}

};


// Class Lobby.LobbyBeaconPlayerState
// 0x00C0 (0x02D8 - 0x0218)
class ALobbyBeaconPlayerState : public AInfo
{
public:
	struct FText                                       DisplayName;                                              // 0x0218(0x0018) (Net, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                            UniqueId;                                                 // 0x0230(0x0028) (Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                            PartyOwnerUniqueId;                                       // 0x0258(0x0028) (Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInLobby;                                                 // 0x0280(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0281(0x0007) MISSED OFFSET
	class AOnlineBeaconClient*                         ClientActor;                                              // 0x0288(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0290(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Lobby.LobbyBeaconPlayerState");
		return ptr;
	}


	void OnRep_UniqueId();
	void OnRep_PartyOwner();
	void OnRep_InLobby();
};


// Class Lobby.LobbyBeaconState
// 0x01A8 (0x03C0 - 0x0218)
class ALobbyBeaconState : public AInfo
{
public:
	int                                                MaxPlayers;                                               // 0x0218(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x021C(0x0004) MISSED OFFSET
	class UClass*                                      LobbyBeaconPlayerStateClass;                              // 0x0220(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0228(0x0008) MISSED OFFSET
	bool                                               bLobbyStarted;                                            // 0x0230(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0231(0x0003) MISSED OFFSET
	float                                              WaitForPlayersTimeRemaining;                              // 0x0234(0x0004) (Net, ZeroConstructor, Config, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLobbyPlayerStateInfoArray                  Players;                                                  // 0x0238(0x0120) (Net, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x68];                                      // 0x0358(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Lobby.LobbyBeaconState");
		return ptr;
	}


	void OnRep_WaitForPlayersTimeRemaining();
	void OnRep_LobbyStarted();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
