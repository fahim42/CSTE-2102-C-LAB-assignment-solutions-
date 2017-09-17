#include<iostream>
#include<bits/stdc++.h>
using namespace std;
double division(double a,double b)
{
    if(b==0)
    {
        throw "Division by zero conditions";
    }
    return (a/b);
}
int main()
{
    double x,y,result;
    cout<<"Enter the value of two numbers :"<<endl;
    cin>>x;
    cin>>y;
    try
    {
        result=division(x,y);
        cout<<result<<endl;
    }catch(const char* msg)
    {
        cerr<<msg<<endl;
    }
    return 0;
}
