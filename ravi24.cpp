#include<iostream>
using namespace std;
class Complex
{
    int r,i;
public:
    void getdata()
    {
        cout<<"Enter the real part:";
        cin>>r;
        cout<<"Enter the imaginer part:";
        cin>>i;
    }
    void putdata()
    {
        cout<<"\nAddition ::"<<r<<" + i "<<i;
    }
    void calculate(Complex p,Complex q)
    {
        r=p.r+q.r;
        i=p.i+q.i;
    }
};
main()
{
    Complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3.calculate(c1,c2);
    c3.putdata();
    return 0;
}
