#include<iostream>
using namespace std;
template <class T>
void Bubble_sort(T *a)
{
    T temp;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(a[j]>a[j+1])
            {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
        }
    }
}
main()
{
    int a[10];
    float b[10];
    cout<<"Enter the 10 Int Numbers:";
    for(int i=0;i<10;i++)
        cin>>a[i];
    Bubble_sort(a);
    cout<<"Bubble sort\n";
    for(int i=0;i<10;i++)
        cout<<a[i]<<endl;
    Bubble_sort(b);
    cout<<endl;
    cout<<"Enter the 10 Float numbers:";
    for(int i=0;i<10;i++)
        cin>>b[i];
    cout<<endl;
    Bubble_sort(b);
    cout<<"Bubble sort\n";
    for(int i=0;i<10;i++)
        cout<<b[i]<<endl;
    return 0;
}
