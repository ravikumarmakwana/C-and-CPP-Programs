#include<iostream>
#include<fstream>
using namespace std;
main(int argc,char *argv[])
{
    fstream file1,file2;
    int a[10];
    cout<<"Enter the 10 numbers:";
    for(int i=0;i<10;i++)
        cin>>a[i];
    file1.open(argv[1],ios::out);
    file2.open(argv[2],ios::out);
    for(int i=0;i<10;i++)
    {
        if(a[i]%2==0)
            file1<<a[i]<<" ";
        else
            file2<<a[i]<<" ";
    }
    file1.close();
    file2.close();
    return 0;
}
