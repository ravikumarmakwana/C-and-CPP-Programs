#include<iostream>
using namespace std;
class student
{
    int Rollno;
    char name[30];
public:
    void getdata()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the Rollno:";
        cin>>Rollno;
    }
    void putdata()
    {
        cout<<name<<"\t"<<Rollno;
    }
};
class Exams:public student
{
protected:
    int m[3];
public:
    void getmarks()
    {
        cout<<"Enter the Three subject marks:\n";
        for(int i=0;i<3;i++)
            cin>>m[i];
    }
};
class activity
{
protected:
    int p=0;
public:
    void getactivity()
    {
        int c;
        cout<<"You participate in any activity:"<<endl;
        cout<<"1.Yes\n2.NO\nEnter the choice:";
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
class sport
{
protected:
    int mz=0;
public:
    void getsport()
    {
        cout<<"You participate in ant Activity ?";
        cout<<"\n1.yes\n2.no\nEnter the choice:";
        int c;
        cin>>c;
        if(c==1)
        {
            cout<<"\n1.National Level\n2.State Level\n3.College Level\nEnter the choice:";
            int x;
            cin>>x;
            switch(x)
            {
                case 1: mz=10;
                        break;
                case 2: mz=5;
                        break;
                case 3: mz=3;
                        break;
                default:cout<<"Invalid";
                        break;
            }
        }
    }
};
class Result:public Exams,public activity,public sport
{
    int avg;
public:
    void calculate()
    {
        int sum=0;
        for(int i=0;i<3;i++)
            sum=sum+m[i];
        sum=sum+p+mz;
        avg=sum/5;
    }
    void result()
    {
        cout<<"\t"<<avg<<endl;
    }
};
main()
{
    Result r[5];
    for(int i=0;i<5;i++)
    {
        r[i].getdata();
        r[i].getmarks();
        r[i].getactivity();
        r[i].getsport();
        r[i].calculate();
    }
    cout<<"\n\nResult of Student\n";
    cout<<"Name\tRoll_no\tResult\n";
    for(int i=0;i<5;i++)
    {
        r[i].putdata();
        r[i].result();
    }
    return 0;
}
