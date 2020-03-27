#include<iostream>
using namespace std;
main()
{
    char s[100],r[20];
    int i,j,k,l=0,c;
    cout<<"Enter the Main string:";
    cin.getline(s,100);
    cout<<"Enter the Sub string:";
    cin>>r;
    for(i=0;s[i]!=NULL;i++)
    {
        j=0;
        if(s[i]==r[j])
        {
            k=i;
            c=1;
            for(j=0;r[j]!=NULL;j++)
            {
                if(r[j]==s[k])
                {
                    c=1;
                    k++;
                }
                else
                {
                    c=0;
                    break;
                }
            }
            if(c==1)
                l++;
        }
    }
    cout<<"\n\n"<<l;
    return 0;
}
