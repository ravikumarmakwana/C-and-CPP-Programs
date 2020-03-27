#include<iostream>
#include<cmath>
using namespace std;
class vector
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
        double sum=0;
        for(int i=0;i<3;i++)
            sum=sum+a[i]*a[i];
        return sqrt(sum);
    }
};
main()
{
    double d;
    vector v;
    v.getdata();
    d=v;
    cout<<"Square root of given vector:"<<d;
    return 0;
}
