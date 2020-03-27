#include<cstdlib>
#include<iostream>
#include<fstream>
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
        cout<<name<<"\t"<<age<<endl;
    }
};
main()
{
    fstream file;
    file.open("ABC.txt",ios::out);
    Person P[5],Q[5];
    for(int i=0;i<5;i++)
    {
        P[i].getdata();
        file.write((char *)&P[i],sizeof(P[i]));
    }
    file.close();
    fstream file2;
    file2.open("ABC.txt",ios::in);
    system("CLS");
    cout<<"File Information";
    cout<<"\nName\tAge\n";
    for(int i=0;i<5;i++)
    {
        file2.read((char *)&Q[i],sizeof(Q[i]));
        Q[i].putdata();
    }
    return 0;
}
