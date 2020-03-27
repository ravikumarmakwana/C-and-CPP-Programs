#include<iostream>
using namespace std;
class student
{
    int rollno;
    char name[30];
public:
    void getdata()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the rollno";
        cin>>rollno;
    }
    void putdata()
    {
        cout<<rollno<<"\t"<<name;
    }
};
class test : virtual public student
{
protected:
    int m[3];
    float avg;
public:
    void getmarks()
    {
        cout<<"Enter the marks:";
        for(int i=0;i<3;i++)
            cin>>m[i];
    }
    void calculate()
    {
        int sum=0;
        for(int i=0;i<3;i++)
            sum=sum+m[i];
        avg=(float)sum/3;
    }
};
class sport:virtual public student
{
protected:
    int p;
public:
    void getsport()
    {
        cout<<"\n1.National Level\n2.State Level\n3.College Level\nEnter the choice:";
        int c;
        cin>>c;
        switch(c)
        {
            case 1: p=10;
                    break;
            case 2: p=5;
                    break;
            case 3: p=3;
                    break;
            default:cout<<"Invalid";
                    break;
        }
    }
};
class result: public test,public sport
{
public:
    void display()
    {
        putdata();
        cout<<"\t"<<avg<<"\t"<<p<<endl;
    }
};
main()
{
    result s[5];
    for(int i=0;i<5;i++)
    {
        s[i].getdata();
        s[i].getmarks();
        s[i].getsport();
        s[i].calculate();
    }
    cout<<endl;
    cout<<"Result of students\n";
    cout<<"Roll_no\tName\tAvg\tSport\n";
    for(int i=0;i<5;i++)
        s[i].display();
    return 0;
}
