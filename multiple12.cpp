#include<cmath>
#include<iostream>
using namespace std;
class polar
{
    float r,a;
public:
    void getdata()
    {
        cout<<"Enter the a:";
        cin>>a;
        cout<<"Enter the r:";
        cin>>r;
    }
     geta()
    {
        return a;
    }
    int getr()
    {
        return r;
    }
};
class rect
{
    float x,y;
public:
    rect()
    {
        x=0;
        y=0;
    }
    rect(polar p)
    {
        float a=p.getr();
        float b=p.geta();
        x=a*cos(b);
        y=a*sin(b);
    }
    void putdata()
    {
        cout<<"x::"<<x;
        cout<<endl;
        cout<<"y::"<<y;
    }
};
main()
{
    polar p;
    p.getdata();
    rect r(p);
    r=p;
    r.putdata();
    return 0;
}
