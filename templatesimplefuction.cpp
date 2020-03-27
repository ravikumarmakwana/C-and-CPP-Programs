#include<iostream>
using namespace std;
template <class T1>
void swape(T1 &a,T1 &b)
{
    T1 temp;
    temp=a;
    a=b;
    b=temp;
}
template <class T>
void sortdata(T a[])
{
    for(int i=0;i<10;i++)
    {
        for(int j=i;j<10;j++)
        {
            if(a[i]>a[j])
            {
                swape(a[i],a[j]);
            }
        }
    }
}
main()
{
    int a[10];
    cout<<"Enter the 10 Numbers:";
    for(int i=0;i<10;i++)
        cin>>a[i];
    sortdata(a);
    cout<<"Sorted Manner\n";
    for(int i=0;i<10;i++)
        cout<<a[i]<<endl;

    cout<<"Enter the 10 float numbers:\n";
    float b[10];
    for(int i=0;i<10;i++)
        cin>>b[i];
    sortdata(b);
    cout<<"sorted Manner\n";
    for(int i=0;i<10;i++)
        cout<<b[i]<<endl;
    return 0;
}
