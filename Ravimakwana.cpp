#include<iostream>
using namespace std;
main()
{
    char s1[30],s2[30];
    cout<<"Enter the Main string:";
    cin.getline(s1,30);
    cout<<"Enter the subString :";
    cin.getline(s2,30);
    int n=0;
    for(int i=0;s1[i]!=NULL;i++)
    {
        int j=0;
        int k=i;
        if(s1[k]==s2[j])
        {
            while(s2[j]==s1[k])
            {
                k++;
                j++;
            }
            if(s2[j]==NULL)
                n++;
        }
    }
    cout<<n;
    return 0;
}
