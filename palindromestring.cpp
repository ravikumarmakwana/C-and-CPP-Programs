#include<cstring>
#include<iostream>
using namespace std;
main()
{
    cout<<"Enter the string:";
    char s[100];
    cin>>s;
    int c;
    int l=strlen(s);
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]!=s[l-i-1])
        {
            c=1;
            break;
        }
        else
            c=0;
    }
    if(c==1)
        cout<<"string is not palindrome";
    else
        cout<<"String is palindrome";
    return 0;
}
