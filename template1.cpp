#include<iostream>
using namespace std;
template <class T>
class Vector
{
    T a[3];
public:
    void getdata()
    {
        cout<<"Enter the vector:"<<endl;
        for(int i=0;i<3;i++)
            cin>>a[i];
    }
    T operator *(Vector p)
    {
        T sum=0;
        for(int i=0;i<3;i++)
            sum=sum+a[i]*p.a[i];
        return sum;
    }
};
main()
{
    Vector <int> v;
    v.getdata();
    Vector <int> v1;
    v1.getdata();
    float sum;
    sum=v*v1;
    cout<<"Multiplication of Two Vectors ::"<<sum;
    return 0;
}
