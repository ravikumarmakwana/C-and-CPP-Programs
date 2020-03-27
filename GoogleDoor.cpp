#include<iostream>
using namespace std;
main()
{
    int a[100]={0};
    int k=0;
    while(k<100)
    {
        for(int i=k;i<100;i=i+k+1)
        {
            if(a[i]==0)
                a[i]=1;
            else if(a[i]==1)
                a[i]=0;
        }
        k++;
    }
    for(int i=0;i<100;i++)
    {
        if(a[i]==1)
            cout<<i+1<<" ";
    }
    return 0;
}
