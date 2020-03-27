#include<iostream>
#include<dos.h>
#include<windows.h>
using namespace std;
int main()
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<3;j++)
        {
            Beep(750,300);
        }
        Beep(0,2000);
    }
    return 0;
}
