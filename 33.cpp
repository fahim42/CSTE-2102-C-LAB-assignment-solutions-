#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class course
{
public:
    string code;
    string title;
    double credit;
    course()
    {
        cout<<"course code: ";
        cin>>code;
        cout<<"\ncourse title: ";
        cin>>title;
        cout<<"\ncourse credit: ";
        cin>>credit;
    }
    void show()
    {
        cout<<"course code: "<<code<<endl;
        cout<<"course title: "<<title<<endl;
        cout<<"course credit: "<<credit<<endl;
    }
};
class student
{
public:
    string id;
    string name;
    string address;
    double total_credit_complete;
    double CGPA;

    student()
    {
        cout<<"student name: ";
        cin>>name;
        cout<<"\nstudent address: ";
        cin>>address;
        cout<<"\ncgpa: ";
        cin>>CGPA;
    }
    void show()
    {
        cout<<"student name: "<<name<<endl;
        cout<<"student address: "<<address<<endl;
        cout<<"student cgpa: "<<CGPA<<endl;
    }
};
class teacher
{
public:
    string id;
    string name;
    string designation;
    vector<course>courses;
    teacher()
    {
        cout<<"teacher name: ";
        cin>>name;
         cout<<"\nteacher desg: ";
         cin>>designation;
         cout<<"teacher id:" ;
         cin>>id;
    }
    void show()
    {
        cout<<"teacher name: "<<name<<endl;
        cout<<"teacher desg: "<<designation<<endl;
    }
};
int main()
{
    course c1;
    teacher t1;
    student s1;
    t1.courses.push_back(c1);
    c1.show();

    t1.show();
    cout<<"Courses are :"<<t1.courses[0].title<<" & "<<t1.courses[0].code<<endl;

    s1.show();
    return 0;
}
