#include<iostream>
using namespace std;
template <class T>
class Vector
{
    T a[3];
public:
    void getdata()
    {
        cout<<"Enter the Vector:\n";
        for(int i=0;i<3;i++)
            cin>>a[i];
    }
    T operator *(Vector);
};
template <class T>
T Vector <T> :: operator *(Vector p)
{
    T s=0;
    for(int i=0;i<3;i++)
        s=s+a[i]*p.a[i];
    return s;
}
main()
{
    Vector <int> v1,v2;
    cout<<"Integer Multiplication \n";
    v1.getdata();
    v2.getdata();
    int l=v1*v2;
    cout<<"\nMultiplication of Two Vectors::"<<l<<endl;
    cout<<"Floating Point Multiplication\n";
    Vector <float> v3,v4;
    v3.getdata();
    v4.getdata();
    float m=v3*v4;
    cout<<"\nMultiplication of Two Vectors::"<<m;
    return 0;
}
