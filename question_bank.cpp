#include "question_bank.h"

question_bank::question_bank(string question_name, int question_num, triangle* T_triangle,int i)
{
	this->question_name = question_name;
	this->question_num = question_num;
	this->T_triangle[i] = T_triangle;
}
