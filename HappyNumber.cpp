#include<iostream>
using namespace std;
int computeHappy(int n)
{
    int sum=0;
    while(n>0)
    {
        sum=sum+(n%10)*(n%10);
        n=n/10;
    }
    return sum;
}
bool isHappy(int n)
{
    int s,f;
    s=f=n;
    do{
        s=computeHappy(s);
        f=computeHappy(computeHappy(f));
    }while(s!=f);
    return (s==1);
}
main()
{
    int n;
    cout<<"Enter the Number:";
    cin>>n;
    if(isHappy(n))
        cout<<"The Given Number Is Happy Number";
    else
        cout<<"The Given Number is Not Happy";
    return 0;
}
