#include<iostream>
using namespace std;
int main()
{
    char s[100];
    char sub[10];
    cin.get(s,100);
    cin.get(sub,10);
    int counter=0;
    char c=sub[0];
    for(int i=0;s[i]!=NULL;i++)
    {
        if(c==s[i])
            counter++;
    }
    cout<<counter;
    return 0;
}
