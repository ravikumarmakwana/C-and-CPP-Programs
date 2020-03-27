#include<iostream>
using namespace std;
main()
{
    int a[6][6]={
                    {1,1,1,0,0,0},
                    {0,1,0,0,0,0},
                    {1,1,1,0,0,0},
                    {0,0,2,4,4,0},
                    {0,0,0,2,0,0},
                    {0,0,1,2,4,0}
                };
    int s=0,r,c,ans=0;

    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            r=i;
            c=j;
            s=0;
            for(int k=c;k<c+3 && k<6;k++)
                s=s+a[r][k];
            s=s+a[r+1][c+1];
            for(int k=c;k<c+3 && k<6 && r+2<6;k++)
                s=s+a[r+2][k];
            if(ans<s)
                ans=s;
        }
    }
    cout<<ans;
    return 0;
}
