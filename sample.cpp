#include<fstream>
#include<iostream>
using namespace std;
main()
{
    ofstream file;
    file.open( "abcd.txt");
    char s[100];
    cout<<"Write file:";
    cin.getline(s,100);
    file.write((char * ) & s, sizeof(s));
    file.close();
    cout<<"Read file"<<endl;
    char r[100];
    ifstream file1("abcd.txt");
    file1.read((char *) & r,sizeof(r));
    cout<<r;
    file.close();
    return 0;
}
