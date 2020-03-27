#include<iostream>
using namespace std;
main()
{
    int a[5];
    cout<<"Enter the array:";
    for(int i=0;i<5;i++)
        cin>>a[i];
    int min_i=0,max_i=0,min_value=a[0],max_value=a[0];
    for(int i=0;i<5;i++)
    {
        if(max_value<a[i])
        {
            max_value=a[i];
            max_i=i;
        }
        if(min_value>a[i])
        {
            min_value=a[i];
            min_i=i;
        }
    }
    int temp=a[min_i];
    a[min_i]=a[max_i];
    a[max_i]=temp;
    cout<<"Changing in Main Array:"<<endl;
    for(int i=0;i<5;i++)
        cout<<a[i]<<" ";
    return 0;
}
