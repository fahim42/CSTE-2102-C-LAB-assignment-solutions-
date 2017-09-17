#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Box
{
    double height;
    double width;
    double depth;
public:
Box()//default constructor
{
    height=7.8;
    width=5.6;
    depth=3.2;
}
Box(double h,double w,double d)//parameterized constructor
{
    height=h;
    width=w;
    depth=d;
}
Box(Box &a)//copy constructor
{
    height=a.height;
    width=a.width;
    depth=a.depth;
}
void show()
{
    cout<<"Values"<<height*width*depth<<endl;
}
};
int main()
{
    Box b1;//call default constructor
    Box b2(4.5,3.4,2.9);//parameterized constructor
    Box b3(b1);//copy constructor
    cout<<"Display the value of 1st object:"<<endl;
    b1.show();
    cout<<"Display the value of 2nd object:"<<endl;
    b2.show();
    cout<<"Display the value of 3rd object:"<<endl;
    b3.show();
    b3=b2;
    cout<<"Display the value of 4th object:"<<endl;
    b3.show();
    return 0;
}
