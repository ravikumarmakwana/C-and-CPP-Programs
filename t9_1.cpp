#include<fstream>
#include<iostream>
using namespace std;
main()
{
    char name[30];
    int m[3];
    ifstream fin("Result.txt");
    fin>>name;
    cout<<name;
    fin.close();
    return 0;
}
