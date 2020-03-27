#include<iostream>
using namespace std;
char movie[10]={'A','B','C','D','E','F','G','H','I','J'};
int movie_time[10]={1,3,1,2,1,2,1,2,1,3};
void time_to_see(int a)
{
    int l,h[10],q[10],j=0;
    int i=0,p;
    int t[10];
    for(int i=0;i<10;i++)
        t[i]=movie_time[i];
    while(i<10)
    {
        l=a;
        if(t[i]<=a)
        {
            p=i;
           A:cout<<movie[p]<<" "<<t[p]<<" ";
            l-=t[p];
            t[p]=100;
            for(int k=0;k<10;k++)
            {
                if(t[k]<=l)
                {
                    p=k;
                    goto A;
                }
            }
        cout<<endl;
        }
        for(int i=0;i<10;i++)
        t[i]=movie_time[i];
        i++;
    }
    i=0;
}
main()
{
    int t;
    cout<<"Enter the flying time ::";
    cin>>t;
    time_to_see(t);
    return 0;
}
