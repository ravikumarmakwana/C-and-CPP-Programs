#include<cstdlib>
#include<iostream>
using namespace std;
class student
{
    int Roll_no,age;
    char name[30];
public:
    void getdata()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the age:";
        cin>>age;
        cout<<"Enter the Roll_no:";
        cin>>Roll_no;
    }
    void putdata()
    {
        cout<<Roll_no<<"\t"<<name<<"\t"<<age<<"\t";
    }
};
class test:virtual public student
{
protected:
    int m[3];
public:
    void getmarks()
    {
        cout<<"Enter the Three subjects marks:\n";
        for(int i=0;i<3;i++)
            cin>>m[i];
    }
};
class sport:virtual public student
{
protected:
    int p;
public:
    void getsport()
    {
        int c;
        cout<<"\n1.National Level\n2.State Level\n3.College Level\nEnter the choice:";
        cin>>c;
        if(c==1)
            p=10;
        else if(c==2)
            p=5;
        else if(c==3)
            p=3;
        else
            p=0;
    }
};
class Result:public test,public sport
{
    float avg=0;
public:
    void calculate()
    {
        for(int i=0;i<3;i++)
            avg=avg+m[i];
        avg=avg/3;
        avg=avg+p;
    }
    void display()
    {
        putdata();
        cout<<avg<<"%"<<endl;
    }
};
main()
{
    Result p[5];
    cout<<"Enter the Five Student Details:\n";
    for(int i=0;i<5;i++)
    {
        p[i].getdata();
        p[i].getmarks();
        p[i].getsport();
        p[i].calculate();
    }
    system("CLS");
    cout<<"Result of Five Students\n";
    cout<<"Roll_no\tName\tAge\tResult\n";
    for(int i=0;i<5;i++)
        p[i].display();
    return 0;
}
