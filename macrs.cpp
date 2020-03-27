#include<iostream>
#define MAX(a,b) (a>b)? cout <<"Maximum value : "<<a : cout<<"Maximum Value : "<<b
using namespace std;

main()
{
    int a,b;
    cout<<"Enter the a & b:";
    cin>>a>>b;
    MAX(a,b);
    return 0;
}
