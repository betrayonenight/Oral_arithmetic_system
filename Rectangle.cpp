#include "Rectangle.h"

void Rectangle::SetLength(double length)
{
    if (length > 0) {
        this->length = length;
    }
    else {
        cout << "������ĳ�������������" << endl;
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
        cout << "������ĳ�������������!!" << endl;
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
    //��a��0.1֮�����ѡ����Ϊ��
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
    cout << "����㳤��ֱ�Ϊ��" << length << " " << width << "�ĳ����������" << endl;
    cin >> an;
    if (fabs(an - GetArea()) < 1e-8) {
        grade = 1;
    }
    return grade;
}

double Rectangle::Calculate_Perimeter()
{
    double grade = 0, an;
    cout << "����㳤��ֱ�Ϊ��" << length << " " << width << "�ĳ������ܳ���" << endl;
    cin >> an;
    if (fabs(an - GetPerimeter()) < 1e-8) {
        grade = 1;
    }
    return grade;
}

void Rectangle::ShowArea()
{
    cout << "����㳤��ֱ�Ϊ��" << length << " " << width << "�ĳ����������" << endl;
}

void Rectangle::ShowPerimeter()
{
    cout << "����㳤��ֱ�Ϊ��" << length << " " << width << "�ĳ������ܳ���" << endl;
}
