#include<iostream>
using namespace std;
class complexs
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
        cout<<"\nSummation of two complex number::"<<r<<" + i"<<i;
    }
    complexs operator +(complexs p)
    {
        complexs temp;
        temp.r=r+p.r;
        temp.i=i+p.i;
        return temp;
    }
};
main()
{
    complexs c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c1+c2;
    c3.putdata();
    return 0;
}
