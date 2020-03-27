#include<iostream>
using namespace std;
main()
{
    int a[5];
    for(int i=0;i<5;i++)
        cin>>a[i];
    cout<<endl;
    for(int i=0;i<5;i++)
        cout<<a[i]<<" ";
    int n;
    cin>>n;
    for(int i=0;i<4;i++)
    {
        if(i>=n-1)
            a[i]=a[i+1];
    }
    cout<<endl;
    for(int i=0;i<4;i++)
        cout<<a[i]<<" " ;
    cout<<endl;
    int k;
    cin>>n;
    cin>>k;
    for(int i=4;i>=n-1;i--)
    {
        a[i+1]=a[i];
    }
    a[n]=k;
    for(int i=0;i<5;i++)
        cout<<a[i]<<" " ;
    cout<<endl;
    return 0;
}
