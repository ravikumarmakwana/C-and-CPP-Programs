#include<iostream>
using namespace std;
class Complex
{
    int i,r;
public:
    Complex()
    {
        r=i=0;
    }
    Complex(int x,int y)
    {
        r=x;
        i=y;
    }
    Complex(Complex c1,Complex c2)
    {
        r=c1.r+c2.r;
        i=c1.i+c2.i;
    }
    void putdata()
    {
        cout<<"Addition ::"<<r<<" +i "<<i;
    }
};
main()
{
    Complex c1(1,3);
    Complex c2(4,4);
    Complex c3(c1,c2);
    c3.putdata();
    return 0;
}
