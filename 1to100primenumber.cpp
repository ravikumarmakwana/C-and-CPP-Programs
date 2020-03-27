#include<iostream>
using namespace std;
main()
{
    int c=0;
    for(int i=1;i<=100;i++)
    {
        c=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c=1;
                break;
            }
        }
        if(c==0)
            cout<<i<<" ";
    }
    return 0;
}
