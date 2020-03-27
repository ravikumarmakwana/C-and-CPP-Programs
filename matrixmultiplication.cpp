#include<iostream>
using namespace std;
main()
{
    int a[3][3],b[3][3],c[3][3];
    cout<<"Enter the first matrix:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cin>>a[i][j];
    }
    int sum;
    cout<<"Enter the Second Matrix:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cin>>b[i][j];
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum=0;
            for(int k=0;k<3;k++)
                sum=sum+a[i][k]*b[k][j];
            c[i][j]=sum;
        }
    }
    cout<<"\nMultiplication of Two Matrix \n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cout<<a[i][j]<<" ";
        if(i==1)
            cout<<" * ";
        else
            cout<<"   ";
        for(int j=0;j<3;j++)
            cout<<b[i][j]<<" ";
        if(i==1)
            cout<<" = ";
        else
            cout<<"   ";
        for(int j=0;j<3;j++)
            cout<<c[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
