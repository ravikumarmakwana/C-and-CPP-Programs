#include<iostream>
using namespace std;
int m=10;
main()
{
    cout<<m<<endl;
    int m=20;
    cout<<m<<endl;
    {
        int m=30;
        cout<<m<<endl;
        cout<<::m<<endl;
    }
    cout<<m<<endl;
    cout<<::m;
    return 0;
}
