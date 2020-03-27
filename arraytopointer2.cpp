#include<iostream>
using namespace std;
main()
{
    int a[10];
    int n,c,p;
    cout<<"Enter the numbers of that you want to store:";
    cin>>n;
    cout<<"Enter the array elements:\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the position that you want to delete elements:\n";
    cin>>p;
    for(int i=p-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    cout<<"final array\n";
    for(int i=0;i<n-1;i++)
        cout<<a[i]<<endl;
    return 0;
}
