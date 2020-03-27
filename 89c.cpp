#include<iostream>
using namespace std;
template <class T>
void Min(T a[])
{
    T m=a[0];
    for(int i=0;i<10;i++)
    {
        if(m>a[i])
        {
            m=a[i];
        }
    }
    cout<<"The Min value of array:"<<m;
}
main()
{
    int a[10];
    cout<<"Enter the Int array:"<<endl;
    for(int i=0;i<10;i++)
        cin>>a[i];
    cout<<endl;
    Min(a);
    cout<<"\nEnter The Float value:"<<endl;
    float b[10];
    for(int i=0;i<10;i++)
        cin>>b[i];
    cout<<endl;
    Min(b);
    return 0;
}
