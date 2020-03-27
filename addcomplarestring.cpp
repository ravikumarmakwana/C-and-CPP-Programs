#include<cstring>
#include<iostream>
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
        cout<<"\nFinal string:"<<s;
    }
    strings & operator +(strings p)
    {
        strcat(s,p.s);
        return *this;
    }
    int operator ==(strings p)
    {
        int c=0;
        for(int i=0;s[i]!=NULL;i++)
        {
            if(s[i]!=p.s[i])
            {
                c=1;
                break;
            }
            else
                c=0;
        }
        if(c==1)
            return 0;
        else
            return 1;
    }
};
main()
{
    strings s1,s2,s3;
    s1.getdata();
    s2.getdata();
    if(s1==s2)
        cout<<"Two strings are Equal";
    else
        cout<<"Two strings are not Equal";
    cout<<endl;
    s3=s1+s2;
    s3.putdata();
    return 0;
}
