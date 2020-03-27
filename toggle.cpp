#include<iostream>
using namespace std;
main()
{
    char s[100];
    cout<<"Enter the a:";
    cin>>s;
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]>='a' && s[i]<='z')
            s[i]=(char)(s[i]-32);
        else
            s[i]=(char)(s[i]+32);
    }
    cout<<endl;
    cout<<"Toggle String \n";
    cout<<s<<endl;
    return 0;
}
