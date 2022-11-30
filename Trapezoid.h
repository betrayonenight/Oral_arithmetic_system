//ÌÝÐÎ

#pragma once
#include<iostream>
using namespace std;
#include "Polygon.h"
class Trapezoid :public Polygon
{
private:
	double high;
	double topbase;
	double bottombase;
	double waistone;
	double waisttwo;
public:
	//void SetTopbase(double topbase);
	double gethighbase();
	//void SetBottombase(double bottombase);
	double GetBottombase();
	//void SetWaistone(double waistone);
	double GetWaistone();
	//void SetWaisttwo(double waisttwo);
	double GetWaisttwo();
	//void SetHigh(double high);
	Trapezoid(double topbase, double bottombase, double waistone, double waisttwo, double high);
	double GetHigh();
	double GetPerimeter();
	double GetArea();
	double Calculate_Area();
	double Calculate_Perimeter();
	void ShowArea();
	void ShowPerimeter();
};

