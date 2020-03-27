#include<cmath>
#include<iostream>
using namespace std;
class vectors
{
    int a[3];
public:
    void getdata()
    {
        cout<<"Enter the Vector:\n";
        for(int i=0;i<3;i++)
            cin>>a[i];
    }
    operator double()
    {
        double sum=0;
        for(int i=0;i<3;i++)
            sum=sum+a[i]*a[i];
        return sqrt(sum);
    }
};
main()
{
    double x;
    vectors v;
    v.getdata();
    x=v;
    cout<<"\nSquare Root of Given Vector :"<<x;
    return 0;
}
