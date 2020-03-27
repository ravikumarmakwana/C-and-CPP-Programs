#include<iostream>
using namespace std;
class Weight
{
    int kg,gm;
public:
    void getdata()
    {
        cout<<"Enter the Kg:";
        cin>>kg;
        cout<<"Enter the gm:";
        cin>>gm;
    }
    void putdata()
    {
        cout<<"\nAddition of two weights is :"<<kg<<" kg, "<<gm<<" gm\n";
    }
    Weight operator +(Weight x)
    {
        Weight temp;
        temp.kg=kg+x.kg;
        temp.gm=gm+x.gm;
        if(temp.gm>=1000)
        {
            temp.kg+=temp.gm/1000;
            temp.gm=temp.gm%1000;
        }
        return temp;
    }
};
main()
{
    Weight w1;
    w1.getdata();
    Weight w2;
    w2.getdata();
    Weight w3;
    w3=w1+w2;
    w3.putdata();
    return 0;
}
