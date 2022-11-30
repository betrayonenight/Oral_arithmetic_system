#include "Trapezoid.h"

//void Trapezoid::SetTopbase(double topbase)
//{
//	this->topbase = topbase;
//}

double Trapezoid::gethighbase()
{
	return topbase;
}

//void Trapezoid::SetBottombase(double bottombase)
//{
//	this->bottombase = bottombase;
//}

double Trapezoid::GetBottombase()
{
	return bottombase;
}

//void Trapezoid::SetWaistone(double waistone)
//{
//	this->waistone = waistone;
//}

double Trapezoid::GetWaistone()
{
	return waistone;
}

//void Trapezoid::SetWaisttwo(double waisttwo)
//{
//	this->waisttwo = waisttwo;
//}

double Trapezoid::GetWaisttwo()
{
	return waisttwo;
}

//void Trapezoid::SetHigh(double high)
//{
//	this->high = high;
//}

Trapezoid::Trapezoid(double topbase, double bottombase, double waistone, double waisttwo, double high)
{
	this->topbase = topbase;
	this->bottombase = bottombase;
	this->waistone = waistone;
	this->waisttwo = waisttwo;
	this->high = high;
}

double Trapezoid::GetHigh()
{
	return high;
}

double Trapezoid::GetPerimeter()
{
	return topbase + bottombase + waistone + waisttwo;
}

double Trapezoid::GetArea()
{
	return (topbase + bottombase) * high * 0.5;
}

double Trapezoid::Calculate_Area()
{
	double grade = 0, an;
	cout << "������ϵס��µס��߷ֱ�Ϊ��" << topbase << " " << bottombase << " " << high << "�����������" << endl;
	cin >> an;
	if (fabs(an - GetArea()) < 1e-8) {
		grade = 1;
	}
	return grade;
}

double Trapezoid::Calculate_Perimeter()
{
	double grade = 0, an;
	cout << "������ϵס��µס������ֱ�Ϊ��" << topbase << " " << bottombase << " " << waistone << " " << waisttwo << "�������ܳ���" << endl;
	cin >> an;
	if (fabs(an - GetPerimeter()) < 1e-8) {
		grade = 1;
	}
	return grade;
}

void Trapezoid::ShowArea()
{
	cout << "������ϵס��µס��߷ֱ�Ϊ��" << topbase << " " << bottombase << " " << high << "�����������" << endl;
}

void Trapezoid::ShowPerimeter()
{
	cout << "������ϵס��µס������ֱ�Ϊ��" << topbase << " " << bottombase << " " << waistone << " " << waisttwo << "�������ܳ���" << endl;
}
