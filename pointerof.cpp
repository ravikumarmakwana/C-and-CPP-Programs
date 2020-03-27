#include<iostream>
using namespace std;
class base
{
public:
    void putdata()
    {
        cout<<"BASE CLASS";
    }
};
class derived:public base
{
public:
    void putdata()
    {
        cout<<"Derived class";
    }
};
main()
{
    base *b;
    base n;
    b=&n;
    derived d;
    b->putdata();
    b=&d;
    cout<<endl;
    b->putdata();
    return 0;
}
