#include<iostream>
using namespace std;
template <class T>
class vectors
{
    T a[3];
public:
    void getdata()
    {
        cout<<"Enter the vector :";
        for(int i=0;i<3;i++)
            cin>>a[i];
    }
    T operator *(vectors &p)
    {
        T sum=0;
        for(int i=0;i<3;i++)
            sum=sum+a[i]*p.a[i];
        return sum;
    }
};
main()
{
    vectors <int> v1;
    vectors <int> v2;
    v1.getdata();
    v2.getdata();
    int l=v1*v2;
    cout<<l;
    return 0;
}
