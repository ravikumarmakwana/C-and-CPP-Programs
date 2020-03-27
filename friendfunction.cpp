#include<iostream>
using namespace std;
class complex
{
    int i,r;
public:
    complex()
    {
        r=0;
        i=0;
    }
    complex(int a,int b)
    {
        r=a;
        i=b;
    }
    complex(complex &p,complex &q)
    {
        r=p.r+q.r;
        i=p.i+q.i;
    }
    void putdata()
    {
        cout<<"Addition of two complex number:"<<r<<" +i "<<i;
    }
};
main()
{
    complex s1,s2,s3;
    s1=complex(1,2);
    s2=complex(1,3);
    s3=complex(s1,s2);
    s3.putdata();
    return 0;
}
