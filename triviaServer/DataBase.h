#pragma once
#include <iostream>
#include <vector>
#include "Question.h"

using namespace std;
class DataBase
{
public:
	DataBase();
	~DataBase();
	bool isUserExists(string user);
	bool addNewUser(string name, string pass, string email);
	bool isUserAndPassMatch(string user, string pass);
	vector<Question*> initQestions(int i);
	vector<string> getBestScores();
	vector<string> getPersonalStatus(string user);
	int insertNewGame();
	bool updateGameStatus(int i);
	bool addAnswerToPlayer(int gameId, int questionId, string username, string answer, bool isCorrect, int answerTime);
	static int callbackCaount(void* v, int ii, char** c, char** c1);
	static int callbackQuestions(void* v, int i, char** c, char** c1);
	static int callbackBestScores(void* v, int i, char** c, char** c1);
	static int callBackPersonalStatus(void* v, int i, char** c, char** c1);
};

