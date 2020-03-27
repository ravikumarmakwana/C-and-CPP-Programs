#include<iostream>
using namespace std;
void inters(int n,int p,float r=0.1)
{
    cout<<"Total inters::"<<(float)n*p*r;
}
main()
{
    cout<<"Enter the n & p";
    cout<<endl;
    int n,p;
    float r;
    cin>>n>>p;
    inters(n,p);
    cout<<endl;
    cout<<"Enter the n,p & r";
    cout<<endl;
    cin>>n>>p>>r;
    inters(n,p,r);
    return 0;
}
