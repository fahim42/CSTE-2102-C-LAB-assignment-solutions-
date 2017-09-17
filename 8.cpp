//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class student
{
    int admno;
    char sname[20];
    float eng,science,math;
    float total;
    float ctotal()
    {
     return eng+science+math;
    }
public:
    void Takedata();
    void Showdata();

};
void student::Takedata()
{
    cout<<"Enter ID number of students"<<endl;
    cin>>admno;
    cout<<"Enter the name of student:"<<endl;
    cin>>sname;
    cout<<"Enter the number of eng,math,science :"<<endl;
    cin>>eng>>math>>science;
    ctotal();
}
void student::Showdata()
{
    cout<<"ID number:"<<admno<<endl;
    cout<<"Student name: "<<sname<<endl;
    cout<<"The total marks of eng,math,science is :"<<ctotal()<<endl;
}
int main()
{
    student s1;
    s1.Takedata();
    s1.Showdata();
    return 0;
}

