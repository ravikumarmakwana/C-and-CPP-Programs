#include<iostream>
using namespace std;
class student
{
    int rollno;
    char name[30];
    int age;
public:
    void getdata()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the Roll_no:";
        cin>>rollno;
        cout<<"Enter the age:";
        cin>>age;
    }
    void putdata()
    {
        cout<<name<<"\t"<<rollno<<"\t"<<age;
    }
};
class test : virtual public student
{
protected:
    int m[3];
public:
    void getmarks()
    {
        cout<<"Enter the marks:\n";
        for(int i=0;i<3;i++)
            cin>>m[i];
    }
};
class sport : virtual public student
{
protected:
    int s;
public:
    void sportm()
    {
        int a;
        cout<<"You part of sport  ?\n";
        cout<<"1 for yes & 2 for no\n";
        cout<<"enter the no:";
        cin>>a;
        if(a==2)
            s=0;
        else
        {
            cout<<"\n1.National Level\n2.State Level\n3.College Level\nEnter the choice:";
            int c;
            cin>>c;
            switch(c)
            {
                case 1: s=10;
                    break;
                case 2: s=5;
                    break;
                case 3: s=3;
                    break;
            }
        }
    }
};
class result :public sport,public test
{
    float re;
public:
    void calculate()
    {   re=0;
        float sum=0;
        for(int i=0;i<3;i++)
            sum=sum+m[i];
        sum=sum/3;
        sum=(sum * 90 ) / 100;
        re=sum+s;
    }
    void display()
    {
        putdata();
        cout<<"\t"<<re<<" %\n";
    }
};
main()
{
    result r[5];
    for(int i=0;i<5;i++)
    {
        r[i].getdata();
        r[i].getmarks();
        r[i].sportm();
        r[i].calculate();
    }
    cout<<"\n\nResult of Student\n";
    cout<<"Name\tRoll_no\tAge\tResult\n";
    for(int i=0;i<3;i++)
    {
        r[i].display();
    }
    return 0;
}
