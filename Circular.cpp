#include "Circular.h"
#include<iostream>
using namespace std;
void Circular::SetRadius(double Radius)
{
	if (Radius > 0) {
		this->Radius = Radius;
	}
	else {
		cout << "圆半径数据有误" << endl;
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
	//判断半径是否合法
	SetRadius(Radius);
}

double Circular::Calculate_Area()
{
	double Grade = 0;
	double answer;
	cout << "请计算半径为：" << GetRadius() << " " << "π的值为：" << GetRadius() << "的圆的面积。" << endl;
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
	cout << "请计算半径为：" << GetRadius() << " " << "π的值为：" << GetRadius() << "的圆的周长。" << endl;
	cin >> answer;
	if (fabs(answer - GetPerimeter()) < 1e-6) {
		Grade = 1;
	}
	return Grade;
}

void Circular::ShowArea()
{
	cout << "请计算半径为：" << GetRadius() << " " << "π的值为：" << GetRadius() << "的圆的面积。" << endl;
}

void Circular::ShowPerimeter()
{
	cout << "请计算半径为：" << GetRadius() << " " << "π的值为：" << GetRadius() << "的圆的周长。" << endl;
}
