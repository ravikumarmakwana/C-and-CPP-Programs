#include<iostream>
using namespace std;
int main()
{
    int c=0;
    int a=0,b=1;
    int n,s=0;
    cin>>n;
    if(n==1)
        s=0;
    else if(n==2)
        s=1;
    else
    {
        while(n-1>c)
        {
            s=a+b;
            a=b;
            b=s;
            c++;
        }
    }
    cout<<s;
    return 0;
}
