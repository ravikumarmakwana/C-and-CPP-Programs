#include<iostream>
using namespace std;
main()
{
    int a[10];
    int s,l;
    cout<<"Enter the 10 integer Numbers:"<<endl;
    for(int i=0;i<10;i++)
        cin>>a[i];
    s=l=a[0];
    for(int i=0;i<10;i++)
    {
        if(s>a[i])
            s=a[i];
        if(l<a[i])
            l=a[i];
    }
    cout<<"\nMaximum value::"<<l;
    cout<<"\nMinimum value::"<<s;
    cout<<"\nSorting of Array\n";
    for(int i=0;i<10;i++)
    {
        for(int j=i;j<10;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<10;i++)
        cout<<a[i]<<" ";
    return 0;
}
