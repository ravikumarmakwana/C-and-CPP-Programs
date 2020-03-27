#include<iostream>
using namespace std;
int maxvalue(int a,int b,int c)
{
    return (a>b)?((a>c)?a:c):((b>c)?b:c);
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<"Maximum Value : "<<maxvalue(a,b,c);
    return 0;
}
