#include<iostream>
using namespace std;
main()
{
    char s[100];
    cout<<"Enter the string:";
    cin>>s;
    int c=0;
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='1')
        {
            if(s[i+1]=='0')
            {
                for(int j=i+1;s[j]!=NULL;j++)
                {
                    if(s[j]=='1')
                    {
                        c++;
                        break;
                    }
                }
            }
        }
    }
    cout<<"The Patern 1[0]1 is repeated in Main string ::"<<c;
    return 0;
}

