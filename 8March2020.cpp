#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;

    long long r;
    cin>>r;
    long long a[m][n],b[m][n]={0};
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    }

    while(r>0)
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0 && j==0)
                    b[i+1][j]=a[i][j];
                else if(i==m-1 && j==0)
                    b[i][j+1]=a[i][j];
                else if(i==m-1 && j==n-1)
                    b[i-1][j]=a[i][j];
                else if(i==0 && j==n-1)
                    b[i][j-1]=a[i][j];
                else
                {
                    if(i==0 && j!=0)
                        b[i][j-1]=a[i][j];
                    else if(j==0 && i!=0)
                        b[i+1][j]=a[i][j];
                    else if(i==n-1 && j!=0)
                        b[i][j+1]=a[i][j];
                    else
                        b[i+1][j]=a[i][j];
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                a[i][j]=b[i][j];
            }
        }

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<< a[i][j]<<" ";
            }
            cout<<endl;
        }
        r--;
    }
    return 0;
}
