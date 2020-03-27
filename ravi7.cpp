#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<ctime>
#include<dos.h>
#include<windows.h>
using namespace std;
main()
{
    int s;
    while(1)
    {
        srand(time(0));
        cout<<"Ravi";
        if(kbhit())
            exit(0);
    }
    return 0;
}
