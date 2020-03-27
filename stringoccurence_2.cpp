#include<iostream>
using namespace std;
main()
{
    char s[100];
    cout<<"Enter the string:";
    cin.getline(s,100);
    char r[30];
    int j=0;
    int c;
    for(int i=0;s[i]!=NULL;i++)
    {
        if(j==0)
        {
            r[j]=s[i];
            j++;
        }
        else
        {
            for(int k=0;r[k]!=NULL;k++)
            {
                if(r[k]!=s[i])
                    c=0;
                else
                {
                    c=1;
                    break;
                }
            }
            if(c==0)
            {
                r[j]=s[i];
                j++;
            }
        }
        r[j]='\0';
    }
    c=0;
    int k[30];
    for(int i=0;r[i]!=NULL;i++)
    {
        for(int j=0;s[j]!=NULL;j++)
        {
            if(r[i]==s[j])
                c++;
        }
        k[i]=c;
        c=0;
    }
    cout<<endl;
    for(int i=0;r[i]!=NULL;i++)
        cout<<k[i]<<r[i]<<" ";
    return 0;
}
