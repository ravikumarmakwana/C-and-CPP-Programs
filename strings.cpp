#include<iostream>
using namespace std;
main()
{
    char s[100];
    cout<<"Enter the string:";
    cin>>s;
    int i, l=0, L = 0, p = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (l = 0; s[i] != '\0' && s[i] != ' '; i++)
        {
            l++;
        }
        if (L<l)
         {
            L = l;
            p = i - L;
        }
    }
    cout<<"longest word:"<<L<<" letters,"<<s+p;
          // L, L, s + p);

    return 0;
}
