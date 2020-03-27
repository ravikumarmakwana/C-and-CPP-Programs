#include<fstream>
#include<iostream>
using namespace std;
main()
{
    fstream file;
    file.open("ravi61.cpp",ios::in);
    char c;
    file.get(c);
    cout<<c;
    while(file)
    {
        file.get(c);
        cout<<c;
    }
    return 0;
}

