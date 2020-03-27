#include<conio.h>
#include<cstdlib>
#include<iostream>
using namespace std;
main()
{
    int a[9][4]={0},p;
    cout<<"Enter the Total Numbers of Tickets:";
    cin>>p;
    int r,c;
    while(p>0)
    {
        A: cout<<"Row    :: ";
        cin>>r;
        cout<<"Column :: ";
        cin>>c;
        if(r-1<10 && c-1<4 && a[r-1][c-1]!=1)
            a[r-1][c-1]=1;
        else
        {
            cout<<"\nSorry ---- !\nSit not Available\n";
            cout<<"Please Select another sit  !!!\n";
            goto A;
        }
        p--;
    }
    getch();
    system("CLS");
    cout<<"! ----- Position of your Sits ----- !\n";
    cout<<"\n";
    cout<<"   1 2 3 4\n";
    cout<<"   _______\n";
    for(int i=0;i<9;i++)
    {
        cout<<i+1<<" |";
        for(int j=0;j<4;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n# ----- * Happy junery * ----- #";
    return 0;
}
