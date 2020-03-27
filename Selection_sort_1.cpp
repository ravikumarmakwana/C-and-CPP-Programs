#include<iostream>
using namespace std;
void Selection_sort(int a[],int n)
{
    int m,temp;
    for(int i=0;i<n-1;i++)
    {
        m=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[m]>a[j])
            {
                m=j;
            }
        }
        temp=a[m];
        a[m]=a[i];
        a[i]=temp;
    }
}
main()
{
    int n;
    cout<<"Enter the Number ::";
    cin>>n;
    int a[n];
    cout<<"Enter the values ::";
    for(int i=0;i<n;i++)
        cin>>a[i];
    Selection_sort(a,n);
    cout<<endl;
    cout<<"Selection Sort : ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
