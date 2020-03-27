#include<iostream>
using namespace std;
main()
{
    int c;
    for(int a=1;a<=100;a++)
    {
        for(int b=2;b<a;b++)
        {
            if(a%b==0)
            {
                c=1;
                break;
            }
            else
                c=0;
        }
    if(c==0)
        cout<<a<<" ";
    }
    return 0;
}
