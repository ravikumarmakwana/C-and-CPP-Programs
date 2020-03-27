#include<iostream>

using namespace std;

int main()
{
    int a[10];
    int n;
    cout<<"Enter the no of elements that you want to store:";
    cin>>n;
    int i;
    cout<<"\nEnter the array:\n";
    for(i=0;i<n;i++)
        cin>>a[i];

    cout<<"\nEnter the specific position:";
    int p;
    cin>>p;
    cout<<"Enter the number:";
    int k;
    cin>>k;
    for(int j=i;j>=p-1;j--)
    {
        a[j+1]=a[j];
    }
    a[p-1]=k;
    cout<<"\n";
    for(int i=0;i<n+1;i++)
        cout<<a[i]<<" ";

    return 0;
}
