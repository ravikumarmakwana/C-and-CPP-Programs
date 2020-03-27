#include<iostream>
using namespace std;
class ABC;
class XYZ
{
public:
    int x;
    void getdata()
    {
        cout<<"Enter the x:";
        cin>>x;
    }
    friend void maximum(ABC,XYZ);
};
class ABC
{
public:
    int a;
    void getdata()
    {
        cout<<"Enter the a:";
        cin>>a;
    }
    friend void maximum(ABC,XYZ);
};
void maximum(ABC p,XYZ q)
{
    if(p.a>q.x)
        cout<<"ABC is Bigger than XYZ";
    else
        cout<<"XYZ is bigger than ABC";
}
main()
{
    ABC s1;
    s1.getdata();
    XYZ s2;
    s2.getdata();
    maximum(s1,s2);
    return 0;
}
