#include<iostream>
using namespace std;
class Student
{
public:
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
        cout<<name<<"\t"<<age<<"\t";
    }
};
class Exam : public Student
{
public:
    int m[3];
    int avg;
public:
    void getmarks()
    {
        cout<<"Enter the Three subjects marks:"<<endl;
        for(int i=0;i<3;i++)
            cin>>m[i];
    }
};
class Activity :public Student
{
public:
    int ActivityPoints;
public:

    void getActivity()
    {
        cout<<endl;
        cout<<"1. State Level"<<endl;
        cout<<"2.National Level"<<endl;
        cout<<"3.College Level"<<endl;
        cout<<"Enter the choice:";
        int c;
        cin>>c;
        switch(c)
        {
            case 1: ActivityPoints=10;
                    break;

            case 2: ActivityPoints=5;
                    break;

            case 3: ActivityPoints=3;
                    break;

            default:ActivityPoints=0;
                    break;
        }
    }
};
class Sports : public Student
{
public:
    int p;
public:
    void getSports()
    {
        cout<<"You Participate in Sports ?";
        cout<<"\n1 for yes and 2 for No:\n";
        int c;
        cin>>c;
        if(c==1)
            p=10;
        else
            p=0;
    }

};
class Result  :public Exam,public Activity,public Sports
{
    int avg;
public:
    void result()
    {
        avg=0;
        for(int i=0;i<3;i++)
            avg+=m[i];
        avg+=ActivityPoints+p;
    }
    void putdata1()
    {
        cout<<avg<<endl;
    }
};
main()
{
    Result r;
    r.getdata();
    r.getmarks();
    r.getActivity();
    r.getsports();
    r.putdata();
    r.putdata1();
}
