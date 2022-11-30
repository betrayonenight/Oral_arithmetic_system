#include<iostream>
#include<string>
#include<vector>
#include "Polygon.h"
using namespace std;
class Ques_Bank
{
private:
	int Tri_num;//三角形题目数量
	int Ques_num;//总题库数量
	string BankName;//题库名
public:
	vector<Polygon*>v;//存储已经做的题目
	void SetBankName(string BankName);//设置题库的名字
	string GetBankName();//获取题库的名字
	void SetQuestionNum(int Ques_num);//设置总题数
	int GetQuestionNum();//获取总体数
	Ques_Bank(string BankName, int Ques_num);//构造函数
	//练习函数
	void exercise();
};

