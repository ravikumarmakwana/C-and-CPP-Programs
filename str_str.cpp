#include<iostream>
using namespace std;
main()
{
    char s[100];
    char p[10];
    cout<<"Enter the Main string:";
    cin.getline(s,100);
    cout<<"Enter the sub string:";
    cin>>p;
    int k,j,c=0;
    for(int i=0;s[i]!=NULL;i++)
    {
        j=0;
        k=i;
        while(s[k]==p[j])
        {
            k++;
            j++;
            if(p[j]==NULL)
                c++;
        }
    }
    cout<<endl<<c;
    return 0;
}
