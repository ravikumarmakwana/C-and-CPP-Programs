#include<iostream>
using namespace std;
class Base
{
public:
    void display()
    {
        cout<<"Base"<<endl;
    }
    virtual void putdata()
    {
        cout<<"Base"<<endl;
    }
};
class Derived:public Base
{
public:
    void display()
    {
        cout<<"Derived"<<endl;
    }
    void putdata()
    {
        cout<<"Derived"<<endl;
    }
};
main()
{
    Base B,*p;
    Derived D;
    p->display();
    p=&B;
    p->putdata();
    p=&D;
    p->display();
    p->putdata();
    return 0;
}
