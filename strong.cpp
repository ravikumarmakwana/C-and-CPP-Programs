#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
main()
{
    cout<<"Enter the no";
    int no;
    cin>>no;
    int a,sum=0,b=no;
    while(no!=0)
    {
        a=no%10;
        sum=sum+fact(a);
        no=no/10;
    }
    if(sum==b)
        cout<<"Strong";
    else
        cout<<"Not";
    return 0;
}
