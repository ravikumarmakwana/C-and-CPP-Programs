#include<iostream>
using namespace std;
main()
{
    string s;
    cout<<"Enter the String :";
    getline(cin,s);
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]>='a' && s[i]<='z')
            cout<<char(s[i]-32);
        else
            cout<<char(s[i]+32);
    }
}
