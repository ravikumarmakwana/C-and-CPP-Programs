#include<iostream>
using namespace std;
main()
{
    char a;
    char s[100];
    int i=0;
    cout<<"Enter the string :";
    while(a!='\n')
    {
        a=cin.get();
        s[i]=a;
        i++;
    }
    s[i]='\0';
    for(int i=0;s[i]!=NULL;i++)
    cout<<s[i];
    return 0;
}
