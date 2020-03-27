#include<iostream>
using namespace std;
main()
{
    char s[100];
    cout<<"Enter the String :";
    cin.getline(s,100);
    cout<<"Character\tASCII Code\n";
    for(int i=0;s[i]!=NULL;i++)
    {
        cout<<s[i]<<"\t"<<(int)s[i]<<endl;
    }
    return 0;
}
