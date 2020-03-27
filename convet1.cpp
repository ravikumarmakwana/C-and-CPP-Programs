#include<iostream>
#include<cmath>
using namespace std;
class vector
{
    int a[3];
    int sum=0;
public:
    void getdata()
    {
        cout<<"Enter the vector:";
        for(int i=0;i<3;i++)
            cin>>a[i];
    }
    operator double ()
    {
        for(int i=0;i<3;i++)
            sum=sum+a[i]*a[i];
        return sqrt(sum);
    }
};
main()
{
    vector v;
    v.getdata();
    double d;
    d=v;
    cout<<"\nSquare Root of given Vector:"<<d;
    return 0;
}
