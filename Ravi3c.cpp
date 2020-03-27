#include<iostream>
using namespace std;
main()
{
    int T,n,r,c,sr,sc;
    cin>>T;
    while(T>0)
    {
        cin>>n>>r>>c>>sr>>sc;
        char ins[n];
        cin>>ins;
        int a[r][c];
        a[sr][sc]=1;
        int i=0;
        while(ins[i]!=NULL)
        {
            if(ins[i]=='E')
            {
                if(sc+1<=c && a[sr][sc+1]!=1)
                    a[sr][sc+1]=1;
                else if (a[sr][sc+1]!=1 && sc+2<=c)
                    a[sr][sc+2]=1;
                else if (a[sr][sc+2]!=1 && sc+3 <=c)
                    a[sr][sc+3]=1;
            }
            else if(ins[i]=='W')
            {
                if(sc-1>=0 && a[sc][sc-1]!=1)
                    a[sr][sc-1]=1;
               else if(a[sr][sc-2]!=1 && sc-2>=0)
                    a[sr][sc-2]=1;
                else if(a[sr][sc-3]!=1 && sc-3>=0)
                    a[sr][sc-3]=1;
            }
            else if(ins[i]=='N')
            {
                if(sr-1>=0 && a[sr-1][sc]!=1)
                    a[sr-1][sc]=1;
                else if(a[sc-2][sc]!=1&& sr-2>=0)
                    a[sr-2][sc]=1;
                else if(a[sr-3][sc]!=1&& sr-3>=0)
                    a[sr-3][sc]=1;
            }
            else if(ins[i]=='S')
            {
                if(sr+1<=r && a[sr+1][sc]!=1)
                    a[sr+1][sc]=1;
                else if(a[sr+2][sc]!=1&& sr+2<=r)
                    a[sr+2][sc]=1;
                else if(a[sr+3][sc]!=1 &&sr+3<=r)
                    a[sr+3][sc]=1;
            }
            i++;
        }
        cout<<"\nCase ::"<<sr+1<<" "<<sc-1;
        T--;
    }
    return 0;
}
