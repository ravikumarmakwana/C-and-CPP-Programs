#include<iostream>
using namespace std;
class A
{
public:
    void showa()
    {
        cout<<"Class A"<<endl;
    }
};
class B
{
public:
    void showb()
    {
        cout<<"Class B"<<endl;
    }
};
class C
{
public:
    A a;
    B b;
public:
    void showc()
    {
        cout<<"Class C"<<endl;
    }
};
main()
{
    C c;
    c.a.showa();
    c.b.showb();
    c.showc();
    return 0;
}
