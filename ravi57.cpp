#include<iostream>
using namespace std;
void number(int p) throw(char,int,double)
{
    if(p==-1)
        throw 1;
    else if(p==0)
        throw 'f';
    else if(p==1)
        throw 9.0;
}
main()
{
    try
    {
        number(-1);
        number(0);
        number(1);
    }
    catch(int)
    {
        cout<<"int";
    }
    catch(double)
    {
        cout<<"double";
    }
    catch(char)
    {
        cout<<"char";
    }
    return 0;
}
