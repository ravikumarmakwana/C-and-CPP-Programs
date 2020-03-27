#include<iostream>
using namespace std;
int m=121;
main()
{
    int m=11;
    cout<<m;
    cout<<endl;
    cout<<::m<<endl;
    {
        int m=111;
        cout<<m<<endl;
        cout<<::m<<endl;
    }
    cout<<m<<endl;
    cout<<::m;
    return 0;
}
