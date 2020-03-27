#include<iostream>
using namespace std;
main()
{
    int a=0,b=0,c=0,d=0;
    int s[10][10]={0},a1=1;
    for(int i=0;i<5;i++)
    {
        for(a=i;a<(10-i);a++)
        {
            s[i][a]=a1;
            a1++;
        }
        for(b=1+i;b<(10-i);b++)
        {
            s[b][a-1]=a1;
            a1++;
        }
        for(c=b-2;c>=(i);c--)
        {
            s[b-1][c]=a1;
            a1++;
        }
        for(d=b-1;d>(i+1);d--)
        {
            s[d-1][c+1]=a1;
            a1++;
        }
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(s[i][j]<=9)
                cout<<s[i][j]<<"   ";
            else if (s[i][j]>=10 && s[i][j]<=99)
                cout<<s[i][j]<<"  ";
            else
                cout<<s[i][j]<<" ";
        }
        cout<<endl<<endl;
    }
    return 0;
}
