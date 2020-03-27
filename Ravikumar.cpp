#include<iostream>
#include<fstream>
using namespace std;
main()
{
    char s;
    ifstream file("Ravikumar.cpp");
    while(!file.eof())
    {
        file.get(s);
        cout<<s;
    }
    return 0;
}
