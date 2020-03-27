#include<cstring>
#include<iostream>
using namespace std;
int check(char p[])
{
    int k=strlen(p);
    int c;
    c=1;
    for(int i=0;i<k;i++)
    {
        if(p[i]!=p[k-i-1])
        {
            c=0;
            break;
        }
    }
    if(c==0)
        return 0;
    else
        return 1;
}
int palindrome(char k[])
{
    int c=0;
    for(int i=0;k[i]!=NULL;i++)
    {
        for(int j=0;k[j]!=NULL;j++)
        {
            if(j!=0)
            {
                char temp=k[j];
                k[j]=k[i];
                k[i]=temp;
            }
            if(check(k))
            {
                c=1;
                return 1;
            }
        }
    }
    return 0;
}
main()
{
    int T,x=0;
    cin>>T;
    while(T>0)
    {
        int N,Q;
        cin>>N>>Q;
        char P[N];
        cin>>P;
        int l,r,y=0;
        for(int i=0;i<Q;i++)
        {
            cin>>l>>r;
            int h=0;
            char s[N];
            for(int j=l-1;j<=r-1;j++)
                s[h++]=P[j];
            s[h]='\0';
            if(palindrome(s))
                y++;
        }
        x++;
        cout<<"\tcase #"<<x<<" : "<<y;
        T--;
    }
    return 0;
}
