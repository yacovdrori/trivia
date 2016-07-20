#pragma once
class RecievedMessage
{
public:
	RecievedMessage();
	~RecievedMessage();
private:
	SOCKET _sock;
	User* _user;
	int _messageCode;
	vector<string> _values;
public:
	RecievedMessage(SOCKET s, int i);
	RecievedMessage(SOCKET s, int i, vector<string> vec);
	SOCKET getSock();
	User* getUser();
	void setUser(User* user);
	int getMessageCode();
	vector<string>& getValues();
};

