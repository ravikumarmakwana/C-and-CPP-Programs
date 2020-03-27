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
            else c=1;
        }
        if(c==0)
            return 0;
        else
            return 1;
    }
    strings operator +(strings p)
    {
        strings temp;
        strcpy(temp.s,s);
        strcat(temp.s,p.s);
        return temp;
    }
    void putdata()
    {
        cout<<"\nThe addition of two string :"<<s;
    }
};
main()
{
    strings s1,s2,s3;
    s1.getdata();
    s2.getdata();
    s3=s1+s2;
    s3.putdata();
    cout<<"\n";
    if(s1==s2)
        cout<<"two string is equal";
    else
        cout<<"Two string is not equal";
    return 0;
}
