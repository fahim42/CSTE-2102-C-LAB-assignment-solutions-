//Bismillahir Rahmanir Raheem
#include<iostream>
#include<bits/stdc++.h>
#define PI 3.1416
using namespace std;
class Area
{
public:
    void find_area(int);
    void find_area(int,int);
};
void Area::find_area(int r)
{
    cout<<"The area of circle is: "<<PI*r*r<<endl;
}
void Area::find_area(int h,int w)
{
    cout<<"The area of rectangle is: "<<h*w<<endl;
}
int main()
{
    Area circle;
    int r;
    cout<<"Enter the value of circle radius :"<<endl;
    cin>>r;
    circle.find_area(r);
    Area rectangle;
    int h,w;
    cout<<"Enter the values of height and width of the rectangle :"<<endl;
    cin>>h>>w;
    rectangle.find_area(h,w);
    return 0;
}
