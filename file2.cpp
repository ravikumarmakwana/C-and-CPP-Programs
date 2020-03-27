#include<iostream>
#include<fstream>
using namespace std;
main()
{
    ofstream fout("bbb.txt");
    cout<<"Enter the line:";
    char c;
    cin.get(c);
    while(c!='\n')
    {
        fout<<c;
        cin.get(c);
    }
    fout.close();
    ifstream fin("bbb.txt");
    cout<<"\n";
    cout<<"Line:\n";
    fin>>c;
    cout<<c;
    while(c!='\0')
    {
        fin>>c;
        cout<<c;
    }
    fin.close();
    return 0;
}
