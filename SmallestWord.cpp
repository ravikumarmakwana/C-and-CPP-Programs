#include<iostream>
using namespace std;
main()
{
    char s[100];
    int l=0;
    cout<<"Enter the String :";
    cin.get(s,100);
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]==' ')
            l++;
    }
    int arr[l+1];
    int p=0,k=0;
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]!=' ')
            p++;
        if(s[i]==' ')
        {
            arr[k++]=p;
            p=0;
        }
    }
    arr[k]=p;
    for(int i=0;i<l;i++)
        cout<<arr[i];
    int m=arr[0];
    for(int i=0;i<l;i++)
    {
        if(m>arr[i])
            m=arr[i];
    }
    p=0;
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]!=' ')
            p++;
        if(s[i]==' ' && p==m)
        {
            arr[k++]=p;
            p=0;
        }
    }
    return 0;
}
