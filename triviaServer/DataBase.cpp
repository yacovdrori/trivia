#include "DataBase.h"



DataBase::DataBase()
{
}


DataBase::~DataBase()
{
}


bool DataBase::isUserExists(string user)
{
	return false;
}


bool DataBase::addNewUser(string name, string pass, string email)
{
	return false;
}


bool DataBase::isUserAndPassMatch(string user, string pass)
{
	return false;
}


vector<Question*> DataBase::initQestions(int i)
{
	return vector<Question*>();
}


vector<string> DataBase::getBestScores()
{
	return vector<string>();
}


vector<string> DataBase::getPersonalStatus(string user)
{
	return vector<string>();
}


int DataBase::insertNewGame()
{
	return 0;
}


bool DataBase::updateGameStatus(int i)
{
	return false;
}


bool DataBase::addAnswerToPlayer(int gameId, int questionId, string username, string answer, bool isCorrect, int answerTime)
{
	return false;
}


int DataBase::callbackCaount(void* v, int ii, char** c, char** c1)
{
	return 0;
}


int DataBase::callbackQuestions(void* v, int i, char** c, char** c1)
{
	return 0;
}


int DataBase::callbackBestScores(void* v, int i, char** c, char** c1)
{
	return 0;
}


int DataBase::callBackPersonalStatus(void* v, int i, char** c, char** c1)
{
	return 0;
}
