#include<iostream>
using namespace std;
main()
{
    char s[40];
    cout<<"Enter the string:";
    cin.getline(s,40);
    int c=0;
    int a[26];
    char r[26];
    int j=0;
    for(int i=0;s[i]!=NULL;i++)
    {
        if(i==0)
        {
            r[j]=s[i];
            j++;
        }
        else
        {
            int c=0;
            for(int k=0;r[k]!=NULL;k++)
            {
                if(r[k]==s[i])
                {
                    c=0;
                    break;
                }
                else
                    c=1;
            }
            if(c==1)
                r[j]=s[i];
        }
    }
}
