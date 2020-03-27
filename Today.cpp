#include<iostream>
using namespace std;
main()
{
    int T,n,r,c,sr,sc;
    cin>>T;
    int k=0;
    while(T>0)
    {
        cin>>n>>r>>c>>sr>>sc;
        char ins[n];
        int a[r-1][c-1]={0},i=0;
        cin>>ins;
        int R=sr-1,C=sc-1;
        a[R][C]=1;
        while(ins[i]!=NULL)
        {
            int p;
            if(ins[i]=='E')
            {
                for(p=1;a[R][C+p]==1;p++);
                    C=C+p;
                    a[R][C]=1;
            }
            else if(ins[i]=='W')
            {
                for(p=1;a[R][C-p]==1;p++);
                    C=C-p;
                    a[R][C]=1;
            }
            else if(ins[i]=='N')
            {
                for(p=1;a[R-p][C]==1;p++);
                    R=R-p;
                    a[R][C]=1;
            }
            else if(ins[i]=='S')
            {
                for(p=1;a[R+p][C]==1;p++);
                    R=R+p;
                    a[R][C]=1;
            }
            i++;
        }
        k++;
        cout<<"\nCase #"<<k<<" : "<<R+1<<" "<<C+1;
        T--;
    }
    return 0;
}
