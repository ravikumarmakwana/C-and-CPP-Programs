#include<iostream>
using namespace std;
class vector
{
    int a[3];
public:
    void getdata()
    {
        cout<<"Enter the vector :";
        for(int i=0;i<3;i++)
            cin>>a[i];
    }
    int operator *(vector p)
    {
        int sum=0;
        for(int i=0;i<3;i++)
            sum=sum+a[i]*p.a[i];
        return sum;
    }
};
main()
{
    vector v1,v2;
    v1.getdata();
    v2.getdata();
    int l=v1*v2;
    cout<<"The multiplication of two vectors:"<<l;
    return 0;
}
