#include<iostream>
#include<string>
#include<vector>
#include "Polygon.h"
using namespace std;
class Ques_Bank
{
private:
	int Tri_num;//��������Ŀ����
	int Ques_num;//���������
	string BankName;//�����
public:
	vector<Polygon*>v;//�洢�Ѿ�������Ŀ
	void SetBankName(string BankName);//������������
	string GetBankName();//��ȡ��������
	void SetQuestionNum(int Ques_num);//����������
	int GetQuestionNum();//��ȡ������
	Ques_Bank(string BankName, int Ques_num);//���캯��
	//��ϰ����
	void exercise();
};

