#include<iostream>

using namespace std;

int main()
{
    char s[100];
    char r[100];
    cout<<"Enter the string:";
    cin>>s;
    int l=0;
    int k;
    for(int i=0;s[i]!=NULL;i++)
    {
        if(i==0)
        {
            r[l]=s[i];
            l++;
        }
        else
        {
            for(int j=0;r[j]!=NULL;j++)
            {
                if(r[j]==s[i])
                {
                    k=0;
                    break;
                }
                else
                    k=1;
            }
            if(k==1)
            {
                r[l]=s[i];
                l++;
            }
        }
    }

    r[l]='\0';
    for(int i=0;r[i]!=NULL;i++)
    {
        int c=0;
        for(int j=0;s[j]!=NULL;j++)
        {
            if(r[i]==s[j])
                c++;
        }
        cout<<c<<r[i]<<" ";
    }
    return 0;
}
