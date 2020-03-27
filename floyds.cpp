#include<iostream>
using namespace std;
void floyed()
{
    int n;
    cout<<"Enter the Total No of Nodes:";
    cin>>n;
    int m[n][n];
    cout<<"Enter the All Edges ::\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>m[i][j];
    }

    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(m[i][j]>m[i][k]+m[k][j])
                    m[i][j]=m[i][k]+m[k][j];
            }
        }
    }
    cout<<"Result::\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}
main()
{
    floyed();
    return 0;
}
