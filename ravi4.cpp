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
    cout<<"Enter the Number:";
    cin>>no;
    int b=no,a,s=0;
    while(no!=0)
    {
        a=no%10;
        s=s+fact(a);
        no=no/10;
    }
    if(s==b)
        cout<<"The given Number is Strong Number\n";
    else
        cout<<"The given Number is not strong Number\n";
    return 0;
}
