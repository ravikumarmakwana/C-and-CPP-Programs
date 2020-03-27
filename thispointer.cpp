#include<iostream>
using namespace std;
class person
{
    int age;
    char name[30];
public:
    void getdata()
    {
        cout<<"Enter the age:";
        cin>>age;
        cout<<"Enter the name:";
        cin>>name;
    }
    person & m(person &p)
    {
        if(age<p.age)
            return p;
        else
            return *this;
    }
    void putdata()
    {
        cout<<"Maximum age is :"<<name;
    }
};
main()
{
    person p1,p2,max_age;
    p1.getdata();
    p2.getdata();
    max_age=p1.m(p2);
    max_age.putdata();
    return 0;
}
