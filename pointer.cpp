#include<fstream>
#include<iostream>
using namespace std;
main()
{
    fstream fout("kumar.txt",ios::app);
    char s;
    int p,l;
    cout<<"Enter the string:";
    cin>>s;
    while(s!='-1')
    {
        fout<<s;
        cin>>s;
    }
    cout<<endl;
    cout<<fout.tellp();
    cout<<fout.tellg();
    fout.close();
    return 0;
}
