#include<cstdlib>
#include<iostream>
#include<ctime>
using namespace std;
main()
{
    srand(time(0));
    int a,b;
    int m=0;
    int l;
    for(int i=0;i<10;i++)
    {
        cout<<"\n"<<(i+1);
        a=rand()%100 + 1;
        b=rand()%100 + 1;
        cout<<" a :"<<a<<" b :"<<b;
        l=(a>b)?a:b;
        if(m<l)
            m=l;
        cout<<"\nm :"<<m;
    }
    return 0;
}
