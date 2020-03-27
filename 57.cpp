#include<iostream>
using namespace std;
int top=-1;
char s[100];
void push(char c)
{
    s[++top]=c;
}
char pop()
{
    return s[top--];
}
int toper()
{
    if(top==-1)
        return 1;
    else
        return 0;
}
main()
{
    char c;
    int l;
    cout<<"Enter the string :";
    cin>>s;
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            push(s[i]);

        else if (s[i]==')'|| s[i]==']'|| s[i]=='}')
        {
            c=pop();
            if((c=='(' && s[i]==')') || ( c=='[' && s[i]==']') || ( c=='{' && s[i]=='}'))
                l=1;
            else
            {
                l=0;
                break;
            }
        }
    }
    int t;
    t=toper();
    if(l==1 && t==1)
        cout<<"Balanced";
    else
        cout<<"Not Balanced";
    return 0;
}
