#include<iostream>
#include<cstring>
using namespace std;
class strings
{
    char s[30];
public:
    void getdata()
    {
        cout<<"Enter the string:";
        cin>>s;
    }
    int operator ==(strings p)
    {
        int c;
        for(int i=0;s[i]!=NULL;i++)
        {
            if(s[i]!=p.s[i])
            {
                c=0;
                break;
            }
            else
                c=1;
        }
        if(c==0)
            return 0;
        else
            return 1;
    }
    strings &
    operator +(strings p)
    {
        strcat(s,p.s);
        return *this;
    }
    void putdata()
    {
        cout<<"Addition of two string:\n";
        cout<<s;
    }
};
main()
{
    strings s1,s2,s3;
    s1.getdata();
    s2.getdata();
    if(s1==s2)
        cout<<"Strings are Equal";
    else
        cout<<"Strings are not Equal";
    s3=s1+s2;
    cout<<endl;
    s3.putdata();
    return 0;
}
