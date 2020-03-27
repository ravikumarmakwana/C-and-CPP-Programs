#include<iostream>
using namespace std;
class A
{
    int a;
public:
    getdata()
    {
        cout<<"Enter the a:";
        cin>>a;
    }
    void putdata()
    {
        cout<<a<<endl;
    }
};
class B
{
    int b;
public:
    void getdata()
    {
        cout<<"Enter the b:";
        cin>>b;
    }
    void putdata()
    {
        cout<<b<<endl;
    }
};
class C
{
    int c;
public:
    A a;
    B b;
    void getdata()
    {
        cout<<"Enter the c:";
        cin>>c;
    }
    void putdata()
    {
        cout<<c<<endl;
    }
};
main()
{
    C c;
    c.getdata();
    c.putdata();
    c.a.getdata();
    c.a.putdata();
    c.b.getdata();
    c.b.putdata();
    return 0;
}
