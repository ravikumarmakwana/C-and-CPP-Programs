#include<iostream>
using namespace std;
class A
{
    int a,b;
public:
    void getdata()
    {
        cout<<"Enter the a:";
        cin>>a;
        cout<<"Enter the b:";
        cin>>b;
    }
    int geta()
    {
        return a;
    }
    int getb()
    {
        return b;
    }
};
class B:public A
{
    int sum;
public:
    void calculate()
    {
        sum=geta()+getb();
        cout<<"\nThe Summation of two Numbers::"<<sum;
    }
};
main()
{
    B b;
    b.getdata();
    b.calculate();
    return 0;
}
