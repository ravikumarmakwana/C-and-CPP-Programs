#include<iostream>
#include<fstream>
using namespace std;
main()
{
    fstream fin("Sample11.txt",ios::in);
    fstream fout("Sample12.txt",ios::out);
    char c;
    while(fin)
    {
        fin.get(c);
        if(c== ' ')
            c=',';
        fout.put(c);
    }
    fin.close();
    fout.close();
    return 0;
}
