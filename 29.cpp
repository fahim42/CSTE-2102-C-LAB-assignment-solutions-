#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Ploygon
{
protected:
    double height;
    double width;
public:
    void set_value(double a,double b)
    {
        height=a;
        width=b;
    }
};
class Rectangle:public Ploygon
{
public:
    void calculate_area()
    {
        cout<<"The rectangle area is :"<<height*width<<endl;
    }
};
class Triangle:public Ploygon
{
public:
    void calculate_area()
    {
        cout<<"The triangle area is :"<<height*width*.5<<endl;
    }
};
int main()
{
    Ploygon *p;
    Rectangle rec;
    Triangle tr;
    p=&rec;
    p->set_value(6.8,5.9);
    rec.calculate_area();
    p=&tr;
    p->set_value(5.6,4.8);
    tr.calculate_area();
    return 0;
}
