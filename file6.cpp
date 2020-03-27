#include<cstdlib>
#include<iostream>
#include<fstream>
using namespace std;
main(int argc,char *argv[])
{
    fstream file1,file2;
    file1.open(argv[1],ios::out);
    file2.open(argv[2],ios::out);
    int a[10];
    cout<<"Enter the 10 Numbers:\n";
    for(int i=0;i<10;i++)
        cin>>a[i];
    for(int i=0;i<10;i++)
    {
        if(a[i]%2==0)
            file1<<a[i];
        else
            file2<<a[i];
    }
    file1.close();
    file2.close();
    system("CLS");
    char c;
    fstream even,odd;
    even.open(argv[1],ios::in);
    odd.open(argv[2],ios::in);
    cout<<"The content of Even file:\n";
    while(even)
    {
        even.get(c);
        cout<<c<<" ";
    }
    cout<<"\n\nThe content of Odd File:\n";
    while(odd)
    {
        odd.get(c);
        cout<<c<<" ";
    }
    odd.close();
    even.close();
    return 0;
}
