#include<conio.h>
#include<iostream>
using namespace std;
main()
{
    int l,no;
    cout<<"Enter the number:";
    cin>>no;
    for(int i=0;i<no;i++)
    {
        for(int j=no;j>=i;j--)
            cout<<" ";
        for(int j=0;j<=i;j++)
        {
            if(j==0||i==0)
                l=1;
            else
                l=l*(i-j+1)/j;
            cout<<l<<" ";
        }
        cout<<endl;
    }
    return 0;
}
