#include<cstring>
#include<iostream>
using namespace std;
class String
{
    char s[100];
public:
    String()
    {
        s[0]='\0';
    }
    String(char p[])
    {int i;
        for(i=0;p[i]!=NULL;i++)
            s[i]=p[i];
        s[i]='\0';
    }
    String(String &p,String &q)
    {
        strcpy(s,p.s);
        strcat(s,q.s);
    }
    void putdata()
    {
        cout<<endl;
        cout<<"string:::"<<s;
    }
};
main()
{
    String s1("Ravi");
    String s2=s1;
    String s3(s1,s2);
    s1.putdata();
    s2.putdata();
    s3.putdata();
    return 0;
}
