#include<iostream>
using namespace std;
class abc;
class xyz
{
    int x;
public:
    void getdata()
    {
        cout<<"Enter the X:";
        cin>>x;
    }
    friend void maximum(abc ,xyz );
};
class abc
{
    int a;
public:
    void getdata()
    {
        cout<<"Enter the a:";
        cin>>a;
    }
    friend void maximum(abc,xyz);
};
void maximum(abc p,xyz q)
{
    if(p.a>q.x)
        cout<<"A is maximum";
    else
        cout<<"X is maximum";
}
main()
{
    abc p;
    xyz q;
    p.getdata();
    q.getdata();
    maximum(p,q);
    return 0;
}
