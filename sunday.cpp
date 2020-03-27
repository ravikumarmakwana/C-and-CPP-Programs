#include<iostream>
#include<fstream>
using namespace std;
main()
{
    char name[30];
    int age;
    ifstream fin("sunday.txt");
    for(int i=0;i<10;i++)
    {
        fin>>name;
        fin>>age;
        cout<<name<<"\t"<<age<<endl;
    }
    fin.close();
    return 0;
}
