#include<iostream>
using namespace std;
class University
{
    int id;
    char name_un[50];
public:
    void getUniversity()
    {
        cout<<"Enter the University Name:";
        cin>>name_un;
        cout<<"Enter the id Of University:";
        cin>>id;
    }
    void showUniversity()
    {
        cout<<"\nUniversity :"<<name_un;
        cout<<"\nId :"<<id;
    }
};
class College:public University
{
    int college_id;
    char name_college[50];
public:
    void getcollege()
    {
        cout<<"Enter the College Name:";
        cin>>name_college;
        cout<<"Enter the college ID:";
        cin>>college_id;
    }
    void showcollege()
    {
        cout<<"\nCollege :"<<name_college;
        cout<<"\nCollege_id :"<<college_id;
    }
};
class Student:public College
{
    int En_No;
    char name[30];
    int age;
public:
    void getdata()
    {
        cout<<"Enter the name of student:";
        cin>>name;
        cout<<"Enter the En.NO:";
        cin>>En_No;
        cout<<"Enter the age:";
        cin>>age;
    }
    void putdata()
    {
        cout<<"\nEn_no\tName\tAge\n";
        cout<<En_No<<"\t"<<name<<"\t"<<age;
    }
};
main()
{
    Student s;
    s.getUniversity();
    s.getcollege();
    s.getdata();
    s.showUniversity();
    s.showcollege();
    s.putdata();
    return 0;
}
