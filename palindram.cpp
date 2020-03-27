#include<iostream>
using namespace std;
main()
{
    int no;
    int a,b,sum=0;
    cout<<"Enter the number:";
    cin>>no;
    b=no;
    while(no!=0)
    {
        a=no%10;
        sum=sum*10+a;
        no=no/10;
    }
    cout<<sum;
    return 0;
}
