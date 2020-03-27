#include<iostream>
#include<fstream>
using namespace std;
class Item
{
    float price;
    char name[30];
    int quantity;
    float sum;
public:
    void putdata()
    {
        cout<<name<<"\t"<<price<<"\t"<<quantity<<"\t"<<sum;
    }
};
main()
{
    Item T;
    ifstream fin("Item.txt");
    fin.read((char *)&T,sizeof(T));
    T.putdata();
    return 0;
}
