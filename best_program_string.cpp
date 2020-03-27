#include<iostream>
#include<string>
using namespace std;
main()
{
    char c;
    int l=0;
    string s1;
    cout<<"Enter the string:";
    getline(cin,s1);
    cout<<"Enter the character:";
    cin>>c;
    for(int i=0;s1[i]!=NULL;i++)
    {
        if(s1.find(c))
            l++;
    }
    cout<<l;
    return 0;
}
