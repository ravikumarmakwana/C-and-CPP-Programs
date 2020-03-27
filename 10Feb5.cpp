#include<iostream>
using namespace std;
main()
{
    string s1,s2;
    cout<<"Enter the String 1:";
    getline(cin,s1);
    cout<<"Enter the String 2:";
    getline(cin,s2);

    int n=s1.length();
    int m=s2.length();
    int c=0,j;
    for(int i=0;i<=n-m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(s2[j]!=s1[i+j])
                break;
        }
        if(j==m)
            c++;
    }
    cout<<c;
    return 0;
}
