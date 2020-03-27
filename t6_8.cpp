#include<cmath>
#include<iostream>
using namespace std;
class Rectangular
{
    float x,y;
public:
    Rectangular(int p,int q)
    {
            x=p;
            y=q;
    }
    int gety()
    {
        return y;
    }
    int getx()
    {
        return x;
    }
};
class Polar
{
    float a,r;
public:
    Polar()
    {
        a=0;
        r=0;
    }
    Polar(int x,int y)
    {
        a=x;
        r=y;
    }
    Polar(Rectangular p)
    {
        float x=p.getx();
        float y=p.gety();
        a=tan(y/x);
        r=sqrt(x*x+y*y);
    }
    void putdata()
    {
        cout<<"a:"<<a;
        cout<<"\tr:"<<r;
    }
};
main()
{
    int x,y;
    cout<<"Convert Rectangular to Polar\n";
    cout<<"Enter the x:";
    cin>>x;
    cout<<"Enter the y:";
    cin>>y;
    Rectangular r1(x,y);
    Polar p;
    p=r1;
    cout<<"\nPolar Point\n";
    p.putdata();
    return 0;
}
