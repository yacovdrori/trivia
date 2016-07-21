#include "game.h"
using namespace std;



game::game()
{
	_questions_no = 0;
	_currQuestionIndex = 0;
	_currentTurnAnswers = 0;
	_db = 0;
}


game::~game()
{
}


void game::Game(const vector<User*>& users, int i, DataBase& db)
{
}


void game::sendFirstQuestion()
{
}


void game::handleFinishQuestion()
{
}


bool game::handleNextTurn()
{
	return false;
}


bool game::handleAnswerFromUser(User* user, int i, int n)
{
	return false;
}


bool game::leaveGame(User* user)
{
	return false;
}


int game::getId()
{
	return 0;
}


bool game::insertGameToDb()
{
	return false;
}


void game::initQuestionFromDB()
{
}


void game::sendQuestionToAllUsers()
{
}
