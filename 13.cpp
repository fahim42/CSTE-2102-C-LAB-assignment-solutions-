//Bismillahir Rahmanir Raheem
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Flight
{
    int flight_num;
    string destination;
    float distance;
    float fuel;
    void CALFUEL();
public:
    void FEEDINFO();
    void SHOWINFO();
};
void Flight::CALFUEL()
{
    if(distance<=1000)
    {
        fuel=500.00;
    }
    else if(distance >1000 && distance<=2000)
    {
        fuel=1100.00;
    }
    else if(distance>2000)
    {
        fuel=2200.00;
    }
}
void Flight::FEEDINFO()
{
    cout<<"Enter the value of flight number :"<<endl;
    cin>>flight_num;
    cout<<"Enter destination of flight :"<<endl;
    cin>>destination;
    cout<<"Enter the value of distance :"<<endl;
    cin>>distance;
    CALFUEL();
}
void Flight::SHOWINFO()
{
    cout<<"Flight number is :"<<flight_num<<endl;
    cout<<"Destination is :"<<destination<<endl;
    cout<<"Distance is :"<<distance<<endl;
    cout<<"Fuel uses :"<<fuel<<endl;
}
int main()
{
    Flight fl;
    fl.FEEDINFO();
    fl.SHOWINFO();
    return 0;
}

