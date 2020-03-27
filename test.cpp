#include<cstdlib>
#include<iostream>
#include<fstream>
using namespace std;
main(int argc ,char *argv[])
{
    ofstream file1,file2;
    file1.open(argv[1]);
    file2.open(argv[2]);
    int a[10];
    cout<<"Enter the 10 Numbers:";
    for(int i=0;i<10;i++)
        cin>>a[i];
    for(int i=0;i<10;i++)
    {
        if(a[i]%2==0)
            file2<<a[i]<<"\t";
        else
            file1<<a[i]<<"\t";
    }
    file1.close();
    file2.close();
    return 0;

}
