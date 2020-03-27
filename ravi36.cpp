#include<cstring>
#include<iostream>
using namespace std;
class strings
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
        cout<<"\nFinal String:"<<s;
    }
    int operator ==(strings p)
    {
        if(strcmp(s,p.s)==0)
            return 1;
        else
            return 0;
    }
    strings operator +(strings p)
    {
        strings temp;
        strcpy(temp.s,s);
        strcat(temp.s,p.s);
        return temp;
    }
};
main()
{
    strings s1,s2,s3;
    s1.getdata();
    s2.getdata();
    if(s1==s2)
        cout<<"Two strings Are equal\n";
    else
        cout<<"Not equal";
    s3=s1+s2;
    s3.putdata();
    return 0;
}
