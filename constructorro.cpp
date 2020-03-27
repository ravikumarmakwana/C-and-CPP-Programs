#include<iostream>
using namespace std;
class A
{
protected:
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
};
class B
{
protected:
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
};
class C : public A,public B
{
    int c;
public:
    C ( int x,int y,int z) :
    A(x),
    B(y)
   {
       c=z;
   }
    void putdata()
    {
        cout<<"a::"<<a;
        cout<<"\nb::"<<b;
        cout<<"\nc::"<<c;
    }
};
main()
{
    C c(1,3,4);
    c.putdata();
    return 0;
}
