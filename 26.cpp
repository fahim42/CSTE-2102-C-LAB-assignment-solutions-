#include<iostream>
#include<bits/stdc++.h>
#define PI 3.1416
using namespace std;
class Volume
{
   public:
       void find_vol(int,int);//for cylinder

       void find_vol(int);//for sphere


};
void Volume::find_vol(int r,int h)
 {
           cout<<"The volume of cylinder is: "<<PI*r*h<<endl;
}
void Volume::find_vol(int r)
     {
            cout<<"The volume of sphere is: "<<(4/3)*PI*r*r*r<<endl;
       }
int main()
{
    Volume sphere;
    int r;
    cout<<"Enter the value of sphere radius: "<<endl;
    cin>>r;
    sphere.find_vol(r);
    Volume cylinder;
    int rc,h;
    cout<<"Enter the values of cylinder radius and height: "<<endl;
    cin>>rc>>h;
    cylinder.find_vol(rc,h);
    return 0;
}
