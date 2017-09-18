//9 err code







#include<iostream>

using namespace std;



class shape

{

    protected:

        int h,w;

    public:

        shape(int x,int y)

        {

            h=x;

            w=y;

        }

};



class tri:public shape

{

    public:

        tri(int x,int y):shape(x,y){}

        void area()

        {

            cout<<"Area of tri: "<<h*w*0.5<<endl;

        }

};



class rect:public shape

{

    public:

        rect(int x,int y):shape(x,y){}

        void area()

        {

            cout<<"Area of rect: "<<h*w<<endl;

        }

};







int main()

{

    tri t(3,10);

    rect rc(3,10);



    t.area();

    rc.area();



    return 0;

}
