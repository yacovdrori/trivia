#include "User.h"



User::User()
{
}


User::~User()
{
}


User::User(string name, SOCKET s)
{
}


void User::send(string msg)
{
}


string User::getUserName()
{
	return string();
}


SOCKET User::getSocket()
{
	return SOCKET();
}


Room* User::getRoom()
{
	return nullptr;
}


Game* User::getGame()
{
	return nullptr;
}


void User::setGame(Game* game)
{
}


void User::clearRoom()
{
}


bool User::createRoom(int roomId, string roomName, int maxUsers, int qustionNum, int qustionTime)
{
	return false;
}


bool User::joinRoom(room* room)
{
	return false;
}


void User::leaveRoom()
{
}


int User::closeRoom()
{
	return 0;
}


bool User::leaveGame()
{
	return false;
}
