#include<iostream>
using namespace std;
void sortdata(int *p)
{
    int temp;
    for(int i=0;i<10;i++)
    {
        for(int j=i;j<10;j++)
        {
            if(p[i]>=p[j])
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
    int a[10];
    cout<<"Enter the 10 interger values::";
    for(int i=0;i<10;i++)
        cin>>a[i];
    int *p=a;
    cout<<endl;
    sortdata(p);
    for(int i=0;i<10;i++)
        cout<<a[i]<<endl;
    return 0;
}
