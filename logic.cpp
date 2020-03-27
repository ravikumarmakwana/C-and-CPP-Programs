#include<iostream>
using namespace std;
main()
{
    int a[10][10]={0};
    int l=1;
    int j,k,m,n;
    for(int i=0;i<5;i++)
    {
        for(j=0+i;j<10-i;j++)
        {
            a[i][j]=l;
            l++;
        }
        for(k=i+1;k<10-i;k++)
        {
            a[k][j-1]=l;
            l++;
        }
        for(m=k-2;m>=i;m--)
        {
            a[k-1][m]=l;
            l++;
        }
        for(n=k-2;n>i;n--)
        {
            a[n][i]=l;
            l++;
        }
    }
    for(int i=0;i<10;i++)
    {
        for(int p=0;p<10;p++)
        {
            if(a[i][p]<=9)
                cout<<a[i][p]<<"   ";
            else if(a[i][p]<100)
                cout<<a[i][p]<<"  ";
            else
                cout<<a[i][p]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
