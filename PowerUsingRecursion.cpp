#include<iostream>
using namespace std;
int Factorial(int n)
{
    if(n==1)
        return 1;
    else
        return n*Factorial(n-1);
}
int Power(int b,int e)
{
    if(e==0)
        return 1;
    else
        return b*Power(b,e-1);
}
main()
{
    int b,e,no;
    cout<<"Enter the Base:";
    cin>>b;
    cout<<"Enter the Power :";
    cin>>e;
    cout<<"Ans : "<<Power(b,e);
    cout<<"\nEnter the No:";
    cin>> no;
    cout<<"Factorial : "<<Factorial(no);
    return 0;
}
