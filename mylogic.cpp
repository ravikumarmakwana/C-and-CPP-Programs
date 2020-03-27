#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
main()
{
    int x[5];
    int y[5];
    cout<<"Enter the 5 Elements of X:";
    for(int i=0;i<5;i++)
        cin>>x[i];
    cout<<"Enter the 5 Elements of Y:";
    for(int i=0;i<5;i++)
        cin>>y[i];
    sort(x,x+5);
    sort(y,y+5);
    cout<<"\nDetails of X:"<<endl;
    for(int i=0;i<5;i++)
        cout<<x[i]<<" ";
    cout<<endl;
    cout<<"\nDetails of Y:"<<endl;
    for(int i=0;i<5;i++)
        cout<<y[i]<<" ";
    int z[10];
    merge(x,x+5,y,y+5,z);
    cout<<"\n\nMerging is done .....!";
    cout<<"\nMerging in Z : ";
    for(int i=0;i<10;i++)
        cout<<z[i]<<" ";
    return 0;
}
