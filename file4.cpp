#include<iostream>
#include<fstream>
using namespace std;
main()
{
    fstream fin;
    fin.open("mmm.txt",ios::in);
    char s;
    int c=0,l=0,w=0;
    fin.get(s);
    cout<<s;
    while(fin)
    {
        fin.get(s);
        cout<<s;
            c++;
        if(s=='\n')
        {
            l++;
            w++;
        }
        if(s==' ')
            w++;
    }
    cout<<"\nFile Information \n";
    cout<<"Characters::"<<c;
    cout<<"\nWords::"<<w+1;
    cout<<"\nLines::"<<l+1;
    fin.close();
    return 0;
}
