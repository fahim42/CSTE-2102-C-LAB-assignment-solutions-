#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    virtual void display()=0;
};
class Engineering:public Student
{
public:
    void display()
    {
        cout<<"Engineering students"<<endl;
    }
};
class Medical:public Student
{
public:
    void display()
    {
        cout<<"Medical students"<<endl;
    }
};
class Science:public Student
{
public:
    void display()
    {
        cout<<"Science students"<<endl;
    }
};
int main()
{
    Student *s[3];
    s[0]=new Engineering;
    s[1]=new Medical;
    s[2]=new Science;
    for(int i=0;i<3;i++)
    {
        s[i]->display();
    }

    return 0;
}
