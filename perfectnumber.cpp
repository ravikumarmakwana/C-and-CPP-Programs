#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
main()
{
    int no;
    cout<<"Enter the number:";
    cin>>no;
    int b=no,a,sum=0;
    while(no!=0)
    {
        a=no%10;
        sum=sum+fact(a);
        no=no/10;
    }
    if(sum==b)
        cout<<"Perfect number";
    else
        cout<<"Not perfect";
    return 0;
}
