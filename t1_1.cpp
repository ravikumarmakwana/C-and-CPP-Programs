#include<iostream>
using namespace std;
main()
{
    cout<<"Enter the numbers that you wants to store in array:";
    int n;
    cin>>n;
    int a[10];
    cout<<"Enter the array:\n";
    for(int i=0;i<n;i++)
        cin>>a[i];
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if( a[i] <= a[j] )
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"Soring array\n";
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
    return 0;
}
