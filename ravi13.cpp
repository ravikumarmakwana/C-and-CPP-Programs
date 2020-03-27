#include<iostream>
#include<cmath>
using namespace std;
main()
{
    float a[10][10];
    for(int i=0;i<10;i++)
    {
        float k=0.0;
        for(int j=0;j<10;j++)
        {
            a[i][j]=exp(-(i+k));
            k=k+0.1;
        }
    }

    cout<<"X ";
    float l[10];
    float p=0;
    for(int i=0;i<10;i++)
    {
        l[i]=p;
        p=p+0.1;
    }
    for(int i=0;i<10;i++)
        cout<<l[i]<<" ";
    cout<<endl;
    cout.precision(2);
    for(int i=0;i<10;i++)
    {
        cout<<i<<" ";
        for(int j=0;j<10;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
