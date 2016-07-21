#pragma once
#include <vector>
#include "User.h"
#include "sqlite3.h"
#include "Question.h"
#include <map>
using namespace std;
class game
{
public:
	game();
	~game();
private:
	vector<Question*> _questions;
	vector<User*> _players;
	int _questions_no;
	int _currQuestionIndex;
	DataBase& _db;
	map<string, int> _results;
	int _currentTurnAnswers;
public:
	void Game(const vector<User*>& users, int i, DataBase& db);
	void sendFirstQuestion();
	void handleFinishQuestion();
	bool handleNextTurn();
	bool handleAnswerFromUser(User* user, int i, int n);
	bool leaveGame(User* user);
	int getId();
	bool insertGameToDb();
	void initQuestionFromDB();
	void sendQuestionToAllUsers();
};

