#include<cstring>
#include<iostream>
using namespace std;
class person
{
    int age;
    char name[30];
public:
    void getdata()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the age:";
        cin>>age;
    }
    void putdata()
    {
        cout<<"\nOlder Man is :\n";
        cout<<name<<"\t"<<age;
    }
    void greaters(person *p1,person *p2)
    {
        if(p1->age > p2->age)
        {
            strcpy(name,p1->name);
            age=p1->age;
        }
        else
        {
            strcpy(name,p2->name);
            age=p2->age;
        }
    }
};
main()
{
    person *p1,*p2,*p3;
    person a,b,c;
    p1=&a;
    p2=&b;
    p3=&c;
    p1->getdata();
    p2->getdata();
    p3->greaters(p1,p2);
    p3->putdata();
    return 0;
}
