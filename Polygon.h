//多边形基类

#pragma once
#include <string>
using namespace std;
class Polygon
{
public:
	virtual double GetPerimeter() = 0;//设置周长
	virtual double GetArea() = 0;//设置面积
	virtual double Calculate_Area() = 0;
	virtual double Calculate_Perimeter() = 0;
	virtual void ShowArea() = 0;
	virtual void ShowPerimeter() = 0;
};

