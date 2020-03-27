#include<iostream>
#include<cstring>
using namespace std;
class String
{
    char s[100];
public:
    void getdata()
    {
        cout<<"Enter the string:";
        cin>>s;
    }
    void putdata()
    {
        cout<<"\nFinal Strung::"<<s;
    }
    int operator ==(String p)
    {
        if(!strcmp(s,p.s))
            return 1;
        else
            return 0;
    }
    String operator +(String p)
    {
        strcat(s,p.s);
        return *this;
    }
};
main()
{
    String s1,s2,s3;
    s1.getdata();
    s2.getdata();
    if(s1==s2)
        cout<<"Two Strings are Equal\n";
    else
        cout<<"Two string are not equal\n";
    s3=s1+s2;
    s3.putdata();
    return 0;
}
