#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Course
{
public:
  string code;
  string title;
  double credit;
};
class Teacher
{
public:

    string id;
    string name;
    string designation;
    vector<Course>courses;
};
class Student
{
public:
    string id;
    string name;
    string address;
    double total_credit_complete;
    double CGPA;
};
int main()
{
    Course c1;
    c1.code="CSTE-2101";
    c1.title="Object Oriented Programming";
    c1.credit=3.0;
    Course c2;
    c2.code="CSTE-3105";
    c2.title="Data Base Management System";
    c2.credit=3.0;
    Teacher t1;
    t1.id="MKU";
    t1.name="Md.Kamal Uddin";
    t1.designation="Assistant Professor";
    Teacher t2;
    t2.id="MHR";
    t2.name="Md. Hasnat Riaz";
    t2.designation="Lecturer";
    Student s1;
    s1.id="ASH1601042M";
    s1.name="Mohimenol Islam Fahim";
    s1.address="Narsingdi";
    s1.total_credit_complete=21.0;
    s1.CGPA=3.03;
    Student s2;
    s2.id="ASH1601040M";
    s2.name="Md. Borhan Uddin";
    s2.address="Comilla";
    s2.total_credit_complete=24.0;
    s2.CGPA=2.98;
    t1.courses.push_back(c1);
    t1.courses.push_back(c2);
    t2.courses.push_back(c1);
    t2.courses.push_back(c2);
    cout<<"Teacher name:"<<t1.name<<" ("<<t1.designation<<")"<<endl;
    cout<<"Courses are :"<<t1.courses[0].title<<" & "<<t1.courses[1].title<<endl;
    cout<<"Teacher name:"<<t2.name<<" ("<<t2.designation<<")"<<endl;
    cout<<"courses are :"<<t1.courses[0].title<<" & "<<t2.courses[1].title<<endl;
    cout<<"Student name :"<<s1.name<<" Id:"<<s1.id<<" Credit Complete :"<<s1.total_credit_complete<<" CGPA:"<<s1.CGPA<<endl;
    cout<<"Student name :"<<s2.name<<" Id:"<<s2.id<<" Credit Complete :"<<s2.total_credit_complete<<" CGPA:"<<s2.CGPA<<endl;
    return 0;
}

