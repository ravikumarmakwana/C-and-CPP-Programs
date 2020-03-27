#include<fstream>
#include<iostream>
using namespace std;
main()
{
    fstream file;
    file.open("vvp.txt", ios::out | ios::in | ios::binary );
    int age;
    char name[10];
    cout<<"Enter the name:";
    cin.getline(name,10);
    cout<<"Enter the age:";
    cin>>age;
    file<<name<<endl;
    file<<age;
    return 0;
}
