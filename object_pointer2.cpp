#include<iostream>
using namespace std;
#include<fstream>
class play
{
    int age;
    char name[30];
public:
    void getdata()
    {
        cin>>name>>age;
    }
    void putdata()
    {
        cout<<name<<age;
    }
};
main()
{
    play s;
    fstream file;
    file.open("object-class.txt",ios::in|ios::out);
    file.read((char *)&s,sizeof(s));
    s.putdata();
    file.close();
    return 0;
}
