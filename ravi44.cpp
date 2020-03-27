#include<iostream>
using namespace std;
class A
{
    int a;
public:
    A()
    {
        a=0;
    }
    A(int x)
    {
        a=x;
    }
    void puta()
    {
        cout<<a<<endl;
    }
};
class B
{
    int b;
public:
    B()
    {
        b=0;
    }
    B(int x)
    {
        b=x;
    }
    void putb()
    {
        cout<<b<<endl;
    }
};
class C : public A,public B
{
    int c;
public:
    C()
    {
        c=0;
    }
    C(int x,int y,int z):
        A(x),
        B(y)
        {
            c=z;
        }
    void putc()
    {
        cout<<c<<endl;
    }
};
main()
{
    C p(1,2,3);
    p.puta();
    p.putb();
    p.putc();
    return 0;
}
