#include<cmath>
#include<iostream>
using namespace std;
main()
{
    int no;
    cout.fill('*');
    cout.setf(ios::internal,ios::adjustfield);
    cout<<"enter the no:";
    cin>>no;
    int f=1;
    for(int i=1;i<=no;i++)
        f=f*i;
    cout.fill('*');
    cout.setf(ios::scientific,ios::floatfield)<<f;
    return 0;
}
