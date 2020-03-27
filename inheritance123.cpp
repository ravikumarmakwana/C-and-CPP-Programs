#include<iostream>
using namespace std;
class student
{
    int roll_no;
    char name[30];
public:
    void getdata()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the Roll_no:";
        cin>>roll_no;
    }
    void putdata()
    {
        cout<<"\n"<<roll_no<<"\t"<<name<<"\t";
    }
};
class test:public student
{
protected:
    int m[5];
public:
    void getmarks()
    {
        cout<<"\nEnter the 5 subjects Marks:\n";
        for(int i=0;i<5;i++)
            cin>>m[i];
    }
};
class sport
{
protected:
    int p=0;
public:
    void getsport()
    {
        cout<<"\n1.National Level\n2.State level\n3.College Level\nEnter the choice:";
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
            default:cout<<"invalid";
                    break;
        }
    }
};
class Event
{
protected:
    int w=0;
public:
    void getevent()
    {
        cout<<"If you participate in Event ?\n";
        cout<<"1 for Yes and 0 for No\nEnter the choice:";
        int c;
        cin>>c;
        if(c==1)
        {
            cout<<"If You winner ?\n";
            cout<<"1 for Yes and 0 for No\nEnter the choice:";
            int k;
            cin>>k;
            if(k==1)
                w=10;
            else
                w=3;
        }
        else
            w=0;
    }
};
class Result: public test,public sport,public Event
{
    int sum;
    float avg;
public:
    void calculate()
    {
        sum=0;
        for(int i=0;i<5;i++)
            sum=sum+m[i];
        avg=sum*0.8+p+w;
    }
    void display()
    {
        putdata();
        cout<<avg<<"%"<<endl;
    }
};
main()
{
    Result s[2];
    for(int i=0;i<2;i++)
    {
        s[i].getdata();
        s[i].getmarks();
        s[i].getevent();
        s[i].getsport();
        s[i].calculate();
    }
    cout<<"Result of students\n";
    cout<<"Roll_no\tName\tavg\n";
    for(int i=0;i<2;i++)
        s[i].display();
    return 0;
}
