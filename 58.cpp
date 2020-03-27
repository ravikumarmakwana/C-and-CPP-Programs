#include<iostream>
using namespace std ;
struct movies
{
    int a[10]={2,3,4,1,5,2,3,3,7,2};
    char mov[10]={'A','B','C','D','E','F','G','H','I','J'};
}s;
void ways(int n,char m[],int t[],int no)
{
    if(n==0)
    {
        m[no]='\0';
        char r[100];
        int j=0,c;
        for(int i=0;m[i]!=NULL;i++)
        {
            if(j==0)
            {
                r[j]=m[i];
                j++;
            }
            else
            {
                for(int k=0;r[k]!=NULL;k++)
                {
                    if(r[k]!=m[i])
                        c=0;
                    else
                    {
                        c=1;
                        break;
                    }
                }
                if(c==0)
                {
                    r[j]=m[i];
                    j++;
                for(int i=0;r[i]!=NULL;i++)
            cout<<r[i]<<" "/*<t[i]*/<<"\t";
        cout<<endl;
            }
        }
        r[j]='\0';
    }

}
    for(int i=0;i<10;i++)
    {
            if(n>=s.a[i])
            {
                m[no]=s.mov[i];
                t[no]=s.a[i];
                ways(n-s.a[i],m,t,no+1);
            }
    }
}
void print(int n)
{
    char m[n];
    int t[n];
    ways(n,m,t,0);
    cout<<endl;
}
main()
{
    int t;
    cout<<"Enter the Flying Time::";
    cin>>t;
    cout<<"Total Possible movies :\n";
    print(t);
    return 0;
}
