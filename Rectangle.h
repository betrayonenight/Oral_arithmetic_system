//¾ØÐÎ

#pragma once
#include<iostream>
using namespace std;
#include "Polygon.h"
class Rectangle :public Polygon
{
private:
	double length;
	double width;
public:
	void SetLength(double length);
	double GetLength();
	void SetWidth(double width);
	double GetWidth();
	Rectangle(double lon);
	double GetPerimeter();
	double GetArea();
	double Calculate_Area();
	double Calculate_Perimeter();
	void ShowArea();
	void ShowPerimeter();
};

