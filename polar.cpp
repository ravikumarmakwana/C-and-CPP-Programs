#include<cmath>
#include<iostream>
using namespace std;
class Polar
{
    float a,r;
public:
    void putdata()
    {
        cout<<"\na::"<<a;
        cout<<"\nr::"<<r;
    }
    Polar()
    {
        a=r=0;
    }
    Polar(float x,float y)
    {
        a=x;
        r=y;
    }
};
class Rectangular
{
    float x,y;
public:
    void getdata()
    {
        cout<<"Enter the x:";
        cin>>x;
        cout<<"Enter the y:";
        cin>>y;
    }
    operator Polar()
    {
        float a=tan(x/y);
        float r=sqrt(x*x + y*y);
        Polar temp(a,r);
        return temp;
    }
};
main()
{
    Polar p;
    Rectangular r;
    r.getdata();
    p=r;
    p.putdata();
    return 0;
}
