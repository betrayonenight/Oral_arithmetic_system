//三角形

#include "Triangle.h"

void Triangle::SetOne(double lenth_one)
{
	if (lenth_one > 0)
	{
		this->lenth_one = lenth_one;
	}
	else
	{
		cout << "三角形第一条边输入有误！！" << endl;
	}
}

double Triangle::GetOne()
{
	return lenth_one;
}

void Triangle::SetTwo(double lenth_two)
{
	if (lenth_two > 0)
	{
		this->lenth_two = lenth_two;
	}
	else
	{
		cout << "三角形第二条边输入有误！！" << endl;
	}
}

double Triangle::GetTwo()
{
	return lenth_two;
}

void Triangle::SetThree(double lenth_three)
{
	if (lenth_three > 0)
	{
		this->lenth_three = lenth_three;
	}
	else
	{
		cout << "三角形第三条边输入有误！！" << endl;
	}
}

double Triangle::Getthree()
{
	return lenth_three;
}

Triangle::Triangle(double lenth_one, double lenth_two)
{
	int a, b;
	SetOne(lenth_one);
	SetTwo(lenth_two);
	a = fabs(lenth_one + lenth_two);
	b = fabs(lenth_one - lenth_two);
	SetThree(rand() % (a - b) + a);//随机给定从两边之和到两边之差的绝对值
}

double Triangle::GetPerimeter()
{
	return lenth_one+lenth_two+lenth_three;
}

double Triangle::GetArea()
{
	//int Pe = lenth_one + lenth_two + lenth_three;
	return 0.25 * (sqrt((lenth_one + lenth_two + lenth_three) * (lenth_one + lenth_two - lenth_three) * (lenth_one - lenth_two + lenth_three) * (lenth_three + lenth_two - lenth_one)));
}

double Triangle::Calculate_Area()
{
	double Grade = 0;
	double answer;
	cout << "请计算三边分别为:" << lenth_one << "," << lenth_two << "," << lenth_three << "的三角形面积。" << endl;
	cin >> answer;
	//误差在10的6次方之内即回答准确
	if (fabs(answer - GetArea()) < 1e-6) {
		Grade = 1;
	}
	return Grade;
}

double Triangle::Calculate_Perimeter()
{
	double Grade = 0;
	double answer;
	cout << "请计算三边分别为：" << lenth_one << " " << lenth_two << " " << lenth_three << "的三角形周长。" << endl;
	cin >> answer;
	if (fabs(answer - GetPerimeter()) < 1e-6) {
		Grade = 1;
	}
	return Grade;
}

void Triangle::ShowArea()
{
	cout << "请计算三边分别为:" << lenth_one << "," << lenth_two << "," << lenth_three << "的三角形面积。" << endl;
}

void Triangle::ShowPerimeter()
{
	cout << "请计算三边分别为：" << lenth_one << " " << lenth_two << " " << lenth_three << "的三角形周长。" << endl;
}
