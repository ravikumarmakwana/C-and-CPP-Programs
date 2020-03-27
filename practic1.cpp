#include<iostream>
using namespace std;
class complex
{
    int r,i;
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
        cout<<"\nAddition of two Numbers:";
        cout<<r<<" + i "<<i;
    }
    friend complex operator +(complex p,complex q)
    {
        complex temp;
        temp.r=q.r+p.r;
        temp.i=q.i+p.i;
        return temp;
    }
};
main()
{
    complex s1,s2,s3;
    s1.getdata();
    s2.getdata();
    s3=s1+s2;
    s3.putdata();
    return 0;
}
