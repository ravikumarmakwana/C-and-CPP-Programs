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
        void sum(complex x,complex y)
        {
            r=x.r+y.r;
            i=x.i+y.i;
        }
        void putdata()
        {
            cout<<"The addition of complex number:: "<<r<<" + i"<<i;
        }
};
int main()
{
    complex s1(1,2);
    complex s2(2,3);
    complex s3;
    s3.sum(s1,s2);
    s3.putdata();
    return 0;
}
