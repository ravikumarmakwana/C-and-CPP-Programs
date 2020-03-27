#include<iostream>
using namespace std;
int power(int b,int e)
{
    if(e==0)
        return 1;
    else
        return b*power(b,e-1);
}
main()
{
    int a,b;
    cout<<"Enter the a & b::";
    cin>>a>>b;
    int c=power(a,b);
    cout<<"\na ^ b ="<<c;
    return 0;
}
