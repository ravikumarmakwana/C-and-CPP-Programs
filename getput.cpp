#include<iomanip>
#include<cmath>
#include<iostream>
using namespace std;
main()
{
    float sum=0;
    cout<<"Square of 1 to 100 Numbers\n";
    cout<<"Number\tSquare\n";
    for(int i=1;i<=1000000;i++)
        cout<<i<<"\t"<<setw(10)<<setfill('*')<<sqrt(i)<<endl;
    return 0;
}
