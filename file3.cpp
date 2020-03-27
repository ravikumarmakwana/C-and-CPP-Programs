#include<fstream>
#include<iostream>
using namespace std;
main()
{
    ofstream fout("ccc.txt");
    cout<<"Enter the name:";
    char name[10];
    cin>>name;
    cout<<"Enter the rollno:";
    int r;
    cin>>r;
    cout<<"Enter the age";
    int age;
    cin>>age;
    fout<<name;
    fout<<r;
    fout<<age;
    fout.close();
    char na[10];
    ifstream fin("ccc.txt");
    fin>>na;
    cout<<na;
    fin.close();
    return 0;
}
