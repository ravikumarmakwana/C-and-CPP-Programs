#include<iostream>
using namespace std;
class Basic_info
{
    int id;
    char name[30];
    char gender;
public:
    void getdata()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the id:";
        cin>>id;
        cout<<"Enter the gender:";
        cin>>gender;
    }
    void putdata()
    {
        cout<<id<<"\t"<<name<<"\t"<<gender;
    }
};
class dept
{
    int c;
    char dept_name[30];
public:
    void getdept()
    {
        cout<<"Enter the dept_name:";
        cin>>dept_name;
        cout<<"Enter the dept_no:";
        cin>>c;
    }
    void putdept()
    {
        cout<<"\t"<<dept_name<<"\t"<<c;
    }
};
class empolyee : public Basic_info,public dept
{
public:
    void result()
    {
        putdata();
        putdept();
    }
};
main()
{
    empolyee a;
    a.getdata();
    a.getdept();
    cout<<"Id\tName\tGender\tDept_name\tDept_no\n";
    a.result();
    return 0;
}
