#include<iostream>
using namespace std;
main()
{
    char s[100];
    char a[100];
    int m[20]={0};
    cout<<"Enter the string:";
    cin>>s;
    int c;
    int j=0;
    for(int i=0;s[i]!=NULL;i++)
    {
        if(i==0)
        {
            a[j]=s[i];
            j++;
        }
        else
        {
            for(int k=0;a[k]!=NULL;k++)
            {
                if(a[k]==s[i])
                {
                    c=1;
                    break;
                }
                else
                    c=0;
            }
            if(c==0)
            {
                a[j]=s[i];
                j++;
            }
        }
    }
    a[j]='\0';
    for(int j=0;a[j]!=NULL;j++)
    {
    for(int i=0;s[i]!=NULL;i++)
    {
        if(a[j]==s[i])
            m[j]++;
    }
    }
    cout<<endl;
    for(int i=0;a[i]!=NULL;i++)
        cout<<m[i]<<a[i]<<" ";
    return 0;

}
