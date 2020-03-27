#include<iostream>
using namespace std;
main()
{
    int *p[3]={0,0,0};
    int a[10];
    cout<<"Enter the a:\n";
    for(int i=0;i<10;i++)
        cin>>a[i];
    int b[10];
    cout<<"Enter the b:\n";
    for(int i=0;i<10;i++)
        cin>>b[i];
    int c[10];
    cout<<"Enter the c:";
    for(int i=0;i<10;i++)
        cin>>c[i];
    for(int i=0;i<10;i++)
        *p[0]=*p[0]+a[i];
    for(int i=0;i<10;i++)
        *p[1]=*p[1]+b[i];
    for(int i=0;i<10;i++)
        *p[2]=*p[2]+c[i];

        cout<"HRLLLO";
        for(int i=0;i<3;i++)
            cout<<"\t"<<*p[i];
        return 0;
}
