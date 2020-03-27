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
    void putdata()
    {
        cout<<"Addition of two string:"<<s;
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
        }
        if(c==0)
            return 0;
        else
            return 1;
    }
    strings operator + (strings p)
    {
        strcat(s,p.s);
        return *this;
    }
};
main()
{
    strings s1,s2,s3;
    s1.getdata();
    s2.getdata();
    if(s1==s2)
        cout<<"Equal";
    else
        cout<<"Not Equal";
    s3=s1+s2;
    cout<<endl;
    s3.putdata();
    return 0;
}
