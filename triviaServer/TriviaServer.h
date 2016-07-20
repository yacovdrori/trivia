#pragma once
class TriviaServer
{
public:
	TriviaServer();
	~TriviaServer();
	void server();

private:
	bool handleJoinRoon(RecievedMessage* msg);
	bool handleLeaveRoom(RecievedMessage* msg);
	void handleGetUsersInRoom(RecievedMessage* msg);
	bool handleGetRooms();
	void handleGetBestScores(RecievedMessage* msg);
	void handleGetPersonalStatus(RecievedMessage* msg);
	void handleRecievedMessages(RecievedMessage* msg);
	void bindAndListen();
	void accept();
	void clientHandler(SOCKET s);
	// Safly delete a user
	void safeDeleteUser(RecievedMessage* msg);
	User* handleSignin(RecievedMessage* msg);
	bool handleSignup(RecievedMessage* msg);
	void handleSignout();
	void handleLeaveGame(RecievedMessage* msg);
	void handleStartGame(RecievedMessage* msg);
	void handlePlayerAnswer(RecievedMessage* msg);
	bool handleCreateRoom(RecievedMessage* msg);
	bool handleCloseRoom(RecievedMessage* msg);
public:
	void addRecievedMessage(RecievedMessage* msg);
private:
	RecievedMessage* buildRecievedMessage(SOCKET s, int i);
public:
//	User* getUserByName();
private:
	User* getUserBySocket(SOCKET s);
	User* getUserByName(string name);
	Room* getRoomById(int roomId);
	SOCKET _socket;
	map<SOCKET, User*> _connectedUsers;
	DataBase _db;
	map<, int, Room*> _roomList;
	mutex mtxRecievedMessages;
	queue<recievedMesseges> _queRcvMsgs;
	int _static_roomIdSequence;
};

