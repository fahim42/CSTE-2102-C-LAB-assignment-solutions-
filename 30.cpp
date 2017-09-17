#include<iostream>
#include<bits/stdc++.h>
#define PI 3.141592654
using namespace std;
class shape
{
public:
    int r;
    double l,w,h,area,lb,sb;
    virtual void Area()=0;

    virtual void Display()=0;
};
class circle:public shape
{
public:
    void Area()
    {
        cout<<"Enter the radius of circle ?"<<endl;
        cin>>r;
        area=PI*r*r;
    }
    void Display()
    {
        cout<<"The circle area is :"<<area<<endl;
        cout<<endl;
    }
};
class rectangle:public shape
{
public:
    void Area()
    {
        cout<<"Enter the height of area?"<<endl;
        cin>>h;
        cout<<"Enter the width of area?"<<endl;
        cin>>w;
        area=h*w;
    }
    void Display()
    {
        cout<<"The area of rectangle is :"<<area<<endl;
        cout<<endl;
    }
};
class trapezoid:public shape
{
public:
    void Area()
    {
        cout<<"Enter the long baho of trapezoid?"<<endl;
        cin>>lb;
        cout<<"Enter the small baho of trapezoid?"<<endl;
        cin>>sb;
        cout<<"Enter the distance of two baho?"<<endl;
        cin>>h;
        area=((lb+sb)/2)*h;
    }
    void Display()
    {
        cout<<"The area of trapezoid is: "<<area<<endl;
        cout<<endl;
    }
};
int main()
{

    circle cr1;
    rectangle rc1;
    trapezoid tz1;
    shape *ptr;
    ptr=&cr1;
    ptr->Area();
    ptr->Display();
    ptr=&rc1;
    ptr->Area();
    ptr->Display();
    ptr=&tz1;
    ptr->Area();
    ptr->Display();
    return 0;
}
