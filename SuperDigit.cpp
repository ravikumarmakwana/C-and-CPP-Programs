#include<iostream>
using namespace std;
int superDigit(string n,int k)
{
    int a=0;
    int sum=0;
    int n1=(int )n;
    while(n>0)
    {
        a=n%10;
        sum=sum+a;
        n/=10;
    }
    sum=sum*k;
    k=1;
    if(sum<=9)
        return sum;
    superDigit(sum,1);
}
int main()
{
    string n;
    int k;
    cin>>n>>k;
    cout<<superDigit(n,k);
    return 0;
}
