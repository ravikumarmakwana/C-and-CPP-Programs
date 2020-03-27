#include<iostream>
using namespace std;
class comp
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
        cout<<"addition of two complex number :"<<r<<" + i "<<i;
    }
    comp operator +(comp s2)
    {
        comp temp;
        temp.r=r+s2.r;
        temp.i=i+s2.i;
        return temp;
    }
};
main()
{
    comp s1,s2,s3;
    s1.getdata();
    s2.getdata();
    s3=s1+s2;
    s3.putdata();
    return 0;
}
