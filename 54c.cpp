#include<iostream>
using namespace std;
class A
{
    int a;
public:
    void geta()
    {
        cout<<"enter the a:";
        cin>>a;
    }
    void puta()
    {
        cout<<"a:"<<a;
    }
};
class B
{
    int b;
public:
    void getb()
    {
        cout<<"\nEnter the b:";
        cin>>b;
    }
    void putb()
    {
        cout<<"b:"<<b;
    }
};
class C
{
    int c;
public:
    void getc()
    {
        cout<<"\nEnter the c:";
        cin>>c;
    }
    void putc()
    {
        cout<<"c:"<<c;
    }
};
class finaly : public A,public B,public C
{
    int d;
public:
    void getd()
    {
        cout<<"\nEnter the d:";
        cin>>d;
    }
    void putd()
    {
        cout<<"d:"<<d;
    }
};
main()
{
    finaly f;
    f.geta();
    f.puta();
    f.getb();
    f.putb();
    f.getc();
    f.putc();
    f.getd();
    f.putd();
    return 0;
}
