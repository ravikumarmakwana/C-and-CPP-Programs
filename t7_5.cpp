#include<iostream>
using namespace std;
class Student
{
    char name[30];
    int rollno;
public:
    void getdata()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the Roll_no:";
        cin>>rollno;
    }
    void putdata()
    {
        cout<<rollno<<"\t"<<name;
    }
};
class sport: public Student
{
protected:
    int p;
public:
    void getsport()
    {
        cout<<"\n1.National Level\n2.State Level\n3.College Level \nEnter the choice:";
        int c;
        cin>>c;
        switch(c)
        {
            case 1: p=20;
                    break;
            case 2: p=10;
                    break;
            case 3: p=5;
                    break;
            default:cout<<"Wrong choice:";
                    break;
        }
    }
};
class Result: public sport
{
    int m[5];
    float sum,avg;
    public:
    void getmarks()
    {
        cout<<"Enter the Five subjects Marks\n";
        for(int i=0;i<5;i++)
            cin>>m[i];
    }
    void calculate()
    {
        sum=0;
        for(int i=0;i<5;i++)
            sum=sum+m[i];
        sum=sum/5;
        avg=(90*sum)/100;
        avg=avg+(p/2);
    }
    void result()
    {
        cout<<"\t"<<avg<<"%\n";
    }
};
main()
{
    Result r[5];
    for(int i=0;i<5;i++)
    {
        r[i].getdata();
        r[i].getsport();
        r[i].getmarks();
    }
    for(int i=0;i<5;i++)
        r[i].calculate();
    cout<<"\n\nRoll_no\tName\tResult\n\n";
    for(int i=0;i<5;i++)
    {
        r[i].putdata();
        r[i].result();
    }
    return 0;
}
