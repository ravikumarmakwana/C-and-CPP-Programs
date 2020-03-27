#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;
main()
{
    ifstream fin("aaa.txt");
    char s;
    int l=0,w=0,c=0;
    fin.get(s);
    while(fin.eof()==0)
    {
        c++;
        if(s==' ' || s=='\n')
        {
            w++;
        }
        if(s=='\n')
            l++;
        fin.get(s);
    }
    cout<<"Total charters:"<<c;
    cout<<"\nTotal words:"<<w+1;
    cout<<"\nTotal Lines:"<<l;
    fin.close();
    return 0;
}


