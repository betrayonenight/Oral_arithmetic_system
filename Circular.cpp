#include "Circular.h"
#include<iostream>
using namespace std;
void Circular::SetRadius(double Radius)
{
	if (Radius > 0) {
		this->Radius = Radius;
	}
	else {
		cout << "Բ�뾶��������" << endl;
		Radius = 0;
	}
}

double Circular::GetRadius()
{
	return Radius;
}

double Circular::Getpi()
{
	return pi;
}

double Circular::GetPerimeter()
{
	return Radius*pi*2;
}

double Circular::GetArea()
{
	return Radius* Radius*pi;
}

Circular::Circular(double Radius)
{
	//�жϰ뾶�Ƿ�Ϸ�
	SetRadius(Radius);
}

double Circular::Calculate_Area()
{
	double Grade = 0;
	double answer;
	cout << "�����뾶Ϊ��" << GetRadius() << " " << "�е�ֵΪ��" << GetRadius() << "��Բ�������" << endl;
	cin >> answer;
	if (fabs(answer - GetArea()) < 1e-6) {
		Grade = 1;
	}
	return Grade;
}

double Circular::Calculate_Perimeter()
{
	double Grade = 0;
	double answer;
	cout << "�����뾶Ϊ��" << GetRadius() << " " << "�е�ֵΪ��" << GetRadius() << "��Բ���ܳ���" << endl;
	cin >> answer;
	if (fabs(answer - GetPerimeter()) < 1e-6) {
		Grade = 1;
	}
	return Grade;
}

void Circular::ShowArea()
{
	cout << "�����뾶Ϊ��" << GetRadius() << " " << "�е�ֵΪ��" << GetRadius() << "��Բ�������" << endl;
}

void Circular::ShowPerimeter()
{
	cout << "�����뾶Ϊ��" << GetRadius() << " " << "�е�ֵΪ��" << GetRadius() << "��Բ���ܳ���" << endl;
}
