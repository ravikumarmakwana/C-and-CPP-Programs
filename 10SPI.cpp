#include<conio.h>
#include<stdio.h>
#include<cstdlib>
#include<iostream>
using namespace std;
class student
{
    int Rollno;
    char name[30];
    int m[5];
    float avg;
public:
    void getdata()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the Roll_no:";
        cin>>Rollno;
        cout<<"Enter the five marks:\n";
        for(int i=0;i<5;i++)
            cin>>m[i];
    }
    void putdata()
    {
        cout<<Rollno<<"\t"<<name<<"\t"<<avg<<"%"<<endl;
    }
    void put()
    {
        cout<<name<<endl;
    }
    void calculate()
    {
        int s=0;
        for(int i=0;i<5;i++)
            s=s+m[i];
        avg=s/5;
    }
    void sortdata(student p[])
    {
        for(int i=0;i<5;i++)
        {
            for(int j=i;j<5;j++)
            {
                if(p[i].avg<p[j].avg)
                {
                    student temp=p[i];
                    p[i]=p[j];
                    p[j]=temp;
                }
            }
        }
    }
};
main()
{
    student s[5];
    cout<<"Enter the five student Details:\n";
    for(int i=0;i<5;i++)
    {
        s[i].getdata();
        s[i].calculate();
    }
    student temp;
    system("CLS");
    cout<<"Result of Student:\n";
    cout<<"Roll_no\tName\tMarks"<<endl;
    for(int i=0;i<5;i++)
    {
        s[i].putdata();
    }
    temp.sortdata(s);
    cout<<"\n\n1 st Number::\n";
    s[0].put();
    getch();
    return 0;
}
