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
	cout << "请计算上底、下底、高分别为：" << topbase << " " << bottombase << " " << high << "的梯形面积。" << endl;
	cin >> an;
	if (fabs(an - GetArea()) < 1e-8) {
		grade = 1;
	}
	return grade;
}

double Trapezoid::Calculate_Perimeter()
{
	double grade = 0, an;
	cout << "请计算上底、下底、两腰分别为：" << topbase << " " << bottombase << " " << waistone << " " << waisttwo << "的梯形周长。" << endl;
	cin >> an;
	if (fabs(an - GetPerimeter()) < 1e-8) {
		grade = 1;
	}
	return grade;
}

void Trapezoid::ShowArea()
{
	cout << "请计算上底、下底、高分别为：" << topbase << " " << bottombase << " " << high << "的梯形面积。" << endl;
}

void Trapezoid::ShowPerimeter()
{
	cout << "请计算上底、下底、两腰分别为：" << topbase << " " << bottombase << " " << waistone << " " << waisttwo << "的梯形周长。" << endl;
}
