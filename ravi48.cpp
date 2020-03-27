#include<iostream>
using namespace std;
class Base
{
public:
    void putdata()
    {
        cout<<"Base class ";
    }
};
class Derived:public Base
{
public:
    void putdata()
    {
        cout<<"\nDerived Class";
    }
};
main()
{
    Base *p;
    Derived D;
    Base B;
    p->putdata();
    p=&B;
    p->putdata();
    p=&D;
    p->putdata();
    return 0;
}
