//#include "iostream"
//#include "fstream"
//#include "string"
//#include <conio.h>
//using namespace std;
//
//#define SIZE 100//����û�����
//int scount = 0;//�������浱ǰ��ע���û���
//
////�û���
//class User
//{
//private:
//	string phone;//�绰
//	string password;//����
//public:
//	User() {};
//	void Registers();//ע��
//	void Login();//��¼
//	void save();//����
//	void read();//��ȡ
//}us;
//
//User user[SIZE];
//
////����
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
////��ȡ
//void User::read()
//{
//	ifstream ifile;
//	ifile.open("user.txt", ios::in);
//
//	scount = 0;
//
//	if (!ifile.is_open())
//	{
//		//cout << "�ļ���ʧ�ܣ�" << endl;
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
////ע��
//void User::Registers()
//{
//	us.read();//��ȡ�Ѵ����û�����
//	string ph;//�绰
//	string pw1;//����1
//	string pw2;//����2
//	for (int i = scount; i < SIZE; i++)
//	{
//	here2:
//		cout << "\t\t\t��ϵͳ��ʾ���������ֻ��ţ�";
//		cin >> ph;
//		//�ж���������û���Ϣ�Ƿ��Ѵ��ڣ�����Ѵ������������룩
//		for (int i = 0; i < scount; i++)
//		{
//			if (ph == user[i].phone)
//			{
//				cout << "\t\t\t��ϵͳ��ʾ���û��Ѵ��ڣ�" << endl;
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
//		cout << "\t\t\t��ϵͳ��ʾ�����������룺";
//		cin >> pword;
//		user[i].password = pword;
//		cout << "\t\t\t��ϵͳ��ʾ�����ٴ����룺";
//		cin >> pword1;
//		if (pword1 != user[i].password)
//		{
//			cout << "\t\t\t��ϵͳ��ʾ�����벻һ�£�" << endl;
//			goto here2;
//		}
//		else
//		{
//			scount++;//��ע���û���1
//			cout << "\t\t\t��ϵͳ��ʾ��ע��ɹ���" << endl;
//			us.save();//�����û�����
//		}
//		break;
//
//		char choice;
//		cout << "\t\t\t��ϵͳ��ʾ���Ƿ����ע��(Y/N)�� :";
//		while (1)
//		{
//			cin >> choice;
//			if (choice == 'y' || choice == 'Y' || choice == 'n' || choice == 'N')
//				break;
//			else
//				cout << "\t\t\t��ϵͳ��ʾ�������ʽ�������������룺 ";
//		}
//		if (choice == 'n' || choice == 'N')
//		{
//			break;
//		}
//	}
//}
//
////��¼
//void User::Login()
//{
//	us.read();//��ȡ�Ѵ����û�����
//	string ph;//�绰
//	string pw;//����
//	int time = 0;//ͳ�ƱȽϴ���
//here:
//	cout << "\t\t\t��ϵͳ��ʾ���������ֻ��ţ�";
//	cin >> ph;
//	string pword;
//	char ch, passwords0[20];
//	int x = 0;
//	cout << "\t\t\t��ϵͳ��ʾ�����������룺";
//	cin >> pword;
//	for (int i = 0; i < scount; i++)
//	{
//		if (ph == user[i].phone && pword == user[i].password)
//		{
//			time++;
//			//cout << "\t\t\t��ϵͳ��ʾ����¼�ɹ���" << endl;
//		}
//	}
//	if (time == 0)
//	{
//		cout << "\t\t\t��ϵͳ��ʾ���ֻ��Ż��������" << endl;
//		goto here;
//	}
//
//}
