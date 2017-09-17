#include<iostream>
#include<bits/stdc++.h>
#define PI 3.1416
using namespace std;
class Figure
{
protected:
    double area;
public:
    virtual void find_area()=0;
};
class Circle:public Figure
{
   protected:
       int radius;
   public:
    Circle();
    void find_area();
};
class Square:public Figure
{
protected:
    int side;
public:
    Square();
    void find_area();
};
Circle::Circle()
{
    cout<<"Enter the radius of circle: "<<endl;
    cin>>radius;
}
Square::Square()
{
    cout<<"Enter the side of Square: "<<endl;
    cin>>side;
}
void Circle::find_area()
{
    area=PI*radius*radius;
    cout<<"The area of Circle is: "<<area<<endl;
}
void Square::find_area()
{
    area=side*side;
    cout<<"The area of Square is: "<<area<<endl;
}
int main()
{
    Figure *ptr;
    Circle cr;
    ptr=&cr;
    ptr->find_area();
    Square sr;
    ptr=&sr;
    ptr->find_area();
    return 0;
}
