#include<iostream>
#include<fstream>
using namespace std;
main(int argc,char *argv[])
{
    int a[10];
    cout<<"Enter the 10 Numbers:";
    for(int i=0;i<10;i++)
        cin>>a[i];
    ofstream file1;
    file1.open(argv[1]);
    ofstream file2;
    file2.open(argv[2]);
    for(int i=0;i<10;i++)
    {
        if(a[i]%2==0)
            file1<<a[i]<<endl;
        else
            file2<<a[i]<<endl;
    }
    file1.close();
    file2.close();
    return 0;
}
