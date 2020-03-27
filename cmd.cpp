#include<iostream>
#include<fstream>
using namespace std;
main(int argvc,char *argv[])
{
    fstream file1,file2;
    file1.open(argv[1],ios::out);
    file2.open(argv[2],ios::out);
    int a[10];
    cout<<"Enter the 10 numbers:";
    for(int i=0;i<10;i++)
        cin>>a[i];
    for(int i=0;i<10;i++)
    {
        if(a[i]%2==0)
            file1<<a[i]<<"\t";
        else
            file2<<a[i]<<"\t";
    }
    file1.close();
    file2.close();
    file1.open(argv[1],ios::in);
    file2.open(argv[2],ios::in);
    cout<<"\nThe content of file :"<<argv[1];
    cout<<endl;
    char p;
    while(file1)
    {
        file1>>p;
        cout<<p<<" ";
    }
    cout<<endl;
    cout<<"The content of file::"<<argv[2];
    cout<<endl;
    while(file2)
    {
        file2>>p;
        cout<<p<<" ";
    }
    file1.close();
    file2.close();
    return 0;
}
