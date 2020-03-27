#include<iostream>
using namespace std;
class Vector
{
    int a[3];
public:
    void getdata()
    {
        cout<<"Enter the vector:\n";
        for(int i=0;i<3;i++)
            cin>>a[i];
    }
    void putdata()
    {
        cout<<"Resultant Vector: (";
        for(int i=0;i<3;i++)
        {
            cout<<a[i];
            if(i!=2)
                cout<<",";
            else
                cout<<")";
        }
    }
    Vector operator *(int p)
    {
        Vector temp;
        for(int i=0;i<3;i++)
            temp.a[i]=a[i]*p;
        return temp;
    }
    Vector operator +(Vector p)
    {
        Vector temp;
        for(int i=0;i<3;i++)
            temp.a[i]=a[i]+p.a[i];
        return temp;
    }
};
main()
{
    Vector v1,v2,v3,v4;
    v1.getdata();
    v2.getdata();
    v3.getdata();
    v4=v1*3+v2*4+v3*2;
    v4.putdata();
    return 0;
}
