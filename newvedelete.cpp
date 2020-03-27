#include<iostream>
using namespace std;
main()
{
    int *p;
    p=new int[10];
    cout<<sizeof(*p);
    delete []p;
    cout<<sizeof(*p);
    return 0;
}
