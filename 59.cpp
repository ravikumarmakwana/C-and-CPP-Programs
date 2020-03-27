#include<iostream>
using namespace std;
void sortdata(int *p)
{
    int temp;
    for(int i=0;i<10;i++)
    {
        for(int j=i;j<10;j++)
        {
            if(p[i]>p[j])
            {
                    temp=p[i];
                    p[i]=p[j];
                    p[j]=temp;
            }
        }
    }
}
main()
{
    int *p;
    int a[10];
    p=a;
    cout<<"Enter the 10 Integer value:";
    cout<<"\n";
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    sortdata(p);
    cout<<"Sort_data:\n";
    for(int i=0;i<10;i++)
    {
        cout<<*p<<endl;
        p++;
    }
    return 0;
}
