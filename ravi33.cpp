#include<iostream>
using namespace std;
class Vector
{
    int a[3];
public :
    void getdata()
    {
        cout<<"Enter the vector :";
        for(int i=0;i<3;i++)
            cin>>a[i];
    }
    void putdata()
    {
        cout<<"\nMirror Image of Given vector:(";
        for(int i=0;i<3;i++)
        {
            cout<<a[i];
            if(i!=2)
                cout<<",";
        }
        cout<<")";
    }
    friend Vector operator -(Vector p)
    {
        for(int i=0;i<3;i++)
            p.a[i]=-p.a[i];
        return p;
    }
};
main()
{
    Vector v;
    v.getdata();
    Vector v1=-v;
    v1.putdata();
    return 0;
}
