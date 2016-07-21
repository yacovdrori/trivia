#pragma once
class Question
{
public:
	Question();
	~Question();
private:
	string _question;
	string _answers[4];
	int _correctAnswerIndex;
	int _id;
public:
	Question(int id, string q1, string q2, string q3, string q4);
	string getQestions();
//	string getAnswers();
	string* getAnswers();
	int getCorrectAnswerIndex();
	int getId();
};

