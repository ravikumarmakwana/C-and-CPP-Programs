#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n=4;
    int N[4][4]={
            {0,5,100,100},
            {50,0,15,5},
            {30,100,0,15},
            {15,100,5,0}
            };
    int c1,c2;
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                c1=N[i][j];
                c2=N[i][k]+N[k][j];
                if(c1<c2)
                    N[i][j]=c1;
                else
                    N[i][j]=c2;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<N[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
