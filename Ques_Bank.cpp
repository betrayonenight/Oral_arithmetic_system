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
    cout << "*****请输入本次练习的题目数**********" << endl;
    cout << "*************************************" << endl;
    cin >> num;
    num_1 = num_2 + num;
    for (t = num_2; t < num_1; t++) {
        type = rand() % 8;
        switch (type) {
    //圆
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
    //三角形
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
    //矩形
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
    //梯形
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
    if (num_1 != 0)cout << "本次得分：" << (grade / num_1) * 100 << "分" << endl;
    else cout << "本次得分：" << grade << "分" << endl;
    cout << "------------------------------" << endl;
    cout << "请选择下一步: 1.查看所做题目 2.继续做题 3.退出系统" << endl;
    cin >> t;
    system("pause");
    system("cls");
    switch (t) {
    case 1:
        t = 0;
        while (t != num_1) {
            cout << "第" << t + 1 << "题" << endl;
            if (cord[t][0] % 2 == 0)v[t]->ShowArea();
            else v[t]->ShowPerimeter();
            if (cord[t][1] == 1)cout << "本题你做对了" << endl;
            else
            {
                cout << "本题你做错了" << endl;
                cout << "本题的正确答案为： " << v[t]->GetArea() << endl;;
            }
            cout << "----------------------" << endl;
            if (t == num_1 - 1) {
                cout << "请选择下一步:1.退出查看" << endl;
                cin >> a;
                cout << "退出查看" << endl;
                cout << endl;
            }
            t++;
        }
        cout << "请选择下一步:1.继续做题 2.退出系统" << endl;
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
