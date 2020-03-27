#include<iostream>
using namespace std;
int n=5;
int V[5];
int N[5][5]={
                {100,1,100,2,4},
                {1,100,1,5,100},
                {100,1,100,1,100},
                {2,5,1,100,1},
                {4,100,100,100,1}
            };
int Find(int i)
{
    while(V[i]!=i)
        i=V[i];
    return i;
}
void Merge(int i,int j)
{
    int a=Find(i);
    int b=Find(j);
    V[a]=b;
}
void Kruskal()
{
    int mincost=0;
    for(int i=0;i<n;i++)
        V[i]=i;
    int m=100;
    int e=0,u,v;
    while(e<n-1)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(Find(i)!=Find(j) && m>N[i][j])
                {
                    m=N[i][j];
                    u=i;
                    v=j;
                }
            }
        }
        Merge(u,v);
        mincost+=m;
        e++;
    }
    cout<<mincost;
}
main()
{
    int n;
    Kruskal();
    return 0;
}
