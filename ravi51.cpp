#include<iostream>
using namespace std;
main()
{
    int c=0;
    char s;
    cout<<"Enter the string:";
    cin.get(s);
    while(s!='\n')
    {
        cout.put(s);
        c++;
        cin.get(s);
    }
    cout<<"\nThe Number of Characters:"<<c;
    return 0;
}
