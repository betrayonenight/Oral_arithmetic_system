#include "Rectangle.h"

void Rectangle::SetLength(double length)
{
    if (length > 0) {
        this->length = length;
    }
    else {
        cout << "您输入的长方形数据有误" << endl;
        length = 0;
    }
}

double Rectangle::GetLength()
{
    return length;
}

void Rectangle::SetWidth(double width)
{
    if (width > 0) {
        this->width = width;
    }
    else {
        cout << "您输入的长方形数据有误!!" << endl;
        width = 0;
    }
}

double Rectangle::GetWidth()
{
    return width;
}

Rectangle::Rectangle(double length)
{
    int a = length;
    SetLength(length);
    //在a到0.1之间随机选择数为宽
    SetWidth(rand() % a + 0.1);
}

double Rectangle::GetPerimeter()
{
    return (length + width) * 2;
}

double Rectangle::GetArea()
{
    return length * width;
}

double Rectangle::Calculate_Area()
{
    double grade = 0, an;
    cout << "请计算长宽分别为：" << length << " " << width << "的长方形面积。" << endl;
    cin >> an;
    if (fabs(an - GetArea()) < 1e-8) {
        grade = 1;
    }
    return grade;
}

double Rectangle::Calculate_Perimeter()
{
    double grade = 0, an;
    cout << "请计算长宽分别为：" << length << " " << width << "的长方形周长。" << endl;
    cin >> an;
    if (fabs(an - GetPerimeter()) < 1e-8) {
        grade = 1;
    }
    return grade;
}

void Rectangle::ShowArea()
{
    cout << "请计算长宽分别为：" << length << " " << width << "的长方形面积。" << endl;
}

void Rectangle::ShowPerimeter()
{
    cout << "请计算长宽分别为：" << length << " " << width << "的长方形周长。" << endl;
}
