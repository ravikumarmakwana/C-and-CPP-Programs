#include<iostream>
using namespace std;
int stare(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else if(n==2)
        return 2;
    else if(n==3)
        return 4;
    else
        return stare(n-1)+stare(n-2)+stare(n-3);
}
int main()
{
    int n;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=0;i<n;i++)
        cout<<stare(s[i])<<endl;
    return 0;
}
