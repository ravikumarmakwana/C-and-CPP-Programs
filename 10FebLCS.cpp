#include<conio.h>
#include<iostream>
using namespace std;
int LCS(string s1,string s2)
{
    int r=s1.length();
    int c=s2.length();
    int a[r+1][c+1];
    for(int i=0;i<=r;i++)
    {
        for(int j=0;j<=c;j++)
        {
            if(i==0 || j==0)
                a[i][j]=0;
            else if(s1[i-1]==s2[j-1])
                a[i][j]=a[i-1][j-1]+1;
            else
            {
                if(a[i-1][j]>a[i][j-1])
                    a[i][j]=a[i-1][j];
                else
                    a[i][j]=a[i][j-1];
            }
        }
    }
    cout<<c<<r<<endl;
    for(int i=0;i<=r;i++)
    {
        for(int j=0;j<=c;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return a[r][c];
}
main()
{
    string s1,s2;
    cout<<"Enter the first string :";
    getline(cin,s1);
    cout<<"Enter the second string :";
    getline(cin,s2);
    int l=LCS(s1,s2);
    cout<<l;
    return 0;
}
