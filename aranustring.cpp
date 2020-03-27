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
    int operator !=(strings p)
    {
        int i;
        int a[26];
        while(s[i]!=NULL)
        {
            //a[s]++;
        }
    }
};
main()
{
    strings s1;
    s1.getdata();
    strings s2;
    s2.getdata();
    if(s1!=s2)
        cout<<"no";
    else
        cout<<"yes";
    return 0;
}
