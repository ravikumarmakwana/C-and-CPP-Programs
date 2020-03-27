#include<iostream>
using namespace std;
template <class T>
void sortdata(T a[])
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(a[j]>a[j+1])
            {
                T temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"Sorting is Done....!\n";
    for(int i=0;i<10;i++)
        cout<<a[i]<<endl;
}
main()
{
    int a[10];
    cout<<"Enter the 10 Integer Numbers:\n";
    for(int i=0;i<10;i++)
        cin>>a[i];
    sortdata(a);
    /*float p[10];
    cout<<"Enter the 10 Float Numbers:\n";
    for(int i=0;i<10;i++)
        cin>>p[i];
    sortdata(p);*/
    return 0;
}
