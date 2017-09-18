//25 err code





#include<iostream>

using namespace std;



class test

{

public:

    int x,y;

    test() {}

    test(int a,int b)

    {

        x=a;

        y=b;

    }

    void show()

    {

        cout<<x<<"  "<<y<<endl;

    }

};



test operator++(test &q)

{

    test t;

    t.x=++q.x;

    t.y=++q.y;

    cout<<"pre inc"<<endl;

    return t;

}

test operator++(test &q,int)

{

    test t;

    t.x=q.x;

    t.y=q.y;

    q.x++;

    q.y++;

    cout<<"post inc"<<endl;

    return t;



}







int main()

{

    test t(2,8);

    t.show();

    t++;

    t.show();

    ++t;

    t.show();



    return 0;

}
