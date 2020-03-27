#include<iostream>
using namespace std;
main()
{
    int m[3][3];
    cout<<"enter the matrix:\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cin>>m[i][j];
    }
    cout<<"Display\n";
    for(int i=0;i<3;i++)
    {
        cout<<"| ";
        for(int j=0;j<3;j++)
            cout<<m[i][j]<<" ";
        cout<<" |";
        cout<<" = ";
        cout<<"| ";
        for(int j=0;j<3;j++)
            cout<<m[i][j]<<" ";
        cout<<" |";
        cout<<endl;
    }
    return 0;
}
