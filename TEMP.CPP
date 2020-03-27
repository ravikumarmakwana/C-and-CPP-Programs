#include<iostream>
using namespace std;
main()
{
    char s;
    int l=0,w=0;
    int L=0;
    int k=0;
    char c[10];
    int i=0;
    while(s!='0')
    {
        cin.get(s);
        c[i]=s;
        i++;
    }
    c[i-1]='\0';
    for(i=0;c[i]!=NULL;i++)
    {
        w++;
        if(c[i]==' ' || c[i]=='\n')
        {
            if(k==0)
                k=w;
            else if (k<w)
                k=w;
        w=0;
        }
    }
    cout<<w;
    return 0;
}
