#include<iostream>
using namespace std;
template <class T>
class Calculator
{
    T a,b;
public:
    void getdata()
    {
        cout<<"Enter the a:";
        cin>>a;
        cout<<"Enter the b:";
        cin>>b;
    }
    void add()
    {
        cout<<"ADDITION ::"<<a+b;
    }
    void subtract()
    {
        cout<<"SUBTRACTION ::"<<a-b;
    }
    void mul()
    {
        cout<<"MULTIPLICATION ::"<<a*b;
    }
    void divide()
    {
        cout<<"DIVISION ::"<<a/b;
    }
};
main()
{
    Calculator <float> p;
    p.getdata();
    p.add();
    cout<<endl;
    p.subtract();
    cout<<endl;
    p.mul();
    cout<<endl;
    p.divide();
    return 0;
}
