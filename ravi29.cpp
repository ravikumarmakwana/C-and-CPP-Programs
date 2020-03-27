#include<iostream>
using namespace std;
class ABC;
class XYZ
{
    int x;
public:
    void getdata()
    {
        cout<<"Enter the x:";
        cin>>x;
    }
    friend void Big(ABC,XYZ);
};
class ABC
{
    int a;
public:
    void getdata()
    {
        cout<<"Enter the a:";
        cin>>a;
    }
    friend void Big(ABC,XYZ);
};
void Big(ABC p,XYZ q)
{
    if( p.a > q.x )
        cout<<"A is Big";
    else
        cout<<"X is Big";
}
main()
{
    ABC d1;
    XYZ d2;
    d1.getdata();
    d2.getdata();
    Big(d1,d2);
    return 0;
}
