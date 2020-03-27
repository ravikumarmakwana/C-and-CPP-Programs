#include<cstring>
#include<iostream>
using namespace std;
class person
{
    char name[30];
    int code;
public:
    void getdata(char s[],int c)
    {
        strcpy(name,s);
        code=c;
    }
    void putdata()
    {
        cout<<"code :"<<code<<"\nName :"<<name;
    }
};
main()
{
    person x,*p;
    p=&x;
    int c;
    char s[20];
    cout<<"Enter the name:";
    cin>>s;
    cout<<"Enter the code:";
    cin>>c;
    p->getdata(s,c);
    p->putdata();
    return 0;
}
