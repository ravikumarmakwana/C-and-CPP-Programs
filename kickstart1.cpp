#include<cstring>
#include<iostream>
using namespace std;
int c=0;
void palindrome(char p[])
{
    int l;
    l=strlen(p);
    for(int i=0;p[i]!=NULL;i++)
    {
        if(p[i]!=p[l-i-1])
        {
            c=c+1;
            break;
        }
    }
}
main()
{
    int T;
    string n;
    cin>>T;
    int i=1;
    char s1[4],s2[1],s3[2],s4[2],s5[5];
    while(T>0)
    {
        cin>>n;
        string s;
        cin>>s;
        for(int i=3;i<7;i++)
            s1[i]=s[i];
        palindrome(s1);
        for(int i=0;i<1;i++)
            s2[i]=s[i];
        palindrome(s2);
        for(int i=1;i<5;i++)
            s3[i]=s[i];
        palindrome(s3);
        for(int i=5;i<7;i++)
            s4[i]=s[i];
        palindrome(s4);
        for(int i=2;i<7;i++)
            s5[i]=s[i];
        palindrome(s5);
        cout<<"case #"<<i<<": "<<c;
        cout.setf(ios::unitbuf);
        i++;
        T--;
        cout<<endl;
    }
    return 0;
}
