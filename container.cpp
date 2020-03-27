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
    void showa()
    {
        cout<<"A::"<<a<<endl;
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
    void showb()
    {
        cout<<"B::"<<b<<endl;
    }
};
class C
{
    int c;
public:
    A p;
    B q;
    C()
    {
        c=0;
    }
    C(int x,int y,int z) : p(x) , q(y)
    {
        c=z;
    }
    void showc()
    {
        cout<<"C::"<<c<<endl;
    }
};
main()
{
    C c;
    c=C(1,2,3);
    c.p.showa();
    c.q.showb();
    c.showc();
    return 0;
}
