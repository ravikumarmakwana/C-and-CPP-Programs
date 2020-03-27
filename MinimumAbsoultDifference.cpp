#include<iostream>
using namespace std;
int main()
{
    int n,m=INT_MAX,c;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            c=arr[i]-arr[j];
            c=(c>0)?(c):(-c);
            if(c<m)
                m=c;
        }
    }
    cout<<m;
    return 0;
}
