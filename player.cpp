#include<iostream>
using namespace std;
struct player
{
    int sc[3];
    float avg;
    char name[30];
}s[3];
void sortdata()
{
    struct player temp;
    for(int i=0;i<3;i++)
    {
        for(int j=i;j<3;j++)
        {
            if(s[i].avg>s[j].avg)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
}

main()
{
    for(int i=0;i<3;i++)
    {
        cout<<"\nEnter the name:";
        cin>>s[i].name;
        cout<<"Enter the score of 3 match:\n";
        for(int j=0;j<3;j++)
            cin>>s[i].sc[j];
    }
    int sum;
    for(int i=0;i<3;i++)
    {
        sum=0;
        for(int j=0;j<3;j++)
        {
            sum=sum+s[i].sc[j];
        }
        s[i].avg=sum/3;
    }
    sortdata();
    for(int i=0;i<3;i++)
    {
        cout<<s[i].name<<"\t"<<s[i].avg<<endl;
    }
    return 0;
}
