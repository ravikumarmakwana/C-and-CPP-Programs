#include<iostream>
using namespace std;
class Complex
{
    int i,r;
public:
    void getdata()
    {
        cout<<"Enter the real part:";
        cin>>r;
        cout<<"Enter the image part:";
        cin>>i;
    }
    void putdata()
    {
        cout<<"Addition of Two Vectors::\n";
        cout<<r<<" + i "<<i;
    }
    friend Complex operator +(Complex p,Complex q)
    {
        Complex temp;
        temp.r=q.r+p.r;
        temp.i=q.i+p.i;
        return temp;
    }
};
main()
{
    Complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c1+c2;
    c3.putdata();
    return 0;
}
