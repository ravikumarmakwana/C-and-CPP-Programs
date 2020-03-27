#include<iostream>
using namespace std;
main()
{
    int *p=new int[10];
    cout<<"Enter the 10 Numbers:";
    for(int i=0;i<10;i++)
        cin>>p[i];
    cout<<"\nDisplay\n";
    for(int i=0;i<10;i++)
        cout<<p[i]<<" ";
    cout<<endl;

    p=new int[10];
    cout<<"Enter the 10 Numbers:";
    for(int i=10;i<20;i++)
        cin>>p[i];
    cout<<"\nDisplay\n";
    for(int i=0;i<20;i++)
        cout<<p[i]<<" ";

    return 0;
}
