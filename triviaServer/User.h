#pragma once
#pragma comment (lib, "Ws2_32.lib")
#include <winsock2.h>
#include <windows.h>
#include <iostream>
#include <thread>
#include "roomClass.h"
using namespace std;

class User
{
public:
	User();
	~User();
private:
	
	string _username;
	Room* _currRoom;
	Game* _currGame;
	SOCKET _sock;
public:
	User(string name, SOCKET s);
	void send(string msg);
	string getUserName();
	SOCKET getSocket();
	Room* getRoom();
	Game* getGame();
	void setGame(Game* game);
	void clearRoom();
	bool createRoom(int roomId, string roomName, int maxUsers, int qustionNum, int qustionTime);
	bool joinRoom(room* room);
	void leaveRoom();
	int closeRoom();
	bool leaveGame();
};

