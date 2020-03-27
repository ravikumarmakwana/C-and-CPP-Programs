#include<cmath>
#include<iostream>
using namespace std;
class add
{
    double a,b;
public:
    void getpolar()
    {
        cout<<"Enter the a:";
        cin>>a;
        cout<<"enter the r:";
        cin>>b;
    }
    add operator +(add q)
    {
        add temp;
        temp.a=a+q.a;
        temp.b=b+q.b;
        return temp;
    }
    void polarshow()
    {
        cout<<"Two number addition:\n";
        cout<<"x = "<<b*cos(a);
        cout<<"y = "<<b*sin(a);
    }
    void triognometric()
    {
        cout<<"\nEnter the x:";
        cin>>a;
        cout<<"Enter the y:";
        cin>>b;
    }
    void triognometricshow()
    {
        cout<<"\na : "<<tan(a/b);
        cout<<"\nr : "<<sqrt(a*a+b*b);
    }
};
main()
{
    cout<<"Polar to Rect\n";
    add p1,p2,p3;
    p1.getpolar();
    p2.getpolar();
    p3=p1+p2;
    p3.polarshow();
    add p4,p5,p6;
    p4.triognometric();
    p5.triognometric();
    p6=p4+p5;
    p6.triognometricshow();
    return 0;
}
