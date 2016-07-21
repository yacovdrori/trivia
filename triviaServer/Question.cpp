#include "Question.h"
#include <iostream>
using namespace std;


Question::Question()
{
	_correctAnswerIndex = 0;
	_id = 0;
}


Question::~Question()
{
}


Question::Question(int id, string q1, string q2, string q3, string q4)
{
}


string Question::getQestions()
{
	return string();
}


//string Question::getAnswers()
//{
//	return string();
//}


string* Question::getAnswers()
{
	return nullptr;
}


int Question::getCorrectAnswerIndex()
{
	return 0;
}


int Question::getId()
{
	return 0;
}
