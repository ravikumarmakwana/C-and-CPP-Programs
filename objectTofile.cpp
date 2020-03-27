#include<fstream>
#include<iostream>
using namespace std;
main()
{
    fstream file("student.txt",ios::in|ios::out);
    int a[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
        file.write((char *)&a[i],sizeof(a[i]));
    }
    int b[5];
    for(int i=0;i<5;i++)
    {
        file.read((char *)&b[i],sizeof(b[i]));
    }
    cout<<"Finally array::"<<endl;
    cout<<endl;
    for(int i=0;i<5;i++)
        cout<<b[i];
    file.close();
    return 0;
}
