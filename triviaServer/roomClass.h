#pragma once

#include <iostream>
#include "User.h"
using namespace std;

class Room
{
public:
	Room(int, User*, string, int, int, int);
	bool joinRoom(User*); 
	void leaveRoom(User*);
	int closeRoom(User*);
	vector<User*> getUsers();
	string getUsersListMessage();
	int getQuestionsNo();
	int getID();
	string getName();
private:
	vector<User*> _users;
	vector<User*> _admin;
	int _maxUsers;
	int _questionTime;
	int _questionsNo;
	string _name;
	int _id;
	string getUsersAsString(vector<User*>, User*);
	bool sendMassage(string);
	bool sendMassege(User*, string);
};

Room::Room(int id, User* admin, string name, int maxUsers, int questionsNo, int questionTime)
{
	_id = id;
	_maxUsers = maxUsers;
	_questionsNo = questionsNo;
	_questionTime = questionTime;
	_name = name;
	_admin = admin;
}

string Room::getUsersAsString(vector<User*> usersList, User* excludeUser)
{
	//TODO: return all of the other users
	string userToReturn = excludeUser;
	return userToReturn;
}

string Room::getUsersListMessage()
{
	//make message of all the users in the room(list)to send to the client make	message look like template ""108 numberOfUsers ## username ## username""
	string message;
	int numOusers;
	numOusers = sizeof(_users);
	message += '108';
	message += numOusers;
	//continue from here next thing should do a loop that insert usernames from list every time add ##
	for (int i = 0; i < numOusers; i++)
	{
		message += _users[i]->_username;
		message += '##';
	}
	return message;
}

