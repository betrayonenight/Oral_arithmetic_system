#pragma once
#include<iostream>
using namespace std;
#include "Polygon.h"
#include<cmath>
class Triangle :public Polygon
{
private:
	//����
	double lenth_one;
	double lenth_two;
	double lenth_three;
public:
	void SetOne(double lenth_one);//��һ��
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
	//�����ι��캯��
};

