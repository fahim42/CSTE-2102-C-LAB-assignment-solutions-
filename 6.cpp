//6 err code





#include<iostream>

using namespace std;



class timex

{

    protected:

        int second,hour,minute;

    public:

        timex();

        timex(int s,int m,int h);

        void display();

        void add(const timex &a,const timex &b);

};



timex::timex()

{

    second=hour=minute=0;



}



timex::timex(int s,int m,int h)

{

    second=s;

    minute=m;

    hour=h;

}



void timex::display()

{

    cout<<"Second("<<second<<")Minute("<<minute<<")Hour("<<hour<<")"<<endl;

}



void timex::add(const timex &a,const timex &b)

{

    second=a.second+b.second;

    minute=a.minute+b.minute;

    hour=a.hour+b.hour;



    if(second>59)

    {

        minute++;

        second=second-60;

    }



    if(minute>59)

    {

        hour++;

        minute=minute-60;

    }



    if(hour>12)

    {

        hour=hour-12;

    }



}



int main()

{

    timex t1(1,2,3);

    timex t2(2,3,4);

    timex t;

    t.add(t1,t2);

    t.display();

    return 0;

}
