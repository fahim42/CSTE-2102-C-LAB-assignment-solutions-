#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class X
{
double d1, d2;
public:
X(double, double);
int operator==(X);
void display( );
};

X::X(double  x, double  y){
d1=x;
d2=y;
}
int X:: operator==(X p)
{
if(d1==p.d1 &&d2==p.d2)
return 1;
else
return 0;
}
int main()
{
X ob1(2.5, 3.4), ob2(2.5, 3.0);
if(ob1==ob2)
{
cout<<"Objects are same"<<endl;
}
else
{
cout<<"Objects are different"<<endl;
}
return 0;
}
