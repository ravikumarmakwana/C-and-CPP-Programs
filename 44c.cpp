#include<iostream>
using namespace std;
class complex
{
    int r,i;
    public:
        complex()
        {
            r=i=0;
        }
        complex(int x,int y)
        {
            r=x;
            i=y;
        }
        complex(complex s1,complex s2)
        {
            r=s1.r+s2.r;
            i=s1.i+s2.i;
        }
        void putdata()
        {
            cout<<"\nThe Addition of Complex Number::"<<r<<" + "<<i<<" i";
        }
};
int main()
{
    int a,b;
    cout<<"Enter the real part:";
    cin>>a;
    cout<<"enter the image part:";
    cin>>b;
    complex s1(a,b);
    int c,d;
    cout<<"Enter the real part:";
    cin>>c;
    cout<<"Enter the image part:";
    cin>>d;
    complex s2(c,d);
    complex s3(s1,s2);
    s3.putdata();
    return 0;
}
