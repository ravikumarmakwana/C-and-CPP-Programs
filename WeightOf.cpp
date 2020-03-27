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
        cout<<"Total "<<kg<<" kg,"<<gm<<" gm"<<endl;
    }
    void add(Weight w1,Weight w2)
    {
        kg=w1.kg+w2.kg;
        gm=w1.gm+w2.gm;
        if(gm>=1000)
        {
            kg+=gm/1000;
            gm%=1000;
        }
    }
};
main()
{
    Weight w1,w2,w3;
    w1.getdata();
    w2.getdata();
    w3.add(w1,w2);
    w3.putdata();
    return 0;
}
