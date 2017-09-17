#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Shape
{
protected:
    double volume;
public:
    virtual void find_vol()=0;
};
class Cube:public Shape
{
protected:
    double side;
public:
    Cube();
    void find_vol();
};
class Sphere:public Shape
{
protected:
    double radius;
public:
    Sphere();
    void find_vol();
};
Cube::Cube()
{
    cout<<"Enter the side of cube :"<<endl;
    cin>>side;
}
Sphere::Sphere()
{
    cout<<"Enter the radius of sphere :"<<endl;
    cin>>radius;
}
void Cube::find_vol()
{
    volume=side*side*side;
    cout<<"The Cube volume is :"<<volume<<endl;
}
void Sphere::find_vol()
{
    volume=(4/3)*3.1416*radius*radius*radius;
    cout<<"The Sphere volume is :"<<volume<<endl;
}
int main()
{
    Shape *ptr;
    Sphere sp;
    Cube cb;
    ptr=&sp;
    ptr->find_vol();
    ptr=&cb;
    ptr->find_vol();
    return 0;
}
