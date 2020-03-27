#include<fstream>
#include<iostream>
using namespace std;
main()
{
    ifstream fin("Sample5.txt");
    char s;
    int l=0;
    int w=0,c=0;
    while(fin)
    {
        fin.get(s);
            c++;
        if(s==' ' || s== '\n')
            w++;
        if(s=='\n')
            {
                l++;
            }
    }
    cout<<"Total lines:"<<l+1<<endl;
    cout<<"Total words:"<<w+1<<endl;
    cout<<"Total Characters:"<<c;
    fin.close();
    return 0;
}
