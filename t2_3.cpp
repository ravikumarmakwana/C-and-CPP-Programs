#include<iostream>
#include<cmath>
using namespace std;
int power(int a,int b)
{
   if(b==0)
        return 1;
   else
        return a*power(a,b-1);
}
int square(int a,int b=2)
{
    return pow(a,b);
}
int cube(int a,int b=3)
{
    return pow(a,b);
}
main()
{
    int a,b,p;
    cout<<"Enter the a:";
    cin>>a;
    cout<<"Enter the b:";
    cin>>b;
    p=power(a,b);
    cout<<"\na ^ b = "<<p;
    p=square(a);
    cout<<"\nSquare of a::"<<p;
    p=cube(a);
    cout<<"\nCube of a :: "<<p;
    return 0;
}
