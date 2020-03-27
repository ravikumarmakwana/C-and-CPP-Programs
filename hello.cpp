#include<iostream>
#include<fstream>
using namespace std;
class hello
{
    int age;
    string name;
public:
    void getdata()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the age:";
        cin>>age;
    }
    void putdata()
    {
        cout<<name<<age;
        cout<<endl;
    }
};
main()
{
    fstream file("hello.txt",ios::out);
    hello l;
    l.getdata();
    file.write((char *)&l,sizeof(l));


    fstream file1("hello.txt",ios::in);
    file1.read((char *)&l,sizeof(l));
    l.putdata();
    file1.close();

    l.getdata();
    fstream file2("hello.txt",ios::out);
    file2.write((char *)&l,sizeof(l));
    file2.close();
    fstream file3("hello.txt",ios::in);
    file3.read((char *)&l,sizeof(l));
    l.putdata();
    file3.close();
    file.close();
    return 0;
}
