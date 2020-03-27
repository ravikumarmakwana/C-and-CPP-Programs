#include<iostream>
#include<cmath>
using namespace std;
class Vector
{
    int a[3];
public:
    void getdata()
    {
        cout<<"Enter the vector:";
        for(int i=0;i<3;i++)
            cin>>a[i];
    }
    operator double()
    {
        int sum=0;
        for(int i=0;i<3;i++)
            sum+=a[i]*a[i];
        return sqrt(sum);
    }
};
main()
{
    Vector v;
    v.getdata();
    double d=v;
    cout<<"\nSquare Root of Vector:"<<d;
    return 0;
}
