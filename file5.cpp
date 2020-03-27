#include<iostream>
#include<fstream>
using namespace std;
main()
{
    char c;
    fstream p;
    p.open("ravi.txt",ios::app);
    cout<<p.tellg()<<endl;
    seekg(4,p);
    cout<<p.tellp();
    cout<<endl;
    return 0;
}
