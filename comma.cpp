#include<cmath>
#include<ctime>
#include<cstdio>
#include<iostream>
using namespace std;
main()
{
    time_t T=time(NULL);
    tm* timeptr=localtime(&T);
    cout<<timeptr->tm_hour;
    return 0;
}
