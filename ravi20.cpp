#include<iostream>
using namespace std;
class student
{
    int Roll_no;
    char name[30];
    int m[3];
    float avg;
public:
    void getdata();
    void putdata();
    void calculate();
    void sortdata(student [5]);
};
void student :: getdata()
{
    cout<<"Enter the name:";
    cin>>name;
    cout<<"Enter the Roll_no:";
    cin>>Roll_no;
    cout<<"Enter the Three Subjects Marks\n";
    for(int i=0;i<3;i++)
        cin>>m[i];
}
void student :: calculate()
{
    avg=0;
    for(int i=0;i<3;i++)
        avg=avg+m[i];
    avg=avg/3;
}
void student :: sortdata(student p[5])
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(p[i].avg>p[j].avg)
            {
                student temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
}
void student :: putdata()
{
    cout<<Roll_no<<"\t"<<name<<"\t"<<avg<<endl;
}
main()
{
    student s[5];
    cout<<"Enter the Five student details\n";
    for(int i=0;i<5;i++)
    {
        s[i].getdata();
        s[i].calculate();
    }
    student s1;
    s1.sortdata(s);
    cout<<"\nResult of Five student\n";
    cout<<"Roll_no\tName\tAvg\n";
    for(int i=0;i<5;i++)
        s[i].putdata();
    return 0;
}
