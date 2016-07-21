#pragma once
#pragma comment (lib, "Ws2_32.lib")
#include <winsock2.h>
#include <windows.h>
#include <iostream>
#include <thread>
#include "TriviaServer.h"
using namespace std;



int createSocket();
void client_socket(SOCKET client);

int main(void)
{
	TriviaServer server;
	system("pause");
	return 0;
}

int createSocket()
{
// משתנים
	SOCKET s;
	WSADATA wsadata;
	printf("\nInitialising Winsock...");
	if (WSAStartup(MAKEWORD(2, 2), &wsadata) != 0)
	{
		printf("Failed. Error Code : %d", WSAGetLastError());
		return 1;
	}

	printf("Initialised.");

	static const unsigned short port = 20471;
	SOCKADDR_IN addr;

// איתחול הסוקט הראשי 	
//=======================================================================
	addr.sin_family = AF_INET;
	addr.sin_port = htons(port);
	addr.sin_addr.s_addr = htonl(INADDR_ANY);

	s = ::socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);// create socket

	if (s == INVALID_SOCKET)
		cout << "INVALID SOCKET" << endl;

	if (::bind(s, (LPSOCKADDR)&addr, sizeof(addr)) == SOCKET_ERROR)
	{
		cout << "SOCKET ERROR" << endl;
	}
	if (::listen(s, 1) == SOCKET_ERROR) {
		
		closesocket(s);
		WSACleanup();
		return 1;
	}

// חיבור והספת סוקט ללקוח שהיתחבר
//=======================================================================
	//----------------------
	// Create a SOCKET for accepting incoming requests.
	SOCKET AcceptSocket;

	//----------------------
	// Accept the connection.
	int aa = sizeof(addr);
	AcceptSocket = accept(s, (struct sockaddr*)&addr, &aa);
	if (AcceptSocket == INVALID_SOCKET) 
	{
		closesocket(s);
		WSACleanup();
		return 1;
	}

	// כאן צריך לפתוח תרד ולישלוח לו את הסוקט
	thread client_thread(client_socket, AcceptSocket);
//=======================================================================
	// פונקציה שסוגרת את הסוקט הראשי
	if (s)
		closesocket(s);

	WSACleanup();

	//return server_fd;

}

void client_socket(SOCKET client){

}