#include<iostream>
using namespace std;
int  some(int p,int q,int r)
{
    if( p!=0 && q!=0 && r!=0)
    {
    if(p==q+r)
        return 1;
    else if(q==r+p )
        return 1;
    else if(r==p+q )
        return 1;
    else
        return 0;
    }
    return 1;
}
main()
{
    int N;
    cin>>N;
    while(N>0)
    {
        string s;
        cin>>s;
        int k=0,p=0;
        int a[26]={0};
        for(int i=0;s[i]!=NULL;i++)
        {
            a[(int)s[i]-97]++;
        }
        int c;
        for(int i=0;i<24;i++)
        {
            c=some(a[i],a[i+1],a[i+2]);
            if(c==0)
                break;
        }
        if(c==1)
            cout<<"Dynamic"<<endl;
        else
            cout<<"Not"<<endl;
        N--;
    }
    return 0;
}
