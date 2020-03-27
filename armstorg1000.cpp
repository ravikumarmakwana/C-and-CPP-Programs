#include<iostream>
using namespace std;
main()
{
    int n=1;
    int b,a,sum=0;

    while(n<=10000)
    {
        b=n;
        sum=0;
        while(b!=0)
        {
            a=b%10;
            sum=sum+a*a*a;
            b=b/10;
        }
        if(sum==n)
            cout<<n<<endl;
        n++;
    }
    return 0;
}
