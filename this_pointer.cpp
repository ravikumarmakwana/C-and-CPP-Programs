#include<stdio.h>
#include<conio.h>
#include<cstring>
#include<iostream>
using namespace std;
class person
{
    int age;
    char name[30];
public:
    person()
    {

    }
    person(char s[],int a)
    {
        strcpy(name,s);
        age=a;
    }
    void putdata()
    {
        cout<<"Name ::"<<name;
        cout<<"\nage::"<<age;
    }
    person & greatere (person &x)
    {
        if(age>x.age)
            return *this ;
        else
            return  x ;
    }
};
main()
{
    person p1("Ravi",18);
    person p2("Kumar",10);
    person p;
    p=p1.greatere(p2);
    p.putdata();
    cout<<"\n";
    p1=person("Ravi",15);
    getch();
    p1.putdata();
    getch();
    cout<<"\n";
    p.putdata();
    return 0;
}
