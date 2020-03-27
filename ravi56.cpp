#include<iostream>
#include<fstream>
using namespace std;
main(int argc,char * argv[])
{
    int a[10];
    cout<<"Enter the 10 Integer Numbers:\n";
    for(int i=0;i<10;i++)
        cin>>a[i];
    fstream file1,file2;
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
    cout<<"Read file\n";
    file1.open(argv[1],ios::in);
    file2.open(argv[2],ios::in);
    char c;
    file1.seekg(0);
    cout<<"The content of file 1:\n";
    while(file1)
    {
        file1.get(c);
        cout<<c;
    }
    file2.seekg(0);
    cout<<"\nThe content of file 2:\n";
    while(file2)
    {
        file2.get(c);
        cout<<c;
    }
    return 0;
}
