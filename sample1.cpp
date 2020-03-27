#include<fstream>
#include<iostream>
using namespace std;
main()
{
    fstream file;
   /file.open( "abcd1.txt", ios::out);
    char s[100];
    cout<<"Write file:";
    cin.getline(s,100);
    file.write((char *) & s ,sizeof(s));
    file.close();
    cout<<"Read file"<<endl;
    char r[10];
    file.open( "abcd1.txt", ios::in);
    file.read((char *) & r,sizeof(r));
    file>>r;
    cout<<r;
    file.close();
    return 0;
}
