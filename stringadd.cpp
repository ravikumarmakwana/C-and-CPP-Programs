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
        cout<<"\nFinally string is :"<<s<<endl;
    }
    strings operator +(strings p)
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
    s3=s1+s2;
    s3.putdata();
    return 0;
}
