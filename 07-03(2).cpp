#include<iostream>
using namespace std;
class A
{
public:
    virtual void getdata()
    {
        cout<<"A is Connected";
    }
};
class B: public A
{
public:
    void getdata()
    {
        cout<<"B is connected";
    }
};
class C:public A
{
public:
    void getdata()
    {
        cout<<"C is connected";
    }
};
main()
{
    A a,*p;
    p=&a;
    p->getdata();
    B b;
    p=&b;
    C c;
    cout<<endl;
    p->getdata();
    p=&c;
    cout<<endl;
    p->getdata();
    return 0;
}
