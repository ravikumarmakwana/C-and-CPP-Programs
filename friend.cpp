#include<iostream>
using namespace std;
class complexnumber
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
        cout<<"\nADDITION OF TWO COMPLEX NUMBER \n";
        cout<<r<<" + i "<<i;
    }
    friend complexnumber operator +(complexnumber,complexnumber);
};
complexnumber operator +(complexnumber q,complexnumber p)
{
        complexnumber temp;
        temp.r=q.r+p.r;
        temp.i=q.i+p.i;
        return temp;
}
main()
{
    complexnumber p1,p2,p3;
    p1.getdata();
    p2.getdata();
    p3=p1+p2;
    p3.putdata();
    return 0;
}
