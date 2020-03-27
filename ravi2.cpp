#include<iostream>
using namespace std;
main()
{
    char s[100];
    char r[30];
    cout<<"Enter the Main string:";
    cin.getline(s,100);
    cout<<"Enter the sub String :";
    cin>>r;
    int n=0;
    for(int i=0;s[i]!=NULL;i++)
    {
        if(r[0]==s[i])
        {
            int k=i,c=1;
            for(int j=0;r[j]!=NULL;j++)
            {
                if(r[j]==s[k])
                    c=1;
                else
                {
                    c=0;
                    break;
                }
                k++;
            }
            if(c==1)
                n++;
        }
    }
    cout<<"\nThe Substring Occur in Main string ::"<<n;
    return 0;
}
