#include<fstream>
#include<cstdlib>
#include<iostream>
using namespace std;
class Person
{
    int age;
    char name[30];
public:
    void getdata()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the age:";
        cin>>age;
    }
    void putdata()
    {
        cout<<age<<"\t"<<name<<endl;
    }
};
main()
{
    ofstream fout("ravi54.txt");
    Person p[5];
    cout<<"Enter the Details of Five Person\n";
    for(int i=0;i<5;i++)
    {
        p[i].getdata();
        fout.write((char *)&p[i],sizeof(p[i]));
    }
    fout.close();
    system("CLS");
    ifstream fin("ravi54.txt");
    Person q[5];
    cout<<"Details of Five Persons\n";
    cout<<"Age\tName\n";
    for(int i=0;i<5;i++)
    {
        fin.read((char *)&q[i],sizeof(q[i]));
        q[i].putdata();
    }
    fin.close();
    return 0;
}
