#pragma once
#include<iostream>
using namespace std;
#include "Polygon.h"
class Circular :public Polygon
{
public:
	void SetRadius(double Radius);
	double GetRadius();
	double Getpi();
	double GetPerimeter();
	double GetArea();
	Circular(double r);
	double Calculate_Area();
	double Calculate_Perimeter();
	void ShowArea();
	void ShowPerimeter();
private:
	double Radius;
	const double pi = 3.14;
};

