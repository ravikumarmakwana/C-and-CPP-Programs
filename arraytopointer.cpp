#include<iostream>
using namespace std;
main()
{
    int a[10];
    int p,c;
    cout<<"Enter the numbers of value that you want to store:";
    int n;
    cin>>n;
    cout<<"Enter the array elements:\n";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter the position:";
    cin>>p;
    cout<<"Enter the new value:";
    cin>>c;
    for(int i=n-1;i>=p-1;i--)
    {
        a[i+1]=a[i];
    }
    a[p-1]=c;
    cout<<"\n\nFinal array:\n";
    for(int i=0;i<n+1;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
