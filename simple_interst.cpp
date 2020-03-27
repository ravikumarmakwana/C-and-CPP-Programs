#include<cmath>
#include<iostream>
using namespace std;
main()
{
    int n,P;
    float r,V;
    P=800000;
    r=0.11;
    n=15;
    cout.setf(ios::fixed,ios::floatfield);
    V=(float)(n*(float)P*r)/(float)100;
    cout<<V;
    return 0;
}
