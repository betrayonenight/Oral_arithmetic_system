//����λ���

#pragma once
#include <string>
using namespace std;
class Polygon
{
public:
	virtual double GetPerimeter() = 0;//�����ܳ�
	virtual double GetArea() = 0;//�������
	virtual double Calculate_Area() = 0;
	virtual double Calculate_Perimeter() = 0;
	virtual void ShowArea() = 0;
	virtual void ShowPerimeter() = 0;
};

