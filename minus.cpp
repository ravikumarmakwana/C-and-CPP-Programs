#include<iostream>
using namespace std;
class Vector
{
    int a[3];
public:
    void getdata()
    {
        cout<<"Enter the Vector:";
        for(int i=0;i<3;i++)
            cin>>a[i];
    }
    void putdata()
    {
        cout<<"Resultant Vector :(";
        for(int i=0;i<3;i++)
        {
            cout<<a[i];
            if(i==2)
                cout<<")";
            else
                cout<<",";
        }
    }
    friend Vector operator -(Vector v)
    {
        Vector temp;
        for(int i=0;i<3;i++)
            temp.a[i]=-v.a[i];
        return temp;
    }
};
main()
{
    Vector v1,v2;
    v1.getdata();
    v2=-v1;
    v2.putdata();
    return 0;
}
