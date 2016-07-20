#include "TriviaServer.h"



TriviaServer::TriviaServer()
{
	_static_roomIdSequence = 0;
}


TriviaServer::~TriviaServer()
{
}


void TriviaServer::server()
{
}


void TriviaServer::bindAndListen()
{
}


void TriviaServer::accept()
{
}


void TriviaServer::clientHandler(SOCKET s)
{
}


// Safly delete a user
void TriviaServer::safeDeleteUser(RecievedMessage* msg)
{
}


User* TriviaServer::handleSignin(RecievedMessage* msg)
{
	return nullptr;
}


bool TriviaServer::handleSignup(RecievedMessage* msg)
{
	return false;
}


void TriviaServer::handleSignout()
{
}


void TriviaServer::handleLeaveGame(RecievedMessage* msg)
{
}


void TriviaServer::handleStartGame(RecievedMessage* msg)
{
}


void TriviaServer::handlePlayerAnswer(RecievedMessage* msg)
{
}


bool TriviaServer::handleCreateRoom(RecievedMessage* msg)
{
}


bool TriviaServer::handleCloseRoom(RecievedMessage* msg)
{
	return false;
}


bool TriviaServer::handleJoinRoon(RecievedMessage* msg)
{
	return false;
}


bool TriviaServer::handleLeaveRoom(RecievedMessage* msg)
{
	return false;
}


void TriviaServer::handleGetUsersInRoom(RecievedMessage* msg)
{
}


bool TriviaServer::handleGetRooms()
{
	return false;
}


void TriviaServer::handleGetBestScores(RecievedMessage* msg)
{
}


void TriviaServer::handleGetPersonalStatus(RecievedMessage* msg)
{
}


void TriviaServer::handleRecievedMessages(RecievedMessage* msg)
{
}


void TriviaServer::addRecievedMessage(RecievedMessage* msg)
{
}


RecievedMessage* TriviaServer::buildRecievedMessage(SOCKET s, int i)
{
	return nullptr;
}


//User* TriviaServer::getUserByName()
//{
//	return nullptr;
//}


User* TriviaServer::getUserBySocket(SOCKET s)
{
	return nullptr;
}


User* TriviaServer::getUserByName(string name)
{
	return nullptr;
}


Room* TriviaServer::getRoomById(int roomId)
{
	return nullptr;
}
