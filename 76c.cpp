#include<fstream>
#include<iostream>
using namespace std;
main()
{
    ofstream fout("sample.txt");
    char s[100];
    cout<<"Read file::";
    cin.getline(s,100);
    fout.write((char *)&s,sizeof(s));
    fout.close();
    ifstream fin("sample.txt");
    char r[100];
    fin.seekg(0);
    cout<<"Write file"<<endl;
    fin.read((char *)&r,sizeof(r));
    cout<<r;
    fin.close();
    return 0;
}
