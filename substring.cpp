#include<iostream>
using namespace std;
main()
{
    char s[100];
    char a[10];
    cout<<"Enter the Main string:";
    cin.getline(s,100);
    cout<<"Enter the sub string:";
    cin>>a;
    int z=0;
    int i=0,j=0,k,temp;

    while(s[i]!=NULL)
    {
        k=i;
        j=0;
        if(s[k]==a[j])
        {
            while(a[j]!=NULL &&s[k]==a[j])
            {
                j++;
                k++;
                if(a[j]==NULL)
                    z++;
            }
        }
        i++;
    }
    cout<<z;
    return 0;
}
