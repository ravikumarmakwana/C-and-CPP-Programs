#include<cstring>
#include<iostream>
using namespace std;
int strings(char *p)
{
    int c;
    int l=strlen(p);
    for(int i=0;p[i]!=NULL;i++)
    {
        if(p[i]!=p[l-i-1])
        {
            c=1;
            break;
        }
        else
        {
            c=0;
        }
    }
    if(c==1)
        return 0;
    else
        return 1;
}
main()
{
    char s[100];
    cout<<"Enter the String:";
    cin.getline(s,100);
    char *p=s;
    if(strings(p))
        cout<<"The string is Palindrome ";
    else
        cout<<"The string is Not Palindrome";
    return 0;
}
