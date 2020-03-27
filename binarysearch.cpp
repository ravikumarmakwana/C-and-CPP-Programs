#include<cstdlib>
#include<iostream>
using namespace std;
main()
{
    int m,l,f;
    int a[10];
    cout<<"Enter the array:"<<endl;
    for(int i=0;i<10;i++)
        cin>>a[i];
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
    system("CLS");
    for(int i=0;i<10;i++)
        cout<<a[i]<<endl;
    cout<<"Enter the number that you fund location:";
    int n;
    cin>>n;
    l=9;
    f=0;
    while(f<l)
    {
        m=(f+l)/2;
        if(a[m]==n)
        {
            cout<<"Found"<<m;
            exit(0);
        }
        else if(n>a[m])
        {
            f=m+1;
        }
        else if(n<a[m])
        {
            l=m-1;
        }
    }
    return 0;
}
