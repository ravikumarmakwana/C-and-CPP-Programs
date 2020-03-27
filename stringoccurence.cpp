#include<iostream>
using namespace std;
main()
{
    char s[100];
    char s1[10];
    cout<<"Enter the main string:";
    cin>>s;
    cout<<"Enter the sub string:";
    cin>>s1;
    int i=0;
    int j=0,k;
    int l=0;
    while(s[i]!=NULL)
    {
        j=0;
        k=i;
        if(s[k]==s1[j])
        {
            while(s1[j]!=NULL && s1[j]==s[k])
            {
                k++;
                j++;
                if(s1[j]==NULL)
                    l++;
            }
        }
        i++;
    }
    cout<<"\nThe Occurence of Sub. string in Main string is "<<l<<" times";
    return 0;
}
