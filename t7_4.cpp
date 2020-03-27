#include<iostream>
using namespace std;
class Database
{
    int code;
    char name[30];
public:
    void getdata()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the code:";
        cin>>code;
    }
    void putdata()
    {
        cout<<code<<"\t"<<name;
    }
};
class Teacher:public Database
{
    char subject[30];
    char publication[40];
public:
    void teacher_get()
    {
        getdata();
        cout<<"Enter the subject:";
        cin>>subject;
        cout<<"Enter the publication:";
        cin>>publication;
    }
    void teacher_put()
    {
        cout<<"\nDetails of Teacher\n";
        cout<<"Code\tName\tSubject\tPublication\n";
        putdata();
        cout<<"\t"<<subject<<"\t"<<publication;
    }
};
class Office:public Database
{
    int grade;
public:
    void Office_get()
    {
        getdata();
        cout<<"Enter the Grade:";
        cin>>grade;
    }
    void Office_put()
    {
        cout<<"\nDetails of Officer\n";
        cout<<"Code\tName\tGrade\n";
        putdata();
        cout<<"\t"<<grade;
    }
};
class Typist:public Database
{
    int speed;
public:
    void Typist_get()
    {
        cout<<"Enter the speed :";
        cin>>speed;
    }
    void Typist_put()
    {
        cout<<"\t"<<speed;
    }
};
class Regural: public Typist
{
public:
    void regural_get()
    {
        getdata();
        Typist_get();
    }
    void regural_put()
    {
        cout<<"\nDetails of Typist\n";
        cout<<"\nCode\tName\tSpeed\tType\n";
        putdata();
        Typist_put();
        cout<<"\tRegular";
    }
};
class Casual: public Typist
{
public:
    void casual_get()
    {
        getdata();
        Typist_get();
    }
    void casual_put()
    {
        cout<<"\nDetails of Typist\n";
        cout<<"\nCode\tName\tSpeed\tType\n";
        putdata();
        Typist_put();
        cout<<"\tDaily Wages";
    }
};
main()
{
    int c;
    cout<<"1.Teacher\n2.Typist\n3.Officer\nEnter the choice:";
    cin>>c;
    switch(c)
    {
        case 1: Teacher t1;
                t1.teacher_get();
                t1.teacher_put();
                break;

        case 2: Regural t2;
                Casual t3;
                int c1;
                cout<<"1.Regular\n2.Casual\nEnter the choice:";
                cin>>c1;
                if(c1==1)
                {
                    t2.regural_get();
                    t2.regural_put();
                }
                else if(c1==2)
                {
                    t3.casual_get();
                    t3.casual_put();
                }
                else
                    cout<<"\nInvalied choice";
                break;

        case 3: Office t4;
                t4.Office_get();
                t4.Office_put();
                break;

        default: cout<<"Inaviled choice";
                break;
    }
    return 0;
}
