#include<iostream>
using namespace std;
main()
{
    int n,b;
    cout<<"Enter the number:";
    cin>>n;
    int i=0;
    int a[100];
    while(n!=0)
    {
        b=n%2;
        a[i]=b;
        i++;
        n=n/2;
    }
    for(int j=i-1;j>=0;j--)
        cout<<a[j];
    return 0;
}
