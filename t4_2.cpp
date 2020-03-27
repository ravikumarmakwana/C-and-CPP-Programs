#include<iostream>
using namespace std;
class XYZ;
class ABC
{
    int a;
public:
    void getdata()
    {
        cout<<"Enter the a:";
        cin>>a;
    }
    friend void maxi(ABC,XYZ);
};
class XYZ
{
    int x;
public:
    void getdata()
    {
        cout<<"Enter the x:";
        cin>>x;
    }
    friend void maxi(ABC,XYZ);
};
void maxi(ABC p,XYZ q)
{
    if(p.a>q.x)
        cout<<"ABC is bigger than XYZ";
    else
        cout<<"XYZ is bigger then ABC";
}
main()
{
    ABC p;
    p.getdata();
    XYZ q;
    q.getdata();
    maxi(p,q);
    return 0;
}
