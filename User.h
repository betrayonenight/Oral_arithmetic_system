//#include "iostream"
//#include "fstream"
//#include "string"
//#include <conio.h>
//using namespace std;
//
//#define SIZE 100//最大用户容量
//int scount = 0;//用作储存当前已注册用户数
//
////用户类
//class User
//{
//private:
//	string phone;//电话
//	string password;//密码
//public:
//	User() {};
//	void Registers();//注册
//	void Login();//登录
//	void save();//保存
//	void read();//读取
//}us;
//
//User user[SIZE];
//
////保存
//void User::save()
//{
//	ofstream ofile;
//	ofile.open("user.txt", ios::out);
//
//	for (int i = 0; i < scount; i++)
//	{
//		ofile << user[i].phone << endl;
//		ofile << user[i].password << endl;
//	}
//	ofile.close();
//}
//
////读取
//void User::read()
//{
//	ifstream ifile;
//	ifile.open("user.txt", ios::in);
//
//	scount = 0;
//
//	if (!ifile.is_open())
//	{
//		//cout << "文件打开失败！" << endl;
//		return;
//	}
//
//	for (int i = 0; !ifile.eof(); i++)
//	{
//		ifile >> user[i].phone;
//		ifile >> user[i].password;
//		scount++;
//	}
//	scount--;
//	ifile.close();
//}
//
////注册
//void User::Registers()
//{
//	us.read();//读取已储存用户数据
//	string ph;//电话
//	string pw1;//密码1
//	string pw2;//密码2
//	for (int i = scount; i < SIZE; i++)
//	{
//	here2:
//		cout << "\t\t\t【系统提示】请输入手机号：";
//		cin >> ph;
//		//判断新输入的用户信息是否已存在（如果已存在则重新输入）
//		for (int i = 0; i < scount; i++)
//		{
//			if (ph == user[i].phone)
//			{
//				cout << "\t\t\t【系统提示】用户已存在！" << endl;
//				goto here2;
//			}
//		}
//		user[i].phone = ph;
//		string pword;
//		char ch, passwords0[20];
//		int x = 0;
//		string pword1;
//		char ch1, passwords1[20];
//		int x1 = 0;
//		cout << "\t\t\t【系统提示】请输入密码：";
//		cin >> pword;
//		user[i].password = pword;
//		cout << "\t\t\t【系统提示】请再次密码：";
//		cin >> pword1;
//		if (pword1 != user[i].password)
//		{
//			cout << "\t\t\t【系统提示】密码不一致！" << endl;
//			goto here2;
//		}
//		else
//		{
//			scount++;//已注册用户加1
//			cout << "\t\t\t【系统提示】注册成功！" << endl;
//			us.save();//保存用户数据
//		}
//		break;
//
//		char choice;
//		cout << "\t\t\t【系统提示】是否继续注册(Y/N)？ :";
//		while (1)
//		{
//			cin >> choice;
//			if (choice == 'y' || choice == 'Y' || choice == 'n' || choice == 'N')
//				break;
//			else
//				cout << "\t\t\t【系统提示】输入格式错误，请重新输入： ";
//		}
//		if (choice == 'n' || choice == 'N')
//		{
//			break;
//		}
//	}
//}
//
////登录
//void User::Login()
//{
//	us.read();//读取已储存用户数据
//	string ph;//电话
//	string pw;//密码
//	int time = 0;//统计比较次数
//here:
//	cout << "\t\t\t【系统提示】请输入手机号：";
//	cin >> ph;
//	string pword;
//	char ch, passwords0[20];
//	int x = 0;
//	cout << "\t\t\t【系统提示】请输入密码：";
//	cin >> pword;
//	for (int i = 0; i < scount; i++)
//	{
//		if (ph == user[i].phone && pword == user[i].password)
//		{
//			time++;
//			//cout << "\t\t\t【系统提示】登录成功！" << endl;
//		}
//	}
//	if (time == 0)
//	{
//		cout << "\t\t\t【系统提示】手机号或密码错误！" << endl;
//		goto here;
//	}
//
//}
