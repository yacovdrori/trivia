#include "TriviaServer.h"
#pragma comment (lib, "Ws2_32.lib")
#include <winsock2.h>
#include <windows.h>
#include <iostream>
#include <thread>
#include "User.h"

using namespace std;


TriviaServer::TriviaServer()
{
	_static_roomIdSequence = 0;
	server();
	bindAndListen();
}


TriviaServer::~TriviaServer()
{
}


void TriviaServer::server()
{
	printf("\nInitialising Winsock...");
	if (WSAStartup(MAKEWORD(2, 2), &wsadata) != 0)
	{
		printf("Failed. Error Code : %d", WSAGetLastError());
	}

	printf("Initialised.");

	static const unsigned short port = 20471;

	// איתחול הסוקט הראשי 	
	//=======================================================================
	addr.sin_family = AF_INET;
	addr.sin_port = htons(port);
	addr.sin_addr.s_addr = htonl(INADDR_ANY);

	_socket = ::socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);// create socket

	if (_socket == INVALID_SOCKET)
		cout << "INVALID SOCKET" << endl;
	else
		cout << "bound to socket" << _socket;

}


void TriviaServer::bindAndListen()
{
	if (::bind(_socket, (LPSOCKADDR)&addr, sizeof(addr)) == SOCKET_ERROR)
	{
		cout << "SOCKET ERROR" << endl;
	}
	if (::listen(_socket, 1) == SOCKET_ERROR) {

		closesocket(_socket);
		WSACleanup();
	}
}


void TriviaServer::accept()
{
	// חיבור והספת סוקט ללקוח שהיתחבר
//=======================================================================
	//----------------------
	// Create a SOCKET for accepting incoming requests.
	SOCKET AcceptSocket;

	//----------------------
	// Accept the connection.
	int aa = sizeof(addr);
	AcceptSocket = ::accept(_socket, (struct sockaddr*)&addr, &aa);
	if (AcceptSocket == INVALID_SOCKET) 
	{
		closesocket(_socket);
		WSACleanup();
	}

	// כאן צריך לפתוח תרד ולישלוח לו את הסוקט
	thread client_thread(clientHandler, AcceptSocket);
//=======================================================================
	// פונקציה שסוגרת את הסוקט הראשי
	if (_socket)
		closesocket(_socket);

	WSACleanup();

	//return server_fd;


}


void TriviaServer::clientHandler(SOCKET client)
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
