#include "Ques_Bank.h"
#include"Circular.h"
#include"Triangle.h"
#include"Rectangle.h"
#include"Trapezoid.h"
#include<ctime>
void Ques_Bank::SetBankName(string BankName)
{
	this->BankName = BankName;
}

string Ques_Bank::GetBankName()
{
	return BankName;
}

void Ques_Bank::SetQuestionNum(int Ques_num)
{
	this->Ques_num = Ques_num;
}

int Ques_Bank::GetQuestionNum()
{
	return Ques_num;
}

Ques_Bank::Ques_Bank(string BankName, int Ques_num)
{
	SetBankName(BankName);
	SetQuestionNum(Ques_num);
}

void Ques_Bank::exercise()
{
    srand((int)time(NULL));
    int num, t, cord[100][100] = { 0 }, type;
    int num_1=0;
    int num_2 = 0;
    double grade = 0, tem,a;
    cout << "*************************************" << endl;
    cout << "*************************************" << endl;
    cout << "*****�����뱾����ϰ����Ŀ��**********" << endl;
    cout << "*************************************" << endl;
    cin >> num;
    num_1 = num_2 + num;
    for (t = num_2; t < num_1; t++) {
        type = rand() % 8;
        switch (type) {
    //Բ
        case 0:
            v.push_back(new Circular((rand() % 100 + 1) * 0.1));
            SetQuestionNum(GetQuestionNum() + 1);
            tem = grade;
            cord[t][0] = type;
            grade += v[t]->Calculate_Area();
            if (tem != grade) {
                cord[t][1] = 1;
            }
            break;
        case 1:
            v.push_back(new Circular((rand() % 100 + 1) * 0.1));
            SetQuestionNum(GetQuestionNum() + 1);
            tem = grade;
            cord[t][0] = type;
            grade += v[t]->Calculate_Perimeter();
            if (tem != grade) {
                cord[t][1] = 1;
            }
            break;
    //������
        case 2:
            v.push_back(new Triangle((rand() % 100 + 1) * 0.1, (rand() % 100 + 1) * 0.1));
            SetQuestionNum(GetQuestionNum() + 1);
            tem = grade;
            cord[t][0] = type;
            grade += v[t]->Calculate_Area();
            if (tem != grade) {
                cord[t][1] = 1;
            }
            break;
        case 3:
            v.push_back(new Triangle((rand() % 100 + 1) * 0.1, (rand() % 100 + 1) * 0.1));
            SetQuestionNum(GetQuestionNum() + 1);
            tem = grade;
            cord[t][0] = type;
            grade += v[t]->Calculate_Perimeter();
            if (tem != grade) {
                cord[t][1] = 1;
            }
            break;
    //����
        case 4:
            v.push_back(new Rectangle((rand() % 100 + 1) * 0.1));
            SetQuestionNum(GetQuestionNum() + 1);
            tem = grade;
            cord[t][0] = type;
            grade += v[t]->Calculate_Area();
            if (tem != grade) {
                cord[t][1] = 1;
            }
            break;
        case 5:
            v.push_back(new Rectangle((rand() % 100 + 1) * 0.1));
            SetQuestionNum(GetQuestionNum() + 1);
            tem = grade;
            cord[t][0] = type;
            grade += v[t]->Calculate_Perimeter();
            if (tem != grade) {
                cord[t][1] = 1;
            }
            break;
    //����
        case 6:
            v.push_back(new Trapezoid((rand() % 100 + 1) * 0.1, (rand() % 100 + 1) * 0.1, (rand() % 100 + 1) * 0.1, (rand() % 100 + 1) * 0.1, (rand() % 100 + 1) * 0.1));
            SetQuestionNum(GetQuestionNum() + 1);
            tem = grade;
            cord[t][0] = type;
            grade += v[t]->Calculate_Area();
            if (tem != grade) {
                cord[t][1] = 1;
            }
            break;
        case 7:
            v.push_back(new Trapezoid((rand() % 100 + 1) * 0.1, (rand() % 100 + 1) * 0.1, (rand() % 100 + 1) * 0.1, (rand() % 100 + 1) * 0.1, (rand() % 100 + 1) * 0.1));
            SetQuestionNum(GetQuestionNum() + 1);
            tem = grade;
            cord[t][0] = type;
            grade += v[t]->Calculate_Perimeter();
            if (tem != grade) {
                cord[t][1] = 1;
            }
            break;
        }
    }
    num_2 = num_2 + num;
    if (num_1 != 0)cout << "���ε÷֣�" << (grade / num_1) * 100 << "��" << endl;
    else cout << "���ε÷֣�" << grade << "��" << endl;
    cout << "------------------------------" << endl;
    cout << "��ѡ����һ��: 1.�鿴������Ŀ 2.�������� 3.�˳�ϵͳ" << endl;
    cin >> t;
    system("pause");
    system("cls");
    switch (t) {
    case 1:
        t = 0;
        while (t != num_1) {
            cout << "��" << t + 1 << "��" << endl;
            if (cord[t][0] % 2 == 0)v[t]->ShowArea();
            else v[t]->ShowPerimeter();
            if (cord[t][1] == 1)cout << "������������" << endl;
            else
            {
                cout << "������������" << endl;
                cout << "�������ȷ��Ϊ�� " << v[t]->GetArea() << endl;;
            }
            cout << "----------------------" << endl;
            if (t == num_1 - 1) {
                cout << "��ѡ����һ��:1.�˳��鿴" << endl;
                cin >> a;
                cout << "�˳��鿴" << endl;
                cout << endl;
            }
            t++;
        }
        cout << "��ѡ����һ��:1.�������� 2.�˳�ϵͳ" << endl;
        cin >> type;
        switch (type) {
        case 1:
            for (int t = 0; t < GetQuestionNum(); t++) {
                if (v[t] != NULL) {
                    delete v[t];
                    v[t] = NULL;
                }
            }
            vector<Polygon*>().swap(v);
            SetQuestionNum(num_2);
            exercise();
        case 2:
            return;
        }
    case 2:
        exercise();
    case 3:
        return;
    }
}
