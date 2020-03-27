#include<iostream>
using namespace std;
class Complex
{
    int i,r;
public:
    void getdata()
    {
        cout<<"Enter the Real part:";
        cin>>r;
        cout<<"Enter the Imagery part:";
        cin>>i;
    }
    void putdata()
    {
        cout<<"\nThe Addition of Two Complex Numbers:";
        cout<<r<<" + i "<<i;
    }
    Complex operator +(Complex c)
    {
        Complex temp;
        temp.r=r+c.r;
        temp.i=i+c.i;
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
