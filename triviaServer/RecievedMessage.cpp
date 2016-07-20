#include "RecievedMessage.h"
#include <vector>
#include "User.h"
using namespace std;

RecievedMessage::RecievedMessage()
{
	_messageCode = 0;
}


RecievedMessage::~RecievedMessage()
{
}


RecievedMessage::RecievedMessage(SOCKET s, int i)
{
}


RecievedMessage::RecievedMessage(SOCKET s, int i, vector<string> vec)
{
}


SOCKET RecievedMessage::getSock()
{
	return SOCKET();
}


User* RecievedMessage::getUser()
{
	return nullptr;
}


void RecievedMessage::setUser(User* user)
{
}


int RecievedMessage::getMessageCode()
{
	return 0;
}


std::vector<string>& RecievedMessage::getValues()
{
	// TODO: insert return statement here
}
