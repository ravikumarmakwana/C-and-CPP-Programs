#include<cstring>
#include<iostream>
using namespace std;
main()
{
    char s[30];
    cout<<"Enter the string:";
    cin.getline(s,30);
    strrev(s);
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i+1]==' '|| s[i+1]=='\0')
        {
                for(int j=i;j>=0&& s[j]!=' ';j--)
                {
                    cout<<s[j];
                }
                cout<<" ";
        }
    }
    return 0;
}
