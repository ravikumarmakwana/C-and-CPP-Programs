#include<fstream>
#include<iostream>
using namespace std;
main()
{
    fstream f1,f2,f3;
    f1.open("ravi63.txt",ios::in);
    f2.open("ravi63r.txt",ios::in);
    f3.open("ravo636.txt",ios::out);
    char c;
    f1.get(c);
    f3.put(c);
    while(f1)
    {
        f1.get(c);
        if(c==' ')
            f3.put('*');
        f3.put(c);
    }
    f1.close();
    f3.put('\n');
    f2.get(c);
    f3.put(c);
    while(f2)
    {
        f2.get(c);
        if(c==' ')
            f3.put('*');
        f3.put(c);
    }
    f3.close();
    f2.close();
    return 0;
}
