#include<iostream>
using namespace std;
double long fact(double long n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
main()
{
    double long a;
    cout<<"Enter the a:";
    cin>>a;
    double long l;
    //cout.setf(ios::fixed,ios::floatfield);
    l=fact(a);
    cout<<endl;
    cout<<l;
    return 0;
}
