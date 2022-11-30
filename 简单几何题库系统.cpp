#include <iostream>
#include"Polygon.h"
#include"Ques_Bank.h"
#include"Triangle.h"
#include"Circular.h"
#include"Rectangle.h"
#include"Trapezoid.h"
#include "User.h"
#include<vector>
#include<ctime>
using namespace std;
int main()
{
here1:
	Ques_Bank x("几何题库", 0);
	//User user;
	int chose = -1;
	cout << endl;
	cout << "*************************************" << endl;
	cout << "*************************************" << endl;
	cout << "********欢迎使用几何题库系统*********" << endl;
	cout << "*************************************" << endl;
	/*cout << "********1.注册    2.登录*************" << endl;
	cout << "*************************************" << endl;
	cout << "*****【系统提示】请输入你的选择：****" << endl;*/
	cout << "*************************************" << endl;
	cout << "*************************************" << endl;
	/*cin >> chose;
	if (chose > 2 || chose < -1)
	{
		cout << "\t\t\t【系统提示】输入格式错误，请重新输入：";
		cin >> chose;
	}
	switch (chose)
	{
		case 1:
			user.Registers();
			goto here1;
			break;
		case 2:
			user.Login();*/
			x.exercise();
			for (int t = 0; t < x.GetQuestionNum(); t++) {
				if (x.v[t] != NULL) {
					delete x.v[t];
					x.v[t] = NULL;
				}
			}
			vector<Polygon*>().swap(x.v);
	/*		break;
	}*/


	
}