#include<iostream>
using namespace std;
main()
{
    char s[100],c;
    int i=0;
    cout<<"Enter the Line of Text: "<<endl;
    c=cin.get();
    while(1)
    {
        s[i++]=c;
        c=cin.get();
        if(c=='\n')
        {
            c=cin.get();
            if(c=='\n')
                break;
        }
    }
    s[i]='\0';
    int l=i;
    for(int i=0;i<l;i++)
    {
        if(s[i]>='0' && s[i]<='9')
            cout<<s[i]<<" Digit"<<endl;
        else if(s[i]>='a' && s[i]<='z')
            cout<<s[i]<<" Small Letters"<<endl;
        else if(s[i]>='A' && s[i]<='Z')
            cout<<s[i]<<" Capital Letter"<<endl;
        else
            cout<<s[i]<<" Others Symbol"<<endl;
    }
}
