#pragma once
#include<iostream>
using namespace std;
#include "Polygon.h"
#include<cmath>
class Triangle :public Polygon
{
private:
	//三边
	double lenth_one;
	double lenth_two;
	double lenth_three;
public:
	void SetOne(double lenth_one);//第一边
	double GetOne();
	void SetTwo(double lenth_two);
	double GetTwo();
	void SetThree(double lenth_three);
	double Getthree();
	Triangle(double lenth_one, double lenth_two);
	double GetPerimeter();
	double GetArea();
	double Calculate_Area();
	double Calculate_Perimeter();
	void ShowArea();
	void ShowPerimeter();
	//三角形构造函数
};

