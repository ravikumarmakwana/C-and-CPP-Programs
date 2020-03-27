#include<iostream>
#include<windows.h>
using namespace std;
main()
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<3;j++)
            Beep(300,200);
        Beep(0,1000);
    }
    return 0;
}
