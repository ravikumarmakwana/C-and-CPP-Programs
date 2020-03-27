#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter the n:";
    cin>>n;
    int a[n];
    cout<<"Enter the colors:";
    for(int i=0;i<n;i++)
        cin>>a[i];
    int ch,c=0;
    int counter=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            ch=a[i];
            for(int j=i+1;j<n;j++)
            {
                c=0;
                if(ch==a[j])
                {
                    c=1;
                    a[j]=0;
                    counter++;
                    break;
                }
            }
            if(c==1)
                a[i]=0;
        }
    }
    cout<<counter;
    return 0;
}
