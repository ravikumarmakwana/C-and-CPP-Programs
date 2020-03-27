
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
        cout<<endl;
        cout<<r<<" + i "<<i;
    }
    Complex operator +(Complex p)
    {
        Complex temp;
        temp.r=r+p.r;
        temp.i=i+p.i;
        return temp;
    }
    Complex operator *(Complex p)
    {
        Complex temp;
        temp.r=r*p.r;
        temp.i=i*p.i;
        return temp;
    }
};
main()
{
    Complex c1,c2,c3,c4,c5;
    cout<<"First Complex Number:\n";
    c1.getdata();
    cout<<"\nSecond Complex Number:\n";
    c2.getdata();
    cout<<"\nThird Complex Number:\n";
    c3.getdata();
    cout<<"\nFourth Complex Number:\n";
    c4.getdata();
    c5=c1*c2+c3*c4;
    cout<<"\C5 = C1 * C2 + C3 * C4";
    cout<<"\nThe contain of C5::";
    c5.putdata();
    return 0;
}
