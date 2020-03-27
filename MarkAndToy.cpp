#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int prices[n];
    for(int i=0;i<n;i++)
        cin>>prices[i];
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(prices[i]>prices[j])
            {
                swap(prices[i],prices[j]);
            }
        }
    }
    int p=0;
    for(int i=0;i<n;i++)
    {
        if(k>prices[i])
        {
            p++;
            k-=prices[i];
        }
    }
    cout<<p;
    return 0;
}
