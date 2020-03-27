#include<cmath>
#include<iostream>
using namespace std;
class vectors
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
        double d=0;
        for(int i=0;i<3;i++)
            d=d+a[i]*a[i];
        return sqrt(d);
    }
};
main()
{
    vectors v1;
    v1.getdata();
    double d=v1;
    cout<<"\nSquare Root of Given Vector:"<<d;
    return 0;
}
