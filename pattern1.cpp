#include<iostream>
using namespace std;
main()
{
    for(int i=1;i<=4;i++)
    {
        int c=i;
        for(int j=1;j<=i;j++)
            cout<<c--;
        cout<<endl;
    }
    return 0;
}
