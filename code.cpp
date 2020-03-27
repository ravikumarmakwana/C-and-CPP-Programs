#include<iostream>
using namespace std;
main()
{
    int c;
    cin>>c;
    int n;
    string s;
    int a[100];
    for(int i=0;i<c;i++)
    {
        cin>>n;
        cin>>s;
        for(int j=0;j<n;j++)
            a[j]=s[j];
        cout<<endl;
        for(int j=0;j<n;j++)
            cout<<a[j]<<" ";
    }
    return 0;
}
