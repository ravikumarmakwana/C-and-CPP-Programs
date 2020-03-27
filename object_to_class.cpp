#include<fstream>
#include<iostream>
using namespace std;
class play
{
    int age;
    char name[30];
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
    }
};
main()
{
    fstream file;
    file.open("object-class.txt",ios::in|ios::out|ios::binary);
    play p,s;
    p.getdata();
    file.write((char *)&p,sizeof(p));
    file.read((char *)&s,sizeof(s));
    s.putdata();
    file.close();
    return 0;
}
