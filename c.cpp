#include<iostream>
#include<stdlib.h>
#include<dos.h>
#include<windows.h>
using namespace std;
main()
{
    cout<<"Loading";
    for(int i=0;i<10;i++)
    {
        delay(1000);
        cout<<".";
    }
    return 0;
}

