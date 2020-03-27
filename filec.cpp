#include<iostream>
#include<fstream>
using namespace std;
main()
{
    char s[100];
    fstream file;
    file.open("item.txt",ios::in);
    file.getline(s,100);
    cout<<s;
    file.close();
    return 0;
}
