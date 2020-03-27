#include<iostream>
using namespace std;
class Complex
{
    int r,i;
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
    Complex(Complex &p,Complex &q)
    {
        r=p.r+q.r;
        i=p.i+q.i;
    }
    void putdata()
    {
        cout<<"\nComplex Number:: "<<r<<" + i "<<i;
    }
};
main()
{
    Complex c1(1,1);
    Complex c2(3,5);
    Complex c3(c1,c2);
    c3.putdata();
    return 0;
}
