#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    char s[n];
    for(long long i=0;i<n;i++)
        cin>>s[i];
    int c=0,l=0;
    for(long long i=0;i<n-1;i++)
    {
        if(s[i]=='U')
        {
            l++;
            if(l==0)
                c++;
            if(s[i+1]=='U')
                l++;
            else if(s[i+1]=='D')
                l--;
            if(l==0)
                c++;
        }
        else if(s[i]=='D')
        {
            l--;
            if(l==0)
                c++;
            if(s[i+1]=='U')
                l++;
            else if(s[i+1]=='D')
                l--;
            if(l==0)
                c++;
        }
        if(l==0)
            c++;
    }
    cout<<c;
    return 0;
}
