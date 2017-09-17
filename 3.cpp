#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Employee
{
    int emp_no;
    char name[20];
    int salary;
    int getsalary()
    {
        return salary;
    }
public:
    void getdata();
    void showdata();
    int showofficer()
    {
     //cout<<"He is officer, his salary grater the 20,000"<<endl;
    //to display only those who are getting salary above 20000;
    return salary;
    }
};
void Employee::getdata()
{
    cout<<"Enter the employee number :"<<endl;
    cin>>emp_no;
    cout<<"Enter the employee name :"<<endl;
    cin>>name;
    cout<<"Enter the employee salary :"<<endl;
    cin>>salary;
}
void Employee::showdata()
{
    cout<<"The employee number is :"<<emp_no<<endl;
    cout<<"The employee name is :"<<name<<endl;
    if(getsalary()>20000)
    {
        cout<<"He is an officer , his salary is :"<<showofficer()<<endl;
        cout<<endl;
    }
    else{
    cout<<"The employee salary is :"<<getsalary()<<endl;
    cout<<endl;
    }

}
int main()
{
    Employee emp[100];
    int n;
    cout<<"How many employees ?"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        emp[i].getdata();
    }
    for(int i=0;i<n;i++)
    {
        emp[i].showdata();
    }
    return 0;
}
