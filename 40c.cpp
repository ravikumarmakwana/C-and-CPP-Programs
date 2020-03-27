#include<iostream>

using namespace std;

class Interger
{
    int a,b;
    public:
        Interger()
        {
            a=0;
            b=0;
        }
        Interger(int x,int y)
        {
            a=x;
            b=y;
        }
        void putdata()
        {
            cout<<a<<"\t"<<b<<"\n";
        }
};

int main()
{
    Interger i1;
    i1.putdata();
    Interger i2=Interger(10,20);
    i2.putdata();
    Interger i3(20,30);
    i3.putdata();
    return 0;
}

