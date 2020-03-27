#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter the Number:";
    cin>>n;
    int m[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                m[i][j]=1;
            else if(j==0)
                m[i][j]=1;
            else
            {
                m[i][j]=m[i-1][j]+m[i-1][j-1];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
            cout<<m[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
